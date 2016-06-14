/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFAuthenticationAssertion : NSObject <BSDescriptionProviding> {
    SBFUserAuthenticationController * _controller;
    NSString * _identifier;
    bool  _invalidated;
    long long  _type;
    bool  _valid;
}

@property (getter=_controller, setter=_setController:, nonatomic) SBFUserAuthenticationController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_identifier, setter=_setIdentifier:, nonatomic, retain) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (id)_controller;
- (id)_identifier;
- (void)_setController:(id)arg1;
- (void)_setIdentifier:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 withController:(id)arg3;
- (void)invalidate;
- (bool)isValid;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)type;

@end