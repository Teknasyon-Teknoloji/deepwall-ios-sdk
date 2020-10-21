//
//  DeepWallLandingOpenInfoModel.h
//  DeepWall
//
//  Created by Burak Yalcin on 10.10.2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DeepWallPaywallOpenedInfoModel : NSObject

@property (nonatomic) NSInteger pageId;

- (instancetype)initWithPageId:(NSInteger)pageId;

@end


@interface DeepWallPaywallActionShowDisabledInfoModel : NSObject

@property (nonatomic) NSInteger pageId;

- (instancetype)initWithPageId:(NSInteger)pageId;

@end


NS_ASSUME_NONNULL_END
