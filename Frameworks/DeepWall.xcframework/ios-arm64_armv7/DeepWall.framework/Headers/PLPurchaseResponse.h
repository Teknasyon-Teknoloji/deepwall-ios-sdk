//
//  PLPurchaseResponse.h
//  Ploutos
//
//  Created by Burak Yalcin on 5.10.2020.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "PLSubscriptionItem.h"
#import "PLProductItem.h"


NS_ASSUME_NONNULL_BEGIN

/// Purchase api response model
@interface PLPurchaseResponse : JSONModel

/// Subscriptions list
@property (nonatomic, strong, nullable) NSArray<PLSubscriptionItem *> <PLSubscriptionItem, Optional> *subscriptions;

/// Products list
@property (nonatomic, strong, nullable) NSArray<PLProductItem *> <PLProductItem, Optional> *products;

@end

NS_ASSUME_NONNULL_END
