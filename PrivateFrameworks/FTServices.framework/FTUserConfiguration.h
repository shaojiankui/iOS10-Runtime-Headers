/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTUserConfiguration : NSObject

@property (nonatomic, readonly) bool _nonWifiFaceTimeEntitled;
@property (nonatomic) bool allowAnyNetwork;
@property (nonatomic) bool cellularFaceTimeEnabled;

+ (id)sharedInstance;

- (bool)_adequateInternalOrCarrierInstall;
- (bool)_nonWifiFaceTimeEntitled;
- (bool)allowAnyNetwork;
- (bool)cellularDataEnabledForBundleId:(id)arg1;
- (bool)cellularFaceTimeEnabled;
- (void)setAllowAnyNetwork:(bool)arg1;
- (void)setCellularFaceTimeEnabled:(bool)arg1;
- (bool)wifiAllowedForBundleId:(id)arg1;

@end