//
//  Nonpr_team_player.h
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/6.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"

@interface Nonpr_team_player : JSONModel

@property (nonatomic, copy) NSString *_familyName;

@property (nonatomic, copy) NSString *_givenName;

@property (nonatomic, copy) NSString *_nonprPlayerId;

@property (nonatomic, copy) NSString *_playerNumber;

@property (nonatomic, copy) NSString *_playerPositionId;

@property (nonatomic, copy) NSString *_poseId;

@property (nonatomic, copy) NSString *_sortOrder;

@property (nonatomic, copy) NSString *_teamSide;

@end
