/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLManagedObjectContext.h>

@interface PLManagedObjectContext (Protected)
+ (id)sharedPersistentStoreCoordinator;
+ (id)managedObjectModel;
+ (id)oldAuxDatabasePath;
+ (BOOL)storeIsOldEnough;
+ (id)defaultStoreURL;
+ (void)getStoreURL:(id *)arg1 options:(id *)arg2 forFileURL:(id)arg3;
+ (void)getStoreURL:(id *)arg1 options:(id *)arg2;
- (BOOL)globalBoolValueForKey:(id)arg1 defaultValue:(BOOL)arg2;
@end
