/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:49 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /Library/Audio/MIDI Drivers/AppleMIDIBluetoothDriver.plugin/AppleMIDIBluetoothDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppleMIDIBluetoothDriver/AppleMIDIBluetoothDriver-Structs.h>
@class CBPeripheral, BLEMIDIDataReceiver, NSString;

@interface BLEMIDIDevice : NSObject {

	CBPeripheral* peripheral;
	OpaqueMIDIDeviceRef dev;
	OpaqueMIDIEndpointRef inEndpoint;
	OpaqueMIDIEndpointRef outEndpoint;
	BLEMIDIDataReceiver* dataReceiver;
	int usage;
	NSString* uuid;

}

@property (nonatomic,retain) CBPeripheral * peripheral; 
@property (assign,nonatomic) OpaqueMIDIDeviceRef dev; 
@property (assign,nonatomic) OpaqueMIDIEndpointRef inEndpoint; 
@property (assign,nonatomic) OpaqueMIDIEndpointRef outEndpoint; 
@property (assign,nonatomic) BLEMIDIDataReceiver * dataReceiver; 
@property (assign,nonatomic) int usage; 
@property (assign,nonatomic) NSString * uuid; 
-(BLEMIDIDataReceiver *)dataReceiver;
-(OpaqueMIDIDeviceRef)dev;
-(void)setInEndpoint:(OpaqueMIDIEndpointRef)arg1 ;
-(OpaqueMIDIEndpointRef)outEndpoint;
-(void)setOutEndpoint:(OpaqueMIDIEndpointRef)arg1 ;
-(void)setDev:(OpaqueMIDIDeviceRef)arg1 ;
-(OpaqueMIDIEndpointRef)inEndpoint;
-(void)setDataReceiver:(BLEMIDIDataReceiver *)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)uuid;
-(void)setUsage:(int)arg1 ;
-(CBPeripheral *)peripheral;
-(void)setPeripheral:(CBPeripheral *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(void)setUUID:(char*)arg1 ;
-(int)usage;
@end
