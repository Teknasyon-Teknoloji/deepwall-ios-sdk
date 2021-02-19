//
//  PloutosConfig.h
//  Ploutos
//
//  Created by Burak Yalcin on 3.10.2020.
//

#import <Foundation/Foundation.h>
#import "PloutosEnvironment.h"

NS_ASSUME_NONNULL_BEGIN

/// Ploutos config
@interface PloutosConfig : NSObject

/// Api key value to use Ploutos SDK
@property (nonatomic, strong) NSString *apiKey;

/// Environment info for Ploutos SDK
@property (nonatomic) PloutosEnvironment environment;

/// Initialize method for config
- (instancetype)initWithApiKey:(NSString *)apiKey environment:(PloutosEnvironment)environment;

@end

NS_ASSUME_NONNULL_END
