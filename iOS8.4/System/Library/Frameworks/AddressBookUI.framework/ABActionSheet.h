/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIActionSheet.h>

@interface ABActionSheet : UIActionSheet {

	CFArrayRef _tags;
	CFArrayRef _tag2s;
	CFArrayRef _tag3s;
	CFArrayRef _tag4s;
	void* _ab_context;

}

@property (assign,nonatomic) void* ab_context;              //@synthesize ab_context=_ab_context - In the implementation block
-(long long)ab_addButtonWithTitle:(id)arg1 tag:(long long)arg2 ;
-(id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(long long)arg3 ;
-(id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(long long)arg3 tag2:(long long)arg4 ;
-(id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(long long)arg3 tag2:(long long)arg4 tag3:(const void*)arg5 ;
-(id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(long long)arg3 tag2:(long long)arg4 tag3:(const void*)arg5 tag4:(const void*)arg6 ;
-(long long)ab_tagAtIndex:(long long)arg1 ;
-(long long)ab_tag2AtIndex:(long long)arg1 ;
-(const void*)ab_tag3AtIndex:(long long)arg1 ;
-(const void*)ab_tag4AtIndex:(long long)arg1 ;
-(long long)ab_addButtonWithTitle:(id)arg1 tag:(long long)arg2 tag2:(long long)arg3 ;
-(void*)ab_context;
-(void)setAb_context:(void*)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)_addButtonWithTitle:(id)arg1 ;
-(id)_addButtonWithTitle:(id)arg1 label:(id)arg2 ;
-(id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
@end

