/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, _HKEmergencyContact;

@interface _EmergencyCardContactCell : UITableViewCell {

	UILabel* _relationshipLabel;
	UILabel* _nameLabel;
	UILabel* _phoneNumberLabel;
	_HKEmergencyContact* _contact;

}

@property (nonatomic,retain) _HKEmergencyContact * contact;              //@synthesize contact=_contact - In the implementation block
-(_HKEmergencyContact *)contact;
-(void)setContact:(_HKEmergencyContact *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
@end
