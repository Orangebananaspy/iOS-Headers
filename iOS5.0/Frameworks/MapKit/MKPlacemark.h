/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CLPlacemark.h"

#import "MKAnnotation-Protocol.h"

@class NSString;

@interface MKPlacemark : CLPlacemark <MKAnnotation>
{
}

@property(readonly, nonatomic) NSString *countryCode;
- (id)thoroughfare;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic) NSString *title;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 addressDictionary:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) NSString *subtitle;

@end

