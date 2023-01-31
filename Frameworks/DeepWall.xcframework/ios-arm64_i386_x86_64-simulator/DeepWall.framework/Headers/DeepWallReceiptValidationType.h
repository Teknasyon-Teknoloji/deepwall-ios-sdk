//
//  DeepWallReceiptValidationType.h
//  DeepWall
//
//  Created by Burak Yalcin on 7.10.2020.
//

#import <Foundation/Foundation.h>

/// DeepWall Receipt Validation Type
typedef NS_ENUM(NSUInteger, DeepWallReceiptValidationType) {
	/// DeepWall validation type for purchase operations
	DeepWallReceiptValidationTypePurchase = 1,
	
	/// DeepWall validation type for restore operations
	DeepWallReceiptValidationTypeRestore = 2,
	
	/// DeepWall validation type for automatic operations
	DeepWallReceiptValidationTypeAutomatic = 3
};
