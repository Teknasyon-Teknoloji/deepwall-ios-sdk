//
//  DeepWallPaywallResponseFailedModel.h
//  DeepWall
//
//  Created by Burak Yalcin on 9.10.2020.
//

#import <Foundation/Foundation.h>
#import "DeepWallError.h"

NS_ASSUME_NONNULL_BEGIN

@interface DeepWallPaywallResponseFailedModel : NSObject

@property (nonatomic, strong) NSString *errorCode;

@property (nonatomic, strong) NSString *reason;

- (instancetype)initWithErrorEnum:(DeepWallError)errorEnum;

- (instancetype)initWithErrorCode:(NSString *)errorCode reason:(NSString *)reason;

@end

NS_ASSUME_NONNULL_END
