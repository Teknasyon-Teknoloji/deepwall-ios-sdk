//
//  AttributionAgentTrackerInfo.h
//  AttributionAgent
//
//  Created by Burak Yalcin on 20.01.2021.
//

#import <Foundation/Foundation.h>
#import "AttributionRetrieveSource.h"

NS_ASSUME_NONNULL_BEGIN

@interface AttributionAgentTrackerInfo : NSObject

/// Source type for attribution module
@property (nonatomic) AttributionRetrieveSource sourceType;

/// Attribution info for module
@property (nonatomic, strong) NSString *trackerId;

- (instancetype)initWithSourceType:(AttributionRetrieveSource)sourceType trackerId:(NSString *)trackerId;

@end

NS_ASSUME_NONNULL_END
