//
//  DeepWallPaywallNotOpenedInfoModel.h
//  DeepWall
//
//  Created by Burak Yalcin on 10.10.2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DeepWallPaywallNotOpenedInfoModel : NSObject

@property (nonatomic) NSInteger pageId;

@property (nonatomic, strong) NSString *reason;

@property (nonatomic, strong) NSString *errorCode;

- (instancetype)initWithPageId:(NSInteger)pageId reason:(NSString *)reason errorCode:(NSString *)errorCode;

@end

NS_ASSUME_NONNULL_END
