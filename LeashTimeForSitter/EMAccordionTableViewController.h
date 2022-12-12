//
//  EMAccordionTableViewController.h
//  UChat
//
//  Created by Ennio Masi on 10/01/14.
//  Copyright (c) 2014 Hippocrates Sintech. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "EMAccordionSection.h"
#import "EMAccordionTableParallaxHeaderView.h"

typedef NS_ENUM(NSUInteger, EMAnimationType) {
    EMAnimationTypeNone,
    EMAnimationTypeBounce,
};

@protocol EMAccordionTableDelegate
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath;
- (void) tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath;
- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath;
- (UIView *) tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section;
- (void) latestSectionOpened;
- (void) latestSectionOpenedID:(int)sectionNum;
-(void) setOpenedSectionIcon:(UIImage*)iconImg;
-(void) setClosedSectionIcon:(UIImage*)iconImg;
-(void) setParallaxTableHeaderView:(EMAccordionTableParallaxHeaderView* ) parallaxTable;
@end

@interface EMAccordionTableViewController : UIViewController<UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, strong) EMAccordionTableParallaxHeaderView *parallaxHeaderView;
@property (nonatomic, strong) NSMutableArray *sectionsHeaders;
@property (nonatomic) NSInteger defaultOpenedSection;
@property (nonatomic) NSUInteger openedSection;

- (id) initWithTable:(UITableView *)tableView withAnimationType:(EMAnimationType) type;
- (void) addAccordionSection: (EMAccordionSection *) section initiallyOpened:(BOOL)opened;
- (void) setDelegate: (NSObject <EMAccordionTableDelegate> *) delegate;
//- (UITableView*) getEMAccordionTableView;
-(void) setClosedSectionIcon:(UIImage*)closeIcon;
-(void) setOpenedSectionIcon:(UIImage*)openIcon;

@end
