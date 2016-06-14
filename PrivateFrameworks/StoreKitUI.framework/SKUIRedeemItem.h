/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemItem : SKUIItem {
    <SKUIArtworkProviding> * artworks;
    long long  itemIdentifier;
    long long  itemKind;
    NSString * title;
}

@property (nonatomic, retain) <SKUIArtworkProviding> *artworks;
@property (nonatomic) long long itemIdentifier;
@property (nonatomic) long long itemKind;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ageBandRange;
- (id)artworkURLForSize:(long long)arg1;
- (id)artworks;
- (long long)itemIdentifier;
- (long long)itemKind;
- (id)largestArtworkURL;
- (void)setArtworks:(id)arg1;
- (void)setItemIdentifier:(long long)arg1;
- (void)setItemKind:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end