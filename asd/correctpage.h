//
//  correctpage.h
//  asd
//
//  Created by 创新创业中心 on 16/7/19.
//  Copyright © 2016年 UESTCACM QKTeam. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface correctpage : UIViewController<UITableViewDelegate>

@property(nonatomic,strong) NSString *str;
@property(nonatomic,strong) UILabel *second,*second2,*hide,* wordCount;

@property(nonatomic,strong)  UITextField *text1;
@property(nonatomic,strong) UITextView *textview2;
@property (nonatomic, strong) UIButton *import1, *import2, *import3;
@property (nonatomic, strong) NSString* imp;
@property (nonatomic, strong) NSIndexPath* indexpath;

-(instancetype) initWithIndex:(NSIndexPath*)indexPath and :(NSInteger)page;

@end
