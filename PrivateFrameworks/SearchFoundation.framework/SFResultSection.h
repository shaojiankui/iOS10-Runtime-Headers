/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFResultSection : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    unsigned long long  _maxInitiallyVisibleResults;
    NSString * _moreText;
    double  _rankingScore;
    NSArray * _results;
    NSString * _title;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long maxInitiallyVisibleResults;
@property (nonatomic, copy) NSString *moreText;
@property (nonatomic) double rankingScore;
@property (nonatomic, retain) NSArray *results;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)maxInitiallyVisibleResults;
- (id)moreText;
- (double)rankingScore;
- (id)results;
- (void)setBundleIdentifier:(id)arg1;
- (void)setMaxInitiallyVisibleResults:(unsigned long long)arg1;
- (void)setMoreText:(id)arg1;
- (void)setRankingScore:(double)arg1;
- (void)setResults:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end