/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSMutableArray, NSMutableSet, NSRecursiveLock;

@interface AXEventTapManager : NSObject {

	NSMutableArray* _eventTaps;
	NSMutableArray* _addedEventTapPairs;
	NSMutableSet* _removedEventTapIdentifiers;
	BOOL _isEnumeratingEventTaps;
	BOOL _shouldReorderEventTaps;
	/*^block*/id _installationGSCallback;
	/*^block*/id _installationHIDCallback;
	NSRecursiveLock* _eventTapLock;
	IOHIDEventSystemClientRef _ioSystemPostBackClient;
	/*^block*/id _installationEventRepPost;

}

@property (nonatomic,copy) id installationGSCallback;                //@synthesize installationGSCallback=_installationGSCallback - In the implementation block
@property (nonatomic,copy) id installationHIDCallback;               //@synthesize installationHIDCallback=_installationHIDCallback - In the implementation block
@property (nonatomic,copy) id installationEventRepPost;              //@synthesize installationEventRepPost=_installationEventRepPost - In the implementation block
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setInstallationGSCallback:(id)arg1 ;
-(void)setInstallationHIDCallback:(id)arg1 ;
-(void)setInstallationEventRepPost:(id)arg1 ;
-(void)_enumerateEventTapPairsUsingBlock:(/*^block*/id)arg1 ;
-(void)_reorderEventTaps;
-(void)_setGSEventTapCallback:(void*)arg1 ;
-(void)_setHIDEventTapCallback:(void*)arg1 ;
-(id)_copyCurrentEventTapPairs;
-(void)_setEventTapPriority:(id)arg1 priority:(int)arg2 ;
-(void)_installHIDFilter:(id)arg1 ;
-(void)_installSystemEventTap:(id)arg1 ;
-(void)_installEventTap:(id)arg1 ;
-(void)_removeHIDEventTapFilter:(id)arg1 ;
-(void)sendHIDSystemEvent:(id)arg1 senderID:(unsigned long long)arg2 ;
-(void)sendEvent:(id)arg1 afterTap:(id)arg2 useGSEvent:(BOOL)arg3 namedTaps:(id)arg4 ;
-(BOOL)_processHIDEvent:(IOHIDEventRef)arg1 taskPort:(unsigned)arg2 bundleId:(id)arg3 ;
-(BOOL)_processGSEvent:(SCD_Struct_AX3*)arg1 ;
-(void)setEventTapPriority:(id)arg1 priority:(int)arg2 ;
-(id)installEventTap:(/*^block*/id)arg1 identifier:(id)arg2 type:(int)arg3 ;
-(void)removeEventTap:(id)arg1 ;
-(id)installationGSCallback;
-(id)installationHIDCallback;
-(id)installationEventRepPost;
@end
