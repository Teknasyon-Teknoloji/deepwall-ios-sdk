//
//  EventHubCore.h
//  EventHub
//
//  Created by Burak Yalcin on 27.01.2021.
//

#import <Foundation/Foundation.h>
#import "EventHubEnvironment.h"
#import "EventHubUserProperties.h"

NS_ASSUME_NONNULL_BEGIN

/// EventHub
NS_SWIFT_NAME(EventHub)
@interface EventHubCore : NSObject

/// UNAVAILABLE
- (instancetype)init NS_UNAVAILABLE;

/// UNAVAILABLE
+ (void)initialize NS_UNAVAILABLE;

/// EventHub shared instance
@property (readonly, nonatomic, class) EventHubCore *shared;


#pragma mark - Public Methods

/// Initialization EventHub SDK
+ (void)initializeWithProducerId:(NSString *)producerId producerSecret:(NSString *)producerSecret environment:(EventHubEnvironment)environment;

/// Set user properties to use SDK
- (void)setUserProperties:(EventHubUserProperties *)props NS_SWIFT_NAME(setUserProperties(_:));

/// Main event log event
- (void)sendEventWithName:(NSString *)eventName data:(NSDictionary *)data;


@end

NS_ASSUME_NONNULL_END
