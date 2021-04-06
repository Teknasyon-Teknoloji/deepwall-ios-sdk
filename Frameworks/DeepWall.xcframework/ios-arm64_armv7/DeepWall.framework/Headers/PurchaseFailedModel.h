//
//  PurchaseFailedModel.h
//  PurchaseKit
//
//  Created by Burak Yalcin on 12.10.2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PurchaseFailedModel : NSObject

@property (nonatomic) NSString *productCode;
@property (nonatomic) NSString *reason;
@property (nonatomic) NSString *errorCode;
@property (nonatomic) BOOL isPaymentCancelled;

- (instancetype)initWithProductCode:(NSString *)productCode reason:(NSString *)reason errorCode:(NSString *)errorCode;

@end

NS_ASSUME_NONNULL_END
