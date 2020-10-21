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

typedef PloutosValidateReceiptResult* DeepWallValidateReceiptResult;

NS_ASSUME_NONNULL_BEGIN

@interface DeepWallNotifier : EPEventNotifierManager

@end

NS_ASSUME_NONNULL_END
