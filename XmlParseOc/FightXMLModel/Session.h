//
//  Session.h
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/6.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Kit.h"
#import "Lines_library.h"
#import "Link_item.h"
#import "Screen.h"
#import "Screen_defaults.h"
#import "JSONModel.h"

@interface Session : JSONModel

@property (nonatomic, copy) NSString *_globalFlipH;

@property (nonatomic, copy) NSString *_globalSspToolVersion;

@property (nonatomic, copy) NSString *_interfaceBaseUrl;

@property (nonatomic, copy) NSString *_interfaceLanguageCode;

@property (nonatomic, copy) NSString *_itemBaseUrl;

@property (nonatomic, copy) NSString *_matchMinutes;

@property (nonatomic, copy) NSString *_matchScoreOpposition;

@property (nonatomic, copy) NSString *_matchScoreUs;

@property (nonatomic, copy) NSString *_maxScreens;

@property (nonatomic, copy) NSString *_screenTeamFlip;

@property (nonatomic, copy) NSString *_sessionCategoryId;

@property (nonatomic, copy) NSString *_sessionDifficultyLevelId;

@property (nonatomic, copy) NSString *_sessionLanguageCode;

@property (nonatomic, copy) NSString *_sessionOverallDescription;

@property (nonatomic, copy) NSString *_sessionSkillLevelId;

@property (nonatomic, copy) NSString *_sessionSport;

@property (nonatomic, copy) NSString *_sessionStartTime;

@property (nonatomic, copy) NSString *_sessionTitle;

@property (nonatomic, copy) NSString *_sessionToken;

@property (nonatomic, copy) NSString *_sessionType;

@property (nonatomic, copy) NSString *_sessionUseSkillLevel;

@property (nonatomic, copy) NSString *_teamNameOpposition;

@property (nonatomic, copy) NSString *_teamNameOurs;

@property (nonatomic, copy) NSString *_teamPlayerNameFormat;

@property (nonatomic, copy) NSString *_teamPlayerNumberFormat;

@property (nonatomic, copy) NSString *_teamPlayerPositionDisplay;

@property (nonatomic, copy) NSString *_teamPlayersPerTeam;

@property (nonatomic, copy) NSString *_teamWePlay;

@property (nonatomic, copy) NSString *_userImageBase;

@property (nonatomic, copy) NSString *_uuid;

@property (nonatomic, copy) NSString *_xmlMySessionsRedirect;

@property (nonatomic, copy) NSString *_xmlReceiveBase;

@property (nonatomic, copy) NSString *_xmlSendBase;

@property (nonatomic, copy) NSString *_xmlTeamBase;

@property (nonatomic, copy) NSString *YioksOurTeamLeaderName;
@property (nonatomic, copy) NSString *YioksOurTeamLeaderSign;
@property (nonatomic, copy) NSString *YioksOppositionTeamLeaderName;
@property (nonatomic, copy) NSString *YioksOppositionTeamLeaderSign;
@property (nonatomic, copy) NSString *YioksRefreeName;
@property (nonatomic, copy) NSString *YioksRefreeSign;

@property (nonatomic, strong) NSMutableArray<Kit *> * kitArray;

@property (nonatomic, strong) NSMutableArray<Lines_library *> * lines_libraryArray;

@property (nonatomic, strong) NSMutableArray<Link_item *> *link_itemArray;

@property (nonatomic, strong) NSMutableArray<Screen *> * screenArray;

@property (nonatomic, strong) NSMutableArray<Screen_defaults *> * screen_defaultArray;


@end
