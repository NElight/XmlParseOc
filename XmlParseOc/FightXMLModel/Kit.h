//
//  Kit.h
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/6.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"

@interface Kit : JSONModel

@property (nonatomic, copy) NSString *_bottomColor;

@property (nonatomic, copy) NSString *_hairColor;

@property (nonatomic, copy) NSString *_hairType;

@property (nonatomic, copy) NSString *_kitId;

@property (nonatomic, copy) NSString *_kitTypeId;

@property (nonatomic, copy) NSString *_shoesColor;

@property (nonatomic, copy) NSString *_skinColor;

@property (nonatomic, copy) NSString *_skinTexture;

@property (nonatomic, copy) NSString *_socksColor;

@property (nonatomic, copy) NSString *_stripesColor;

@property (nonatomic, copy) NSString *_stripesType;

@property (nonatomic, copy) NSString *_topColor;

@end
