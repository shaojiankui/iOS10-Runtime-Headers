/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitCoachingFeatureGroup : PBCodable <NSCopying> {
    NSMutableArray * _futures;
    NSMutableArray * _pasts;
}

@property (nonatomic, retain) NSMutableArray *futures;
@property (nonatomic, retain) NSMutableArray *pasts;

+ (Class)futureType;
+ (Class)pastType;

- (void).cxx_destruct;
- (void)addFuture:(id)arg1;
- (void)addPast:(id)arg1;
- (void)clearFutures;
- (void)clearPasts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)futureAtIndex:(unsigned long long)arg1;
- (id)futures;
- (unsigned long long)futuresCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pastAtIndex:(unsigned long long)arg1;
- (id)pasts;
- (unsigned long long)pastsCount;
- (bool)readFrom:(id)arg1;
- (void)setFutures:(id)arg1;
- (void)setPasts:(id)arg1;
- (void)writeTo:(id)arg1;

@end