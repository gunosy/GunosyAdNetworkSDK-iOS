//
//  GunosyNativeAdDeligate.h
//  GunosyAds
//
//  Created by yuto.suzuki on 2018/04/25.
//  Copyright © 2018年 Gunosy inc.,. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

@class GunosyNativeAds;

@protocol GunosyNativeAdDelegate<NSObject>

@optional
// for CustomEvent
- (void)nativeAdDidLoad:(GunosyNativeAds *)nativeAd;
- (void)nativeAd:(GunosyNativeAds *)nativeAd didFailWithError:(NSError *)error;

// for Adaptor
- (void)nativeAdDidClick:(GunosyNativeAds *)nativeAd;
- (void)nativeAdWillLogImpression:(GunosyNativeAds *)nativeAd;

@end

NS_ASSUME_NONNULL_END
