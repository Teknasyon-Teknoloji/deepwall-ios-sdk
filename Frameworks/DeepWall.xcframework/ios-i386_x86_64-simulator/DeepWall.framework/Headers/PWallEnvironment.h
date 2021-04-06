//
//  PWallEnvironment.h
//  PWall
//
//  Created by Burak Yalcin on 25.11.2020.
//

#import <Foundation/Foundation.h>

/// PWall environments
typedef NS_ENUM(NSUInteger, PWallEnvironment) {
	/// PWall Sandbox environment
	PWallEnvironmentSandbox = 1,
	
	/// PWall Production environment
	PWallEnvironmentProduction = 2
};

NS_ASSUME_NONNULL_BEGIN

/// PWall environment manager
@interface PWallEnvironmentManager : NSObject

/// Name for environment
+ (NSString *)nameForEnvironment:(PWallEnvironment)environment;

/// Header value for environment
+ (NSString *)headerValueForEnvironment:(PWallEnvironment)environment;

@end

NS_ASSUME_NONNULL_END
