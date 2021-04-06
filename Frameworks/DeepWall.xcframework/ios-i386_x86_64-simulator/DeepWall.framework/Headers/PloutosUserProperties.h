//
//  PloutosUserProperties.h
//  Ploutos
//
//  Created by Burak Yalcin on 3.10.2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Ploutos user properties
@interface PloutosUserProperties : NSObject

/// UUID info
@property (nonatomic) NSString *uuid;

/// AdvertiseId info
@property (nonatomic, nullable) NSString *advertiseId;

/// FacebookAnonymousId info
@property (nonatomic, nullable) NSString *facebookAnonymousId;

/// AdjustId info
@property (nonatomic, nullable) NSString *adjustId;

/// AdvertiseAttributions info
@property (nonatomic, nullable) NSDictionary<NSString *, NSString *> *advertiseAttributions;

/// AttributionTrackerId info
@property (nonatomic, nullable) NSDictionary<NSString *, NSString *> *attributionTrackerIds;

/// Country info
@property (nonatomic) NSString *countryCode;

/// Language info
@property (nonatomic) NSString *languageCode;

/// UNAVAILABLE
- (instancetype)init NS_UNAVAILABLE;

/// Initialize method for user properties
- (instancetype)initWithUuid:(NSString *)uuid countryCode:(NSString *)countryCode languageCode:(NSString *)languageCode advertiseAttributions:(nullable NSDictionary<NSString *, NSString *> *)advertiseAttributions attributionTrackerIds:(nullable NSDictionary<NSString *, NSString *> *)attributionTrackerIds NS_SWIFT_NAME(init(uuid:country:language:advertiseAttributions:attributionTrackerIds:));

@end

NS_ASSUME_NONNULL_END
