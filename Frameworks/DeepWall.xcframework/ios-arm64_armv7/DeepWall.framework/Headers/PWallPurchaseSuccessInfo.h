//
//  PWallPurchaseSuccessInfo.h
//  PWall
//
//  Created by Burak Yalcin on 8.12.2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PWallPurchaseSuccessInfo : NSObject

@property (nonatomic, strong) NSString *receipt;

@property (nonatomic, strong) NSString *productCode;

- (instancetype)initWithReceipt:(NSString *)receipt productCode:(NSString *)productCode;

@end

NS_ASSUME_NONNULL_END
