//
//  DeepWallCore.h
//  DeepWall
//
//  Created by Burak Yalcin on 7.10.2020.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DeepWallConfig.h"
#import "DeepWallUserProperties.h"
#import "DeepWallNotifierDelegate.h"
#import <AttributionAgent/AttributionAgent.h>

/// Typealias for extra data transfers
typedef NSDictionary* DeepWallExtraDataType;

NS_ASSUME_NONNULL_BEGIN

/// DeepWall
NS_SWIFT_NAME(DeepWall)
@interface DeepWallCore : NSObject

/// UNAVAILABLE
- (instancetype)init NS_UNAVAILABLE;

/// UNAVAILABLE
+ (void)initialize NS_UNAVAILABLE;

/// DeepWallCore shared instance
@property (readonly, nonatomic, class) DeepWallCore *shared;


#pragma mark - Public Properties

/// DeepWall config
- (DeepWallConfig *)config;

/// DeepWall user properties
- (DeepWallUserProperties *)userProperties;

/// Advertising identifier
@property (nullable, readonly, nonatomic) NSString *advertisingIdentifier;

/// DeepWall current languagese
@property (readonly, nonatomic) DeepWallLanguage *currentLanguage;

/// DeepWall ready status
@property (readonly) BOOL readyStatus;


#pragma mark - Public Functions

/// Initialize DeepWall SDK
+ (void)initializeWithApiKey:(NSString *)apiKey environment:(DeepWallEnvironment)environment NS_SWIFT_NAME(initialize(apiKey:environment:));


/// Set user properties to use SDK
- (void)setUserProperties:(DeepWallUserProperties *)props NS_SWIFT_NAME(setUserProperties(_:));

/// Update country info for user properties
- (void)updateUserPropertiesCountry:(DeepWallCountry *)country NS_SWIFT_NAME(updateUserProperties(country:));

/// Update language info for user properties
- (void)updateUserPropertiesLanguage:(DeepWallLanguage *)language NS_SWIFT_NAME(updateUserProperties(language:));

/// Update environmentStyle info for user properties
- (void)updateUserPropertiesEnvironmentStyle:(DeepWallEnvironmentStyle)environmentStyle NS_SWIFT_NAME(updateUserProperties(environmentStyle:));

/// Update advertise attribution info for user properties
- (void)updateUserPropertiesDebugAdvertiseAttributions:(NSDictionary<NSString *, NSString *> *)debugAdvertiseAttributions NS_SWIFT_NAME(updateUserProperties(debugAdvertiseAttributions:));

/// Update phoneNumber info for user properties
- (void)updateUserPropertiesPhoneNumber:(NSString *)phoneNumber NS_SWIFT_NAME(updateUserProperties(phoneNumber:));

/// Update user properties
- (void)updateUserPropertiesCountry:(nullable DeepWallCountry *)country language:(nullable DeepWallLanguage *)language environmentStyle:(DeepWallEnvironmentStyle)environmentStyle debugAdvertiseAttributions:(nullable NSDictionary<NSString *, NSString *> *)debugAdvertiseAttributions  NS_SWIFT_NAME(updateUserProperties(country:language:environmentStyle:debugAdvertiseAttributions:));

/// Update user properties
- (void)updateUserPropertiesCountry:(nullable DeepWallCountry *)country language:(nullable DeepWallLanguage *)language environmentStyle:(DeepWallEnvironmentStyle)environmentStyle phoneNumber:(nullable NSString *)phoneNumber debugAdvertiseAttributions:(nullable NSDictionary<NSString *, NSString *> *)debugAdvertiseAttributions  NS_SWIFT_NAME(updateUserProperties(country:language:environmentStyle:phoneNumber:debugAdvertiseAttributions:));


/// Update DeepWall SDK Enabled status
- (void)updateEnabled:(BOOL)enabled;


/// Request paywall method for showing paywalls.
- (void)requestPaywallWithAction:(NSString *)action inView:(UIViewController *)view NS_SWIFT_NAME(requestPaywall(action:in:));
/// Request paywall method for showing paywalls.
- (void)requestPaywallWithAction:(NSString *)action inView:(UIViewController *)view extraData:(nullable DeepWallExtraDataType)extraData NS_SWIFT_NAME(requestPaywall(action:in:extraData:));

/// Closes paywall screen
- (void)closePaywall;

///// Request app tracking screen for showing app tracking screens.
//- (void)requestAppTrackingWithAction:(NSString *)action inView:(UIViewController *)view NS_SWIFT_NAME(requestAppTracking(action:in:));
//
///// Request app tracking screen for showing app tracking screens.
//- (void)requestAppTrackingWithAction:(NSString *)action inView:(UIViewController *)view extraData:(nullable DeepWallExtraDataType)extraData NS_SWIFT_NAME(requestAppTracking(action:in:extraData:));


/// Hide loading indicator from paywall screen
- (void)hidePaywallLoadingIndicator;

/// Validates receipt for type
- (void)validateReceiptForType:(PloutosValidationType)type;
// TODO: DeepWallReceiptValidationType!

#pragma mark - Event Handling

/// Observe events for DeepWall event handling
- (void)observeEventsFor:(id<DeepWallNotifierDelegate>)observer;

/// Remove observer for DeepWall event handling
- (void)removeObserverFor:(id<DeepWallNotifierDelegate>)observer;


@end

NS_ASSUME_NONNULL_END
