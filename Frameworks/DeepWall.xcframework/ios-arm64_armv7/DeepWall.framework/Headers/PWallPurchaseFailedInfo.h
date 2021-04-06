//
//  PWallPurchaseFailedInfo.h
//  PWall
//
//  Created by Burak Yalcin on 8.12.2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PWallPurchaseFailedInfo : NSObject

@property (nonatomic) NSString *productCode;
@property (nonatomic) NSString *reason;
@property (nonatomic) NSInteger errorCode;
@property (nonatomic) BOOL isPaymentCancelled;

- (instancetype)initWithProductCode:(NSString *)productCode reason:(NSString *)reason errorCode:(NSInteger)errorCode;

@end

NS_ASSUME_NONNULL_END
