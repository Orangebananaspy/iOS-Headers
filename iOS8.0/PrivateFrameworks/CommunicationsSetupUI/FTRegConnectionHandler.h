//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FTRegConnectionHandler : NSObject
{
    int _serviceType;
    unsigned int _caps;
    NSString *_name;
    NSString *_listenerID;
    NSString *_logName;
    CDStruct_34e8bc21 _handlerFlags;
}

@property(retain, nonatomic) NSString *_logName; // @synthesize _logName;
@property(copy, nonatomic, setter=_setListenerID:) NSString *_listenerID; // @synthesize _listenerID;
@property(nonatomic) unsigned int caps; // @synthesize caps=_caps;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_handleDaemonDisconnected:(id)arg1;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_disconnectFromDaemon;
- (BOOL)connectToDaemon;
- (BOOL)connectToDaemon:(BOOL)arg1;
- (BOOL)isConnectedToDaemon;
- (BOOL)_isServiceSupported;
- (void)_stopListeningForNotifications;
- (void)_startListeningForNotifications;
@property(readonly, retain, nonatomic) NSString *_serviceName;
- (void)dealloc;
- (id)initWithServiceType:(int)arg1 name:(id)arg2;
- (id)initWithServiceType:(int)arg1 name:(id)arg2 capabilities:(unsigned int)arg3;

@end

