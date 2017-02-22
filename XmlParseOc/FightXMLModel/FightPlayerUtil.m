//
//  FightPlayerUtil.m
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/10.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import "FightPlayerUtil.h"

@implementation FightPlayerUtil

+ (NSMutableDictionary *)getEveryTeamPlayerFrom:(FightModel *)fightModel {
    NSMutableArray *hostPlayerArray = [NSMutableArray arrayWithCapacity:0];
    NSMutableArray *guestPlayerArray = [NSMutableArray arrayWithCapacity:0];
    
    [hostPlayerArray addObjectsFromArray:fightModel.pr_team_playerArray];
    for (Nonpr_team_player *p in fightModel.nonpr_team_playerArray) {
        if ([p._teamSide isEqualToString:@"Opposition"]) {
            //客队
            [guestPlayerArray addObject:p];
        }else {
            //主队
            [hostPlayerArray addObject:p];
        }
    }
    
    NSMutableDictionary *dic = [NSMutableDictionary dictionaryWithCapacity:2];
    
    [dic setObject:hostPlayerArray forKey:hostTeamPlayerKey];
    [dic setObject:guestPlayerArray forKey:guestTeamPlayerKey];
    
    return dic;
    
}

+ (NSInteger)getHostDefaultPlayerNum:(FightModel *)fightModel {
    NSInteger hostDefaultPlayerNum = 0;
    for (Nonpr_team_player *p in fightModel.nonpr_team_playerArray) {
        if ([p._teamSide isEqualToString:@"Opposition"]) {
            //客队
            
        }else {
            //主队
            hostDefaultPlayerNum ++;
        }
    }
    return hostDefaultPlayerNum;
}

@end
