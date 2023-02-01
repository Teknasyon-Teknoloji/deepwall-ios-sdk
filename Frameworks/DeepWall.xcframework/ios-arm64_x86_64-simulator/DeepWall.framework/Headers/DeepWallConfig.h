//
//  DeepWallConfig.h
//  DeepWall
//
//  Created by Burak Yalcin on 7.10.2020.
//

#import <Foundation/Foundation.h>
#import "DeepWallEnvironment.h"

NS_ASSUME_NONNULL_BEGIN

/// DeepWall Config
@interface DeepWallConfig : NSObject

/// Api key to be used in DeepWall
@property (nonatomic, strong) NSString *apiKey;

/// Current environment
@property (nonatomic) DeepWallEnvironment environment;

/// Application Id
@property (nonatomic, strong, nullable) NSNumber *appId;

/// SDK initialize time
@property (readonly, nonatomic, strong) NSDate *initializeTime;

/// SDK ready wait time
@property (nonatomic) NSTimeInterval initializationTimeout;

/// SDK Version
@property (readonly, nonatomic, strong) NSString *sdkVersion;

/// Returns `true` if current environment is sandbox
@property (readonly, nonatomic) BOOL isSandboxEnvironment;


/// UNAVAILABLE
- (instancetype)init NS_UNAVAILABLE;

/// Initialize method for config
- (instancetype)initWithApiKey:(NSString *)apiKey environment:(DeepWallEnvironment)environment;

@end

NS_ASSUME_NONNULL_END
