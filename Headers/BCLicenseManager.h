//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;
@protocol BCLicense;

@interface BCLicenseManager : NSObject
{
    BOOL _completedLoadingLicense;
    BOOL _cloudEnabled;
    id <BCLicense> _license;
    NSURL *_licenseURL;
    NSDate *_applicationBuildDate;
    NSString *_applicationVariant;
}

+ (void)load;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL cloudEnabled; // @synthesize cloudEnabled=_cloudEnabled;
@property(retain, nonatomic) NSString *applicationVariant; // @synthesize applicationVariant=_applicationVariant;
@property(retain, nonatomic) NSDate *applicationBuildDate; // @synthesize applicationBuildDate=_applicationBuildDate;
@property(nonatomic) BOOL completedLoadingLicense; // @synthesize completedLoadingLicense=_completedLoadingLicense;
@property(retain, nonatomic) NSURL *licenseURL; // @synthesize licenseURL=_licenseURL;
@property(readonly, nonatomic) id <BCLicense> license; // @synthesize license=_license;
- (id)websiteAvailableVersionsURL;
- (id)websiteRenewalURLForLicenseKey:(id)arg1;
- (id)websiteRenewalURL;
- (void)licenseDidBecomeInvalid;
- (void)licenseStateChanged;
- (void)completeUpdateWithHandler:(CDUnknownBlockType)arg1 status:(long long)arg2 info:(id)arg3 error:(id)arg4;
- (void)fallbackToTrial:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)processLicenseRefreshResult:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)processDataOfRegistration:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (long long)numberOfDaysLeftInTrialMode;
- (BOOL)canRenewLicense;
- (BOOL)canInstallUpdates;
- (id)updateExpirationDate;
- (id)registeredEmailAddress;
- (id)currentLicenseIdentifier;
- (long long)currentLicenseProvider;
- (long long)currentLicenseType;
@property(readonly, nonatomic) BOOL licenseIsSupported;
- (BOOL)licenseVariantIsSupported:(id)arg1;
- (BOOL)licenseVersionIsSupported:(id)arg1;
- (BOOL)applyLicense:(id)arg1;
- (void)networkTimeDidChangeNotification:(id)arg1;
- (void)cloudAuthenticationSessionDidChangeNotification:(id)arg1;
- (void)checkForDeploymentKeyWithPath:(id)arg1 removeFile:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchLicenseMetadata:(CDUnknownBlockType)arg1;
- (void)unregister;
- (void)validateLicenseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)tryToMigrateToCloudWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)tryToRefreshLicense:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)refreshLicenseIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)refreshLicenseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)obtainCloudLicenseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)obtainFallbackCloudLicenseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)obtainFallbackTrialLicenseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateLicenseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)registerWithLicenseKey:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithApplicationID:(id)arg1 publicCertificate:(id)arg2 licenseURL:(id)arg3 applicationBuildDate:(id)arg4 applicationVariant:(id)arg5 cloudEnabled:(BOOL)arg6;

@end

