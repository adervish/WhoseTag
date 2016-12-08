//
//  main.m
//  WhoseTag
//
//  Created by Alex Derbes on 12/6/16.
//  Copyright © 2016 bentboolean. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "Ugi.h"


int main(int argc, char * argv[]) {
    @autoreleasepool {
        [Ugi createSingleton];   // ADD THIS LINE
        return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
    }
}
