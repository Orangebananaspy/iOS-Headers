/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ISOperationDelegate-Protocol.h"

@class NSLock, NSMutableArray;

@interface SUScriptOperationDelegate : NSObject <ISOperationDelegate>
{
    NSMutableArray *_operations;
    NSLock *_lock;
}

- (void)_removeOperation:(id)arg1;
- (void)operationFinished:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)enqueueOperation:(id)arg1;
- (void)cancelAllOperations;
- (void)dealloc;

@end

