
Pod::Spec.new do |s|
  s.name             = 'GunosyAdsSDK'
  s.version          = '1.0.10'
  s.summary          = 'SDK for Gunosy Ad Network'

  s.description      = <<-DESC
a SDK for Gunosy Ad Network
                       DESC

  s.homepage         = 'https://github.com/gunosy/GunosyAdNetworkSDK-iOS'
  s.license          = { :type => 'Copyright', :text => 'Copyright (c) Gunosy inc.' }
  s.author           = 'Gunosy inc.'
  s.source           = { :git => 'https://github.com/gunosy/GunosyAdNetworkSDK-iOS.git', :tag => s.version.to_s}

  s.ios.deployment_target = '8.0'

  s.frameworks = 'AdSupport', 'StoreKit', 'Security'
  s.vendored_frameworks = 'GunosyAdsSDK.framework'
end
