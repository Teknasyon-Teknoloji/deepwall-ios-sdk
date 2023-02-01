//
//  DeepWallEnvironmentStyle.h
//  DeepWall
//
//  Created by Burak Yalcin on 8.10.2020.
//

#import <Foundation/Foundation.h>

/// DeepWall environment style for paywalls
typedef NS_ENUM(NSUInteger, DeepWallEnvironmentStyle) {
	/// DeepWall automatic environment style based on system
	DeepWallEnvironmentStyleAutomatic = 999,
	
	/// DeepWall light environment style
	DeepWallEnvironmentStyleLight = 0,
	
	/// DeepWall dark environment style
	DeepWallEnvironmentStyleDark = 1,
};
