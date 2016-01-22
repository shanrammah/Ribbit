//
//  SignupViewController.h
//  Ribbit
//
//  Created by Shan Rammah on 1/21/16.
//  Copyright © 2016 Shan Rammah. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SignupViewController : UIViewController


@property (weak, nonatomic) IBOutlet UITextField *usernameField;

@property (weak, nonatomic) IBOutlet UITextField *passwordField;

@property (weak, nonatomic) IBOutlet UITextField *emailField;

- (IBAction)signup:(id)sender;



@end
