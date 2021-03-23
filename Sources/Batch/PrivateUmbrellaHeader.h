//  PrivateUmbrellaHeader.h
//
//  This bridging header has been automatically generated by Bridgy
//  DO NOT EDIT MANUALLY.
//  USE THE TOOL TO REGENERATE IF YOU NEED TO ADD/REMOVE HEADERS.
//

#import <Batch/BAWSQueryAttributesCheck.h>
#import <Batch/BAWSQueryLocalCampaigns.h>
#import <Batch/BAWSQueryStart.h>
#import <Batch/BAWSQueryPushToken.h>
#import <Batch/BAWSQuery.h>
#import <Batch/BAWSQueryAttributes.h>
#import <Batch/BAWSQueryTracking.h>
#import <Batch/BAWSResponseAttributesCheck.h>
#import <Batch/BAWSResponseAttributes.h>
#import <Batch/BAPushTokenService.h>
#import <Batch/BAWSResponseStart.h>
#import <Batch/BAWSResponse.h>
#import <Batch/BAWSResponseTracking.h>
#import <Batch/BAWSResponseLocalCampaigns.h>
#import <Batch/BAWSResponsePushToken.h>
#import <Batch/BAEventTrackerService.h>
#import <Batch/BALocalCampaignsService.h>
#import <Batch/BAPushTokenService.h>
#import <Batch/BAStartService.h>
#import <Batch/BAUserDataServices.h>
#import <Batch/BATWebserviceHMAC.h>
#import <Batch/BAWebserviceStubCryptor.h>
#import <Batch/BAWebserviceAESGCMCryptor.h>
#import <Batch/BAWebserviceCryptor.h>
#import <Batch/BAWebserviceAESGCMGzipCryptor.h>
#import <Batch/BAWebserviceCryptorFactory.h>
#import <Batch/BAWebserviceJsonClient.h>
#import <Batch/BAWebserviceClientExecutor.h>
#import <Batch/BAConnectionDelegate.h>
#import <Batch/BAConnection.h>
#import <Batch/BAConnectionContentType.h>
#import <Batch/BAURLSessionProtocol.h>
#import <Batch/BAWebserviceClient.h>
#import <Batch/BAURLSession.h>
#import <Batch/BAWebserviceMsgPackClient.h>
#import <Batch/BAGETWebserviceClient.h>
#import <Batch/BAResponseHelper.h>
#import <Batch/BAWebserviceMetrics.h>
#import <Batch/BAWebserviceURLBuilder.h>
#import <Batch/BAQueryWebserviceClient.h>
#import <Batch/BAQueryWebserviceIdentifiersProviding.h>
#import <Batch/BAStandardQueryWebserviceIdentifiersProvider.h>
#import <Batch/BAQueryWebserviceClientDelegate.h>
#import <Batch/BAQueryWebserviceClientDatasource.h>
#import <Batch/BatchEventDataPrivate.h>
#import <Batch/BatchPushPrivate.h>
#import <Batch/BatchMessagingPrivate.h>
#import <Batch/Versions.h>
#import <Batch/BANotificationCenter.h>
#import <Batch/BatchInboxPrivate.h>
#import <Batch/BatchUserAttributePrivate.h>
#import <Batch/Defined.h>
#import <Batch/BASecureDate.h>
#import <Batch/BAErrorHelper.h>
#import <Batch/BALocalCampaignsManager.h>
#import <Batch/BACampaignsRefreshedTrigger.h>
#import <Batch/BANowTrigger.h>
#import <Batch/BALocalCampaignTriggerProtocol.h>
#import <Batch/BANextSessionTrigger.h>
#import <Batch/BACampaignsLoadedTrigger.h>
#import <Batch/BAEventTrigger.h>
#import <Batch/BACampaignsLoadedSignal.h>
#import <Batch/BACampaignsRefreshedSignal.h>
#import <Batch/BAPublicEventTrackedSignal.h>
#import <Batch/BANewSessionSignal.h>
#import <Batch/BALocalCampaignSignalProtocol.h>
#import <Batch/BAEventTrackedSignal.h>
#import <Batch/BALocalCampaign.h>
#import <Batch/BALocalCampaignTrackerProtocol.h>
#import <Batch/BALocalCampaignCountedEvent.h>
#import <Batch/BALocalCampaignsSQLTracker.h>
#import <Batch/BALocalCampaignsPersisting.h>
#import <Batch/BALocalCampaignsFilePersistence.h>
#import <Batch/BALocalCampaignsCenter.h>
#import <Batch/BALocalCampaignsParser.h>
#import <Batch/BALocalCampaignLandingOutput.h>
#import <Batch/BALocalCampaignOutputProtocol.h>
#import <Batch/BALValues.h>
#import <Batch/BALOperators.h>
#import <Batch/BALSExpression.h>
#import <Batch/BALispParser.h>
#import <Batch/BALEvaluationContext.h>
#import <Batch/BALCachingContext.h>
#import <Batch/BALEventContext.h>
#import <Batch/BALMetaContext.h>
#import <Batch/BALNativeAttributeContext.h>
#import <Batch/BALUserAttributeContext.h>
#import <Batch/BAInbox.h>
#import <Batch/BAInboxDatasourceProtocol.h>
#import <Batch/BAInboxFetchWebserviceClient.h>
#import <Batch/BAInboxDBHelperProtocol.h>
#import <Batch/BAInboxWebserviceClientType.h>
#import <Batch/BAInboxSQLiteHelper.h>
#import <Batch/BAInboxWebserviceResponse.h>
#import <Batch/BAInboxSyncWebserviceClient.h>
#import <Batch/BAInboxSQLiteDatasource.h>
#import <Batch/BABundleInfo.h>
#import <Batch/BATrackingAuthorization.h>
#import <Batch/BAUserProfile.h>
#import <Batch/BACenterMulticastDelegate.h>
#import <Batch/BASessionManager.h>
#import <Batch/BAConfiguration.h>
#import <Batch/BACoreCenter.h>
#import <Batch/BAInstallationID.h>
#import <Batch/BAApplicationLifecycle.h>
#import <Batch/BANotificationAuthorization.h>
#import <Batch/BAStatus.h>
#import <Batch/BAEventDispatcherCenter.h>
#import <Batch/BAPushEventPayload.h>
#import <Batch/BAMessageEventPayload.h>
#import <Batch/BAUserDataEnums.h>
#import <Batch/BAEvent.h>
#import <Batch/BAEventSQLiteDatasource.h>
#import <Batch/BAEventDatasourceProtocol.h>
#import <Batch/BATrackerSender.h>
#import <Batch/BATrackerScheduler.h>
#import <Batch/BATrackerSignpostHelper.h>
#import <Batch/BAEventSQLiteHelper.h>
#import <Batch/BATrackerCenter.h>
#import <Batch/BAEventDBHelperProtocol.h>
#import <Batch/BAUserDataManager.h>
#import <Batch/BAUserDataOperation.h>
#import <Batch/BAUserDataEditor.h>
#import <Batch/BAUserDataEnums.h>
#import <Batch/BAUserAttribute.h>
#import <Batch/BAUserDataDiff.h>
#import <Batch/BAUserDatasourceProtocol.h>
#import <Batch/BAUserCenter.h>
#import <Batch/BAUserSQLiteDatasource.h>
#import <Batch/BAPushSystemHelperProtocol.h>
#import <Batch/BAPushSystemHelper.h>
#import <Batch/BAPushPayload.h>
#import <Batch/BAPushCenter.h>
#import <Batch/BAUserDataBuiltinActions.h>
#import <Batch/BAUserEventBuiltinActions.h>
#import <Batch/BAActionsCenter.h>
#import <Batch/BADisplayReceiptCenter.h>
#import <Batch/BADisplayReceipt.h>
#import <Batch/BADisplayReceiptWebserviceClient.h>
#import <Batch/BADisplayReceiptCache.h>
#import <Batch/BADelegatedUIAlertController.h>
#import <Batch/BAMSGStackViewHorizontalItem.h>
#import <Batch/BAMSGViewController.h>
#import <Batch/BAMSGWindowHolder.h>
#import <Batch/BAMSGInterstitialViewController.h>
#import <Batch/BAMSGWebviewViewController.h>
#import <Batch/BAMSGVideoView.h>
#import <Batch/BAMSGBaseBannerViewController.h>
#import <Batch/BAMSGBannerViewController.h>
#import <Batch/BAMSGStackViewItem.h>
#import <Batch/BAMSGStackView.h>
#import <Batch/BAMSGModalViewController.h>
#import <Batch/BAMSGImageViewController.h>
#import <Batch/BAMSGAction.h>
#import <Batch/BATHtmlParser.h>
#import <Batch/BAMSGPayloadParser.h>
#import <Batch/BACSSImportProvider.h>
#import <Batch/BACSSToken.h>
#import <Batch/BACSSBuiltinImportProvider.h>
#import <Batch/BACSS.h>
#import <Batch/BACSSParser.h>
#import <Batch/BATWebviewUtils.h>
#import <Batch/BATWebviewBridgeLegacyWKHandler.h>
#import <Batch/BATWebviewJavascriptBridge.h>
#import <Batch/BATWebviewBridgeWKHandler.h>
#import <Batch/BAMessagingAnalyticsDelegate.h>
#import <Batch/BAMSGOverlayWindow.h>
#import <Batch/BAMSGImageDownloader.h>
#import <Batch/BAMSGCTA.h>
#import <Batch/BABatchMessagingDelegateWrapper.h>
#import <Batch/BAMessagingAnalyticsDeduplicatingDelegate.h>
#import <Batch/BAMessagingCenter.h>
#import <Batch/BAMSGMessage.h>
#import <Batch/BAMSGGradientView.h>
#import <Batch/BAMSGPassthroughProtocol.h>
#import <Batch/BAMSGPannableAnchoredContainerView.h>
#import <Batch/BAMSGPannableAlertContainerView.h>
#import <Batch/BAMSGCloseButton.h>
#import <Batch/BAMSGActivityIndicatorView.h>
#import <Batch/BAMSGLabel.h>
#import <Batch/BAMSGBaseContainerView.h>
#import <Batch/BAMSGCountdownView.h>
#import <Batch/BAMSGViewToolbox.h>
#import <Batch/BAMSGPannableContainerView.h>
#import <Batch/BAMSGButton.h>
#import <Batch/BAMSGStylableView.h>
#import <Batch/BAMSGImageView.h>
#import <Batch/BAMSGRemoteImageView.h>
#import <Batch/BATMessagingCloseErrorCause.h>
#import <Batch/BATGIFFile.h>
#import <Batch/BATGIFAnimator.h>
#import <Batch/BAOptOut.h>
#import <Batch/BAOptOutEventTracker.h>
#import <Batch/BAOptOutWebserviceClient.h>
#import <Batch/BADBGLCListViewController.h>
#import <Batch/BADBGLCDetailsViewController.h>
#import <Batch/BADBGCustomDataViewController.h>
#import <Batch/BADBGCustomDataModels.h>
#import <Batch/BADBGDebugViewController.h>
#import <Batch/BADBGIdentifiersViewController.h>
#import <Batch/BADBGModule.h>
#import <Batch/BADBGLocalCampaignsViewController.h>
#import <Batch/BADBGNameValueListItem.h>
#import <Batch/BASHA.h>
#import <Batch/BAAESB64Cryptor.h>
#import <Batch/BAEncryptionProtocol.h>
#import <Batch/BALogger.h>
#import <Batch/BALoggerUnified.h>
#import <Batch/BALoggerProtocol.h>
#import <Batch/BATZAwareDate.h>
#import <Batch/BASystemDateProvider.h>
#import <Batch/BASecureDateProvider.h>
#import <Batch/BAMultiDelegatesProxy.h>
#import <Batch/BADateProviderProtocol.h>
#import <Batch/BAUptimeProvider.h>
#import <Batch/BATGZIP.h>
#import <Batch/BAOverlayedInjectable.h>
#import <Batch/BAInjection.h>
#import <Batch/BAInjectableImplementations.h>
#import <Batch/BAOverlayedInjectable-Private.h>
#import <Batch/BAInjectionRegistry.h>
#import <Batch/BAInjectable.h>
#import <Batch/BAPromise.h>
#import <Batch/BATaskDebouncer.h>
#import <Batch/BAConcurrentQueue.h>
#import <Batch/BAReachabilityHelper.h>
#import <Batch/BAReachability.h>
#import <Batch/BAParameter.h>
#import <Batch/BANetworkParameters.h>
#import <Batch/BAUserDefaults.h>
#import <Batch/BAPropertiesCenter.h>
#import <Batch/BATMessagePackWriter.h>
#import <Batch/msgpack-c.h>
#import <Batch/BATMessagePackReader.h>
#import <Batch/BATJsonDictionary.h>
#import <Batch/BAThreading.h>
#import <Batch/BANullHelper.h>
#import <Batch/BARandom.h>
#import <Batch/BAWindowHelper.h>
#import <Batch/BAJson.h>
#import <Batch/BADateFormatting.h>
#import <Batch/BAOSHelper.h>
#import <Batch/BADirectories.h>
#import <Batch/NSObject+BASwizzled.h>
#import <Batch/BATJsonDictionary.h>
#import <Batch/BAHTTPHeaders.h>
#import <Batch/BAStringUtils.h>
