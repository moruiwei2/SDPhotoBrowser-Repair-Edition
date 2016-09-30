//
//  TZPhotoPreviewCell.h
//  TZImagePickerController
//
//  Created by 谭真 on 15/12/24.
//  Copyright © 2015年 谭真. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface TZPhotoPreviewCell : UICollectionViewCell

@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, copy) void (^singleTapGestureBlock)();
@property (nonatomic,weak) UIImage *image;
@property (nonatomic, assign) BOOL hasLoadedImage;

- (void)recoverSubviews;

@end
