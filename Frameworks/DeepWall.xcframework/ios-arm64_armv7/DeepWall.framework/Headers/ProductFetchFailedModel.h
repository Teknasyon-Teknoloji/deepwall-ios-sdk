//
//  ProductFetchFailedModel.h
//  PurchaseKit
//
//  Created by Burak Yalcin on 12.10.2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ProductFetchFailedModel : NSObject

@property (nonatomic) NSString *reason;

@property (nonatomic) NSString *errorCode;

- (instancetype)initWithReason:(NSString *)reason errorCode:(NSString *)errorCode;

@end

NS_ASSUME_NONNULL_END
