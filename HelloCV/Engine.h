//
//  Engine.h
//  HelloCV
//
//  Created by David Young-chan Kay on 3/1/15.
//  Copyright (c) 2015 David Young-chan Kay. All rights reserved.
//

#ifndef HelloCV_Engine_h
#define HelloCV_Engine_h

#ifdef __cplusplus
#import <opencv2/opencv.hpp>
#endif

#endif



@interface Engine : NSObject

- (cv::Mat)cvMatFromUIImage:(UIImage *)image;
- (cv::Mat)cvMatGrayFromUIImage:(UIImage *)image;
- (UIImage *)UIImageFromCVMat:(cv::Mat)cvMat;


@end 
