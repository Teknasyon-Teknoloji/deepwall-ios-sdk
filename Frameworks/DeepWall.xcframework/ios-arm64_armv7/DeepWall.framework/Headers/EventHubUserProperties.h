//
//  EventHubUserProperties.h
//  EventHub
//
//  Created by Burak Yalcin on 20.02.2021.
//

#import <Foundation/Foundation.h>

/// Typealias for advertise attributions
typedef NSDictionary<NSString *, NSString *> * EHAdvertiseAttributions;
typedef NSDictionary<NSString *, NSString *> * EHTrackerIds;

NS_ASSUME_NONNULL_BEGIN

@interface EventHubUserProperties : NSObject

/// UUID info
@property (nonatomic) NSString *uuid;

/// AdvertiseId info
@property (nonatomic, nullable, readonly) NSString *advertiseId;

/// App version info
@property (nonatomic, nullable) NSString *appVersion;

/// Country info
@property (nonatomic) NSString *countryCode;

/// Language info
@property (nonatomic) NSString *languageCode;

/// FacebookAnonymousId info
@property (nonatomic, nullable) NSString *facebookAnonymousId;

/// AdvertiseAttributions info
@property (nonatomic, nullable) EHAdvertiseAttributions advertiseAttributions;

/// AttributionTrackerId info
@property (nonatomic, nullable) EHTrackerIds attributionTrackerIds;


/// UNAVAILABLE
- (instancetype)init NS_UNAVAILABLE;

/// Initialize method for user properties
- (instancetype)initWithUuid:(NSString *)uuid countryCode:(NSString *)countryCode languageCode:(NSString *)languageCode advertiseAttributions:(nullable NSDictionary<NSString *, NSString *> *)advertiseAttributions attributionTrackerIds:(nullable NSDictionary<NSString *, NSString *> *)attributionTrackerIds NS_SWIFT_NAME(init(uuid:country:language:advertiseAttributions:attributionTrackerIds:));


@end

NS_ASSUME_NONNULL_END
