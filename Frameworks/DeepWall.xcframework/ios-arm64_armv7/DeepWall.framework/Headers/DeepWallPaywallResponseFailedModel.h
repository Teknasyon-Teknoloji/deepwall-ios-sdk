//
//  DeepWallPaywallResponseFailedModel.h
//  DeepWall
//
//  Created by Burak Yalcin on 9.10.2020.
//

#import <Foundation/Foundation.h>
#import "DeepWallError.h"

NS_ASSUME_NONNULL_BEGIN

/// DeepWall paywall response failure event model
@interface DeepWallPaywallResponseFailedModel : NSObject

/// Error code info
@property (nonatomic, strong) NSString *errorCode;

/// Reason info
@property (nonatomic, strong) NSString *reason;

/// Internal
- (instancetype)initWithErrorEnum:(DeepWallError)errorEnum;

/// Internal
- (instancetype)initWithErrorCode:(NSString *)errorCode reason:(NSString *)reason;

@end

NS_ASSUME_NONNULL_END
