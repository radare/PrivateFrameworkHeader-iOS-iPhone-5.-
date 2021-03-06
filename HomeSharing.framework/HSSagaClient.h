/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableSet;

@interface HSSagaClient : NSObject  {
    BOOL _active;
    struct _xpc_connection_s { } *_connection;
    void *_connectionData;
    struct dispatch_queue_s { } *_connectionQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _deauthenticationCompletionHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _updateInProgressChangedHandler;

    BOOL _didLoadURLBag;
    NSMutableSet *_pendingArtworkRequests;
    unsigned int _updatePollingFrequency;
}

@property(copy) id updateInProgressChangedHandler;


- (void)authenticateWithCompletionHandler:(id)arg1;
- (void)_serverUpdateInProgressDidChange;
- (void)_serverDidLaunch;
- (void)deauthenticateWithCompletionHandler:(id)arg1;
- (void)_updateForPollingInterval;
- (void)_cancelUpdatePolling;
- (void)isAuthenticatedWithQueue:(struct dispatch_queue_s { }*)arg1 completionHandler:(id)arg2;
- (void)_loadURLBagWithCompletionHandler:(id)arg1;
- (void)_scheduleUpdatePolling;
- (void)_handleMessage:(unsigned long long)arg1 withResponse:(void*)arg2;
- (id)initWithAccount:(id)arg1 baseURL:(id)arg2 userAgent:(id)arg3 cookieHeaders:(id)arg4;
- (void)updatePlaylistWithSagaID:(unsigned long long)arg1 itemSagaIDs:(id)arg2 queue:(struct dispatch_queue_s { }*)arg3 completionHandler:(id)arg4;
- (void)removePlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)incrementItemProperty:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)isAuthenticatedWithCompletionHandler:(id)arg1;
- (void)setUpdateInProgressChangedHandler:(id)arg1;
- (void)loadIsUpdateInProgressWithCompletionHandler:(id)arg1;
- (id)updateInProgressChangedHandler;
- (void)addPlaylistWithName:(id)arg1 completionHandler:(id)arg2;
- (void)loadArtworkDataForSagaID:(unsigned long long)arg1;
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2;
- (id)init;
- (void)dealloc;
- (void)becomeActive;
- (void)resignActive;

@end
