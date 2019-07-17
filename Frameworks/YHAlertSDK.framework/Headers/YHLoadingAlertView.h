//
//  YHLoadingAlertView.h
//  YHAlertSDK
//
//  Created by Jagtu on 2019/1/9.
//  Copyright © 2019年 YH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YHLoadingAlertView : UIView<CAAnimationDelegate>

@property (nonatomic, strong)UIView *leftView;

@property (nonatomic, strong)UIView * middleView;

@property (nonatomic, strong)UIView * rightView;

@property (nonatomic, strong)CAAnimationGroup *group1;

@property (nonatomic, strong)CAAnimationGroup *group2;

@property (nonatomic, strong)CAAnimationGroup *group3;

@property (nonatomic, assign)BOOL hiddenWhenStop;

-(void)startAnimation;

-(void)stopAnimating;

-(void)removeAnimation;

-(instancetype)initWithHiddleWhenStop:(BOOL)hiddleWhenStop;


@end

