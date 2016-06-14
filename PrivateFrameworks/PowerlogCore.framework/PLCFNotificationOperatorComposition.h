/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLCFNotificationOperatorComposition : NSObject {
    bool  _isStateRequired;
    bool  _listeningForNotifications;
    NSString * _notificationName;
    PLOperator * _operator;
    id /* block */  _operatorBlock;
    int  _stateToken;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property bool isStateRequired;
@property bool listeningForNotifications;
@property (retain) NSString *notificationName;
@property PLOperator *operator;
@property (nonatomic, copy) id /* block */ operatorBlock;
@property int stateToken;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithOperator:(id)arg1 forNotification:(id)arg2 requireState:(bool)arg3 withBlock:(id /* block */)arg4;
- (id)initWithWorkQueue:(id)arg1 forNotification:(id)arg2 requireState:(bool)arg3 withBlock:(id /* block */)arg4;
- (bool)isStateRequired;
- (bool)listenForNotifications:(bool)arg1;
- (bool)listeningForNotifications;
- (id)notificationName;
- (id)operator;
- (id /* block */)operatorBlock;
- (void)setIsStateRequired:(bool)arg1;
- (void)setListeningForNotifications:(bool)arg1;
- (void)setNotificationName:(id)arg1;
- (void)setOperator:(id)arg1;
- (void)setOperatorBlock:(id /* block */)arg1;
- (void)setStateToken:(int)arg1;
- (void)setWorkQueue:(id)arg1;
- (int)stateToken;
- (id)workQueue;

@end