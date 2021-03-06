/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Podcasts/MTLibraryViewControllerProtocol.h>

@class MTLibrary, NSString;

@interface MTLibraryViewController : UIViewController <MTLibraryViewControllerProtocol> {

	MTLibrary* _library;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MTLibrary * library;                   //@synthesize library=_library - In the implementation block
-(MTLibrary *)library;
-(void)setLibrary:(MTLibrary *)arg1 ;
@end

