//
//  PloutosProvider.h
//  Ploutos
//
//  Created by Burak Yalcin on 8.12.2020.
//

#import <Foundation/Foundation.h>

/// Ploutos purchase providers
typedef NS_ENUM(NSUInteger, PloutosProvider) {
	/// Ploutos provider for Apple purchases
	PloutosProviderApple = 1,
	
	/// Ploutos provider for Unknown purchases
	PloutosProviderUnknown = 990
};
