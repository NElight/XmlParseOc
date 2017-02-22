//
//  Pr_team_player.h
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/6.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"

@interface Pr_team_player : JSONModel

@property (nonatomic, copy) NSString *_lastTeam;

@property (nonatomic, copy) NSString *_playerNumber;

@property (nonatomic, copy) NSString *_playerPositionId;

@property (nonatomic, copy) NSString *_poseId;

@property (nonatomic, copy) NSString *_prPlayerId;

@property (nonatomic, copy) NSString *_sortOrder;

@property (nonatomic, copy) NSString *_squadId;

@property (nonatomic, copy) NSString *_squadMember;

@end
