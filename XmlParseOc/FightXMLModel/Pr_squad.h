//
//  Pr_squad.h
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/6.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"

@interface Pr_squad : JSONModel

@property (nonatomic, copy) NSString *_coachSquad;

@property (nonatomic, copy) NSString *_squadId;

@property (nonatomic, copy) NSString *_squadName;

@end
