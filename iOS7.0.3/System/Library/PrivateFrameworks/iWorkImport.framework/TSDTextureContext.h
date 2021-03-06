/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@protocol TSDAnimationSession;
@interface TSDTextureContext : NSObject <NSCopying> {

	<TSDAnimationSession>* _session;
	unsigned _isMagicMove : 1;
	unsigned _shouldAddFinal : 1;
	unsigned _shouldAddReversedFinal : 1;
	unsigned _shouldAddMagicMoveObjectOnly : 1;
	unsigned _shouldNotAddContainedReps : 1;
	unsigned _shouldNotAddShapeAttributes : 1;
	unsigned _shouldNotAddText : 1;
	unsigned _shouldNotCacheTexture : 1;
	unsigned _shouldSeparateReflection : 1;
	unsigned _shouldSeparateShadow : 1;
	unsigned _shouldSeparateStroke : 1;
	unsigned _shouldSeparateText : 1;
	unsigned _shouldDistortToFit : 1;
	unsigned _shouldForceTextureGeneration : 1;
	BOOL _shouldAddNoShapeAttributes;

}

@property (assign,nonatomic) <TSDAnimationSession> * session;                //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) BOOL isMagicMove;                               //@synthesize isMagicMove=_isMagicMove - In the implementation block
@property (assign,nonatomic) BOOL shouldAddFinal;                            //@synthesize shouldAddFinal=_shouldAddFinal - In the implementation block
@property (assign,nonatomic) BOOL shouldAddReversedFinal;                    //@synthesize shouldAddReversedFinal=_shouldAddReversedFinal - In the implementation block
@property (assign,nonatomic) BOOL shouldAddMagicMoveObjectOnly;              //@synthesize shouldAddMagicMoveObjectOnly=_shouldAddMagicMoveObjectOnly - In the implementation block
@property (assign,nonatomic) BOOL shouldDistortToFit;                        //@synthesize shouldDistortToFit=_shouldDistortToFit - In the implementation block
@property (assign,nonatomic) BOOL shouldNotAddContainedReps;                 //@synthesize shouldNotAddContainedReps=_shouldNotAddContainedReps - In the implementation block
@property (assign,nonatomic) BOOL shouldNotAddShapeAttributes;               //@synthesize shouldAddNoShapeAttributes=_shouldAddNoShapeAttributes - In the implementation block
@property (assign,nonatomic) BOOL shouldNotAddText;                          //@synthesize shouldNotAddText=_shouldNotAddText - In the implementation block
@property (assign,nonatomic) BOOL shouldNotCacheTexture;                     //@synthesize shouldNotCacheTexture=_shouldNotCacheTexture - In the implementation block
@property (assign,nonatomic) BOOL shouldSeparateReflection;                  //@synthesize shouldSeparateReflection=_shouldSeparateReflection - In the implementation block
@property (assign,nonatomic) BOOL shouldSeparateShadow;                      //@synthesize shouldSeparateShadow=_shouldSeparateShadow - In the implementation block
@property (assign,nonatomic) BOOL shouldSeparateStroke;                      //@synthesize shouldSeparateStroke=_shouldSeparateStroke - In the implementation block
@property (assign,nonatomic) BOOL shouldSeparateText;                        //@synthesize shouldSeparateText=_shouldSeparateText - In the implementation block
@property (assign,nonatomic) BOOL shouldForceTextureGeneration;              //@synthesize shouldForceTextureGeneration=_shouldForceTextureGeneration - In the implementation block
+(id)contextWithSession:(id)arg1 ;
+(id)contextWithTextureContext:(id)arg1 ;
+(id)context;
-(BOOL)shouldAddFinal;
-(BOOL)shouldForceTextureGeneration;
-(BOOL)shouldNotCacheTexture;
-(BOOL)isMagicMove;
-(BOOL)shouldDistortToFit;
-(BOOL)shouldNotAddContainedReps;
-(void)setIsMagicMove:(BOOL)arg1 ;
-(BOOL)shouldAddMagicMoveObjectOnly;
-(BOOL)shouldSeparateShadow;
-(BOOL)shouldSeparateReflection;
-(BOOL)shouldSeparateStroke;
-(void)setShouldAddFinal:(BOOL)arg1 ;
-(void)setShouldAddMagicMoveObjectOnly:(BOOL)arg1 ;
-(BOOL)shouldAddReversedFinal;
-(void)setShouldAddReversedFinal:(BOOL)arg1 ;
-(void)setShouldDistortToFit:(BOOL)arg1 ;
-(void)setShouldNotAddContainedReps:(BOOL)arg1 ;
-(BOOL)shouldNotAddShapeAttributes;
-(void)setShouldNotAddShapeAttributes:(BOOL)arg1 ;
-(BOOL)shouldNotAddText;
-(void)setShouldNotAddText:(BOOL)arg1 ;
-(void)setShouldNotCacheTexture:(BOOL)arg1 ;
-(void)setShouldSeparateReflection:(BOOL)arg1 ;
-(void)setShouldSeparateShadow:(BOOL)arg1 ;
-(void)setShouldSeparateStroke:(BOOL)arg1 ;
-(BOOL)shouldSeparateText;
-(void)setShouldSeparateText:(BOOL)arg1 ;
-(void)setShouldForceTextureGeneration:(BOOL)arg1 ;
-(id)session;
-(void)setSession:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)reset;
@end

