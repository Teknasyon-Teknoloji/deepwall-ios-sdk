//
//  DeepWallLanguage.h
//  DeepWall
//
//  Created by Burak Yalcin on 8.10.2020.
//

#import <Foundation/Foundation.h>

typedef NSString DeepWallLanguage;

NS_ASSUME_NONNULL_BEGIN

@interface DeepWallLanguageManager : NSObject

+ (NSString *)getLanguageByCode:(NSString *)code NS_SWIFT_NAME(getLanguage(by:));

@end

NS_ASSUME_NONNULL_END
