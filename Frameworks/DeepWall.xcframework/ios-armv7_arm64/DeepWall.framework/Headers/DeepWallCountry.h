//
//  DeepWallCountry.h
//  DeepWall
//
//  Created by Burak Yalcin on 8.10.2020.
//

#import <Foundation/Foundation.h>

typedef NSString DeepWallCountry;

NS_ASSUME_NONNULL_BEGIN

@interface DeepWallCountryManager : NSObject

+ (NSString *)getCountryByCode:(NSString *)code NS_SWIFT_NAME(getCountry(by:));

@end

NS_ASSUME_NONNULL_END
