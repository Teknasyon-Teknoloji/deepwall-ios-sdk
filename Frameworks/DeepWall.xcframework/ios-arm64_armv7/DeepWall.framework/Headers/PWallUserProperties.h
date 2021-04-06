//
//  PWallUserProperties.h
//  PWall
//
//  Created by Burak Yalcin on 25.11.2020.
//

#import <Foundation/Foundation.h>
#import "PWallEnvironmentStyle.h"

NS_ASSUME_NONNULL_BEGIN

@interface PWallUserProperties : NSObject

@property (nonatomic) NSString *uuid;
@property (nonatomic) NSString *country;
@property (nonatomic, nullable) NSString *phoneNumber;
@property (nonatomic, nullable) NSString *emailAddress;
@property (nonatomic, nullable) NSString *firstName;
@property (nonatomic, nullable) NSString *lastName;
@property (nonatomic) PWallEnvironmentStyle environmentStyle;


- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithUuid:(NSString *)uuid country:(NSString *)country;
- (instancetype)initWithUuid:(NSString *)uuid country:(NSString *)country phoneNumber:(nullable NSString *)phoneNumber;

@end

NS_ASSUME_NONNULL_END
