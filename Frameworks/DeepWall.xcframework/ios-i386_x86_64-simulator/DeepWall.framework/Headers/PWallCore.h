//
//  PWallCore.h
//  PWall
//
//  Created by Burak Yalcin on 25.11.2020.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "PWallEnvironment.h"
#import "PWallConfig.h"
#import "PWallUserProperties.h"
#import "PWallNotifierDelegate.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(PWall)
@interface PWallCore : NSObject

- (instancetype)init NS_UNAVAILABLE;
+ (void)initialize NS_UNAVAILABLE;

/// PWall shared instance
@property (readonly, nonatomic, class) PWallCore *shared;

/// DeepWall config
- (PWallConfig *)config;

/// DeepWall user properties
- (PWallUserProperties *)userProperties;

#pragma mark - Public Functions

/// Initialize PWall SDK
+ (void)initializeWithApiKey:(NSString *)apiKey environment:(PWallEnvironment)environment NS_SWIFT_NAME(initialize(apiKey:environment:));

/// Set user properties to use SDK
- (void)setUserProperties:(PWallUserProperties *)props NS_SWIFT_NAME(setUserProperties(_:));

/// Opens form screen for purchase
- (void)purchaseProductWithCode:(NSString *)productCode inViewController:(UIViewController *)view NS_SWIFT_NAME(purhcaseProduct(with:in:));

#pragma mark - Event Handling

/// Observes PWall SDK Events
- (void)observeEventsFor:(id<PWallNotifierDelegate>)observer;

/// Removes observer for PWall SDK
- (void)removeObserverFor:(id<PWallNotifierDelegate>)observer;

@end

NS_ASSUME_NONNULL_END
