//
//  PurchaseKitStatus.h
//  PurchaseKit
//
//  Created by Burak Yalcin on 1.10.2020.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, PurchaseKitStatus) {
	PurchaseKitStatusInitialized,
	PurchaseKitStatusProductsRequested,
	PurchaseKitStatusProductsFetched,
	PurchaseKitStatusProductsFetchFailed,
	PurchaseKitStatusNoProductAvailable
};
