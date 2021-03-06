/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:29 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLogoutProgressDataSource.h>
#import <SpringBoard/SBAlertObserver.h>
#import <SpringBoard/UMCriticalUserSwitchStakeholder.h>

@class UMUserManager, UMUser, SBPolicyAggregator, SBLogoutProgressAlertViewController, NSMutableArray, NSMutableSet, UMUserSwitchBlockingTask, NSDictionary, NSString;

@interface SBUserSessionController : NSObject <SBLogoutProgressDataSource, SBAlertObserver, UMCriticalUserSwitchStakeholder> {

	UMUserManager* _userManager;
	UMUser* _lazy_user;
	SBPolicyAggregator* _lazy_policyAggregator;
	SBLogoutProgressAlertViewController* _progressAlert;
	NSMutableArray* _displayApplications;
	NSMutableSet* _terminatingApplications;
	UMUserSwitchBlockingTask* _terminateApplicationsTask;
	NSDictionary* _debugBlockingTasks;
	BOOL _loginSession;
	BOOL _loggingOut;

}

@property (nonatomic,retain,readonly) UMUser * user; 
@property (getter=isLoginSession,nonatomic,readonly) BOOL loginSession;                                                                //@synthesize loginSession=_loginSession - In the implementation block
@property (nonatomic,readonly) BOOL isMultiUserSupported; 
@property (nonatomic,readonly) BOOL canLogout; 
@property (assign,getter=isLoggingOut,nonatomic) BOOL loggingOut;                                                                      //@synthesize loggingOut=_loggingOut - In the implementation block
@property (nonatomic,readonly) long long sessionType; 
@property (setter=_setPolicyAggregator:,getter=_policyAggregator,nonatomic,retain) SBPolicyAggregator * policyAggregator;              //@synthesize lazy_policyAggregator=_lazy_policyAggregator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBPolicyAggregator *)policyAggregator;
-(BOOL)isLoggingOut;
-(void)alertDidDeactivate:(id)arg1 ;
-(id)_policyAggregator;
-(BOOL)isLoginSession;
-(id)_initWithUserManager:(id)arg1 ;
-(BOOL)isMultiUserSupported;
-(void)logoutWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)canLogout;
-(void)setLoggingOut:(BOOL)arg1 ;
-(void)_displayProgressAlertIfNeeded;
-(void)_noteApplicationDidExit:(id)arg1 ;
-(void)_evaluateRunningApplications;
-(CGPoint)_portraitOrientedProgressLocationForOrientation:(long long)arg1 ;
-(id)_massageApplicationListForDisplay:(id)arg1 ;
-(id)pendingApplicationsForLogoutProgressAlertViewController:(id)arg1 ;
-(id)debugBlockingTasksForLogoutProgressAlertViewController:(id)arg1 ;
-(void)disableCurrentUser;
-(void)_setPolicyAggregator:(id)arg1 ;
-(UMUser *)user;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)willSwitchToUser:(id)arg1 ;
-(void)readyToSwitchToUser:(id)arg1 ;
-(void)userSwitchBlockingTasksDidUpdate:(id)arg1 ;
-(long long)sessionType;
-(void)logout;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

