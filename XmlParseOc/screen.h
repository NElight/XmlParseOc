//
//  screen.h
//  XmlParseOc
//
//  Created by Yioks-Mac on 17/2/22.
//  Copyright © 2017年 Yioks-Mac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface screen : NSObject

@property (nonatomic, copy) NSString *_cameraFOV;

@property (nonatomic, copy) NSString *_cameraPanAngle;

@property (nonatomic, copy) NSString *_cameraTarget;

@property (nonatomic, copy) NSString *_cameraTiltAngle;

@property (nonatomic, copy) NSString *_cameraType;

@property (nonatomic, copy) NSString *_cameraZoom;

@property (nonatomic, copy) NSString *_dbTransitionId;

@property (nonatomic, copy) NSString *_globalObjScale;

@property (nonatomic, copy) NSString *_globalRotationY;

@property (nonatomic, copy) NSString *_pitchFloorId;

@property (nonatomic, copy) NSString *_pitchMarksId;

@property (nonatomic, copy) NSString *_screenCategoryId;

@property (nonatomic, copy) NSString *_screenComments;

@property (nonatomic, copy) NSString *_screenFormat;

@property (nonatomic, copy) NSString *_screenFormationOpposition;

@property (nonatomic, copy) NSString *_screenFormationOurs;

@property (nonatomic, copy) NSString *_screenId;

@property (nonatomic, copy) NSString *_screenPlayerModelDisplay;

@property (nonatomic, copy) NSString *_screenPlayerModelFormat;

@property (nonatomic, copy) NSString *_screenPlayerNameDisplay;

@property (nonatomic, copy) NSString *_screenPlayerNameFormat;

@property (nonatomic, copy) NSString *_screenPlayerPositionDisplay;

@property (nonatomic, copy) NSString *_screenSortOrder;

@property (nonatomic, copy) NSString *_screenTitle;

@property (nonatomic, copy) NSString *_screenType;

@property (nonatomic, copy) NSString *_skillsPhysical;

@property (nonatomic, copy) NSString *_skillsPhysicalComment;

@property (nonatomic, copy) NSString *_skillsPsychological;

@property (nonatomic, copy) NSString *_skillsPsychologicalComment;

@property (nonatomic, copy) NSString *_skillsSocial;

@property (nonatomic, copy) NSString *_skillsSocialComment;

@property (nonatomic, copy) NSString *_skillsTactical;

@property (nonatomic, copy) NSString *_skillsTacticalComment;

@property (nonatomic, copy) NSString *_skillsTechnical;

@property (nonatomic, copy) NSString *_skillsTechnicalComment;

@property (nonatomic, copy) NSString *_timeSpent;

@property (nonatomic, strong) NSMutableArray * equipmentArray;

@property (nonatomic, strong) NSMutableArray * playerArray;

@property (nonatomic, strong) NSMutableArray * pr_minutesArray;

@property (nonatomic, strong) NSMutableArray * session_minutesArray;

@end
