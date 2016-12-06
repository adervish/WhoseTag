//
//  DetailViewController.h
//  WhoseTag
//
//  Created by Alex Derbes on 12/6/16.
//  Copyright © 2016 bentboolean. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WhoseTag+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

