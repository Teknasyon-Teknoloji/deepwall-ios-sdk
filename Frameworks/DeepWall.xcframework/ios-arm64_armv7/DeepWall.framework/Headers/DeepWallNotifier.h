//
//  DeepWallNotifier.h
//  DeepWall
//
//  Created by Burak Yalcin on 9.10.2020.
//

#import <Foundation/Foundation.h>
#import <EventServiceProvider/EventServiceProvider.h>
#import "DeepWallNotifierDelegate.h"
#import <Ploutos/Ploutos.h>

/// DeepWall validate receipt result
typedef PloutosValidateReceiptResult* DeepWallValidateReceiptResult;

NS_ASSUME_NONNULL_BEGIN

/// DeepWall event notifier class for observing events
@interface DeepWallNotifier : EPEventNotifierManager

@end

NS_ASSUME_NONNULL_END
