/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreArtworkRequestToken : NSObject <NSCopying> {
    NSURL * _artworkURL;
    NSString * _cropStyle;
    NSArray * _lookupItemArtworks;
    bool  _shouldIgnoreImage;
    NSString * _sourceEditorialArtworkKind;
}

@property (nonatomic, copy) NSURL *artworkURL;
@property (nonatomic, copy) NSString *cropStyle;
@property (nonatomic, copy) NSArray *lookupItemArtworks;
@property (nonatomic) bool shouldIgnoreImage;
@property (nonatomic, copy) NSString *sourceEditorialArtworkKind;

- (void).cxx_destruct;
- (id)artworkURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cropStyle;
- (id)lookupItemArtworks;
- (void)setArtworkURL:(id)arg1;
- (void)setCropStyle:(id)arg1;
- (void)setLookupItemArtworks:(id)arg1;
- (void)setShouldIgnoreImage:(bool)arg1;
- (void)setSourceEditorialArtworkKind:(id)arg1;
- (bool)shouldIgnoreImage;
- (id)sourceEditorialArtworkKind;

@end