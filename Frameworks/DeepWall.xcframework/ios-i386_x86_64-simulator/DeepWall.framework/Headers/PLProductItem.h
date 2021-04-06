//
//  PLProductItem.h
//  Ploutos
//
//  Created by Burak Yalcin on 5.10.2020.
//

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "PloutosProvider.h"

NS_ASSUME_NONNULL_BEGIN

@protocol PLProductItem;

/// Ploutos product item
@interface PLProductItem : JSONModel

/// Id info
@property (nonatomic, strong) NSNumber *id;

/// StoreOrderId info
@property (nonatomic, strong) NSString *storeOrderId;

/// ProductCode info
@property (nonatomic, strong) NSString *productCode;

/// ProductProvider info
@property (nonatomic, strong, nullable) NSString *productProvider;

/// ProductProvider enum info
@property (nonatomic, readonly) PloutosProvider productProviderEnum;

/// CancellationDateTime info on UTC timezone
@property (nonatomic, strong, nullable) NSDate<Optional> *cancellationDateTime;

/// IsRefunded info
@property (nonatomic) BOOL isRefunded;

@end

NS_ASSUME_NONNULL_END
