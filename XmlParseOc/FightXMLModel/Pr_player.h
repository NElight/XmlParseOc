//
//  Pr_player.h
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/6.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"

@interface Pr_player : JSONModel

@property (nonatomic, copy) NSString *_familyName;

@property (nonatomic, copy) NSString *_givenName;

@property (nonatomic, copy) NSString *_prPlayerId;

@property (nonatomic, copy) NSString *_prPlayerNumber;

@end
