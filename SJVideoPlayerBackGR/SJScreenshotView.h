//
//  SJScreenshotView.h
//  SJBackGR
//
//  Created by BlueDancer on 2017/9/27.
//  Copyright © 2017年 SanJiang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SJScreenshotView : UIView

@property (nonatomic, strong) UIImage *image;

- (void)beginTransition;

- (void)transitioningWithOffset:(CGFloat)offset;

- (void)reset;

- (void)finishedTransition;

@end
