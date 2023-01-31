//
//  PloutosNotifierDelegate.h
//  Ploutos
//
//  Created by Burak Yalcin on 6.10.2020.
//

#import <Foundation/Foundation.h>
#import "EventServiceProvider.h"
#import "PloutosValidateReceiptResult.h"
#import "PloutosValidateReceiptFailed.h"

NS_ASSUME_NONNULL_BEGIN

/// Ploutos event notifier protocol for observing events
@protocol PloutosNotifierDelegate <EPEventNotifierDelegate>

@optional

/// Validate receipt success response event
- (void)ploutosNotifierValidateReceiptResult:(PloutosValidateReceiptResult *)event;

/// Validate receipt failed response event
- (void)ploutosNotifierValidateReceiptFailed:(PloutosValidateReceiptFailed *)event;

@end

NS_ASSUME_NONNULL_END
