extern UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryUserUGCRequest(void *, AccountID_t, EUserUGCList, EUGCMatchingUGCType, EUserUGCListSortOrder, AppId_t, AppId_t, uint32);
extern UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryAllUGCRequest(void *, EUGCQuery, EUGCMatchingUGCType, AppId_t, AppId_t, uint32);
extern UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryAllUGCRequest_2(void *, EUGCQuery, EUGCMatchingUGCType, AppId_t, AppId_t, const char *);
extern UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateQueryUGCDetailsRequest(void *, PublishedFileId_t *, uint32);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SendQueryUGCRequest(void *, UGCQueryHandle_t);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCResult(void *, UGCQueryHandle_t, uint32, winSteamUGCDetails_t_147 *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCPreviewURL(void *, UGCQueryHandle_t, uint32, char *, uint32);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCMetadata(void *, UGCQueryHandle_t, uint32, char *, uint32);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCChildren(void *, UGCQueryHandle_t, uint32, PublishedFileId_t *, uint32);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCStatistic(void *, UGCQueryHandle_t, uint32, EItemStatistic, uint64 *);
extern uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCNumAdditionalPreviews(void *, UGCQueryHandle_t, uint32);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCAdditionalPreview(void *, UGCQueryHandle_t, uint32, uint32, char *, uint32, char *, uint32, EItemPreviewType *);
extern uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCNumKeyValueTags(void *, UGCQueryHandle_t, uint32);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCKeyValueTag(void *, UGCQueryHandle_t, uint32, uint32, char *, uint32, char *, uint32);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetQueryUGCKeyValueTag_2(void *, UGCQueryHandle_t, uint32, const char *, char *, uint32);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_ReleaseQueryUGCRequest(void *, UGCQueryHandle_t);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredTag(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredTagGroup(void *, UGCQueryHandle_t, const SteamParamStringArray_t *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddExcludedTag(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnOnlyIDs(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnKeyValueTags(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnLongDescription(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnMetadata(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnChildren(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnAdditionalPreviews(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnTotalOnly(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetReturnPlaytimeStats(void *, UGCQueryHandle_t, uint32);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetLanguage(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetAllowCachedResponse(void *, UGCQueryHandle_t, uint32);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetCloudFileNameFilter(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetMatchAnyTag(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetSearchText(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetRankedByTrendDays(void *, UGCQueryHandle_t, uint32);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddRequiredKeyValueTag(void *, UGCQueryHandle_t, const char *, const char *);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_RequestUGCDetails(void *, PublishedFileId_t, uint32);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_CreateItem(void *, AppId_t, EWorkshopFileType);
extern UGCUpdateHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_StartItemUpdate(void *, AppId_t, PublishedFileId_t);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemTitle(void *, UGCUpdateHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemDescription(void *, UGCUpdateHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemUpdateLanguage(void *, UGCUpdateHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemMetadata(void *, UGCUpdateHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemVisibility(void *, UGCUpdateHandle_t, ERemoteStoragePublishedFileVisibility);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemTags(void *, UGCUpdateHandle_t, const SteamParamStringArray_t *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemContent(void *, UGCUpdateHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetItemPreview(void *, UGCUpdateHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetAllowLegacyUpload(void *, UGCUpdateHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveAllItemKeyValueTags(void *, UGCUpdateHandle_t);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemKeyValueTags(void *, UGCUpdateHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemKeyValueTag(void *, UGCUpdateHandle_t, const char *, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemPreviewFile(void *, UGCUpdateHandle_t, const char *, EItemPreviewType);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemPreviewVideo(void *, UGCUpdateHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_UpdateItemPreviewFile(void *, UGCUpdateHandle_t, uint32, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_UpdateItemPreviewVideo(void *, UGCUpdateHandle_t, uint32, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemPreview(void *, UGCUpdateHandle_t, uint32);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SubmitItemUpdate(void *, UGCUpdateHandle_t, const char *);
extern EItemUpdateStatus cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemUpdateProgress(void *, UGCUpdateHandle_t, uint64 *, uint64 *);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SetUserItemVote(void *, PublishedFileId_t, bool);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetUserItemVote(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddItemToFavorites(void *, AppId_t, PublishedFileId_t);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveItemFromFavorites(void *, AppId_t, PublishedFileId_t);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SubscribeItem(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_UnsubscribeItem(void *, PublishedFileId_t);
extern uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetNumSubscribedItems(void *);
extern uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetSubscribedItems(void *, PublishedFileId_t *, uint32);
extern uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemState(void *, PublishedFileId_t);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemInstallInfo(void *, PublishedFileId_t, uint64 *, char *, uint32, uint32 *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetItemDownloadInfo(void *, PublishedFileId_t, uint64 *, uint64 *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_DownloadItem(void *, PublishedFileId_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_BInitWorkshopForGameServer(void *, DepotId_t, const char *);
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_SuspendDownloads(void *, bool);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_StartPlaytimeTracking(void *, PublishedFileId_t *, uint32);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_StopPlaytimeTracking(void *, PublishedFileId_t *, uint32);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_StopPlaytimeTrackingForAllItems(void *);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddDependency(void *, PublishedFileId_t, PublishedFileId_t);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveDependency(void *, PublishedFileId_t, PublishedFileId_t);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_AddAppDependency(void *, PublishedFileId_t, AppId_t);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_RemoveAppDependency(void *, PublishedFileId_t, AppId_t);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_GetAppDependencies(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION014_DeleteItem(void *, PublishedFileId_t);