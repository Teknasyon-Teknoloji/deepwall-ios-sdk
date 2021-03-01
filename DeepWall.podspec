Pod::Spec.new do |s|

  s.name = 'DeepWall'
  s.version = '2.1.2'
  s.summary = 'End-to-end solution for building, managing and maintaining profitable mobile apps offering in-app purchases'
  s.description = <<-DESC
  End-to-end solution for building, managing and maintaining profitable mobile apps offering in-app purchases...
  DESC

  s.homepage = 'https://teknasyon.com'
  s.license = { :type => 'MIT', :file => 'License' }
  s.authors = { 'Teknasyon' => 'https://teknasyon.com' }

  s.source = { :git => 'https://github.com/Teknasyon-Teknoloji/deepwall-ios-sdk.git', :tag => s.version }
  
  s.platform = :ios
  s.requires_arc = true
  s.ios.deployment_target = '10.0'
  

  s.framework = 'SystemConfiguration', 'MobileCoreServices', 'UIKit', 'WebKit', 'StoreKit', 'CoreTelephony', 'AdSupport'
  s.vendored_frameworks =
'Frameworks/Dependencies/AFNetworking.framework',
'Frameworks/Dependencies/CoreModules.framework',
'Frameworks/Dependencies/cxxreact.framework',
'Frameworks/Dependencies/DoubleConversion.framework',
'Frameworks/Dependencies/DVAssetLoaderDelegate.framework',
'Frameworks/Dependencies/FBReactNativeSpec.framework',
'Frameworks/Dependencies/folly.framework',
'Frameworks/Dependencies/glog.framework',
'Frameworks/Dependencies/jsi.framework',
'Frameworks/Dependencies/jsinspector.framework',
'Frameworks/Dependencies/jsireact.framework',
'Frameworks/Dependencies/JSONModel.framework',
'Frameworks/Dependencies/RCTAnimation.framework',
'Frameworks/Dependencies/RCTBlob.framework',
'Frameworks/Dependencies/RCTImage.framework',
'Frameworks/Dependencies/RCTLinking.framework',
'Frameworks/Dependencies/RCTNetwork.framework',
'Frameworks/Dependencies/RCTSettings.framework',
'Frameworks/Dependencies/RCTText.framework',
'Frameworks/Dependencies/RCTTypeSafety.framework',
'Frameworks/Dependencies/RCTVibration.framework',
'Frameworks/Dependencies/react_native_video.framework',
'Frameworks/Dependencies/React.framework',
'Frameworks/Dependencies/ReactCommon.framework',
'Frameworks/Dependencies/SPTPersistentCache.framework',
'Frameworks/Dependencies/UICKeyChainStore.framework',
'Frameworks/Dependencies/yoga.framework',
'Frameworks/AttributionAgent.xcframework',
'Frameworks/DeviceInfoAgent.xcframework',
'Frameworks/EventServiceProvider.xcframework',
'Frameworks/Ploutos.xcframework',
'Frameworks/PurchaseKit.xcframework',
'Frameworks/DeepWall.xcframework'

s.dependency 'Adjust', '~> 4.26'
s.dependency 'AppsFlyerFramework', '~> 6.2'
  

end