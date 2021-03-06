//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPContainedObject.h>

@class TSPLazyReference, TSTCustomFormatList, TSTMergeRegionMap, TSTTableHeaderStorage, TSTTileIDKeyDict, TSUIntToIntDictionary;

__attribute__((visibility("hidden")))
@interface TSTTableDataStore : TSPContainedObject
{
    struct TSTTableRBTreeNode_s *mColumnTileIndex;
    struct TSTTableRBTreeNode_s *mRowTileIndex;
    TSTTileIDKeyDict *mTileStorage;
    TSTTableHeaderStorage *mRowHeaderStorage;
    TSPLazyReference *mColumnHeaderStorageReference;
    TSPLazyReference *mConditionalStyleSetTableReference;
    TSPLazyReference *mStringTableReference;
    TSPLazyReference *mStyleTableReference;
    TSPLazyReference *mFormulaTableReference;
    TSPLazyReference *mFormulaErrorTableReference;
    TSPLazyReference *mRichTextPayloadTableReference;
    TSPLazyReference *mFormatTableReference;
    TSPLazyReference *mMultipleChoiceListFormatTableReference;
    TSPLazyReference *mCommentStorageTableReference;
    TSPLazyReference *mImportWarningSetTableReference;
    TSTCustomFormatList *mPasteboardCustomFormatList;
    TSUIntToIntDictionary *mPasteboardCustomFormatMap;
    unsigned short mNextRowStripID;
    unsigned short mNextColumnStripID;
    TSTMergeRegionMap *mMergedCellRanges;
    unsigned long mCellCount;
    BOOL mCellCountValid;
    unsigned long mStorageVersion;
}

- (void)validate;
- (void)debugDump;
- (void)saveToArchive:(struct DataStore *)arg1 archiver:(id)arg2;
- (void)upgradeDataStoreCellStorage;
- (BOOL)needToUpgradeCellStorage;
- (void)setStorageParentToInfo:(id)arg1;
- (id)initWithArchive:(const struct DataStore *)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (void)p_updateTileStorageToCurrentVersion;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;
- (void)clearPasteboardCustomFormatList;
- (void)copyPasteboardCustomFormatsFromDataStore:(id)arg1;
- (id)p_pasteboardCustomFormatMap;
- (id)p_pasteboardCustomFormatList;
@property(readonly, nonatomic) BOOL hasPasteboardCustomFormats; // @dynamic hasPasteboardCustomFormats;
- (unsigned int)copyPasteboardCustomFormat:(unsigned int)arg1 toDocument:(id)arg2 clearingPasteboardFormat:(BOOL)arg3;

@end

