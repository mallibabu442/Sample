//
//  AppDelegate.h
//  GitRepository
//
//  Created by SkoopView on 10/10/16.
//  Copyright © 2016 SkoopView. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

