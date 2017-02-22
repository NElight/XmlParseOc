//
//  main.m
//  XmlParseOc
//
//  Created by Yioks-Mac on 17/2/22.
//  Copyright © 2017年 Yioks-Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FightModel.h"
#import "RuntimeUtil.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");
        
//        NSString *path = [[NSBundle mainBundle]pathForResource:@"xml_content" ofType:@"xml"];
        NSString *path =@"/Users/yioks-mac/Desktop/XmlParseOc/XmlParseOc/xml_content.xml";
        NSData *data = [[NSData alloc]initWithContentsOfFile:path];
        FightModel *model = [RuntimeUtil fightFromXmlData:data];
        NSLog(@"%@", model);
        
        
    }
    return 0;
}
