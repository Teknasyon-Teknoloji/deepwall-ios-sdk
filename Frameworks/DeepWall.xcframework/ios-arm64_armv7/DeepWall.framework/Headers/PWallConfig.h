//
//  PWallConfig.h
//  PWall
//
//  Created by Burak Yalcin on 25.11.2020.
//

#import <Foundation/Foundation.h>
#import "PWallEnvironment.h"

NS_ASSUME_NONNULL_BEGIN

@interface PWallConfig : NSObject

/// Api key to be used in PWall
@property (nonatomic, strong) NSString *apiKey;

/// Current environment
@property (nonatomic) PWallEnvironment environment;

/// SDK Version
@property (readonly, nonatomic, strong) NSString *sdkVersion;

/// Returns `true` if current environment is sandbox
@property (readonly, nonatomic) BOOL isSandboxEnvironment;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithApiKey:(NSString *)apiKey environment:(PWallEnvironment)environment;

@end

NS_ASSUME_NONNULL_END
