//
//  DetailViewController.h
//  test-mast-det
//
//  Created by Eli Peer on 12/5/15.
//  Copyright © 2015 Eli Peer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

