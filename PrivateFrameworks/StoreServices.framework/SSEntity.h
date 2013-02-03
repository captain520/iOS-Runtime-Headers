/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, SSXPCConnection, NSObject<OS_dispatch_queue>, NSDictionary, NSMutableDictionary;

@interface SSEntity : NSObject <SSXPCCoding> {
    SSXPCConnection *_connection;
    NSArray *_dirtyLocalExternalProperties;
    NSArray *_dirtyLocalProperties;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_localExternalValues;
    NSMutableDictionary *_localValues;
    long long _pid;
}

@property(getter=_localExternalValues,setter=_setLocalExternalValues:,copy) NSDictionary * _localExternalValues;
@property(getter=_localValues,setter=_setLocalValues:,copy) NSDictionary * _localValues;
@property(getter=_isManaged,readonly) BOOL _managed;
@property(readonly) long long _persistentIdentifier;
@property(readonly) BOOL exists;

+ (long long)_existsMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_setExternalValuesMessage;
+ (long long)_setValuesMessage;

- (void)__addCachedExternalValues:(id)arg1;
- (void)__addCachedPropertyValues:(id)arg1;
- (void)_addCachedExternalValues:(id)arg1;
- (void)_addCachedPropertyValues:(id)arg1;
- (void)_becomeManagedOnConnection:(id)arg1;
- (void)_getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned int)arg3 message:(long long)arg4;
- (id)_initWithPersistentIdentifier:(long long)arg1;
- (BOOL)_isManaged;
- (id)_localExternalValues;
- (id)_localValues;
- (long long)_persistentIdentifier;
- (void)_resetLocalIVars;
- (void)_setDirtyCachedExternalProperties:(id)arg1;
- (void)_setDirtyCachedProperties:(id)arg1;
- (void)_setLocalExternalValues:(id)arg1;
- (void)_setLocalValues:(id)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (BOOL)exists;
- (void)getValues:(id*)arg1 forExternalProperties:(const id*)arg2 count:(unsigned int)arg3;
- (void)getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned int)arg3;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)resetCachedExternalProperties:(const id*)arg1 count:(unsigned int)arg2;
- (void)resetCachedProperties:(const id*)arg1 count:(unsigned int)arg2;
- (BOOL)setExternalValuesWithDictionary:(id)arg1;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (BOOL)setValuesWithDictionary:(id)arg1;
- (id)valueForExternalProperty:(id)arg1;
- (id)valueForProperty:(id)arg1;

@end