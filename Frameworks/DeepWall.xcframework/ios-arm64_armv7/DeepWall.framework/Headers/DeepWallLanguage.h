//
//  DeepWallLanguage.h
//  DeepWall
//
//  Created by Burak Yalcin on 8.10.2020.
//

#import <Foundation/Foundation.h>

/// Typealias for language info
typedef NSString DeepWallLanguage;

NS_ASSUME_NONNULL_BEGIN

/// DeepWall language manager for language info
@interface DeepWallLanguageManager : NSObject

/** Returns DeepWall language info from language code
 * @return `DeepWallLanguage`
 */
+ (NSString *)getLanguageByCode:(NSString *)code NS_SWIFT_NAME(getLanguage(by:));

@end

NS_ASSUME_NONNULL_END
