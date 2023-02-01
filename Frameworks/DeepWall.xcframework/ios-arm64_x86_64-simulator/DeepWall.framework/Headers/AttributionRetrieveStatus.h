//
//  AttributionRetrieveStatus.h
//  AttributionAgent
//
//  Created by Burak Yalcin on 4.10.2020.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, AttributionRetrieveStatus) {
	AttributionRetrieveStatusNotSet = 1,
	AttributionRetrieveStatusPrepared = 2,
	AttributionRetrieveStatusRetrieving = 3,
	AttributionRetrieveStatusRetrieved = 4
};
