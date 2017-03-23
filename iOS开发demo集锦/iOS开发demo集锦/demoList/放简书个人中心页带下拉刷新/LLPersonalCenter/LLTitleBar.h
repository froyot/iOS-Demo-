//
//  LLTitleBar.h
//  iOS开发demo集锦
//
//  Created by JYD on 2017/3/14.
//  Copyright © 2017年 周尊贤. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LLTitleBar : UIView
@property (nonatomic, assign) NSInteger selectedIndex;

@property (nonatomic, strong) NSArray *titles;

@property (nonatomic, copy)  void(^buttonSelected)(NSInteger index);

@end
