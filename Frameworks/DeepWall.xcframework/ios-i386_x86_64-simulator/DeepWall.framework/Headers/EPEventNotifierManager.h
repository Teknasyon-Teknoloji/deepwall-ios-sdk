//
//  EPEventNotifierManager.h
//  EventServiceProvider
//
//  Created by Burak Yalcin on 6.10.2020.
//

#import <Foundation/Foundation.h>
#import "EPEventNotifierDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface EPEventNotifierManager : NSObject

+ (instancetype)sharedManager;

+ (void)observeEventsFor:(id<EPEventNotifierDelegate>)observer;
+ (void)removeObserverFor:(id<EPEventNotifierDelegate>)observer;

- (void)sendEventToDelegates:(void (^)(id __weak delegate))block;

@end

NS_ASSUME_NONNULL_END
