//
//  FightEventModel.h
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/9.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import "JSONModel.h"

@interface FightEventModel : JSONModel

@property (nonatomic, copy) NSString *_activityCode;

@property (nonatomic, copy) NSString *_comment;

@property (nonatomic, copy) NSString *_offset;

@property (nonatomic, copy) NSString *_screenId;

@property (nonatomic, copy) NSString *_playerId;

@property (nonatomic, copy) NSString *_time;

@end
