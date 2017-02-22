//
//  FightCommonInfo.h
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/8.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Pr_activity.h"
#import "Pr_team_player.h"
#import "Nonpr_team_player.h"
#import "Player_position.h"
#import "Pr_squad.h"
#import "Pr_player.h"

@interface FightCommonInfo : NSObject

@property (nonatomic, strong) NSMutableDictionary<NSString*, Pr_activity*> *pr_activityDic;

@property (nonatomic, strong) NSMutableDictionary<NSString*, Pr_team_player*> *pr_team_playerDic;

@property (nonatomic, strong) NSMutableDictionary<NSString*, Nonpr_team_player*> *nonpr_team_playerDic;

@property (nonatomic, strong) NSMutableDictionary<NSString*, Player_position*> *player_positionDic;

@property (nonatomic, strong) NSMutableDictionary<NSString*, Pr_squad*> *pr_squadDic;

@property (nonatomic, strong) NSMutableDictionary<NSString*, Pr_player*> *pr_playerDic;

@property (nonatomic, strong) NSMutableArray *hostOnFieldPlayerArray;
@property (nonatomic, strong) NSMutableArray *guestOnFieldPlayerArray;

//存入可用的机器人标号
@property (nonatomic, strong) NSMutableArray *hostTeamDefaultPlayerNumArray;
@property (nonatomic, strong) NSMutableArray *guestTeamDefaultPlayerNumArray;

@end
