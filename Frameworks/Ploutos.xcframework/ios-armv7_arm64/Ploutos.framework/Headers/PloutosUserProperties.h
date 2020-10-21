//
//  PloutosUserProperties.h
//  Ploutos
//
//  Created by Burak Yalcin on 3.10.2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PloutosUserProperties : NSObject

@property (nonatomic) NSString *uuid;
@property (nonatomic, nullable) NSString *advertiseId;
@property (nonatomic, nullable) NSString *facebookAnonymousId;
@property (nonatomic, nullable) NSString *adjustId;
@property (nonatomic, nullable) NSArray<NSString *> *advertiseAttributions;
@property (nonatomic) NSString *countryCode;
@property (nonatomic) NSString *languageCode;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithUuid:(NSString *)uuid countryCode:(NSString *)countryCode languageCode:(NSString *)languageCode advertiseAttributions:(nullable NSArray<NSString *> *)advertiseAttributions adjustId:(nullable NSString *)adjustId NS_SWIFT_NAME(init(uuid:country:language:advertiseAttributions:adjustId:));

@end

NS_ASSUME_NONNULL_END
