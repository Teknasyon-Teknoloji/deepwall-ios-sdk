//
//  PLProductItem.h
//  Ploutos
//
//  Created by Burak Yalcin on 5.10.2020.
//

#import <Foundation/Foundation.h>
#import <JSONModel/JSONModel.h>

NS_ASSUME_NONNULL_BEGIN

@protocol PLProductItem;

@interface PLProductItem : JSONModel

@property (nonatomic, strong) NSNumber *id;
@property (nonatomic, strong) NSString *storeOrderId;
@property (nonatomic, strong) NSString *productCode;
@property (nonatomic, strong, nullable) NSDate<Optional> *cancellationDateTime;
@property (nonatomic) BOOL isRefunded;

@end

NS_ASSUME_NONNULL_END
