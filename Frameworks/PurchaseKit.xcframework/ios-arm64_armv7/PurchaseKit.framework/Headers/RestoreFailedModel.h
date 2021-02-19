//
//  RestoreFailedModel.h
//  PurchaseKit
//
//  Created by Burak Yalcin on 12.10.2020.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, RestoreFailedReason) {
	RestoreFailedReasonNoReceipt = 1,
	RestoreFailedReasonFailed = 2
};

NS_ASSUME_NONNULL_BEGIN

@interface RestoreFailedModel : NSObject

@property (nonatomic) RestoreFailedReason reason;
@property (nonatomic) NSString *errorCode;
@property (nonatomic, nullable) NSString *errorText;
@property (nonatomic) BOOL isPaymentCancelled;

- (instancetype)initWithReason:(RestoreFailedReason)reason errorCode:(NSString *)errorCode errorText:(nullable NSString *)errorText;

@end

NS_ASSUME_NONNULL_END
