//
//  DeepWallCountry.h
//  DeepWall
//
//  Created by Burak Yalcin on 8.10.2020.
//

#import <Foundation/Foundation.h>

/// Typealias for country info
typedef NSString DeepWallCountry;

NS_ASSUME_NONNULL_BEGIN

/// DeepWall country manager for country info
@interface DeepWallCountryManager : NSObject

/** Returns DeepWall country info from country code
 * @return `DeepWallCountry`
 */
+ (NSString *)getCountryByCode:(NSString *)code NS_SWIFT_NAME(getCountry(by:));

@end

NS_ASSUME_NONNULL_END
