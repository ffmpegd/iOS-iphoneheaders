/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/IMAttachmentResolving.h>

@protocol IMCloudSyncAttachmentResolverDelegate;
@class IMCloudSyncKeyValueStore, NSString;

@interface IMCloudSyncAttachmentResolver : NSObject <IMAttachmentResolving> {

	IMCloudSyncKeyValueStore* _keyValueStore;
	id<IMCloudSyncAttachmentResolverDelegate> _delegate;

}

@property (assign) id<IMCloudSyncAttachmentResolverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IMCloudSyncKeyValueStore * keyValueStore;              //@synthesize keyValueStore=_keyValueStore - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_dataFromAttachmentInfo:(id)arg1 resolution:(id)arg2 context:(id)arg3 ;
-(id)_resolutionFromData:(id)arg1 attachmentInfo:(id)arg2 context:(id)arg3 ;
-(char)canResolveAttachmentInfo:(id)arg1 ;
-(char)supportsAttachmentResolvingOption:(int)arg1 ;
-(void)resolveAttachmentInfo:(id)arg1 context:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)setDelegate:(id<IMCloudSyncAttachmentResolverDelegate>)arg1 ;
-(id<IMCloudSyncAttachmentResolverDelegate>)delegate;
-(IMCloudSyncKeyValueStore *)keyValueStore;
-(void)setKeyValueStore:(IMCloudSyncKeyValueStore *)arg1 ;
@end
