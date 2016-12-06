//
//  AppDelegate.h
//  WhoseTag
//
//  Created by Alex Derbes on 12/6/16.
//  Copyright © 2016 bentboolean. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

