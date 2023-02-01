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

/// Test id info
@property (nonatomic, strong, nullable) NSNumber *testId;

/// Related test id info
@property (nonatomic, strong, nullable) NSNumber *relatedTestId;

/// Is Display info
@property (nonatomic) BOOL isDisplay;


/// Internal
- (instancetype)initWithPageId:(NSInteger)pageId;

@end

/// DeepWall paywall action show disabled event model
@interface DeepWallPaywallActionShowDisabledInfoModel : NSObject

/// Page id info
@property (nonatomic) NSInteger pageId;

/// Test id info
@property (nonatomic, strong, nullable) NSNumber *testId;

/// Related test id info
@property (nonatomic, strong, nullable) NSNumber *relatedTestId;

/// Is Display info
@property (nonatomic) BOOL isDisplay;


/// Internal
- (instancetype)initWithPageId:(NSInteger)pageId;

@end


NS_ASSUME_NONNULL_END
