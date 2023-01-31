//
//  PloutosValidationType.h
//  Ploutos
//
//  Created by Burak Yalcin on 3.10.2020.
//

#import <Foundation/Foundation.h>

/// Ploutos Validation Type
typedef NS_ENUM(NSUInteger, PloutosValidationType) {
	/// Ploutos validation type for purchase operations
	PloutosValidationTypePurchase = 1,
	
	/// Ploutos validation type for restore operations
	PloutosValidationTypeRestore = 2,
	
	/// Ploutos validation type for automatic operations
	PloutosValidationTypeAutomatic = 3
};
