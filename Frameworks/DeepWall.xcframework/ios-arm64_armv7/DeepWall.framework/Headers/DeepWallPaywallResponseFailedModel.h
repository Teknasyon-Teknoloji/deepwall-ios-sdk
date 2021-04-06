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

/// Action name
@property (nonatomic, strong) NSString *actionName;

/// Test page id
@property (nonatomic, nullable) NSNumber *testPageId;

/// Internal
- (instancetype)initWithErrorEnum:(DeepWallError)errorEnum actionName:(NSString *)actionName;

/// Internal
- (instancetype)initWithErrorCode:(NSString *)errorCode reason:(NSString *)reason actionName:(NSString *)actionName;

@end

NS_ASSUME_NONNULL_END
