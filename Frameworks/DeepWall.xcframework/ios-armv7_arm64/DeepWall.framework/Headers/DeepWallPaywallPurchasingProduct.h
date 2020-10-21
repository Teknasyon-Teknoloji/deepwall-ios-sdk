//
//  DeepWallPaywallPurchasingProduct.h
//  DeepWall
//
//  Created by Burak Yalcin on 11.10.2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DeepWallPaywallPurchasingProduct : NSObject

@property (nonatomic) NSString *productCode;

- (instancetype)initWithProductCode:(NSString *)productCode;

@end

NS_ASSUME_NONNULL_END
