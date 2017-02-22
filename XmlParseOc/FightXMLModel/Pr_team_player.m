//
//  Pr_team_player.m
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/6.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import "Pr_team_player.h"
#import "Pr_player.h"

@implementation Pr_team_player

- (BOOL)isEqual:(id)object {
    if ([object isMemberOfClass:[Pr_player class]]) {
        if ([self._prPlayerId isEqualToString:[object _prPlayerId]]) {
            return YES;
        }else {
            return NO;
        }
    }else {
        return [super isEqual:object];
    }
}

-(NSUInteger)hash {
    return [self._prPlayerId hash];
}

@end
