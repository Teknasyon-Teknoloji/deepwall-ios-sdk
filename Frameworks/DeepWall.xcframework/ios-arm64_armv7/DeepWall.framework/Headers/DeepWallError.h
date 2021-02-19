//
//  DeepWallError.h
//  DeepWall
//
//  Created by Burak Yalcin on 9.10.2020.
//

#import <Foundation/Foundation.h>

/// DeepWall Error enum for error handling
typedef NS_ENUM(NSUInteger, DeepWallError) {
	/// DeepWall page api response invalid error
	DeepWallErrorPageApiResponseInvalid = 10101,
	/// DeepWall page api products empty error
	DeepWallErrorPageApiProductsEmpty = 10102,
	/// DeepWall page api category unknown
	DeepWallErrorPageApiCategoryUnknown = 10103,
	
	/// DeepWall bundle data invalid error
	DeepWallErrorBundleGzippedDataInvalid = 10201,
	/// DeepWall bundle data invalid error
	DeepWallErrorBundleStringDataInvalid = 10202,
	/// DeepWall bundle available products empty error
	DeepWallErrorBundleAvailableProductsEmpty = 10203,
	/// DeepWall bundle available products invalid error
	DeepWallErrorBundleAvailableProductsInvalid = 10204,
	/// DeepWall bundle file error
	DeepWallErrorBundleFileError = 10205,
	
	/// DeepWall request already active error
	DeepWallErrorRequestAlreadyRequesting = 10301,
	/// DeepWall request DeepWall disabled error
	DeepWallErrorRequestDeepWallDisabled = 10302,
	/// DeepWall request user properties did not set error
	DeepWallErrorRequestUserPropertiesDidNotSet = 10303,
	
	/// DeepWall user invalid for app tracking
	DeepWallErrorRequestUserInvalidForAppTracking = 10401
	
	
};
