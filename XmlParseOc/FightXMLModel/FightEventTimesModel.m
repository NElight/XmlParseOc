//
//  FightEventTimesModel.m
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/8.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import "FightEventTimesModel.h"
#import "Nonpr_team_player.h"

@implementation FightEventTimesModel

- (instancetype)initWithScreen:(Screen *)screen withFightCommonInfo:(FightCommonInfo *)fightCommonInfo {
    if (self = [super init]) {
//        _h_goalTime = _h_own_goalTime = _h_substituteTime = _h_substitutedTime = _h_yellow_cardTime = _h_red_cardTime = _h_injuryTime = _h_cornerTime = _h_free_kickTime = _h_penaltyTime = _h_shot_on_goalTime = _h_start_playTime = _h_stop_playTime = _h_line_upTime = 0;
//        _g_goalTime = _g_own_goalTime = _g_substituteTime = _g_substitutedTime = _g_yellow_cardTime = _g_red_cardTime = _g_injuryTime = _g_cornerTime = _g_free_kickTime = _g_penaltyTime = _g_shot_on_goalTime = _g_start_playTime = _g_stop_playTime = _g_line_upTime = 0;
        _hostEventTimeDic = [NSMutableDictionary dictionaryWithCapacity:0];
        _guestEventTimeDic = [NSMutableDictionary dictionaryWithCapacity:0];
        [self caculateAllTime:screen withCommonInfo:fightCommonInfo];
    }
    return self;
}

- (void)caculateAllTime:(Screen *)screen withCommonInfo:(FightCommonInfo*)fightCommonInfo{
    for (Pr_minutes *p in screen.pr_minutesArray) {
        
        NSString *time = [self.hostEventTimeDic objectForKey:p._activityCode];
        if (time) {
            [self.hostEventTimeDic setObject:[NSString stringWithFormat:@"%ld", [time integerValue] + 1] forKey:p._activityCode];
        }else {
            [self.hostEventTimeDic setObject:@"1" forKey:p._activityCode];
        }
    }
    
    for (Session_minutes *p in screen.session_minutesArray) {
        NSString *playerKey = p._playerId;
        Nonpr_team_player *player = [fightCommonInfo.nonpr_team_playerDic objectForKey:playerKey];
        if ([player._teamSide isEqualToString:@"Opposition"]) {
            //客队
            NSString *time = [self.guestEventTimeDic objectForKey:p._activityCode];
            if (time) {
                [self.guestEventTimeDic setObject:[NSString stringWithFormat:@"%ld", [time integerValue] + 1] forKey:p._activityCode];
            }else {
                [self.guestEventTimeDic setObject:@"1" forKey:p._activityCode];
            }
        }else {
            //主队
            NSString *time = [self.hostEventTimeDic objectForKey:p._activityCode];
            if (time) {
                [self.hostEventTimeDic setObject:[NSString stringWithFormat:@"%ld", [time integerValue] + 1] forKey:p._activityCode];
            }else {
                [self.hostEventTimeDic setObject:@"1" forKey:p._activityCode];
            }
        }
    }
}



+ (NSMutableDictionary<NSString *, NSMutableDictionary<NSString *, NSString *> *> *)sessionEventTimesWithSession:(Session *)session withFightCommonInfo:(FightCommonInfo *)fightCommonInfo{
    
    NSMutableDictionary *hostEventTimeDic = [NSMutableDictionary dictionaryWithCapacity:0];
    NSMutableDictionary *guestEventTimeDic = [NSMutableDictionary dictionaryWithCapacity:0];
    
    for (Screen *screen in session.screenArray) {
        for (Pr_minutes *p in screen.pr_minutesArray) {
            
            NSString *time = [hostEventTimeDic objectForKey:p._activityCode];
            if (time) {
                [hostEventTimeDic setObject:[NSString stringWithFormat:@"%ld", [time integerValue] + 1] forKey:p._activityCode];
            }else {
                [hostEventTimeDic setObject:@"1" forKey:p._activityCode];
            }
        }
        
        for (Session_minutes *p in screen.session_minutesArray) {
            NSString *playerKey = p._playerId;
            Nonpr_team_player *player = [fightCommonInfo.nonpr_team_playerDic objectForKey:playerKey];
            if ([player._teamSide isEqualToString:@"Opposition"]) {
                //客队
                NSString *time = [guestEventTimeDic objectForKey:p._activityCode];
                if (time) {
                    [guestEventTimeDic setObject:[NSString stringWithFormat:@"%ld", [time integerValue] + 1] forKey:p._activityCode];
                }else {
                    [guestEventTimeDic setObject:@"1" forKey:p._activityCode];
                }
            }else {
                //主队
                NSString *time = [hostEventTimeDic objectForKey:p._activityCode];
                if (time) {
                    [hostEventTimeDic setObject:[NSString stringWithFormat:@"%ld", [time integerValue] + 1] forKey:p._activityCode];
                }else {
                    [hostEventTimeDic setObject:@"1" forKey:p._activityCode];
                }
            }
        }
    }
    
    NSMutableDictionary *dic = [NSMutableDictionary dictionaryWithCapacity:2];
    
    [dic setObject:hostEventTimeDic forKey:hostEventTotalTimesKey];
    [dic setObject:guestEventTimeDic forKey:guestEventTotalTimesKey];
    
    return dic;
}

+ (NSMutableDictionary<NSString *, FightEventTimesModel*> *)everyScreenEventTimesWithSession:(Session *)session withFightCommonInfo:(FightCommonInfo *)fightCommonInfo{
    NSMutableDictionary *dic = [NSMutableDictionary dictionaryWithCapacity:0];
    for (Screen *screen in session.screenArray) {
        FightEventTimesModel *model = [[FightEventTimesModel alloc]initWithScreen:screen withFightCommonInfo:fightCommonInfo];
        [dic setObject:model forKey:screen._screenId];
    }
    return dic;
}

+ (NSMutableDictionary<NSString *, NSMutableDictionary<NSString *, NSMutableArray *> *> *)screenEventWithScreen:(Screen *)screen withFightCommonInfo:(FightCommonInfo *)fightCommonInfo{
    NSMutableDictionary *hostEventDic = [NSMutableDictionary dictionaryWithCapacity:0];
    NSMutableDictionary *guestEventDic = [NSMutableDictionary dictionaryWithCapacity:0];
    
    for (Pr_minutes *p in screen.pr_minutesArray) {
        
        NSMutableArray *eventArray = [hostEventDic objectForKey:p._activityCode];
        if (eventArray) {
            
//            FightEventModel *model = [self switchPr_minutesToFightEventModel:p];
            
            [eventArray addObject:p];
            
        }else {
            
            NSMutableArray *arr = [NSMutableArray arrayWithCapacity:0];
//            FightEventModel *model = [self switchPr_minutesToFightEventModel:p];
            
            [arr addObject:p];
            
            
            [hostEventDic setObject:arr forKey:p._activityCode];
        }
    }
    
    for (Session_minutes *p in screen.session_minutesArray) {
        NSString *playerKey = p._playerId;
        Nonpr_team_player *player = [fightCommonInfo.nonpr_team_playerDic objectForKey:playerKey];
        if ([player._teamSide isEqualToString:@"Opposition"]) {
            //客队
            NSMutableArray *eventArray = [guestEventDic objectForKey:p._activityCode];
            if (eventArray) {
//                FightEventModel *model = [self switchSession_minutesToFightEventModel:p];
                [eventArray addObject:p];
                
            }else {
                NSMutableArray *arr = [NSMutableArray arrayWithCapacity:0];
//                FightEventModel *model = [self switchSession_minutesToFightEventModel:p];
                [arr addObject:p];
                [guestEventDic setObject:arr forKey:p._activityCode];
            }
        }else {
            //主队
            NSMutableArray *eventArray = [hostEventDic objectForKey:p._activityCode];
            if (eventArray) {
//                FightEventModel *model = [self switchSession_minutesToFightEventModel:p];
                [eventArray addObject:p];
                
            }else {
                NSMutableArray *arr = [NSMutableArray arrayWithCapacity:0];
//                FightEventModel *model = [self switchSession_minutesToFightEventModel:p];
                [arr addObject:p];
                [hostEventDic setObject:arr forKey:p._activityCode];
            }
        }
    }
    
    NSMutableDictionary *dic = [NSMutableDictionary dictionaryWithCapacity:2];
    
    [dic setObject:hostEventDic forKey:hostEventTotalTimesKey];
    [dic setObject:guestEventDic forKey:guestEventTotalTimesKey];
    
    return dic;
    
}

+ (FightEventModel *)switchPr_minutesToFightEventModel:(Pr_minutes *)p {
    FightEventModel *model = [[FightEventModel alloc]init];
    model._activityCode = p._activityCode;
    model._comment = p._comment;
    model._offset = p._offset;
    model._screenId = p._screenId;
    model._playerId = p._playerId;
    model._time = p._time;
    return model;
}

+ (FightEventModel *)switchSession_minutesToFightEventModel:(Session_minutes *)p {
    FightEventModel *model = [[FightEventModel alloc]init];
    model._activityCode = p._activityCode;
    model._comment = p._comment;
    model._offset = p._offset;
    model._screenId = p._screenId;
    model._playerId = p._playerId;
    model._time = p._time;
    return model;
}

+ (NSMutableDictionary<NSString *, NSMutableDictionary *> *)everyScreenEventWithSession:(Session *)session withFightCommonInfo:(FightCommonInfo *)fightCommonInfo{
    NSMutableDictionary *dic = [NSMutableDictionary dictionaryWithCapacity:0];
    for (Screen *screen in session.screenArray) {
        NSMutableDictionary *oneScreenEventDic = [self screenEventWithScreen:screen withFightCommonInfo:fightCommonInfo];
        [dic setObject:oneScreenEventDic forKey:screen._screenId];
    }
    return dic;
}

+ (NSMutableDictionary<NSString *, NSMutableArray *> *)screenEventArrayWithScreen:(Screen *)screen withFightCommonInfo:(FightCommonInfo *)fightCommonInfo{
    NSMutableArray *hostEventArray = [NSMutableArray arrayWithCapacity:0];
    NSMutableArray *guestEventArray = [NSMutableArray arrayWithCapacity:0];
//    [hostEventArray addObjectsFromArray:screen.pr_minutesArray];
    for (Pr_minutes *p in screen.pr_minutesArray) {
        //过滤line_up事件
        if ([p._activityCode isEqualToString:@"line_up"]) {
            continue;
        }
        
        [hostEventArray addObject:p];
    }
    
    for (Session_minutes *p in screen.session_minutesArray) {
        
        //过滤line_up事件
        if ([p._activityCode isEqualToString:@"line_up"]) {
            continue;
        }
        
        //如果是开始和结束事件，两队中都要存入
        if ([p._activityCode isEqualToString:@"start_play"] || [p._activityCode isEqualToString:@"stop_play"]) {
            [hostEventArray addObject:p];
            [guestEventArray addObject:p];
            continue;
        }
        
        NSString *playerKey = p._playerId;
        Nonpr_team_player *player = [fightCommonInfo.nonpr_team_playerDic objectForKey:playerKey];
        if ([player._teamSide isEqualToString:@"Opposition"]) {
            //客队
//            FightEventModel *model = [self switchSession_minutesToFightEventModel:p];
            
            [guestEventArray addObject:p];
        }else {
            //主队
//            FightEventModel *model = [self switchSession_minutesToFightEventModel:p];
            [hostEventArray addObject:p];
        }
    }
    
    [hostEventArray sortUsingComparator:^NSComparisonResult(id  _Nonnull obj1, id  _Nonnull obj2) {
        return [[obj1 _time] floatValue] > [[obj2 _time] floatValue];
    }];
    
    [guestEventArray sortUsingComparator:^NSComparisonResult(id  _Nonnull obj1, id  _Nonnull obj2) {
        return [[obj1 _time] floatValue] > [[obj2 _time] floatValue];
    }];
    
    NSMutableDictionary *dic = [NSMutableDictionary dictionaryWithCapacity:2];
    
    [dic setObject:hostEventArray forKey:hostEventKey];
    [dic setObject:guestEventArray forKey:guestEventKey];
    
    return dic;
}

+ (NSMutableDictionary<NSString *, NSMutableArray *> *)sessionEventArrayWithSession:(Session *)session withFightCommonInfo:(FightCommonInfo *)fightCommonInfo{
    NSMutableDictionary *dic = [NSMutableDictionary dictionaryWithCapacity:0];
    NSMutableArray *hostEventArray = [NSMutableArray arrayWithCapacity:0];
    NSMutableArray *guestEventArray = [NSMutableArray arrayWithCapacity:0];
    for (Screen *screen in session.screenArray) {
        NSMutableDictionary *screenDic = [self screenEventArrayWithScreen:screen withFightCommonInfo:fightCommonInfo];
        NSMutableArray *hostScreenEventArray = [screenDic mutableArrayValueForKey:hostEventKey];
        NSMutableArray *guestScreenEventArray = [screenDic mutableArrayValueForKey:guestEventKey];
        
        [hostEventArray addObjectsFromArray:hostScreenEventArray];
        [guestEventArray addObjectsFromArray:guestScreenEventArray];
    }
    
    [dic setObject:hostEventArray forKey:hostEventKey];
    [dic setObject:guestEventArray forKey:guestEventKey];
    
    return dic;
}

//+ (NSMutableDictionary *)screenStartStopTimeInSession:(Session *)session withFightCommonInfo:(FightCommonInfo *)fightCommonInfo {
//    
//}


+ (NSMutableArray *)sessionEventsListFromSession:(Session *)session{
    NSMutableArray *arr = [NSMutableArray arrayWithCapacity:0];
    for (Screen *screen in session.screenArray) {
        NSMutableArray *screenEventArray = [self screenEventsListFromScreen:screen];
        [arr addObjectsFromArray:screenEventArray];
    }
    return arr;
}

+ (NSMutableArray *)screenEventsListFromScreen:(Screen *)screen{
    NSMutableArray *eventArray = [NSMutableArray arrayWithCapacity:0];
    for (Pr_minutes *p in screen.pr_minutesArray) {
        //过滤line_up事件
        if ([p._activityCode isEqualToString:@"line_up"]) {
            continue;
        }
        
        [eventArray addObject:p];
    }
    
    for (Session_minutes *p in screen.session_minutesArray) {
        
        //过滤line_up事件
        if ([p._activityCode isEqualToString:@"line_up"]) {
            continue;
        }
        
        [eventArray addObject:p];
        
    }
    
    [eventArray sortUsingComparator:^NSComparisonResult(id  _Nonnull obj1, id  _Nonnull obj2) {
        return [[obj1 _time] floatValue] > [[obj2 _time] floatValue];
    }];
    
    return eventArray;
}


@end
