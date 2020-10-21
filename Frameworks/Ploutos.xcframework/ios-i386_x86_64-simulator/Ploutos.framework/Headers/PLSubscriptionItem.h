//
//  PLSubscriptionItem.h
//  Ploutos
//
//  Created by Burak Yalcin on 5.10.2020.
//

#import <Foundation/Foundation.h>
#import <JSONModel/JSONModel.h>

NS_ASSUME_NONNULL_BEGIN

@protocol PLSubscriptionItem;

@interface PLSubscriptionItem : JSONModel

@property (nonatomic, strong) NSNumber *id;
@property (nonatomic, strong) NSString *storeOrderId;
@property (nonatomic, strong) NSString *productCode;
@property (nonatomic, strong, nullable) NSDate<Optional> *expiresDateTime;
@property (nonatomic, strong, nullable) NSDate<Optional> *cancellationDateTime;
@property (nonatomic) BOOL isRefunded;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL inTrialPeriod;
@property (nonatomic) BOOL inGracePeriod;
@property (nonatomic) BOOL inPremiumPeriod;

@end


@interface JSONValueTransformer (CustomTransformer)
@end

NS_ASSUME_NONNULL_END
