//
//  EM+ChatFileUtils.h
//  EaseMobUI
//
//  Created by 周玉震 on 15/8/6.
//  Copyright (c) 2015年 周玉震. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kDocumentFolder         [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]
#define kCacheFolder            [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) objectAtIndex:0]

//根目录
#define kChatFolderName         @"EM_Chat_UI"
#define kChatFolderPath         [NSString stringWithFormat:@"%@/%@",kDocumentFolder,kChatFolderName]

//数据库
#define kChatDBFolderName         @"EM_Chat_DB"
#define kChatDBFolderPath         [NSString stringWithFormat:@"%@/%@",kChatFolderPath,kChatDBFolderName]

//Chat DB
#define kChatDBChatName           @"EM_Chat.data"
#define kChatDBChatPath           [NSString stringWithFormat:@"%@/%@",kChatDBFolderPath,kChatDBChatName]

//File DB
#define kChatDBFileName           @"EM_File.data"
#define kChatDBFilePath           [NSString stringWithFormat:@"%@/%@",kChatDBFolderPath,kChatDBFileName]

//文件
#define kChatFileFolderName     @"EM_Chat_File"
#define kChatFileFolderPath     [NSString stringWithFormat:@"%@/%@",kChatFolderPath,kChatFileFolderName]

//文档
#define kChatFileDocumentFolderName    @"Document"
#define kChatFileDocumentFolderPath    [NSString stringWithFormat:@"%@/%@",kChatFileFolderPath,kChatFileDocumentFolderName]

//视频
#define kChatFileVideoFolderName    @"Video"
#define kChatFileVideoFolderPath    [NSString stringWithFormat:@"%@/%@",kChatFileFolderPath,kChatFileVideoFolderName]

//图片
#define kChatFileImageFolderName    @"Image"
#define kChatFileImageFolderPath    [NSString stringWithFormat:@"%@/%@",kChatFileFolderPath,kChatFileImageFolderName]

//音频
#define kChatFileAudioFolderName    @"Audio"
#define kChatFileAudioFolderPath    [NSString stringWithFormat:@"%@/%@",kChatFileFolderPath,kChatFileAudioFolderName]

//其他
#define kChatFileOtherFolderName    @"Other"
#define kChatFileOtherFolderPath    [NSString stringWithFormat:@"%@/%@",kChatFileFolderPath,kChatFileOtherFolderName]

extern NSString * const kFolderTitle;
extern NSString * const kFolderName;
extern NSString * const kFolderPath;
extern NSString * const kFolderContent;

@interface EM_ChatFileUtils : NSObject

+ (BOOL)initialize;

+ (BOOL)createFolderWithPath:(NSString *)path;

+ (NSArray *)folderArray;

+ (NSArray *)contentsOfDirectoryAtPath:(NSString *)path;

@end