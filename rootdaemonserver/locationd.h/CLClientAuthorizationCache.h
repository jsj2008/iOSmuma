//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLIntersiloService.h"

#import "CLClientAuthorizationCacheProtocol.h"

@class NSMutableDictionary;

@interface CLClientAuthorizationCache : CLIntersiloService <CLClientAuthorizationCacheProtocol>
{
    NSMutableDictionary *_clients;
}

+ (id)getSilo;
@property(retain, nonatomic) NSMutableDictionary *clients; // @synthesize clients=_clients;
- (void)clearAuthorizationOfClients;
- (void)clearAuthorizationOfClient:(id)arg1;
- (void)setClient:(id)arg1 authorization:(int)arg2 forMask:(unsigned int)arg3;
- (void)setAllClients:(id)arg1;
- (int)syncgetAuthorizationOfClient:(id)arg1 forServiceMask:(unsigned int)arg2;
- (void)endService;
- (void)beginService;
- (id)initInSilo:(id)arg1;
- (void)heartAttack;

@end
