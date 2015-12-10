//
//  FailedBankInfo+CoreDataProperties.h
//  FailedBankCD
//
//  Created by Michael on 15/12/10.
//  Copyright © 2015年 Michael. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "FailedBankInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface FailedBankInfo (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *city;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSString *state;
@property (nullable, nonatomic, retain) FailedBankDetails *details;

@end

NS_ASSUME_NONNULL_END
