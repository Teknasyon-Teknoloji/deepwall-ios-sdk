//
//  PloutosEnvironment.h
//  Ploutos
//
//  Created by Burak Yalcin on 3.10.2020.
//

#import <Foundation/Foundation.h>

/// Ploutos environment
typedef NS_ENUM(NSUInteger, PloutosEnvironment) {
	/// Ploutos sandbox environment
	PloutosEnvironmentSandbox,
	
	/// Ploutos production environment
	PloutosEnvironmentProduction
};
