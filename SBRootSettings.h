/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:33 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class SBAppParallaxSettings, SBFolderSettings, SBRootAnimationSettings, SBControlCenterSettings, SBAppSwitcherSettings, SBLockScreenSettings, SBCarDisplaySettings, SBLockScreenTestPluginSettings, SBIconColorSettings, SBFadeAnimationSettings, SBAlertItemsSettings, SBNotificationCenterSettings, SBLegibilitySettings, SBFWallpaperSettings, SBIrisWallpaperSettings, SBAnimationFactorySettings, SBHomeButtonSettings, SBLockScreenSlideUpAppSettings, SBReachabilitySettings, SBMedusaSettings, SBSnakebiteGestureSettings, SBStatusBarStyleOverridesSettings, SBCommandTabSettings, SBSpotlightSettings, SBSoftwareUpdateSettings, SBHarmonySettings, NSString;

@interface SBRootSettings : _UISettings {

	BOOL _preventLockover;
	SBAppParallaxSettings* _parallaxSettings;
	SBFolderSettings* _folderSettings;
	SBRootAnimationSettings* _rootAnimationSettings;
	SBControlCenterSettings* _controlCenterSettings;
	SBAppSwitcherSettings* _appSwitcherSettings;
	SBLockScreenSettings* _lockScreenSettings;
	SBCarDisplaySettings* _carDisplaySettings;
	SBLockScreenTestPluginSettings* _lockScreenTestPluginSettings;
	SBIconColorSettings* _iconColorSettings;
	SBFadeAnimationSettings* _fadeAnimationSettings;
	SBAlertItemsSettings* _alertItemsSettings;
	SBNotificationCenterSettings* _notificationCenterSettings;
	SBLegibilitySettings* _legibilitySettings;
	SBFWallpaperSettings* _wallpaperSettings;
	SBIrisWallpaperSettings* _irisWallpaperSettings;
	SBAnimationFactorySettings* _animationSettings;
	SBHomeButtonSettings* _homeButtonSettings;
	SBLockScreenSlideUpAppSettings* _lockScreenSlideUpAppSettings;
	SBReachabilitySettings* _reachabilitySettings;
	SBMedusaSettings* _medusaSettings;
	SBSnakebiteGestureSettings* _snakebiteGestureSettings;
	SBStatusBarStyleOverridesSettings* _statusBarStyleOverridesSettings;
	SBCommandTabSettings* _commandTabSettings;
	SBSpotlightSettings* _spotlightSettings;
	SBSoftwareUpdateSettings* _softwareUpdateSettings;
	SBHarmonySettings* _harmonySettings;
	NSString* _testRecipeClassName;
	double _settingsAlpha;

}

@property (retain) SBAppParallaxSettings * parallaxSettings;                                         //@synthesize parallaxSettings=_parallaxSettings - In the implementation block
@property (retain) SBFolderSettings * folderSettings;                                                //@synthesize folderSettings=_folderSettings - In the implementation block
@property (retain) SBRootAnimationSettings * rootAnimationSettings;                                  //@synthesize rootAnimationSettings=_rootAnimationSettings - In the implementation block
@property (retain) SBControlCenterSettings * controlCenterSettings;                                  //@synthesize controlCenterSettings=_controlCenterSettings - In the implementation block
@property (retain) SBAppSwitcherSettings * appSwitcherSettings;                                      //@synthesize appSwitcherSettings=_appSwitcherSettings - In the implementation block
@property (retain) SBLockScreenSettings * lockScreenSettings;                                        //@synthesize lockScreenSettings=_lockScreenSettings - In the implementation block
@property (retain) SBCarDisplaySettings * carDisplaySettings;                                        //@synthesize carDisplaySettings=_carDisplaySettings - In the implementation block
@property (retain) SBLockScreenTestPluginSettings * lockScreenTestPluginSettings;                    //@synthesize lockScreenTestPluginSettings=_lockScreenTestPluginSettings - In the implementation block
@property (retain) SBIconColorSettings * iconColorSettings;                                          //@synthesize iconColorSettings=_iconColorSettings - In the implementation block
@property (retain) SBFadeAnimationSettings * fadeAnimationSettings;                                  //@synthesize fadeAnimationSettings=_fadeAnimationSettings - In the implementation block
@property (retain) SBAlertItemsSettings * alertItemsSettings;                                        //@synthesize alertItemsSettings=_alertItemsSettings - In the implementation block
@property (retain) SBNotificationCenterSettings * notificationCenterSettings;                        //@synthesize notificationCenterSettings=_notificationCenterSettings - In the implementation block
@property (retain) SBLegibilitySettings * legibilitySettings;                                        //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (retain) SBFWallpaperSettings * wallpaperSettings;                                         //@synthesize wallpaperSettings=_wallpaperSettings - In the implementation block
@property (retain) SBIrisWallpaperSettings * irisWallpaperSettings;                                  //@synthesize irisWallpaperSettings=_irisWallpaperSettings - In the implementation block
@property (retain) SBAnimationFactorySettings * animationSettings;                                   //@synthesize animationSettings=_animationSettings - In the implementation block
@property (retain) SBHomeButtonSettings * homeButtonSettings;                                        //@synthesize homeButtonSettings=_homeButtonSettings - In the implementation block
@property (retain) SBLockScreenSlideUpAppSettings * lockScreenSlideUpAppSettings;                    //@synthesize lockScreenSlideUpAppSettings=_lockScreenSlideUpAppSettings - In the implementation block
@property (retain) SBReachabilitySettings * reachabilitySettings;                                    //@synthesize reachabilitySettings=_reachabilitySettings - In the implementation block
@property (retain) SBMedusaSettings * medusaSettings;                                                //@synthesize medusaSettings=_medusaSettings - In the implementation block
@property (retain) SBSnakebiteGestureSettings * snakebiteGestureSettings;                            //@synthesize snakebiteGestureSettings=_snakebiteGestureSettings - In the implementation block
@property (retain) SBStatusBarStyleOverridesSettings * statusBarStyleOverridesSettings;              //@synthesize statusBarStyleOverridesSettings=_statusBarStyleOverridesSettings - In the implementation block
@property (retain) SBCommandTabSettings * commandTabSettings;                                        //@synthesize commandTabSettings=_commandTabSettings - In the implementation block
@property (retain) SBSpotlightSettings * spotlightSettings;                                          //@synthesize spotlightSettings=_spotlightSettings - In the implementation block
@property (retain) SBSoftwareUpdateSettings * softwareUpdateSettings;                                //@synthesize softwareUpdateSettings=_softwareUpdateSettings - In the implementation block
@property (retain) SBHarmonySettings * harmonySettings;                                              //@synthesize harmonySettings=_harmonySettings - In the implementation block
@property (retain) NSString * testRecipeClassName;                                                   //@synthesize testRecipeClassName=_testRecipeClassName - In the implementation block
@property (assign) BOOL preventLockover;                                                             //@synthesize preventLockover=_preventLockover - In the implementation block
@property (assign) double settingsAlpha;                                                             //@synthesize settingsAlpha=_settingsAlpha - In the implementation block
+(id)settingsControllerModule;
-(SBReachabilitySettings *)reachabilitySettings;
-(SBHomeButtonSettings *)homeButtonSettings;
-(SBAppSwitcherSettings *)appSwitcherSettings;
-(SBLockScreenSettings *)lockScreenSettings;
-(SBFadeAnimationSettings *)fadeAnimationSettings;
-(SBRootAnimationSettings *)rootAnimationSettings;
-(SBAppParallaxSettings *)parallaxSettings;
-(SBAlertItemsSettings *)alertItemsSettings;
-(SBSpotlightSettings *)spotlightSettings;
-(SBFolderSettings *)folderSettings;
-(SBIconColorSettings *)iconColorSettings;
-(void)setParallaxSettings:(SBAppParallaxSettings *)arg1 ;
-(SBIrisWallpaperSettings *)irisWallpaperSettings;
-(SBNotificationCenterSettings *)notificationCenterSettings;
-(SBHarmonySettings *)harmonySettings;
-(SBFWallpaperSettings *)wallpaperSettings;
-(SBSoftwareUpdateSettings *)softwareUpdateSettings;
-(SBLockScreenTestPluginSettings *)lockScreenTestPluginSettings;
-(SBSnakebiteGestureSettings *)snakebiteGestureSettings;
-(SBCommandTabSettings *)commandTabSettings;
-(SBCarDisplaySettings *)carDisplaySettings;
-(SBStatusBarStyleOverridesSettings *)statusBarStyleOverridesSettings;
-(double)settingsAlpha;
-(NSString *)testRecipeClassName;
-(BOOL)preventLockover;
-(BOOL)_hasPreviousSettings;
-(void)setTestRecipeClassName:(NSString *)arg1 ;
-(void)setSettingsAlpha:(double)arg1 ;
-(void)setFolderSettings:(SBFolderSettings *)arg1 ;
-(void)setRootAnimationSettings:(SBRootAnimationSettings *)arg1 ;
-(void)setControlCenterSettings:(SBControlCenterSettings *)arg1 ;
-(void)setAppSwitcherSettings:(SBAppSwitcherSettings *)arg1 ;
-(void)setLockScreenSettings:(SBLockScreenSettings *)arg1 ;
-(void)setCarDisplaySettings:(SBCarDisplaySettings *)arg1 ;
-(void)setLockScreenTestPluginSettings:(SBLockScreenTestPluginSettings *)arg1 ;
-(void)setIconColorSettings:(SBIconColorSettings *)arg1 ;
-(void)setFadeAnimationSettings:(SBFadeAnimationSettings *)arg1 ;
-(void)setAlertItemsSettings:(SBAlertItemsSettings *)arg1 ;
-(void)setNotificationCenterSettings:(SBNotificationCenterSettings *)arg1 ;
-(void)setWallpaperSettings:(SBFWallpaperSettings *)arg1 ;
-(void)setIrisWallpaperSettings:(SBIrisWallpaperSettings *)arg1 ;
-(void)setHomeButtonSettings:(SBHomeButtonSettings *)arg1 ;
-(SBLockScreenSlideUpAppSettings *)lockScreenSlideUpAppSettings;
-(void)setLockScreenSlideUpAppSettings:(SBLockScreenSlideUpAppSettings *)arg1 ;
-(void)setReachabilitySettings:(SBReachabilitySettings *)arg1 ;
-(void)setSnakebiteGestureSettings:(SBSnakebiteGestureSettings *)arg1 ;
-(void)setStatusBarStyleOverridesSettings:(SBStatusBarStyleOverridesSettings *)arg1 ;
-(void)setCommandTabSettings:(SBCommandTabSettings *)arg1 ;
-(void)setSpotlightSettings:(SBSpotlightSettings *)arg1 ;
-(void)setSoftwareUpdateSettings:(SBSoftwareUpdateSettings *)arg1 ;
-(void)setHarmonySettings:(SBHarmonySettings *)arg1 ;
-(void)setPreventLockover:(BOOL)arg1 ;
-(SBAnimationFactorySettings *)animationSettings;
-(void)setAnimationSettings:(SBAnimationFactorySettings *)arg1 ;
-(void)setDefaultValues;
-(void)setLegibilitySettings:(SBLegibilitySettings *)arg1 ;
-(SBLegibilitySettings *)legibilitySettings;
-(SBControlCenterSettings *)controlCenterSettings;
-(SBMedusaSettings *)medusaSettings;
-(void)setMedusaSettings:(SBMedusaSettings *)arg1 ;
@end

