//
//  FightStateModel.h
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/13.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FightStateModel : NSObject

@property (nonatomic, copy) NSString *token;

//0未开始，1进行中，2已结束，3暂停中
@property (nonatomic, copy) NSString *fightStatus;

//0自动， 1手动
@property (nonatomic, copy) NSString *isManual;

@property (nonatomic, copy) NSString *fightStartTime;

@property (nonatomic, copy) NSString *fightPauseTime;

@property (nonatomic, copy) NSString *fightPauseSpace;

@property (nonatomic, copy) NSString *fightEndTime;
//跳过多长时间
@property (nonatomic, copy) NSString *fightSkipTime;

@end
