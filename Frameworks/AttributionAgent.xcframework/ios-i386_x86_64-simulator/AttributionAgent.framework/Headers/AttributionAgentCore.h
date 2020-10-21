//
//  AttributionAgentCore.h
//  AttributionAgent
//
//  Created by Burak Yalcin on 4.10.2020.
//

#import <Foundation/Foundation.h>
#import "AttributionAgentConfig.h"
#import "AttributionAgentInfo.h"
#import "AttributionAgentNotifierDelegate.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(AttributionAgent)
@interface AttributionAgentCore : NSObject

//@property (nonatomic, readonly, class) AttributionAgentCore *shared;

+ (instancetype)shared;

#pragma mark - Public Properties

/// Ready status for sub modules
@property (readonly, nonatomic) BOOL readyStatus;

/// RetrievedAttributes from submodules
@property (readonly, nonatomic, strong) NSArray<AttributionAgentInfo *> *retrievedAttributes;

#pragma mark - Public Methods

- (void)prepareWithConfigs:(NSArray<AttributionAgentConfig> *)configs NS_SWIFT_NAME(prepare(configs:));


#pragma mark - Event Handling

- (void)observeEventsFor:(id<AttributionAgentNotifierDelegate>)observer;
- (void)removeObserverFor:(id<AttributionAgentNotifierDelegate>)observer;



@end

NS_ASSUME_NONNULL_END
