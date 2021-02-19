//
//  DeepWallEnvironmentStyle.h
//  DeepWall
//
//  Created by Burak Yalcin on 8.10.2020.
//

#import <Foundation/Foundation.h>

/// DeepWall environment style for paywalls
typedef NS_ENUM(NSInteger, DeepWallEnvironmentStyle) {
	/// DeepWall automatic environment style based on system
	DeepWallEnvironmentStyleAutomatic = 0,
	
	/// DeepWall light environment style
	DeepWallEnvironmentStyleLight = 1,
	
	/// DeepWall dark environment style
	DeepWallEnvironmentStyleDark = 2,
};
