//
//  EventHubEnvironment.h
//  EventHub
//
//  Created by Burak Yalcin on 20.02.2021.
//

#import <Foundation/Foundation.h>

/// EventHub environments
typedef NS_ENUM(NSUInteger, EventHubEnvironment) {
	/// EventHub Sandbox environment
	EventHubEnvironmentSandbox = 1,
	
	/// EventHub Production environment
	EventHubEnvironmentProduction = 2
};

NS_ASSUME_NONNULL_BEGIN

/// EventHub environment manager
@interface EventHubEnvironmentManager : NSObject

/// Name for environment
+ (NSString *)nameForEnvironment:(EventHubEnvironment)environment;

/// Header value for environment
+ (NSString *)headerValueForEnvironment:(EventHubEnvironment)environment;

@end

NS_ASSUME_NONNULL_END
