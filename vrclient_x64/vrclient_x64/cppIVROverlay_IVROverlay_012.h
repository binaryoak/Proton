#ifdef __cplusplus
extern "C" {
#endif
extern EVROverlayError cppIVROverlay_IVROverlay_012_FindOverlay(void *, const char *, VROverlayHandle_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_CreateOverlay(void *, const char *, const char *, VROverlayHandle_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_DestroyOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_012_SetHighQualityOverlay(void *, VROverlayHandle_t);
extern VROverlayHandle_t cppIVROverlay_IVROverlay_012_GetHighQualityOverlay(void *);
extern uint32_t cppIVROverlay_IVROverlay_012_GetOverlayKey(void *, VROverlayHandle_t, char *, uint32_t, EVROverlayError *);
extern uint32_t cppIVROverlay_IVROverlay_012_GetOverlayName(void *, VROverlayHandle_t, char *, uint32_t, EVROverlayError *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayImageData(void *, VROverlayHandle_t, void *, uint32_t, uint32_t *, uint32_t *);
extern const char * cppIVROverlay_IVROverlay_012_GetOverlayErrorNameFromEnum(void *, EVROverlayError);
extern EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayRenderingPid(void *, VROverlayHandle_t, uint32_t);
extern uint32_t cppIVROverlay_IVROverlay_012_GetOverlayRenderingPid(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayFlag(void *, VROverlayHandle_t, VROverlayFlags, bool);
extern EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayFlag(void *, VROverlayHandle_t, VROverlayFlags, bool *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayColor(void *, VROverlayHandle_t, float, float, float);
extern EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayColor(void *, VROverlayHandle_t, float *, float *, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayAlpha(void *, VROverlayHandle_t, float);
extern EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayAlpha(void *, VROverlayHandle_t, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayWidthInMeters(void *, VROverlayHandle_t, float);
extern EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayWidthInMeters(void *, VROverlayHandle_t, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters(void *, VROverlayHandle_t, float, float);
extern EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters(void *, VROverlayHandle_t, float *, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayTextureColorSpace(void *, VROverlayHandle_t, EColorSpace);
extern EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayTextureColorSpace(void *, VROverlayHandle_t, EColorSpace *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayTextureBounds(void *, VROverlayHandle_t, VRTextureBounds_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayTextureBounds(void *, VROverlayHandle_t, VRTextureBounds_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayTransformType(void *, VROverlayHandle_t, VROverlayTransformType *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayTransformAbsolute(void *, VROverlayHandle_t, ETrackingUniverseOrigin, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayTransformAbsolute(void *, VROverlayHandle_t, ETrackingUniverseOrigin *, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceRelative(void *, VROverlayHandle_t, TrackedDeviceIndex_t, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceRelative(void *, VROverlayHandle_t, TrackedDeviceIndex_t *, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceComponent(void *, VROverlayHandle_t, TrackedDeviceIndex_t, const char *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceComponent(void *, VROverlayHandle_t, TrackedDeviceIndex_t *, char *, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_012_ShowOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_012_HideOverlay(void *, VROverlayHandle_t);
extern bool cppIVROverlay_IVROverlay_012_IsOverlayVisible(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_012_GetTransformForOverlayCoordinates(void *, VROverlayHandle_t, ETrackingUniverseOrigin, HmdVector2_t, HmdMatrix34_t *);
extern bool cppIVROverlay_IVROverlay_012_PollNextOverlayEvent(void *, VROverlayHandle_t, winVREvent_t_101 *, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayInputMethod(void *, VROverlayHandle_t, VROverlayInputMethod *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayInputMethod(void *, VROverlayHandle_t, VROverlayInputMethod);
extern EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayMouseScale(void *, VROverlayHandle_t, HmdVector2_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayMouseScale(void *, VROverlayHandle_t, HmdVector2_t *);
extern bool cppIVROverlay_IVROverlay_012_ComputeOverlayIntersection(void *, VROverlayHandle_t, VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t *);
extern bool cppIVROverlay_IVROverlay_012_HandleControllerOverlayInteractionAsMouse(void *, VROverlayHandle_t, TrackedDeviceIndex_t);
extern bool cppIVROverlay_IVROverlay_012_IsHoverTargetOverlay(void *, VROverlayHandle_t);
extern VROverlayHandle_t cppIVROverlay_IVROverlay_012_GetGamepadFocusOverlay(void *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_SetGamepadFocusOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayNeighbor(void *, EOverlayDirection, VROverlayHandle_t, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_012_MoveGamepadFocusToNeighbor(void *, EOverlayDirection, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayTexture(void *, VROverlayHandle_t, Texture_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_ClearOverlayTexture(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayRaw(void *, VROverlayHandle_t, void *, uint32_t, uint32_t, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_012_SetOverlayFromFile(void *, VROverlayHandle_t, const char *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayTexture(void *, VROverlayHandle_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, EGraphicsAPIConvention *, EColorSpace *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_ReleaseNativeOverlayHandle(void *, VROverlayHandle_t, void *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_GetOverlayTextureSize(void *, VROverlayHandle_t, uint32_t *, uint32_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_CreateDashboardOverlay(void *, const char *, const char *, VROverlayHandle_t *, VROverlayHandle_t *);
extern bool cppIVROverlay_IVROverlay_012_IsDashboardVisible(void *);
extern bool cppIVROverlay_IVROverlay_012_IsActiveDashboardOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_012_SetDashboardOverlaySceneProcess(void *, VROverlayHandle_t, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_012_GetDashboardOverlaySceneProcess(void *, VROverlayHandle_t, uint32_t *);
extern void cppIVROverlay_IVROverlay_012_ShowDashboard(void *, const char *);
extern TrackedDeviceIndex_t cppIVROverlay_IVROverlay_012_GetPrimaryDashboardDevice(void *);
extern EVROverlayError cppIVROverlay_IVROverlay_012_ShowKeyboard(void *, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32_t, const char *, bool, uint64_t);
extern EVROverlayError cppIVROverlay_IVROverlay_012_ShowKeyboardForOverlay(void *, VROverlayHandle_t, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32_t, const char *, bool, uint64_t);
extern uint32_t cppIVROverlay_IVROverlay_012_GetKeyboardText(void *, char *, uint32_t);
extern void cppIVROverlay_IVROverlay_012_HideKeyboard(void *);
extern void cppIVROverlay_IVROverlay_012_SetKeyboardTransformAbsolute(void *, ETrackingUniverseOrigin, HmdMatrix34_t *);
extern void cppIVROverlay_IVROverlay_012_SetKeyboardPositionForOverlay(void *, VROverlayHandle_t, HmdRect2_t);
#ifdef __cplusplus
}
#endif