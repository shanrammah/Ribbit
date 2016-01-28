//
//  ImageViewController.h
//  Ribbit
//
//  Created by Shan Rammah on 1/27/16.
//  Copyright © 2016 Shan Rammah. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface ImageViewController : UIViewController

@property (nonatomic, strong) PFObject *message;

@property (weak, nonatomic) IBOutlet UIImageView *imageView;


@end
