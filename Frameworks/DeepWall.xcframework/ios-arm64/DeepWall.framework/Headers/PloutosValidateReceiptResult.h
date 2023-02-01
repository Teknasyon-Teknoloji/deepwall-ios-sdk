//
//  PloutosValidateReceiptResult.h
//  Ploutos
//
//  Created by Burak Yalcin on 6.10.2020.
//

#import <Foundation/Foundation.h>
#import "PloutosValidationType.h"
#import "PLPurchaseResponse.h"

NS_ASSUME_NONNULL_BEGIN

/// Ploutos validate receipt result when request is success
@interface PloutosValidateReceiptResult : NSObject

/// Validation type
@property (nonatomic) PloutosValidationType type;

/// Validation results
@property (nonatomic, strong, nullable) PLPurchaseResponse *result;

/// UNAVAILABLE
- (instancetype)init NS_UNAVAILABLE;

/// Initialize method
- (instancetype)initWithType:(PloutosValidationType)type result:(PLPurchaseResponse *)result;

@end

NS_ASSUME_NONNULL_END
