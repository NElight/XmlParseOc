//
//  Lines_library.h
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/6.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"

@interface Lines_library : JSONModel

@property (nonatomic, copy) NSString *_arrowThickness;

@property (nonatomic, copy) NSString *_lineColor;

@property (nonatomic, copy) NSString *_lineStyle;

@property (nonatomic, copy) NSString *_lineThickness;

@property (nonatomic, copy) NSString *_lineType;

@property (nonatomic, copy) NSString *_linesLibraryId;

@property (nonatomic, copy) NSString *_useArrowHead;

@property (nonatomic, copy) NSString *_useHandles;

@end
