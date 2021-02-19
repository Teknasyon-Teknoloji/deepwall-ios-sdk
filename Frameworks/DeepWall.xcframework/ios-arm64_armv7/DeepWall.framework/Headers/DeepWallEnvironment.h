//
//  DeepWallEnvironment.h
//  DeepWall
//
//  Created by Burak Yalcin on 7.10.2020.
//

#import <Foundation/Foundation.h>

/// DeepWall environments
typedef NS_ENUM(NSUInteger, DeepWallEnvironment) {
	/// DeepWall Sandbox environment
	DeepWallEnvironmentSandbox,
	
	/// DeepWall Production environment
	DeepWallEnvironmentProduction
};

NS_ASSUME_NONNULL_BEGIN

/// DeepWall environment manager
@interface DeepWallEnvironmentManager : NSObject

/// Name for environment
+ (NSString *)nameForEnvironment:(DeepWallEnvironment)environment;

/// Header value for environment
+ (NSString *)headerValueForEnvironment:(DeepWallEnvironment)environment;


@end

NS_ASSUME_NONNULL_END
