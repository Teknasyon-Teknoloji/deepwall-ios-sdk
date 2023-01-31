//
//  AttributionAgentAppsFlyerConfig.h
//  AttributionAgent
//
//  Created by Burak Yalcin on 27.10.2020.
//

#import <Foundation/Foundation.h>
#import "AttributionAgentConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface AttributionAgentAppsFlyerConfig : NSObject <AttributionAgentConfig>

@property (nonatomic, strong) NSString *devKey;
@property (nonatomic, strong) NSString *appId;
@property (nonatomic, strong) NSNumber *waitTimeForATT;

- (instancetype)initWithDevKey:(NSString *)devKey appId:(NSString *)appId waitTimeForATT:(nullable NSNumber *)waitTimeForATT;

@end

NS_ASSUME_NONNULL_END
