//
//  Session.m
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/6.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import "Session.h"

@implementation Session

- (instancetype)init
{
    self = [super init];
    if (self) {
        _kitArray = [NSMutableArray arrayWithCapacity:0];
        _lines_libraryArray = [NSMutableArray arrayWithCapacity:0];
        _link_itemArray = [NSMutableArray arrayWithCapacity:0];
        _screenArray = [NSMutableArray arrayWithCapacity:0];
        _screen_defaultArray = [NSMutableArray arrayWithCapacity:0];
    }
    return self;
}

@end
