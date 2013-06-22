/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GKVoiceChatSessionDelegate-Protocol.h"

@class GKSession, GKVoiceChatSession, NSArray, NSString;

@interface GKVoiceChat : NSObject <GKVoiceChatSessionDelegate>
{
    id _playerStateUpdateHandler;
    GKSession *_gkSession;
    GKVoiceChatSession *_gkVoiceChatSession;
}

+ (BOOL)isVoIPAllowed;
@property(retain, nonatomic) GKVoiceChatSession *gkVoiceChatSession; // @synthesize gkVoiceChatSession=_gkVoiceChatSession;
@property(retain, nonatomic) GKSession *gkSession; // @synthesize gkSession=_gkSession;
@property(copy, nonatomic) id playerStateUpdateHandler; // @synthesize playerStateUpdateHandler=_playerStateUpdateHandler;
@property(readonly, nonatomic) NSArray *playerIDs;
- (void)gkVoiceChatSession:(id)arg1 stateUpdate:(unsigned int)arg2 forPeer:(id)arg3;
@property(nonatomic) float volume;
@property(nonatomic, getter=isActive) BOOL active;
@property(readonly, nonatomic) NSString *name;
- (void)setMute:(BOOL)arg1 forPlayer:(id)arg2;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initChat:(id)arg1 withSession:(id)arg2;

@end
