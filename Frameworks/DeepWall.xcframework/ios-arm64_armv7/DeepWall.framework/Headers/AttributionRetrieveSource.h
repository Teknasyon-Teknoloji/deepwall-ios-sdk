//
//  AttributionRetrieveSource.h
//  AttributionAgent
//
//  Created by Burak Yalcin on 4.10.2020.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, AttributionRetrieveSource) {
	/// Adjust Source
	AttributionRetrieveSourceAdjust = 1,
	
	/// AppsFlyer Source
	AttributionRetrieveSourceAppsFlyer = 2
};

NS_ASSUME_NONNULL_BEGIN

@interface AttributionRetrieveSourceExt : NSObject

+ (NSString *)sourceNameForSouce:(AttributionRetrieveSource)source;

@end

NS_ASSUME_NONNULL_END
