//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

@class ALSLocation, NSString;

@interface ALSCdmaEvdoTower : PBCodable
{
    int _bandclass;
    int _channel;
    ALSLocation *_location;
    int _pnoffset;
    NSString *_sectorid;
    struct {
        unsigned int bandclass:1;
        unsigned int channel:1;
        unsigned int pnoffset:1;
    } _has;
}

@property(retain, nonatomic) ALSLocation *location; // @synthesize location=_location;
@property(nonatomic) int pnoffset; // @synthesize pnoffset=_pnoffset;
@property(nonatomic) int channel; // @synthesize channel=_channel;
@property(nonatomic) int bandclass; // @synthesize bandclass=_bandclass;
@property(retain, nonatomic) NSString *sectorid; // @synthesize sectorid=_sectorid;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasLocation;
@property(nonatomic) BOOL hasPnoffset;
@property(nonatomic) BOOL hasChannel;
@property(nonatomic) BOOL hasBandclass;
@property(readonly, nonatomic) BOOL hasSectorid;
- (void)dealloc;

@end
