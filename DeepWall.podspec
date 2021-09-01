Pod::Spec.new do |s|

  s.name = 'DeepWall'
  s.version = '2.3.0'
  s.summary = 'End-to-end solution for building, managing and maintaining profitable mobile apps offering in-app purchases'
  s.description = <<-DESC
  End-to-end solution for building, managing and maintaining profitable mobile apps offering in-app purchases...
  DESC

  s.homepage = 'https://www.deepwall.com'
  s.license = { :type => 'MIT', :file => 'License' }
  s.authors = { 'Teknasyon' => 'https://www.deepwall.com' }

  s.source = { :git => 'https://github.com/Teknasyon-Teknoloji/deepwall-ios-sdk.git', :tag => s.version }
  
  s.platform = :ios
  s.requires_arc = true
  s.ios.deployment_target = '10.0'
  
  s.framework = 'SystemConfiguration', 'MobileCoreServices', 'UIKit', 'WebKit', 'StoreKit', 'CoreTelephony', 'AdSupport'

  s.vendored_frameworks = 'Frameworks/DeepWall.xcframework'
end