//
//  Jun27AppDelegate.h
//  Jun27
//
//  Created by Sir Andrew on 6/27/13.
//  Copyright (c) 2013 edu.nyu.spcs. All rights reserved.
//

#import <UIKit/UIKit.h>
@class View;

@interface Jun27AppDelegate: UIResponder <UIApplicationDelegate> {
	View *view;
	UIWindow *_window;
}

@property (strong, nonatomic) UIWindow *window;
@end
