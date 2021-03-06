/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebCore/WAKView.h>
#import <WebKit/WebDocumentView.h>
#import <WebKit/WebDocumentSearching.h>
#import <WebKit/WebDocumentSelection.h>
#import <WebKit/WebDocumentIncrementalSearching.h>
#import <WebKit/WebDocumentElement.h>
#import <WebKit/WebMultipleTextMatches.h>
#import <WebKit/WebDocumentOptionsSearching.h>

@class WebHTMLViewPrivate;

@interface WebHTMLView : WAKView <WebDocumentView, WebDocumentSearching, WebDocumentSelection, WebDocumentIncrementalSearching, WebDocumentElement, WebMultipleTextMatches, WebDocumentOptionsSearching> {

	WebHTMLViewPrivate* _private;

}
+(id)supportedNonImageMIMETypes;
+(id)supportedMIMETypes;
+(id)supportedImageMIMETypes;
+(id)unsupportedTextMIMETypes;
+(void)initialize;
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(id)elementAtPoint:(CGPoint)arg1 ;
-(bool)_findString:(id)arg1 options:(unsigned long long)arg2 ;
-(id)elementAtPoint:(CGPoint)arg1 allowShadowContent:(bool)arg2 ;
-(unsigned long long)countMatchesForText:(id)arg1 inDOMRange:(id)arg2 options:(unsigned long long)arg3 limit:(unsigned long long)arg4 markMatches:(bool)arg5 ;
-(void)setMarkedTextMatchesAreHighlighted:(bool)arg1 ;
-(bool)markedTextMatchesAreHighlighted;
-(void)unmarkAllTextMatches;
-(id)rectsForTextMatches;
-(id)string;
-(id)selectionView;
-(void)selectAll;
-(CGRect)selectionRect;
-(id)selectionTextRects;
-(CGImageRef)selectionImageForcingBlackText:(bool)arg1 ;
-(bool)supportsTextEncoding;
-(id)selectedString;
-(void)deselectAll;
-(bool)searchFor:(id)arg1 direction:(bool)arg2 caseSensitive:(bool)arg3 wrap:(bool)arg4 startInSelection:(bool)arg5 ;
-(CGRect)selectionImageRect;
-(NSRange)selectedRange;
-(void)insertText:(id)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)unmarkText;
-(NSRange)markedRange;
-(bool)hasMarkedText;
-(void)markedTextUpdate:(id)arg1 ;
-(void)_updateSelectionForInputManager;
-(void)doCommandBySelector:(SEL)arg1 ;
-(unsigned long long)characterIndexForPoint:(CGPoint)arg1 ;
-(CGRect)firstRectForCharacterRange:(NSRange)arg1 ;
-(long long)conversationIdentifier;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)_frame;
-(void)_layoutIfNeeded;
-(id)_highlighterForType:(id)arg1 ;
-(void)attachRootLayer:(id)arg1 ;
-(void)detachRootLayer;
-(void)_selectionChanged;
-(bool)_handleEditingKeyEvent:(KeyboardEvent*)arg1 ;
-(bool)_web_isDrawingIntoLayer;
-(bool)_needsLayout;
-(void)closeIfNotCurrentView;
-(void)_web_updateLayoutAndStyleIfNeededRecursive;
-(bool)_canSmartCopyOrDelete;
-(void)_executeSavedKeypressCommands;
-(void)_destroyAllWebPlugins;
-(bool)_isEditable;
-(void)layoutIfNeeded;
-(void)setScale:(float)arg1 ;
-(void)_stopAutoscrollTimer;
-(void)close;
-(void)viewWillDraw;
-(id)hitTest:(CGPoint)arg1 ;
-(bool)_isInPrintMode;
-(bool)_beginPrintModeWithMinimumPageWidth:(double)arg1 height:(double)arg2 maximumPageWidth:(double)arg3 ;
-(double)_adjustedBottomOfPageWithTop:(double)arg1 bottom:(double)arg2 limit:(double)arg3 ;
-(void)_endPrintMode;
-(void)_frameOrBoundsChanged;
-(void)mouseMoved:(id)arg1 ;
-(void)_setToolTip:(id)arg1 ;
-(bool)_hasSelection;
-(id)_pluginController;
-(void)_autoscroll;
-(bool)_hasSelectionOrInsertionPoint;
-(void)_clearLastHitViewIfSelf;
-(bool)_isInScreenPaginationMode;
-(void)_setAsideSubviews;
-(void)_restoreSubviews;
-(bool)_insideAnotherHTMLView;
-(void)_startAutoscrollTimer:(id)arg1 ;
-(CGRect)_selectionRect;
-(bool)_canEdit;
-(bool)_canEditRichly;
-(bool)_canAlterCurrentSelection;
-(bool)_hasInsertionPoint;
-(bool)_transparentBackground;
-(void)_setTransparentBackground:(bool)arg1 ;
-(id)_insertOrderedList;
-(id)_insertUnorderedList;
-(bool)_canIncreaseSelectionListLevel;
-(bool)_canDecreaseSelectionListLevel;
-(id)_increaseSelectionListLevel;
-(id)_increaseSelectionListLevelOrdered;
-(id)_increaseSelectionListLevelUnordered;
-(void)_decreaseSelectionListLevel;
-(void)_setHighlighter:(id)arg1 ofType:(id)arg2 ;
-(void)_removeHighlighterOfType:(id)arg1 ;
-(bool)_hasHTMLDocument;
-(bool)_isUsingAcceleratedCompositing;
-(id)_compositingLayersHostingView;
-(bool)_beginPrintModeWithPageWidth:(float)arg1 height:(float)arg2 shrinkToFit:(bool)arg3 ;
-(bool)_beginScreenPaginationModeWithPageSize:(CGSize)arg1 shrinkToFit:(bool)arg2 ;
-(void)_endScreenPaginationMode;
-(id)accessibilityRootElement;
-(id)_selectedRange;
-(id)_documentRange;
-(id)_dataSource;
-(bool)_shouldInsertText:(id)arg1 replacingDOMRange:(id)arg2 givenAction:(int)arg3 ;
-(id)_topHTMLView;
-(id)_frameView;
-(bool)_shouldInsertFragment:(id)arg1 replacingDOMRange:(id)arg2 givenAction:(int)arg3 ;
-(bool)_shouldReplaceSelectionWithText:(id)arg1 givenAction:(int)arg2 ;
-(bool)_shouldDeleteRange:(id)arg1 ;
-(void)_setMouseDownEvent:(id)arg1 ;
-(bool)_isTopHTMLView;
-(id)_webView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(void)addSubview:(id)arg1 ;
-(bool)resignFirstResponder;
-(bool)becomeFirstResponder;
-(bool)isOpaque;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)layout;
-(void)scrollWheel:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)setNeedsLayout:(bool)arg1 ;
-(void)deleteBackward:(id)arg1 ;
-(void)toggleBold:(id)arg1 ;
-(void)toggleItalic:(id)arg1 ;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
-(void)moveUp:(id)arg1 ;
-(void)moveDown:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(bool)acceptsFirstResponder;
-(void)finalize;
-(void)drawSingleRect:(CGRect)arg1 ;
-(void)keyDown:(id)arg1 ;
-(void)keyUp:(id)arg1 ;
-(void)touch:(id)arg1 ;
-(void)deleteForward:(id)arg1 ;
-(void)insertParagraphSeparator:(id)arg1 ;
-(void)moveDownAndModifySelection:(id)arg1 ;
-(void)moveLeftAndModifySelection:(id)arg1 ;
-(void)moveRightAndModifySelection:(id)arg1 ;
-(void)moveUpAndModifySelection:(id)arg1 ;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(id)accessibilityFocusedUIElement;
-(id)_accessibilityParentForSubview:(id)arg1 ;
-(void)dataSourceUpdated:(id)arg1 ;
-(void)insertBacktab:(id)arg1 ;
-(void)insertTab:(id)arg1 ;
-(void)insertNewline:(id)arg1 ;
-(void)viewWillMoveToHostWindow:(id)arg1 ;
-(void)viewDidMoveToHostWindow;
-(void)_setPrinting:(bool)arg1 minimumPageLogicalWidth:(float)arg2 logicalHeight:(float)arg3 originalPageWidth:(float)arg4 originalPageHeight:(float)arg5 maximumShrinkRatio:(float)arg6 adjustViewSize:(bool)arg7 paginateScreenContent:(bool)arg8 ;
-(bool)callDelegateDoCommandBySelectorIfNeeded:(SEL)arg1 ;
-(Command*)coreCommandBySelector:(SEL)arg1 ;
-(Command*)coreCommandByName:(const char*)arg1 ;
-(void)executeCoreCommandBySelector:(SEL)arg1 ;
-(bool)maintainsInactiveSelection;
-(void)layoutToMinimumPageWidth:(float)arg1 height:(float)arg2 originalPageWidth:(float)arg3 originalPageHeight:(float)arg4 maximumShrinkRatio:(float)arg5 adjustingViewSize:(bool)arg6 ;
-(void)clearFocus;
-(void)selectWord:(id)arg1 ;
-(void)_changeWordCaseWithSelector:(SEL)arg1 ;
-(void)_updateControlTints;
-(void)_windowChangedKeyState;
-(bool)searchFor:(id)arg1 direction:(bool)arg2 caseSensitive:(bool)arg3 wrap:(bool)arg4 ;
-(void)executeCoreCommandByName:(const char*)arg1 ;
-(void)alignCenter:(id)arg1 ;
-(void)alignJustified:(id)arg1 ;
-(void)alignLeft:(id)arg1 ;
-(void)alignRight:(id)arg1 ;
-(void)deleteBackwardByDecomposingPreviousCharacter:(id)arg1 ;
-(void)deleteToBeginningOfLine:(id)arg1 ;
-(void)deleteToBeginningOfParagraph:(id)arg1 ;
-(void)deleteToEndOfLine:(id)arg1 ;
-(void)deleteToEndOfParagraph:(id)arg1 ;
-(void)deleteToMark:(id)arg1 ;
-(void)deleteWordBackward:(id)arg1 ;
-(void)deleteWordForward:(id)arg1 ;
-(void)ignoreSpelling:(id)arg1 ;
-(void)indent:(id)arg1 ;
-(void)insertLineBreak:(id)arg1 ;
-(void)insertNewlineIgnoringFieldEditor:(id)arg1 ;
-(void)insertTabIgnoringFieldEditor:(id)arg1 ;
-(void)makeTextWritingDirectionNatural:(id)arg1 ;
-(void)moveBackward:(id)arg1 ;
-(void)moveBackwardAndModifySelection:(id)arg1 ;
-(void)moveForward:(id)arg1 ;
-(void)moveForwardAndModifySelection:(id)arg1 ;
-(void)moveParagraphBackwardAndModifySelection:(id)arg1 ;
-(void)moveParagraphForwardAndModifySelection:(id)arg1 ;
-(void)moveToBeginningOfDocument:(id)arg1 ;
-(void)moveToBeginningOfDocumentAndModifySelection:(id)arg1 ;
-(void)moveToBeginningOfLine:(id)arg1 ;
-(void)moveToBeginningOfLineAndModifySelection:(id)arg1 ;
-(void)moveToBeginningOfParagraph:(id)arg1 ;
-(void)moveToBeginningOfParagraphAndModifySelection:(id)arg1 ;
-(void)moveToBeginningOfSentence:(id)arg1 ;
-(void)moveToBeginningOfSentenceAndModifySelection:(id)arg1 ;
-(void)moveToEndOfDocument:(id)arg1 ;
-(void)moveToEndOfDocumentAndModifySelection:(id)arg1 ;
-(void)moveToEndOfLine:(id)arg1 ;
-(void)moveToEndOfLineAndModifySelection:(id)arg1 ;
-(void)moveToEndOfParagraph:(id)arg1 ;
-(void)moveToEndOfParagraphAndModifySelection:(id)arg1 ;
-(void)moveToEndOfSentence:(id)arg1 ;
-(void)moveToEndOfSentenceAndModifySelection:(id)arg1 ;
-(void)moveToLeftEndOfLine:(id)arg1 ;
-(void)moveToLeftEndOfLineAndModifySelection:(id)arg1 ;
-(void)moveToRightEndOfLine:(id)arg1 ;
-(void)moveToRightEndOfLineAndModifySelection:(id)arg1 ;
-(void)moveWordBackward:(id)arg1 ;
-(void)moveWordBackwardAndModifySelection:(id)arg1 ;
-(void)moveWordForward:(id)arg1 ;
-(void)moveWordForwardAndModifySelection:(id)arg1 ;
-(void)moveWordLeft:(id)arg1 ;
-(void)moveWordLeftAndModifySelection:(id)arg1 ;
-(void)moveWordRight:(id)arg1 ;
-(void)moveWordRightAndModifySelection:(id)arg1 ;
-(void)outdent:(id)arg1 ;
-(void)overWrite:(id)arg1 ;
-(void)pageDown:(id)arg1 ;
-(void)pageDownAndModifySelection:(id)arg1 ;
-(void)pageUp:(id)arg1 ;
-(void)pageUpAndModifySelection:(id)arg1 ;
-(void)pasteAsPlainText:(id)arg1 ;
-(void)selectLine:(id)arg1 ;
-(void)selectParagraph:(id)arg1 ;
-(void)selectSentence:(id)arg1 ;
-(void)selectToMark:(id)arg1 ;
-(void)setMark:(id)arg1 ;
-(void)subscript:(id)arg1 ;
-(void)superscript:(id)arg1 ;
-(void)swapWithMark:(id)arg1 ;
-(void)transpose:(id)arg1 ;
-(void)underline:(id)arg1 ;
-(void)unscript:(id)arg1 ;
-(void)yank:(id)arg1 ;
-(void)yankAndSelect:(id)arg1 ;
-(void)clearText:(id)arg1 ;
-(void)jumpToSelection:(id)arg1 ;
-(void)_web_makePluginSubviewsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(void)reapplyStyles;
-(void)setNeedsToApplyStyles:(bool)arg1 ;
-(bool)_isSelectionEvent:(id)arg1 ;
-(void)centerSelectionInVisibleArea:(id)arg1 ;
-(id)_emptyStyle;
-(void)_applyStyleToSelection:(id)arg1 withUndoAction:(int)arg2 ;
-(void)uppercaseWord:(id)arg1 ;
-(void)lowercaseWord:(id)arg1 ;
-(void)capitalizeWord:(id)arg1 ;
-(void)makeBaseWritingDirectionNatural:(id)arg1 ;
-(bool)_wantsKeyDownForEvent:(id)arg1 ;
@end

