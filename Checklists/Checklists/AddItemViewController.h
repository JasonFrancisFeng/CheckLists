//
//  AddItemViewController.h
//  Checklists
//
//  Created by Cooper on 15/9/27.
//  Copyright (c) 2015年 Jason_NJUPT. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AddItemViewController;
@class ChecklistItem;

@protocol AddItemViewControllerDelegate <NSObject>

- (void)addItemViewControllerDidCancel:(AddItemViewController*)controller;

- (void)addItemViewController:(AddItemViewController*)controller didFinishAddingItem:(ChecklistItem*)item;

@end

@interface AddItemViewController : UITableViewController<UITextFieldDelegate>
- (IBAction)cancel:(id)sender;
- (IBAction)done:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *doneBarButton;
@property (nonatomic,weak) id <AddItemViewControllerDelegate> delegate;

@end
