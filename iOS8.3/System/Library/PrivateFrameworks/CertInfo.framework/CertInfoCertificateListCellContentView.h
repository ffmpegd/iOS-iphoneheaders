/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:58:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface CertInfoCertificateListCellContentView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _expirationLabel;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(void)_setupLabel:(id)arg1 isSubtitle:(char)arg2 ;
-(void)_setText:(id)arg1 forLabel:(id)arg2 withRedColor:(char)arg3 ;
-(void)setExpiration:(id)arg1 ;
@end

