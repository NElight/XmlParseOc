//
//  Link_item.h
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/6.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"

@interface Link_item : JSONModel

@property (nonatomic, copy) NSString *_itemCode;

@property (nonatomic, copy) NSString *_itemLocation;

@end
