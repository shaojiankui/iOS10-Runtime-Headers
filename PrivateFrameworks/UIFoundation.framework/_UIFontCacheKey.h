/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface _UIFontCacheKey : NSObject <NSCopying> {
    NSString * _contentSizeCategory;
    UIFontDescriptor * _fontDescriptor;
    NSString * _fontName;
    double  _pointSize;
    NSString * _textStyle;
    int  _traits;
}

@property (nonatomic, copy) NSString *contentSizeCategory;
@property (nonatomic, copy) UIFontDescriptor *fontDescriptor;
@property (nonatomic, copy) NSString *fontName;
@property (nonatomic) double pointSize;
@property (nonatomic, copy) NSString *textStyle;
@property (nonatomic) int traits;

+ (id)fontCacheKeyWithFontDescriptor:(id)arg1 pointSize:(double)arg2;
+ (id)fontCacheKeyWithFontName:(id)arg1 traits:(int)arg2 pointSize:(double)arg3;
+ (id)fontCacheKeyWithTextStyle:(id)arg1 contentSizeCategory:(id)arg2;
+ (id)systemFontCacheKeyWithTraits:(int)arg1 pointSize:(double)arg2;

- (id)contentSizeCategory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)fontDescriptor;
- (id)fontName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)pointSize;
- (void)setContentSizeCategory:(id)arg1;
- (void)setFontDescriptor:(id)arg1;
- (void)setFontName:(id)arg1;
- (void)setPointSize:(double)arg1;
- (void)setTextStyle:(id)arg1;
- (void)setTraits:(int)arg1;
- (id)textStyle;
- (int)traits;

@end