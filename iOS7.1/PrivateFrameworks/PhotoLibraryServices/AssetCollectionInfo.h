//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSDictionary, NSNumber, NSString;

@interface AssetCollectionInfo : NSObject <NSSecureCoding>
{
    BOOL _isMine;
    BOOL _hasVideoAsset;
    BOOL _isDeletable;
    NSString *_GUID;
    NSString *_personID;
    NSDictionary *_metaData;
    NSNumber *_width;
    NSNumber *_height;
    NSDate *_timestamp;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(readonly, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(readonly, nonatomic) NSDictionary *metaData; // @synthesize metaData=_metaData;
@property(readonly, nonatomic) BOOL isDeletable; // @synthesize isDeletable=_isDeletable;
@property(readonly, nonatomic) BOOL hasVideoAsset; // @synthesize hasVideoAsset=_hasVideoAsset;
@property(readonly, nonatomic) BOOL isMine; // @synthesize isMine=_isMine;
@property(readonly, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(readonly, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
- (void)dealloc;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAssetCollection:(id)arg1;

@end

