//
//  Pr_activity.m
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/6.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import "Pr_activity.h"

@implementation Pr_activity

- (void)set_activityCode:(NSString *)_activityCode {
    __activityCode = _activityCode;
    __activityCNName = [self getTitleFromActivityCode:_activityCode];
}

- (NSString *)getTitleFromActivityCode:(NSString *)activityCode {
    NSString *str = nil;
    
    if ([activityCode isEqualToString:@"goal"]) {
        str = @"进球";
    }else if ([activityCode isEqualToString:@"own_goal"]) {
        str = @"乌龙球";
    }else if ([activityCode isEqualToString:@"own_goal"]) {
        str = @"乌龙球";
    }else if ([activityCode isEqualToString:@"substitute"]) {
        str = @"替换上场";
    }else if ([activityCode isEqualToString:@"substituted"]) {
        str = @"替换下场";
    }else if ([activityCode isEqualToString:@"yellow_card"]) {
        str = @"黄牌";
    }else if ([activityCode isEqualToString:@"red_card"]) {
        str = @"红牌";
    }else if ([activityCode isEqualToString:@"injury"]) {
        str = @"受伤";
    }else if ([activityCode isEqualToString:@"corner"]) {
        str = @"角球";
    }else if ([activityCode isEqualToString:@"free_kick"]) {
        str = @"任意球";
    }else if ([activityCode isEqualToString:@"penalty"]) {
        str = @"点球";
    }else if ([activityCode isEqualToString:@"shot_on_goal"]) {
        str = @"射正球门";
    }else if ([activityCode isEqualToString:@"start_play"]) {
        str = @"比赛开始";
    }else if ([activityCode isEqualToString:@"stop_play"]) {
        str = @"比赛结束";
    }else if ([activityCode isEqualToString:@"line_up"]) {
        str = @"首发阵容";
    }
    
    return str;
}

@end
