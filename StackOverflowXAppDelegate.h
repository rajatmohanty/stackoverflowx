//
//  StackOverflowXAppDelegate.h
//  StackOverflowX
//
//  Created by Jacob Relkin on 11/14/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface StackOverflowXAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
