//
//  NSButton+Action.m
//  WeChatPlugin
//
//  Created by nato on 2017/9/19.
//  Copyright © 2017年 github:natototo. All rights reserved.
//

#import "NSButton+Action.h"

@implementation NSButton (Action)

+ (instancetype)tk_checkboxWithTitle:(NSString *)title target:(id)target action:(SEL)action {
    NSButton *btn = [NSButton tk_buttonWithTitle:title target:target action:action];
    [btn setButtonType:NSButtonTypeSwitch];
    
    return btn;
}

+ (instancetype)tk_buttonWithTitle:(NSString *)title target:(id)target action:(SEL)action {
    NSButton *btn = [[NSButton alloc] init];
    btn.title = title;
    btn.target = target;
    btn.action = action;
    
    return btn;
}

@end
