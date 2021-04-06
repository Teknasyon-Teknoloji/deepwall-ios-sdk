//
//  PloutosValidateReceiptFailed.h
//  Ploutos
//
//  Created by Burak Yalcin on 6.10.2020.
//

#import <Foundation/Foundation.h>
#import "PloutosValidationType.h"

NS_ASSUME_NONNULL_BEGIN

/// Ploutos validate receipt result when request is failed
@interface PloutosValidateReceiptFailed : NSObject

/// Validation type
@property (nonatomic) PloutosValidationType type;

/// Error code
@property (nonatomic, strong) NSString *errorCode;

/// Failure reason message
@property (nonatomic, strong) NSString *reason;

/// UNAVAILABLE
- (instancetype)init NS_UNAVAILABLE;

/// Initialize method
- (instancetype)initWithType:(PloutosValidationType)type errorCode:(NSString *)errorCode reason:(NSString *)reason;

@end

NS_ASSUME_NONNULL_END
