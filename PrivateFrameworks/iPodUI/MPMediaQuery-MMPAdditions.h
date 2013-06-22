/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPMediaQuery.h"

@class MPMediaItem, MPMediaItemCollection, NSArray, NSString;

@interface MPMediaQuery (MMPAdditions)
+ (int)backOfAlbumGroupingTypeForMediaType:(unsigned int)arg1;
+ (id)activeOnTheGoPlaylist;
+ (id)queryForMediaEntityType:(int)arg1;
- (id)displayableStringByStrippingCommonPrefixOffString:(id)arg1 property:(id)arg2;
- (id)firstFrequentLongPrefixForProperty:(id)arg1 occurrenceCount:(unsigned int *)arg2;
- (void)_calculateFirstFrequentLongPrefixInfo:(id)arg1;
@property(readonly, nonatomic) int comparableGroupingType;
- (BOOL)isEqualToNowPlayingQuery:(id)arg1;
- (id)nowPlayingComparableQuery;
@property(nonatomic) unsigned int filteredMediaTypes;
- (id)backOfAlbumQueryForItem:(id)arg1 defaultGrouping:(int)arg2;
@property(readonly, nonatomic) MPMediaItem *containingEntityRepresentativeItem;
@property(readonly, nonatomic) MPMediaItemCollection *containingAlbum;
@property(readonly, nonatomic) int containingEntityType;
- (void)getListingCountFormatString:(id *)arg1 isFallbackFormatString:(char *)arg2;
- (unsigned int)randomEntityIndexAvoidingEntityMatchingPredicate:(id)arg1;
@property(readonly, nonatomic) NSString *bestTitle;
- (unsigned int)indexOfEntityWithPersistentID:(unsigned long long)arg1;
- (unsigned int)indexOfFirstEntityMatchingPredicate:(id)arg1;
- (id)representativeItemsForAlbumsOfArtistAtIndex:(unsigned int)arg1 returningTotalItemCount:(unsigned int *)arg2;
- (id)representativeItemForEntityAtIndex:(unsigned int)arg1;
@property(nonatomic) unsigned int groupingThreshold;
@property(readonly, nonatomic) NSArray *entities;
- (id)queryForDrillingIntoEntityAtIndex:(unsigned int)arg1;
- (id)queryForDrillingIntoEntity:(id)arg1;
@end
