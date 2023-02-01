//
//  PloutosCore.h
//  Ploutos
//
//  Created by Burak Yalcin on 3.10.2020.
//

#import <Foundation/Foundation.h>
#import "PloutosConfig.h"
#import "PloutosUserProperties.h"
#import "PloutosValidationType.h"
#import "PloutosNotifierDelegate.h"
#import "PloutosProvider.h"

NS_ASSUME_NONNULL_BEGIN

/// Ploutos
NS_SWIFT_NAME(Ploutos)
@interface PloutosCore : NSObject

/// UNAVAILABLE
- (instancetype)init NS_UNAVAILABLE;

/// UNAVAILABLE
+ (void)initialize NS_UNAVAILABLE;

/// Ploutos shared instance
@property (readonly, nonatomic, class) PloutosCore *shared;
//+ (instancetype)sharedManager NS_SWIFT_NAME(sharedTest());


#pragma mark - Public Properties

/// Ploutos config
- (PloutosConfig *)config;

/// Ploutos user properties
- (PloutosUserProperties *)userProperties;

/// Receipt for the application purchased from Apple App Store.
@property (readonly, nonatomic) NSString *appStoreReceipt;

/// Advertising identifier
@property (readonly, nonatomic) NSString *advertisingIdentifier;

#pragma mark - Public Functions

/// Initialize Ploutos SDK
+ (void)initializeWithApiKey:(NSString *)apiKey environment:(PloutosEnvironment)environment NS_SWIFT_NAME(initialize(apiKey:environment:));

/// Set user properties to use SDK
- (void)setUserProperties:(PloutosUserProperties *)props NS_SWIFT_NAME(setUserProperties(_:));

/// Update country info for user properties
- (void)updateUserPropertiesCountry:(NSString *)country NS_SWIFT_NAME(updateUserProperties(country:));

/// Update language info for user properties
- (void)updateUserPropertiesLanguage:(NSString *)language NS_SWIFT_NAME(updateUserProperties(language:));

/// Update advertise attribution info for user properties
- (void)updateUserPropertiesAdvertiseAttributions:(NSDictionary<NSString *, NSString *> *)advertiseAttributions NS_SWIFT_NAME(updateUserProperties(advertiseAttributions:));

/// Update user properties
- (void)updateUserPropertiesCountry:(nullable NSString *)country language:(nullable NSString *)language advertiseAttributions:(nullable NSDictionary<NSString *, NSString *> *)advertiseAttributions  NS_SWIFT_NAME(updateUserProperties(country:language:advertiseAttributions:));

/// Validate receipt for type
- (void)validateReceiptForType:(PloutosValidationType)type provider:(PloutosProvider)provider NS_SWIFT_NAME(validateReceipt(for:provider:));

/// Validate receipt for type
- (void)validateReceiptForType:(PloutosValidationType)type provider:(PloutosProvider)provider receipt:(nullable NSString *)receipt NS_SWIFT_NAME(validateReceipt(for:provider:receipt:));

/// Validate receipt for type
- (void)validateReceiptForType:(PloutosValidationType)type provider:(PloutosProvider)provider receipt:(nullable NSString *)receipt applicationId:(nullable NSNumber *)applicationId testPageId:(nullable NSNumber *)testPageId NS_SWIFT_NAME(validateReceipt(for:provider:receipt:applicationId:testPageId:));



#pragma mark - Event Handling

/// Observe events for Ploutos event handling
- (void)observeEventsFor:(id<PloutosNotifierDelegate>)observer;

/// Remove observer for Ploutos event handling
- (void)removeObserverFor:(id<PloutosNotifierDelegate>)observer;


@end

NS_ASSUME_NONNULL_END
