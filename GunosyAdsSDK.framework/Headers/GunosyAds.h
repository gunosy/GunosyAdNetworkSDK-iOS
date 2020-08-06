//
//  GunosyAdsSDK.h
//  GunosyAdsSDK
//
//  Created by Matsumoto Yuki on 2014/02/24.
//  Copyright (c) 2014年 Gunosy inc.,. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GNAdvertisement.h"

NS_ASSUME_NONNULL_BEGIN

@interface GunosyAds: NSObject
@property (nonatomic) BOOL verbose;

+ (GunosyAds *)sharedManager;
/**
 * Returns the SDK version.
 *
 * @return The GunosyAds SDK version.
 */
+ (NSString*)getVersion;

- (void)becomeActive;
- (void)setMediaID:(NSString *)mediaID;
- (void)setMediaUserID:(NSString *)mediaUserID;
- (void)setImagePreloadingEnabled:(BOOL)enabled;
- (void)sendCustomData:(NSDictionary *)customData;
- (void)getAdvertisementsByFrameId:(NSString *)frameId complete:(void (^)(NSArray<GNAdvertisement *> *advertisements))complete;
- (NSString *)adIdentifier;
@end

NS_ASSUME_NONNULL_END
