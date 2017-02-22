//
//  session.m
//  XmlParseOc
//
//  Created by Yioks-Mac on 17/2/22.
//  Copyright © 2017年 Yioks-Mac. All rights reserved.
//

#import "session.h"

@implementation session

- (instancetype)init
{
    self = [super init];
    if (self) {
        _kit = [NSMutableArray arrayWithCapacity:0];
        _lines_library = [NSMutableArray arrayWithCapacity:0];
        _link_item = [NSMutableArray arrayWithCapacity:0];
        _screen = [NSMutableArray arrayWithCapacity:0];
        _screen_default = [NSMutableArray arrayWithCapacity:0];
    }
    return self;
}

@end
