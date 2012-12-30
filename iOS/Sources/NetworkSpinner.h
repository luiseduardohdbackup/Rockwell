//
//  NetworkSpinner.h
//  Tennessee Traffic
//
//  Created by Tyler Hall on 8/15/10.
//  Copyright 2010 Click On Tyler, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NetworkSpinner : NSObject {
	NSInteger _count;
	BOOL _hasError;
}

- (void)realQueue;
- (void)realDequeue;
+ (NetworkSpinner *)sharedSpinner;
+ (void)queue;
+ (void)dequeue;
- (void)realHasError;
+ (void)networkError;
- (void)nop; // This fixes a compiler warning

@end
