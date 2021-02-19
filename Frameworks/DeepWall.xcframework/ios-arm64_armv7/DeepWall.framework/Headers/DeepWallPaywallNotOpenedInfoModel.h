//
//  DeepWallPaywallNotOpenedInfoModel.h
//  DeepWall
//
//  Created by Burak Yalcin on 10.10.2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// DeepWall paywall not opened event model
@interface DeepWallPaywallNotOpenedInfoModel : NSObject

/// Page id info
@property (nonatomic) NSInteger pageId;

/// Reason info
@property (nonatomic, strong) NSString *reason;

/// Error code info
@property (nonatomic, strong) NSString *errorCode;


/// Internal
- (instancetype)initWithPageId:(NSInteger)pageId reason:(NSString *)reason errorCode:(NSString *)errorCode;

@end

NS_ASSUME_NONNULL_END
