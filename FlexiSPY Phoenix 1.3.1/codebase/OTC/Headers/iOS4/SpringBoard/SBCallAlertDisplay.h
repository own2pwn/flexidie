/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBSlidingAlertDisplay.h"

@interface SBCallAlertDisplay : SBSlidingAlertDisplay
{
    BOOL _wasToldToStopRinging;
    BOOL _answered;
    BOOL _pendingRing;
    BOOL _isVCCallWaitingRinging;
}

+ (id)newBottomLockBarForDisplay:(id)arg1;
+ (id)newBottomBarForInstance:(id)arg1;
- (void)dealloc;
- (void)ringOrVibrate;
- (void)stopRingingOrVibrating;
- (BOOL)wasToldToStopRinging;
- (void)ringerChanged;
- (void)updateLCDWithName:(id)arg1 label:(id)arg2 breakPoint:(unsigned int)arg3;
- (void)updateImageFromPerson:(void *)arg1;
- (void)updateCallInformationFromAlert;
- (void)setAlert:(id)arg1;
- (BOOL)shouldEnableWirelessLCD;
- (void)checkForStatusChange;
- (void)_ringIfNecessary;
- (void)alertDisplayWillBecomeVisible;
- (void)alertDisplayBecameVisible;
- (void)finishedAnimatingIn;
- (id)additionalURLParameter;
- (void)answerCall:(struct __CTCall *)arg1;
- (void)answer:(id)arg1;
- (void)lockBarUnlocked:(id)arg1;
- (void)dismiss;
- (void)ignore;
- (void)handleVolumeEvent:(struct __GSEvent *)arg1;

@end
