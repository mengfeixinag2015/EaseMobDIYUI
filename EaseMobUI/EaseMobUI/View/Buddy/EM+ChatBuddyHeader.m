//
//  EM+ChatBuddyHeader.m
//  EaseMobUI
//
//  Created by 周玉震 on 15/8/24.
//  Copyright (c) 2015年 周玉震. All rights reserved.
//

#import "EM+ChatBuddyHeader.h"

@implementation EM_ChatBuddyHeader{
    UILabel *titleLabel;
    EM_ChatBuddyHeaderBlock _block;
}

- (instancetype)initWithReuseIdentifier:(NSString *)reuseIdentifier{
    self = [super initWithReuseIdentifier:reuseIdentifier];
    if (self) {
        titleLabel = [[UILabel alloc]init];
        titleLabel.textColor = [UIColor blackColor];
        [self.contentView addSubview:titleLabel];
        
        UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(tap:)];
        [self addGestureRecognizer:tap];
    }
    return self;
}

- (void)layoutSubviews{
    [super layoutSubviews];
    CGSize size = self.frame.size;
    titleLabel.frame = CGRectMake(15, 0, size.width, size.height);
}

- (void)setChatBuddyHeaderBlock:(EM_ChatBuddyHeaderBlock)block{
    _block = block;
}

- (void)setTitle:(NSString *)title{
    _title = title;
    titleLabel.text = _title;
}

- (void)tap:(id)sender{
    if (_block) {
        _block(self.section);
    }
}

@end