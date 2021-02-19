//
//  DeepWallLandingOpenInfoModel.h
//  DeepWall
//
//  Created by Burak Yalcin on 10.10.2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// DeepWall paywall opened event model
@interface DeepWallPaywallOpenedInfoModel : NSObject

/// Page id info
@property (nonatomic) NSInteger pageId;

/// Internal
- (instancetype)initWithPageId:(NSInteger)pageId;

@end

/// DeepWall paywall action show disabled event model
@interface DeepWallPaywallActionShowDisabledInfoModel : NSObject

/// Page id info
@property (nonatomic) NSInteger pageId;


/// Internal
- (instancetype)initWithPageId:(NSInteger)pageId;

@end


NS_ASSUME_NONNULL_END
