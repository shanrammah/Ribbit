//
//  ImageViewController.m
//  Ribbit
//
//  Created by Shan Rammah on 1/27/16.
//  Copyright © 2016 Shan Rammah. All rights reserved.
//

#import "ImageViewController.h"

@interface ImageViewController ()

@end

@implementation ImageViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // first we need to download the image from parse
    PFFile *imageFile = [self.message objectForKey:@"file"];
    
    NSURL *imageFileURL = [[NSURL alloc] initWithString:imageFile.url];
    
    NSData *imageData = [NSData dataWithContentsOfURL:imageFileURL];
    self.imageView.image = [UIImage imageWithData:imageData];
    
    
    NSString *senderName = [self.message objectForKey:@"senderName"];
    NSString *title = [NSString stringWithFormat:@"Sent from %@", senderName];
    self.navigationItem.title = title;
}

- (void)viewDidAppear:(BOOL)animated
{
    //view did appear comes up when the data is loaded!
    
    [super viewDidAppear:animated];
    
    if ([self respondsToSelector:@selector(timeout)]) {
        
    [NSTimer scheduledTimerWithTimeInterval:10 target:self selector:@selector(timeout) userInfo:nil repeats:NO];
        
    } else {
        NSLog(@"Error: selector missing!");
    }
    
    //calling just self means the view controller
}

#pragma mark - helper methods

- (void) timeout {
    
    
    //push is for adding items to the stakck
    //pop is for removing the top item from the stack
    
    [self.navigationController popViewControllerAnimated:YES];
}


/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
