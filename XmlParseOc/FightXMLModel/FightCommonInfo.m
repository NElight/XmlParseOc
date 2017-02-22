//
//  FightCommonInfo.m
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/8.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import "FightCommonInfo.h"

@implementation FightCommonInfo

- (instancetype)init
{
    self = [super init];
    if (self) {
        _pr_squadDic = [NSMutableDictionary dictionaryWithCapacity:0];
        _pr_activityDic = [NSMutableDictionary dictionaryWithCapacity:0];
        _player_positionDic = [NSMutableDictionary dictionaryWithCapacity:0];
        _pr_team_playerDic = [NSMutableDictionary dictionaryWithCapacity:0];
        _nonpr_team_playerDic = [NSMutableDictionary dictionaryWithCapacity:0];
        _pr_playerDic = [NSMutableDictionary dictionaryWithCapacity:0];
        _hostOnFieldPlayerArray = [NSMutableArray arrayWithCapacity:0];
        _guestOnFieldPlayerArray = [NSMutableArray arrayWithCapacity:0];
        _hostTeamDefaultPlayerNumArray = [NSMutableArray arrayWithCapacity:0];
        _guestTeamDefaultPlayerNumArray = [NSMutableArray arrayWithCapacity:0];
    }
    return self;
}

@end
