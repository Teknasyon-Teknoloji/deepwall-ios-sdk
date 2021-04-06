//
//  DeepWallNotifierDelegate.h
//  DeepWall
//
//  Created by Burak Yalcin on 9.10.2020.
//

#import <Foundation/Foundation.h>
#import "EventServiceProvider.h"
#import "DeepWallPaywallResponseFailedModel.h"
#import "DeepWallPaywallNotOpenedInfoModel.h"
#import "DeepWallPaywallOpenedInfoModel.h"
#import "DeepWallPaywallPurchasingProduct.h"
#import "Ploutos.h"
#import "PurchaseKit.h"

NS_ASSUME_NONNULL_BEGIN

/// Typealias for DeepWallExtraDataType
typedef NSDictionary* DeepWallExtraDataType;

/// Typealias for DeepWallValidateReceiptResult
typedef PloutosValidateReceiptResult* DeepWallValidateReceiptResult;

/// Typealias for DeepWallPurchaseFailedModel
typedef PurchaseFailedModel* DeepWallPurchaseFailedModel;

/// Typealias for DeepWallRestoreFailedModel
typedef RestoreFailedModel* DeepWallRestoreFailedModel;

/// Typealias for DeepWallPaywallClosedInfoModel
typedef DeepWallPaywallOpenedInfoModel* DeepWallPaywallClosedInfoModel;


/// DeepWall event notifier protocol for observing events
@protocol DeepWallNotifierDelegate <EPEventNotifierDelegate>

@optional

/// DeepWall paywall requested event
- (void)deepWallPaywallRequested;

/// DeepWall paywall response received event
- (void)deepWallPaywallResponseReceived;

/// DeepWall paywall response failure event
- (void)deepWallPaywallResponseFailure:(DeepWallPaywallResponseFailedModel *)event;

/// DeepWall paywall opened event
- (void)deepWallPaywallOpened:(DeepWallPaywallOpenedInfoModel *)event;

/// DeepWall paywall not opened event
- (void)deepWallPaywallNotOpened:(DeepWallPaywallNotOpenedInfoModel *)event;

/// DeepWall paywall action show disabled event
- (void)deepWallPaywallActionShowDisabled:(DeepWallPaywallActionShowDisabledInfoModel *)event;

/// DeepWall paywall closed event
- (void)deepWallPaywallClosed:(DeepWallPaywallClosedInfoModel)event;

/// DeepWall paywall extra data received event
- (void)deepWallPaywallExtraDataReceived:(DeepWallExtraDataType)event;

/// DeepWall paywall purchasing product event
- (void)deepWallPaywallPurchasingProduct:(DeepWallPaywallPurchasingProduct *)event;

/// DeepWall paywall purchase success event
- (void)deepWallPaywallPurchaseSuccess:(DeepWallValidateReceiptResult)event;

/// DeepWall paywall purchase failed event
- (void)deepWallPaywallPurchaseFailed:(DeepWallPurchaseFailedModel)event;

/// DeepWall paywall restore success event
- (void)deepWallPaywallRestoreSuccess;

/// DeepWall paywall restore failed event
- (void)deepWallPaywallRestoreFailed:(DeepWallRestoreFailedModel)event;

/// DeepWall ATT status changed event
- (void)deepWallATTStatusChanged;


@end

NS_ASSUME_NONNULL_END
