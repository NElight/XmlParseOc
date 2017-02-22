//
//  Video.h
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/6.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"

@interface Video : JSONModel

@property (nonatomic, copy) NSString *_sortOrder;

@property (nonatomic, copy) NSString *_thumbnailLocation;

@property (nonatomic, copy) NSString *_videoCode;

@property (nonatomic, copy) NSString *_videoDuration;

@property (nonatomic, copy) NSString *_videoSource;

@property (nonatomic, copy) NSString *_videoTitle;

@end
