/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@interface CNFServiceHandler : NSObject  {
}

+ (BOOL)disconnect;
+ (BOOL)connect;
+ (id)services;
+ (void)setCapabilities:(unsigned long long)arg1;
+ (void)_daemonConnectedNotification:(id)arg1;
+ (BOOL)isConnected;
+ (unsigned long long)capabilities;
+ (BOOL)conferencingHasValidatedAliasForAccount:(id)arg1;
+ (BOOL)_isValidProcess;
+ (BOOL)conferencingIsRegisteredForAccount:(id)arg1;
+ (void)_availabilityChanged:(id)arg1;
+ (void)_accountRegistrationStatusChanged:(id)arg1;
+ (BOOL)invitationListener;
+ (BOOL)conferencingIsSupported;
+ (void)updateConferenceCapabilitiesForControllerType:(int)arg1;
+ (BOOL)conferencingIsRestricted;
+ (BOOL)isFaceTimeActivated;
+ (BOOL)conferencingIsAvailable;
+ (void)activateFaceTime;
+ (void)deactivateFaceTime;
+ (int)activationState;
+ (BOOL)connect:(BOOL)arg1;
+ (id)faceTimeSourceAccount;


@end
