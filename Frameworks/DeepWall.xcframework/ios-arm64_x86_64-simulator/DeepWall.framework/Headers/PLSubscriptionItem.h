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
@property (nonatomic, strong, nullable) NSString<Optional> *storeOrderId;

/// ProductCode info
@property (nonatomic, strong, nullable) NSString<Optional> *productCode;

/// ProductProvider info
@property (nonatomic, strong, nullable) NSString<Optional> *productProvider;

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

/// Price info
@property (nonatomic, strong, nullable) NSNumber<Optional> *price;

@end


/// JSONValueTransformer
@interface JSONValueTransformer (CustomTransformer)
@end

NS_ASSUME_NONNULL_END
