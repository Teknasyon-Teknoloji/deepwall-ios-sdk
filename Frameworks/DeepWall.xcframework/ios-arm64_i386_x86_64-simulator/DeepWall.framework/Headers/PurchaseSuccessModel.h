//
//  PurchaseSuccessModel.h
//  PurchaseKit
//
//  Created by Burak Yalcin on 12.10.2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PurchaseSuccessModel : NSObject

@property (nonatomic) NSString *productCode;

- (instancetype)initWithProductCode:(NSString *)productCode;

@end

NS_ASSUME_NONNULL_END
