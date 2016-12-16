//
//  ViewController.h
//  hideViewExample
//
//  Created by tops on 8/16/16.
//  Copyright © 2016 tops. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIView *hiddenView;
@property (weak, nonatomic) IBOutlet UITextField *fNameTxt;
@property (weak, nonatomic) IBOutlet UITextField *lNameTxt;
@property (weak, nonatomic) IBOutlet UITextField *genderTxt;
@property (weak, nonatomic) IBOutlet UIImageView *imgView;
@property (weak, nonatomic) IBOutlet UIPickerView *pickerViewOutlet;
@property (weak, nonatomic) IBOutlet UITableView *tblView;

@end

