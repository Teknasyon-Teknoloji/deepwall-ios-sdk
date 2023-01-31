//
//  AAReferralsAttributionChangedInfo.h
//  AttributionAgent
//
//  Created by Burak Yalcin on 12.10.2020.
//

#import <Foundation/Foundation.h>
#import "AttributionRetrieveSource.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ReferralsAttributionChangedInfo)
@interface AAReferralsAttributionChangedInfo : NSObject

@property (nonatomic) AttributionRetrieveSource source;
@property (nonatomic, nullable) NSString *attribution;

- (instancetype)initWithSource:(AttributionRetrieveSource)source attribution:(nullable NSString *)attribution;

@end

NS_ASSUME_NONNULL_END
