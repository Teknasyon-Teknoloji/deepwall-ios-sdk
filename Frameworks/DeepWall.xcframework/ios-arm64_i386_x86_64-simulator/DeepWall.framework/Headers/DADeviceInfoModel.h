//
//  DADeviceInfoModel.h
//  DeviceInfoAgent
//
//  Created by Burak Yalcin on 12.10.2020.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DADeviceInfoModel : NSObject

@property (nonatomic, readonly) UIDevice *currentDevice;

@property (nonatomic, readonly) NSString *modelId;

@end

NS_ASSUME_NONNULL_END
