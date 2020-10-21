//
//  DeepWallUserProperties.h
//  DeepWall
//
//  Created by Burak Yalcin on 7.10.2020.
//

#import <Foundation/Foundation.h>
#import "DeepWallCountry.h"
#import "DeepWallLanguage.h"
#import "DeepWallEnvironmentStyle.h"
#import <Ploutos/Ploutos.h>
#import <DeviceInfoAgent/DeviceInfoAgent.h>

typedef NSArray<NSString *> * DWAdvertiseAttributions;

NS_ASSUME_NONNULL_BEGIN

@interface DeepWallUserProperties : NSObject

@property (nonatomic) NSString *uuid;
@property (nonatomic, nullable) NSString *advertiseId;
@property (nonatomic, nullable) NSString *appVersion;
@property (nonatomic) DeepWallCountry *country;
@property (nonatomic) DeepWallLanguage *language;
@property (nonatomic) DeepWallEnvironmentStyle environmentStyle;
@property (nonatomic, nullable) DWAdvertiseAttributions advertiseAttributions;
@property (nonatomic, nullable) DWAdvertiseAttributions debugAdvertiseAttributions;

@property (nonatomic, nullable) LocationService locationServiceInfos;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithUuid:(NSString *)uuid country:(DeepWallCountry *)country language:(DeepWallLanguage *)language;
- (instancetype)initWithUuid:(NSString *)uuid country:(DeepWallCountry *)country language:(DeepWallLanguage *)language environmentStyle:(DeepWallEnvironmentStyle)environmentStyle;
- (instancetype)initWithUuid:(NSString *)uuid country:(DeepWallCountry *)country language:(DeepWallLanguage *)language environmentStyle:(DeepWallEnvironmentStyle)environmentStyle debugAdvertiseAttributions:(nullable DWAdvertiseAttributions)debugAdvertiseAttributions;

- (PloutosUserProperties *)toPloutosProps;

@end

NS_ASSUME_NONNULL_END
