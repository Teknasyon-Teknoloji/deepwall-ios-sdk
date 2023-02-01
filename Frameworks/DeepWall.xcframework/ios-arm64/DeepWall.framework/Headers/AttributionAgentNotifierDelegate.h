//
//  AttributionAgentNotifierDelegate.h
//  AttributionAgent
//
//  Created by Burak Yalcin on 12.10.2020.
//

#import <Foundation/Foundation.h>
#import "EventServiceProvider.h"
#import "AAReferralsAttributionChangedInfo.h"

NS_ASSUME_NONNULL_BEGIN

@protocol AttributionAgentNotifierDelegate <NSObject>

@optional

- (void)attributionAgentReferralsAttributionChanged:(AAReferralsAttributionChangedInfo *)event;

@end

NS_ASSUME_NONNULL_END
