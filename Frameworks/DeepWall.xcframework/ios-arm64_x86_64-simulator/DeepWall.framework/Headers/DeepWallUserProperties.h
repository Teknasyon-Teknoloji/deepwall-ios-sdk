//
//  DeepWallUserProperties.h
//  DeepWall
//
//  Created by Burak Yalcin on 7.10.2020.
//

#import <Foundation/Foundation.h>
#import "DeepWallCountry.h"
#import "DeepWallLanguage.h"
#import "DeepWallEnvironmentStyle.h"
#import "Ploutos.h"
#import "DeviceInfoAgent.h"
#import "EventHub.h"

/// Typealias for advertise attributions
typedef NSDictionary<NSString *, NSString *> * DWAdvertiseAttributions;
typedef NSDictionary<NSString *, NSString *> * DWTrackerIds;

NS_ASSUME_NONNULL_BEGIN

/// DeepWall user properties
@interface DeepWallUserProperties : NSObject

/// UUID info
@property (nonatomic) NSString *uuid;

/// AdvertiseId info
@property (nonatomic, nullable) NSString *advertiseId;

/// App version info
@property (nonatomic, nullable) NSString *appVersion;

/// Country info
@property (nonatomic) DeepWallCountry *country;

/// Language info
@property (nonatomic) DeepWallLanguage *language;

/// Environment style info
@property (nonatomic) DeepWallEnvironmentStyle environmentStyle;

/// Advertise attributions info
@property (nonatomic, nullable) DWAdvertiseAttributions advertiseAttributions;

/// Debug advertise attributions info
@property (nonatomic, nullable) DWAdvertiseAttributions debugAdvertiseAttributions;

/// Location service infos
@property (nonatomic, nullable) LocationService locationServiceInfos;

/// Optional phone number info
@property (nonatomic, nullable) NSString *phoneNumber;

/// Optional firstName info
@property (nonatomic, nullable) NSString *firstName;

/// Optional lastName info
@property (nonatomic, nullable) NSString *lastName;

/// Optional email info
@property (nonatomic, nullable) NSString *emailAddress;


/// UNAVAILABLE
- (instancetype)init NS_UNAVAILABLE;

/// Initialize method for user properties
- (instancetype)initWithUuid:(NSString *)uuid country:(DeepWallCountry *)country language:(DeepWallLanguage *)language;

/// Initialize method for user properties
- (instancetype)initWithUuid:(NSString *)uuid country:(DeepWallCountry *)country language:(DeepWallLanguage *)language environmentStyle:(DeepWallEnvironmentStyle)environmentStyle;

/// Initialize method for user properties
- (instancetype)initWithUuid:(NSString *)uuid country:(DeepWallCountry *)country language:(DeepWallLanguage *)language environmentStyle:(DeepWallEnvironmentStyle)environmentStyle debugAdvertiseAttributions:(nullable DWAdvertiseAttributions)debugAdvertiseAttributions;

/// Initialize method for user properties
- (instancetype)initWithUuid:(NSString *)uuid country:(DeepWallCountry *)country language:(DeepWallLanguage *)language environmentStyle:(DeepWallEnvironmentStyle)environmentStyle phoneNumber:(nullable NSString *)phoneNumber debugAdvertiseAttributions:(nullable DWAdvertiseAttributions)debugAdvertiseAttributions;

/// Internal
- (PloutosUserProperties *)toPloutosProps;

/// Internal
- (EventHubUserProperties *)toEventHubProps;

@end

NS_ASSUME_NONNULL_END
