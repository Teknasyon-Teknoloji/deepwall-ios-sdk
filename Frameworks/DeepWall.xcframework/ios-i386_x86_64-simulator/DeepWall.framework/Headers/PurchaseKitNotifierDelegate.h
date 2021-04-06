//
//  PurhcaseKitNotifierDelegate.h
//  PurchaseKit
//
//  Created by Burak Yalcin on 12.10.2020.
//

#import <Foundation/Foundation.h>
#import "EventServiceProvider.h"
#import "ProductFetchFailedModel.h"
#import "PurchasingProductModel.h"
#import "PurchaseSuccessModel.h"
#import "PurchaseFailedModel.h"
#import "RestoreFailedModel.h"

NS_ASSUME_NONNULL_BEGIN

@protocol PurchaseKitNotifierDelegate <EPEventNotifierDelegate>

@optional

- (void)purchaseKitProductsFetched;
- (void)purchaseKitProductFetchFailed:(ProductFetchFailedModel *)event;

- (void)purchaseKitPurchasingProduct:(PurchasingProductModel *)event;

- (void)purchaseKitPurchaseSuccess:(PurchaseSuccessModel *)event;
- (void)purchaseKitPurchaseFailed:(PurchaseFailedModel *)event;

- (void)purchaseKitRestoreSuccess;
- (void)purchaseKitRestoreFailed:(RestoreFailedModel *)event;

@end

NS_ASSUME_NONNULL_END
