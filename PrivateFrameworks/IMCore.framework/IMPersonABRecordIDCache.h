/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMPersonABRecordIDCache : NSObject {
    NSMutableDictionary * _cache;
    double  _coalescingPeriod;
}

@property (nonatomic) double coalescingPeriod;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_abCache;
- (void)_forceCachePersist;
- (void)_persistCache;
- (long long)cacheSequenceNumber;
- (id)cachedRecordResultForQuery:(id)arg1 sequenceNumber:(long long)arg2;
- (void)clearExistingPreferencesCache;
- (void)clearInMemoryCache;
- (double)coalescingPeriod;
- (id)description;
- (id)filePath;
- (void)setCacheSequenceNumber:(long long)arg1;
- (void)setCachedRecordResult:(int)arg1 identifier:(int)arg2 forQuery:(id)arg3 sequenceNumber:(long long)arg4;
- (void)setCoalescingPeriod:(double)arg1;

@end