//
//  FightPlayerUtil.h
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/10.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FightModel.h"

static NSString *hostTeamPlayerKey = @"hostTeamPlayerKey";
static NSString *guestTeamPlayerKey = @"guestTeamPlayerKey";

@interface FightPlayerUtil : NSObject

+ (NSMutableDictionary *)getEveryTeamPlayerFrom:(FightModel *)fightModel;

+ (NSInteger)getHostDefaultPlayerNum:(FightModel *)fightModel;



@end
