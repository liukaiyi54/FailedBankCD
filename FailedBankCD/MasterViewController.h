//
//  MasterViewController.h
//  FailedBankCD
//
//  Created by Michael on 15/12/3.
//  Copyright © 2015年 Michael. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MasterViewController : UITableViewController

@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong) NSArray *failedBankInfos;

@end
