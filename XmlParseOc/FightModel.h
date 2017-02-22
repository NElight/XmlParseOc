//
//  FightModel.h
//  XmlParseOc
//
//  Created by Yioks-Mac on 17/2/22.
//  Copyright © 2017年 Yioks-Mac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FightModel : NSObject

@property (nonatomic, copy) NSString * _fixtureId;

@property (nonatomic, copy) NSString * _usePlayerRecords;

@property (nonatomic, strong) NSMutableArray *nonpr_team_player;

@property (nonatomic, strong) NSMutableArray * player_position;

@property (nonatomic, strong) NSMutableArray * pr_activity;

@property (nonatomic, strong) NSMutableArray * pr_minutes;

@property (nonatomic, strong) NSMutableArray * pr_player;

@property (nonatomic, strong) NSMutableArray * pr_squad;

@property (nonatomic, strong) NSMutableArray * pr_team_player;

//@property (nonatomic, strong) NSMutableArray<Session *> * sessionArray;

@property (nonatomic, strong) NSMutableArray *session;

@property (nonatomic, strong) NSMutableArray * video;

@end
