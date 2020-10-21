//
//  DeepWallError.h
//  DeepWall
//
//  Created by Burak Yalcin on 9.10.2020.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, DeepWallError) {
	DeepWallErrorPageApiResponseInvalid = 10101,
	DeepWallErrorPageApiProductsEmpty = 10102,
	
	DeepWallErrorBundleGzippedDataInvalid = 10201,
	DeepWallErrorBundleStringDataInvalid = 10202,
	DeepWallErrorBundleAvailableProductsEmpty = 10203,
	DeepWallErrorBundleAvailableProductsInvalid = 10204,
	DeepWallErrorBundleFileError = 10205,
	
	DeepWallErrorRequestAlreadyRequesting = 10301,
	DeepWallErrorRequestDeepWallDisabled = 10302,
	DeepWallErrorRequestUserPropertiesDidNotSet = 10303
};
