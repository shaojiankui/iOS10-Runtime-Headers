/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTagsSearchOperation : FCOperation {
    FCAssetManager * _assetManager;
    unsigned long long  _batchSize;
    FCCKDatabase * _contentDatabase;
    NSString * _contentStoreFrontID;
    NSError * _searchError;
    FCStreamingResults * _searchResults;
    id /* block */  _searchResultsBlock;
    NSString * _searchString;
    FCTagRecordSource * _tagRecordSource;
    unsigned long long  _tagType;
}

@property (nonatomic, retain) FCAssetManager *assetManager;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, retain) FCCKDatabase *contentDatabase;
@property (nonatomic, copy) NSString *contentStoreFrontID;
@property (nonatomic, retain) NSError *searchError;
@property (nonatomic, retain) FCStreamingResults *searchResults;
@property (copy) id /* block */ searchResultsBlock;
@property (nonatomic, copy) NSString *searchString;
@property (nonatomic, retain) FCTagRecordSource *tagRecordSource;
@property (nonatomic) unsigned long long tagType;

- (void).cxx_destruct;
- (id)_establishStreamOfTags;
- (void)_performSearchQuery:(id /* block */)arg1;
- (id)assetManager;
- (unsigned long long)batchSize;
- (id)contentDatabase;
- (id)contentStoreFrontID;
- (id)init;
- (id)initWithTagRecordSource:(id)arg1 contentDatabase:(id)arg2 contentStoreFrontID:(id)arg3 assetManager:(id)arg4 searchString:(id)arg5 tagType:(unsigned long long)arg6 batchSize:(unsigned long long)arg7;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)searchError;
- (id)searchResults;
- (id /* block */)searchResultsBlock;
- (id)searchString;
- (void)setAssetManager:(id)arg1;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setContentDatabase:(id)arg1;
- (void)setContentStoreFrontID:(id)arg1;
- (void)setSearchError:(id)arg1;
- (void)setSearchResults:(id)arg1;
- (void)setSearchResultsBlock:(id /* block */)arg1;
- (void)setSearchString:(id)arg1;
- (void)setTagRecordSource:(id)arg1;
- (void)setTagType:(unsigned long long)arg1;
- (id)tagRecordSource;
- (unsigned long long)tagType;
- (bool)validateOperation;

@end