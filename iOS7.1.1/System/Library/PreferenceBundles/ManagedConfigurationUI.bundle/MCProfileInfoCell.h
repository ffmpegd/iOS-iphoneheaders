/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@interface MCProfileInfoCell : PSTableCell
+(float)desiredRowHeight;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)_scriptingInfo;
-(void)setDisplayName:(id)arg1 organization:(id)arg2 ;
-(void)setIsNearExpiration:(bool)arg1 ;
-(void)setProfileIsActive:(bool)arg1 ;
@end
