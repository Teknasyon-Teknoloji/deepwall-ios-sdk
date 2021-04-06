//
//  PWallNotifierDelegate.h
//  PWall
//
//  Created by Burak Yalcin on 7.12.2020.
//

#import <Foundation/Foundation.h>
#import "EventServiceProvider.h"
#import "PWallPurchaseSuccessInfo.h"
#import "PWallPurchaseFailedInfo.h"

NS_ASSUME_NONNULL_BEGIN

@protocol PWallNotifierDelegate <EPEventNotifierDelegate>

@optional

- (void)pwallFormRequested;
- (void)pwallFormResponseReceived;

- (void)pwallFormOpened;
- (void)pwallFormClosed;

- (void)pwallPurchaseSuccess:(PWallPurchaseSuccessInfo *)event;
- (void)pwallPurchaseFailed:(PWallPurchaseFailedInfo *)event;

@end

NS_ASSUME_NONNULL_END
