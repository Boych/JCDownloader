//
//  JCTImageDownloadCell.h
//  JCDownloader
//
//  Created by ChenJianjun on 16/5/21.
//  Copyright © 2016 Joych<https://github.com/imjoych>. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString *const JCTImageDownloadCellIdentifier;

@class JCTImageDownloadItem;
@interface JCTImageDownloadCell : UITableViewCell

@property (nonatomic, strong) JCTImageDownloadItem *item;

@end
