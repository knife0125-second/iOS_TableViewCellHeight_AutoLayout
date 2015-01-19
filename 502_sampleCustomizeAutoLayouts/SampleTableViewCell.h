//
//  SampleTableViewCell.h
//  502_sampleCustomizeAutoLayouts
//
//  Created by NishideDaisuke on 2015/01/19.
//  Copyright (c) 2015年 knife0125. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SampleTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *sampleLabel;

- (void)setDataToCell:(NSDictionary *)dataDic;

@end
