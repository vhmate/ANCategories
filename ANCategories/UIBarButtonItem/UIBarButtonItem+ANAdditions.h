//
//  UIBarButtonItem+ANAdditions.h
//
//  Created by Oksana Kovalchuk on 13/7/14.
//  Copyright (c) 2014 ANODA. All rights reserved.
//

typedef NS_ENUM(NSUInteger, ANBarButtonType) {
    ANBarButtonTypeClose,
    ANBarButtonTypeDone,
    ANBarButtonTypeAdd,
    ANBarButtonTypeBack,
    ANBarButtonTypeMenu,
    ANBarButtonTypeRemove,
    ANBarButtonTypeCall,
    ANBarButtonTypeEdit,
    ANBarButtonTypeNext,
    ANBarButtonTypeSearch,
    ANBarButtonTypeMore,
    ANBarButtonTypeSettings
};

@class RACCommand;

@interface UIBarButtonItem (ANAdditions)

+ (UIBarButtonItem*)an_itemWithType:(ANBarButtonType)type command:(RACCommand*)command;

+ (void)an_addImageName:(NSString*)imageName forType:(ANBarButtonType)type;

@end
