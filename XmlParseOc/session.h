//
//  session.h
//  XmlParseOc
//
//  Created by Yioks-Mac on 17/2/22.
//  Copyright © 2017年 Yioks-Mac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface session : NSObject

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

@property (nonatomic, strong) NSMutableArray * kit;

@property (nonatomic, strong) NSMutableArray * lines_library;

@property (nonatomic, strong) NSMutableArray *link_item;

@property (nonatomic, strong) NSMutableArray * screen;

@property (nonatomic, strong) NSMutableArray * screen_default;

@end
