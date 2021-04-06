//
//  PWallEnvironmentStyle.h
//  PWall
//
//  Created by Burak Yalcin on 22.12.2020.
//

#import <Foundation/Foundation.h>

/// PWall environment style for paywalls
typedef NS_ENUM(NSUInteger, PWallEnvironmentStyle) {
	/// PWall automatic environment style based on system
	PWallEnvironmentStyleAutomatic = -7,
	
	/// PWall light environment style
	PWallEnvironmentStyleLight = 0,
	
	/// PWall dark environment style
	PWallEnvironmentStyleDark = 1,
};
