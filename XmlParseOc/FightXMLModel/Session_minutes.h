//
//  Session_minutes.h
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/6.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"

@interface Session_minutes : JSONModel

@property (nonatomic, copy) NSString *_activityCode;

@property (nonatomic, copy) NSString *_comment;

@property (nonatomic, copy) NSString *_playerId;

@property (nonatomic, copy) NSString *_offset;

@property (nonatomic, copy) NSString *_screenId;

@property (nonatomic, copy) NSString *_time;

@end
