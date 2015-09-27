//
//  ChecklistItem.m
//  Checklists
//
//  Created by Cooper on 15/9/26.
//  Copyright (c) 2015年 Jason_NJUPT. All rights reserved.
//

#import "ChecklistItem.h"

@implementation ChecklistItem

-(void)toggleChecked{
    self.checked = !self.checked;
}

@end
