//
//  FightEventTimesModel.h
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/8.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Screen.h"
#import "FightCommonInfo.h"
#import "Session.h"
#import "FightEventModel.h"

static NSString *hostEventTotalTimesKey = @"hostEventTotalTimesKey";
static NSString *guestEventTotalTimesKey = @"guestEventTotalTimesKey";

static NSString *hostEventKey = @"hostEventKey";
static NSString *guestEventKey = @"guestEventKey";

static NSString *screenStartTimeKey = @"";


@interface FightEventTimesModel : NSObject

//@property (nonatomic) NSInteger h_goalTime;
//
//@property (nonatomic) NSInteger h_own_goalTime;
//
//@property (nonatomic) NSInteger h_substituteTime;
//
//@property (nonatomic) NSInteger h_substitutedTime;
//
//@property (nonatomic) NSInteger h_yellow_cardTime;
//
//@property (nonatomic) NSInteger h_red_cardTime;
//
//@property (nonatomic) NSInteger h_injuryTime;
//
//@property (nonatomic) NSInteger h_cornerTime;
//
//@property (nonatomic) NSInteger h_free_kickTime;
//
//@property (nonatomic) NSInteger h_penaltyTime;
//
//@property (nonatomic) NSInteger h_shot_on_goalTime;
//
//@property (nonatomic) NSInteger h_start_playTime;
//
//@property (nonatomic) NSInteger h_stop_playTime;
//
//@property (nonatomic) NSInteger h_line_upTime;
//
//@property (nonatomic) NSInteger g_goalTime;
//
//@property (nonatomic) NSInteger g_own_goalTime;
//
//@property (nonatomic) NSInteger g_substituteTime;
//
//@property (nonatomic) NSInteger g_substitutedTime;
//
//@property (nonatomic) NSInteger g_yellow_cardTime;
//
//@property (nonatomic) NSInteger g_red_cardTime;
//
//@property (nonatomic) NSInteger g_injuryTime;
//
//@property (nonatomic) NSInteger g_cornerTime;
//
//@property (nonatomic) NSInteger g_free_kickTime;
//
//@property (nonatomic) NSInteger g_penaltyTime;
//
//@property (nonatomic) NSInteger g_shot_on_goalTime;
//
//@property (nonatomic) NSInteger g_start_playTime;
//
//@property (nonatomic) NSInteger g_stop_playTime;
//
//@property (nonatomic) NSInteger g_line_upTime;


@property (nonatomic, strong) NSMutableDictionary<NSString *, NSString *> *hostEventTimeDic;
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSString *> *guestEventTimeDic;
//返回某个时间段主客队事件次数的字典
- (instancetype) initWithScreen:(Screen *)screen withFightCommonInfo:(FightCommonInfo*)fightCommonInfo;
//返回session各事件总次数的字典
+ (NSMutableDictionary<NSString *, NSMutableDictionary<NSString *, NSString *> *> *)sessionEventTimesWithSession:(Session *)session withFightCommonInfo:(FightCommonInfo *)fightCommonInfo;
//返回各个时间段事件次数的字典
+ (NSMutableDictionary<NSString *, FightEventTimesModel*> *)everyScreenEventTimesWithSession:(Session *)session withFightCommonInfo:(FightCommonInfo *)fightCommonInfo;
//返回各个时间段事件的字典
+ (NSMutableDictionary<NSString *, NSMutableDictionary<NSString *, NSMutableArray *> *> *)screenEventWithScreen:(Screen *)screen withFightCommonInfo:(FightCommonInfo *)fightCommonInfo;
//返回各个时间段事件的字典总和
+ (NSMutableDictionary<NSString *, NSMutableDictionary *> *)everyScreenEventWithSession:(Session *)session withFightCommonInfo:(FightCommonInfo *)fightCommonInfo;
//返回各个时间段事件排序后的数组
+ (NSMutableDictionary<NSString *, NSMutableArray *> *)screenEventArrayWithScreen:(Screen *)screen withFightCommonInfo:(FightCommonInfo *)fightCommonInfo;
//返回总事件列表
+ (NSMutableDictionary<NSString *, NSMutableArray *> *)sessionEventArrayWithSession:(Session *)session withFightCommonInfo:(FightCommonInfo *)fightCommonInfo;

////返回每个时间段开始和结束时间的字典
//+ (NSMutableDictionary *)screenStartStopTimeInSession:(Session *)session withFightCommonInfo:(FightCommonInfo *)fightCommonInfo;

//根据时间返回事件应该插入的screen的位置




+ (NSMutableArray *)sessionEventsListFromSession:(Session *)session;

+ (NSMutableArray *)screenEventsListFromScreen:(Screen *)screen;




@end
