//
//  Player_position.h
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/6.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"

@interface Player_position : JSONModel

@property (nonatomic, copy) NSString *_isGoalkeeper;

@property (nonatomic, copy) NSString *_playerPositionId;

@property (nonatomic, copy) NSString *_playerPositionName;

@end
