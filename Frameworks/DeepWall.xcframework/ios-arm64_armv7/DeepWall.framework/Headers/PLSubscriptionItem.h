//
//  PLSubscriptionItem.h
//  Ploutos
//
//  Created by Burak Yalcin on 5.10.2020.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "PloutosProvider.h"

NS_ASSUME_NONNULL_BEGIN

@protocol PLSubscriptionItem;

/// Ploutos subscription item
@interface PLSubscriptionItem : JSONModel

/// Id info
@property (nonatomic, strong) NSNumber *id;

/// StoreOrderId info
@property (nonatomic, strong) NSString *storeOrderId;

/// ProductCode info
@property (nonatomic, strong) NSString *productCode;

/// ProductProvider info
@property (nonatomic, strong, nullable) NSString *productProvider;

/// productProvider enum info
@property (nonatomic, readonly) PloutosProvider productProviderEnum;

/// ExpiresDateTime info on UTC timezone
@property (nonatomic, strong, nullable) NSDate<Optional> *expiresDateTime;

/// CancellationDateTime info on UTC timezone
@property (nonatomic, strong, nullable) NSDate<Optional> *cancellationDateTime;

/// IsRefunded info
@property (nonatomic) BOOL isRefunded;

/// IsActive info
@property (nonatomic) BOOL isActive;

/// InTrialPeriod info
@property (nonatomic) BOOL inTrialPeriod;

/// InGracePeriod info
@property (nonatomic) BOOL inGracePeriod;

/// InPremiumPeriod info
@property (nonatomic) BOOL inPremiumPeriod;

@end


/*
 {


id = 5;
inGracePeriod = 0;
inPremiumPeriod = 1;
inTrialPeriod = 0;
isActive = 1;
isRefunded = 0;
productCode = "com.fundev.photoedit.autopremium.2months";
productProvider = apple;
storeOrderId = 1000000526300028;
}
 */


/// JSONValueTransformer
@interface JSONValueTransformer (CustomTransformer)
@end

NS_ASSUME_NONNULL_END
