//
//  FightModel.h
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/6.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Nonpr_team_player.h"
#import "Player_position.h"
#import "Pr_activity.h"
#import "Pr_minutes.h"
#import "Pr_player.h"
#import "Pr_squad.h"
#import "Pr_team_player.h"
#import "Session.h"
#import "Video.h"
#import "JSONModel.h"
#import "FightCommonInfo.h"

@interface FightModel : JSONModel

@property (nonatomic, copy) NSString * _fixtureId;

@property (nonatomic, copy) NSString * _usePlayerRecords;

@property (nonatomic, strong) NSMutableArray<Nonpr_team_player *> *nonpr_team_playerArray;

@property (nonatomic, strong) NSMutableArray<Player_position *> * player_positionArray;

@property (nonatomic, strong) NSMutableArray<Pr_activity *> * pr_activityArray;

@property (nonatomic, strong) NSMutableArray<Pr_minutes *> * pr_minutesArray;

@property (nonatomic, strong) NSMutableArray<Pr_player *> * pr_playerArray;

@property (nonatomic, strong) NSMutableArray<Pr_squad *> * pr_squadArray;

@property (nonatomic, strong) NSMutableArray<Pr_team_player *> * pr_team_playerArray;

//@property (nonatomic, strong) NSMutableArray<Session *> * sessionArray;

@property (nonatomic, strong) Session *session;

@property (nonatomic, strong) NSMutableArray<Video *> * videoArray;

@property (nonatomic, strong) FightCommonInfo *fightCommonInfo;

- (BOOL)minuteIsHost:(id)minutes;








@end
