//
//  XHTagView.h
//  XHTagView
//
//  Created by Jack_iMac on 16/2/22.
//  Copyright © 2016年 嗨，我是曾宪华(@xhzengAIB)，曾加入YY Inc.担任高级移动开发工程师，拍立秀App联合创始人，热衷于简洁、而富有理性的事物 QQ:543413507 主页:http://zengxianhua.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XHTagView : UIView

@property (nonatomic, assign) CGFloat radius;

@property (nonatomic, assign, readonly) BOOL showing;

- (void)showInPoint:(CGPoint)point;
- (void)dismiss;

@end