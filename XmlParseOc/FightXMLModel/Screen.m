//
//  Screen.m
//  UnityFootball
//
//  Created by Yioks-Mac on 16/12/6.
//  Copyright © 2016年 Yioks. All rights reserved.
//

#import "Screen.h"

@implementation Screen

- (instancetype)init
{
    self = [super init];
    if (self) {
        _equipmentArray = [NSMutableArray arrayWithCapacity:0];
        _playerArray = [NSMutableArray arrayWithCapacity:0];
        _pr_minutesArray = [NSMutableArray arrayWithCapacity:0];
        
        _session_minutesArray = [NSMutableArray arrayWithCapacity:0];
    }
    return self;
}

@end
