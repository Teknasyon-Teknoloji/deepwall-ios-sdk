//
//  AttributionAgentConfig.h
//  AttributionAgent
//
//  Created by Burak Yalcin on 4.10.2020.
//

#import <Foundation/Foundation.h>
#import "AttributionRetrieveSource.h"

@protocol AttributionAgentConfig <NSObject>

@required
- (AttributionRetrieveSource)sourceType;

@end
