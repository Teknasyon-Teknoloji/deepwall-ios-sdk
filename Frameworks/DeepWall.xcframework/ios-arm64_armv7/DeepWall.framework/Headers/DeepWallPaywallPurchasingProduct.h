//
//  DeepWallPaywallPurchasingProduct.h
//  DeepWall
//
//  Created by Burak Yalcin on 11.10.2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// DeepWall paywall purchasing product event model
@interface DeepWallPaywallPurchasingProduct : NSObject

/// Product code info
@property (nonatomic) NSString *productCode;


/// Internal
- (instancetype)initWithProductCode:(NSString *)productCode;

@end

NS_ASSUME_NONNULL_END
