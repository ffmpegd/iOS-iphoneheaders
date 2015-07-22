/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderTrackOutputInternal, AVAssetTrack, NSDictionary, NSString;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {

	AVAssetReaderTrackOutputInternal* _trackOutputInternal;

}

@property (nonatomic,readonly) AVAssetTrack * track; 
@property (nonatomic,readonly) NSDictionary * outputSettings; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
@property (assign,nonatomic) BOOL appliesPreferredTrackTransform; 
@property (getter=_isAttachedToMetadataAdaptor,nonatomic,readonly) BOOL attachedToMetadataAdaptor; 
+(id)assetReaderTrackOutputWithTrack:(id)arg1 outputSettings:(id)arg2 ;
-(id)_asset;
-(BOOL)appliesPreferredTrackTransform;
-(BOOL)_isAttachedToMetadataAdaptor;
-(void)_attachToMetadataAdaptor:(id)arg1 ;
-(opaqueCMSampleBufferRef)_copyNextSampleBufferForMetadataAdaptor;
-(NSString *)audioTimePitchAlgorithm;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(BOOL)_trimsSampleDurations;
-(BOOL)_enableTrackExtractionReturningError:(id*)arg1 ;
-(id)_figAssetReaderExtractionOptions;
-(id)initWithTrack:(id)arg1 outputSettings:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSDictionary *)outputSettings;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(void)setAppliesPreferredTrackTransform:(BOOL)arg1 ;
-(id)mediaType;
-(void)finalize;
-(AVAssetTrack *)track;
@end
