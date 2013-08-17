//
//  SAAppDelegate.h
//  simpleApp
//
//  Created by Tracy Weiss on 6/20/13.
//  Copyright (c) 2013 Tracy Weiss. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SAViewController;

@interface SAAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) SAViewController *viewController;

@end
