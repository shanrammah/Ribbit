//
//  EditFriendsTableViewController.h
//  Ribbit
//
//  Created by Shan Rammah on 1/24/16.
//  Copyright © 2016 Shan Rammah. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface EditFriendsTableViewController : UITableViewController

@property (nonatomic, strong) NSArray *allUsers;

@property (nonatomic, strong) PFUser *currentUser;

@property (nonatomic, strong) NSMutableArray *friends;

- (BOOL) isFriend:(PFUser *)user; 

@end
