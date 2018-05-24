//
//  GunosyNativeAd.h
//  GunosyAds
//
//  Created by yuto.suzuki on 2018/04/24.
//  Copyright © 2018年 Gunosy inc.,. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "GunosyNativeAdDelegate.h"
#import "GNAdvertisement.h"
#import "GNAdChoicesView.h"

@interface GunosyNativeAds: GNAdvertisement

@property (weak, nonatomic) id <GunosyNativeAdDelegate> adDelegate;
@property (weak, nonatomic) NSString* defaultActionURL;

/**
 Initialization for Gunosy Native Ads.
 @param options need to set NSDictionary. it is expected to contain media_id, user_id, frame_id.
 @return Intance.
 */
- (id) initWithOptions:(NSDictionary *)options;

/**
 Load ad from Gunosy Server.
 After that, call delegate method "nativeAdDidLoad".
 */
- (void) loadAd;

/**
 register view for click tracking.
 @param view tracking view.
 */
- (void) registerViewForInteraction:(UIView *)view withViewController:(UIViewController *)viewController;

/**
 send Impression to Gunosy Server, and notify 'nativeAdWillLogImpression' to delegate.
 */
- (void) sendImpressionWithDelegate;
@end
