//
//  AttributionAgentAdjustConfig.h
//  AttributionAgent
//
//  Created by Burak Yalcin on 4.10.2020.
//

#import <Foundation/Foundation.h>
#import "AttributionAgentConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface AttributionAgentAdjustConfig: NSObject <AttributionAgentConfig>

@property (nonatomic, strong) NSString *token;

- (instancetype)initWithToken:(NSString *)token;

@end

NS_ASSUME_NONNULL_END
