

# DeepWall

[![Platform](https://img.shields.io/cocoapods/p/DeepWall)](https://cocoapods.org/pods/deepwall)
[![Cocoapods](https://img.shields.io/cocoapods/v/DeepWall)](https://cocoapods.org/pods/deepwall)


DeepWall is a microservice that makes it easy to manage landing page screens of your application.


## Installation

### CocoaPods

> [CocoaPods](https://cocoapods.org) is a dependency manager for Cocoa projects. For usage and installation instructions, visit their website.


DeepWall is available through CocoaPods. To install it, add the following lines to your `Podfile`.

1. Add DeepWall pod.

```rb
use_frameworks!

pod 'DeepWall'
```

2. Run `pod install` or `pod update`.
3. Then, you could use DeepWall by adding `import DeepWall` to your project files.

## Usage

### Initialization

```swift
import DeepWall

let yourApiKey = "{YOUR_API_KEY}"
let environment: DeepWallEnvironment = .sandbox
DeepWall.initialize(apiKey: yourApiKey, environment: environment)
```

Replace `{YOUR_API_KEY}` with your app token. You can find this key in your [dashboard](https://console.deepwall.com).

Depending on whether you build your app for testing or for production, you must set environment with one of these values:

```swift
let environment: DeepWallEnvironment = .sandbox
let environment: DeepWallEnvironment = .production
```

**Important:**
> This value should be set to `.sandbox` only during testing your application. Make sure to set the environment to `.production` just before you publish the app.

We use this environment to distinguish between real traffic and test traffic from test devices. It is very important that you keep this value meaningful at all times!

### Configuration

DeepWall need to know following user properties for targeting.

- UUID: `String` 
	- Unique identifer for specifying user profile or device.
- Country: `DeepWallCountry`
	- Two-letter country code -- [ISO 3166-1 alpha-2](https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2)
	- Usage: `DeepWallCountryManager.getCountry(by: "TR") // TURKEY`
- Language: `DeepWallLanguage`
	- Two-letter language code -- [ISO 639-1](https://en.wikipedia.org/wiki/List_of_ISO_639-1_codes)
	- Usage: `DeepWallLanguageManager.getLanguage(by: "tr") // TURKISH`
- Environment Style: `DeepWallEnvironmentStyle`
	- Environment style for landing page appearance.
	- Values:
		- `automatic`: Uses system appearance (Default)
		- `light`: Light appearance
		- `dark`: Dark appearance
 - Debug Advertise Attributions: `DeepWallAdvertiseAttributions`
	 - Advertise attribution info for debugging purposes.
	 - Usage: `let attribution = ["debug_attribution", "debug_campaign_attribution"]`

**Important:**
> You must call `setUserProperties` method before requesting any landing page.
```swift
let userProperties = DeepWallUserProperties(uuid: uuid, country: country, language: language, debugAdvertiseAttributions: debugAttributions)

DeepWall.shared.setUserProperties(userProperties)
```

#### Updating User Properties

You could update the following user properties with `DeepWall.shared.updateUserProperties()` method.

```swift
func updateUserProperties(country: DeepWallCountry? = nil,
			  language: DeepWallLanguage? = nil,
			  environmentStyle: DeepWallEnvironmentStyle? = nil,
			  debugAdvertiseAttributions: DeepWallAdvertiseAttributions = nil)
```

### Requesting Landing Page

For pages to be displayed successfully, it is strongly recommended to wait for ```DeepWall.shared.readyStatus``` before sending a page request.

You could use `requestLanding` method with `action` parameter for showing landing pages.
```swift
// SomeUIViewController.swift

DeepWall.shared.requestLanding(action: "{ACTION_KEY}", in: self)
```
Replace `{ACTION_KEY}` with your related action key. You can find or create action keys in your [‎dashboard](https://console.deepwall.com).

#### Sending Extra Data

You could also use `extraData`parameter for sending extra data to landing pages.

```swift
// SomeUIViewController.swift

let deepwallExtraData: DeepWallExtraDataType = [
    "some": "value"
]
DeepWall.shared.requestLanding(action: "{ACTION_KEY}", in: self, extraData: deepwallExtraData)
```

### Closing Landing Page

You could use `closeLanding` method to close landing pages.

```swift
DeepWall.shared.closeLanding()
```

### Event Handling

DeepWall posts some various events depending on ....

-  `.landingOpened`
	- Landing opened event
	- Parameters:
		- pageId: `Int`
		
-	`.landingClosed`
	- Landing closed event
	- Parameters:
		- pageId: `Int`

- `.landingResponseFailure`
	- Landing response failure event
	- Parameters:
		- errorCode: `String`
		- reason: `String`
		
- `.landingActionShowDisabled`
	- Landing action show disabled event
	- Parameters:
		- pageId: `Int`

- `.landingPurchasingProduct`
	- Landing purchasing product event
	- Parameters:
		- productCode: `String`

- `.landingPurchaseSuccess`
	- Purchase success event. *Fired after receipt validation if Ploutos service active.*
	- Parameters:
		- subscriptions: `Array of SubscriptionItem`
		- products: `Array of ProductItem`

- `.landingPurchaseFailed`
	- Purchase failed event
	- Parameters:
		- productCode: `String`
		- reason: `String`
		- errorCode: `String`
		- isPaymentCancelled: `Bool`

- `.landingRestoreSuccess`
	- Restore success event

- `.landingRestoreFailed`
	- Restore failed event
	- Parameters:
		- reason: `RestoreFailedReason`
			- .noReceipt
			- .failed
		- errorCode: `String`
		- errorText: `String?`
		- isPaymentCancelled: `Bool`
		
- `.landingExtraDataReceived`
	- Extra data received event
	- Parameters:
		- DeepWallExtraDataType model

#### Usage Example

```swift
DeepWallNotifierHub.observe(.landingPurchasingProduct) { model in
	// Some code..
}
```

## Requirements

- iOS 10.0+
- Xcode 11.0+
- Swift 5.0+
- Bitcode feature should be disabled

## Additional Features

- Dark Mode support
- Automatic in app purchase flows
