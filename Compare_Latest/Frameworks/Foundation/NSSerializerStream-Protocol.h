//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol NSSerializerStream
- (void)copySerializationInto:(void *)arg1;
- (void)writeDelayedInt:(unsigned int)arg1 for:(int)arg2;
- (unsigned int)writeRoomForInt:(int *)arg1;
- (unsigned int)writeData:(const void *)arg1 length:(unsigned int)arg2;
- (unsigned int)writeAlignedDataSize:(unsigned int)arg1;
- (unsigned int)writeInt:(unsigned int)arg1;
@end

