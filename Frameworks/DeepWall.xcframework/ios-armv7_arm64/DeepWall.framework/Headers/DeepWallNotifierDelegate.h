//
//  DeepWallNotifierDelegate.h
//  DeepWall
//
//  Created by Burak Yalcin on 9.10.2020.
//

#import <Foundation/Foundation.h>
#import <EventServiceProvider/EventServiceProvider.h>
#import "DeepWallPaywallResponseFailedModel.h"
#import "DeepWallPaywallNotOpenedInfoModel.h"
#import "DeepWallPaywallOpenedInfoModel.h"
#import "DeepWallPaywallPurchasingProduct.h"
#import <Ploutos/Ploutos.h>
#import <PurchaseKit/PurchaseKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NSDictionary* DeepWallExtraDataType;
typedef PloutosValidateReceiptResult* DeepWallValidateReceiptResult;
typedef PurchaseFailedModel* DeepWallPurchaseFailedModel;
typedef RestoreFailedModel* DeepWallRestoreFailedModel;
typedef DeepWallPaywallOpenedInfoModel* DeepWallPaywallClosedInfoModel;

@protocol DeepWallNotifierDelegate <EPEventNotifierDelegate>

@optional

- (void)deepWallPaywallRequested;
- (void)deepWallPaywallResponseReceived;

- (void)deepWallPaywallResponseFailure:(DeepWallPaywallResponseFailedModel *)event;

- (void)deepWallPaywallOpened:(DeepWallPaywallOpenedInfoModel *)event;
- (void)deepWallPaywallNotOpened:(DeepWallPaywallNotOpenedInfoModel *)event;
- (void)deepWallPaywallActionShowDisabled:(DeepWallPaywallActionShowDisabledInfoModel *)event;
- (void)deepWallPaywallClosed:(DeepWallPaywallClosedInfoModel)event;

- (void)deepWallPaywallExtraDataReceived:(DeepWallExtraDataType)event;

- (void)deepWallPaywallPurchasingProduct:(DeepWallPaywallPurchasingProduct *)event;
- (void)deepWallPaywallPurchaseSuccess:(DeepWallValidateReceiptResult)event;
- (void)deepWallPaywallPurchaseFailed:(DeepWallPurchaseFailedModel)event;
- (void)deepWallPaywallRestoreSuccess;
- (void)deepWallPaywallRestoreFailed:(DeepWallRestoreFailedModel)event;

@end

NS_ASSUME_NONNULL_END
