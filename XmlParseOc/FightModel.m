//
//  FightModel.m
//  XmlParseOc
//
//  Created by Yioks-Mac on 17/2/22.
//  Copyright © 2017年 Yioks-Mac. All rights reserved.
//

#import "FightModel.h"

@implementation FightModel

- (instancetype)init
{
    self = [super init];
    if (self) {
        _nonpr_team_player = [NSMutableArray arrayWithCapacity:0];
        _player_position = [NSMutableArray arrayWithCapacity:0];
        _pr_activity = [NSMutableArray arrayWithCapacity:0];
        _pr_minutes = [NSMutableArray arrayWithCapacity:0];
        _pr_player = [NSMutableArray arrayWithCapacity:0];
        _pr_squad = [NSMutableArray arrayWithCapacity:0];
        _pr_team_player = [NSMutableArray arrayWithCapacity:0];
        _session = [[NSMutableArray alloc]init];
        _video = [NSMutableArray arrayWithCapacity:0];
    }
    return self;
}

@end
