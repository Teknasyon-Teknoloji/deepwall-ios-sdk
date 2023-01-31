//
//  EHApiError.h
//  EventHub
//
//  Created by Burak Yalcin on 7.02.2021.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

static NSErrorDomain EHApiErrorErrorDomain = @"com.eventhub.sdk";
typedef NS_ERROR_ENUM(EHApiErrorErrorDomain, EHApiErrorType) {
	EHApiErrorTypeUnauthorized,
	EHApiErrorTypeRequest,
	EHApiErrorTypeDecoding,
	EHApiErrorTypeServer,
	EHApiErrorTypeUnknown
};

@interface EHApiError : NSObject

@property (nonatomic) EHApiErrorType errorType;
@property (nonatomic) NSInteger errorCode;
@property (nonatomic, nullable) NSError *error;
@property (nonatomic, nullable) NSString *message;
@property (nonatomic, nullable) NSURLResponse *response;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithDomain:(NSErrorDomain)domain code:(NSInteger)code userInfo:(nullable NSDictionary<NSErrorUserInfoKey, id> *)dict NS_UNAVAILABLE;

- (instancetype)initWithType:(EHApiErrorType)type code:(NSInteger)code error:(nullable NSError *)error message:(nullable NSString *)message response:(nullable NSURLResponse *)response;
+ (instancetype)errorWithType:(EHApiErrorType)type error:(nullable NSError *)error message:(nullable NSString *)message response:(nullable NSURLResponse *)response;
+ (instancetype)errorWithType:(EHApiErrorType)type code:(NSInteger)code error:(nullable NSError *)error message:(nullable NSString *)message response:(nullable NSURLResponse *)response;

@end

NS_ASSUME_NONNULL_END
