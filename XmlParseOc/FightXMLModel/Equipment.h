//
//  Equipment.h
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/6.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"

@interface Equipment : JSONModel

@property (nonatomic, copy) NSString *_equipColor;

@property (nonatomic, copy) NSString *_equipmentLibraryId;

@property (nonatomic, copy) NSString *_flipH;

@property (nonatomic, copy) NSString *_onlyDefaultPitches;

@property (nonatomic, copy) NSString *_pathData;

@property (nonatomic, copy) NSString *_rotationY;

@property (nonatomic, copy) NSString *_transparency;

@property (nonatomic, copy) NSString *_x;

@property (nonatomic, copy) NSString *_y;

@property (nonatomic, copy) NSString *_z;

@end
