//
//  UIViewController+BLCMediaFullScreenViewController.h
//  blocstagram
//
//  Created by RH Blanchfield on 3/21/15.
//  Copyright (c) 2015 bloc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLCMedia;

@interface BLCMediaFullScreenViewController : UIViewController

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIImageView *imageView;

@property (nonatomic, strong) BLCMedia *media;

- (instancetype) initWithMedia:(BLCMedia *)media;

- (void) centerScrollView;

- (void) recalculateZoomScale;

@end