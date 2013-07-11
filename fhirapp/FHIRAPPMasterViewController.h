//
//  FHIRAPPMasterViewController.h
//  fhirapp
//
//  Created by Adam Sippel on 2013-07-10.
//  Copyright (c) 2013 Adam Sippel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FHIR.h"

@class FHIRAPPDetailViewController;

@interface FHIRAPPMasterViewController : UITableViewController

@property (strong, nonatomic) FHIRAPPDetailViewController *detailViewController;

@end
