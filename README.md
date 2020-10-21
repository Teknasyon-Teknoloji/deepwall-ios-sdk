# DeepWall

[![Platform](https://img.shields.io/cocoapods/p/DeepWall)](https://cocoapods.org/pods/deepwall)
[![Cocoapods](https://img.shields.io/cocoapods/v/DeepWall)](https://cocoapods.org/pods/deepwall)


End-to-end solution for building, managing and maintaining profitable mobile apps offering in-app purchases.


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
	- Environment style for paywall appearance.
	- Values:
		- `automatic`: Uses system appearance (Default)
		- `light`: Light appearance
		- `dark`: Dark appearance
 - Debug Advertise Attributions: `DeepWallAdvertiseAttributions`
	 - Advertise attribution info for debugging purposes.
	 - Usage: `let attribution = ["debug_attribution", "debug_campaign_attribution"]`

**Important:**
> You must call `setUserProperties` method before requesting any paywall.
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

### Requesting Paywall

For pages to be displayed successfully, it is strongly recommended to wait for ```DeepWall.shared.readyStatus``` before sending a page request.

You could use `requestPaywall` method with `action` parameter for showing paywalls.
```swift
// SomeUIViewController.swift

DeepWall.shared.requestPaywall(action: "{ACTION_KEY}", in: self)
```
Replace `{ACTION_KEY}` with your related action key. You can find or create action keys in your [‎dashboard](https://console.deepwall.com).

#### Sending Extra Data

You could also use `extraData`parameter for sending extra data to paywalls.

```swift
// SomeUIViewController.swift

let deepwallExtraData: DeepWallExtraDataType = [
    "some": "value"
]
DeepWall.shared.requestPaywall(action: "{ACTION_KEY}", in: self, extraData: deepwallExtraData)
```

### Closing Paywall

You could use `closePaywall` method to close paywalls.

```swift
DeepWall.shared.closePaywall()
```

### Event Handling

DeepWall posts some various events depending on ....

- `deepWallPaywallRequested`
	- Fired after paywall requested. Useful for displaying loading indicator in your app.

- `deepWallPaywallResponseReceived`
	- Fired after paywall response received. Useful for hiding loading indicator in your app.

- `deepWallPaywallOpened`
	- Paywall opened event
	- Parameters:
		- pageId: `Int`

 - `deepWallPaywallNotOpened`
	- Paywall not opened event. Fired on error cases only.
	- Parameters:
		- pageId: `Int`

 - `deepWallPaywallActionShowDisabled`
	- Paywall action show disabled event.
		- Parameters:
			- pageId: `Int`

- `deepWallPaywallClosed`
	- Paywall closed event
	- Parameters:
		- pageId: `Int`

- `deepWallPaywallResponseFailure`
	- Paywall response failure event
	- Parameters:
		- errorCode: `String`
		- reason: `String`

- `deepWallPaywallPurchasingProduct`
	- Paywall purchasing product event
	- Parameters:
		- productCode: `String`

- `deepWallPaywallPurchaseSuccess`
	- Purchase success event. *Fired after receipt validation if Ploutos service active.*
	- Parameters:
		- type: `PloutosValidationType`
		- result: `PLPurchaseResponse`
			- subscriptions: `Array of SubscriptionItem`
			- products: `Array of ProductItem`

- `deepWallPaywallPurchaseFailed`
	- Purchase failed event
	- Parameters:
		- productCode: `String`
		- reason: `String`
		- errorCode: `String`
		- isPaymentCancelled: `Bool`

- `deepWallPaywallRestoreSuccess`
	- Restore success event

- `deepWallPaywallRestoreFailed`
	- Restore failed event
	- Parameters:
		- reason: `RestoreFailedReason`
			- .noReceipt
			- .failed
		- errorCode: `String`
		- errorText: `String?`
		- isPaymentCancelled: `Bool`

- `deepWallPaywallExtraDataReceived`
	- Extra data received event
	- Parameters:
		- DeepWallExtraDataType model


#### Usage Example

First implement `DeepWallNotifierDelegate` protocol to your class. Then you could use `observeEvents` method for observing events.
```swift
DeepWall.shared.observeEvents(for: self)
```

For removing observer, you could use `removeObserver` method.
```swift
DeepWall.shared.removeObserver(for: self)
```

## Requirements

- iOS 10.0+
- Xcode 11.0+
- Swift 5.0+

## Migration Guides
- [DeepWall 2.0 Migration Guide](https://github.com/Teknasyon-Teknoloji/deepwall-ios-sdk/wiki/DeepWall-2.0-Migration-Guide)

## Additional Features

- Dark Mode support
- Automatic in app purchase flows
