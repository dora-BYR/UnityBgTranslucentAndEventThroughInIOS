//
//  MyTempView.h
//  Unity-iPhone
//
//  Created by 123 on 2022/2/15.
//

#pragma once

@interface MyTempView : UIView
{
    
}

+ (MyTempView *)createWithFrame: (CGRect)frame;

- (void) createSubViews;
- (void) createBackground;
- (void) createButtons;

- (void)onShowUnityButtonClick:(UIButton*)button;

@end
