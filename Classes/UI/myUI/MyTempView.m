//
//  MyTempView.m
//  Unity-iPhone
//
//  Created by 123 on 2022/2/15.
//  原生层view用于控制面板 by longhui
//

#import <Foundation/Foundation.h>
#include "MyTempView.h"

@implementation MyTempView
{
    
}

+ (MyTempView *) createWithFrame: (CGRect)frame
{
    MyTempView * retView = [[MyTempView alloc] initWithFrame: frame];
    return retView;
}

- (id)initWithFrame:(CGRect)frame;
{
    if ((self = [super initWithFrame: frame]))
        [self createSubViews];
    return self;
}

- (void) createSubViews
{
    [self createBackground];
    [self createButtons];
}

- (void) createBackground
{
    CGRect bounds = self.bounds;
    NSString *filePath = [[[NSBundle mainBundle]resourcePath] stringByAppendingPathComponent:@"myRes.bundle/chatbg.png"];
    UIImage *imageData = [UIImage imageWithContentsOfFile:filePath];
    UIImageView * bgView = [[UIImageView alloc] initWithImage: imageData];
    bgView.frame = bounds;
    [self addSubview: bgView];
}

- (void) createButtons
{
    CGRect bounds = self.bounds;
    CGRect rect = CGRectMake(10.0, bounds.size.height - 90.0, 90, 40);
    const CGFloat components[] = {0.0f, 1.0f, 0.0f, 1.0f};
    CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
    CGColorRef color = CGColorCreate(colorSpace, components);
    
    UIButton *btn_showUnityView = [UIButton buttonWithType: UIButtonTypeRoundedRect];
//    btn_showUnityView.layer.backgroundColor = color;
    btn_showUnityView.frame = rect;
    [btn_showUnityView setTitle:@"UnityView控制" forState:UIControlStateNormal];
    NSString *filePath = [[[NSBundle mainBundle]resourcePath] stringByAppendingPathComponent:@"myRes.bundle/btn.png"];
    UIImage *imageData = [UIImage imageWithContentsOfFile:filePath];
    [btn_showUnityView setImage:imageData forState:UIControlStateNormal];
    [btn_showUnityView addTarget:self action:@selector(onShowUnityButtonClick:) forControlEvents:UIControlEventTouchUpInside];
    [self addSubview: btn_showUnityView];
}

- (void)onShowUnityButtonClick:(UIButton*)button
{
    NSLog(@"Unity显示按钮被点击了");
    // 获取UnityView对象指针
    UIView * unityView = [self.window viewWithTag: 1001];
    if (unityView) {
        // 设置UnityView的隐藏和显示
        [unityView setHidden: !unityView.isHidden];
    }
}

-(void) touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    UITouch *touch = [touches anyObject];
    /**点触位置的响应视图*/
    UIView *responder = touch.view;
    NSLog(@"MyTempView被点击中了");
}

@end
