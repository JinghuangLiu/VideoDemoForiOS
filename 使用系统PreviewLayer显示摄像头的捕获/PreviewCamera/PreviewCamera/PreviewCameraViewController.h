//
//  PreviewCameraViewController.h
//  PreviewCamera
//
//  Created by William  Colbert on 8/28/13.
//  Copyright (c) 2013 Uplift Ideas. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface PreviewCameraViewController : UIViewController

/// 预览视图
@property (strong, nonatomic) IBOutlet UIView *previewView;


- (IBAction)switchCamera:(id)sender;

/// 捕获会话
@property (strong, nonatomic) AVCaptureSession *session;

/// 捕获设备
@property (strong) AVCaptureDevice *videoDevice;

/// 捕获输入
@property (strong) AVCaptureDeviceInput *videoInput;

/// 输出
@property (strong) AVCaptureStillImageOutput *stillImageOutput;

/// 是否在用前置摄像头
@property BOOL isUsingFrontFacingCamera;

/// 获取后置摄像头
- (AVCaptureDevice *) backCamera;

/// 获取前置摄像头
- (AVCaptureDevice *) frontCamera;

@end
