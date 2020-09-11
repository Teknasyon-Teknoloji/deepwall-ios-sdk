Pod::Spec.new do |s|

  s.name = 'DeepWall'
  s.version = '1.1.1'
  s.summary = 'DeepWall is an sdk used to control landing flows.'
  s.description = <<-DESC
  DeepWall is an sdk used to control landing flows...
  DESC

  s.homepage = 'https://teknasyon.com'
  s.license = { :type => 'Commercial', :file => 'License' }

  s.authors = { 'Teknasyon' => 'https://teknasyon.com' }

  s.module_name  = 'DeepWall'
  s.source = { :git => 'https://github.com/Teknasyon-Teknoloji/deepwall-ios-sdk.git', :tag => s.version }

  s.vendored_frameworks = "Frameworks/AttributionAgent.framework", "Frameworks/BVLinearGradient.framework", "Frameworks/CoreModules.framework", "Frameworks/cxxreact.framework", "Frameworks/DoubleConversion.framework", "Frameworks/DVAssetLoaderDelegate.framework", "Frameworks/EventServiceProvider.framework", "Frameworks/FBReactNativeSpec.framework", "Frameworks/folly.framework", "Frameworks/glog.framework", "Frameworks/Gzip.framework", "Frameworks/jsi.framework", "Frameworks/jsinspector.framework", "Frameworks/jsireact.framework", "Frameworks/LaraCrypt.framework", "Frameworks/Ploutos.framework", "Frameworks/PurchaseKit.framework", "Frameworks/RCTActionSheet.framework", "Frameworks/RCTAnimation.framework", "Frameworks/RCTBlob.framework", "Frameworks/RCTImage.framework", "Frameworks/RCTLinking.framework", "Frameworks/RCTNetwork.framework", "Frameworks/RCTSettings.framework", "Frameworks/RCTText.framework", "Frameworks/RCTTypeSafety.framework", "Frameworks/RCTVibration.framework", "Frameworks/React.framework", "Frameworks/ReactCommon.framework", "Frameworks/SPTPersistentCache.framework", "Frameworks/yoga.framework", "Frameworks/DeviceInfoAgent.framework", "Frameworks/DeepWall.framework"

  s.platform = :ios
  s.swift_version = '5.1'
  s.ios.deployment_target = '10.0'

  s.dependency 'Adjust', '~> 4.23'
  s.dependency 'Moya', '~> 13.0'
  s.dependency 'PersistenceKit'

  
end
