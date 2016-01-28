//
//  InboxTableViewController.h
//  Ribbit
//
//  Created by Shan Rammah on 1/18/16.
//  Copyright © 2016 Shan Rammah. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import <MediaPlayer/MediaPlayer.h>

@interface InboxTableViewController : UITableViewController

@property (nonatomic, strong) NSArray *messages;

@property (nonatomic, strong) PFObject *selectedMessage;

@property (nonatomic, strong) MPMoviePlayerController *moviePlayer; 

- (IBAction)LogOut:(id)sender;


@end
