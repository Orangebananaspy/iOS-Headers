//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicUI/MusicSongCellConfiguration.h>

@interface MusicSongListCellConfiguration : MusicSongCellConfiguration
{
}

+ (void)_loadArtworkForEntity:(id)arg1 cell:(id)arg2 cacheID:(id)arg3 cachedOnly:(BOOL)arg4 animated:(BOOL)arg5;
+ (BOOL)_showsArtwork;
+ (id)imageCache;
+ (struct UIEdgeInsets)tableViewSeparatorInset;
+ (id)tableViewCellBackgroundColor;
+ (id)tableViewBackgroundColor;
+ (float)tableViewCellHeight;
+ (Class)tableViewCellClass;
+ (id)mediaEntityPropertiesToFetch;
+ (void)configureCellAfterDeceleration:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned int)arg4 animated:(BOOL)arg5;
+ (void)configureCell:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned int)arg4 animated:(BOOL)arg5;

@end

