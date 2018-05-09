//
//  GNAdChoicesView.h
//  GunosyAds
//
//  Created by yuto.suzuki on 2018/05/08.
//  Copyright © 2018年 Gunosy inc.,. All rights reserved.
//

#import <UIKit/UIKit.h>
@class GunosyNativeAds;

/**
 privacy icon image view.
 */
@interface GNAdChoicesView : UIImageView

-(id) initWithNativeAd: (GunosyNativeAds *) nativeAd;

@end
