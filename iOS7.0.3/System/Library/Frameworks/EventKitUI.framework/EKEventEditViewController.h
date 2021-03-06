/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UINavigationController.h>

@protocol EKEventEditViewDelegate;
@class EKEvent, NSString, EKEventStore, EKEventEditor, UIColor;

@interface EKEventEditViewController : UINavigationController {

	EKEvent* _event;
	NSString* _eventId;
	BOOL _showsTimeZone;
	EKEventStore* _store;
	<EKEventEditViewDelegate>* _editViewDelegate;
	int _transitionForModalViewPresentation;
	EKEventEditor* _editor;

}

@property (assign,nonatomic,__weak) <EKEventEditViewDelegate> * editViewDelegate;              //@synthesize editViewDelegate=_editViewDelegate - In the implementation block
@property (nonatomic,retain) EKEventStore * eventStore;                                        //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) EKEvent * event; 
@property (assign,nonatomic) BOOL showAttachments; 
@property (assign,nonatomic) BOOL scrollToNotes; 
@property (assign,nonatomic) BOOL showsTimeZone;                                               //@synthesize showsTimeZone=_showsTimeZone - In the implementation block
@property (assign,nonatomic) BOOL canHideDoneAndCancelButtons; 
@property (nonatomic,retain) UIColor * editorBackgroundColor; 
@property (assign,nonatomic) int transitionForModalViewPresentation;                           //@synthesize transitionForModalViewPresentation=_transitionForModalViewPresentation - In the implementation block
@property (assign,nonatomic) float editorNavBarLeftContentInset; 
@property (assign,nonatomic) float editorNavBarRightContentInset; 
@property (nonatomic,retain) EKEventEditor * editor;                                           //@synthesize editor=_editor - In the implementation block
+(void)setDefaultDatesForEvent:(id)arg1 ;
-(id)eventStore;
-(void)_storeChanged:(id)arg1 ;
-(void)setEventStore:(id)arg1 ;
-(void)setEditViewDelegate:(id)arg1 ;
-(void)setShowAttachments:(BOOL)arg1 ;
-(BOOL)showsTimeZone;
-(void)setShowsTimeZone:(BOOL)arg1 ;
-(BOOL)scrollToNotes;
-(void)editor:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)editor:(id)arg1 prepareCalendarItemForEdit:(id)arg2 ;
-(void)handleTapOutside;
-(void)completeAndSave;
-(BOOL)willPresentDialogOnSave;
-(BOOL)saveWithSpan:(int)arg1 animated:(BOOL)arg2 ;
-(void)refreshStartAndEndDates;
-(void)setScrollToNotes:(BOOL)arg1 ;
-(BOOL)canHideDoneAndCancelButtons;
-(void)setCanHideDoneAndCancelButtons:(BOOL)arg1 ;
-(void)setTransitionForModalViewPresentation:(int)arg1 ;
-(int)transitionForModalViewPresentation;
-(BOOL)showAttachments;
-(id)initWithEvent:(id)arg1 store:(id)arg2 ;
-(void)cancelEditing;
-(void)setEditorBackgroundColor:(id)arg1 ;
-(id)editorBackgroundColor;
-(void)setEditorNavBarLeftContentInset:(float)arg1 ;
-(float)editorNavBarLeftContentInset;
-(void)setEditorNavBarRightContentInset:(float)arg1 ;
-(float)editorNavBarRightContentInset;
-(id)editViewDelegate;
-(id)editor;
-(void)setEditor:(id)arg1 ;
-(void)dealloc;
-(BOOL)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(CGSize)preferredContentSize;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)presentViewController:(id)arg1 withTransition:(int)arg2 completion:(/*^block*/ id)arg3 ;
-(void)setEvent:(id)arg1 ;
-(id)event;
-(void).cxx_destruct;
@end

