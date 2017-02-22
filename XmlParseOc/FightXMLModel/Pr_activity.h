//
//  Pr_activity.h
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/6.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"

@interface Pr_activity : JSONModel

@property (nonatomic, copy) NSString *_activityCode;

@property (nonatomic, copy) NSString *_activityId;

@property (nonatomic, copy) NSString *_activityName;

@property (nonatomic, copy) NSString *_activityCNName;

@end
