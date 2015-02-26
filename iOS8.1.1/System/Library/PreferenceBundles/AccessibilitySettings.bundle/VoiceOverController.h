/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:42 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/AccessibilityListController.h>

@class PSSpecifier, VoiceOverGestureHelpViewController;

@interface VoiceOverController : AccessibilityListController {

	PSSpecifier* _voiceOverOnSpecifier;
	PSSpecifier* _voiceOverGestureHelpSpecifier;
	PSSpecifier* _voiceOverGestureHelpSpacerSpecifier;
	VoiceOverGestureHelpViewController* _gestureHelpViewController;
	BOOL _ignoreNextReload;

}
+(void)setVoiceOverEnabled:(BOOL)arg1 ;
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)_bluetoothBrailleDisplayChange;
-(id)voiceOverTouchEnabled:(id)arg1 ;
-(void)_manageGestureHelpButton;
-(void)_manageCompactVoiceOption;
-(id)typingMode:(id)arg1 ;
-(id)typingFeedback:(id)arg1 ;
-(id)hintsEnabled:(id)arg1 ;
-(void)voiceOverActivateWorkaround:(id)arg1 ;
-(void)setVoiceOverTouchEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)_changeVOActivationSpecifierIntoSwitchCell:(id)arg1 ;
-(void)_changeVOActivationSpecifierIntoButtonCell:(id)arg1 ;
-(id)speakingRate:(id)arg1 ;
-(void)startGestureHelp:(id)arg1 ;
-(void)setSpeakingRate:(id)arg1 specifier:(id)arg2 ;
-(void)setHintsEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setSpeakNotifications:(id)arg1 specifier:(id)arg2 ;
-(id)speakNotifications:(id)arg1 ;
-(void)setTypingMode:(id)arg1 specifier:(id)arg2 ;
-(void)setTypingFeedback:(id)arg1 specifier:(id)arg2 ;
-(void)setPhoneticsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)phoneticsEnabled:(id)arg1 ;
-(void)setSoundEffectsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)soundEffectsEnabled:(id)arg1 ;
-(void)setPitchChangeEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)pitchChangeEnabled:(id)arg1 ;
-(void)setCompactVoiceEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)compactVoiceEnabled:(id)arg1 ;
-(id)brailleDisplayNameForSpecifier:(id)arg1 ;
-(void)cursorStyleSetPreference:(id)arg1 specifier:(id)arg2 ;
-(id)cursorStyleForSpecifier:(id)arg1 ;
-(id)navigateImagesPreferenceForSpecifier:(id)arg1 ;
-(void)setSpeakingRateInRotor:(id)arg1 specifier:(id)arg2 ;
-(id)speakingRateInRotor:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)reload;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(id)specifiers;
@end
