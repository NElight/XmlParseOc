//
//  FightModel.m
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/6.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import "FightModel.h"

@implementation FightModel

- (instancetype)init
{
    self = [super init];
    if (self) {
        _fightCommonInfo = [[FightCommonInfo alloc]init];
        _nonpr_team_playerArray = [NSMutableArray arrayWithCapacity:0];
        _player_positionArray = [NSMutableArray arrayWithCapacity:0];
        _pr_activityArray = [NSMutableArray arrayWithCapacity:0];
        _pr_minutesArray = [NSMutableArray arrayWithCapacity:0];
        _pr_playerArray = [NSMutableArray arrayWithCapacity:0];
        _pr_squadArray = [NSMutableArray arrayWithCapacity:0];
        _pr_team_playerArray = [NSMutableArray arrayWithCapacity:0];
        _session = [[Session alloc]init];
        _videoArray = [NSMutableArray arrayWithCapacity:0];
    }
    return self;
}

- (BOOL)minuteIsHost:(id)minutes {
    if ([minutes isMemberOfClass:[Session_minutes class]]) {
        
        Nonpr_team_player *p = [self.fightCommonInfo.nonpr_team_playerDic objectForKey:[minutes _playerId]];
        if ([p._teamSide isEqualToString:@"Opposition"]) {
            return NO;
        }else {
            return YES;
        }
    }else {
        return YES;
    }
}

@end
