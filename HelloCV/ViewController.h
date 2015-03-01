//
//  ViewController.h
//  HelloCV
//
//  Created by David Young-chan Kay on 3/1/15.
//  Copyright (c) 2015 David Young-chan Kay. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic, weak) IBOutlet UIImageView *imageView;
@property (nonatomic, weak) IBOutlet UIButton *helloButton;

- (IBAction)buttonWasPressed:(id)sender;

@end

