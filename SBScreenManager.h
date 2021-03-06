/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:29 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface SBScreenManager : NSObject {

	NSMutableArray* _handlers;
	NSMutableDictionary* _screenIDToHandlerMap;
	NSMutableDictionary* _screenIDToLastDisplayMap;

}
+(id)sharedInstance;
-(void)_updateHandlerForConnectionToScreen:(id)arg1 ;
-(id)lastDisplayForScreenWithID:(unsigned)arg1 ;
-(id)lastDisplayForScreen:(id)arg1 ;
-(void)addConnectionHandler:(id)arg1 ;
-(id)init;
-(void)_screenDidConnect:(id)arg1 ;
-(void)_screenDidDisconnect:(id)arg1 ;
@end

