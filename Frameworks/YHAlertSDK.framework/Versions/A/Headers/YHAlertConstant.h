//
//  YHAlertConstant.h
//  YHAlertSDK
//
//  Created by ljt on 2018/11/02.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface YHAlertConstant : NSObject

typedef NS_ENUM(NSInteger, YHCommonAlertType) {
    YHCommonAlertTypeDefault = 0,//Toast
    YHCommonAlertTypeLoading = 1,//加载中
    YHCommonAlertTypeSuccess = 2,//成功提示框
    YHCommonAlertTypeFailed  = 3,//错误提示框
    YHCommonAlertTypeWarming = 4 //警告提示框
};

typedef NS_ENUM(NSUInteger, YHCommonHUDMaskType) {
    YHCommonHUDMaskTypeNone = 1,  // default mask type, allow user interactions while HUD is displayed
    YHCommonHUDMaskTypeClear,     // don't allow user interactions with background objects
    YHCommonHUDMaskTypeBlack
};

typedef NS_ENUM(NSInteger, YHAlertLayoutType) {
    YHAlertLayoutTypeHorizontal = 0,//水平
    YHAlertLayoutTypeVertical = 1//竖直
};

typedef NS_ENUM(NSInteger, YHLoadingStyleType) {
    YHLoadingStyleTypeDefault = 0,//···
    YHLoadingStyleTypeCustom = 1//自定义gif图片
};


//-----颜色规范.start-----//

//主色、主灰色
FOUNDATION_EXPORT NSString *YHAlertColorMainHexString;
FOUNDATION_EXPORT NSString *YHAlertColorMainGrayHexString;

FOUNDATION_EXPORT NSString *YHAlertColorMainBgHexString;
FOUNDATION_EXPORT NSString *YHAlertColorTitleBgHexString;
FOUNDATION_EXPORT NSString *YHAlertColorWarmingHexString;

FOUNDATION_EXPORT NSString *YHAlertColorGreenHexString;
FOUNDATION_EXPORT NSString *YHAlertColorGreenGrayHexString;

//toast阴影颜色(如有值则所有状态的Toast都一样)
FOUNDATION_EXPORT NSString *YHToastShadowCustomColorHexString;
FOUNDATION_EXPORT CGFloat YHToastShadowCustomColorAlpha;
//toast圆角
FOUNDATION_EXPORT CGFloat YHToastViewCornerRadius;

//加载中，三个点的颜色
FOUNDATION_EXPORT NSString *YHLoadingLeftSpotColorHexString;
FOUNDATION_EXPORT NSString *YHLoadingMiddleSpotColorHexString;
FOUNDATION_EXPORT NSString *YHLoadingRightSpotColorHexString;

//按钮颜色辅色
FOUNDATION_EXPORT NSString *YHAlertColorDestructiveHexString;
FOUNDATION_EXPORT NSString *YHAlertColorDestructiveBgHexString;

FOUNDATION_EXPORT NSString *YHAlertColorCancelHexString;
FOUNDATION_EXPORT NSString *YHAlertColorCancelBgHexString;

FOUNDATION_EXPORT NSString *YHAlertTextColorBlackHexString;
FOUNDATION_EXPORT NSString *YHAlertTextColorGrayHexString;
FOUNDATION_EXPORT NSString *YHAlertTextColorLightGrayHexString;
FOUNDATION_EXPORT NSString *YHAlertTextColorWhiteHexString;

FOUNDATION_EXPORT NSString *YHAlertErrorImageNameString;
FOUNDATION_EXPORT NSString *YHAlertSuccessImageNameString;
FOUNDATION_EXPORT NSString *YHAlertLoadingGifImageNameString;

//默认toast持续时长2.2秒
FOUNDATION_EXPORT CGFloat YHCommonAlertDurationDefault;
FOUNDATION_EXPORT CGFloat YHCommonAlertDurationLoading;//加载中..120s

//默认
FOUNDATION_EXPORT CGFloat YHAlertDestructiveButtonCornerRadius;
FOUNDATION_EXPORT CGFloat YHAlertCancelButtonCornerRadius;
FOUNDATION_EXPORT CGFloat YHAlertMainViewCornerRadius;

//字号
FOUNDATION_EXPORT CGFloat YHAlertTextLabelFont;
FOUNDATION_EXPORT NSInteger YHToastNumberMax;

FOUNDATION_EXPORT BOOL YHSVProgressHUD_WORK;    //是否使用SVProgressHUD，默认NO
FOUNDATION_EXPORT BOOL YHSVProgressHUDStyleCustom;//是否使用内置配置样式，默认YES
FOUNDATION_EXPORT YHAlertLayoutType YHAlertDefaultLayoutType;


#define ShowMsg(msg)            [YHCommonHUD showAlert:msg];
#define ShowWarmingAlert(msg)   [YHCommonHUD showWarmingAlert:msg];
#define ShowFailedMsg(msg)      [YHCommonHUD showFailedAlert:msg];
#define ShowSuccessedMsg(msg)   [YHCommonHUD showSuccedAlert:msg];

#define ShowLoading(msg)        [YHCommonHUD showLoading:msg];
#define ShowClearLoading(msg)   [YHCommonHUD showClearLoading:msg];
#define CloseLoading()          [YHCommonHUD dismissLoading];
#define YHDismissLoading()      [YHCommonHUD dismissLoading];
#define YHDismissLoadingView    [YHCommonHUD dismissLoading];

@end
