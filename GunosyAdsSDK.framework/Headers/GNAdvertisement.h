//
//  GNAdvertisement.h
//  GunosyAds
//
//  Created by Matsumoto Yuki on 2014/02/25.
//  Copyright (c) 2014年 Gunosy inc.,. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, GNAdOpenType) {
    GNAdOpenTypeSafari,  // Safariで開くこと
    GNAdOpenTypeWebView, // Safari、もしくはWebViewで開くこと
    GNAdOpenTypeAppStore // SKStoreProductViewControllerで表示済み
};

@interface GNAdvertisement : NSObject
@property (nonatomic, strong) NSString *title; // 広告のタイトル、最小25文字、最大32文字
@property (nonatomic, strong) NSString *content; // 広告の説明文、最小50文字、最大75文字
@property (nonatomic, strong) NSString *iconImageUrl; // 広告のアイコン(縦160×横160)
@property (nonatomic, strong) NSString *bannerImageUrl; // 広告のバナー(縦360×横600)
@property (nonatomic, strong) NSString *prSponsorText; //広告主名称
@property (nonatomic, strong) NSString *mediaId;
@property (nonatomic, strong) NSString *userId;
@property (nonatomic, strong) NSString *frameId;
@property (nonatomic, strong) NSString *idfa;
@property (nonatomic, strong) NSString *url; // 広告のURL、通常使用しない
@property (nonatomic, strong) NSString *adType; // 広告のタイプ

- (id)initWithDictionary:(NSDictionary *)dictionary;

/**
 インプレッションの送信、1つのadに対して、送信されるのは1回のみ
 */
- (void)sendImpression;

/**
 クリックの実行かつAdを開く処理
 */
- (void)clickWithViewController:(UIViewController *)viewController complete:(void (^)(GNAdOpenType openType, NSString *url))complete;

/**
 クリックを送る処理
 @param resend 再送処理かどうか
 @return Adを開くかどうか.
 */
-(BOOL) sendClickToResend:(BOOL) resend;

+ (NSArray *)loadUnsendFromFile;
+ (void)deleteCache;
- (void)resend;

/**
 手動で画像をプリロードする
 */
- (void)preloadImage;

/**
 Icon画像をキャッシュから取得する、ただし、キャッシュにない場合は取得し、完了後completionに渡す
 */
- (UIImage *)iconImageWithCompletion:(void (^)(UIImage *image))completion;

/**
 banner画像をキャッシュから取得する、ただし、キャッシュにない場合は取得し、完了後completionに渡す
 */
- (UIImage *)bannerImageWithCompletion:(void (^)(UIImage *image))completion;
@end
