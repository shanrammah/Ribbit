//
//  FriendsTableViewController.h
//  Ribbit
//
//  Created by Shan Rammah on 1/24/16.
//  Copyright © 2016 Shan Rammah. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface FriendsTableViewController : UITableViewController

@property (nonatomic, strong) PFRelation *friendsRelation;

@property (nonatomic, strong) NSArray *friends;



@end
