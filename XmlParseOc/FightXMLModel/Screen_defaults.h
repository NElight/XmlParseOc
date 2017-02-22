//
//  Screen_defaults.h
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/6.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"

@interface Screen_defaults : JSONModel

@property (nonatomic, copy) NSString *_screenPlayerModelFormat;

@property (nonatomic, copy) NSString *_screenPlayerNameFormat;

@property (nonatomic, copy) NSString *_screenType;

@end
