//
//  PurchaseKitCore.h
//  PurchaseKit
//
//  Created by Burak Yalcin on 1.10.2020.
//

#import <Foundation/Foundation.h>
#import "PurchaseKitStatus.h"
#import <StoreKit/StoreKit.h>
#import "PurchaseKitNotifierDelegate.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(PurchaseKit)
@interface PurchaseKitCore : NSObject

@property (nonatomic, readonly, class) PurchaseKitCore *shared;

@property (readonly) PurchaseKitStatus status;
@property (readonly) BOOL readyStatus;

@property (readonly, strong) NSArray<SKProduct *> *availableProducts;
@property (readonly) BOOL canMakePayments;

@property (readonly, strong, nullable) NSString *appStoreReceipt;

@property (readonly, strong) NSArray<SKPaymentTransaction *> *transactions;


/// TODO: Documentation
- (void)fetchProductsWithCodes:(NSArray<NSString *> *)productCodes NS_SWIFT_NAME(fetchProducts(_:));

/// TODO: Documentation
- (void)purchaseProductWithCode:(NSString *)productCode NS_SWIFT_NAME(purchaseProduct(with:));

/// TODO: Documentation
- (void)restorePurchases;

/// TODO: Documentation
- (void)finishTransactionForProductId:(NSString *)productId NS_SWIFT_NAME(finishTransaction(for:));

/// TODO: Documentation
- (void)skipProductFetch;


#pragma mark - Event Handling

- (void)observeEventsFor:(id<PurchaseKitNotifierDelegate>)observer;
- (void)removeObserverFor:(id<PurchaseKitNotifierDelegate>)observer;

@end

NS_ASSUME_NONNULL_END
