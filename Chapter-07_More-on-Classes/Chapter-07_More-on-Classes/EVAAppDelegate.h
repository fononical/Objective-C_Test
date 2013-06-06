//
//  EVAAppDelegate.h
//  Chapter-07_More-on-Classes
//
//  Created by Alain Bustamante on 6/6/13.
//  Copyright (c) 2013 fonónical. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface EVAAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
