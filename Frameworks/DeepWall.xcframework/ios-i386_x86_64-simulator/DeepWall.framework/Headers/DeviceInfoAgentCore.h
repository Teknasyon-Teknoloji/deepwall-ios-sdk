//
//  DeviceInfoAgentCore.h
//  DeviceInfoAgent
//
//  Created by Burak Yalcin on 12.10.2020.
//

#import <Foundation/Foundation.h>
#import "DADeviceInfoModel.h"

typedef NSDictionary<NSString *, NSString *>* LocationServiceItem;
typedef NSMutableDictionary<NSString *, LocationServiceItem>* LocationService;


NS_ASSUME_NONNULL_BEGIN

@interface DeviceInfoAgentCore : NSObject

+ (instancetype)sharedManager;

@property (nonatomic) DADeviceInfoModel *deviceInfoModel;
@property (nonatomic) LocationService locationInfo;

- (void)requestForIpWithName:(NSString *)name url:(NSString *)url headers:(NSDictionary *)headers regexs:(NSDictionary *)regexs;

@end

NS_ASSUME_NONNULL_END
