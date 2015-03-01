//
//  ViewController.m
//  HelloCV
//
//  Created by David Young-chan Kay on 3/1/15.
//  Copyright (c) 2015 David Young-chan Kay. All rights reserved.
//

#import "ViewController.h"
#import "Engine.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    UIImage *fruitImage = [UIImage imageNamed: @"cherries.png"];
    Engine *engine = [[Engine alloc] init];
    UIImage *identityImage = [engine UIImageFromCVMat: [engine cvMatFromUIImage: fruitImage]];
    self.imageView.image = identityImage;
    
}

- (IBAction)buttonWasPressed:(id)sender {
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
