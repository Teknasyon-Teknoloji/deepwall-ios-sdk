//
//  AttributionAgentInfo.h
//  AttributionAgent
//
//  Created by Burak Yalcin on 4.10.2020.
//

#import <Foundation/Foundation.h>
#import "AttributionRetrieveSource.h"

NS_ASSUME_NONNULL_BEGIN

@interface AttributionAgentInfo : NSObject

/// Source type for attribution module
@property (nonatomic) AttributionRetrieveSource sourceType;

/// Attribution info for module
@property (nonatomic, strong) NSString *attribution;

- (instancetype)initWithSourceType:(AttributionRetrieveSource)sourceType attribution:(NSString *)attribution;

@end

NS_ASSUME_NONNULL_END
