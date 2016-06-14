/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHRelatedCollection : PHAssetCollection {
    NSArray * _debugInfo;
    NSArray * _momentLocalIdentifiers;
    PHObject * _relatedObject;
    unsigned long long  _relationType;
    NSString * _subtitle;
}

@property (nonatomic, readonly) NSArray *debugInfo;
@property (nonatomic, readonly) NSArray *momentLocalIdentifiers;
@property (nonatomic, readonly) PHObject *relatedObject;
@property (nonatomic, readonly) unsigned long long relationType;
@property (nonatomic, readonly) NSString *subtitle;

+ (id)_relatedCollectionsFromInfos:(id)arg1 relatedObject:(id)arg2;
+ (id)_relatedOptionsForTransientAssetCollection:(id)arg1;
+ (id)_transientCollectionListWithCollectionsRelatedToIdentifiers:(id)arg1 relationType:(unsigned long long)arg2 options:(id)arg3;
+ (id)transientCollectionListWithCollectionsRelatedToFaceCollections:(id)arg1 relationType:(unsigned long long)arg2 options:(id)arg3;
+ (id)transientCollectionListWithCollectionsRelatedToObject:(id)arg1 relationType:(unsigned long long)arg2 options:(id)arg3;
+ (id)transientCollectionListWithCollectionsRelatedToPersons:(id)arg1 relationType:(unsigned long long)arg2 options:(id)arg3;

- (void).cxx_destruct;
- (id)debugInfo;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 relationType:(unsigned long long)arg3 relatedObject:(id)arg4 title:(id)arg5 subtitle:(id)arg6 momentLocalIdentifiers:(id)arg7 debugInfo:(id)arg8;
- (id)localizedSubtitle;
- (id)momentLocalIdentifiers;
- (id)relatedObject;
- (unsigned long long)relationType;
- (id)subtitle;

@end