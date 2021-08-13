// Enum CoreUObject.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear                     = 0,
	CIM_CurveAuto                  = 1,
	CIM_Constant                   = 2,
	CIM_CurveUser                  = 3,
	CIM_CurveBreak                 = 4,
	CIM_CurveAutoClamped           = 5,
	CIM_MAX                        = 6
};


// Enum CoreUObject.ERangeBoundTypes
enum class ERangeBoundTypes : uint8_t
{
	ERangeBoundTypes__Exclusive    = 0,
	ERangeBoundTypes__Inclusive    = 1,
	ERangeBoundTypes__Open         = 2,
	ERangeBoundTypes__ERangeBoundTypes_MAX = 3
};


// Enum CoreUObject.EAutomationEventType
enum class EAutomationEventType : uint8_t
{
	EAutomationEventType__Info     = 0,
	EAutomationEventType__Warning  = 1,
	EAutomationEventType__Error    = 2,
	EAutomationEventType__EAutomationEventType_MAX = 3
};


// Enum CoreUObject.EMouseCursor
enum class EMouseCursor : uint8_t
{
	EMouseCursor__None             = 0,
	EMouseCursor__Default          = 1,
	EMouseCursor__TextEditBeam     = 2,
	EMouseCursor__ResizeLeftRight  = 3,
	EMouseCursor__ResizeUpDown     = 4,
	EMouseCursor__ResizeSouthEast  = 5,
	EMouseCursor__ResizeSouthWest  = 6,
	EMouseCursor__CardinalCross    = 7,
	EMouseCursor__Crosshairs       = 8,
	EMouseCursor__Hand             = 9,
	EMouseCursor__GrabHand         = 10,
	EMouseCursor__GrabHandClosed   = 11,
	EMouseCursor__SlashedCircle    = 12,
	EMouseCursor__EyeDropper       = 13,
	EMouseCursor__EMouseCursor_MAX = 14
};


// Enum CoreUObject.EUnit
enum class EUnit : uint8_t
{
	EUnit__Micrometers             = 0,
	EUnit__Millimeters             = 1,
	EUnit__Centimeters             = 2,
	EUnit__Meters                  = 3,
	EUnit__Kilometers              = 4,
	EUnit__Inches                  = 5,
	EUnit__Feet                    = 6,
	EUnit__Yards                   = 7,
	EUnit__Miles                   = 8,
	EUnit__Lightyears              = 9,
	EUnit__Degrees                 = 10,
	EUnit__Radians                 = 11,
	EUnit__MetersPerSecond         = 12,
	EUnit__KilometersPerHour       = 13,
	EUnit__MilesPerHour            = 14,
	EUnit__Celsius                 = 15,
	EUnit__Farenheit               = 16,
	EUnit__Kelvin                  = 17,
	EUnit__Micrograms              = 18,
	EUnit__Milligrams              = 19,
	EUnit__Grams                   = 20,
	EUnit__Kilograms               = 21,
	EUnit__MetricTons              = 22,
	EUnit__Ounces                  = 23,
	EUnit__Pounds                  = 24,
	EUnit__Stones                  = 25,
	EUnit__Newtons                 = 26,
	EUnit__PoundsForce             = 27,
	EUnit__KilogramsForce          = 28,
	EUnit__Hertz                   = 29,
	EUnit__Kilohertz               = 30,
	EUnit__Megahertz               = 31,
	EUnit__Gigahertz               = 32,
	EUnit__RevolutionsPerMinute    = 33,
	EUnit__Bytes                   = 34,
	EUnit__Kilobytes               = 35,
	EUnit__Megabytes               = 36,
	EUnit__Gigabytes               = 37,
	EUnit__Terabytes               = 38,
	EUnit__Lumens                  = 39,
	EUnit__Milliseconds            = 40,
	EUnit__Seconds                 = 41,
	EUnit__Minutes                 = 42,
	EUnit__Hours                   = 43,
	EUnit__Days                    = 44,
	EUnit__Months                  = 45,
	EUnit__Years                   = 46,
	EUnit__Multiplier              = 47,
	EUnit__Unspecified             = 48,
	EUnit__EUnit_MAX               = 49
};


// Enum CoreUObject.EPixelFormat
enum class EPixelFormat : uint8_t
{
	PF_Unknown                     = 0,
	PF_A32B32G32R32F               = 1,
	PF_B8G8R8A8                    = 2,
	PF_G8                          = 3,
	PF_G16                         = 4,
	PF_DXT1                        = 5,
	PF_DXT3                        = 6,
	PF_DXT5                        = 7,
	PF_UYVY                        = 8,
	PF_FloatRGB                    = 9,
	PF_FloatRGBA                   = 10,
	PF_DepthStencil                = 11,
	PF_ShadowDepth                 = 12,
	PF_R32_FLOAT                   = 13,
	PF_G16R16                      = 14,
	PF_G16R16F                     = 15,
	PF_G16R16F_FILTER              = 16,
	PF_G32R32F                     = 17,
	PF_A2B10G10R10                 = 18,
	PF_A16B16G16R16                = 19,
	PF_D24                         = 20,
	PF_R16F                        = 21,
	PF_R16F_FILTER                 = 22,
	PF_BC5                         = 23,
	PF_V8U8                        = 24,
	PF_A1                          = 25,
	PF_FloatR11G11B10              = 26,
	PF_A8                          = 27,
	PF_R32_UINT                    = 28,
	PF_R32_SINT                    = 29,
	PF_PVRTC2                      = 30,
	PF_PVRTC4                      = 31,
	PF_R16_UINT                    = 32,
	PF_R16_SINT                    = 33,
	PF_R16G16B16A16_UINT           = 34,
	PF_R16G16B16A16_SINT           = 35,
	PF_R5G6B5_UNORM                = 36,
	PF_R8G8B8A8                    = 37,
	PF_A8R8G8B8                    = 38,
	PF_BC4                         = 39,
	PF_R8G8                        = 40,
	PF_ATC_RGB                     = 41,
	PF_ATC_RGBA_E                  = 42,
	PF_ATC_RGBA_I                  = 43,
	PF_X24_G8                      = 44,
	PF_ETC1                        = 45,
	PF_ETC2_RGB                    = 46,
	PF_ETC2_RGBA                   = 47,
	PF_R32G32B32A32_UINT           = 48,
	PF_R16G16_UINT                 = 49,
	PF_ASTC_4x4                    = 50,
	PF_ASTC_6x6                    = 51,
	PF_ASTC_8x8                    = 52,
	PF_ASTC_10x10                  = 53,
	PF_ASTC_12x12                  = 54,
	PF_BC6H                        = 55,
	PF_BC7                         = 56,
	PF_R8_UINT                     = 57,
	PF_L8                          = 58,
	PF_XGXR8                       = 59,
	PF_R32G32_UINT                 = 60,
	PF_MAX                         = 61
};


// Enum CoreUObject.EAxis
enum class EAxis : uint8_t
{
	EAxis__None                    = 0,
	EAxis__X                       = 1,
	EAxis__Y                       = 2,
	EAxis__Z                       = 3,
	EAxis__EAxis_MAX               = 4
};


// Enum CoreUObject.ELogTimes
enum class ELogTimes : uint8_t
{
	ELogTimes__None                = 0,
	ELogTimes__UTC                 = 1,
	ELogTimes__SinceGStartTime     = 2,
	ELogTimes__ELogTimes_MAX       = 3
};


// Enum CoreUObject.ESearchDir
enum class ESearchDir : uint8_t
{
	ESearchDir__FromStart          = 0,
	ESearchDir__FromEnd            = 1,
	ESearchDir__ESearchDir_MAX     = 2
};


// Enum CoreUObject.ESearchCase
enum class ESearchCase : uint8_t
{
	ESearchCase__CaseSensitive     = 0,
	ESearchCase__IgnoreCase        = 1,
	ESearchCase__ESearchCase_MAX   = 2
};


// Enum CoreUObject.ELifetimeCondition
enum class ELifetimeCondition : uint8_t
{
	COND_None                      = 0,
	COND_InitialOnly               = 1,
	COND_OwnerOnly                 = 2,
	COND_SkipOwner                 = 3,
	COND_SimulatedOnly             = 4,
	COND_AutonomousOnly            = 5,
	COND_SimulatedOrPhysics        = 6,
	COND_InitialOrOwner            = 7,
	COND_Custom                    = 8,
	COND_ReplayOrOwner             = 9,
	COND_ReplayOnly                = 10,
	COND_SimulatedOnlyNoReplay     = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay                = 13,
	COND_Max                       = 14
};



// Enum Engine.ETextGender
enum class ETextGender : uint8_t
{
	ETextGender__Masculine         = 0,
	ETextGender__Feminine          = 1,
	ETextGender__Neuter            = 2,
	ETextGender__ETextGender_MAX   = 3
};


// Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8_t
{
	EFormatArgumentType__Int       = 0,
	EFormatArgumentType__UInt      = 1,
	EFormatArgumentType__Float     = 2,
	EFormatArgumentType__Double    = 3,
	EFormatArgumentType__Text      = 4,
	EFormatArgumentType__Gender    = 5,
	EFormatArgumentType__EFormatArgumentType_MAX = 6
};


// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8_t
{
	EEndPlayReason__Destroyed      = 0,
	EEndPlayReason__LevelTransition = 1,
	EEndPlayReason__EndPlayInEditor = 2,
	EEndPlayReason__RemovedFromWorld = 3,
	EEndPlayReason__Quit           = 4,
	EEndPlayReason__EEndPlayReason_MAX = 5
};


// Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8_t
{
	ENavPathEvent__Cleared         = 0,
	ENavPathEvent__NewPath         = 1,
	ENavPathEvent__UpdatedDueToGoalMoved = 2,
	ENavPathEvent__UpdatedDueToNavigationChanged = 3,
	ENavPathEvent__Invalidated     = 4,
	ENavPathEvent__RePathFailed    = 5,
	ENavPathEvent__MetaPathUpdate  = 6,
	ENavPathEvent__Custom          = 7,
	ENavPathEvent__ENavPathEvent_MAX = 8
};


// Enum Engine.ETickingGroup
enum class ETickingGroup : uint8_t
{
	TG_PrePhysics                  = 0,
	TG_StartPhysics                = 1,
	TG_DuringPhysics               = 2,
	TG_EndPhysics                  = 3,
	TG_PostPhysics                 = 4,
	TG_PostUpdateWork              = 5,
	TG_LastDemotable               = 6,
	TG_NewlySpawned                = 7,
	TG_MAX                         = 8
};


// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8_t
{
	EComponentCreationMethod__Native = 0,
	EComponentCreationMethod__SimpleConstructionScript = 1,
	EComponentCreationMethod__UserConstructionScript = 2,
	EComponentCreationMethod__Instance = 3,
	EComponentCreationMethod__EComponentCreationMethod_MAX = 4
};


// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8_t
{
	EPlaneConstraintAxisSetting__Custom = 0,
	EPlaneConstraintAxisSetting__X = 1,
	EPlaneConstraintAxisSetting__Y = 2,
	EPlaneConstraintAxisSetting__Z = 3,
	EPlaneConstraintAxisSetting__UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting__EPlaneConstraintAxisSetting_MAX = 5
};


// Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8_t
{
	EInterpToBehaviourType__OneShot = 0,
	EInterpToBehaviourType__OneShot_Reverse = 1,
	EInterpToBehaviourType__Loop_Reset = 2,
	EInterpToBehaviourType__PingPong = 3,
	EInterpToBehaviourType__EInterpToBehaviourType_MAX = 4
};


// Enum Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8_t
{
	PIDT_None                      = 0,
	PIDT_Int                       = 1,
	PIDT_Float                     = 2,
	PIDT_String                    = 3,
	PIDT_Object                    = 4,
	PIDT_Custom                    = 5,
	PIDT_MAX                       = 6
};


// Enum Engine.ENetworkFailure
enum class ENetworkFailure : uint8_t
{
	ENetworkFailure__NetDriverAlreadyExists = 0,
	ENetworkFailure__NetDriverCreateFailure = 1,
	ENetworkFailure__NetDriverListenFailure = 2,
	ENetworkFailure__ConnectionLost = 3,
	ENetworkFailure__ConnectionTimeout = 4,
	ENetworkFailure__FailureReceived = 5,
	ENetworkFailure__OutdatedClient = 6,
	ENetworkFailure__OutdatedServer = 7,
	ENetworkFailure__PendingConnectionFailure = 8,
	ENetworkFailure__NetGuidMismatch = 9,
	ENetworkFailure__NetChecksumMismatch = 10,
	ENetworkFailure__ENetworkFailure_MAX = 11
};


// Enum Engine.ETravelFailure
enum class ETravelFailure : uint8_t
{
	ETravelFailure__NoLevel        = 0,
	ETravelFailure__LoadMapFailure = 1,
	ETravelFailure__InvalidURL     = 2,
	ETravelFailure__PackageMissing = 3,
	ETravelFailure__PackageVersion = 4,
	ETravelFailure__NoDownload     = 5,
	ETravelFailure__TravelFailure  = 6,
	ETravelFailure__CheatCommands  = 7,
	ETravelFailure__PendingNetGameCreateFailure = 8,
	ETravelFailure__CloudSaveFailure = 9,
	ETravelFailure__ServerTravelFailure = 10,
	ETravelFailure__ClientTravelFailure = 11,
	ETravelFailure__ETravelFailure_MAX = 12
};


// Enum Engine.EMovementMode
enum class EMovementMode : uint8_t
{
	MOVE_None                      = 0,
	MOVE_Walking                   = 1,
	MOVE_NavWalking                = 2,
	MOVE_Falling                   = 3,
	MOVE_Swimming                  = 4,
	MOVE_Flying                    = 5,
	MOVE_Custom                    = 6,
	MOVE_MAX                       = 7
};


// Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8_t
{
	EScreenOrientation__Unknown    = 0,
	EScreenOrientation__Portrait   = 1,
	EScreenOrientation__PortraitUpsideDown = 2,
	EScreenOrientation__LandscapeLeft = 3,
	EScreenOrientation__LandscapeRight = 4,
	EScreenOrientation__FaceUp     = 5,
	EScreenOrientation__FaceDown   = 6,
	EScreenOrientation__EScreenOrientation_MAX = 7
};


// Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8_t
{
	ObjectTypeQuery1               = 0,
	ObjectTypeQuery2               = 1,
	ObjectTypeQuery3               = 2,
	ObjectTypeQuery4               = 3,
	ObjectTypeQuery5               = 4,
	ObjectTypeQuery6               = 5,
	ObjectTypeQuery7               = 6,
	ObjectTypeQuery8               = 7,
	ObjectTypeQuery9               = 8,
	ObjectTypeQuery10              = 9,
	ObjectTypeQuery11              = 10,
	ObjectTypeQuery12              = 11,
	ObjectTypeQuery13              = 12,
	ObjectTypeQuery14              = 13,
	ObjectTypeQuery15              = 14,
	ObjectTypeQuery16              = 15,
	ObjectTypeQuery17              = 16,
	ObjectTypeQuery18              = 17,
	ObjectTypeQuery19              = 18,
	ObjectTypeQuery20              = 19,
	ObjectTypeQuery21              = 20,
	ObjectTypeQuery22              = 21,
	ObjectTypeQuery23              = 22,
	ObjectTypeQuery24              = 23,
	ObjectTypeQuery25              = 24,
	ObjectTypeQuery26              = 25,
	ObjectTypeQuery27              = 26,
	ObjectTypeQuery28              = 27,
	ObjectTypeQuery29              = 28,
	ObjectTypeQuery30              = 29,
	ObjectTypeQuery31              = 30,
	ObjectTypeQuery32              = 31,
	ObjectTypeQuery_MAX            = 32,
	EObjectTypeQuery_MAX           = 33
};


// Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8_t
{
	EDrawDebugTrace__None          = 0,
	EDrawDebugTrace__ForOneFrame   = 1,
	EDrawDebugTrace__ForDuration   = 2,
	EDrawDebugTrace__Persistent    = 3,
	EDrawDebugTrace__EDrawDebugTrace_MAX = 4
};


// Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8_t
{
	TraceTypeQuery1                = 0,
	TraceTypeQuery2                = 1,
	TraceTypeQuery3                = 2,
	TraceTypeQuery4                = 3,
	TraceTypeQuery5                = 4,
	TraceTypeQuery6                = 5,
	TraceTypeQuery7                = 6,
	TraceTypeQuery8                = 7,
	TraceTypeQuery9                = 8,
	TraceTypeQuery10               = 9,
	TraceTypeQuery11               = 10,
	TraceTypeQuery12               = 11,
	TraceTypeQuery13               = 12,
	TraceTypeQuery14               = 13,
	TraceTypeQuery15               = 14,
	TraceTypeQuery16               = 15,
	TraceTypeQuery17               = 16,
	TraceTypeQuery18               = 17,
	TraceTypeQuery19               = 18,
	TraceTypeQuery20               = 19,
	TraceTypeQuery21               = 20,
	TraceTypeQuery22               = 21,
	TraceTypeQuery23               = 22,
	TraceTypeQuery24               = 23,
	TraceTypeQuery25               = 24,
	TraceTypeQuery26               = 25,
	TraceTypeQuery27               = 26,
	TraceTypeQuery28               = 27,
	TraceTypeQuery29               = 28,
	TraceTypeQuery30               = 29,
	TraceTypeQuery31               = 30,
	TraceTypeQuery32               = 31,
	TraceTypeQuery_MAX             = 32,
	ETraceTypeQuery_MAX            = 33
};


// Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8_t
{
	EMoveComponentAction__Move     = 0,
	EMoveComponentAction__Stop     = 1,
	EMoveComponentAction__Return   = 2,
	EMoveComponentAction__EMoveComponentAction_MAX = 3
};


// Enum Engine.EQuitPreference
enum class EQuitPreference : uint8_t
{
	EQuitPreference__Quit          = 0,
	EQuitPreference__Background    = 1,
	EQuitPreference__EQuitPreference_MAX = 2
};


// Enum Engine.EInputEvent
enum class EInputEvent : uint8_t
{
	IE_Pressed                     = 0,
	IE_Released                    = 1,
	IE_Repeat                      = 2,
	IE_DoubleClick                 = 3,
	IE_Axis                        = 4,
	IE_MAX                         = 5
};


// Enum Engine.EStanceMode
enum class EStanceMode : uint8_t
{
	STANCE_None                    = 0,
	STANCE_Stand                   = 1,
	STANCE_Crouch                  = 2,
	STANCE_Prone                   = 3,
	STANCE_MAX                     = 4
};


// Enum Engine.ENetRole
enum class ENetRole : uint8_t
{
	ROLE_None                      = 0,
	ROLE_SimulatedProxy            = 1,
	ROLE_AutonomousProxy           = 2,
	ROLE_Authority                 = 3,
	ROLE_MAX                       = 4
};


// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8_t
{
	EAttachLocation__KeepRelativeOffset = 0,
	EAttachLocation__KeepWorldPosition = 1,
	EAttachLocation__SnapToTarget  = 2,
	EAttachLocation__SnapToTargetIncludingScale = 3,
	EAttachLocation__EAttachLocation_MAX = 4
};


// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8_t
{
	EAttachmentRule__KeepRelative  = 0,
	EAttachmentRule__KeepWorld     = 1,
	EAttachmentRule__SnapToTarget  = 2,
	EAttachmentRule__EAttachmentRule_MAX = 3
};


// Enum Engine.EDetachmentRule
enum class EDetachmentRule : uint8_t
{
	EDetachmentRule__KeepRelative  = 0,
	EDetachmentRule__KeepWorld     = 1,
	EDetachmentRule__EDetachmentRule_MAX = 2
};


// Enum Engine.EInputConsumeOptions
enum class EInputConsumeOptions : uint8_t
{
	ICO_ConsumeAll                 = 0,
	ICO_ConsumeBoundKeys           = 1,
	ICO_ConsumeNone                = 2,
	ICO_MAX                        = 3
};


// Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8_t
{
	EActorUpdateOverlapsMethod__UseConfigDefault = 0,
	EActorUpdateOverlapsMethod__AlwaysUpdate = 1,
	EActorUpdateOverlapsMethod__OnlyUpdateMovable = 2,
	EActorUpdateOverlapsMethod__NeverUpdate = 3,
	EActorUpdateOverlapsMethod__EActorUpdateOverlapsMethod_MAX = 4
};


// Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8_t
{
	EAutoReceiveInput__Disabled    = 0,
	EAutoReceiveInput__Player0     = 1,
	EAutoReceiveInput__Player1     = 2,
	EAutoReceiveInput__Player2     = 3,
	EAutoReceiveInput__Player3     = 4,
	EAutoReceiveInput__Player4     = 5,
	EAutoReceiveInput__Player5     = 6,
	EAutoReceiveInput__Player6     = 7,
	EAutoReceiveInput__Player7     = 8,
	EAutoReceiveInput__EAutoReceiveInput_MAX = 9
};


// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8_t
{
	ESpawnActorCollisionHandlingMethod__Undefined = 0,
	ESpawnActorCollisionHandlingMethod__AlwaysSpawn = 1,
	ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButAlwaysSpawn = 2,
	ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButDontSpawnIfColliding = 3,
	ESpawnActorCollisionHandlingMethod__DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod__ESpawnActorCollisionHandlingMethod_MAX = 5
};


// Enum Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8_t
{
	ERotatorQuantization__ByteComponents = 0,
	ERotatorQuantization__ShortComponents = 1,
	ERotatorQuantization__ERotatorQuantization_MAX = 2
};


// Enum Engine.EVectorQuantization
enum class EVectorQuantization : uint8_t
{
	EVectorQuantization__RoundWholeNumber = 0,
	EVectorQuantization__RoundOneDecimal = 1,
	EVectorQuantization__RoundTwoDecimals = 2,
	EVectorQuantization__EVectorQuantization_MAX = 3
};


// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8_t
{
	EAutoPossessAI__Disabled       = 0,
	EAutoPossessAI__PlacedInWorld  = 1,
	EAutoPossessAI__Spawned        = 2,
	EAutoPossessAI__PlacedInWorldOrSpawned = 3,
	EAutoPossessAI__EAutoPossessAI_MAX = 4
};


// Enum Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear                 = 0,
	VTBlend_Cubic                  = 1,
	VTBlend_EaseIn                 = 2,
	VTBlend_EaseOut                = 3,
	VTBlend_EaseInOut              = 4,
	VTBlend_MAX                    = 5
};


// Enum Engine.EViewModeIndex
enum class EViewModeIndex : uint8_t
{
	VMI_BrushWireframe             = 0,
	VMI_Wireframe                  = 1,
	VMI_Unlit                      = 2,
	VMI_Lit                        = 3,
	VMI_Lit_DetailLighting         = 4,
	VMI_LightingOnly               = 5,
	VMI_LightComplexity            = 6,
	VMI_ShaderComplexity           = 7,
	VMI_LightmapDensity            = 8,
	VMI_LitLightmapDensity         = 9,
	VMI_ReflectionOverride         = 10,
	VMI_VisualizeBuffer            = 11,
	VMI_StationaryLightOverlap     = 12,
	VMI_CollisionPawn              = 13,
	VMI_CollisionVisibility        = 14,
	VMI_LODColoration              = 15,
	VMI_QuadOverdraw               = 16,
	VMI_PrimitiveDistanceAccuracy  = 17,
	VMI_MeshUVDensityAccuracy      = 18,
	VMI_ShaderComplexityWithQuadOverdraw = 19,
	VMI_HLODColoration             = 20,
	VMI_GroupLODColoration         = 21,
	VMI_MaterialTextureScaleAccuracy = 22,
	VMI_RequiredTextureResolution  = 23,
	VMI_Max                        = 24,
	VMI_Unknown                    = 25
};


// Enum Engine.EDemoFailure
enum class EDemoFailure : uint8_t
{
	EDemoFailure__None             = 0,
	EDemoFailure__PlayCommand      = 1,
	EDemoFailure__PlayNoWorld      = 2,
	EDemoFailure__PlayPIE          = 3,
	EDemoFailure__PlayCreateDemoDriver = 4,
	EDemoFailure__Connect          = 5,
	EDemoFailure__ConnectNoWorld   = 6,
	EDemoFailure__ConnectNoGameInstance = 7,
	EDemoFailure__ConnectInitBase  = 8,
	EDemoFailure__ConnectStreamingReady = 9,
	EDemoFailure__ConnectDemoNotFound = 10,
	EDemoFailure__ConnectCorrupt   = 11,
	EDemoFailure__ConnectSpecificCorrupt = 12,
	EDemoFailure__ConnectPostNoWorld = 13,
	EDemoFailure__ConnectLoadMap   = 14,
	EDemoFailure__TickDispatchStreamer = 15,
	EDemoFailure__TickDispatchFileAr = 16,
	EDemoFailure__ConditionallyReadFrame = 17,
	EDemoFailure__ConditionallyReadFrameFileAr = 18,
	EDemoFailure__ConditionallyReadFrameStreamer = 19,
	EDemoFailure__ConditionallyReadFrameTimeChecksum = 20,
	EDemoFailure__ConditionallyReadFrameFileAr2 = 21,
	EDemoFailure__ConditionallyReadFrameExternalData = 22,
	EDemoFailure__ConditionallyReadFramePacket = 23,
	EDemoFailure__ConditionallyProcessPacket = 24,
	EDemoFailure__DownloadHeader   = 25,
	EDemoFailure__DownloadHeaderDemoNotFound = 26,
	EDemoFailure__DownloadHeaderCorrupt = 27,
	EDemoFailure__DownloadHeaderSpecificCorrupt = 28,
	EDemoFailure__DownloadHeaderLevelNamesAndTimes = 29,
	EDemoFailure__CheckpointReady  = 30,
	EDemoFailure__CheckpointArchiveEmpty = 31,
	EDemoFailure__CheckpointReadFrame = 32,
	EDemoFailure__CheckpointReadFrameFileAr = 33,
	EDemoFailure__CheckpointReadFrameStreamer = 34,
	EDemoFailure__CheckpointReadFrameTimeChecksum = 35,
	EDemoFailure__CheckpointReadFrameFileAr2 = 36,
	EDemoFailure__CheckpointReadFrameExternalData = 37,
	EDemoFailure__CheckpointReadFramePacket = 38,
	EDemoFailure__CheckpointProcessPacket = 39,
	EDemoFailure__RecCommand       = 40,
	EDemoFailure__RecNoReplays     = 41,
	EDemoFailure__RecNoWorld       = 42,
	EDemoFailure__RecPIE           = 43,
	EDemoFailure__RecAlreadyPlay   = 44,
	EDemoFailure__RecCreateDemoDriver = 45,
	EDemoFailure__Listen           = 46,
	EDemoFailure__ListenInitBase   = 47,
	EDemoFailure__ListenNoWorldSettings = 48,
	EDemoFailure__ListenWriteHeader = 49,
	EDemoFailure__ListenStreamingReady = 50,
	EDemoFailure__TickFlushStreamer = 51,
	EDemoFailure__TickFlushFileAr  = 52,
	EDemoFailure__SeamlessTravelWriteHeader = 53,
	EDemoFailure__EDemoFailure_MAX = 54
};


// Enum Engine.ETravelType
enum class ETravelType : uint8_t
{
	TRAVEL_Absolute                = 0,
	TRAVEL_Partial                 = 1,
	TRAVEL_Relative                = 2,
	TRAVEL_MAX                     = 3
};


// Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8_t
{
	ENetworkLagState__NotLagging   = 0,
	ENetworkLagState__Lagging      = 1,
	ENetworkLagState__ENetworkLagState_MAX = 2
};


// Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8_t
{
	EMouseLockMode__DoNotLock      = 0,
	EMouseLockMode__LockOnCapture  = 1,
	EMouseLockMode__LockAlways     = 2,
	EMouseLockMode__EMouseLockMode_MAX = 3
};


// Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8_t
{
	EMouseCaptureMode__NoCapture   = 0,
	EMouseCaptureMode__CapturePermanently = 1,
	EMouseCaptureMode__CapturePermanently_IncludingInitialMouseDown = 2,
	EMouseCaptureMode__CaptureDuringMouseDown = 3,
	EMouseCaptureMode__CaptureDuringRightMouseDown = 4,
	EMouseCaptureMode__EMouseCaptureMode_MAX = 5
};


// Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8_t
{
	ENodeEnabledState__Enabled     = 0,
	ENodeEnabledState__Disabled    = 1,
	ENodeEnabledState__DevelopmentOnly = 2,
	ENodeEnabledState__ENodeEnabledState_MAX = 3
};


// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8_t
{
	ENodeAdvancedPins__NoPins      = 0,
	ENodeAdvancedPins__Shown       = 1,
	ENodeAdvancedPins__Hidden      = 2,
	ENodeAdvancedPins__ENodeAdvancedPins_MAX = 3
};


// Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8_t
{
	ENodeTitleType__FullTitle      = 0,
	ENodeTitleType__ListView       = 1,
	ENodeTitleType__EditableTitle  = 2,
	ENodeTitleType__MenuTitle      = 3,
	ENodeTitleType__MAX_TitleTypes = 4,
	ENodeTitleType__ENodeTitleType_MAX = 5
};


// Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8_t
{
	EGPD_Input                     = 0,
	EGPD_Output                    = 1,
	EGPD_MAX                       = 2
};


// Enum Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8_t
{
	BPST_Original                  = 0,
	BPST_VariantA                  = 1,
	BPST_MAX                       = 2
};


// Enum Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8_t
{
	RTS_World                      = 0,
	RTS_Actor                      = 1,
	RTS_Component                  = 2,
	RTS_ParentBoneSpace            = 3,
	RTS_MAX                        = 4
};


// Enum Engine.EDetailMode
enum class EDetailMode : uint8_t
{
	DM_Low                         = 0,
	DM_Medium                      = 1,
	DM_High                        = 2,
	DM_MAX                         = 3
};


// Enum Engine.ESimplygonMaterialChannel
enum class ESimplygonMaterialChannel : uint8_t
{
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_AMBIENT = 0,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_DIFFUSE = 1,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_SPECULAR = 2,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_OPACITY = 3,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_EMISSIVE = 4,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_NORMALS = 5,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_DISPLACEMENT = 6,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_BASECOLOR = 7,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_ROUGHNESS = 8,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_METALLIC = 9,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_AO = 10,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_SUBSURFACE = 11,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_OPACITYMASK = 12,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_MAX = 13
};


// Enum Engine.ESimplygonTextureResolution
enum class ESimplygonTextureResolution : uint8_t
{
	ESimplygonTextureResolution__TextureResolution = 0,
	ESimplygonTextureResolution__TextureResolution01 = 1,
	ESimplygonTextureResolution__TextureResolution02 = 2,
	ESimplygonTextureResolution__TextureResolution03 = 3,
	ESimplygonTextureResolution__TextureResolution04 = 4,
	ESimplygonTextureResolution__TextureResolution05 = 5,
	ESimplygonTextureResolution__TextureResolution06 = 6,
	ESimplygonTextureResolution__TextureResolution07 = 7,
	ESimplygonTextureResolution__TextureResolution_MAX = 8
};


// Enum Engine.ESimplygonColorChannels
enum class ESimplygonColorChannels : uint8_t
{
	ESimplygonColorChannels__RGBA  = 0,
	ESimplygonColorChannels__RGB   = 1,
	ESimplygonColorChannels__L     = 2,
	ESimplygonColorChannels__ESimplygonColorChannels_MAX = 3
};


// Enum Engine.ESimplygonTextureSamplingQuality
enum class ESimplygonTextureSamplingQuality : uint8_t
{
	ESimplygonTextureSamplingQuality__Poor = 0,
	ESimplygonTextureSamplingQuality__Low = 1,
	ESimplygonTextureSamplingQuality__Medium = 2,
	ESimplygonTextureSamplingQuality__High = 3,
	ESimplygonTextureSamplingQuality__ESimplygonTextureSamplingQuality_MAX = 4
};


// Enum Engine.ESimplygonCasterType
enum class ESimplygonCasterType : uint8_t
{
	ESimplygonCasterType__None     = 0,
	ESimplygonCasterType__Color    = 1,
	ESimplygonCasterType__Normals  = 2,
	ESimplygonCasterType__Opacity  = 3,
	ESimplygonCasterType__ESimplygonCasterType_MAX = 4
};


// Enum Engine.ESimplygonTextureStrech
enum class ESimplygonTextureStrech : uint8_t
{
	ESimplygonTextureStrech__None  = 0,
	ESimplygonTextureStrech__VerySmall = 1,
	ESimplygonTextureStrech__Small = 2,
	ESimplygonTextureStrech__Medium = 3,
	ESimplygonTextureStrech__Large = 4,
	ESimplygonTextureStrech__VeryLarge = 5,
	ESimplygonTextureStrech__ESimplygonTextureStrech_MAX = 6
};


// Enum Engine.EMaterialLODType
enum class EMaterialLODType : uint8_t
{
	EMaterialLODType__Off          = 0,
	EMaterialLODType__BakeTexture  = 1,
	EMaterialLODType__BakeVertexColor = 2,
	EMaterialLODType__Replace      = 3,
	EMaterialLODType__EMaterialLODType_MAX = 4
};


// Enum Engine.ESimplygonLODType
enum class ESimplygonLODType : uint8_t
{
	ESimplygonLODType__Reduction   = 0,
	ESimplygonLODType__Remeshing   = 1,
	ESimplygonLODType__ESimplygonLODType_MAX = 2
};


// Enum Engine.EOptimizationMetric
enum class EOptimizationMetric : uint8_t
{
	EOptimizationMetric__TrianglePercentage = 0,
	EOptimizationMetric__OnScreenSize = 1,
	EOptimizationMetric__MaxDeviation = 2,
	EOptimizationMetric__EOptimizationMetric_MAX = 3
};


// Enum Engine.EMaterialProxySmaplingQuality
enum class EMaterialProxySmaplingQuality : uint8_t
{
	EMaterialProxySmaplingQuality__Poor = 0,
	EMaterialProxySmaplingQuality__Low = 1,
	EMaterialProxySmaplingQuality__Medium = 2,
	EMaterialProxySmaplingQuality__High = 3,
	EMaterialProxySmaplingQuality__EMaterialProxySmaplingQuality_MAX = 4
};


// Enum Engine.EUVStrech
enum class EUVStrech : uint8_t
{
	EUVStrech__Small               = 0,
	EUVStrech__Medium              = 1,
	EUVStrech__Large               = 2,
	EUVStrech__VeryLarge           = 3,
	EUVStrech__EUVStrech_MAX       = 4
};


// Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8_t
{
	MaterialMergeType_Default      = 0,
	MaterialMergeType_Simplygon    = 1,
	MaterialMergeType_MAX          = 2
};


// Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8_t
{
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX          = 4
};


// Enum Engine.EMeshMergeType
enum class EMeshMergeType : uint8_t
{
	EMeshMergeType__MeshMergeType_Default = 0,
	EMeshMergeType__MeshMergeType_MergeActor = 1,
	EMeshMergeType__MeshMergeType_MAX = 2
};


// Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8_t
{
	EMeshLODSelectionType__AllLODs = 0,
	EMeshLODSelectionType__SpecificLOD = 1,
	EMeshLODSelectionType__CalculateLOD = 2,
	EMeshLODSelectionType__LowestDetailLOD = 3,
	EMeshLODSelectionType__EMeshLODSelectionType_MAX = 4
};


// Enum Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8_t
{
	EProxyNormalComputationMethod__AngleWeighted = 0,
	EProxyNormalComputationMethod__AreaWeighted = 1,
	EProxyNormalComputationMethod__EqualWeighted = 2,
	EProxyNormalComputationMethod__EProxyNormalComputationMethod_MAX = 3
};


// Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8_t
{
	ELandscapeCullingPrecision__High = 0,
	ELandscapeCullingPrecision__Medium = 1,
	ELandscapeCullingPrecision__Low = 2,
	ELandscapeCullingPrecision__ELandscapeCullingPrecision_MAX = 3
};


// Enum Engine.EPhysXAggregationMode
enum class EPhysXAggregationMode : uint8_t
{
	EPhysXAggregationMode__NoCollision = 0,
	EPhysXAggregationMode__BlockAllWithComplexAsSimple = 1,
	EPhysXAggregationMode__EPhysXAggregationMode_MAX = 2
};


// Enum Engine.EChartAggregationMode
enum class EChartAggregationMode : uint8_t
{
	EChartAggregationMode__TextureSize = 0,
	EChartAggregationMode__SurfaceArea = 1,
	EChartAggregationMode__PixelDensity = 2,
	EChartAggregationMode__UVSize  = 3,
	EChartAggregationMode__EChartAggregationMode_MAX = 4
};


// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8_t
{
	EStaticMeshReductionTerimationCriterion__Triangles = 0,
	EStaticMeshReductionTerimationCriterion__Vertices = 1,
	EStaticMeshReductionTerimationCriterion__Any = 2,
	EStaticMeshReductionTerimationCriterion__EStaticMeshReductionTerimationCriterion_MAX = 3
};


// Enum Engine.EImposterCaptureType
enum class EImposterCaptureType : uint8_t
{
	EImposterCaptureType__No       = 0,
	EImposterCaptureType__Quarter  = 1,
	EImposterCaptureType__Half     = 2,
	EImposterCaptureType__Full     = 3,
	EImposterCaptureType__EImposterCaptureType_MAX = 4
};


// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8_t
{
	EMeshFeatureImportance__Off    = 0,
	EMeshFeatureImportance__Lowest = 1,
	EMeshFeatureImportance__Low    = 2,
	EMeshFeatureImportance__Normal = 3,
	EMeshFeatureImportance__High   = 4,
	EMeshFeatureImportance__Highest = 5,
	EMeshFeatureImportance__EMeshFeatureImportance_MAX = 6
};


// Enum Engine.EBrushType
enum class EBrushType : uint8_t
{
	Brush_Default                  = 0,
	Brush_Add                      = 1,
	Brush_Subtract                 = 2,
	Brush_MAX                      = 3
};


// Enum Engine.ECsgOper
enum class ECsgOper : uint8_t
{
	CSG_Active                     = 0,
	CSG_Add                        = 1,
	CSG_Subtract                   = 2,
	CSG_Intersect                  = 3,
	CSG_Deintersect                = 4,
	CSG_None                       = 5,
	CSG_MAX                        = 6
};


// Enum Engine.ReverbPreset
enum class EReverbPreset : uint8_t
{
	REVERB_Default                 = 0,
	REVERB_Bathroom                = 1,
	REVERB_StoneRoom               = 2,
	REVERB_Auditorium              = 3,
	REVERB_ConcertHall             = 4,
	REVERB_Cave                    = 5,
	REVERB_Hallway                 = 6,
	REVERB_StoneCorridor           = 7,
	REVERB_Alley                   = 8,
	REVERB_Forest                  = 9,
	REVERB_City                    = 10,
	REVERB_Mountains               = 11,
	REVERB_Quarry                  = 12,
	REVERB_Plain                   = 13,
	REVERB_ParkingLot              = 14,
	REVERB_SewerPipe               = 15,
	REVERB_Underwater              = 16,
	REVERB_SmallRoom               = 17,
	REVERB_MediumRoom              = 18,
	REVERB_LargeRoom               = 19,
	REVERB_MediumHall              = 20,
	REVERB_LargeHall               = 21,
	REVERB_Plate                   = 22,
	REVERB_MAX                     = 23
};


// Enum Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8_t
{
	SVB_Loading                    = 0,
	SVB_LoadingAndVisibility       = 1,
	SVB_VisibilityBlockingOnLoad   = 2,
	SVB_BlockingOnLoad             = 3,
	SVB_LoadingNotVisible          = 4,
	SVB_MAX                        = 5
};


// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8_t
{
	ENavigationQueryResult__Invalid = 0,
	ENavigationQueryResult__Error  = 1,
	ENavigationQueryResult__Fail   = 2,
	ENavigationQueryResult__Success = 3,
	ENavigationQueryResult__ENavigationQueryResult_MAX = 4
};


// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8_t
{
	ENavDataGatheringModeConfig__Invalid = 0,
	ENavDataGatheringModeConfig__Instant = 1,
	ENavDataGatheringModeConfig__Lazy = 2,
	ENavDataGatheringModeConfig__ENavDataGatheringModeConfig_MAX = 3
};


// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8_t
{
	ENavDataGatheringMode__Default = 0,
	ENavDataGatheringMode__Instant = 1,
	ENavDataGatheringMode__Lazy    = 2,
	ENavDataGatheringMode__ENavDataGatheringMode_MAX = 3
};


// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8_t
{
	ENavigationOptionFlag__Default = 0,
	ENavigationOptionFlag__Enable  = 1,
	ENavigationOptionFlag__Disable = 2,
	ENavigationOptionFlag__MAX     = 3,
	ENavigationOptionFlag__ENavigationOptionFlag_MAX = 4
};


// Enum Engine.EBlendableLocation
enum class EBlendableLocation : uint8_t
{
	BL_AfterTonemapping            = 0,
	BL_BeforeTonemapping           = 1,
	BL_BeforeTranslucency          = 2,
	BL_ReplacingTonemapper         = 3,
	BL_MAX                         = 4
};


// Enum Engine.EHBAOBlurRadius
enum class EHBAOBlurRadius : uint8_t
{
	AOBR_BlurRadius0               = 0,
	AOBR_BlurRadius4               = 1,
	AOBR_BlurRadius8               = 2,
	AOBR_MAX                       = 3
};


// Enum Engine.EBloomMethod
enum class EBloomMethod : uint8_t
{
	BM_SOG                         = 0,
	BM_FFT                         = 1,
	BM_MAX                         = 2
};


// Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8_t
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_MAX                        = 2
};


// Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8_t
{
	AAM_None                       = 0,
	AAM_FXAA                       = 1,
	AAM_TemporalAA                 = 2,
	AAM_MSAA                       = 3,
	AAM_MAX                        = 4
};


// Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8_t
{
	DOFM_BokehDOF                  = 0,
	DOFM_Gaussian                  = 1,
	DOFM_CircleDOF                 = 2,
	DOFM_MAX                       = 3
};


// Enum Engine.EMaterialProperty
enum class EMaterialProperty : uint8_t
{
	MP_EmissiveColor               = 0,
	MP_Opacity                     = 1,
	MP_OpacityMask                 = 2,
	MP_DiffuseColor                = 3,
	MP_SpecularColor               = 4,
	MP_BaseColor                   = 5,
	MP_Metallic                    = 6,
	MP_Specular                    = 7,
	MP_Roughness                   = 8,
	MP_Normal                      = 9,
	MP_WorldPositionOffset         = 10,
	MP_WorldDisplacement           = 11,
	MP_TessellationMultiplier      = 12,
	MP_SubsurfaceColor             = 13,
	MP_SubsurfaceProfile           = 14,
	MP_CustomData0                 = 15,
	MP_CustomData1                 = 16,
	MP_AmbientOcclusion            = 17,
	MP_Refraction                  = 18,
	MP_CustomizedUVs0              = 19,
	MP_CustomizedUVs1              = 20,
	MP_CustomizedUVs2              = 21,
	MP_CustomizedUVs3              = 22,
	MP_CustomizedUVs4              = 23,
	MP_CustomizedUVs5              = 24,
	MP_CustomizedUVs6              = 25,
	MP_CustomizedUVs7              = 26,
	MP_PixelDepthOffset            = 27,
	MP_MaterialAttributes          = 28,
	MP_CustomOutput                = 29,
	MP_MAX                         = 30
};


// Enum Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8_t
{
	ECameraAnimPlaySpace__CameraLocal = 0,
	ECameraAnimPlaySpace__World    = 1,
	ECameraAnimPlaySpace__UserDefined = 2,
	ECameraAnimPlaySpace__ECameraAnimPlaySpace_MAX = 3
};


// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8_t
{
	ECameraProjectionMode__Perspective = 0,
	ECameraProjectionMode__Orthographic = 1,
	ECameraProjectionMode__ECameraProjectionMode_MAX = 2
};


// Enum Engine.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom               = 0,
	EOO_OffsetZero                 = 1,
	EOO_MAX                        = 2
};


// Enum Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8_t
{
	EControllerAnalogStick__CAS_LeftStick = 0,
	EControllerAnalogStick__CAS_RightStick = 1,
	EControllerAnalogStick__CAS_MAX = 2
};


// Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8_t
{
	RCCE_Cycle                     = 0,
	RCCE_CycleWithOffset           = 1,
	RCCE_Oscillate                 = 2,
	RCCE_Linear                    = 3,
	RCCE_Constant                  = 4,
	RCCE_None                      = 5,
	RCCE_MAX                       = 6
};


// Enum Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8_t
{
	RCTWM_WeightedNone             = 0,
	RCTWM_WeightedArrive           = 1,
	RCTWM_WeightedLeave            = 2,
	RCTWM_WeightedBoth             = 3,
	RCTWM_MAX                      = 4
};


// Enum Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8_t
{
	RCTM_Auto                      = 0,
	RCTM_User                      = 1,
	RCTM_Break                     = 2,
	RCTM_None                      = 3,
	RCTM_MAX                       = 4
};


// Enum Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8_t
{
	RCIM_Linear                    = 0,
	RCIM_Constant                  = 1,
	RCIM_Cubic                     = 2,
	RCIM_None                      = 3,
	RCIM_MAX                       = 4
};


// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8_t
{
	EDynamicForceFeedbackAction__Start = 0,
	EDynamicForceFeedbackAction__Update = 1,
	EDynamicForceFeedbackAction__Stop = 2,
	EDynamicForceFeedbackAction__EDynamicForceFeedbackAction_MAX = 3
};


// Enum Engine.EStandbyType
enum class EStandbyType : uint8_t
{
	STDBY_Rx                       = 0,
	STDBY_Tx                       = 1,
	STDBY_BadPing                  = 2,
	STDBY_MAX                      = 3
};


// Enum Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive            = 0,
	VIS_ModeratelyAggressive       = 1,
	VIS_MostAggressive             = 2,
	VIS_Max                        = 3
};


// Enum Engine.EDOFMode
enum class EDOFMode : uint8_t
{
	EDOFMode__Default              = 0,
	EDOFMode__SixDOF               = 1,
	EDOFMode__YZPlane              = 2,
	EDOFMode__XZPlane              = 3,
	EDOFMode__XYPlane              = 4,
	EDOFMode__CustomPlane          = 5,
	EDOFMode__None                 = 6,
	EDOFMode__EDOFMode_MAX         = 7
};


// Enum Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8_t
{
	ERendererStencilMask__ERSM_Default = 0,
	ERendererStencilMask__ERSM     = 1,
	ERendererStencilMask__ERSM01   = 2,
	ERendererStencilMask__ERSM02   = 3,
	ERendererStencilMask__ERSM03   = 4,
	ERendererStencilMask__ERSM04   = 5,
	ERendererStencilMask__ERSM05   = 6,
	ERendererStencilMask__ERSM06   = 7,
	ERendererStencilMask__ERSM07   = 8,
	ERendererStencilMask__ERSM08   = 9,
	ERendererStencilMask__ERSM_MAX = 10
};


// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8_t
{
	EHasCustomNavigableGeometry__No = 0,
	EHasCustomNavigableGeometry__Yes = 1,
	EHasCustomNavigableGeometry__EvenIfNotCollidable = 2,
	EHasCustomNavigableGeometry__DontExport = 3,
	EHasCustomNavigableGeometry__EHasCustomNavigableGeometry_MAX = 4
};


// Enum Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8_t
{
	ECB_No                         = 0,
	ECB_Yes                        = 1,
	ECB_Owner                      = 2,
	ECB_MAX                        = 3
};


// Enum Engine.EMaterialClipVolumeImportance
enum class EMaterialClipVolumeImportance : uint8_t
{
	MCVI_Low                       = 0,
	MCVI_Medium                    = 1,
	MCVI_High                      = 2,
	MCVI_Critical                  = 3,
	MCVI_MAX                       = 4
};


// Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8_t
{
	MD_Surface                     = 0,
	MD_DeferredDecal               = 1,
	MD_LightFunction               = 2,
	MD_Volume                      = 3,
	MD_PostProcess                 = 4,
	MD_UI                          = 5,
	MD_MAX                         = 6
};


// Enum Engine.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static = 0,
	ERuntimeGenerationType__DynamicModifiersOnly = 1,
	ERuntimeGenerationType__Dynamic = 2,
	ERuntimeGenerationType__LegacyGeneration = 3,
	ERuntimeGenerationType__ERuntimeGenerationType_MAX = 4
};


// Enum Engine.ERecastPartitioning
enum class ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone  = 0,
	ERecastPartitioning__Watershed = 1,
	ERecastPartitioning__ChunkyMonotone = 2,
	ERecastPartitioning__ERecastPartitioning_MAX = 3
};


// Enum Engine.ENavCostDisplay
enum class ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost     = 0,
	ENavCostDisplay__HeuristicOnly = 1,
	ENavCostDisplay__RealCostOnly  = 2,
	ENavCostDisplay__ENavCostDisplay_MAX = 3
};


// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8_t
{
	ENavLinkDirection__BothWays    = 0,
	ENavLinkDirection__LeftToRight = 1,
	ENavLinkDirection__RightToLeft = 2,
	ENavLinkDirection__ENavLinkDirection_MAX = 3
};


// Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None                    = 0,
	EPSOBM_ParticleBounds          = 1,
	EPSOBM_CustomBounds            = 2,
	EPSOBM_MAX                     = 3
};


// Enum Engine.ParticleSystemLODMethod
enum class EParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX    = 3
};


// Enum Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime                 = 0,
	EPSUM_FixedTime                = 1,
	EPSUM_MAX                      = 2
};


// Enum Engine.EParticleEventType
enum class EParticleEventType : uint8_t
{
	EPET_Any                       = 0,
	EPET_Spawn                     = 1,
	EPET_Death                     = 2,
	EPET_Collision                 = 3,
	EPET_Burst                     = 4,
	EPET_Blueprint                 = 5,
	EPET_MAX                       = 6
};


// Enum Engine.ParticleReplayState
enum class EParticleReplayState : uint8_t
{
	PRS_Disabled                   = 0,
	PRS_Capturing                  = 1,
	PRS_Replaying                  = 2,
	PRS_MAX                        = 3
};


// Enum Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8_t
{
	PSPT_None                      = 0,
	PSPT_Scalar                    = 1,
	PSPT_ScalarRand                = 2,
	PSPT_Vector                    = 3,
	PSPT_VectorRand                = 4,
	PSPT_Color                     = 5,
	PSPT_Actor                     = 6,
	PSPT_Material                  = 7,
	PSPT_MAX                       = 8
};


// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8_t
{
	EAnimLinkMethod__Absolute      = 0,
	EAnimLinkMethod__Relative      = 1,
	EAnimLinkMethod__Proportional  = 2,
	EAnimLinkMethod__EAnimLinkMethod_MAX = 3
};


// Enum Engine.EAxisOption
enum class EAxisOption : uint8_t
{
	EAxisOption__X                 = 0,
	EAxisOption__Y                 = 1,
	EAxisOption__Z                 = 2,
	EAxisOption__X_Neg             = 3,
	EAxisOption__Y_Neg             = 4,
	EAxisOption__Z_Neg             = 5,
	EAxisOption__Custom            = 6,
	EAxisOption__EAxisOption_MAX   = 7
};


// Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8_t
{
	EAnimInterpolationType__Linear = 0,
	EAnimInterpolationType__Step   = 1,
	EAnimInterpolationType__EAnimInterpolationType_MAX = 2
};


// Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8_t
{
	ECurveBlendOption__MaxWeight   = 0,
	ECurveBlendOption__NormalizeByWeight = 1,
	ECurveBlendOption__BlendByWeight = 2,
	ECurveBlendOption__ECurveBlendOption_MAX = 3
};


// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8_t
{
	AAT_None                       = 0,
	AAT_LocalSpaceBase             = 1,
	AAT_RotationOffsetMeshSpace    = 2,
	AAT_MAX                        = 3
};


// Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8_t
{
	ENotifyFilterType__NoFiltering = 0,
	ENotifyFilterType__LOD         = 1,
	ENotifyFilterType__ENotifyFilterType_MAX = 2
};


// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8_t
{
	EMontageNotifyTickType__Queued = 0,
	EMontageNotifyTickType__BranchingPoint = 1,
	EMontageNotifyTickType__EMontageNotifyTickType_MAX = 2
};


// Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8_t
{
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation     = 1,
	BRS_CopyFromTarget             = 2,
	BRS_MAX                        = 3
};


// Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8_t
{
	BCS_WorldSpace                 = 0,
	BCS_ComponentSpace             = 1,
	BCS_ParentBoneSpace            = 2,
	BCS_BoneSpace                  = 3,
	BCS_MAX                        = 4
};


// Enum Engine.EBoneAxis
enum class EBoneAxis : uint8_t
{
	BA_X                           = 0,
	BA_Y                           = 1,
	BA_Z                           = 2,
	BA_MAX                         = 3
};


// Enum Engine.ESkeletalMeshLODType
enum class ESkeletalMeshLODType : uint8_t
{
	ESkeletalMeshLODType__Reduction = 0,
	ESkeletalMeshLODType__Proxy    = 1,
	ESkeletalMeshLODType__ESkeletalMeshLODType_MAX = 2
};


// Enum Engine.SkeletalMeshOptimizationType
enum class ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles            = 0,
	SMOT_MaxDeviation              = 1,
	SMOT_ScreenSize                = 2,
	SMOT_MAX                       = 3
};


// Enum Engine.SkeletalMeshOptimizationImportance
enum class ESkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off                       = 0,
	SMOI_Lowest                    = 1,
	SMOI_Low                       = 2,
	SMOI_Normal                    = 3,
	SMOI_High                      = 4,
	SMOI_Highest                   = 5,
	SMOI_MAX                       = 6
};


// Enum Engine.SkeletalMeshTerminationCriterion
enum class ESkeletalMeshTerminationCriterion : uint8_t
{
	SMTC_NumOfTriangles            = 0,
	SMTC_NumOfVerts                = 1,
	SMTC_TriangleOrVert            = 2,
	SMTC_AbsNumOfTriangles         = 3,
	SMTC_AbsNumOfVerts             = 4,
	SMTC_AbsTriangleOrVert         = 5,
	SMTC_MAX                       = 6
};


// Enum Engine.AnimationCompressionFormat
enum class EAnimationCompressionFormat : uint8_t
{
	ACF_None                       = 0,
	ACF_Float96NoW                 = 1,
	ACF_Fixed48NoW                 = 2,
	ACF_IntervalFixed32NoW         = 3,
	ACF_Fixed32NoW                 = 4,
	ACF_Float32NoW                 = 5,
	ACF_Identity                   = 6,
	ACF_MAX                        = 7
};


// Enum Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8_t
{
	ABPT_None                      = 0,
	ABPT_RefPose                   = 1,
	ABPT_AnimScaled                = 2,
	ABPT_AnimFrame                 = 3,
	ABPT_MAX                       = 4
};


// Enum Engine.ERootMotionMode
enum class ERootMotionMode : uint8_t
{
	ERootMotionMode__NoRootMotionExtraction = 0,
	ERootMotionMode__IgnoreRootMotion = 1,
	ERootMotionMode__RootMotionFromEverything = 2,
	ERootMotionMode__RootMotionFromMontagesOnly = 3,
	ERootMotionMode__ERootMotionMode_MAX = 4
};


// Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8_t
{
	ERootMotionRootLock__RefPose   = 0,
	ERootMotionRootLock__AnimFirstFrame = 1,
	ERootMotionRootLock__Zero      = 2,
	ERootMotionRootLock__ERootMotionRootLock_MAX = 3
};


// Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8_t
{
	EAnimGroupRole__CanBeLeader    = 0,
	EAnimGroupRole__AlwaysFollower = 1,
	EAnimGroupRole__AlwaysLeader   = 2,
	EAnimGroupRole__TransitionLeader = 3,
	EAnimGroupRole__EAnimGroupRole_MAX = 4
};


// Enum Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : uint8_t
{
	ERootMotionFinishVelocityMode__MaintainLastRootMotionVelocity = 0,
	ERootMotionFinishVelocityMode__SetVelocity = 1,
	ERootMotionFinishVelocityMode__ClampVelocity = 2,
	ERootMotionFinishVelocityMode__ERootMotionFinishVelocityMode_MAX = 3
};


// Enum Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8_t
{
	ERootMotionSourceSettingsFlags__UseSensitiveLiftoffCheck = 0,
	ERootMotionSourceSettingsFlags__DisablePartialEndTick = 1,
	ERootMotionSourceSettingsFlags__ERootMotionSourceSettingsFlags_MAX = 2
};


// Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8_t
{
	ERootMotionSourceStatusFlags__Prepared = 0,
	ERootMotionSourceStatusFlags__Finished = 1,
	ERootMotionSourceStatusFlags__MarkedForRemoval = 2,
	ERootMotionSourceStatusFlags__ERootMotionSourceStatusFlags_MAX = 3
};


// Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8_t
{
	ERootMotionAccumulateMode__Override = 0,
	ERootMotionAccumulateMode__Additive = 1,
	ERootMotionAccumulateMode__ERootMotionAccumulateMode_MAX = 2
};


// Enum Engine.EStaticMeshLODType
enum class EStaticMeshLODType : uint8_t
{
	EStaticMeshLODType__Reduction  = 0,
	EStaticMeshLODType__Proxy      = 1,
	EStaticMeshLODType__EStaticMeshLODType_MAX = 2
};


// Enum Engine.EOptimizationType
enum class EOptimizationType : uint8_t
{
	OT_NumOfTriangles              = 0,
	OT_MaxDeviation                = 1,
	OT_MAX                         = 2
};


// Enum Engine.EImportanceLevel
enum class EImportanceLevel : uint8_t
{
	IL_Off                         = 0,
	IL_Lowest                      = 1,
	IL_Low                         = 2,
	IL_Normal                      = 3,
	IL_High                        = 4,
	IL_Highest                     = 5,
	TEMP_BROKEN2                   = 6,
	EImportanceLevel_MAX           = 7
};


// Enum Engine.ENormalMode
enum class ENormalMode : uint8_t
{
	NM_PreserveSmoothingGroups     = 0,
	NM_RecalculateNormals          = 1,
	NM_RecalculateNormalsSmooth    = 2,
	NM_RecalculateNormalsHard      = 3,
	TEMP_BROKEN                    = 4,
	ENormalMode_MAX                = 5
};


// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8_t
{
	EBoneTranslationRetargetingMode__Animation = 0,
	EBoneTranslationRetargetingMode__Skeleton = 1,
	EBoneTranslationRetargetingMode__AnimationScaled = 2,
	EBoneTranslationRetargetingMode__AnimationRelative = 3,
	EBoneTranslationRetargetingMode__EBoneTranslationRetargetingMode_MAX = 4
};


// Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8_t
{
	EAlphaBlendOption__Linear      = 0,
	EAlphaBlendOption__Cubic       = 1,
	EAlphaBlendOption__HermiteCubic = 2,
	EAlphaBlendOption__Sinusoidal  = 3,
	EAlphaBlendOption__QuadraticInOut = 4,
	EAlphaBlendOption__CubicInOut  = 5,
	EAlphaBlendOption__QuarticInOut = 6,
	EAlphaBlendOption__QuinticInOut = 7,
	EAlphaBlendOption__CircularIn  = 8,
	EAlphaBlendOption__CircularOut = 9,
	EAlphaBlendOption__CircularInOut = 10,
	EAlphaBlendOption__ExpIn       = 11,
	EAlphaBlendOption__ExpOut      = 12,
	EAlphaBlendOption__ExpInOut    = 13,
	EAlphaBlendOption__Custom      = 14,
	EAlphaBlendOption__EAlphaBlendOption_MAX = 15
};


// Enum Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : uint8_t
{
	ERawCurveTrackTypes__RCT_Float = 0,
	ERawCurveTrackTypes__RCT_Vector = 1,
	ERawCurveTrackTypes__RCT_Transform = 2,
	ERawCurveTrackTypes__RCT_MAX   = 3
};


// Enum Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8_t
{
	AACF_DriveMorphTarget_DEPRECATED = 0,
	AACF_DriveAttribute_DEPRECATED = 1,
	AACF_Editable                  = 2,
	AACF_DriveMaterial_DEPRECATED  = 3,
	AACF_Metadata                  = 4,
	AACF_DriveTrack                = 5,
	AACF_Disabled                  = 6,
	AACF_MAX                       = 7
};


// Enum Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8_t
{
	ETAA_Default                   = 0,
	ETAA_Finished                  = 1,
	ETAA_Looped                    = 2,
	ETAA_MAX                       = 3
};


// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8_t
{
	EAnimNotifyEventType__Begin    = 0,
	EAnimNotifyEventType__End      = 1,
	EAnimNotifyEventType__EAnimNotifyEventType_MAX = 2
};


// Enum Engine.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8_t
{
	LCM_Free                       = 0,
	LCM_Limited                    = 1,
	LCM_Locked                     = 2,
	LCM_MAX                        = 3
};


// Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8_t
{
	EAngularDriveMode__SLERP       = 0,
	EAngularDriveMode__TwistAndSwing = 1,
	EAngularDriveMode__EAngularDriveMode_MAX = 2
};


// Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8_t
{
	EAttenuationShape__Sphere      = 0,
	EAttenuationShape__Capsule     = 1,
	EAttenuationShape__Box         = 2,
	EAttenuationShape__Cone        = 3,
	EAttenuationShape__EAttenuationShape_MAX = 4
};


// Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8_t
{
	EAttenuationDistanceModel__Linear = 0,
	EAttenuationDistanceModel__Logarithmic = 1,
	EAttenuationDistanceModel__Inverse = 2,
	EAttenuationDistanceModel__LogReverse = 3,
	EAttenuationDistanceModel__NaturalSound = 4,
	EAttenuationDistanceModel__Custom = 5,
	EAttenuationDistanceModel__EAttenuationDistanceModel_MAX = 6
};


// Enum Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8_t
{
	SPATIALIZATION_Default         = 0,
	SPATIALIZATION_HRTF            = 1,
	SPATIALIZATION_MAX             = 2
};


// Enum Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal           = 0,
	SOUNDDISTANCE_InfiniteXYPlane  = 1,
	SOUNDDISTANCE_InfiniteXZPlane  = 2,
	SOUNDDISTANCE_InfiniteYZPlane  = 3,
	SOUNDDISTANCE_MAX              = 4
};


// Enum Engine.EPreviewIndexType
enum class EPreviewIndexType : uint8_t
{
	EPreviewIndexType__RandomSeed  = 0,
	EPreviewIndexType__VariantIndex = 1,
	EPreviewIndexType__PermutationIndex = 2,
	EPreviewIndexType__EPreviewIndexType_MAX = 3
};


// Enum Engine.ESpawnPointRollType
enum class ESpawnPointRollType : uint8_t
{
	ESpawnPointRollType__Probability = 0,
	ESpawnPointRollType__LocalRatio = 1,
	ESpawnPointRollType__GlobalRatio = 2,
	ESpawnPointRollType__ESpawnPointRollType_MAX = 3
};


// Enum Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8_t
{
	SLS_CapturedScene              = 0,
	SLS_SpecifiedCubemap           = 1,
	SLS_MAX                        = 2
};


// Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8_t
{
	EBoneSpaces__WorldSpace        = 0,
	EBoneSpaces__ComponentSpace    = 1,
	EBoneSpaces__EBoneSpaces_MAX   = 2
};


// Enum Engine.EMeshComponentUpdateFlag
enum class EMeshComponentUpdateFlag : uint8_t
{
	EMeshComponentUpdateFlag__AlwaysTickPoseAndRefreshBones = 0,
	EMeshComponentUpdateFlag__AlwaysTickPose = 1,
	EMeshComponentUpdateFlag__OnlyTickPoseWhenRendered = 2,
	EMeshComponentUpdateFlag__EMeshComponentUpdateFlag_MAX = 3
};


// Enum Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8_t
{
	PBO_None                       = 0,
	PBO_Term                       = 1,
	PBO_MAX                        = 2
};


// Enum Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent             = 0,
	BVS_Visible                    = 1,
	BVS_ExplicitlyHidden           = 2,
	BVS_MAX                        = 3
};


// Enum Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8_t
{
	EPhysicsTransformUpdateMode__SimulationUpatesComponentTransform = 0,
	EPhysicsTransformUpdateMode__ComponentTransformIsKinematic = 1,
	EPhysicsTransformUpdateMode__EPhysicsTransformUpdateMode_MAX = 2
};


// Enum Engine.EAnimationMode
enum class EAnimationMode : uint8_t
{
	EAnimationMode__AnimationBlueprint = 0,
	EAnimationMode__AnimationSingleNode = 1,
	EAnimationMode__AnimationCustomMode = 2,
	EAnimationMode__EAnimationMode_MAX = 3
};


// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8_t
{
	EKinematicBonesUpdateToPhysics__SkipSimulatingBones = 0,
	EKinematicBonesUpdateToPhysics__SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics__EKinematicBonesUpdateToPhysics_MAX = 2
};


// Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8_t
{
	ESplineMeshAxis__X             = 0,
	ESplineMeshAxis__Y             = 1,
	ESplineMeshAxis__Z             = 2,
	ESplineMeshAxis__ESplineMeshAxis_MAX = 3
};


// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8_t
{
	ETextureSamplerFilter__Point   = 0,
	ETextureSamplerFilter__Bilinear = 1,
	ETextureSamplerFilter__Trilinear = 2,
	ETextureSamplerFilter__AnisotropicPoint = 3,
	ETextureSamplerFilter__AnisotropicLinear = 4,
	ETextureSamplerFilter__ETextureSamplerFilter_MAX = 5
};


// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8_t
{
	ETexturePowerOfTwoSetting__None = 0,
	ETexturePowerOfTwoSetting__PadToPowerOfTwo = 1,
	ETexturePowerOfTwoSetting__PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting__ETexturePowerOfTwoSetting_MAX = 3
};


// Enum Engine.TextureMipGenSettings
enum class ETextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup          = 0,
	TMGS_SimpleAverage             = 1,
	TMGS_Sharpen0                  = 2,
	TMGS_Sharpen1                  = 3,
	TMGS_Sharpen2                  = 4,
	TMGS_Sharpen3                  = 5,
	TMGS_Sharpen4                  = 6,
	TMGS_Sharpen5                  = 7,
	TMGS_Sharpen6                  = 8,
	TMGS_Sharpen7                  = 9,
	TMGS_Sharpen8                  = 10,
	TMGS_Sharpen9                  = 11,
	TMGS_Sharpen10                 = 12,
	TMGS_NoMipmaps                 = 13,
	TMGS_LeaveExistingMips         = 14,
	TMGS_Blur1                     = 15,
	TMGS_Blur2                     = 16,
	TMGS_Blur3                     = 17,
	TMGS_Blur4                     = 18,
	TMGS_Blur5                     = 19,
	TMGS_MAX                       = 20
};


// Enum Engine.TextureGroup
enum class ETextureGroup : uint8_t
{
	TEXTUREGROUP_World             = 0,
	TEXTUREGROUP_WorldNormalMap    = 1,
	TEXTUREGROUP_WorldSpecular     = 2,
	TEXTUREGROUP_Character         = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon            = 6,
	TEXTUREGROUP_WeaponNormalMap   = 7,
	TEXTUREGROUP_WeaponSpecular    = 8,
	TEXTUREGROUP_Vehicle           = 9,
	TEXTUREGROUP_VehicleNormalMap  = 10,
	TEXTUREGROUP_VehicleSpecular   = 11,
	TEXTUREGROUP_Landscape         = 12,
	TEXTUREGROUP_LandscapeNormalMap = 13,
	TEXTUREGROUP_LandscapeSpecular = 14,
	TEXTUREGROUP_Cinematic         = 15,
	TEXTUREGROUP_Effects           = 16,
	TEXTUREGROUP_EffectsNotFiltered = 17,
	TEXTUREGROUP_Skybox            = 18,
	TEXTUREGROUP_UI                = 19,
	TEXTUREGROUP_Lightmap          = 20,
	TEXTUREGROUP_RenderTarget      = 21,
	TEXTUREGROUP_MobileFlattened   = 22,
	TEXTUREGROUP_ProcBuilding_Face = 23,
	TEXTUREGROUP_ProcBuilding_LightMap = 24,
	TEXTUREGROUP_Shadowmap         = 25,
	TEXTUREGROUP_ColorLookupTable  = 26,
	TEXTUREGROUP_Terrain_Heightmap = 27,
	TEXTUREGROUP_Terrain_Weightmap = 28,
	TEXTUREGROUP_Bokeh             = 29,
	TEXTUREGROUP_IESLightProfile   = 30,
	TEXTUREGROUP_Pixels2D          = 31,
	TEXTUREGROUP_HierarchicalLOD   = 32,
	TEXTUREGROUP_MAX               = 33
};


// Enum Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8_t
{
	TSF_Invalid                    = 0,
	TSF_G8                         = 1,
	TSF_BGRA8                      = 2,
	TSF_BGRE8                      = 3,
	TSF_RGBA16                     = 4,
	TSF_RGBA16F                    = 5,
	TSF_RGBA8                      = 6,
	TSF_RGBE8                      = 7,
	TSF_MAX                        = 8
};


// Enum Engine.ETextureSourceArtType
enum class ETextureSourceArtType : uint8_t
{
	TSAT_Uncompressed              = 0,
	TSAT_PNGCompressed             = 1,
	TSAT_DDSFile                   = 2,
	TSAT_MAX                       = 3
};


// Enum Engine.ETextureMipCount
enum class ETextureMipCount : uint8_t
{
	TMC_ResidentMips               = 0,
	TMC_AllMips                    = 1,
	TMC_AllMipsBiased              = 2,
	TMC_MAX                        = 3
};


// Enum Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8_t
{
	CTM_Disabled                   = 0,
	CTM_NormalRoughnessToRed       = 1,
	CTM_NormalRoughnessToGreen     = 2,
	CTM_NormalRoughnessToBlue      = 3,
	CTM_NormalRoughnessToAlpha     = 4,
	CTM_MAX                        = 5
};


// Enum Engine.TextureAddress
enum class ETextureAddress : uint8_t
{
	TA_Wrap                        = 0,
	TA_Clamp                       = 1,
	TA_Mirror                      = 2,
	TA_MAX                         = 3
};


// Enum Engine.TextureFilter
enum class ETextureFilter : uint8_t
{
	TF_Nearest                     = 0,
	TF_Bilinear                    = 1,
	TF_Trilinear                   = 2,
	TF_Default                     = 3,
	TF_MAX                         = 4
};


// Enum Engine.TextureCompressionSettings
enum class ETextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Masks                       = 2,
	TC_Grayscale                   = 3,
	TC_Displacementmap             = 4,
	TC_VectorDisplacementmap       = 5,
	TC_HDR                         = 6,
	TC_EditorIcon                  = 7,
	TC_Alpha                       = 8,
	TC_DistanceFieldFont           = 9,
	TC_HDR_Compressed              = 10,
	TC_BC7                         = 11,
	TC_MAX                         = 12
};


// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8_t
{
	ESplineCoordinateSpace__Local  = 0,
	ESplineCoordinateSpace__World  = 1,
	ESplineCoordinateSpace__ESplineCoordinateSpace_MAX = 2
};


// Enum Engine.ESplinePointType
enum class ESplinePointType : uint8_t
{
	ESplinePointType__Linear       = 0,
	ESplinePointType__Curve        = 1,
	ESplinePointType__Constant     = 2,
	ESplinePointType__CurveClamped = 3,
	ESplinePointType__CurveCustomTangent = 4,
	ESplinePointType__ESplinePointType_MAX = 5
};


// Enum Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8_t
{
	EVRTA_TextTop                  = 0,
	EVRTA_TextCenter               = 1,
	EVRTA_TextBottom               = 2,
	EVRTA_QuadTop                  = 3,
	EVRTA_MAX                      = 4
};


// Enum Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8_t
{
	EHTA_Left                      = 0,
	EHTA_Center                    = 1,
	EHTA_Right                     = 2,
	EHTA_MAX                       = 3
};


// Enum Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8_t
{
	EReflectionSourceType__CapturedScene = 0,
	EReflectionSourceType__SpecifiedCubemap = 1,
	EReflectionSourceType__EReflectionSourceType_MAX = 2
};


// Enum Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8_t
{
	SLSH_QuadLayer                 = 0,
	SLSH_CylinderLayer             = 1,
	SLSH_CubemapLayer              = 2,
	SLSH_MAX                       = 3
};


// Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8_t
{
	SLT_WorldLocked                = 0,
	SLT_TrackerLocked              = 1,
	SLT_FaceLocked                 = 2,
	SLT_MAX                        = 3
};


// Enum Engine.EWindSourceType
enum class EWindSourceType : uint8_t
{
	EWindSourceType__Directional   = 0,
	EWindSourceType__Point         = 1,
	EWindSourceType__EWindSourceType_MAX = 2
};


// Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8_t
{
	ETimelineDirection__Forward    = 0,
	ETimelineDirection__Backward   = 1,
	ETimelineDirection__ETimelineDirection_MAX = 2
};


// Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8_t
{
	TL_TimelineLength              = 0,
	TL_LastKeyFrame                = 1,
	TL_MAX                         = 2
};


// Enum Engine.AnimationKeyFormat
enum class EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp            = 0,
	AKF_VariableKeyLerp            = 1,
	AKF_PerTrackCompression        = 2,
	AKF_MAX                        = 3
};


// Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8_t
{
	ENotifyTriggerMode__AllAnimations = 0,
	ENotifyTriggerMode__HighestWeightedAnimation = 1,
	ENotifyTriggerMode__None       = 2,
	ENotifyTriggerMode__ENotifyTriggerMode_MAX = 3
};


// Enum Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8_t
{
	BSA_None                       = 0,
	BSA_X                          = 1,
	BSA_Y                          = 2,
	BSA_Max                        = 3
};


// Enum Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8_t
{
	ETransitionLogicType__TLT_StandardBlend = 0,
	ETransitionLogicType__TLT_Custom = 1,
	ETransitionLogicType__TLT_MAX  = 2
};


// Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8_t
{
	ETransitionBlendMode__TBM_Linear = 0,
	ETransitionBlendMode__TBM_Cubic = 1,
	ETransitionBlendMode__TBM_MAX  = 2
};


// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8_t
{
	EMontagePlayReturnType__MontageLength = 0,
	EMontagePlayReturnType__Duration = 1,
	EMontagePlayReturnType__EMontagePlayReturnType_MAX = 2
};


// Enum Engine.EAnimCurveType
enum class EAnimCurveType : uint8_t
{
	EAnimCurveType__AttributeCurve = 0,
	EAnimCurveType__MaterialCurve  = 1,
	EAnimCurveType__MorphTargetCurve = 2,
	EAnimCurveType__MaxAnimCurveType = 3,
	EAnimCurveType__EAnimCurveType_MAX = 4
};


// Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8_t
{
	EPrimaryAssetCookRule__Unknown = 0,
	EPrimaryAssetCookRule__NeverCook = 1,
	EPrimaryAssetCookRule__DevelopmentCook = 2,
	EPrimaryAssetCookRule__AlwaysCook = 3,
	EPrimaryAssetCookRule__EPrimaryAssetCookRule_MAX = 4
};


// Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8_t
{
	EBlueprintNativizationFlag__Disabled = 0,
	EBlueprintNativizationFlag__Dependency = 1,
	EBlueprintNativizationFlag__ExplicitlyEnabled = 2,
	EBlueprintNativizationFlag__EBlueprintNativizationFlag_MAX = 3
};


// Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8_t
{
	EBlueprintCompileMode__Default = 0,
	EBlueprintCompileMode__Development = 1,
	EBlueprintCompileMode__FinalRelease = 2,
	EBlueprintCompileMode__EBlueprintCompileMode_MAX = 3
};


// Enum Engine.EBlueprintType
enum class EBlueprintType : uint8_t
{
	BPTYPE_Normal                  = 0,
	BPTYPE_Const                   = 1,
	BPTYPE_MacroLibrary            = 2,
	BPTYPE_Interface               = 3,
	BPTYPE_LevelScript             = 4,
	BPTYPE_FunctionLibrary         = 5,
	BPTYPE_MAX                     = 6
};


// Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8_t
{
	BS_Unknown                     = 0,
	BS_Dirty                       = 1,
	BS_Error                       = 2,
	BS_UpToDate                    = 3,
	BS_BeingCreated                = 4,
	BS_UpToDateWithWarnings        = 5,
	BS_MAX                         = 6
};


// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8_t
{
	EEvaluateCurveTableResult__RowFound = 0,
	EEvaluateCurveTableResult__RowNotFound = 1,
	EEvaluateCurveTableResult__EEvaluateCurveTableResult_MAX = 2
};


// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8_t
{
	EGrammaticalNumber__Singular   = 0,
	EGrammaticalNumber__Plural     = 1,
	EGrammaticalNumber__EGrammaticalNumber_MAX = 2
};


// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8_t
{
	EGrammaticalGender__Neuter     = 0,
	EGrammaticalGender__Masculine  = 1,
	EGrammaticalGender__Feminine   = 2,
	EGrammaticalGender__Mixed      = 3,
	EGrammaticalGender__EGrammaticalGender_MAX = 4
};


// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8_t
{
	ESuggestProjVelocityTraceOption__DoNotTrace = 0,
	ESuggestProjVelocityTraceOption__TraceFullPath = 1,
	ESuggestProjVelocityTraceOption__OnlyTraceWhileAscending = 2,
	ESuggestProjVelocityTraceOption__ESuggestProjVelocityTraceOption_MAX = 3
};


// Enum Engine.EHMDWornState
enum class EHMDWornState : uint8_t
{
	EHMDWornState__Unknown         = 0,
	EHMDWornState__Worn            = 1,
	EHMDWornState__NotWorn         = 2,
	EHMDWornState__EHMDWornState_MAX = 3
};


// Enum Engine.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__Floor      = 0,
	EHMDTrackingOrigin__Eye        = 1,
	EHMDTrackingOrigin__EHMDTrackingOrigin_MAX = 2
};


// Enum Engine.EOrientPositionSelector
enum class EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation = 0,
	EOrientPositionSelector__Position = 1,
	EOrientPositionSelector__OrientationAndPosition = 2,
	EOrientPositionSelector__EOrientPositionSelector_MAX = 3
};


// Enum Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8_t
{
	ELerpInterpolationMode__QuatInterp = 0,
	ELerpInterpolationMode__EulerInterp = 1,
	ELerpInterpolationMode__DualQuatInterp = 2,
	ELerpInterpolationMode__ELerpInterpolationMode_MAX = 3
};


// Enum Engine.EEasingFunc
enum class EEasingFunc : uint8_t
{
	EEasingFunc__Linear            = 0,
	EEasingFunc__Step              = 1,
	EEasingFunc__SinusoidalIn      = 2,
	EEasingFunc__SinusoidalOut     = 3,
	EEasingFunc__SinusoidalInOut   = 4,
	EEasingFunc__EaseIn            = 5,
	EEasingFunc__EaseOut           = 6,
	EEasingFunc__EaseInOut         = 7,
	EEasingFunc__ExpoIn            = 8,
	EEasingFunc__ExpoOut           = 9,
	EEasingFunc__ExpoInOut         = 10,
	EEasingFunc__CircularIn        = 11,
	EEasingFunc__CircularOut       = 12,
	EEasingFunc__CircularInOut     = 13,
	EEasingFunc__EEasingFunc_MAX   = 14
};


// Enum Engine.ERoundingMode
enum class ERoundingMode : uint8_t
{
	HalfToEven                     = 0,
	HalfFromZero                   = 1,
	HalfToZero                     = 2,
	FromZero                       = 3,
	ToZero                         = 4,
	ToNegativeInfinity             = 5,
	ToPositiveInfinity             = 6,
	ERoundingMode_MAX              = 7
};


// Enum Engine.FNavigationSystemRunMode
enum class EFNavigationSystemRunMode : uint8_t
{
	FNavigationSystemRunMode__InvalidMode = 0,
	FNavigationSystemRunMode__GameMode = 1,
	FNavigationSystemRunMode__EditorMode = 2,
	FNavigationSystemRunMode__SimulationMode = 3,
	FNavigationSystemRunMode__PIEMode = 4,
	FNavigationSystemRunMode__FNavigationSystemRunMode_MAX = 5
};


// Enum Engine.EBodyCollisionResponse
enum class EBodyCollisionResponse : uint8_t
{
	EBodyCollisionResponse__BodyCollision_Enabled = 0,
	EBodyCollisionResponse__BodyCollision_Disabled = 1,
	EBodyCollisionResponse__BodyCollision_MAX = 2
};


// Enum Engine.EPhysicsType
enum class EPhysicsType : uint8_t
{
	PhysType_Default               = 0,
	PhysType_Kinematic             = 1,
	PhysType_Simulated             = 2,
	PhysType_MAX                   = 3
};


// Enum Engine.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault                 = 0,
	CTF_UseSimpleAndComplex        = 1,
	CTF_UseSimpleAsComplex         = 2,
	CTF_UseComplexAsSimple         = 3,
	CTF_MAX                        = 4
};


// Enum Engine.EFrictionCombineMode
enum class EFrictionCombineMode : uint8_t
{
	EFrictionCombineMode__Average  = 0,
	EFrictionCombineMode__Min      = 1,
	EFrictionCombineMode__Multiply = 2,
	EFrictionCombineMode__Max      = 3,
	EFrictionCombineMode__EFrictionCombineMode_MAX = 4
};


// Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8_t
{
	ESettingsLockedAxis__None      = 0,
	ESettingsLockedAxis__X         = 1,
	ESettingsLockedAxis__Y         = 2,
	ESettingsLockedAxis__Z         = 3,
	ESettingsLockedAxis__Invalid   = 4,
	ESettingsLockedAxis__ESettingsLockedAxis_MAX = 5
};


// Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8_t
{
	ESettingsDOF__Full3D           = 0,
	ESettingsDOF__YZPlane          = 1,
	ESettingsDOF__XZPlane          = 2,
	ESettingsDOF__XYPlane          = 3,
	ESettingsDOF__ESettingsDOF_MAX = 4
};


// Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8_t
{
	EAutoExposureMethodUI__AEM_Histogram = 0,
	EAutoExposureMethodUI__AEM_Basic = 1,
	EAutoExposureMethodUI__AEM_MAX = 2
};


// Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8_t
{
	EEarlyZPass__None              = 0,
	EEarlyZPass__OpaqueOnly        = 1,
	EEarlyZPass__OpaqueAndMasked   = 2,
	EEarlyZPass__Auto              = 3,
	EEarlyZPass__EEarlyZPass_MAX   = 4
};


// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8_t
{
	ECustomDepthStencil__Disabled  = 0,
	ECustomDepthStencil__Enabled   = 1,
	ECustomDepthStencil__EnabledOnDemand = 2,
	ECustomDepthStencil__EnabledWithStencil = 3,
	ECustomDepthStencil__ECustomDepthStencil_MAX = 4
};


// Enum Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : uint8_t
{
	EMobileMSAASampleCount__One    = 0,
	EMobileMSAASampleCount__Two    = 1,
	EMobileMSAASampleCount__Four   = 2,
	EMobileMSAASampleCount__Eight  = 3,
	EMobileMSAASampleCount__EMobileMSAASampleCount_MAX = 4
};


// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8_t
{
	ECompositingSampleCount__One   = 0,
	ECompositingSampleCount__Two   = 1,
	ECompositingSampleCount__Four  = 2,
	ECompositingSampleCount__Eight = 3,
	ECompositingSampleCount__ECompositingSampleCount_MAX = 4
};


// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8_t
{
	EClearSceneOptions__NoClear    = 0,
	EClearSceneOptions__HardwareClear = 1,
	EClearSceneOptions__QuadAtMaxZ = 2,
	EClearSceneOptions__EClearSceneOptions_MAX = 3
};


// Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8_t
{
	EUIScalingRule__ShortestSide   = 0,
	EUIScalingRule__LongestSide    = 1,
	EUIScalingRule__Horizontal     = 2,
	EUIScalingRule__Vertical       = 3,
	EUIScalingRule__Custom         = 4,
	EUIScalingRule__EUIScalingRule_MAX = 5
};


// Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8_t
{
	ERenderFocusRule__Always       = 0,
	ERenderFocusRule__NonPointer   = 1,
	ERenderFocusRule__NavigationOnly = 2,
	ERenderFocusRule__Never        = 3,
	ERenderFocusRule__ERenderFocusRule_MAX = 4
};


// Enum Engine.DistributionParamMode
enum class EDistributionParamMode : uint8_t
{
	DPM_Normal                     = 0,
	DPM_Abs                        = 1,
	DPM_Direct                     = 2,
	DPM_MAX                        = 3
};


// Enum Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                     = 0,
	EDVMF_Different                = 1,
	EDVMF_Mirror                   = 2,
	EDVMF_MAX                      = 3
};


// Enum Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                     = 0,
	EDVLF_XY                       = 1,
	EDVLF_XZ                       = 2,
	EDVLF_YZ                       = 3,
	EDVLF_XYZ                      = 4,
	EDVLF_MAX                      = 5
};


// Enum Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8_t
{
	CONNECT_RESPONSE_MAKE          = 0,
	CONNECT_RESPONSE_DISALLOW      = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAX           = 6
};


// Enum Engine.EGraphType
enum class EGraphType : uint8_t
{
	GT_Function                    = 0,
	GT_Ubergraph                   = 1,
	GT_Macro                       = 2,
	GT_Animation                   = 3,
	GT_StateMachine                = 4,
	GT_MAX                         = 5
};


// Enum Engine.EBackgroundTask
enum class EBackgroundTask : uint8_t
{
	BT_ShaderCompile               = 0,
	BT_RenderGrassMap              = 1,
	BT_BuildLighting               = 2,
	BT_MAX                         = 3
};


// Enum Engine.EConsoleType
enum class EConsoleType : uint8_t
{
	CONSOLE_Any                    = 0,
	CONSOLE_Mobile                 = 1,
	CONSOLE_MAX                    = 2
};


// Enum Engine.ETransitionType
enum class ETransitionType : uint8_t
{
	TT_None                        = 0,
	TT_Paused                      = 1,
	TT_Loading                     = 2,
	TT_Saving                      = 3,
	TT_Connecting                  = 4,
	TT_Precaching                  = 5,
	TT_WaitingToConnect            = 6,
	TT_MAX                         = 7
};


// Enum Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map                  = 0,
	FULLYLOAD_Game_PreLoadClass    = 1,
	FULLYLOAD_Game_PostLoadClass   = 2,
	FULLYLOAD_Always               = 3,
	FULLYLOAD_Mutator              = 4,
	FULLYLOAD_MAX                  = 5
};


// Enum Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8_t
{
	FontICS_Default                = 0,
	FontICS_Ansi                   = 1,
	FontICS_Symbol                 = 2,
	FontICS_MAX                    = 3
};


// Enum Engine.EFontCacheType
enum class EFontCacheType : uint8_t
{
	EFontCacheType__Offline        = 0,
	EFontCacheType__Runtime        = 1,
	EFontCacheType__EFontCacheType_MAX = 2
};


// Enum Engine.EWindowMode
enum class EWindowMode : uint8_t
{
	EWindowMode__Fullscreen        = 0,
	EWindowMode__WindowedFullscreen = 1,
	EWindowMode__Windowed          = 2,
	EWindowMode__EWindowMode_MAX   = 3
};


// Enum Engine.ETrackActiveCondition
enum class ETrackActiveCondition : uint8_t
{
	ETAC_Always                    = 0,
	ETAC_GoreEnabled               = 1,
	ETAC_GoreDisabled              = 2,
	ETAC_MAX                       = 3
};


// Enum Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed                  = 0,
	IMR_LookAtGroup                = 1,
	IMR_Ignore                     = 2,
	IMR_MAX                        = 3
};


// Enum Engine.EInterpMoveAxis
enum class EInterpMoveAxis : uint8_t
{
	AXIS_TranslationX              = 0,
	AXIS_TranslationY              = 1,
	AXIS_TranslationZ              = 2,
	AXIS_RotationX                 = 3,
	AXIS_RotationY                 = 4,
	AXIS_RotationZ                 = 5,
	AXIS_MAX                       = 6
};


// Enum Engine.ETrackToggleAction
enum class ETrackToggleAction : uint8_t
{
	ETTA_Off                       = 0,
	ETTA_On                        = 1,
	ETTA_Toggle                    = 2,
	ETTA_Trigger                   = 3,
	ETTA_MAX                       = 4
};


// Enum Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8_t
{
	EVTC_Always                    = 0,
	EVTC_GoreEnabled               = 1,
	EVTC_GoreDisabled              = 2,
	EVTC_MAX                       = 3
};


// Enum Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8_t
{
	EVTA_Hide                      = 0,
	EVTA_Show                      = 1,
	EVTA_Toggle                    = 2,
	EVTA_MAX                       = 3
};


// Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8_t
{
	EMaterialAttributeBlend__Blend = 0,
	EMaterialAttributeBlend__UseA  = 1,
	EMaterialAttributeBlend__UseB  = 2,
	EMaterialAttributeBlend__EMaterialAttributeBlend_MAX = 3
};


// Enum Engine.EClampMode
enum class EClampMode : uint8_t
{
	CMODE_Clamp                    = 0,
	CMODE_ClampMin                 = 1,
	CMODE_ClampMax                 = 2,
	CMODE_MAX                      = 3
};


// Enum Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8_t
{
	CMOT_Float1                    = 0,
	CMOT_Float2                    = 1,
	CMOT_Float3                    = 2,
	CMOT_Float4                    = 3,
	CMOT_MAX                       = 4
};


// Enum Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask            = 0,
	TDOF_NearMask                  = 1,
	TDOF_FarMask                   = 2,
	TDOF_CircleOfConfusionRadius   = 3,
	TDOF_MAX                       = 4
};


// Enum Engine.EFunctionInputType
enum class EFunctionInputType : uint8_t
{
	FunctionInput_Scalar           = 0,
	FunctionInput_Vector2          = 1,
	FunctionInput_Vector3          = 2,
	FunctionInput_Vector4          = 3,
	FunctionInput_Texture2D        = 4,
	FunctionInput_TextureCube      = 5,
	FunctionInput_Texture2DArray   = 6,
	FunctionInput_StaticBool       = 7,
	FunctionInput_MaterialAttributes = 8,
	FunctionInput_MAX              = 9
};


// Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8_t
{
	NOISEFUNCTION_SimplexTex       = 0,
	NOISEFUNCTION_GradientTex      = 1,
	NOISEFUNCTION_GradientTex3D    = 2,
	NOISEFUNCTION_GradientALU      = 3,
	NOISEFUNCTION_ValueALU         = 4,
	NOISEFUNCTION_VoronoiALU       = 5,
	NOISEFUNCTION_MAX              = 6
};


// Enum Engine.EObjectPositionIncludedOffsets
enum class EObjectPositionIncludedOffsets : uint8_t
{
	OPT_Default                    = 0,
	OPT_Full                       = 1,
	OPT_MAX                        = 2
};


// Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8_t
{
	EMaterialSceneAttributeInputMode__Coordinates = 0,
	EMaterialSceneAttributeInputMode__OffsetFraction = 1,
	EMaterialSceneAttributeInputMode__EMaterialSceneAttributeInputMode_MAX = 2
};


// Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8_t
{
	PPI_SceneColor                 = 0,
	PPI_SceneDepth                 = 1,
	PPI_DiffuseColor               = 2,
	PPI_SpecularColor              = 3,
	PPI_SubsurfaceColor            = 4,
	PPI_BaseColor                  = 5,
	PPI_Specular                   = 6,
	PPI_Metallic                   = 7,
	PPI_WorldNormal                = 8,
	PPI_SeparateTranslucency       = 9,
	PPI_Opacity                    = 10,
	PPI_Roughness                  = 11,
	PPI_MaterialAO                 = 12,
	PPI_CustomDepth                = 13,
	PPI_PostProcessInput0          = 14,
	PPI_PostProcessInput1          = 15,
	PPI_PostProcessInput2          = 16,
	PPI_PostProcessInput3          = 17,
	PPI_PostProcessInput4          = 18,
	PPI_PostProcessInput5          = 19,
	PPI_PostProcessInput6          = 20,
	PPI_DecalMask                  = 21,
	PPI_ShadingModel               = 22,
	PPI_AmbientOcclusion           = 23,
	PPI_CustomStencil              = 24,
	PPI_StoredBaseColor            = 25,
	PPI_StoredSpecular             = 26,
	PPI_ScreenCopy                 = 27,
	PPI_SceneStencil               = 28,
	PPI_MAX                        = 29
};


// Enum Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8_t
{
	STLOD_Pop                      = 0,
	STLOD_Smooth                   = 1,
	STLOD_MAX                      = 2
};


// Enum Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8_t
{
	STW_None                       = 0,
	STW_Fastest                    = 1,
	STW_Fast                       = 2,
	STW_Better                     = 3,
	STW_Best                       = 4,
	STW_Palm                       = 5,
	STW_BestPlus                   = 6,
	STW_MAX                        = 7
};


// Enum Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8_t
{
	STG_Branch                     = 0,
	STG_Frond                      = 1,
	STG_Leaf                       = 2,
	STG_FacingLeaf                 = 3,
	STG_Billboard                  = 4,
	STG_MAX                        = 5
};


// Enum Engine.ETextureChannel
enum class ETextureChannel : uint8_t
{
	ETextureChannel__R             = 0,
	ETextureChannel__G             = 1,
	ETextureChannel__B             = 2,
	ETextureChannel__A             = 3,
	ETextureChannel__ETextureChannel_MAX = 4
};


// Enum Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8_t
{
	TMVM_None                      = 0,
	TMVM_MipLevel                  = 1,
	TMVM_MipBias                   = 2,
	TMVM_Derivative                = 3,
	TMVM_MAX                       = 4
};


// Enum Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8_t
{
	TCC_Red                        = 0,
	TCC_Green                      = 1,
	TCC_Blue                       = 2,
	TCC_Alpha                      = 3,
	TCC_MAX                        = 4
};


// Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8_t
{
	TMTM_TextureSize               = 0,
	TMTM_TexelSize                 = 1,
	TMTM_MAX                       = 2
};


// Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_Tangent              = 0,
	TRANSFORM_Local                = 1,
	TRANSFORM_World                = 2,
	TRANSFORM_View                 = 3,
	TRANSFORM_Camera               = 4,
	TRANSFORM_ParticleWorld        = 5,
	TRANSFORM_MAX                  = 6
};


// Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_Tangent        = 0,
	TRANSFORMSOURCE_Local          = 1,
	TRANSFORMSOURCE_World          = 2,
	TRANSFORMSOURCE_View           = 3,
	TRANSFORMSOURCE_Camera         = 4,
	TRANSFORMSOURCE_ParticleWorld  = 5,
	TRANSFORMSOURCE_MAX            = 6
};


// Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local       = 0,
	TRANSFORMPOSSOURCE_World       = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View        = 3,
	TRANSFORMPOSSOURCE_Camera      = 4,
	TRANSFORMPOSSOURCE_Particle    = 5,
	TRANSFORMPOSSOURCE_MAX         = 6
};


// Enum Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8_t
{
	VNF_CellnoiseALU               = 0,
	VNF_VectorALU                  = 1,
	VNF_GradientALU                = 2,
	VNF_CurlALU                    = 3,
	VNF_VoronoiALU                 = 4,
	VNF_MAX                        = 5
};


// Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8_t
{
	MEVP_BufferSize                = 0,
	MEVP_FieldOfView               = 1,
	MEVP_TanHalfFieldOfView        = 2,
	MEVP_ViewSize                  = 3,
	MEVP_WorldSpaceViewPosition    = 4,
	MEVP_WorldSpaceCameraPosition  = 5,
	MEVP_ViewportOffset            = 6,
	MEVP_MAX                       = 7
};


// Enum Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8_t
{
	WPT_Default                    = 0,
	WPT_Full                       = 1,
	WPT_ExcludeAllShaderOffsets    = 2,
	WPT_FullNoOffsets              = 3,
	WPT_CameraRelative             = 4,
	WPT_CameraRelativeNoOffsets    = 5,
	WPT_MAX                        = 6
};


// Enum Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8_t
{
	MDR_None                       = 0,
	MDR_ColorNormalRoughness       = 1,
	MDR_Color                      = 2,
	MDR_ColorNormal                = 3,
	MDR_ColorRoughness             = 4,
	MDR_Normal                     = 5,
	MDR_NormalRoughness            = 6,
	MDR_Roughness                  = 7,
	MDR_MAX                        = 8
};


// Enum Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8_t
{
	DBM_Translucent                = 0,
	DBM_Stain                      = 1,
	DBM_Normal                     = 2,
	DBM_Emissive                   = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color              = 5,
	DBM_DBuffer_ColorNormal        = 6,
	DBM_DBuffer_ColorRoughness     = 7,
	DBM_DBuffer_Normal             = 8,
	DBM_DBuffer_NormalRoughness    = 9,
	DBM_DBuffer_Roughness          = 10,
	DBM_Volumetric_DistanceFunction = 11,
	DBM_MAX                        = 12
};


// Enum Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8_t
{
	ERM_Normal                     = 0,
	ERM_Point                      = 1,
	ERM_Cross                      = 2,
	ERM_LightsOnly                 = 3,
	ERM_None                       = 4,
	ERM_MAX                        = 5
};


// Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None                    = 0,
	PSUVIM_Linear                  = 1,
	PSUVIM_Linear_Blend            = 2,
	PSUVIM_Random                  = 3,
	PSUVIM_Random_Blend            = 4,
	PSUVIM_MAX                     = 5
};


// Enum Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8_t
{
	EPBM_Instant                   = 0,
	EPBM_Interpolated              = 1,
	EPBM_MAX                       = 2
};


// Enum Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8_t
{
	PSA_FacingCameraPosition       = 0,
	PSA_Square                     = 1,
	PSA_Rectangle                  = 2,
	PSA_Velocity                   = 3,
	PSA_AwayFromCenter             = 4,
	PSA_TypeSpecific               = 5,
	PSA_FacingCameraDistanceBlend  = 6,
	PSA_MAX                        = 7
};


// Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8_t
{
	EParticleSystemInsignificanceReaction__Auto = 0,
	EParticleSystemInsignificanceReaction__Complete = 1,
	EParticleSystemInsignificanceReaction__DisableTick = 2,
	EParticleSystemInsignificanceReaction__DisableTickAndKill = 3,
	EParticleSystemInsignificanceReaction__Num = 4,
	EParticleSystemInsignificanceReaction__EParticleSystemInsignificanceReaction_MAX = 5
};


// Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8_t
{
	EParticleSignificanceLevel__Low = 0,
	EParticleSignificanceLevel__Medium = 1,
	EParticleSignificanceLevel__High = 2,
	EParticleSignificanceLevel__Critical = 3,
	EParticleSignificanceLevel__Num = 4,
	EParticleSignificanceLevel__EParticleSignificanceLevel_MAX = 5
};


// Enum Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random                   = 0,
	EPSSM_Sequential               = 1,
	EPSSM_MAX                      = 2
};


// Enum Engine.EModuleType
enum class EModuleType : uint8_t
{
	EPMT_General                   = 0,
	EPMT_TypeData                  = 1,
	EPMT_Beam                      = 2,
	EPMT_Trail                     = 3,
	EPMT_Spawn                     = 4,
	EPMT_Required                  = 5,
	EPMT_Event                     = 6,
	EPMT_Light                     = 7,
	EPMT_SubUV                     = 8,
	EPMT_MAX                       = 9
};


// Enum Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random                   = 0,
	EAPSM_Sequential               = 1,
	EAPSM_MAX                      = 2
};


// Enum Engine.Beam2SourceTargetTangentMethod
enum class EBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct                = 0,
	PEB2STTM_UserSet               = 1,
	PEB2STTM_Distribution          = 2,
	PEB2STTM_Emitter               = 3,
	PEB2STTM_MAX                   = 4
};


// Enum Engine.Beam2SourceTargetMethod
enum class EBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default                = 0,
	PEB2STM_UserSet                = 1,
	PEB2STM_Emitter                = 2,
	PEB2STM_Particle               = 3,
	PEB2STM_Actor                  = 4,
	PEB2STM_MAX                    = 5
};


// Enum Engine.BeamModifierType
enum class EBeamModifierType : uint8_t
{
	PEB2MT_Source                  = 0,
	PEB2MT_Target                  = 1,
	PEB2MT_MAX                     = 2
};


// Enum Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet               = 0,
	EPCOUM_Additive                = 1,
	EPCOUM_Scalar                  = 2,
	EPCOUM_MAX                     = 3
};


// Enum Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8_t
{
	EPCC_Kill                      = 0,
	EPCC_Freeze                    = 1,
	EPCC_HaltCollisions            = 2,
	EPCC_FreezeTranslation         = 3,
	EPCC_FreezeRotation            = 4,
	EPCC_FreezeMovement            = 5,
	EPCC_MAX                       = 6
};


// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8_t
{
	EParticleCollisionResponse__Bounce = 0,
	EParticleCollisionResponse__Stop = 1,
	EParticleCollisionResponse__Kill = 2,
	EParticleCollisionResponse__EParticleCollisionResponse_MAX = 3
};


// Enum Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential       = 0,
	BONESOCKETSEL_Random           = 1,
	BONESOCKETSEL_MAX              = 2
};


// Enum Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones         = 0,
	BONESOCKETSOURCE_Sockets       = 1,
	BONESOCKETSOURCE_MAX           = 2
};


// Enum Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random                   = 0,
	ELESM_Sequential               = 1,
	ELESM_MAX                      = 2
};


// Enum Engine.CylinderHeightAxis
enum class ECylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X             = 0,
	PMLPC_HEIGHTAXIS_Y             = 1,
	PMLPC_HEIGHTAXIS_Z             = 2,
	PMLPC_HEIGHTAXIS_MAX           = 3
};


// Enum Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert         = 0,
	VERTSURFACESOURCE_Surface      = 1,
	VERTSURFACESOURCE_MAX          = 2
};


// Enum Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8_t
{
	EOChainMode_Add                = 0,
	EOChainMode_Scale              = 1,
	EOChainMode_Link               = 2,
	EOChainMode_MAX                = 3
};


// Enum Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8_t
{
	EPAL_NONE                      = 0,
	EPAL_X                         = 1,
	EPAL_Y                         = 2,
	EPAL_Z                         = 3,
	EPAL_NEGATIVE_X                = 4,
	EPAL_NEGATIVE_Y                = 5,
	EPAL_NEGATIVE_Z                = 6,
	EPAL_ROTATE_X                  = 7,
	EPAL_ROTATE_Y                  = 8,
	EPAL_ROTATE_Z                  = 9,
	EPAL_MAX                       = 10
};


// Enum Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet                   = 0,
	EDPV_AutoSet                   = 1,
	EDPV_VelocityX                 = 2,
	EDPV_VelocityY                 = 3,
	EDPV_VelocityZ                 = 4,
	EDPV_VelocityMag               = 5,
	EDPV_MAX                       = 6
};


// Enum Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8_t
{
	OSM_Alpha                      = 0,
	OSM_ColorBrightness            = 1,
	OSM_RedChannel                 = 2,
	OSM_GreenChannel               = 3,
	OSM_BlueChannel                = 4,
	OSM_MAX                        = 5
};


// Enum Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8_t
{
	BVC_FourVertices               = 0,
	BVC_EightVertices              = 1,
	BVC_MAX                        = 2
};


// Enum Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing               = 0,
	ENM_Spherical                  = 1,
	ENM_Cylindrical                = 2,
	ENM_MAX                        = 3
};


// Enum Engine.EParticleSortMode
enum class EParticleSortMode : uint8_t
{
	PSORTMODE_None                 = 0,
	PSORTMODE_ViewProjDepth        = 1,
	PSORTMODE_DistanceToView       = 2,
	PSORTMODE_Age_OldestFirst      = 3,
	PSORTMODE_Age_NewestFirst      = 4,
	PSORTMODE_MAX                  = 5
};


// Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8_t
{
	EParticleUVFlipMode__None      = 0,
	EParticleUVFlipMode__FlipUV    = 1,
	EParticleUVFlipMode__FlipUOnly = 2,
	EParticleUVFlipMode__FlipVOnly = 3,
	EParticleUVFlipMode__RandomFlipUV = 4,
	EParticleUVFlipMode__RandomFlipUOnly = 5,
	EParticleUVFlipMode__RandomFlipVOnly = 6,
	EParticleUVFlipMode__RandomFlipUVIndependent = 7,
	EParticleUVFlipMode__EParticleUVFlipMode_MAX = 8
};


// Enum Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default               = 0,
	PET2SRCM_Particle              = 1,
	PET2SRCM_Actor                 = 2,
	PET2SRCM_MAX                   = 3
};


// Enum Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8_t
{
	PEBTM_None                     = 0,
	PEBTM_Full                     = 1,
	PEBTM_Partial                  = 2,
	PEBTM_MAX                      = 3
};


// Enum Engine.EBeam2Method
enum class EBeam2Method : uint8_t
{
	PEB2M_Distance                 = 0,
	PEB2M_Target                   = 1,
	PEB2M_Branch                   = 2,
	PEB2M_MAX                      = 3
};


// Enum Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp               = 0,
	XAxisFacing_ZUp                = 1,
	XAxisFacing_NegativeZUp        = 2,
	XAxisFacing_YUp                = 3,
	XAxisFacing_NegativeYUp        = 4,
	LockedAxis_ZAxisFacing         = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing         = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing    = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing    = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX   = 13
};


// Enum Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP            = 0,
	CameraFacing_ZUp               = 1,
	CameraFacing_NegativeZUp       = 2,
	CameraFacing_YUp               = 3,
	CameraFacing_NegativeYUp       = 4,
	CameraFacing_MAX               = 5
};


// Enum Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll    = 0,
	PSMA_MeshFaceCameraWithSpin    = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX                       = 3
};


// Enum Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp                = 0,
	Trails_SourceUp                = 1,
	Trails_WorldUp                 = 2,
	Trails_MAX                     = 3
};


// Enum Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete       = 0,
	CSD_KeyValueWriteComplete      = 1,
	CSD_ValueChanged               = 2,
	CSD_DocumentQueryComplete      = 3,
	CSD_DocumentReadComplete       = 4,
	CSD_DocumentWriteComplete      = 5,
	CSD_DocumentConflictDetected   = 6,
	CSD_MAX                        = 7
};


// Enum Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner              = 0,
	AMD_UserClosedAd               = 1,
	AMD_MAX                        = 2
};


// Enum Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8_t
{
	MTR_Succeeded                  = 0,
	MTR_Failed                     = 1,
	MTR_Canceled                   = 2,
	MTR_RestoredFromServer         = 3,
	MTR_MAX                        = 4
};


// Enum Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete      = 0,
	MTD_PurchaseComplete           = 1,
	MTD_MAX                        = 2
};


// Enum Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete          = 0,
	TID_TweetUIComplete            = 1,
	TID_RequestComplete            = 2,
	TID_MAX                        = 3
};


// Enum Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8_t
{
	TRM_Get                        = 0,
	TRM_Post                       = 1,
	TRM_Delete                     = 2,
	TRM_MAX                        = 3
};


// Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8_t
{
	EReporterLineStyle__Line       = 0,
	EReporterLineStyle__Dash       = 1,
	EReporterLineStyle__EReporterLineStyle_MAX = 2
};


// Enum Engine.ELegendPosition
enum class ELegendPosition : uint8_t
{
	ELegendPosition__Outside       = 0,
	ELegendPosition__Inside        = 1,
	ELegendPosition__ELegendPosition_MAX = 2
};


// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8_t
{
	EGraphDataStyle__Lines         = 0,
	EGraphDataStyle__Filled        = 1,
	EGraphDataStyle__EGraphDataStyle_MAX = 2
};


// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8_t
{
	EGraphAxisStyle__Lines         = 0,
	EGraphAxisStyle__Notches       = 1,
	EGraphAxisStyle__Grid          = 2,
	EGraphAxisStyle__EGraphAxisStyle_MAX = 3
};


// Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8_t
{
	EConstraintTransform__Absolute = 0,
	EConstraintTransform__Relative = 1,
	EConstraintTransform__EConstraintTransform_MAX = 2
};


// Enum Engine.EControlConstraint
enum class EControlConstraint : uint8_t
{
	EControlConstraint__Orientation = 0,
	EControlConstraint__Translation = 1,
	EControlConstraint__Max        = 2,
	EControlConstraint__EControlConstraint_MAX = 3
};


// Enum Engine.EImpactDamageOverride
enum class EImpactDamageOverride : uint8_t
{
	IDO_None                       = 0,
	IDO_On                         = 1,
	IDO_Off                        = 2,
	IDO_MAX                        = 3
};


// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8_t
{
	EMaxConcurrentResolutionRule__PreventNew = 0,
	EMaxConcurrentResolutionRule__StopOldest = 1,
	EMaxConcurrentResolutionRule__StopFarthestThenPreventNew = 2,
	EMaxConcurrentResolutionRule__StopFarthestThenOldest = 3,
	EMaxConcurrentResolutionRule__StopLowestPriority = 4,
	EMaxConcurrentResolutionRule__StopQuietest = 5,
	EMaxConcurrentResolutionRule__StopLowestPriorityThenPreventNew = 6,
	EMaxConcurrentResolutionRule__EMaxConcurrentResolutionRule_MAX = 7
};


// Enum Engine.ESoundGroup
enum class ESoundGroup : uint8_t
{
	SOUNDGROUP_Default             = 0,
	SOUNDGROUP_Effects             = 1,
	SOUNDGROUP_UI                  = 2,
	SOUNDGROUP_Music               = 3,
	SOUNDGROUP_Voice               = 4,
	SOUNDGROUP_GameSoundGroup1     = 5,
	SOUNDGROUP_GameSoundGroup2     = 6,
	SOUNDGROUP_GameSoundGroup3     = 7,
	SOUNDGROUP_GameSoundGroup4     = 8,
	SOUNDGROUP_GameSoundGroup5     = 9,
	SOUNDGROUP_GameSoundGroup6     = 10,
	SOUNDGROUP_GameSoundGroup7     = 11,
	SOUNDGROUP_GameSoundGroup8     = 12,
	SOUNDGROUP_GameSoundGroup9     = 13,
	SOUNDGROUP_GameSoundGroup10    = 14,
	SOUNDGROUP_GameSoundGroup11    = 15,
	SOUNDGROUP_GameSoundGroup12    = 16,
	SOUNDGROUP_GameSoundGroup13    = 17,
	SOUNDGROUP_GameSoundGroup14    = 18,
	SOUNDGROUP_GameSoundGroup15    = 19,
	SOUNDGROUP_GameSoundGroup16    = 20,
	SOUNDGROUP_GameSoundGroup17    = 21,
	SOUNDGROUP_GameSoundGroup18    = 22,
	SOUNDGROUP_GameSoundGroup19    = 23,
	SOUNDGROUP_GameSoundGroup20    = 24,
	SOUNDGROUP_MAX                 = 25
};


// Enum Engine.EDecompressionType
enum class EDecompressionType : uint8_t
{
	DTYPE_Setup                    = 0,
	DTYPE_Invalid                  = 1,
	DTYPE_Preview                  = 2,
	DTYPE_Native                   = 3,
	DTYPE_RealTime                 = 4,
	DTYPE_Procedural               = 5,
	DTYPE_Xenon                    = 6,
	DTYPE_Streaming                = 7,
	DTYPE_MAX                      = 8
};


// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8_t
{
	EAudioOutputTarget__Speaker    = 0,
	EAudioOutputTarget__Controller = 1,
	EAudioOutputTarget__ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget__EAudioOutputTarget_MAX = 3
};


// Enum Engine.ModulationParamMode
enum class EModulationParamMode : uint8_t
{
	MPM_Normal                     = 0,
	MPM_Abs                        = 1,
	MPM_Direct                     = 2,
	MPM_MAX                        = 3
};


// Enum Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8_t
{
	UDSS_UpToDate                  = 0,
	UDSS_Dirty                     = 1,
	UDSS_Error                     = 2,
	UDSS_Duplicate                 = 3,
	UDSS_MAX                       = 4
};


// Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8_t
{
	VFCO_Extrude                   = 0,
	VFCO_Revolve                   = 1,
	VFCO_MAX                       = 2
};


// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8_t
{
	EPostCopyOperation__None       = 0,
	EPostCopyOperation__LogicalNegateBool = 1,
	EPostCopyOperation__Dereference = 2,
	EPostCopyOperation__EPostCopyOperation_MAX = 3
};


// Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8_t
{
	EPinHidingMode__NeverAsPin     = 0,
	EPinHidingMode__PinHiddenByDefault = 1,
	EPinHidingMode__PinShownByDefault = 2,
	EPinHidingMode__AlwaysAsPin    = 3,
	EPinHidingMode__EPinHidingMode_MAX = 4
};


// Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8_t
{
	EAnimAlphaInputType__Float     = 0,
	EAnimAlphaInputType__Bool      = 1,
	EAnimAlphaInputType__Curve     = 2,
	EAnimAlphaInputType__EAnimAlphaInputType_MAX = 3
};


// Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8_t
{
	EEvaluatorMode__EM_Standard    = 0,
	EEvaluatorMode__EM_Freeze      = 1,
	EEvaluatorMode__EM_DelayedFreeze = 2,
	EEvaluatorMode__EM_MAX         = 3
};


// Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8_t
{
	EEvaluatorDataSource__EDS_SourcePose = 0,
	EEvaluatorDataSource__EDS_DestinationPose = 1,
	EEvaluatorDataSource__EDS_MAX  = 2
};


// Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8_t
{
	ECameraAlphaBlendMode__CABM_Linear = 0,
	ECameraAlphaBlendMode__CABM_Cubic = 1,
	ECameraAlphaBlendMode__CABM_MAX = 2
};


// Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8_t
{
	EVertexPaintAxis__X            = 0,
	EVertexPaintAxis__Y            = 1,
	EVertexPaintAxis__Z            = 2,
	EVertexPaintAxis__EVertexPaintAxis_MAX = 3
};


// Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8_t
{
	EDrawDebugItemType__DirectionalArrow = 0,
	EDrawDebugItemType__Sphere     = 1,
	EDrawDebugItemType__Line       = 2,
	EDrawDebugItemType__OnScreenMessage = 3,
	EDrawDebugItemType__CoordinateSystem = 4,
	EDrawDebugItemType__EDrawDebugItemType_MAX = 5
};


// Enum Engine.AnimPhysCollisionType
enum class EAnimPhysCollisionType : uint8_t
{
	AnimPhysCollisionType__CoM     = 0,
	AnimPhysCollisionType__CustomSphere = 1,
	AnimPhysCollisionType__InnerSphere = 2,
	AnimPhysCollisionType__OuterSphere = 3,
	AnimPhysCollisionType__AnimPhysCollisionType_MAX = 4
};


// Enum Engine.AnimPhysTwistAxis
enum class EAnimPhysTwistAxis : uint8_t
{
	AnimPhysTwistAxis__AxisX       = 0,
	AnimPhysTwistAxis__AxisY       = 1,
	AnimPhysTwistAxis__AxisZ       = 2,
	AnimPhysTwistAxis__AnimPhysTwistAxis_MAX = 3
};


// Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8_t
{
	EWindowTitleBarMode__Overlay   = 0,
	EWindowTitleBarMode__VerticalBox = 1,
	EWindowTitleBarMode__EWindowTitleBarMode_MAX = 2
};


// Enum Engine.EDecalChannel
enum class EDecalChannel : uint8_t
{
	EDecalChannel__Channel0        = 0,
	EDecalChannel__Channel1        = 1,
	EDecalChannel__Channel2        = 2,
	EDecalChannel__Channel3        = 3,
	EDecalChannel__Num             = 4,
	EDecalChannel__EDecalChannel_MAX = 5
};


// Enum Engine.EIndoorOutdoorMask
enum class EIndoorOutdoorMask : uint8_t
{
	IOM_NONE                       = 0,
	IOM_INDOOR                     = 1,
	IOM_OUTDOOR                    = 2,
	IOM_BOTH                       = 3,
	IOM_MAX                        = 4
};


// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8_t
{
	EMeshBufferAccess__Default     = 0,
	EMeshBufferAccess__ForceCPUAndGPU = 1,
	EMeshBufferAccess__EMeshBufferAccess_MAX = 2
};


// Enum Engine.EConstraintFrame
enum class EConstraintFrame : uint8_t
{
	EConstraintFrame__Frame1       = 0,
	EConstraintFrame__Frame2       = 1,
	EConstraintFrame__EConstraintFrame_MAX = 2
};


// Enum Engine.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8_t
{
	ACM_Free                       = 0,
	ACM_Limited                    = 1,
	ACM_Locked                     = 2,
	ACM_MAX                        = 3
};


// Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8_t
{
	EComponentSocketType__Invalid  = 0,
	EComponentSocketType__Bone     = 1,
	EComponentSocketType__Socket   = 2,
	EComponentSocketType__EComponentSocketType_MAX = 3
};


// Enum Engine.EComponentMobility
enum class EComponentMobility : uint8_t
{
	EComponentMobility__Static     = 0,
	EComponentMobility__Stationary = 1,
	EComponentMobility__Movable    = 2,
	EComponentMobility__EComponentMobility_MAX = 3
};


// Enum Engine.EPhysicalSurface
enum class EPhysicalSurface : uint8_t
{
	SurfaceType_Default            = 0,
	SurfaceType1                   = 1,
	SurfaceType2                   = 2,
	SurfaceType3                   = 3,
	SurfaceType4                   = 4,
	SurfaceType5                   = 5,
	SurfaceType6                   = 6,
	SurfaceType7                   = 7,
	SurfaceType8                   = 8,
	SurfaceType9                   = 9,
	SurfaceType10                  = 10,
	SurfaceType11                  = 11,
	SurfaceType12                  = 12,
	SurfaceType13                  = 13,
	SurfaceType14                  = 14,
	SurfaceType15                  = 15,
	SurfaceType16                  = 16,
	SurfaceType17                  = 17,
	SurfaceType18                  = 18,
	SurfaceType19                  = 19,
	SurfaceType20                  = 20,
	SurfaceType21                  = 21,
	SurfaceType22                  = 22,
	SurfaceType23                  = 23,
	SurfaceType24                  = 24,
	SurfaceType25                  = 25,
	SurfaceType26                  = 26,
	SurfaceType27                  = 27,
	SurfaceType28                  = 28,
	SurfaceType29                  = 29,
	SurfaceType30                  = 30,
	SurfaceType31                  = 31,
	SurfaceType32                  = 32,
	SurfaceType33                  = 33,
	SurfaceType34                  = 34,
	SurfaceType35                  = 35,
	SurfaceType36                  = 36,
	SurfaceType37                  = 37,
	SurfaceType38                  = 38,
	SurfaceType39                  = 39,
	SurfaceType40                  = 40,
	SurfaceType41                  = 41,
	SurfaceType42                  = 42,
	SurfaceType43                  = 43,
	SurfaceType44                  = 44,
	SurfaceType45                  = 45,
	SurfaceType46                  = 46,
	SurfaceType47                  = 47,
	SurfaceType48                  = 48,
	SurfaceType49                  = 49,
	SurfaceType50                  = 50,
	SurfaceType51                  = 51,
	SurfaceType52                  = 52,
	SurfaceType53                  = 53,
	SurfaceType54                  = 54,
	SurfaceType55                  = 55,
	SurfaceType56                  = 56,
	SurfaceType57                  = 57,
	SurfaceType58                  = 58,
	SurfaceType59                  = 59,
	SurfaceType60                  = 60,
	SurfaceType61                  = 61,
	SurfaceType62                  = 62,
	SurfaceType_Max                = 63,
	EPhysicalSurface_MAX           = 64
};


// Enum Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8_t
{
	WalkableSlope_Default          = 0,
	WalkableSlope_Increase         = 1,
	WalkableSlope_Decrease         = 2,
	WalkableSlope_Unwalkable       = 3,
	WalkableSlope_Max              = 4
};


// Enum Engine.ENetDormancy
enum class ENetDormancy : uint8_t
{
	DORM_Never                     = 0,
	DORM_Awake                     = 1,
	DORM_DormantAll                = 2,
	DORM_DormantPartial            = 3,
	DORM_Initial                   = 4,
	DORN_MAX                       = 5,
	ENetDormancy_MAX               = 6
};


// Enum Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8_t
{
	EUpdateRateShiftBucket__ShiftBucket0 = 0,
	EUpdateRateShiftBucket__ShiftBucket1 = 1,
	EUpdateRateShiftBucket__ShiftBucket2 = 2,
	EUpdateRateShiftBucket__ShiftBucket3 = 3,
	EUpdateRateShiftBucket__ShiftBucket4 = 4,
	EUpdateRateShiftBucket__ShiftBucket5 = 5,
	EUpdateRateShiftBucket__ShiftBucketMax = 6,
	EUpdateRateShiftBucket__EUpdateRateShiftBucket_MAX = 7
};


// Enum Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8_t
{
	SMF_None                       = 0,
	SMF_Streamed                   = 1,
	SMF_MAX                        = 2
};


// Enum Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8_t
{
	LMPT_NormalPadding             = 0,
	LMPT_PrePadding                = 1,
	LMPT_NoPadding                 = 2,
	LMPT_MAX                       = 3
};


// Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8_t
{
	ECollisionEnabled__NoCollision = 0,
	ECollisionEnabled__QueryOnly   = 1,
	ECollisionEnabled__PhysicsOnly = 2,
	ECollisionEnabled__QueryAndPhysics = 3,
	ECollisionEnabled__ECollisionEnabled_MAX = 4
};


// Enum Engine.ETimelineSigType
enum class ETimelineSigType : uint8_t
{
	ETS_EventSignature             = 0,
	ETS_FloatSignature             = 1,
	ETS_VectorSignature            = 2,
	ETS_LinearColorSignature       = 3,
	ETS_InvalidSignature           = 4,
	ETS_MAX                        = 5
};


// Enum Engine.ESleepFamily
enum class ESleepFamily : uint8_t
{
	ESleepFamily__Normal           = 0,
	ESleepFamily__Sensitive        = 1,
	ESleepFamily__Custom           = 2,
	ESleepFamily__ESleepFamily_MAX = 3
};


// Enum Engine.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8_t
{
	RIF_Constant                   = 0,
	RIF_Linear                     = 1,
	RIF_MAX                        = 2
};


// Enum Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8_t
{
	BSIT_Average                   = 0,
	BSIT_Linear                    = 1,
	BSIT_Cubic                     = 2,
	BSIT_MAX                       = 3
};


// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8_t
{
	ECR_Ignore                     = 0,
	ECR_Overlap                    = 1,
	ECR_Block                      = 2,
	ECR_MAX                        = 3
};


// Enum Engine.EPhysicsSceneType
enum class EPhysicsSceneType : uint8_t
{
	PST_Sync                       = 0,
	PST_Cloth                      = 1,
	PST_Async                      = 2,
	PST_MAX                        = 3
};


// Enum Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8_t
{
	OverlapFilter_All              = 0,
	OverlapFilter_DynamicOnly      = 1,
	OverlapFilter_StaticOnly       = 2,
	OverlapFilter_MAX              = 3
};


// Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8_t
{
	ECC_WorldStatic                = 0,
	ECC_WorldDynamic               = 1,
	ECC_Pawn                       = 2,
	ECC_Visibility                 = 3,
	ECC_Camera                     = 4,
	ECC_PhysicsBody                = 5,
	ECC_Vehicle                    = 6,
	ECC_Destructible               = 7,
	ECC_EngineTraceChannel1        = 8,
	ECC_EngineTraceChannel2        = 9,
	ECC_EngineTraceChannel3        = 10,
	ECC_EngineTraceChannel4        = 11,
	ECC_EngineTraceChannel5        = 12,
	ECC_EngineTraceChannel6        = 13,
	ECC_GameTraceChannel1          = 14,
	ECC_GameTraceChannel2          = 15,
	ECC_GameTraceChannel3          = 16,
	ECC_GameTraceChannel4          = 17,
	ECC_GameTraceChannel5          = 18,
	ECC_GameTraceChannel6          = 19,
	ECC_GameTraceChannel7          = 20,
	ECC_GameTraceChannel8          = 21,
	ECC_GameTraceChannel9          = 22,
	ECC_GameTraceChannel10         = 23,
	ECC_GameTraceChannel11         = 24,
	ECC_GameTraceChannel12         = 25,
	ECC_GameTraceChannel13         = 26,
	ECC_GameTraceChannel14         = 27,
	ECC_GameTraceChannel15         = 28,
	ECC_GameTraceChannel16         = 29,
	ECC_GameTraceChannel17         = 30,
	ECC_GameTraceChannel18         = 31,
	ECC_OverlapAll_Deprecated      = 32,
	ECC_MAX                        = 33
};


// Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8_t
{
	ENetworkSmoothingMode__Disabled = 0,
	ENetworkSmoothingMode__Linear  = 1,
	ENetworkSmoothingMode__Exponential = 2,
	ENetworkSmoothingMode__Replay  = 3,
	ENetworkSmoothingMode__RotationOnly = 4,
	ENetworkSmoothingMode__ENetworkSmoothingMode_MAX = 5
};


// Enum Engine.ETriangleSortAxis
enum class ETriangleSortAxis : uint8_t
{
	TSA_X_Axis                     = 0,
	TSA_Y_Axis                     = 1,
	TSA_Z_Axis                     = 2,
	TSA_MAX                        = 3
};


// Enum Engine.ETriangleSortOption
enum class ETriangleSortOption : uint8_t
{
	TRISORT_None                   = 0,
	TRISORT_CenterRadialDistance   = 1,
	TRISORT_Random                 = 2,
	TRISORT_MergeContiguous        = 3,
	TRISORT_Custom                 = 4,
	TRISORT_CustomLeftRight        = 5,
	TRISORT_MAX                    = 6
};


// Enum Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8_t
{
	Quality_Preview                = 0,
	Quality_Medium                 = 1,
	Quality_High                   = 2,
	Quality_Production             = 3,
	Quality_MAX                    = 4
};


// Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8_t
{
	SAMPLERTYPE_Color              = 0,
	SAMPLERTYPE_Grayscale          = 1,
	SAMPLERTYPE_Alpha              = 2,
	SAMPLERTYPE_Normal             = 3,
	SAMPLERTYPE_Masks              = 4,
	SAMPLERTYPE_DistanceFieldFont  = 5,
	SAMPLERTYPE_LinearColor        = 6,
	SAMPLERTYPE_LinearGrayscale    = 7,
	SAMPLERTYPE_MAX                = 8
};


// Enum Engine.EMaterialTessellationMode
enum class EMaterialTessellationMode : uint8_t
{
	MTM_NoTessellation             = 0,
	MTM_FlatTessellation           = 1,
	MTM_PNTriangles                = 2,
	MTM_MAX                        = 3
};


// Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8_t
{
	MSM_Unlit                      = 0,
	MSM_DefaultLit                 = 1,
	MSM_Subsurface                 = 2,
	MSM_PreintegratedSkin          = 3,
	MSM_ClearCoat                  = 4,
	MSM_SubsurfaceProfile          = 5,
	MSM_TwoSidedFoliage            = 6,
	MSM_Hair                       = 7,
	MSM_Cloth                      = 8,
	MSM_Eye                        = 9,
	MSM_MAX                        = 10
};


// Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8_t
{
	EParticleCollisionMode__SceneDepth = 0,
	EParticleCollisionMode__DistanceField = 1,
	EParticleCollisionMode__HeightBuffer = 2,
	EParticleCollisionMode__EParticleCollisionMode_MAX = 3
};


// Enum Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8_t
{
	ETrailWidthMode_FromCentre     = 0,
	ETrailWidthMode_FromFirst      = 1,
	ETrailWidthMode_FromSecond     = 2,
	ETrailWidthMode_MAX            = 3
};


// Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8_t
{
	EGBufferFormat__Force8BitsPerChannel = 0,
	EGBufferFormat__Default        = 1,
	EGBufferFormat__HighPrecisionNormals = 2,
	EGBufferFormat__Force16BitsPerChannel = 3,
	EGBufferFormat__EGBufferFormat_MAX = 4
};


// Enum Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8_t
{
	SCCM_Overwrite                 = 0,
	SCCM_Additive                  = 1,
	SCCM_Composite                 = 2,
	SCCM_MAX                       = 3
};


// Enum Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8_t
{
	SCS_SceneColorHDR              = 0,
	SCS_SceneColorHDRNoAlpha       = 1,
	SCS_FinalColorLDR              = 2,
	SCS_SceneColorSceneDepth       = 3,
	SCS_SceneDepth                 = 4,
	SCS_DeviceDepth                = 5,
	SCS_Normal                     = 6,
	SCS_BaseColor                  = 7,
	SCS_BRO_SuperSampling          = 8,
	SCS_BRO_Masked                 = 9,
	SCS_MAX                        = 10
};


// Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8_t
{
	ETranslucentSortPolicy__SortByDistance = 0,
	ETranslucentSortPolicy__SortByProjectedZ = 1,
	ETranslucentSortPolicy__SortAlongAxis = 2,
	ETranslucentSortPolicy__ETranslucentSortPolicy_MAX = 3
};


// Enum Engine.ERefractionMode
enum class ERefractionMode : uint8_t
{
	RM_IndexOfRefraction           = 0,
	RM_PixelNormalOffset           = 1,
	RM_MAX                         = 2
};


// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8_t
{
	TLM_VolumetricNonDirectional   = 0,
	TLM_VolumetricDirectional      = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface                    = 4,
	TLM_SurfacePerPixelLighting    = 5,
	TLM_MAX                        = 6
};


// Enum Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8_t
{
	SSM_FromTextureAsset           = 0,
	SSM_Wrap_WorldGroupSettings    = 1,
	SSM_Clamp_WorldGroupSettings   = 2,
	SSM_MAX                        = 3
};


// Enum Engine.EBlendMode
enum class EBlendMode : uint8_t
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_AlphaComposite           = 5,
	BLEND_MAX                      = 6
};


// Enum Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8_t
{
	OCM_Minimum                    = 0,
	OCM_Multiply                   = 1,
	OCM_MAX                        = 2
};


// Enum Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8_t
{
	ILCQ_Off                       = 0,
	ILCQ_Point                     = 1,
	ILCQ_Volume                    = 2,
	ILCQ_MAX                       = 3
};


// Enum Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8_t
{
	SDPG_World                     = 0,
	SDPG_Foreground                = 1,
	SDPG_MAX                       = 2
};


// Enum Engine.EActorMetricsType
enum class EActorMetricsType : uint8_t
{
	METRICS_VERTS                  = 0,
	METRICS_TRIS                   = 1,
	METRICS_SECTIONS               = 2,
	METRICS_MAX                    = 3
};


// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MAX                = 3
};



// Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked    = 0,
	ETrackingStatus__InertialOnly  = 1,
	ETrackingStatus__Tracked       = 2,
	ETrackingStatus__ETrackingStatus_MAX = 3
};



// Enum TslGame.ECastCancelReason
enum class ECastCancelReason : uint8_t
{
	ECastCancelReason__Invalid     = 0,
	ECastCancelReason__CasterAiming = 1,
	ECastCancelReason__CasterArming = 2,
	ECastCancelReason__CasterApnea = 3,
	ECastCancelReason__CasterSprinting = 4,
	ECastCancelReason__CasterJumping = 5,
	ECastCancelReason__CasterFallingLong = 6,
	ECastCancelReason__CasterFiring = 7,
	ECastCancelReason__CasterGroggy = 8,
	ECastCancelReason__CasterGroggyOnZeroTimeCast = 9,
	ECastCancelReason__CasterHipped = 10,
	ECastCancelReason__CasterInvalid = 11,
	ECastCancelReason__CasterNotAlive = 12,
	ECastCancelReason__CasterPickedUpDroppedItem = 13,
	ECastCancelReason__CasterPickedUpItemFromPackage = 14,
	ECastCancelReason__CasterReloading = 15,
	ECastCancelReason__CasterRolling = 16,
	ECastCancelReason__CasterTargeting = 17,
	ECastCancelReason__CasterUnarmAttacking = 18,
	ECastCancelReason__CasterVault = 19,
	ECastCancelReason__CasterStanceInvalid = 20,
	ECastCancelReason__CasterFreefalling = 21,
	ECastCancelReason__CastObjectInvalid = 22,
	ECastCancelReason__CastObjectNotExecutable = 23,
	ECastCancelReason__FailedCasterMovementDistCheckOnClient = 24,
	ECastCancelReason__FailedCasterMovementDistCheckOnServer = 25,
	ECastCancelReason__FailedCasterAndCastObjDistCheckOnClient = 26,
	ECastCancelReason__FailedCasterAndCastObjDistCheckOnServer = 27,
	ECastCancelReason__CharacterBeingRevivedDead = 28,
	ECastCancelReason__ManualCancel = 29,
	ECastCancelReason__NewCastOnClient = 30,
	ECastCancelReason__NewCastOnServer = 31,
	ECastCancelReason__VehicleLanding = 32,
	ECastCancelReason__VehicleSeatChanged = 33,
	ECastCancelReason__VehicleMoving = 34,
	ECastCancelReason__VehicleUpsideDown = 35,
	ECastCancelReason__EmergencyPickupAircraft = 36,
	ECastCancelReason__CasterAttackByZombieAI = 37,
	ECastCancelReason__ECastCancelReason_MAX = 38
};


// Enum TslGame.EPopupButtonID
enum class EPopupButtonID : uint8_t
{
	EPopupButtonID__Cancel_Or_No   = 0,
	EPopupButtonID__Yes_Or_OK      = 1,
	EPopupButtonID__EPopupButtonID_MAX = 2
};


// Enum TslGame.EWeaponAttachmentSlotID
enum class EWeaponAttachmentSlotID : uint8_t
{
	EWeaponAttachmentSlotID__None  = 0,
	EWeaponAttachmentSlotID__Muzzle = 1,
	EWeaponAttachmentSlotID__LowerRail = 2,
	EWeaponAttachmentSlotID__UpperRail = 3,
	EWeaponAttachmentSlotID__Magazine = 4,
	EWeaponAttachmentSlotID__Stock = 5,
	EWeaponAttachmentSlotID__Angled = 6,
	EWeaponAttachmentSlotID__EWeaponAttachmentSlotID_MAX = 7
};


// Enum TslGame.ESystemMessageType
enum class ESystemMessageType : uint8_t
{
	ESystemMessageType__Debug      = 0,
	ESystemMessageType__Notify     = 1,
	ESystemMessageType__Warning    = 2,
	ESystemMessageType__Error      = 3,
	ESystemMessageType__Important  = 4,
	ESystemMessageType__NotifyCommand = 5,
	ESystemMessageType__ESystemMessageType_MAX = 6
};


// Enum TslGame.EOutGamePlatformProvider
enum class EOutGamePlatformProvider : uint8_t
{
	EOutGamePlatformProvider__Unknown = 0,
	EOutGamePlatformProvider__Bro  = 1,
	EOutGamePlatformProvider__PcSteam = 2,
	EOutGamePlatformProvider__PcDmm = 3,
	EOutGamePlatformProvider__PcMailRu = 4,
	EOutGamePlatformProvider__PcKakao = 5,
	EOutGamePlatformProvider__PcTencent = 6,
	EOutGamePlatformProvider__ConsoleXbox = 7,
	EOutGamePlatformProvider__ConsolePsn = 8,
	EOutGamePlatformProvider__PcLiteGarena = 9,
	EOutGamePlatformProvider__PcLiteGlobalAccount = 10,
	EOutGamePlatformProvider__ConsoleClgn = 11,
	EOutGamePlatformProvider__AI   = 12,
	EOutGamePlatformProvider__Max  = 13,
	EOutGamePlatformProvider__EOutGamePlatformProvider_MAX = 14
};


// Enum TslGame.EDamageReason
enum class EDamageReason : uint8_t
{
	EDamageReason__None            = 0,
	EDamageReason__HeadShot        = 1,
	EDamageReason__TorsoShot       = 2,
	EDamageReason__PelvisShot      = 3,
	EDamageReason__ArmShot         = 4,
	EDamageReason__LegShot         = 5,
	EDamageReason__NonSpecific     = 6,
	EDamageReason__Blocked         = 7,
	EDamageReason__EDamageReason_MAX = 8
};


// Enum TslGame.EDamageTypeCategory
enum class EDamageTypeCategory : uint8_t
{
	EDamageTypeCategory__Damage_None = 0,
	EDamageTypeCategory__Damage_Instant = 1,
	EDamageTypeCategory__Damage_Gun = 2,
	EDamageTypeCategory__Damage_Melee = 3,
	EDamageTypeCategory__Damage_Punch = 4,
	EDamageTypeCategory__Damage_ZombiePunch = 5,
	EDamageTypeCategory__Damage_Groggy = 6,
	EDamageTypeCategory__Damage_BlueZone = 7,
	EDamageTypeCategory__Damage_VehicleHit = 8,
	EDamageTypeCategory__Damage_VehicleCrashHit = 9,
	EDamageTypeCategory__Damage_Molotov = 10,
	EDamageTypeCategory__Damage_Explosion = 11,
	EDamageTypeCategory__Damage_Explosion_Grenade = 12,
	EDamageTypeCategory__Damage_Explosion_RedZone = 13,
	EDamageTypeCategory__Damage_Explosion_Vehicle = 14,
	EDamageTypeCategory__Damage_Instant_Fall = 15,
	EDamageTypeCategory__Damage_Drown = 16,
	EDamageTypeCategory__Damage_BleedOut = 17,
	EDamageTypeCategory__Damage_Explosion_JerryCan = 18,
	EDamageTypeCategory__Damage_ZombieBuff = 19,
	EDamageTypeCategory__Damage_CPPWinExit = 20,
	EDamageTypeCategory__Damage_MeleeThrow = 21,
	EDamageTypeCategory__Damage_Explosion_C4 = 22,
	EDamageTypeCategory__Damage_Explosion_StickyBomb = 23,
	EDamageTypeCategory__Damage_Explosion_Breach = 24,
	EDamageTypeCategory__Damage_Explosion_PanzerFaustWarhead = 25,
	EDamageTypeCategory__Damage_Explosion_PanzerFaustWarheadVehicleArmorPenetration = 26,
	EDamageTypeCategory__Damage_Explosion_PanzerFaustBackBlast = 27,
	EDamageTypeCategory__Damage_Explosion_BlackZone = 28,
	EDamageTypeCategory__Damage_Explosion_Meteor = 29,
	EDamageTypeCategory__Damage_TrainHit = 30,
	EDamageTypeCategory__Damage_Explosion_PropaneTank = 31,
	EDamageTypeCategory__Damage_LootTruckHit = 32,
	EDamageTypeCategory__Damage_Explosion_LootTruck = 33,
	EDamageTypeCategory__Damage_ShipHit = 34,
	EDamageTypeCategory__Damage_Lava = 35,
	EDamageTypeCategory__Damage_KillTruckHit = 36,
	EDamageTypeCategory__Damage_KillTruckTurret = 37,
	EDamageTypeCategory__Damage_HelicopterHit = 38,
	EDamageTypeCategory__Damage_Explosion_Aircraft = 39,
	EDamageTypeCategory__Damage_BlueZoneGrenade = 40,
	EDamageTypeCategory__Damage_MAX = 41
};


// Enum TslGame.EMatchResultFlowType
enum class EMatchResultFlowType : uint8_t
{
	EMatchResultFlowType__CelebrationResult = 0,
	EMatchResultFlowType__EndResult = 1,
	EMatchResultFlowType__EMatchResultFlowType_MAX = 2
};


// Enum TslGame.ESkydiveState
enum class ESkydiveState : uint8_t
{
	ESkydiveState__Skydive_None    = 0,
	ESkydiveState__Skydive_Freefall = 1,
	ESkydiveState__Skydive_ParachuteDeploying = 2,
	ESkydiveState__Skydive_ParachuteDeployed = 3,
	ESkydiveState__Skydive_ParachuteCollapsing = 4,
	ESkydiveState__Skydive_MAX     = 5
};


// Enum TslGame.EMarkerType
enum class EMarkerType : uint8_t
{
	EMarkerType__Normal            = 0,
	EMarkerType__Attack            = 1,
	EMarkerType__Danger            = 2,
	EMarkerType__Defend            = 3,
	EMarkerType__Loot              = 4,
	EMarkerType__Regroup           = 5,
	EMarkerType__Vehicle           = 6,
	EMarkerType__EMarkerType_MAX   = 7
};


// Enum TslGame.EPlatoonSupportRequestEventType
enum class EPlatoonSupportRequestEventType : uint8_t
{
	EPlatoonSupportRequestEventType__Start = 0,
	EPlatoonSupportRequestEventType__Interactible = 1,
	EPlatoonSupportRequestEventType__Finish = 2,
	EPlatoonSupportRequestEventType__EPlatoonSupportRequestEventType_MAX = 3
};


// Enum TslGame.EPlatoonCarePackageType
enum class EPlatoonCarePackageType : uint8_t
{
	EPlatoonCarePackageType__NotDesignated = 0,
	EPlatoonCarePackageType__WeaponPackage = 1,
	EPlatoonCarePackageType__HealingPackage = 2,
	EPlatoonCarePackageType__EPlatoonCarePackageType_MAX = 3
};


// Enum TslGame.EBreathType
enum class EBreathType : uint8_t
{
	EBreathType__Apnea             = 0,
	EBreathType__ADS               = 1,
	EBreathType__EBreathType_MAX   = 2
};


// Enum TslGame.ERequestPartyState
enum class ERequestPartyState : uint8_t
{
	ERequestPartyState__Wait       = 0,
	ERequestPartyState__Accept     = 1,
	ERequestPartyState__Decline    = 2,
	ERequestPartyState__ERequestPartyState_MAX = 3
};


// Enum TslGame.EBlueBlockerState
enum class EBlueBlockerState : uint8_t
{
	EBlueBlockerState__Show        = 0,
	EBlueBlockerState__Looping     = 1,
	EBlueBlockerState__Hide        = 2,
	EBlueBlockerState__Hidden      = 3,
	EBlueBlockerState__EBlueBlockerState_MAX = 4
};


// Enum TslGame.ETargetingType
enum class ETargetingType : uint8_t
{
	ETargetingType__Targeting_None = 0,
	ETargetingType__Targeting_Aiming = 1,
	ETargetingType__Targeting_Scoping = 2,
	ETargetingType__Targeting_MAX  = 3
};


// Enum TslGame.ETirePunctureReason
enum class ETirePunctureReason : uint8_t
{
	ETirePunctureReason__Shot      = 0,
	ETirePunctureReason__Environment = 1,
	ETirePunctureReason__Explosion = 2,
	ETirePunctureReason__PanzerFaustExplosion = 3,
	ETirePunctureReason__Other     = 4,
	ETirePunctureReason__ETirePunctureReason_MAX = 5
};


// Enum TslGame.EEquipSlotID
enum class EEquipSlotID : uint8_t
{
	EEquipSlotID__Head             = 0,
	EEquipSlotID__Hat              = 1,
	EEquipSlotID__Eyes             = 2,
	EEquipSlotID__Mask             = 3,
	EEquipSlotID__Torso            = 4,
	EEquipSlotID__TorsoArmor       = 5,
	EEquipSlotID__Outer            = 6,
	EEquipSlotID__Backpack         = 7,
	EEquipSlotID__Hands            = 8,
	EEquipSlotID__Legs             = 9,
	EEquipSlotID__Feet             = 10,
	EEquipSlotID__Belt             = 11,
	EEquipSlotID__WeaponPrimary    = 12,
	EEquipSlotID__WeaponSecondary  = 13,
	EEquipSlotID__WeaponMelee      = 14,
	EEquipSlotID__WeaponThrowable  = 15,
	EEquipSlotID__MaxOrNone        = 16,
	EEquipSlotID__EEquipSlotID_MAX = 17
};


// Enum TslGame.ERadioMessageEmPickupStage
enum class ERadioMessageEmPickupStage : uint8_t
{
	ERadioMessageEmPickupStage__Deployed = 0,
	ERadioMessageEmPickupStage__PlaneEnroute = 1,
	ERadioMessageEmPickupStage__ArrivalIn30s = 2,
	ERadioMessageEmPickupStage__ArrivalIn10s = 3,
	ERadioMessageEmPickupStage__ArrivalIn5s = 4,
	ERadioMessageEmPickupStage__CollisionWarning = 5,
	ERadioMessageEmPickupStage__PlaneNotAvailable = 6,
	ERadioMessageEmPickupStage__ERadioMessageEmPickupStage_MAX = 7
};


// Enum TslGame.ETslOvercastAction
enum class ETslOvercastAction : uint8_t
{
	ETslOvercastAction__Initialized = 0,
	ETslOvercastAction__Prolonged  = 1,
	ETslOvercastAction__CreateThunder = 2,
	ETslOvercastAction__ETslOvercastAction_MAX = 3
};


// Enum TslGame.EBeginningState
enum class EBeginningState : uint8_t
{
	EBeginningState__Invalid       = 0,
	EBeginningState__Normal        = 1,
	EBeginningState__StartIsland   = 2,
	EBeginningState__Airplane      = 3,
	EBeginningState__Skydiving     = 4,
	EBeginningState__Parachuting   = 5,
	EBeginningState__EBeginningState_MAX = 6
};


// Enum TslGame.EServerStatType
enum class EServerStatType : uint8_t
{
	EServerStatType__UE            = 0,
	EServerStatType__NET           = 1,
	EServerStatType__FRAMEPRO      = 2,
	EServerStatType__EServerStatType_MAX = 3
};


// Enum TslGame.EQualityType
enum class EQualityType : uint8_t
{
	EQualityType__EMainQuality     = 0,
	EQualityType__EViewDistanceQuality = 1,
	EQualityType__EShadowQuality   = 2,
	EQualityType__EAntiAliasingQuality = 3,
	EQualityType__ETextureQuality  = 4,
	EQualityType__EVisualEffectQuality = 5,
	EQualityType__EPostProcessingQuality = 6,
	EQualityType__EFoliageQuality  = 7,
	EQualityType__EQualityType_MAX = 8
};


// Enum TslGame.EReadyToPlayState
enum class EReadyToPlayState : uint8_t
{
	EReadyToPlayState__AllFinished = 0,
	EReadyToPlayState__OnPreLoadMap = 1,
	EReadyToPlayState__OnPostLoadMap = 2,
	EReadyToPlayState__CheckMapLoadFinished = 3,
	EReadyToPlayState__NotMapFullyLoaded = 4,
	EReadyToPlayState__CheckPreloadingMap = 5,
	EReadyToPlayState__EReadyToPlayState_MAX = 6
};


// Enum TslGame.EDistanceBasedEvent
enum class EDistanceBasedEvent : uint8_t
{
	EDistanceBasedEvent__Undefined = 0,
	EDistanceBasedEvent__Bullet_Hitted_LivingThings = 1,
	EDistanceBasedEvent__Bullet_Hitted_Others = 2,
	EDistanceBasedEvent__Weapon_Gun_Firing = 3,
	EDistanceBasedEvent__Weapon_Grenade_Bounce = 4,
	EDistanceBasedEvent__Weapon_Grenade_Explosion = 5,
	EDistanceBasedEvent__Weapon_Grenade_ExplosionSound = 6,
	EDistanceBasedEvent__Vehicle_Exhausting = 7,
	EDistanceBasedEvent__Vehicle_Crash = 8,
	EDistanceBasedEvent__Character_FootStep = 9,
	EDistanceBasedEvent__Character_Landing = 10,
	EDistanceBasedEvent__MAX       = 11,
	EDistanceBasedEvent__EDistanceBasedEvent_MAX = 12
};


// Enum TslGame.EArenaState
enum class EArenaState : uint8_t
{
	EArenaState__Idle              = 0,
	EArenaState__Active            = 1,
	EArenaState__Finished          = 2,
	EArenaState__EArenaState_MAX   = 3
};


// Enum TslGame.ERankType
enum class ERankType : uint8_t
{
	ERankType__None                = 0,
	ERankType__InvalidSMS          = 1,
	ERankType__Penalty             = 2,
	ERankType__Restricted          = 3,
	ERankType__Unranked            = 4,
	ERankType__Bronze              = 5,
	ERankType__Silver              = 6,
	ERankType__Gold                = 7,
	ERankType__Platinum            = 8,
	ERankType__Diamond             = 9,
	ERankType__Master              = 10,
	ERankType__ERankType_MAX       = 11
};


// Enum TslGame.EThrownWeaponType
enum class EThrownWeaponType : uint8_t
{
	EThrownWeaponType__Thrown_Grenade = 0,
	EThrownWeaponType__Thrown_Molotov = 1,
	EThrownWeaponType__Thrown_Melee = 2,
	EThrownWeaponType__Thrown_Trap = 3,
	EThrownWeaponType__Thrown_StickyBomb = 4,
	EThrownWeaponType__Thrown_C4   = 5,
	EThrownWeaponType__Thrown_JerryCan = 6,
	EThrownWeaponType__Thrown_BZ_Grenade = 7,
	EThrownWeaponType__Thrown_Other = 8,
	EThrownWeaponType__Thrown_MAX  = 9
};


// Enum TslGame.EHitDirection
enum class EHitDirection : uint8_t
{
	EHitDirection__Hit_Front       = 0,
	EHitDirection__Hit_Back        = 1,
	EHitDirection__Hit_Left        = 2,
	EHitDirection__Hit_Right       = 3,
	EHitDirection__Hit_MAX         = 4
};


// Enum TslGame.EPowerUpType
enum class EPowerUpType : uint8_t
{
	PowerUp_None                   = 0,
	Powerup_Bandage                = 1,
	PowerUp_FirstAid               = 2,
	Powerup_Medkit                 = 3,
	PowerUp_EnergyDrink            = 4,
	Powerup_Painkillers            = 5,
	PowerUp_Adrenaline             = 6,
	PowerUp_MAX                    = 7,
	EPowerUpType_MAX               = 8
};


// Enum TslGame.ECastAnim
enum class ECastAnim : uint8_t
{
	ECastAnim__None                = 0,
	ECastAnim__Bandage             = 1,
	ECastAnim__FirstAid            = 2,
	ECastAnim__Medkit              = 3,
	ECastAnim__EnergyDrink         = 4,
	ECastAnim__Painkiller          = 5,
	ECastAnim__Adrenaline          = 6,
	ECastAnim__Door                = 7,
	ECastAnim__Battery             = 8,
	ECastAnim__Crafting            = 9,
	ECastAnim__SuperDrink          = 10,
	ECastAnim__Key                 = 11,
	ECastAnim__EmergencyPickup     = 12,
	ECastAnim__SelfRevive          = 13,
	ECastAnim__ECastAnim_MAX       = 14
};


// Enum TslGame.ECharacterNegativeEffects
enum class ECharacterNegativeEffects : uint8_t
{
	ECharacterNegativeEffects__Blind = 0,
	ECharacterNegativeEffects__Burning = 1,
	ECharacterNegativeEffects__Total = 2,
	ECharacterNegativeEffects__ECharacterNegativeEffects_MAX = 3
};


// Enum TslGame.ETslAIPlayerType
enum class ETslAIPlayerType : uint8_t
{
	ETslAIPlayerType__HumanPlayer  = 0,
	ETslAIPlayerType__AITypeNone   = 1,
	ETslAIPlayerType__CommonAI     = 2,
	ETslAIPlayerType__PillarAI     = 3,
	ETslAIPlayerType__ZombieAI     = 4,
	ETslAIPlayerType__ETslAIPlayerType_MAX = 5
};


// Enum TslGame.ESubjectToReport
enum class ESubjectToReport : uint8_t
{
	ESubjectToReport__None         = 0,
	ESubjectToReport__Killer       = 1,
	ESubjectToReport__Spectating_Player = 2,
	ESubjectToReport__Replay_Player = 3,
	ESubjectToReport__Team_Member  = 4,
	ESubjectToReport__OtherTeam_Members = 5,
	ESubjectToReport__ESubjectToReport_MAX = 6
};


// Enum TslGame.EWelcomeState
enum class EWelcomeState : uint8_t
{
	EWelcomeState__CopyrightAndWarning = 0,
	EWelcomeState__PressAKey       = 1,
	EWelcomeState__NowLoading      = 2,
	EWelcomeState__EWelcomeState_MAX = 3
};


// Enum TslGame.EAIPolyType
enum class EAIPolyType : uint8_t
{
	EAIPolyType__AIPoly_None       = 0,
	EAIPolyType__AIPoly_Attack     = 1,
	EAIPolyType__AIPoly_Moving     = 2,
	EAIPolyType__AIPoly_Moving_Directly = 3,
	EAIPolyType__AIPoly_Jump       = 4,
	EAIPolyType__AIPoly_MovingTargetPos = 5,
	EAIPolyType__AIPoly_Max        = 6
};


// Enum TslGame.ERoamingActionType
enum class ERoamingActionType : uint8_t
{
	ERoamingActionType__RAction_MoveToCenter = 0,
	ERoamingActionType__RAction_OcclusionCrouch = 1,
	ERoamingActionType__RAction_OcclusionProne = 2,
	ERoamingActionType__RActoin_Max = 3,
	ERoamingActionType__ERoamingActionType_MAX = 4
};


// Enum TslGame.EAIODealDoor
enum class EAIODealDoor : uint8_t
{
	EAIODealDoor__Deal_None        = 0,
	EAIODealDoor__Deal_Wait        = 1,
	EAIODealDoor__Deal_MAX         = 2
};


// Enum TslGame.ESurviveWeaponPropSlot
enum class ESurviveWeaponPropSlot : uint8_t
{
	ESurviveWeaponPropSlot__SWPS_MainShootWeapon1 = 0,
	ESurviveWeaponPropSlot__SWPS_MainShootWeapon2 = 1,
	ESurviveWeaponPropSlot__SWPS_SubShootWeapon = 2,
	ESurviveWeaponPropSlot__SWPS_MeleeWeapon = 3,
	ESurviveWeaponPropSlot__SWPS_HandProp = 4,
	ESurviveWeaponPropSlot__SWPS_Max = 5
};


// Enum TslGame.EWeatherStatusType
enum class EWeatherStatusType : uint8_t
{
	EWeatherStatusType__EWeatherStatusType_None = 0,
	EWeatherStatusType__EWeatherStatusType_SunnyDay = 1,
	EWeatherStatusType__EWeatherStatusType_Night = 2,
	EWeatherStatusType__EWeatherStatusType_Fog = 3,
	EWeatherStatusType__EWeatherStatusType_Rain = 4,
	EWeatherStatusType__EWeatherStatusType_Snow = 5,
	EWeatherStatusType__EWeatherStatusType_Blizzard = 6,
	EWeatherStatusType__EWeatherStatusType_MAX = 7
};


// Enum TslGame.UTPickerTargetType
enum class EUTPickerTargetType : uint8_t
{
	UTPickerTargetType__PTT_FRIEND = 0,
	UTPickerTargetType__PTT_ENEMY  = 1,
	UTPickerTargetType__PTT_ALL    = 2,
	UTPickerTargetType__PTT_Self   = 3,
	UTPickerTargetType__PTT_MAX    = 4
};


// Enum TslGame.ExtraPlayerLiveState
enum class ExtraPlayerLiveState : uint8_t
{
	ExtraPlayerLiveState__InDefault = 0,
	ExtraPlayerLiveState__InPlane  = 1,
	ExtraPlayerLiveState__InParachute = 2,
	ExtraPlayerLiveState__InVehicle = 3,
	ExtraPlayerLiveState__InDying  = 4,
	ExtraPlayerLiveState__InDied   = 5,
	ExtraPlayerLiveState__Offline  = 6,
	ExtraPlayerLiveState__ExtraPlayerLiveState_MAX = 7
};


// Enum TslGame.EAIMoveType
enum class EAIMoveType : uint8_t
{
	EAIMoveType__StraightMove      = 0,
	EAIMoveType__CurveMove         = 1,
	EAIMoveType__EAIMoveType_MAX   = 2
};


// Enum TslGame.EAIWeaponShootType
enum class EAIWeaponShootType : uint8_t
{
	EAIWeaponShootType__SingleShot = 0,
	EAIWeaponShootType__Auto       = 1,
	EAIWeaponShootType__EAIWeaponShootType_MAX = 2
};


// Enum TslGame.EAINewFocusPriority
enum class EAINewFocusPriority : uint8_t
{
	EAINewFocusPriority__Default   = 0,
	EAINewFocusPriority__Move      = 1,
	EAINewFocusPriority__Gameplay  = 2,
	EAINewFocusPriority__EAINewFocusPriority_MAX = 3
};


// Enum TslGame.EAIMovePose
enum class EAIMovePose : uint8_t
{
	EAIMovePose__Walk              = 0,
	EAIMovePose__Run               = 1,
	EAIMovePose__CrouchSprint      = 2,
	EAIMovePose__KeepCurrentPose   = 3,
	EAIMovePose__EAIMovePose_MAX   = 4
};


// Enum TslGame.EAIPoseState
enum class EAIPoseState : uint8_t
{
	EAIPoseState__Stand            = 0,
	EAIPoseState__Crouch           = 1,
	EAIPoseState__Prone            = 2,
	EAIPoseState__Jump             = 3,
	EAIPoseState__Reload           = 4,
	EAIPoseState__UnArmed          = 5,
	EAIPoseState__EAIPoseState_MAX = 6
};


// Enum TslGame.EAITriggerAttrType
enum class EAITriggerAttrType : uint8_t
{
	EAITriggerAttrType__None       = 0,
	EAITriggerAttrType__Health     = 1,
	EAITriggerAttrType__Energy     = 2,
	EAITriggerAttrType__EAITriggerAttrType_MAX = 3
};


// Enum TslGame.EAIAttrCompareType
enum class EAIAttrCompareType : uint8_t
{
	EAIAttrCompareType__None       = 0,
	EAIAttrCompareType__Great      = 1,
	EAIAttrCompareType__Less       = 2,
	EAIAttrCompareType__EAIAttrCompareType_MAX = 3
};


// Enum TslGame.EAIEquipSpawnItemType
enum class EAIEquipSpawnItemType : uint8_t
{
	EAIEquipSpawnItemType__Shoot_Weap = 0,
	EAIEquipSpawnItemType__Backpack = 1,
	EAIEquipSpawnItemType__other   = 2,
	EAIEquipSpawnItemType__EAIEquipSpawnItemType_MAX = 3
};


// Enum TslGame.EHealingItemType
enum class EHealingItemType : uint8_t
{
	EHealingItemType__HealItem     = 0,
	EHealingItemType__BoostItem    = 1,
	EHealingItemType__EHealingItemType_MAX = 2
};


// Enum TslGame.EAIMapName
enum class EAIMapName : uint8_t
{
	EAIMapName__Baltic             = 0,
	EAIMapName__Desert             = 1,
	EAIMapName__Sanhok             = 2,
	EAIMapName__DihorOtok          = 3,
	EAIMapName__Summerland         = 4,
	EAIMapName__Paramo             = 5,
	EAIMapName__Tiger              = 6,
	EAIMapName__Other              = 7,
	EAIMapName__EAIMapName_MAX     = 8
};


// Enum TslGame.ETeamModeType
enum class ETeamModeType : uint8_t
{
	ETeamModeType__Solo            = 0,
	ETeamModeType__Duo             = 1,
	ETeamModeType__Squad           = 2,
	ETeamModeType__ETeamModeType_MAX = 3
};


// Enum TslGame.EBattleState
enum class EBattleState : uint8_t
{
	EBattleState__NoBattle         = 0,
	EBattleState__FirstReaction    = 1,
	EBattleState__InBattle         = 2,
	EBattleState__InConfrontation  = 3,
	EBattleState__LongTimeInBattle = 4,
	EBattleState__EBattleState_MAX = 5
};


// Enum TslGame.EAICommand
enum class EAICommand : uint8_t
{
	EAICommand__None               = 0,
	EAICommand__Moving             = 1,
	EAICommand__Battle             = 2,
	EAICommand__EAICommand_MAX     = 3
};


// Enum TslGame.EAIActionState
enum class EAIActionState : uint8_t
{
	EAIActionState__Idle           = 0,
	EAIActionState__Battle         = 1,
	EAIActionState__BattleMoving   = 2,
	EAIActionState__Healing        = 3,
	EAIActionState__Farming        = 4,
	EAIActionState__Moving         = 5,
	EAIActionState__Swimming       = 6,
	EAIActionState__EAIActionState_MAX = 7
};


// Enum TslGame.EAIAliveState
enum class EAIAliveState : uint8_t
{
	EAIAliveState__Alive           = 0,
	EAIAliveState__Groggy          = 1,
	EAIAliveState__Dead            = 2,
	EAIAliveState__EAIAliveState_MAX = 3
};


// Enum TslGame.EPickupItemStatus
enum class EPickupItemStatus : uint8_t
{
	EPickupItemStatus__NeedWeapon  = 0,
	EPickupItemStatus__NeedBaseEquip = 1,
	EPickupItemStatus__NeedOneMoreWeapon = 2,
	EPickupItemStatus__NeedHealItem = 3,
	EPickupItemStatus__NeedBoostItem = 4,
	EPickupItemStatus__NeedThrowableItem = 5,
	EPickupItemStatus__NeedPan     = 6,
	EPickupItemStatus__NeedNoItem  = 7,
	EPickupItemStatus__EPickupItemStatus_MAX = 8
};


// Enum TslGame.EIntoCircleLevel
enum class EIntoCircleLevel : uint8_t
{
	EIntoCircleLevel__AlreadyInWhite = 0,
	EIntoCircleLevel__NearWhite    = 1,
	EIntoCircleLevel__MiddleWhite  = 2,
	EIntoCircleLevel__ReachableWhite = 3,
	EIntoCircleLevel__UnreachableWhite = 4,
	EIntoCircleLevel__EIntoCircleLevel_MAX = 5
};


// Enum TslGame.EValueCompareFunc
enum class EValueCompareFunc : uint8_t
{
	EValueCompareFunc__MoreThan    = 0,
	EValueCompareFunc__MoreThanOrEqual = 1,
	EValueCompareFunc__LessThan    = 2,
	EValueCompareFunc__LessThanOrEqual = 3,
	EValueCompareFunc__Equal       = 4,
	EValueCompareFunc__EValueCompareFunc_MAX = 5
};


// Enum TslGame.EAIParameter
enum class EAIParameter : uint8_t
{
	EAIParameter__None             = 0,
	EAIParameter__Offensive        = 1,
	EAIParameter__PrepareType      = 2,
	EAIParameter__EAIParameter_MAX = 3
};


// Enum TslGame.EPrepareType
enum class EPrepareType : uint8_t
{
	EPrepareType__StopMovement     = 0,
	EPrepareType__MoveRandomLoc    = 1,
	EPrepareType__ThrowToy         = 2,
	EPrepareType__TypeEnd          = 3,
	EPrepareType__EPrepareType_MAX = 4
};


// Enum TslGame.EAIBehaviors
enum class EAIBehaviors : uint8_t
{
	EAIBehaviors__Normal           = 0,
	EAIBehaviors__Chasing          = 1,
	EAIBehaviors__Runaway          = 2,
	EAIBehaviors__EAIBehaviors_MAX = 3
};


// Enum TslGame.ERightMoveDirection
enum class ERightMoveDirection : uint8_t
{
	ERightMoveDirection__Left      = 0,
	ERightMoveDirection__Right     = 1,
	ERightMoveDirection__Stop      = 2,
	ERightMoveDirection__ERightMoveDirection_MAX = 3
};


// Enum TslGame.EForwardMoveDirection
enum class EForwardMoveDirection : uint8_t
{
	EForwardMoveDirection__Forward = 0,
	EForwardMoveDirection__Backward = 1,
	EForwardMoveDirection__Stop    = 2,
	EForwardMoveDirection__EForwardMoveDirection_MAX = 3
};


// Enum TslGame.EUltronWithCircle
enum class EUltronWithCircle : uint8_t
{
	EUltronWithCircle__InWhiteCircle = 0,
	EUltronWithCircle__InBlueCircle = 1,
	EUltronWithCircle__OutBlueCircle = 2,
	EUltronWithCircle__MaxNum      = 3,
	EUltronWithCircle__EUltronWithCircle_MAX = 4
};


// Enum TslGame.EComparisonTargetCircle
enum class EComparisonTargetCircle : uint8_t
{
	EComparisonTargetCircle__WhiteCircle = 0,
	EComparisonTargetCircle__BlueCircle = 1,
	EComparisonTargetCircle__EComparisonTargetCircle_MAX = 2
};


// Enum TslGame.ETurnDirection
enum class ETurnDirection : uint8_t
{
	ETurnDirection__Left           = 0,
	ETurnDirection__Right          = 1,
	ETurnDirection__Stop           = 2,
	ETurnDirection__ETurnDirection_MAX = 3
};


// Enum TslGame.EComparisonTarget
enum class EComparisonTarget : uint8_t
{
	EComparisonTarget__Value       = 0,
	EComparisonTarget__BBKey       = 1,
	EComparisonTarget__EComparisonTarget_MAX = 2
};


// Enum TslGame.EInfoPointType
enum class EInfoPointType : uint8_t
{
	EInfoPointType__All            = 0,
	EInfoPointType__InHouse        = 1,
	EInfoPointType__OutHouse       = 2,
	EInfoPointType__EInfoPointType_MAX = 3
};


// Enum TslGame.ETargetLocation
enum class ETargetLocation : uint8_t
{
	ETargetLocation__WhiteCircle   = 0,
	ETargetLocation__OtherLocation = 1,
	ETargetLocation__ETargetLocation_MAX = 2
};


// Enum TslGame.ETestMoveDirection
enum class ETestMoveDirection : uint8_t
{
	ETestMoveDirection__Front      = 0,
	ETestMoveDirection__Back       = 1,
	ETestMoveDirection__Left       = 2,
	ETestMoveDirection__Right      = 3,
	ETestMoveDirection__ETestMoveDirection_MAX = 4
};


// Enum TslGame.EThownWeapon_AI
enum class EThownWeapon_AI : uint8_t
{
	EThownWeapon_AI__GRENADE       = 0,
	EThownWeapon_AI__MOLOTOV       = 1,
	EThownWeapon_AI__SMOKEBOMB     = 2,
	EThownWeapon_AI__FLASHBANG     = 3,
	EThownWeapon_AI__EThownWeapon_MAX = 4
};


// Enum TslGame.EThrowablePoseState_AI
enum class EThrowablePoseState_AI : uint8_t
{
	EThrowablePoseState_AI__Idle   = 0,
	EThrowablePoseState_AI__PinOffStart = 1,
	EThrowablePoseState_AI__Cooking = 2,
	EThrowablePoseState_AI__WaitForThrow = 3,
	EThrowablePoseState_AI__Throwing = 4,
	EThrowablePoseState_AI__EThrowablePoseState_MAX = 5
};


// Enum TslGame.ERoamingMoveType
enum class ERoamingMoveType : uint8_t
{
	ERoamingMoveType__RMoveCenter  = 0,
	ERoamingMoveType__RMoveMax     = 1,
	ERoamingMoveType__ERoamingMoveType_MAX = 2
};


// Enum TslGame.EModifyBlackboardDataValueType
enum class EModifyBlackboardDataValueType : uint8_t
{
	EModifyBlackboardDataValueType__Int = 0,
	EModifyBlackboardDataValueType__Float = 1,
	EModifyBlackboardDataValueType__Bool = 2,
	EModifyBlackboardDataValueType__String = 3,
	EModifyBlackboardDataValueType__Object = 4,
	EModifyBlackboardDataValueType__Vector3 = 5,
	EModifyBlackboardDataValueType__EModifyBlackboardDataValueType_MAX = 6
};


// Enum TslGame.EThownWeapon
enum class EThownWeapon : uint8_t
{
	EThownWeapon__GRENADE          = 0,
	EThownWeapon__MOLOTOV          = 1,
	EThownWeapon__SMOKEBOMB        = 2,
	EThownWeapon__FLASHBANG        = 3,
	EThownWeapon__Toy              = 4,
	EThownWeapon__EThownWeapon_MAX = 5
};


// Enum TslGame.EThrowablePoseState
enum class EThrowablePoseState : uint8_t
{
	EThrowablePoseState__Idle      = 0,
	EThrowablePoseState__PinOffStart = 1,
	EThrowablePoseState__Cooking   = 2,
	EThrowablePoseState__WaitForThrow = 3,
	EThrowablePoseState__Throwing  = 4,
	EThrowablePoseState__EThrowablePoseState_MAX = 5
};


// Enum TslGame.EBoosterItem
enum class EBoosterItem : uint8_t
{
	EBoosterItem__ADRENALINE       = 0,
	EBoosterItem__PAINKILLER       = 1,
	EBoosterItem__ENERGYDRINK      = 2,
	EBoosterItem__EBoosterItem_MAX = 3
};


// Enum TslGame.EFlareDeploymentType
enum class EFlareDeploymentType : uint8_t
{
	EFlareDeploymentType__Deploy_None = 0,
	EFlareDeploymentType__Deploy_InWhite = 1,
	EFlareDeploymentType__Deploy_InBlue = 2,
	EFlareDeploymentType__Deploy_Outside = 3,
	EFlareDeploymentType__Deploy_MAX = 4
};


// Enum TslGame.ECustomCarepackageState
enum class ECustomCarepackageState : uint8_t
{
	ECustomCarepackageState__Transporting = 0,
	ECustomCarepackageState__Falling = 1,
	ECustomCarepackageState__Landing = 2,
	ECustomCarepackageState__ECustomCarepackageState_MAX = 3
};


// Enum TslGame.EWeaponReloadMethod
enum class EWeaponReloadMethod : uint8_t
{
	EWeaponReloadMethod__Magazine  = 0,
	EWeaponReloadMethod__OneByOne  = 1,
	EWeaponReloadMethod__OneByOneAndClip = 2,
	EWeaponReloadMethod__EWeaponReloadMethod_MAX = 3
};


// Enum TslGame.EDecoyFiringState
enum class EDecoyFiringState : uint8_t
{
	EDecoyFiringState__Firing      = 0,
	EDecoyFiringState__BetweenShots = 1,
	EDecoyFiringState__BetweenSequences = 2,
	EDecoyFiringState__EDecoyFiringState_MAX = 3
};


// Enum TslGame.EDecoyState
enum class EDecoyState : uint8_t
{
	EDecoyState__Uninitialized     = 0,
	EDecoyState__Cooking           = 1,
	EDecoyState__DelayedFiring     = 2,
	EDecoyState__Firing            = 3,
	EDecoyState__Reloading         = 4,
	EDecoyState__DelayedEnding     = 5,
	EDecoyState__EndOfLife         = 6,
	EDecoyState__EDecoyState_MAX   = 7
};


// Enum TslGame.EDoorState
enum class EDoorState : uint8_t
{
	EDoorState__Closed             = 0,
	EDoorState__Closing            = 1,
	EDoorState__Opened             = 2,
	EDoorState__Opening            = 3,
	EDoorState__EDoorState_MAX     = 4
};


// Enum TslGame.EDestrucibleSurfaceSourceType
enum class EDestrucibleSurfaceSourceType : uint8_t
{
	EDestrucibleSurfaceSourceType__Unknown = 0,
	EDestrucibleSurfaceSourceType__Projectile = 1,
	EDestrucibleSurfaceSourceType__Grenade = 2,
	EDestrucibleSurfaceSourceType__Warhead = 3,
	EDestrucibleSurfaceSourceType__Slashing = 4,
	EDestrucibleSurfaceSourceType__EDestrucibleSurfaceSourceType_MAX = 5
};


// Enum TslGame.ETslRedeployPlayerState
enum class ETslRedeployPlayerState : uint8_t
{
	ETslRedeployPlayerState__None  = 0,
	ETslRedeployPlayerState__Initialized = 1,
	ETslRedeployPlayerState__RespawnTarget = 2,
	ETslRedeployPlayerState__ReadyToFight = 3,
	ETslRedeployPlayerState__Fighting = 4,
	ETslRedeployPlayerState__Dead  = 5,
	ETslRedeployPlayerState__Survived = 6,
	ETslRedeployPlayerState__Redeployed = 7,
	ETslRedeployPlayerState__ETslRedeployPlayerState_MAX = 8
};


// Enum TslGame.EWhiteZoneShape
enum class EWhiteZoneShape : uint8_t
{
	EWhiteZoneShape__None          = 0,
	EWhiteZoneShape__Circle        = 1,
	EWhiteZoneShape__EWhiteZoneShape_MAX = 2
};


// Enum TslGame.EEmPickupAircraftStatus
enum class EEmPickupAircraftStatus : uint8_t
{
	EEmPickupAircraftStatus__Available = 0,
	EEmPickupAircraftStatus__InvalidPhase_Early = 1,
	EEmPickupAircraftStatus__InvalidPhase_Late = 2,
	EEmPickupAircraftStatus__QueueFull = 3,
	EEmPickupAircraftStatus__Disabled = 4,
	EEmPickupAircraftStatus__EEmPickupAircraftStatus_MAX = 5
};


// Enum TslGame.EFExplosivePropDataType
enum class EFExplosivePropDataType : uint8_t
{
	EFExplosivePropDataType__Default = 0,
	EFExplosivePropDataType__PropaneTank = 1,
	EFExplosivePropDataType__SmallTank = 2,
	EFExplosivePropDataType__FutureUse = 3,
	EFExplosivePropDataType__EFExplosivePropDataType_MAX = 4
};


// Enum TslGame.EMasteryItemType
enum class EMasteryItemType : uint8_t
{
	EMasteryItemType__Charm        = 0,
	EMasteryItemType__Mesh         = 1,
	EMasteryItemType__EMasteryItemType_MAX = 2
};


// Enum TslGame.EFlashbangDebuffCurveValueTypes
enum class EFlashbangDebuffCurveValueTypes : uint8_t
{
	EFlashbangDebuffCurveValueTypes__Blindness_Duration_Direct = 0,
	EFlashbangDebuffCurveValueTypes__Blindness_Duration_Indirect = 1,
	EFlashbangDebuffCurveValueTypes__Tinnitus_Level = 2,
	EFlashbangDebuffCurveValueTypes__EFlashbangDebuffCurveValueTypes_MAX = 3
};


// Enum TslGame.ETracerDisplayMode
enum class ETracerDisplayMode : uint8_t
{
	ETracerDisplayMode__TracerDM_None = 0,
	ETracerDisplayMode__TracerDM_Particle = 1,
	ETracerDisplayMode__TracerDM_Mesh = 2,
	ETracerDisplayMode__TracerDM_Billboard = 3,
	ETracerDisplayMode__TracerDM_MAX = 4
};


// Enum TslGame.EWeaponGripLeftHand
enum class EWeaponGripLeftHand : uint8_t
{
	EWeaponGripLeftHand__NormalRifle = 0,
	EWeaponGripLeftHand__Foregrip1 = 1,
	EWeaponGripLeftHand__Foregrip2 = 2,
	EWeaponGripLeftHand__Thompson  = 3,
	EWeaponGripLeftHand__EWeaponGripLeftHand_MAX = 4
};


// Enum TslGame.TableType
enum class ETableType : uint8_t
{
	TableType__Ammo                = 0,
	TableType__Attachment          = 1,
	TableType__Equipment           = 2,
	TableType__Skin                = 3,
	TableType__Weapon              = 4,
	TableType__WeaponThrowable     = 5,
	TableType__WeaponShield        = 6,
	TableType__Castable            = 7,
	TableType__UsedByAction        = 8,
	TableType__Event               = 9,
	TableType__Craft               = 10,
	TableType__TableType_MAX       = 11
};


// Enum TslGame.EVivoxResponseState
enum class EVivoxResponseState : uint8_t
{
	EVivoxResponseState__NotRequested = 0,
	EVivoxResponseState__Requested = 1,
	EVivoxResponseState__Fail      = 2,
	EVivoxResponseState__Success   = 3,
	EVivoxResponseState__EVivoxResponseState_MAX = 4
};


// Enum TslGame.EScopeType
enum class EScopeType : uint8_t
{
	EScopeType__Main               = 0,
	EScopeType__Right              = 1,
	EScopeType__Total              = 2,
	EScopeType__None               = 3,
	EScopeType__EScopeType_MAX     = 4
};


// Enum TslGame.EWeaponReloadCancelReason
enum class EWeaponReloadCancelReason : uint8_t
{
	EWeaponReloadCancelReason__Default = 0,
	EWeaponReloadCancelReason__PlayerInterrupted = 1,
	EWeaponReloadCancelReason__PlayerMovement = 2,
	EWeaponReloadCancelReason__PlayerInteraction = 3,
	EWeaponReloadCancelReason__WeaponSwitch = 4,
	EWeaponReloadCancelReason__PlayerIncapacitated = 5,
	EWeaponReloadCancelReason__EWeaponReloadCancelReason_MAX = 6
};


// Enum TslGame.EWeaponReloadAnimExec
enum class EWeaponReloadAnimExec : uint8_t
{
	EWeaponReloadAnimExec__Tactical = 0,
	EWeaponReloadAnimExec__Charge  = 1,
	EWeaponReloadAnimExec__Single  = 2,
	EWeaponReloadAnimExec__Loop    = 3,
	EWeaponReloadAnimExec__EWeaponReloadAnimExec_MAX = 4
};


// Enum TslGame.EWeaponState
enum class EWeaponState : uint8_t
{
	EWeaponState__Idle             = 0,
	EWeaponState__Firing           = 1,
	EWeaponState__Reloading        = 2,
	EWeaponState__EWeaponState_MAX = 3
};


// Enum TslGame.EVehicleEngineState
enum class EVehicleEngineState : uint8_t
{
	EVehicleEngineState__EEngineStateAutoOff = 0,
	EVehicleEngineState__EEngineStateAutoOn = 1,
	EVehicleEngineState__EEngineStateManualOff = 2,
	EVehicleEngineState__EEngineStateManualOn = 3,
	EVehicleEngineState__EVehicleEngineState_MAX = 4
};


// Enum TslGame.EWheelContactType
enum class EWheelContactType : uint8_t
{
	WCT_Static                     = 0,
	WCT_Roll                       = 1,
	WCT_LatSlip                    = 2,
	WCT_LongSlip                   = 3,
	WCT_MAX                        = 4
};


// Enum TslGame.EThingGroupSpawnType
enum class EThingGroupSpawnType : uint8_t
{
	EThingGroupSpawnType__None     = 0,
	EThingGroupSpawnType__Probability = 1,
	EThingGroupSpawnType__TotalCount = 2,
	EThingGroupSpawnType__EThingGroupSpawnType_MAX = 3
};


// Enum TslGame.EHelicopterState
enum class EHelicopterState : uint8_t
{
	EHelicopterState__Normal       = 0,
	EHelicopterState__Smoke        = 1,
	EHelicopterState__Explosion    = 2,
	EHelicopterState__EHelicopterState_MAX = 3
};


// Enum TslGame.EEmergencyAircraftState
enum class EEmergencyAircraftState : uint8_t
{
	EEmergencyAircraftState__None  = 0,
	EEmergencyAircraftState__Flame = 1,
	EEmergencyAircraftState__Explosion = 2,
	EEmergencyAircraftState__LastExplosion = 3,
	EEmergencyAircraftState__Destroy = 4,
	EEmergencyAircraftState__EEmergencyAircraftState_MAX = 5
};


// Enum TslGame.EEmPickup_PathValidationState
enum class EEmPickup_PathValidationState : uint8_t
{
	EEmPickup_PathValidationState__None = 0,
	EEmPickup_PathValidationState__InProgress = 1,
	EEmPickup_PathValidationState__Valid = 2,
	EEmPickup_PathValidationState__Invalid = 3,
	EEmPickup_PathValidationState__EEmPickup_MAX = 4
};


// Enum TslGame.EAnimShieldState
enum class EAnimShieldState : uint8_t
{
	EAnimShieldState__SS_Hip       = 0,
	EAnimShieldState__SS_Block     = 1,
	EAnimShieldState__SS_ADS       = 2,
	EAnimShieldState__SS_MAX       = 3
};


// Enum TslGame.EAnimPawnState
enum class EAnimPawnState : uint8_t
{
	EAnimPawnState__PS_OnFoot      = 0,
	EAnimPawnState__PS_VehicleDriver = 1,
	EAnimPawnState__PS_VehiclePassenger = 2,
	EAnimPawnState__PS_SecondaryLocomotion = 3,
	EAnimPawnState__PS_MAX         = 4
};


// Enum TslGame.ELastMoveTask
enum class ELastMoveTask : uint8_t
{
	ELastMoveTask__MoveTo          = 0,
	ELastMoveTask__MoveDirectlyToward = 1,
	ELastMoveTask__ELastMoveTask_MAX = 2
};


// Enum TslGame.EEjectAllowed
enum class EEjectAllowed : uint8_t
{
	EEjectAllowed__NotAllowed      = 0,
	EEjectAllowed__Waiting         = 1,
	EEjectAllowed__Allowed         = 2,
	EEjectAllowed__EEjectAllowed_MAX = 3
};


// Enum TslGame.EGameStage
enum class EGameStage : uint8_t
{
	EGameStage__PrepareGame        = 0,
	EGameStage__EarlyGame          = 1,
	EGameStage__MidGame            = 2,
	EGameStage__EndGame            = 3,
	EGameStage__EGameStage_MAX     = 4
};


// Enum TslGame.EPlayerArenaObserverState
enum class EPlayerArenaObserverState : uint8_t
{
	EPlayerArenaObserverState__Off = 0,
	EPlayerArenaObserverState__RoundPreview = 1,
	EPlayerArenaObserverState__FinalRoundPreview = 2,
	EPlayerArenaObserverState__WonAlive = 3,
	EPlayerArenaObserverState__WonDead = 4,
	EPlayerArenaObserverState__RoundFinished = 5,
	EPlayerArenaObserverState__RoundFinishedWhileLoot = 6,
	EPlayerArenaObserverState__RoundResultWithObserve = 7,
	EPlayerArenaObserverState__RoundResult = 8,
	EPlayerArenaObserverState__Eliminated = 9,
	EPlayerArenaObserverState__AfterRoundLoadout = 10,
	EPlayerArenaObserverState__EPlayerArenaObserverState_MAX = 11
};


// Enum TslGame.EArenaMoneySource
enum class EArenaMoneySource : uint8_t
{
	EArenaMoneySource__Initial     = 0,
	EArenaMoneySource__Kill        = 1,
	EArenaMoneySource__Revive      = 2,
	EArenaMoneySource__WinArena    = 3,
	EArenaMoneySource__LoseArena   = 4,
	EArenaMoneySource__Buy         = 5,
	EArenaMoneySource__EArenaMoneySource_MAX = 6
};


// Enum TslGame.EArenaScreenOpen
enum class EArenaScreenOpen : uint8_t
{
	EArenaScreenOpen__Loadout      = 0,
	EArenaScreenOpen__Leaderboard  = 1,
	EArenaScreenOpen__EArenaScreenOpen_MAX = 2
};


// Enum TslGame.EArenaCameraObserveState
enum class EArenaCameraObserveState : uint8_t
{
	EArenaCameraObserveState__Off  = 0,
	EArenaCameraObserveState__FreeFly = 1,
	EArenaCameraObserveState__AttachedToPlayer = 2,
	EArenaCameraObserveState__EArenaCameraObserveState_MAX = 3
};


// Enum TslGame.ELoadoutNotificationMessageType
enum class ELoadoutNotificationMessageType : uint8_t
{
	ELoadoutNotificationMessageType__PURCHASEDMSG = 0,
	ELoadoutNotificationMessageType__NOTENOUGHSPACEMSG = 1,
	ELoadoutNotificationMessageType__ALREADYHAVEMSG = 2,
	ELoadoutNotificationMessageType__ATTACHMENTSININVENTORYMSG = 3,
	ELoadoutNotificationMessageType__ATTACHMENTSDISCARDEDMSG = 4,
	ELoadoutNotificationMessageType__ATTACHMENTSDROPPEDMSG = 5,
	ELoadoutNotificationMessageType__NOTENOUGHMONEYMSG = 6,
	ELoadoutNotificationMessageType__LOOTRESTRICTIONMSG = 7,
	ELoadoutNotificationMessageType__ELoadoutNotificationMessageType_MAX = 8
};


// Enum TslGame.EStrictSelectObserveTarget
enum class EStrictSelectObserveTarget : uint8_t
{
	EStrictSelectObserveTarget__None = 0,
	EStrictSelectObserveTarget__Arena = 1,
	EStrictSelectObserveTarget__Player = 2,
	EStrictSelectObserveTarget__EStrictSelectObserveTarget_MAX = 3
};


// Enum TslGame.EFutsalSoundType
enum class EFutsalSoundType : uint8_t
{
	EFutsalSoundType__Goal         = 0,
	EFutsalSoundType__Start        = 1,
	EFutsalSoundType__Finish       = 2,
	EFutsalSoundType__EFutsalSoundType_MAX = 3
};


// Enum TslGame.ECountInfoAnimType
enum class ECountInfoAnimType : uint8_t
{
	ECountInfoAnimType__None       = 0,
	ECountInfoAnimType__Default    = 1,
	ECountInfoAnimType__Decreasing = 2,
	ECountInfoAnimType__Increasing = 3,
	ECountInfoAnimType__Warning    = 4,
	ECountInfoAnimType__Emerging   = 5,
	ECountInfoAnimType__Vanishing  = 6,
	ECountInfoAnimType__ECountInfoAnimType_MAX = 7
};


// Enum TslGame.ECounterWidgetType
enum class ECounterWidgetType : uint8_t
{
	ECounterWidgetType__Assist     = 0,
	ECounterWidgetType__ECounterWidgetType_MAX = 1
};


// Enum TslGame.ECustomDamageEventReactionType
enum class ECustomDamageEventReactionType : uint8_t
{
	ECustomDamageEventReactionType__SpawnActor = 0,
	ECustomDamageEventReactionType__StopSpawnedParticles = 1,
	ECustomDamageEventReactionType__HideMesh = 2,
	ECustomDamageEventReactionType__HideMeshInstance = 3,
	ECustomDamageEventReactionType__HideBone = 4,
	ECustomDamageEventReactionType__ApplyPhysicalAnimationProfile = 5,
	ECustomDamageEventReactionType__SetCollisionEnabled = 6,
	ECustomDamageEventReactionType__ECustomDamageEventReactionType_MAX = 7
};


// Enum TslGame.ECustomDamageEventTriggerType
enum class ECustomDamageEventTriggerType : uint8_t
{
	ECustomDamageEventTriggerType__OnPassedDamageThreshold = 0,
	ECustomDamageEventTriggerType__OnAnyDamage = 1,
	ECustomDamageEventTriggerType__ECustomDamageEventTriggerType_MAX = 2
};


// Enum TslGame.EScmCollisionGroup
enum class EScmCollisionGroup : uint8_t
{
	EScmCollisionGroup__Default    = 0,
	EScmCollisionGroup__FireField  = 1,
	EScmCollisionGroup__ExplosiveItem = 2,
	EScmCollisionGroup__EScmCollisionGroup_MAX = 3
};


// Enum TslGame.EDamageFieldType
enum class EDamageFieldType : uint8_t
{
	EDamageFieldType__Default      = 0,
	EDamageFieldType__DirectTick   = 1,
	EDamageFieldType__EDamageFieldType_MAX = 2
};


// Enum TslGame.EOptionTab
enum class EOptionTab : uint8_t
{
	EOptionTab__Graphics           = 0,
	EOptionTab__Audio              = 1,
	EOptionTab__Controls           = 2,
	EOptionTab__Gameplay           = 3,
	EOptionTab__KeyBindings        = 4,
	EOptionTab__EOptionTab_MAX     = 5
};


// Enum TslGame.ETslGameOptionKeyBindingType
enum class ETslGameOptionKeyBindingType : uint8_t
{
	ETslGameOptionKeyBindingType__None = 0,
	ETslGameOptionKeyBindingType__Action = 1,
	ETslGameOptionKeyBindingType__Axis = 2,
	ETslGameOptionKeyBindingType__ETslGameOptionKeyBindingType_MAX = 3
};


// Enum TslGame.ETslGameOptionSupplementaryType
enum class ETslGameOptionSupplementaryType : uint8_t
{
	ETslGameOptionSupplementaryType__None = 0,
	ETslGameOptionSupplementaryType__KeyboardLayout = 1,
	ETslGameOptionSupplementaryType__PreviewImage = 2,
	ETslGameOptionSupplementaryType__PreviewCrosshair = 3,
	ETslGameOptionSupplementaryType__VolumeUnitMeter = 4,
	ETslGameOptionSupplementaryType__PreviewMaterial = 5,
	ETslGameOptionSupplementaryType__ETslGameOptionSupplementaryType_MAX = 6
};


// Enum TslGame.ENaviGamepadInputType
enum class ENaviGamepadInputType : uint8_t
{
	ENaviGamepadInputType__DPad_Pressed = 0,
	ENaviGamepadInputType__DPad_Released = 1,
	ENaviGamepadInputType__Axis    = 2,
	ENaviGamepadInputType__Axis_Hold = 3,
	ENaviGamepadInputType__ENaviGamepadInputType_MAX = 4
};


// Enum TslGame.EDynamicWeather
enum class EDynamicWeather : uint8_t
{
	EDynamicWeather__NotInitialized = 0,
	EDynamicWeather__Initialized   = 1,
	EDynamicWeather__BlendInStarted = 2,
	EDynamicWeather__Saturated     = 3,
	EDynamicWeather__BlendOutStarted = 4,
	EDynamicWeather__BlendOutEnded = 5,
	EDynamicWeather__Finished      = 6,
	EDynamicWeather__EDynamicWeather_MAX = 7
};


// Enum TslGame.EEffectSpreadState
enum class EEffectSpreadState : uint8_t
{
	EEffectSpreadState__ESS_InitialTrace = 0,
	EEffectSpreadState__ESS_InitialProcess = 1,
	EEffectSpreadState__ESS_Spreading = 2,
	EEffectSpreadState__ESS_SpreadDone = 3,
	EEffectSpreadState__ESS_Ending = 4,
	EEffectSpreadState__ESS_MAX    = 5
};


// Enum TslGame.EEmoteMoveType
enum class EEmoteMoveType : uint8_t
{
	EEmoteMoveType__None           = 0,
	EEmoteMoveType__MoveFoward     = 1,
	EEmoteMoveType__EEmoteMoveType_MAX = 2
};


// Enum TslGame.EEmotePlayType
enum class EEmotePlayType : uint8_t
{
	EEmotePlayType__Normal         = 0,
	EEmotePlayType__TeamMate       = 1,
	EEmotePlayType__Interaction    = 2,
	EEmotePlayType__EEmotePlayType_MAX = 3
};


// Enum TslGame.EEmoteAnimType
enum class EEmoteAnimType : uint8_t
{
	EEmoteAnimType__EmoteFullBody  = 0,
	EEmoteAnimType__EmoteUpperBody = 1,
	EEmoteAnimType__EmoteArm       = 2,
	EEmoteAnimType__EEmoteAnimType_MAX = 3
};


// Enum TslGame.EFrameRateLimitType
enum class EFrameRateLimitType : uint8_t
{
	EFrameRateLimitType__Unlimited = 0,
	EFrameRateLimitType__Fixed     = 1,
	EFrameRateLimitType__Fixed01   = 2,
	EFrameRateLimitType__Customizable = 3,
	EFrameRateLimitType__DisplayBased = 4,
	EFrameRateLimitType__EFrameRateLimitType_MAX = 5
};


// Enum TslGame.ETslOutGameCloudRequestErrorType
enum class ETslOutGameCloudRequestErrorType : uint8_t
{
	ETslOutGameCloudRequestErrorType__Unknown = 0,
	ETslOutGameCloudRequestErrorType__InternalError = 1,
	ETslOutGameCloudRequestErrorType__ServerError = 2,
	ETslOutGameCloudRequestErrorType__RequestTimedOut = 3,
	ETslOutGameCloudRequestErrorType__DataCorrupted = 4,
	ETslOutGameCloudRequestErrorType__CompressionFailed = 5,
	ETslOutGameCloudRequestErrorType__DecompressionFailed = 6,
	ETslOutGameCloudRequestErrorType__ETslOutGameCloudRequestErrorType_MAX = 7
};


// Enum TslGame.ETslOutGameCloudRequestType
enum class ETslOutGameCloudRequestType : uint8_t
{
	ETslOutGameCloudRequestType__Invalid = 0,
	ETslOutGameCloudRequestType__SaveToCloud = 1,
	ETslOutGameCloudRequestType__LoadFromCloud = 2,
	ETslOutGameCloudRequestType__ETslOutGameCloudRequestType_MAX = 3
};


// Enum TslGame.ETslPhysMaterialType
enum class ETslPhysMaterialType : uint8_t
{
	ETslPhysMaterialType__Unknown  = 0,
	ETslPhysMaterialType__Concrete = 1,
	ETslPhysMaterialType__Dirt     = 2,
	ETslPhysMaterialType__Water    = 3,
	ETslPhysMaterialType__Metal    = 4,
	ETslPhysMaterialType__Wood     = 5,
	ETslPhysMaterialType__Grass    = 6,
	ETslPhysMaterialType__Glass    = 7,
	ETslPhysMaterialType__Flesh    = 8,
	ETslPhysMaterialType__ETslPhysMaterialType_MAX = 9
};


// Enum TslGame.ETppAimCameraPosition
enum class ETppAimCameraPosition : uint8_t
{
	ETppAimCameraPosition__LatestAimPosition = 0,
	ETppAimCameraPosition__LastPeekingPosition = 1,
	ETppAimCameraPosition__ResetToRightShoulderPosition = 2,
	ETppAimCameraPosition__ResetToLeftShoulderPosition = 3,
	ETppAimCameraPosition__ETppAimCameraPosition_MAX = 4
};


// Enum TslGame.EAccessorySlot
enum class EAccessorySlot : uint8_t
{
	EAccessorySlot__Slot_Primary   = 0,
	EAccessorySlot__Slot_Secondary = 1,
	EAccessorySlot__Slot_SideArm   = 2,
	EAccessorySlot__Slot_Melee     = 3,
	EAccessorySlot__Slot_Thrown    = 4,
	EAccessorySlot__Slot_None      = 5,
	EAccessorySlot__Slot_MAX       = 6
};


// Enum TslGame.EInventorySlotType
enum class EInventorySlotType : uint8_t
{
	EInventorySlotType__Vicinity   = 0,
	EInventorySlotType__Inventory  = 1,
	EInventorySlotType__Crafting   = 2,
	EInventorySlotType__Equipment  = 3,
	EInventorySlotType__Weapon     = 4,
	EInventorySlotType__Max        = 5,
	EInventorySlotType__EInventorySlotType_MAX = 6
};


// Enum TslGame.ELobbyCharacterCameraType
enum class ELobbyCharacterCameraType : uint8_t
{
	ELobbyCharacterCameraType__None = 0,
	ELobbyCharacterCameraType__WholeBodyCamera = 1,
	ELobbyCharacterCameraType__TopCamera = 2,
	ELobbyCharacterCameraType__HeadCamera = 3,
	ELobbyCharacterCameraType__BodyCamera = 4,
	ELobbyCharacterCameraType__LegCamera = 5,
	ELobbyCharacterCameraType__FootCamera = 6,
	ELobbyCharacterCameraType__Max = 7,
	ELobbyCharacterCameraType__ELobbyCharacterCameraType_MAX = 8
};


// Enum TslGame.EAnimWeaponSpecificClass
enum class EAnimWeaponSpecificClass : uint8_t
{
	EAnimWeaponSpecificClass__None = 0,
	EAnimWeaponSpecificClass__EAnimWeaponSpecificClass_MAX = 1
};


// Enum TslGame.EContinuousHealItem
enum class EContinuousHealItem : uint8_t
{
	EContinuousHealItem__Continuous_On = 0,
	EContinuousHealItem__Bandaged_Only = 1,
	EContinuousHealItem__Continuous_Off = 2,
	EContinuousHealItem__EContinuousHealItem_MAX = 3
};


// Enum TslGame.EWeaponClass
enum class EWeaponClass : uint8_t
{
	EWeaponClass__Class_None       = 0,
	EWeaponClass__Class_Pistol     = 1,
	EWeaponClass__Class_SMG        = 2,
	EWeaponClass__Class_Rifle      = 3,
	EWeaponClass__Class_Carbine    = 4,
	EWeaponClass__Class_Shotgun    = 5,
	EWeaponClass__Class_Sniper     = 6,
	EWeaponClass__Class_DMR        = 7,
	EWeaponClass__Class_LMG        = 8,
	EWeaponClass__Class_Melee      = 9,
	EWeaponClass__Class_Throwable  = 10,
	EWeaponClass__Class_Shield     = 11,
	EWeaponClass__Class_Crossbow   = 12,
	EWeaponClass__Class_Launcher   = 13,
	EWeaponClass__EWeaponClass_MAX = 14
};


// Enum TslGame.EAllowedThrowMode
enum class EAllowedThrowMode : uint8_t
{
	EAllowedThrowMode__Any         = 0,
	EAllowedThrowMode__ThrowHigh   = 1,
	EAllowedThrowMode__ThrowLow    = 2,
	EAllowedThrowMode__EAllowedThrowMode_MAX = 3
};


// Enum TslGame.ECharThrowMode
enum class ECharThrowMode : uint8_t
{
	ECharThrowMode__ThrowHigh      = 0,
	ECharThrowMode__ThrowLow       = 1,
	ECharThrowMode__ECharThrowMode_MAX = 2
};


// Enum TslGame.EAttachmentCalculateType
enum class EAttachmentCalculateType : uint8_t
{
	EAttachmentCalculateType__Addition = 0,
	EAttachmentCalculateType__Multiply = 1,
	EAttachmentCalculateType__EAttachmentCalculateType_MAX = 2
};


// Enum TslGame.EAutoEquipAttachmentForScopeMode
enum class EAutoEquipAttachmentForScopeMode : uint8_t
{
	EAutoEquipAttachmentForScopeMode__Off = 0,
	EAutoEquipAttachmentForScopeMode__Sight_Only = 1,
	EAutoEquipAttachmentForScopeMode__ALL = 2,
	EAutoEquipAttachmentForScopeMode__EAutoEquipAttachmentForScopeMode_MAX = 3
};


// Enum TslGame.EItemCategory
enum class EItemCategory : uint8_t
{
	EItemCategory__None            = 0,
	EItemCategory__Equipment       = 1,
	EItemCategory__Weapon          = 2,
	EItemCategory__Attachment      = 3,
	EItemCategory__Ammunition      = 4,
	EItemCategory__Use             = 5,
	EItemCategory__Skin            = 6,
	EItemCategory__Event           = 7,
	EItemCategory__EItemCategory_MAX = 8
};


// Enum TslGame.EFiringMode
enum class EFiringMode : uint8_t
{
	EFiringMode__Normal            = 0,
	EFiringMode__Burst             = 1,
	EFiringMode__FullAuto          = 2,
	EFiringMode__FullAutoFast      = 3,
	EFiringMode__EFiringMode_MAX   = 4
};


// Enum TslGame.ECharacterGait
enum class ECharacterGait : uint8_t
{
	ECharacterGait__Walk           = 0,
	ECharacterGait__Run            = 1,
	ECharacterGait__Sprint         = 2,
	ECharacterGait__ECharacterGait_MAX = 3
};


// Enum TslGame.EWeaponHand
enum class EWeaponHand : uint8_t
{
	EWeaponHand__Left              = 0,
	EWeaponHand__Right             = 1,
	EWeaponHand__Total             = 2,
	EWeaponHand__EWeaponHand_MAX   = 3
};


// Enum TslGame.EWeaponArmState
enum class EWeaponArmState : uint8_t
{
	EWeaponArmState__None          = 0,
	EWeaponArmState__NotArmed      = 1,
	EWeaponArmState__Arming        = 2,
	EWeaponArmState__Armed         = 3,
	EWeaponArmState__UnArming      = 4,
	EWeaponArmState__EWeaponArmState_MAX = 5
};


// Enum TslGame.EPlatoonType
enum class EPlatoonType : uint8_t
{
	EPlatoonType__PlatoonA         = 0,
	EPlatoonType__PlatoonB         = 1,
	EPlatoonType__EPlatoonType_MAX = 2
};


// Enum TslGame.EAnimVehicleSeatType
enum class EAnimVehicleSeatType : uint8_t
{
	EAnimVehicleSeatType__Rider    = 0,
	EAnimVehicleSeatType__Pillion  = 1,
	EAnimVehicleSeatType__VehicleDriver = 2,
	EAnimVehicleSeatType__VehiclePassenger = 3,
	EAnimVehicleSeatType__Pilot    = 4,
	EAnimVehicleSeatType__AircraftPassenger = 5,
	EAnimVehicleSeatType__GliderPassenger = 6,
	EAnimVehicleSeatType__EAnimVehicleSeatType_MAX = 7
};


// Enum TslGame.ETurningDirection
enum class ETurningDirection : uint8_t
{
	ETurningDirection__None        = 0,
	ETurningDirection__Right       = 1,
	ETurningDirection__Right01     = 2,
	ETurningDirection__Right02     = 3,
	ETurningDirection__Right03     = 4,
	ETurningDirection__Left        = 5,
	ETurningDirection__Left01      = 6,
	ETurningDirection__Left02      = 7,
	ETurningDirection__Left03      = 8,
	ETurningDirection__ETurningDirection_MAX = 9
};


// Enum TslGame.EMovementDirection
enum class EMovementDirection : uint8_t
{
	EMovementDirection__F_Direction = 0,
	EMovementDirection__L_Direction = 1,
	EMovementDirection__R_Direction = 2,
	EMovementDirection__B_Direction = 3,
	EMovementDirection__FL_Direction = 4,
	EMovementDirection__FR_Direction = 5,
	EMovementDirection__BL_Direction = 6,
	EMovementDirection__BR_Direction = 7,
	EMovementDirection__EMovementDirection_MAX = 8
};


// Enum TslGame.EAnimStance
enum class EAnimStance : uint8_t
{
	EAnimStance__Stand             = 0,
	EAnimStance__Crouch            = 1,
	EAnimStance__Prone             = 2,
	EAnimStance__Groggy            = 3,
	EAnimStance__EAnimStance_MAX   = 4
};


// Enum TslGame.EAnimWeaponType
enum class EAnimWeaponType : uint8_t
{
	EAnimWeaponType__None          = 0,
	EAnimWeaponType__Rifle         = 1,
	EAnimWeaponType__Launcher      = 2,
	EAnimWeaponType__Pistol        = 3,
	EAnimWeaponType__Throwable     = 4,
	EAnimWeaponType__SpikeTrap     = 5,
	EAnimWeaponType__Melee         = 6,
	EAnimWeaponType__Shield        = 7,
	EAnimWeaponType__MAX           = 8,
	EAnimWeaponType__EAnimWeaponType_MAX = 9
};


// Enum TslGame.EExhaustPopType
enum class EExhaustPopType : uint8_t
{
	EExhaustPopType__ExPop_ThrottleDecrease = 0,
	EExhaustPopType__ExPop_RevLimiterHit = 1,
	EExhaustPopType__ExPop_MAX     = 2
};


// Enum TslGame.ECameraViewBehaviour
enum class ECameraViewBehaviour : uint8_t
{
	ECameraViewBehaviour__FpsAndTps = 0,
	ECameraViewBehaviour__FpsOnly  = 1,
	ECameraViewBehaviour__TpsOnly  = 2,
	ECameraViewBehaviour__ECameraViewBehaviour_MAX = 3
};


// Enum TslGame.EPlayerStartType
enum class EPlayerStartType : uint8_t
{
	EPlayerStartType__OnePlace     = 0,
	EPlayerStartType__SeveralPlace = 1,
	EPlayerStartType__EPlayerStartType_MAX = 2
};


// Enum TslGame.EMatchStartType
enum class EMatchStartType : uint8_t
{
	EMatchStartType__Normal        = 0,
	EMatchStartType__Airborne      = 1,
	EMatchStartType__EMatchStartType_MAX = 2
};


// Enum TslGame.EGender
enum class EGender : uint8_t
{
	EGender__Male                  = 0,
	EGender__Female                = 1,
	EGender__EGender_MAX           = 2
};


// Enum TslGame.EEquipableItemLevelType
enum class EEquipableItemLevelType : uint8_t
{
	EEquipableItemLevelType__None  = 0,
	EEquipableItemLevelType__Level1 = 1,
	EEquipableItemLevelType__Level2 = 2,
	EEquipableItemLevelType__Level3 = 3,
	EEquipableItemLevelType__Level4 = 4,
	EEquipableItemLevelType__EEquipableItemLevelType_MAX = 5
};


// Enum TslGame.EConstraintSlotType
enum class EConstraintSlotType : uint8_t
{
	EConstraintSlotType__Block     = 0,
	EConstraintSlotType__Hide      = 1,
	EConstraintSlotType__Max       = 2,
	EConstraintSlotType__EConstraintSlotType_MAX = 3
};


// Enum TslGame.EDurabilityConsumeType
enum class EDurabilityConsumeType : uint8_t
{
	EDurabilityConsumeType__TotalDamage = 0,
	EDurabilityConsumeType__AbsorbDamage = 1,
	EDurabilityConsumeType__EDurabilityConsumeType_MAX = 2
};


// Enum TslGame.ESlotOffsetType
enum class ESlotOffsetType : uint8_t
{
	ESlotOffsetType__NoOffset      = 0,
	ESlotOffsetType__BagLevel1     = 1,
	ESlotOffsetType__BagLevel2     = 2,
	ESlotOffsetType__BagLevel3     = 3,
	ESlotOffsetType__ESlotOffsetType_MAX = 4
};


// Enum TslGame.EItemSpotGroupType
enum class EItemSpotGroupType : uint8_t
{
	EItemSpotGroupType__GroupA     = 0,
	EItemSpotGroupType__GroupB     = 1,
	EItemSpotGroupType__GroupC     = 2,
	EItemSpotGroupType__GroupD     = 3,
	EItemSpotGroupType__GroupE     = 4,
	EItemSpotGroupType__GroupF     = 5,
	EItemSpotGroupType__GroupG     = 6,
	EItemSpotGroupType__GroupH     = 7,
	EItemSpotGroupType__GroupI     = 8,
	EItemSpotGroupType__GroupJ     = 9,
	EItemSpotGroupType__GroupK     = 10,
	EItemSpotGroupType__GroupL     = 11,
	EItemSpotGroupType__GroupM     = 12,
	EItemSpotGroupType__GroupN     = 13,
	EItemSpotGroupType__GroupO     = 14,
	EItemSpotGroupType__GroupP     = 15,
	EItemSpotGroupType__GroupQ     = 16,
	EItemSpotGroupType__GroupR     = 17,
	EItemSpotGroupType__GroupS     = 18,
	EItemSpotGroupType__GroupT     = 19,
	EItemSpotGroupType__GroupU     = 20,
	EItemSpotGroupType__GroupV     = 21,
	EItemSpotGroupType__GroupW     = 22,
	EItemSpotGroupType__GroupX     = 23,
	EItemSpotGroupType__GroupY     = 24,
	EItemSpotGroupType__GroupZ     = 25,
	EItemSpotGroupType__MAX        = 26,
	EItemSpotGroupType__EItemSpotGroupType_MAX = 27
};


// Enum TslGame.EItemSpotType
enum class EItemSpotType : uint8_t
{
	EItemSpotType__TypeA           = 0,
	EItemSpotType__TypeB           = 1,
	EItemSpotType__TypeC           = 2,
	EItemSpotType__TypeD           = 3,
	EItemSpotType__TypeE           = 4,
	EItemSpotType__TypeF           = 5,
	EItemSpotType__TypeG           = 6,
	EItemSpotType__TypeH           = 7,
	EItemSpotType__TypeI           = 8,
	EItemSpotType__TypeJ           = 9,
	EItemSpotType__TypeK           = 10,
	EItemSpotType__TypeL           = 11,
	EItemSpotType__TypeM           = 12,
	EItemSpotType__TypeN           = 13,
	EItemSpotType__TypeO           = 14,
	EItemSpotType__TypeP           = 15,
	EItemSpotType__TypeQ           = 16,
	EItemSpotType__TypeR           = 17,
	EItemSpotType__TypeS           = 18,
	EItemSpotType__TypeT           = 19,
	EItemSpotType__TypeU           = 20,
	EItemSpotType__TypeV           = 21,
	EItemSpotType__TypeW           = 22,
	EItemSpotType__TypeX           = 23,
	EItemSpotType__TypeY           = 24,
	EItemSpotType__TypeZ           = 25,
	EItemSpotType__MAX             = 26,
	EItemSpotType__EItemSpotType_MAX = 27
};


// Enum TslGame.EItemOverrideType
enum class EItemOverrideType : uint8_t
{
	EItemOverrideType__NONE        = 0,
	EItemOverrideType__TypeA       = 1,
	EItemOverrideType__TypeB       = 2,
	EItemOverrideType__TypeC       = 3,
	EItemOverrideType__TypeD       = 4,
	EItemOverrideType__TypeE       = 5,
	EItemOverrideType__TypeF       = 6,
	EItemOverrideType__TypeG       = 7,
	EItemOverrideType__TypeH       = 8,
	EItemOverrideType__TypeI       = 9,
	EItemOverrideType__TypeJ       = 10,
	EItemOverrideType__TypeK       = 11,
	EItemOverrideType__TypeL       = 12,
	EItemOverrideType__TypeM       = 13,
	EItemOverrideType__TypeN       = 14,
	EItemOverrideType__EItemOverrideType_MAX = 15
};


// Enum TslGame.ECastableItemType
enum class ECastableItemType : uint8_t
{
	ECastableItemType__None        = 0,
	ECastableItemType__Bandage     = 1,
	ECastableItemType__FirstAid    = 2,
	ECastableItemType__Medkit      = 3,
	ECastableItemType__EnergyDrink = 4,
	ECastableItemType__Painkiller  = 5,
	ECastableItemType__Adrenaline  = 6,
	ECastableItemType__GasCan      = 7,
	ECastableItemType__Battery     = 8,
	ECastableItemType__Key         = 9,
	ECastableItemType__EmergencyPickup = 10,
	ECastableItemType__SelfRevive  = 11,
	ECastableItemType__ECastableItemType_MAX = 12
};


// Enum TslGame.ECastLevel
enum class ECastLevel : uint8_t
{
	ECastLevel__None               = 0,
	ECastLevel__NoRestriction      = 1,
	ECastLevel__Restriction        = 2,
	ECastLevel__ECastLevel_MAX     = 3
};


// Enum TslGame.ECastPriority
enum class ECastPriority : uint8_t
{
	ECastPriority__None            = 0,
	ECastPriority__Low             = 1,
	ECastPriority__Normal          = 2,
	ECastPriority__High            = 3,
	ECastPriority__Max             = 4,
	ECastPriority__ECastPriority_MAX = 5
};


// Enum TslGame.ELobbyItemPointSellingType
enum class ELobbyItemPointSellingType : uint8_t
{
	ELobbyItemPointSellingType__Normal = 0,
	ELobbyItemPointSellingType__WeeklyDouble = 1,
	ELobbyItemPointSellingType__ELobbyItemPointSellingType_MAX = 2
};


// Enum TslGame.ELobbyItemPlatform
enum class ELobbyItemPlatform : uint8_t
{
	ELobbyItemPlatform__PC_Steam   = 0,
	ELobbyItemPlatform__PC_NonSteam = 1,
	ELobbyItemPlatform__Xbox       = 2,
	ELobbyItemPlatform__ELobbyItemPlatform_MAX = 3
};


// Enum TslGame.ELobbyItemTier
enum class ELobbyItemTier : uint8_t
{
	ELobbyItemTier__Basic          = 0,
	ELobbyItemTier__Common         = 1,
	ELobbyItemTier__Classic        = 2,
	ELobbyItemTier__Special        = 3,
	ELobbyItemTier__Rare           = 4,
	ELobbyItemTier__Elite          = 5,
	ELobbyItemTier__Epic           = 6,
	ELobbyItemTier__Legendary      = 7,
	ELobbyItemTier__Ultimate       = 8,
	ELobbyItemTier__Event          = 9,
	ELobbyItemTier__ELobbyItemTier_MAX = 10
};


// Enum TslGame.ELobbyItemCategory
enum class ELobbyItemCategory : uint8_t
{
	ELobbyItemCategory__Belt       = 0,
	ELobbyItemCategory__Body       = 1,
	ELobbyItemCategory__Eyes       = 2,
	ELobbyItemCategory__Feet       = 3,
	ELobbyItemCategory__Head       = 4,
	ELobbyItemCategory__Jacket     = 5,
	ELobbyItemCategory__Legs       = 6,
	ELobbyItemCategory__Mask       = 7,
	ELobbyItemCategory__Hands      = 8,
	ELobbyItemCategory__Box        = 9,
	ELobbyItemCategory__Key        = 10,
	ELobbyItemCategory__WeaponSkin = 11,
	ELobbyItemCategory__ParachuteSkin = 12,
	ELobbyItemCategory__HelmetSkin = 13,
	ELobbyItemCategory__BackpackSkin = 14,
	ELobbyItemCategory__TorsoArmorSkin = 15,
	ELobbyItemCategory__VehicleSkin = 16,
	ELobbyItemCategory__Multislot  = 17,
	ELobbyItemCategory__ELobbyItemCategory_MAX = 18
};


// Enum TslGame.EDamageVictimActorType
enum class EDamageVictimActorType : uint8_t
{
	EDamageVictimActorType__Character = 0,
	EDamageVictimActorType__Vehicle = 1,
	EDamageVictimActorType__Wheel  = 2,
	EDamageVictimActorType__DestructibleActor = 3,
	EDamageVictimActorType__ExplosiveItem = 4,
	EDamageVictimActorType__EDamageVictimActorType_MAX = 5
};


// Enum TslGame.EStatTrakState
enum class EStatTrakState : uint8_t
{
	EStatTrakState__Run            = 0,
	EStatTrakState__Locked         = 1,
	EStatTrakState__Error          = 2,
	EStatTrakState__EStatTrakState_MAX = 3
};


// Enum TslGame.ESkinApplicationType
enum class ESkinApplicationType : uint8_t
{
	ESkinApplicationType__Application_InOrder = 0,
	ESkinApplicationType__Application_Slot = 1,
	ESkinApplicationType__Application_Index = 2,
	ESkinApplicationType__Application_MAX = 3
};


// Enum TslGame.ESkinMeshType
enum class ESkinMeshType : uint8_t
{
	ESkinMeshType__SkeletalMesh    = 0,
	ESkinMeshType__AsyncStaticMesh = 1,
	ESkinMeshType__StaticMesh      = 2,
	ESkinMeshType__ESkinMeshType_MAX = 3
};


// Enum TslGame.ESkinCategory
enum class ESkinCategory : uint8_t
{
	ESkinCategory__Skin_None       = 0,
	ESkinCategory__Skin_Equipment  = 1,
	ESkinCategory__Skin_Parachute  = 2,
	ESkinCategory__Skin_Weapon     = 3,
	ESkinCategory__Skin_MeleeWeapon = 4,
	ESkinCategory__Skin_Vehicle    = 5,
	ESkinCategory__Skin_MAX        = 6
};


// Enum TslGame.EWuDirectMessageType
enum class EWuDirectMessageType : uint8_t
{
	EWuDirectMessageType__Normal   = 0,
	EWuDirectMessageType__Preset   = 1,
	EWuDirectMessageType__System   = 2,
	EWuDirectMessageType__EWuDirectMessageType_MAX = 3
};


// Enum TslGame.EBuffOverlapSolveMethod
enum class EBuffOverlapSolveMethod : uint8_t
{
	EBuffOverlapSolveMethod__IgnoreLater = 0,
	EBuffOverlapSolveMethod__Overwrite = 1,
	EBuffOverlapSolveMethod__RestartTimer = 2,
	EBuffOverlapSolveMethod__Stack = 3,
	EBuffOverlapSolveMethod__EBuffOverlapSolveMethod_MAX = 4
};


// Enum TslGame.EVaultRequirementType
enum class EVaultRequirementType : uint8_t
{
	EVaultRequirementType__VaultReqType_False = 0,
	EVaultRequirementType__VaultReqType_True = 1,
	EVaultRequirementType__VaultReqType_Any = 2,
	EVaultRequirementType__VaultReqType_MAX = 3
};


// Enum TslGame.EVaultAnimType
enum class EVaultAnimType : uint8_t
{
	EVaultAnimType__VaultNone      = 0,
	EVaultAnimType__Vault200_Stationary = 1,
	EVaultAnimType__Vault200_Mobile = 2,
	EVaultAnimType__Vault200_Narrow = 3,
	EVaultAnimType__Vault160_Stationary = 4,
	EVaultAnimType__Vault160_Mobile = 5,
	EVaultAnimType__Vault160_Narrow = 6,
	EVaultAnimType__Vault120_Stationary = 7,
	EVaultAnimType__Vault120_Mobile = 8,
	EVaultAnimType__Vault120_Slide = 9,
	EVaultAnimType__Vault120_Narrow = 10,
	EVaultAnimType__Vault90_Stationary = 11,
	EVaultAnimType__Vault90_Mobile = 12,
	EVaultAnimType__Vault90_Slide  = 13,
	EVaultAnimType__Vault90_Narrow = 14,
	EVaultAnimType__Climb200_Stationary = 15,
	EVaultAnimType__Climb200_Mobile = 16,
	EVaultAnimType__Climb200_Slide = 17,
	EVaultAnimType__Climb200_Narrow = 18,
	EVaultAnimType__Climb160_Stationary = 19,
	EVaultAnimType__Climb160_Mobile = 20,
	EVaultAnimType__Climb160_Slide = 21,
	EVaultAnimType__Climb160_Narrow = 22,
	EVaultAnimType__Climb120_Stationary = 23,
	EVaultAnimType__Climb120_Mobile = 24,
	EVaultAnimType__Climb120_Slide = 25,
	EVaultAnimType__Climb120_Narrow = 26,
	EVaultAnimType__Climb90_Stationary = 27,
	EVaultAnimType__Climb90_Mobile = 28,
	EVaultAnimType__Climb90_Slide  = 29,
	EVaultAnimType__Climb90_Narrow = 30,
	EVaultAnimType__Vault90Roll    = 31,
	EVaultAnimType__Vault120Window = 32,
	EVaultAnimType__Vault60_Stationary = 33,
	EVaultAnimType__Vault60_Mobile = 34,
	EVaultAnimType__Vault60_Slide  = 35,
	EVaultAnimType__Vault60_Narrow = 36,
	EVaultAnimType__Climb60_Stationary = 37,
	EVaultAnimType__Climb60_Mobile = 38,
	EVaultAnimType__Climb60_Narrow = 39,
	EVaultAnimType__LedgeGrab_Up_Climb = 40,
	EVaultAnimType__LedgeGrab_Up_Climb_Swing = 41,
	EVaultAnimType__LedgeGrab_Up_Climb_HalfSwing = 42,
	EVaultAnimType__LedgeGrab_Up_Vault = 43,
	EVaultAnimType__LedgeGrab_Up_Vault_Swing = 44,
	EVaultAnimType__LedgeGrab_Up_Vault_HalfSwing = 45,
	EVaultAnimType__LedgeGrab_High_Climb = 46,
	EVaultAnimType__LedgeGrab_High_Climb_Swing = 47,
	EVaultAnimType__LedgeGrab_High_Climb_HalfSwing = 48,
	EVaultAnimType__LedgeGrab_High_Vault = 49,
	EVaultAnimType__LedgeGrab_High_Vault_Swing = 50,
	EVaultAnimType__LedgeGrab_High_Vault_HalfSwing = 51,
	EVaultAnimType__LedgeGrab_Low_Climb = 52,
	EVaultAnimType__LedgeGrab_Low_Climb_Swing = 53,
	EVaultAnimType__LedgeGrab_Low_Climb_HalfSwing = 54,
	EVaultAnimType__LedgeGrab_Low_Vault = 55,
	EVaultAnimType__LedgeGrab_Low_Vault_Swing = 56,
	EVaultAnimType__LedgeGrab_Low_Vault_HalfSwing = 57,
	EVaultAnimType__LedgeGrab_Low_Vault_Narrow = 58,
	EVaultAnimType__LedgeGrab_Low_Vault_HalfSwing_Narrow = 59,
	EVaultAnimType__LedgeGrab_Low_Vault_Swing_Narrow = 60,
	EVaultAnimType__LedgeGrab_High_Vault_Narrow = 61,
	EVaultAnimType__LedgeGrab_High_Vault_HalfSwing_Narrow = 62,
	EVaultAnimType__LedgeGrab_High_Vault_Swing_Narrow = 63,
	EVaultAnimType__LedgeGrab_Up_Vault_Narrow = 64,
	EVaultAnimType__LedgeGrab_Up_Vault_HalfSwing_Narrow = 65,
	EVaultAnimType__LedgeGrab_Up_Vault_Swing_Narrow = 66,
	EVaultAnimType__EVaultAnimType_MAX = 67
};


// Enum TslGame.EParachuteLandingSurfaceType
enum class EParachuteLandingSurfaceType : uint8_t
{
	EParachuteLandingSurfaceType__Surface_None = 0,
	EParachuteLandingSurfaceType__Surface_Vertical = 1,
	EParachuteLandingSurfaceType__Surface_Horizontal = 2,
	EParachuteLandingSurfaceType__Surface_MAX = 3
};


// Enum TslGame.EPreoccupiedTeamType
enum class EPreoccupiedTeamType : uint8_t
{
	EPreoccupiedTeamType__NEUTRAL  = 0,
	EPreoccupiedTeamType__RED      = 1,
	EPreoccupiedTeamType__BLUE     = 2,
	EPreoccupiedTeamType__EPreoccupiedTeamType_MAX = 3
};


// Enum TslGame.ECaptureState
enum class ECaptureState : uint8_t
{
	ECaptureState__ENeutural       = 0,
	ECaptureState__EConfusion      = 1,
	ECaptureState__ECaptured       = 2,
	ECaptureState__ECaptureState_MAX = 3
};


// Enum TslGame.EPopupStyle
enum class EPopupStyle : uint8_t
{
	EPopupStyle__Ok_Cancel         = 0,
	EPopupStyle__Ok                = 1,
	EPopupStyle__Yes_No            = 2,
	EPopupStyle__Controller_KeyboardMouse = 3,
	EPopupStyle__EPopupStyle_MAX   = 4
};


// Enum TslGame.EKillcamDisplayCode
enum class EKillcamDisplayCode : uint8_t
{
	EKillcamDisplayCode__NotVisible = 0,
	EKillcamDisplayCode__OptionDisabled = 1,
	EKillcamDisplayCode__Recording = 2,
	EKillcamDisplayCode__Playable  = 3,
	EKillcamDisplayCode__Replay    = 4,
	EKillcamDisplayCode__FailToLoad = 5,
	EKillcamDisplayCode__DemoFailure = 6,
	EKillcamDisplayCode__DetectedUnusualMovement = 7,
	EKillcamDisplayCode__EKillcamDisplayCode_MAX = 8
};


// Enum TslGame.EWidgetShowType
enum class EWidgetShowType : uint8_t
{
	EWidgetShowType__Show          = 0,
	EWidgetShowType__Hide          = 1,
	EWidgetShowType__Toggle        = 2,
	EWidgetShowType__EWidgetShowType_MAX = 3
};


// Enum TslGame.EMovementSpamType
enum class EMovementSpamType : uint8_t
{
	EMovementSpamType__LeanRight   = 0,
	EMovementSpamType__LeanLeft    = 1,
	EMovementSpamType__Crouch      = 2,
	EMovementSpamType__EMovementSpamType_MAX = 3
};


// Enum TslGame.EAttackType
enum class EAttackType : uint8_t
{
	EAttackType__None              = 0,
	EAttackType__Weapon            = 1,
	EAttackType__VehicleCrash      = 2,
	EAttackType__VehicleExplosion  = 3,
	EAttackType__Fall              = 4,
	EAttackType__BlueZone          = 5,
	EAttackType__RedZone           = 6,
	EAttackType__BlackZone         = 7,
	EAttackType__EAttackType_MAX   = 8
};


// Enum TslGame.EPlayerMoveType
enum class EPlayerMoveType : uint8_t
{
	EPlayerMoveType__OnFoot        = 0,
	EPlayerMoveType__OnSwim        = 1,
	EPlayerMoveType__OnVehicle     = 2,
	EPlayerMoveType__OnParachute   = 3,
	EPlayerMoveType__OnFreefall    = 4,
	EPlayerMoveType__EPlayerMoveType_MAX = 5
};


// Enum TslGame.ELandingSoundSwitchState
enum class ELandingSoundSwitchState : uint8_t
{
	ELandingSoundSwitchState__None = 0,
	ELandingSoundSwitchState__Light = 1,
	ELandingSoundSwitchState__Heavy = 2,
	ELandingSoundSwitchState__VeryHeavy = 3,
	ELandingSoundSwitchState__ELandingSoundSwitchState_MAX = 4
};


// Enum TslGame.ESandboxGroypType
enum class ESandboxGroypType : uint8_t
{
	ESandboxGroypType__Weapon      = 0,
	ESandboxGroypType__Item        = 1,
	ESandboxGroypType__Vehicle     = 2,
	ESandboxGroypType__ESandboxGroypType_MAX = 3
};


// Enum TslGame.ESandboxPowerType
enum class ESandboxPowerType : uint8_t
{
	ESandboxPowerType__None        = 0,
	ESandboxPowerType__Fly         = 1,
	ESandboxPowerType__InvulnerableEffect = 2,
	ESandboxPowerType__CarePackage = 3,
	ESandboxPowerType__RedZone     = 4,
	ESandboxPowerType__Revive      = 5,
	ESandboxPowerType__TeamRevive  = 6,
	ESandboxPowerType__GiveItemToEveryone = 7,
	ESandboxPowerType__ESandboxPowerType_MAX = 8
};


// Enum TslGame.EMovingState
enum class EMovingState : uint8_t
{
	Walk                           = 0,
	Run                            = 1,
	Sprint                         = 2,
	EMovingState_MAX               = 3
};


// Enum TslGame.EPlayerInputType
enum class EPlayerInputType : uint8_t
{
	EPlayerInputType__KeyboardMouse = 0,
	EPlayerInputType__Gamepad      = 1,
	EPlayerInputType__Mixed        = 2,
	EPlayerInputType__EPlayerInputType_MAX = 3
};


// Enum TslGame.EAntiCheatKickType
enum class EAntiCheatKickType : uint8_t
{
	EAntiCheatKickType__Default    = 0,
	EAntiCheatKickType__HWID       = 1,
	EAntiCheatKickType__MouseMacro = 2,
	EAntiCheatKickType__InGame     = 3,
	EAntiCheatKickType__BattleEye  = 4,
	EAntiCheatKickType__EAntiCheatKickType_MAX = 5
};


// Enum TslGame.ECheatType
enum class ECheatType : uint8_t
{
	SpeedHack                      = 0,
	SpeedHack_UE                   = 1,
	IgnoreWall_Hit                 = 2,
	IgnoreWall_Sight               = 3,
	IgnoreVelocity_Hit             = 4,
	IgnoreVelocity                 = 5,
	IgnoreVelocity2                = 6,
	ItemPackage                    = 7,
	CarePackageMount               = 8,
	HitLag                         = 9,
	Aimbot                         = 10,
	InvalidImpact                  = 11,
	InvalidImpactZ                 = 12,
	InvalidImpact_Gun_C            = 13,
	InvalidOrigin_Gun              = 14,
	InvalidOrigin_Melee            = 15,
	InvalidOrigin_Punch            = 16,
	InvalidOrigin_Throwable        = 17,
	InvalidOrigin_MeleeThrow       = 18,
	InvalidSimStep_MeleeThrow      = 19,
	InvalidRange                   = 20,
	InvalidRange2                  = 21,
	InvalidSequence                = 22,
	InvalidAmmo                    = 23,
	InvalidReviving                = 24,
	InvalidKick                    = 25,
	InvalidA0                      = 26,
	InvalidB0                      = 27,
	InvalidB1                      = 28,
	InvalidB101                    = 29,
	InvalidH0                      = 30,
	InvalidOrigin_Gun_C            = 31,
	InvalidD0                      = 32,
	InvalidD1                      = 33,
	InvalidS0                      = 34,
	InvalidS1                      = 35,
	InvalidH1                      = 36,
	InvalidH2                      = 37,
	InvalidH3                      = 38,
	InvalidC0                      = 39,
	InvalidC1                      = 40,
	InvalidC2                      = 41,
	InvalidC3                      = 42,
	InvalidC4                      = 43,
	InvalidC5                      = 44,
	InvalidC6                      = 45,
	InvalidC7                      = 46,
	InvalidT0                      = 47,
	InvalidT1                      = 48,
	InvalidT2                      = 49,
	InvalidAimDir                  = 50,
	InvalidPelletDir               = 51,
	InvalidAmmoSpeed               = 52,
	InvalidAmmoDir                 = 53,
	InvalidCharacterFlag           = 54,
	InvalidPropertyCrc             = 55,
	InvalidWeaponCrc               = 56,
	InvalidWeaponRecoil            = 57,
	InvalidSwayBuffer              = 58,
	InvalidCameraYaw               = 59,
	InvalidWeaponPackageCrc        = 60,
	InvalidWeaponFlag              = 61,
	InvalidHitComponent            = 62,
	InvalidCollisionProfileCrc     = 63,
	InvalidPakListCrc              = 64,
	InvalidPOV                     = 65,
	InvalidCharacterCrc            = 66,
	InvalidHitLocation             = 67,
	InvalidSight                   = 68,
	VerifyAim                      = 69,
	CHKSUM_GUN                     = 70,
	CHKSUM_PUNCH                   = 71,
	CHKSUM_MELEE                   = 72,
	CHKSUM_VEHICLE                 = 73,
	CHKSUM_A0                      = 74,
	CHKSUM_T0                      = 75,
	CHKSUM_S0                      = 76,
	CHKSUM_D0                      = 77,
	CHKSUM_V0                      = 78,
	CHKSUM_W0                      = 79,
	CHKSUM_T1                      = 80,
	CHKSUM_D1                      = 81,
	CHKSUM_CD                      = 82,
	CHKSUM_LC                      = 83,
	CHKSUM_V1                      = 84,
	CHKSUM_P0                      = 85,
	CHKSUM_BP                      = 86,
	CHKSUM_G0                      = 87,
	CHKSUM_G1                      = 88,
	CHKSUM_H2                      = 89,
	CHKSUM_H3                      = 90,
	CHKSUM_UO                      = 91,
	CHKSUM_UF                      = 92,
	VHC_RI                         = 93,
	VHC_SC                         = 94,
	VHC_MG                         = 95,
	VHC_MG_FF                      = 96,
	VHC_MG_FC                      = 97,
	VHC_MG_SW                      = 98,
	VHC_MG_OS                      = 99,
	VHC_MG_BC                      = 100,
	VHC_MG_TC                      = 101,
	VHC_MG_PL                      = 102,
	VHC_MG_HL                      = 103,
	VHC_MG_SD                      = 104,
	VHC_MGB                        = 105,
	VHC_MGB_FF                     = 106,
	VHC_MGB_FC                     = 107,
	VHC_MGB_OS                     = 108,
	VHC_MGB_BC                     = 109,
	VHC_MGB_TC                     = 110,
	VHC_MGB_PL                     = 111,
	VHC_MGB_HL                     = 112,
	VHC_MGF_OS                     = 113,
	VHC_MGF_TC                     = 114,
	VHC_MGF_BC                     = 115,
	VHC_MGF_SD                     = 116,
	VHC_KILL                       = 117,
	VHC_ED                         = 118,
	VHC_SERVERSIMUL                = 119,
	VHC_SIMULATION_ACTIVATE        = 120,
	VHC_SIMULATION_DEACTIVATE      = 121,
	VHC_TRY_BYPASS_SERVERSIMUL     = 122,
	VHC_BYPASSED_SERVERSIMUL       = 123,
	VHC_FORCE_SERVERSIMUL          = 124,
	VHC_FORCE_SERVERSIMUL_ACTIVATE = 125,
	VHC_FORCE_SERVERSIMUL_DEACTIVATE = 126,
	CK_ACTIVATE                    = 127,
	CK_DEACTIVATE                  = 128,
	AntiCheatKick_WallHack         = 129,
	AntiCheatKick_ESP              = 130,
	AntiCheatKick_SpeedHack1       = 131,
	AntiCheatKick_SpeedHack2       = 132,
	AntiCheatKick_SpeedHack3       = 133,
	AntiCheatKick_PLFC             = 134,
	AntiCheatKick_TCFC             = 135,
	AntiCheatKick_HL               = 136,
	AntiCheatKick_OS               = 137,
	AntiCheatKick_FC               = 138,
	VehicleSimulation_PLFC         = 139,
	VehicleSimulation_TCFC         = 140,
	VehicleSimulation_HL           = 141,
	VehicleSimulation_OS           = 142,
	VehicleSimulation_FC           = 143,
	CC_ACTIVATE                    = 144,
	CC_DEACTIVATE                  = 145,
	CC_FORCE_ERROR_CORRECTION      = 146,
	QS_AA                          = 147,
	QS_NA                          = 148,
	QS_AL                          = 149,
	QS_AJ                          = 150,
	QS_AT                          = 151,
	QS_ADT                         = 152,
	QS_CJE                         = 153,
	QS_CWE                         = 154,
	CP_RZ                          = 155,
	CP_RZD                         = 156,
	KGB_AF                         = 157,
	ESP1                           = 158,
	ESP2                           = 159,
	ESP3                           = 160,
	SimilarHit                     = 161,
	DoubleKill                     = 162,
	B0Log                          = 163,
	InputLog                       = 164,
	FireInputLog                   = 165,
	HighLocationVehicle            = 166,
	HighLocationBoat               = 167,
	None                           = 168,
	ECheatType_MAX                 = 169
};


// Enum TslGame.ECharFlagsNormal
enum class ECharFlagsNormal : uint8_t
{
	ECharFlagsNormal__IsGroggying  = 0,
	ECharFlagsNormal__IsActiveRagdollActive = 1,
	ECharFlagsNormal__HasShieldEquipped = 2,
	ECharFlagsNormal__IsOutsideBluezone = 3,
	ECharFlagsNormal__ECharFlagsNormal_MAX = 4
};


// Enum TslGame.ELandingState
enum class ELandingState : uint8_t
{
	ELandingState__None            = 0,
	ELandingState__Falling         = 1,
	ELandingState__HeavyFalling    = 2,
	ELandingState__ExtremeFalling  = 3,
	ELandingState__FallingRecovery = 4,
	ELandingState__PostLandingRecovery = 5,
	ELandingState__ELandingState_MAX = 6
};


// Enum TslGame.ECharFlagsSkipOwner
enum class ECharFlagsSkipOwner : uint8_t
{
	ECharFlagsSkipOwner__WantsToRun = 0,
	ECharFlagsSkipOwner__WantsToSprint = 1,
	ECharFlagsSkipOwner__WantsToSprintingAuto = 2,
	ECharFlagsSkipOwner__WantsToRollingLeft = 3,
	ECharFlagsSkipOwner__WantsToRollingRight = 4,
	ECharFlagsSkipOwner__AimStateActive = 5,
	ECharFlagsSkipOwner__IsThirdPerson = 6,
	ECharFlagsSkipOwner__IsReviving = 7,
	ECharFlagsSkipOwner__IgnoreRotation = 8,
	ECharFlagsSkipOwner__IsWeaponObstructed = 9,
	ECharFlagsSkipOwner__IsCoatEquipped = 10,
	ECharFlagsSkipOwner__IsThrowHigh = 11,
	ECharFlagsSkipOwner__WantsToCancelVault = 12,
	ECharFlagsSkipOwner__IsScopingRemote = 13,
	ECharFlagsSkipOwner__IsAimingRemote = 14,
	ECharFlagsSkipOwner__IsFirstPersonRemote = 15,
	ECharFlagsSkipOwner__IsInVehicleRemote = 16,
	ECharFlagsSkipOwner__IsPeekLeftRemote = 17,
	ECharFlagsSkipOwner__IsPeekRightRemote = 18,
	ECharFlagsSkipOwner__IsHoldingAngled = 19,
	ECharFlagsSkipOwner__ECharFlagsSkipOwner_MAX = 20
};


// Enum TslGame.EPunchDamageType
enum class EPunchDamageType : uint8_t
{
	PunchDamage_Light              = 0,
	PunchDamage_Heavy              = 1,
	PunchDamage_MAX                = 2
};


// Enum TslGame.EMovementType
enum class EMovementType : uint8_t
{
	M_StandWalk                    = 0,
	M_StandRun                     = 1,
	M_StandSprint                  = 2,
	M_CrouchWalk                   = 3,
	M_CrouchRun                    = 4,
	M_CrouchSprint                 = 5,
	M_ProneWalk                    = 6,
	M_ProneRun                     = 7,
	M_ProneSprint                  = 8,
	M_StandScope                   = 9,
	M_CrouchScope                  = 10,
	M_ProneScope                   = 11,
	M_StandAim                     = 12,
	M_CrouchAim                    = 13,
	M_ProneAim                     = 14,
	M_Swim                         = 15,
	M_UnderwaterSwim               = 16,
	M_DBNO                         = 17,
	M_MAX                          = 18
};


// Enum TslGame.ERaycastDirection
enum class ERaycastDirection : uint8_t
{
	ERaycastDirection__Forward     = 0,
	ERaycastDirection__Down_45_Degrees = 1,
	ERaycastDirection__Down        = 2,
	ERaycastDirection__ERaycastDirection_MAX = 3
};


// Enum TslGame.EPerceptionType
enum class EPerceptionType : uint8_t
{
	EPerceptionType__Sight         = 0,
	EPerceptionType__Disapp        = 1,
	EPerceptionType__Hearing       = 2,
	EPerceptionType__Attack        = 3,
	EPerceptionType__None          = 4,
	EPerceptionType__EPerceptionType_MAX = 5
};


// Enum TslGame.EAttachParent
enum class EAttachParent : uint8_t
{
	EAttachParent__None            = 0,
	EAttachParent__Character       = 1,
	EAttachParent__WeaponGun       = 2,
	EAttachParent__EAttachParent_MAX = 3
};


// Enum TslGame.EBuffCountType
enum class EBuffCountType : uint8_t
{
	EBuffCountType__HideCount      = 0,
	EBuffCountType__ItemCount      = 1,
	EBuffCountType__AmmoCount      = 2,
	EBuffCountType__EBuffCountType_MAX = 3
};


// Enum TslGame.ETslFenceSelector
enum class ETslFenceSelector : uint8_t
{
	ETslFenceSelector__None        = 0,
	ETslFenceSelector__Use         = 1,
	ETslFenceSelector__Use01       = 2,
	ETslFenceSelector__Use02       = 3,
	ETslFenceSelector__Use03       = 4,
	ETslFenceSelector__ETslFenceSelector_MAX = 5
};


// Enum TslGame.EReactionObjectType
enum class EReactionObjectType : uint8_t
{
	EReactionObjectType__Fence     = 0,
	EReactionObjectType__Hay       = 1,
	EReactionObjectType__Camera    = 2,
	EReactionObjectType__EReactionObjectType_MAX = 3
};


// Enum TslGame.EReactionType
enum class EReactionType : uint8_t
{
	EReactionType__Reaciton_None   = 0,
	EReactionType__Reaction_Physics = 1,
	EReactionType__Reaction_Destructible = 2,
	EReactionType__EReactionType_MAX = 3
};


// Enum TslGame.EFlowTextState
enum class EFlowTextState : uint8_t
{
	EFlowTextState__None           = 0,
	EFlowTextState__Wait           = 1,
	EFlowTextState__FlowLeftOut    = 2,
	EFlowTextState__FlowLeftIn     = 3,
	EFlowTextState__FlowRightOut   = 4,
	EFlowTextState__FlowRightIn    = 5,
	EFlowTextState__BlinkAnimation = 6,
	EFlowTextState__EFlowTextState_MAX = 7
};


// Enum TslGame.EBBDetachedBehaviour
enum class EBBDetachedBehaviour : uint8_t
{
	EBBDetachedBehaviour__Stationary = 0,
	EBBDetachedBehaviour__MoveToCenterOfMap = 1,
	EBBDetachedBehaviour__Expand   = 2,
	EBBDetachedBehaviour__ExpandAndMoveToCenterOfMap = 3,
	EBBDetachedBehaviour__EBBDetachedBehaviour_MAX = 4
};


// Enum TslGame.EBBHolderSelectMethod
enum class EBBHolderSelectMethod : uint8_t
{
	EBBHolderSelectMethod__Closest = 0,
	EBBHolderSelectMethod__Random  = 1,
	EBBHolderSelectMethod__EBBHolderSelectMethod_MAX = 2
};


// Enum TslGame.EWarModeCarePackageKitType
enum class EWarModeCarePackageKitType : uint8_t
{
	EWarModeCarePackageKitType__CarepackageKit_Off = 0,
	EWarModeCarePackageKitType__CarepackageKit_Basic = 1,
	EWarModeCarePackageKitType__CarepackageKit_ARKit = 2,
	EWarModeCarePackageKitType__CarepackageKit_SRKit = 3,
	EWarModeCarePackageKitType__CarepackageKit_MAX = 4
};


// Enum TslGame.EPickRule
enum class EPickRule : uint8_t
{
	EPickRule__PR_Random           = 0,
	EPickRule__PR_TopScore         = 1,
	EPickRule__PR_MAX              = 2
};


// Enum TslGame.EVoiceChatChannel
enum class EVoiceChatChannel : uint8_t
{
	EVoiceChatChannel__All         = 0,
	EVoiceChatChannel__TeamOnly    = 1,
	EVoiceChatChannel__None        = 2,
	EVoiceChatChannel__EVoiceChatChannel_MAX = 3
};


// Enum TslGame.EVoiceInputMode
enum class EVoiceInputMode : uint8_t
{
	EVoiceInputMode__OpenMic       = 0,
	EVoiceInputMode__PushToTalk    = 1,
	EVoiceInputMode__Disable       = 2,
	EVoiceInputMode__EVoiceInputMode_MAX = 3
};


// Enum TslGame.ERacingGamePhase
enum class ERacingGamePhase : uint8_t
{
	ERacingGamePhase__NotStarted   = 0,
	ERacingGamePhase__PrepareState = 1,
	ERacingGamePhase__InProgress   = 2,
	ERacingGamePhase__EndPhase     = 3,
	ERacingGamePhase__End          = 4,
	ERacingGamePhase__ERacingGamePhase_MAX = 5
};


// Enum TslGame.ETslHelperInputActionType
enum class ETslHelperInputActionType : uint8_t
{
	ETslHelperInputActionType__DPad = 0,
	ETslHelperInputActionType__Shoulder = 1,
	ETslHelperInputActionType__Face = 2,
	ETslHelperInputActionType__Keyboard = 3,
	ETslHelperInputActionType__ETslHelperInputActionType_MAX = 4
};


// Enum TslGame.ETslGMCommandInGameHelperButtonType
enum class ETslGMCommandInGameHelperButtonType : uint8_t
{
	ETslGMCommandInGameHelperButtonType__NO_PARAM = 0,
	ETslGMCommandInGameHelperButtonType__ONE_PARAM = 1,
	ETslGMCommandInGameHelperButtonType__ETslGMCommandInGameHelperButtonType_MAX = 2
};


// Enum TslGame.EVendingMachineState
enum class EVendingMachineState : uint8_t
{
	EVendingMachineState__ACTIVATED = 0,
	EVendingMachineState__DEACTIVATED_TEMPORARILY_BY_PICK_DELAY = 1,
	EVendingMachineState__DEACTIVATED_TEMPORARILY_BY_DAMAGE = 2,
	EVendingMachineState__DEACTIVATED_TEMPORARILY_BY_JACKPOT = 3,
	EVendingMachineState__DEACTIVATED_PERMANANTLY_BY_EXCEEDED_MAX_PICK_COUNT = 4,
	EVendingMachineState__EVendingMachineState_MAX = 5
};


// Enum TslGame.EOutGameMontageState
enum class EOutGameMontageState : uint8_t
{
	EOutGameMontageState__Default  = 0,
	EOutGameMontageState__Playing  = 1,
	EOutGameMontageState__Interrupted = 2,
	EOutGameMontageState__Finished = 3,
	EOutGameMontageState__EOutGameMontageState_MAX = 4
};


// Enum TslGame.EItemRequestType
enum class EItemRequestType : uint8_t
{
	EItemRequestType__None         = 0,
	EItemRequestType__Heal         = 1,
	EItemRequestType__Ammo         = 2,
	EItemRequestType__EItemRequestType_MAX = 3
};


// Enum TslGame.JukeBoxAnimState
enum class EJukeBoxAnimState : uint8_t
{
	JukeBoxAnimState__OPEN         = 0,
	JukeBoxAnimState__CLOSED       = 1,
	JukeBoxAnimState__JukeBoxAnimState_MAX = 2
};


// Enum TslGame.ELivingThingThreatLevel
enum class ELivingThingThreatLevel : uint8_t
{
	ELivingThingThreatLevel__NoChanged = 0,
	ELivingThingThreatLevel__IncrementThreatLevel = 1,
	ELivingThingThreatLevel__DecrementThreatLevel = 2,
	ELivingThingThreatLevel__Calm  = 3,
	ELivingThingThreatLevel__Fear  = 4,
	ELivingThingThreatLevel__Panic = 5,
	ELivingThingThreatLevel__Dead  = 6,
	ELivingThingThreatLevel__MAX   = 7,
	ELivingThingThreatLevel__ELivingThingThreatLevel_MAX = 8
};


// Enum TslGame.ELivingThingCustomEvent
enum class ELivingThingCustomEvent : uint8_t
{
	ELivingThingCustomEvent__HittedByBullet = 0,
	ELivingThingCustomEvent__HittedByExplosion = 1,
	ELivingThingCustomEvent__HittedByCar = 2,
	ELivingThingCustomEvent__HittedByCharacter = 3,
	ELivingThingCustomEvent__HittedByLivingThing = 4,
	ELivingThingCustomEvent__HittedByPhysicsBody = 5,
	ELivingThingCustomEvent__HittedByOthers = 6,
	ELivingThingCustomEvent__Custom1 = 7,
	ELivingThingCustomEvent__Custom2 = 8,
	ELivingThingCustomEvent__Custom3 = 9,
	ELivingThingCustomEvent__Custom4 = 10,
	ELivingThingCustomEvent__Custom5 = 11,
	ELivingThingCustomEvent__Custom6 = 12,
	ELivingThingCustomEvent__Custom7 = 13,
	ELivingThingCustomEvent__Custom8 = 14,
	ELivingThingCustomEvent__Custom9 = 15,
	ELivingThingCustomEvent__Custom10 = 16,
	ELivingThingCustomEvent__Custom11 = 17,
	ELivingThingCustomEvent__Custom12 = 18,
	ELivingThingCustomEvent__Custom13 = 19,
	ELivingThingCustomEvent__Custom14 = 20,
	ELivingThingCustomEvent__Custom15 = 21,
	ELivingThingCustomEvent__Custom16 = 22,
	ELivingThingCustomEvent__Custom17 = 23,
	ELivingThingCustomEvent__Custom18 = 24,
	ELivingThingCustomEvent__Custom19 = 25,
	ELivingThingCustomEvent__Custom20 = 26,
	ELivingThingCustomEvent__MAX   = 27,
	ELivingThingCustomEvent__ELivingThingCustomEvent_MAX = 28
};


// Enum TslGame.ETLMeshSelection
enum class ETLMeshSelection : uint8_t
{
	ETLMeshSelection__Auto         = 0,
	ETLMeshSelection__StaticMesh   = 1,
	ETLMeshSelection__SkeletalMesh = 2,
	ETLMeshSelection__None         = 3,
	ETLMeshSelection__ETLMeshSelection_MAX = 4
};


// Enum TslGame.ELobbyCharacterPosition
enum class ELobbyCharacterPosition : uint8_t
{
	ELobbyCharacterPosition__Position1 = 0,
	ELobbyCharacterPosition__Position2 = 1,
	ELobbyCharacterPosition__Position3 = 2,
	ELobbyCharacterPosition__Position4 = 3,
	ELobbyCharacterPosition__ELobbyCharacterPosition_MAX = 4
};


// Enum TslGame.ELobbyCharacterReadyType
enum class ELobbyCharacterReadyType : uint8_t
{
	ELobbyCharacterReadyType__Ready = 0,
	ELobbyCharacterReadyType__NotReady = 1,
	ELobbyCharacterReadyType__ReadyToNotReady = 2,
	ELobbyCharacterReadyType__NotReadyToReady = 3,
	ELobbyCharacterReadyType__EmoteToReady = 4,
	ELobbyCharacterReadyType__EmoteToNotReady = 5,
	ELobbyCharacterReadyType__ELobbyCharacterReadyType_MAX = 6
};


// Enum TslGame.EObserverPlayerListType
enum class EObserverPlayerListType : uint8_t
{
	EObserverPlayerListType__Distance = 0,
	EObserverPlayerListType__Kill  = 1,
	EObserverPlayerListType__Survivor = 2,
	EObserverPlayerListType__Max   = 3,
	EObserverPlayerListType__EObserverPlayerListType_MAX = 4
};


// Enum TslGame.ETslParticleCullType
enum class ETslParticleCullType : uint8_t
{
	ETslParticleCullType__None     = 0,
	ETslParticleCullType__Distance = 1,
	ETslParticleCullType__Frustum  = 2,
	ETslParticleCullType__LastRenderedTime = 3,
	ETslParticleCullType__SameTransform = 4,
	ETslParticleCullType__NearbyTransform = 5,
	ETslParticleCullType__DistAndFrustumAndNear = 6,
	ETslParticleCullType__All      = 7,
	ETslParticleCullType__ETslParticleCullType_MAX = 8
};


// Enum TslGame.ETslParticleGroupPriority
enum class ETslParticleGroupPriority : uint8_t
{
	ETslParticleGroupPriority__High = 0,
	ETslParticleGroupPriority__Low = 1,
	ETslParticleGroupPriority__ETslParticleGroupPriority_MAX = 2
};


// Enum TslGame.ECustomDamageZoneType
enum class ECustomDamageZoneType : uint8_t
{
	ECustomDamageZoneType__Head    = 0,
	ECustomDamageZoneType__UpperBody = 1,
	ECustomDamageZoneType__LowerBody = 2,
	ECustomDamageZoneType__Arms    = 3,
	ECustomDamageZoneType__Legs    = 4,
	ECustomDamageZoneType__ECustomDamageZoneType_MAX = 5
};


// Enum TslGame.ECustomDamageWeaponClass
enum class ECustomDamageWeaponClass : uint8_t
{
	ECustomDamageWeaponClass__Bullet = 0,
	ECustomDamageWeaponClass__Melee = 1,
	ECustomDamageWeaponClass__ECustomDamageWeaponClass_MAX = 2
};


// Enum TslGame.EArenaStartType
enum class EArenaStartType : uint8_t
{
	EArenaStartType__Player        = 0,
	EArenaStartType__AircraftStart = 1,
	EArenaStartType__AircraftEnd   = 2,
	EArenaStartType__EArenaStartType_MAX = 3
};


// Enum TslGame.ERacingGameScoreType
enum class ERacingGameScoreType : uint8_t
{
	ERacingGameScoreType__CheckPoint = 0,
	ERacingGameScoreType__Trick    = 1,
	ERacingGameScoreType__Kill     = 2,
	ERacingGameScoreType__ERacingGameScoreType_MAX = 3
};


// Enum TslGame.EMolotovSimulationType
enum class EMolotovSimulationType : uint8_t
{
	EMolotovSimulationType__Molotov_SimulationImpact = 0,
	EMolotovSimulationType__Molotov_SimulationProjectile = 1,
	EMolotovSimulationType__Molotov_SimulationFragment = 2,
	EMolotovSimulationType__Molotov_SimulationVolumetric = 3,
	EMolotovSimulationType__Molotov_MAX = 4
};


// Enum TslGame.ESpikeDeploymentState
enum class ESpikeDeploymentState : uint8_t
{
	ESpikeDeploymentState__PreDeploy = 0,
	ESpikeDeploymentState__Deploying = 1,
	ESpikeDeploymentState__PostDeploy = 2,
	ESpikeDeploymentState__Popped  = 3,
	ESpikeDeploymentState__Idle    = 4,
	ESpikeDeploymentState__ESpikeDeploymentState_MAX = 5
};


// Enum TslGame.EWarheadExplodedState
enum class EWarheadExplodedState : uint8_t
{
	EWarheadExplodedState__NotExploded = 0,
	EWarheadExplodedState__Exploded = 1,
	EWarheadExplodedState__EWarheadExplodedState_MAX = 2
};


// Enum TslGame.ETslPubgIdAssetType
enum class ETslPubgIdAssetType : uint8_t
{
	ETslPubgIdAssetType__NONE      = 0,
	ETslPubgIdAssetType__NAMEPLATE = 1,
	ETslPubgIdAssetType__EMBLEM    = 2,
	ETslPubgIdAssetType__EMBLEM_ANIMATED = 3,
	ETslPubgIdAssetType__MEDAL     = 4,
	ETslPubgIdAssetType__ETslPubgIdAssetType_MAX = 5
};


// Enum TslGame.ETslReferenceObjType
enum class ETslReferenceObjType : uint8_t
{
	ETslReferenceObjType__GameMode = 0,
	ETslReferenceObjType__Character = 1,
	ETslReferenceObjType__Preload  = 2,
	ETslReferenceObjType__ETslReferenceObjType_MAX = 3
};


// Enum TslGame.EReplayTimelineMode
enum class EReplayTimelineMode : uint8_t
{
	EReplayTimelineMode__ReplayPlay = 0,
	EReplayTimelineMode__ReplayEditor = 1,
	EReplayTimelineMode__ReplayRender = 2,
	EReplayTimelineMode__EReplayTimelineMode_MAX = 3
};


// Enum TslGame.ESpraySystemMessage
enum class ESpraySystemMessage : uint8_t
{
	ESpraySystemMessage__EEmpty    = 0,
	ESpraySystemMessage__EBlocked  = 1,
	ESpraySystemMessage__EOutRange = 2,
	ESpraySystemMessage__EInvalidComponent = 3,
	ESpraySystemMessage__ESpraySystemMessage_MAX = 4
};


// Enum TslGame.EAnimSecondaryLocomotionState
enum class EAnimSecondaryLocomotionState : uint8_t
{
	EAnimSecondaryLocomotionState__SLS_Freefall = 0,
	EAnimSecondaryLocomotionState__SLS_Parachute = 1,
	EAnimSecondaryLocomotionState__SLS_Swim = 2,
	EAnimSecondaryLocomotionState__SLS_DBNO = 3,
	EAnimSecondaryLocomotionState__SLS_Reviving = 4,
	EAnimSecondaryLocomotionState__SLS_Flying = 5,
	EAnimSecondaryLocomotionState__SLS_EmergencyPickup = 6,
	EAnimSecondaryLocomotionState__SLS_ActiveRagdoll = 7,
	EAnimSecondaryLocomotionState__SLS_Vaulting = 8,
	EAnimSecondaryLocomotionState__SLS_None = 9,
	EAnimSecondaryLocomotionState__SLS_MAX = 10
};


// Enum TslGame.ETrainHeadingDir
enum class ETrainHeadingDir : uint8_t
{
	ETrainHeadingDir__XPositive    = 0,
	ETrainHeadingDir__XNegative    = 1,
	ETrainHeadingDir__YPositive    = 2,
	ETrainHeadingDir__YNegative    = 3,
	ETrainHeadingDir__ETrainHeadingDir_MAX = 4
};


// Enum TslGame.ESwitcherHideWhen
enum class ESwitcherHideWhen : uint8_t
{
	ESwitcherHideWhen__UsingKeyboardMouse = 0,
	ESwitcherHideWhen__UsingGamepad = 1,
	ESwitcherHideWhen__ESwitcherHideWhen_MAX = 2
};


// Enum TslGame.EArenaHelpType
enum class EArenaHelpType : uint8_t
{
	EArenaHelpType__LoadoutHelp    = 0,
	EArenaHelpType__MapHelp        = 1,
	EArenaHelpType__ReportHelp     = 2,
	EArenaHelpType__LoadoutHelp_Gamepad = 3,
	EArenaHelpType__MapHelp_Gamepad = 4,
	EArenaHelpType__ReportHelp_Gamepad = 5,
	EArenaHelpType__EArenaHelpType_MAX = 6
};


// Enum TslGame.ENoReloadGuideType
enum class ENoReloadGuideType : uint8_t
{
	ENoReloadGuideType__Alwyas     = 0,
	ENoReloadGuideType__WhenCurrentWeapon = 1,
	ENoReloadGuideType__ENoReloadGuideType_MAX = 2
};


// Enum TslGame.EMeleeThrowState
enum class EMeleeThrowState : uint8_t
{
	EMeleeThrowState__Idle         = 0,
	EMeleeThrowState__Prepare      = 1,
	EMeleeThrowState__Throw        = 2,
	EMeleeThrowState__EMeleeThrowState_MAX = 3
};


// Enum TslGame.EHitCheckType
enum class EHitCheckType : uint8_t
{
	EHitCheckType__HitCheck_Once   = 0,
	EHitCheckType__HitCheck_Multi  = 1,
	EHitCheckType__HitCheck_MAX    = 2
};


// Enum TslGame.EWeaponTransitionState
enum class EWeaponTransitionState : uint8_t
{
	EWeaponTransitionState__Stable = 0,
	EWeaponTransitionState__Arming = 1,
	EWeaponTransitionState__UnArming = 2,
	EWeaponTransitionState__EWeaponTransitionState_MAX = 3
};


// Enum TslGame.ESoundType
enum class ESoundType : uint8_t
{
	ESoundType__Count              = 0,
	ESoundType__Start              = 1,
	ESoundType__ESoundType_MAX     = 2
};


// Enum TslGame.ERoundEndPointType
enum class ERoundEndPointType : uint8_t
{
	ERoundEndPointType__Empty      = 0,
	ERoundEndPointType__Lost       = 1,
	ERoundEndPointType__Won        = 2,
	ERoundEndPointType__ERoundEndPointType_MAX = 3
};


// Enum TslGame.EEventBoostState
enum class EEventBoostState : uint8_t
{
	EEventBoostState__Normal       = 0,
	EEventBoostState__UsingBoost   = 1,
	EEventBoostState__CantUse      = 2,
	EEventBoostState__EEventBoostState_MAX = 3
};


// Enum TslGame.EVehicleAIAvoidanceMode
enum class EVehicleAIAvoidanceMode : uint8_t
{
	EVehicleAIAvoidanceMode__Off   = 0,
	EVehicleAIAvoidanceMode__SingleTrace = 1,
	EVehicleAIAvoidanceMode__MultiTrace = 2,
	EVehicleAIAvoidanceMode__EVehicleAIAvoidanceMode_MAX = 3
};


// Enum TslGame.ESpawnType
enum class ESpawnType : uint8_t
{
	ESpawnType__Single             = 0,
	ESpawnType__ContinuousOnTimer  = 1,
	ESpawnType__ContinuousOnDeath  = 2,
	ESpawnType__ESpawnType_MAX     = 3
};


// Enum TslGame.TslAudioInterpolation
enum class ETslAudioInterpolation : uint8_t
{
	TslAudioInterpolation__AudioInterpolation_Log3 = 0,
	TslAudioInterpolation__AudioInterpolation_Sine = 1,
	TslAudioInterpolation__AudioInterpolation_Log1 = 2,
	TslAudioInterpolation__AudioInterpolation_InvSCurve = 3,
	TslAudioInterpolation__AudioInterpolation_Linear = 4,
	TslAudioInterpolation__AudioInterpolation_SCurve = 5,
	TslAudioInterpolation__AudioInterpolation_Exp1 = 6,
	TslAudioInterpolation__AudioInterpolation_SineRecip = 7,
	TslAudioInterpolation__AudioInterpolation_Exp3 = 8,
	TslAudioInterpolation__AudioInterpolation_MAX = 9
};


// Enum TslGame.eVehicleSpawnStatus
enum class EeVehicleSpawnStatus : uint8_t
{
	eVehicleSpawnStatus__SpawnNone = 0,
	eVehicleSpawnStatus__SpawnAlived = 1,
	eVehicleSpawnStatus__SpawnDestroyed = 2,
	eVehicleSpawnStatus__eVehicleSpawnStatus_MAX = 3
};


// Enum TslGame.ESurfaceEffect
enum class ESurfaceEffect : uint8_t
{
	ESurfaceEffect__S_None         = 0,
	ESurfaceEffect__S_Concrete_Roll = 1,
	ESurfaceEffect__S_Concrete_Skid = 2,
	ESurfaceEffect__S_Concrete_Spin = 3,
	ESurfaceEffect__S_Dirt_Roll    = 4,
	ESurfaceEffect__S_Dirt_Skid    = 5,
	ESurfaceEffect__S_Dirt_Spin    = 6,
	ESurfaceEffect__S_Water_Roll   = 7,
	ESurfaceEffect__S_Water_Skid   = 8,
	ESurfaceEffect__S_Water_Spin   = 9,
	ESurfaceEffect__S_Metal_Roll   = 10,
	ESurfaceEffect__S_Metal_Skid   = 11,
	ESurfaceEffect__S_Metal_Spin   = 12,
	ESurfaceEffect__S_Wood_Roll    = 13,
	ESurfaceEffect__S_Wood_Skid    = 14,
	ESurfaceEffect__S_Wood_Spin    = 15,
	ESurfaceEffect__S_Rock_Roll    = 16,
	ESurfaceEffect__S_Rock_Skid    = 17,
	ESurfaceEffect__S_Rock_Spin    = 18,
	ESurfaceEffect__S_Grass_Roll   = 19,
	ESurfaceEffect__S_Grass_Skid   = 20,
	ESurfaceEffect__S_Grass_Spin   = 21,
	ESurfaceEffect__S_Sand_Roll    = 22,
	ESurfaceEffect__S_Sand_Skid    = 23,
	ESurfaceEffect__S_Sand_Spin    = 24,
	ESurfaceEffect__S_Concrete_Brake = 25,
	ESurfaceEffect__S_Dirt_Brake   = 26,
	ESurfaceEffect__S_Water_Brake  = 27,
	ESurfaceEffect__S_Metal_Brake  = 28,
	ESurfaceEffect__S_Wood_Brake   = 29,
	ESurfaceEffect__S_Rock_Brake   = 30,
	ESurfaceEffect__S_Grass_Brake  = 31,
	ESurfaceEffect__S_Sand_Brake   = 32,
	ESurfaceEffect__S_Snow_Brake   = 33,
	ESurfaceEffect__S_SnowRock_Brake = 34,
	ESurfaceEffect__S_Ice_Brake    = 35,
	ESurfaceEffect__S_Common_BrakeDisc = 36,
	ESurfaceEffect__S_Concrete_Punctured_Roll = 37,
	ESurfaceEffect__S_Concrete_Punctured_Skid = 38,
	ESurfaceEffect__S_Concrete_Punctured_Spin = 39,
	ESurfaceEffect__S_Concrete_Punctured_Brake = 40,
	ESurfaceEffect__S_Snow_Roll    = 41,
	ESurfaceEffect__S_Snow_Skid    = 42,
	ESurfaceEffect__S_Snow_Spin    = 43,
	ESurfaceEffect__S_SnowRock_Roll = 44,
	ESurfaceEffect__S_SnowRock_Skid = 45,
	ESurfaceEffect__S_SnowRock_Spin = 46,
	ESurfaceEffect__S_Ice_Roll     = 47,
	ESurfaceEffect__S_Ice_Skid     = 48,
	ESurfaceEffect__S_Ice_Spin     = 49,
	ESurfaceEffect__S_Mud_Roll     = 50,
	ESurfaceEffect__S_Mud_Skid     = 51,
	ESurfaceEffect__S_Mud_Spin     = 52,
	ESurfaceEffect__S_Mud_Brake    = 53,
	ESurfaceEffect__S_Common_Neutral = 54,
	ESurfaceEffect__S_MAX          = 55
};


// Enum TslGame.EWeaponDisplayZoomState
enum class EWeaponDisplayZoomState : uint8_t
{
	EWeaponDisplayZoomState__ZoomState_Default = 0,
	EWeaponDisplayZoomState__ZoomState_Charm = 1,
	EWeaponDisplayZoomState__ZoomState_MAX = 2
};


// Enum TslGame.EUltAutoEquipItemType
enum class EUltAutoEquipItemType : uint8_t
{
	EUltAutoEquipItemType__SubParts = 0,
	EUltAutoEquipItemType__Throwable = 1,
	EUltAutoEquipItemType__Boost   = 2,
	EUltAutoEquipItemType__Heal    = 3,
	EUltAutoEquipItemType__Other   = 4,
	EUltAutoEquipItemType__EUltAutoEquipItemType_MAX = 5
};


// Enum TslGame.ECompareTeamDist
enum class ECompareTeamDist : uint8_t
{
	ECompareTeamDist__CurDest      = 0,
	ECompareTeamDist__FinalDest    = 1,
	ECompareTeamDist__SafeZone     = 2,
	ECompareTeamDist__ECompareTeamDist_MAX = 3
};


// Enum TslGame.EBlendSequenceByBoolStartType
enum class EBlendSequenceByBoolStartType : uint8_t
{
	EBlendSequenceByBoolStartType__Restart = 0,
	EBlendSequenceByBoolStartType__SameTime = 1,
	EBlendSequenceByBoolStartType__EBlendSequenceByBoolStartType_MAX = 2
};


// Enum TslGame.EJumpStartAnimationType
enum class EJumpStartAnimationType : uint8_t
{
	EJumpStartAnimationType__Stationary = 0,
	EJumpStartAnimationType__Forward = 1,
	EJumpStartAnimationType__Backward = 2,
	EJumpStartAnimationType__EJumpStartAnimationType_MAX = 3
};


// Enum TslGame.ETslLocomotionNodeState
enum class ETslLocomotionNodeState : uint8_t
{
	ETslLocomotionNodeState__Idle  = 0,
	ETslLocomotionNodeState__Locomotion = 1,
	ETslLocomotionNodeState__Start = 2,
	ETslLocomotionNodeState__Stop_Left = 3,
	ETslLocomotionNodeState__Stop_Right = 4,
	ETslLocomotionNodeState__Pivot_Left = 5,
	ETslLocomotionNodeState__Pivot_Right = 6,
	ETslLocomotionNodeState__FastTurn_Pivot = 7,
	ETslLocomotionNodeState__ETslLocomotionNodeState_MAX = 8
};


// Enum TslGame.ETslLocomotionStateChangeType
enum class ETslLocomotionStateChangeType : uint8_t
{
	ETslLocomotionStateChangeType__None = 0,
	ETslLocomotionStateChangeType__Blending = 1,
	ETslLocomotionStateChangeType__NoBlending = 2,
	ETslLocomotionStateChangeType__BlendingSameTime = 3,
	ETslLocomotionStateChangeType__ETslLocomotionStateChangeType_MAX = 4
};


// Enum TslGame.FPlaySequenceFromAnimDBMapAnimType
enum class EFPlaySequenceFromAnimDBMapAnimType : uint8_t
{
	FPlaySequenceFromAnimDBMapAnimType__Base = 0,
	FPlaySequenceFromAnimDBMapAnimType__Transition = 1,
	FPlaySequenceFromAnimDBMapAnimType__TransitionStance = 2,
	FPlaySequenceFromAnimDBMapAnimType__FPlaySequenceFromAnimDBMapAnimType_MAX = 3
};


// Enum TslGame.ERotateBoneInputType
enum class ERotateBoneInputType : uint8_t
{
	ERotateBoneInputType__Rotator  = 0,
	ERotateBoneInputType__AngleAxis = 1,
	ERotateBoneInputType__ERotateBoneInputType_MAX = 2
};


// Enum TslGame.ERotateBoneSpace
enum class ERotateBoneSpace : uint8_t
{
	ERotateBoneSpace__BoneSpace    = 0,
	ERotateBoneSpace__LocalSpace   = 1,
	ERotateBoneSpace__WorldSpace   = 2,
	ERotateBoneSpace__ERotateBoneSpace_MAX = 3
};


// Enum TslGame.ECharacterInteractionType
enum class ECharacterInteractionType : uint8_t
{
	ECharacterInteractionType__Revive_Interact = 0,
	ECharacterInteractionType__InstantRevivalKit_Interact = 1,
	ECharacterInteractionType__TeamMateEmote_Interact = 2,
	ECharacterInteractionType__ECharacterInteractionType_MAX = 3
};


// Enum TslGame.EKickProcess
enum class EKickProcess : uint8_t
{
	EKickProcess__Disconnect       = 0,
	EKickProcess__Shutdown         = 1,
	EKickProcess__ShutdownIn10Sec  = 2,
	EKickProcess__EKickProcess_MAX = 3
};


// Enum TslGame.EDirectMessageType
enum class EDirectMessageType : uint8_t
{
	EDirectMessageType__Radio      = 0,
	EDirectMessageType__Direct     = 1,
	EDirectMessageType__DirectReply = 2,
	EDirectMessageType__FriendLogin = 3,
	EDirectMessageType__Warning    = 4,
	EDirectMessageType__System     = 5,
	EDirectMessageType__EDirectMessageType_MAX = 6
};


// Enum TslGame.EFutsalGamePhase
enum class EFutsalGamePhase : uint8_t
{
	EFutsalGamePhase__Waiting      = 0,
	EFutsalGamePhase__FirstHalf    = 1,
	EFutsalGamePhase__SecondHalf   = 2,
	EFutsalGamePhase__AddedTime    = 3,
	EFutsalGamePhase__End          = 4,
	EFutsalGamePhase__EFutsalGamePhase_MAX = 5
};


// Enum TslGame.EUnarmedAnimType
enum class EUnarmedAnimType : uint8_t
{
	EUnarmedAnimType__Default      = 0,
	EUnarmedAnimType__Spray        = 1,
	EUnarmedAnimType__EUnarmedAnimType_MAX = 2
};


// Enum TslGame.EInventorySlotStatePad
enum class EInventorySlotStatePad : uint8_t
{
	EInventorySlotStatePad__Normal = 0,
	EInventorySlotStatePad__Focus  = 1,
	EInventorySlotStatePad__Link   = 2,
	EInventorySlotStatePad__Selfput = 3,
	EInventorySlotStatePad__Disabled = 4,
	EInventorySlotStatePad__EInventorySlotStatePad_MAX = 5
};


// Enum TslGame.EDualMatchingState
enum class EDualMatchingState : uint8_t
{
	EDualMatchingState__NotMatchingState = 0,
	EDualMatchingState__Matching   = 1,
	EDualMatchingState__GamePrepared = 2,
	EDualMatchingState__EDualMatchingState_MAX = 3
};


// Enum TslGame.ELastTeamIconState
enum class ELastTeamIconState : uint8_t
{
	ELastTeamIconState__Normal     = 0,
	ELastTeamIconState__Groggy     = 1,
	ELastTeamIconState__Die        = 2,
	ELastTeamIconState__ELastTeamIconState_MAX = 3
};


// Enum TslGame.ESeatState
enum class ESeatState : uint8_t
{
	ESeatState__Empty              = 0,
	ESeatState__Player             = 1,
	ESeatState__Teammate           = 2,
	ESeatState__Enemy              = 3,
	ESeatState__ESeatState_MAX     = 4
};


// Enum TslGame.ETslInputDeviceTypeBranch_BPOnly
enum class ETslInputDeviceTypeBranch_BPOnly : uint8_t
{
	ETslInputDeviceTypeBranch_BPOnly__KeyboardMouse = 0,
	ETslInputDeviceTypeBranch_BPOnly__XboxGamepad = 1,
	ETslInputDeviceTypeBranch_BPOnly__PS4Gamepad = 2,
	ETslInputDeviceTypeBranch_BPOnly__SwitchGamepad = 3,
	ETslInputDeviceTypeBranch_BPOnly__QuailGamepad = 4,
	ETslInputDeviceTypeBranch_BPOnly__ETslInputDeviceTypeBranch_MAX = 5
};


// Enum TslGame.ETslInputDeviceGroupBranch_BPOnly
enum class ETslInputDeviceGroupBranch_BPOnly : uint8_t
{
	ETslInputDeviceGroupBranch_BPOnly__KeyboardMouse = 0,
	ETslInputDeviceGroupBranch_BPOnly__Gamepad = 1,
	ETslInputDeviceGroupBranch_BPOnly__ETslInputDeviceGroupBranch_MAX = 2
};


// Enum TslGame.ETslPlatformTypeBranch_BPOnly
enum class ETslPlatformTypeBranch_BPOnly : uint8_t
{
	ETslPlatformTypeBranch_BPOnly__PC = 0,
	ETslPlatformTypeBranch_BPOnly__Xbox = 1,
	ETslPlatformTypeBranch_BPOnly__PS4 = 2,
	ETslPlatformTypeBranch_BPOnly__Quail = 3,
	ETslPlatformTypeBranch_BPOnly__Invalid = 4,
	ETslPlatformTypeBranch_BPOnly__ETslPlatformTypeBranch_MAX = 5
};


// Enum TslGame.ETslPlatformGroupBranch_BPOnly
enum class ETslPlatformGroupBranch_BPOnly : uint8_t
{
	ETslPlatformGroupBranch_BPOnly__PC = 0,
	ETslPlatformGroupBranch_BPOnly__Console = 1,
	ETslPlatformGroupBranch_BPOnly__ETslPlatformGroupBranch_MAX = 2
};


// Enum TslGame.EBuffPropertyType
enum class EBuffPropertyType : uint8_t
{
	EBuffPropertyType__CoolTime    = 0,
	EBuffPropertyType__MeleeDamageRatio = 1,
	EBuffPropertyType__OtherDamageRatio = 2,
	EBuffPropertyType__GetBoostOnDeal = 3,
	EBuffPropertyType__MovementSpeedModifier = 4,
	EBuffPropertyType__JumpVelocityModifier = 5,
	EBuffPropertyType__MaxHpModifier = 6,
	EBuffPropertyType__DecreaseRevivalCastTime = 7,
	EBuffPropertyType__ReloadingSpeedModifier = 8,
	EBuffPropertyType__EBuffPropertyType_MAX = 9
};


// Enum TslGame.EAutoSpectatePriority
enum class EAutoSpectatePriority : uint8_t
{
	EAutoSpectatePriority__None    = 0,
	EAutoSpectatePriority__Vehicle = 1,
	EAutoSpectatePriority__Distance = 2,
	EAutoSpectatePriority__Combat  = 3,
	EAutoSpectatePriority__EAutoSpectatePriority_MAX = 4
};


// Enum TslGame.EFBRClass
enum class EFBRClass : uint8_t
{
	EFBRClass__WARRIOR             = 0,
	EFBRClass__RANGER              = 1,
	EFBRClass__WIZARD              = 2,
	EFBRClass__PALADIN             = 3,
	EFBRClass__EFBRClass_MAX       = 4
};


// Enum TslGame.EPartnerLevel
enum class EPartnerLevel : uint8_t
{
	EPartnerLevel__None            = 0,
	EPartnerLevel__Normal          = 1,
	EPartnerLevel__Lead            = 2,
	EPartnerLevel__EPartnerLevel_MAX = 3
};


// Enum TslGame.ELeagueMatchStatistic
enum class ELeagueMatchStatistic : uint8_t
{
	ELeagueMatchStatistic__Kill    = 0,
	ELeagueMatchStatistic__Damage  = 1,
	ELeagueMatchStatistic__Assist  = 2,
	ELeagueMatchStatistic__ELeagueMatchStatistic_MAX = 3
};


// Enum TslGame.ELeagueMatchResultState
enum class ELeagueMatchResultState : uint8_t
{
	ELeagueMatchResultState__None  = 0,
	ELeagueMatchResultState__WinnerWinnerChickenDinner = 1,
	ELeagueMatchResultState__Statistic = 2,
	ELeagueMatchResultState__Ranking = 3,
	ELeagueMatchResultState__ELeagueMatchResultState_MAX = 4
};


// Enum TslGame.EObserverHudAnimType
enum class EObserverHudAnimType : uint8_t
{
	EObserverHudAnimType__TeamWipeOutAnim = 0,
	EObserverHudAnimType__PersonalKillingSpreeAnim = 1,
	EObserverHudAnimType__TeamTotalKillingSpreeAnim = 2,
	EObserverHudAnimType__EObserverHudAnimType_MAX = 3
};


// Enum TslGame.EPreviewPlatformIconType
enum class EPreviewPlatformIconType : uint8_t
{
	EPreviewPlatformIconType__XboxOne = 0,
	EPreviewPlatformIconType__PS4  = 1,
	EPreviewPlatformIconType__Switch = 2,
	EPreviewPlatformIconType__Quail = 3,
	EPreviewPlatformIconType__None = 4,
	EPreviewPlatformIconType__EPreviewPlatformIconType_MAX = 5
};


// Enum TslGame.EMovementBaseType
enum class EMovementBaseType : uint8_t
{
	EMovementBaseType__None        = 0,
	EMovementBaseType__Train       = 1,
	EMovementBaseType__Ship        = 2,
	EMovementBaseType__COUNT       = 3,
	EMovementBaseType__EMovementBaseType_MAX = 4
};


// Enum TslGame.EGuardRank
enum class EGuardRank : uint8_t
{
	EGuardRank__Grunt              = 0,
	EGuardRank__Boss               = 1,
	EGuardRank__EGuardRank_MAX     = 2
};


// Enum TslGame.EBlueZoneShape
enum class EBlueZoneShape : uint8_t
{
	EBlueZoneShape__None           = 0,
	EBlueZoneShape__Circle         = 1,
	EBlueZoneShape__Rectangle      = 2,
	EBlueZoneShape__EBlueZoneShape_MAX = 3
};


// Enum TslGame.EGameZoneType
enum class EGameZoneType : uint8_t
{
	EGameZoneType__SafeZone        = 0,
	EGameZoneType__PlayZone        = 1,
	EGameZoneType__BlueZone        = 2,
	EGameZoneType__RedZone         = 3,
	EGameZoneType__BlackZone       = 4,
	EGameZoneType__EGameZoneType_MAX = 5
};


// Enum TslGame.ERespawnType
enum class ERespawnType : uint8_t
{
	ERespawnType__Airborne         = 0,
	ERespawnType__DeadPoint        = 1,
	ERespawnType__StartPoint       = 2,
	ERespawnType__Selectable       = 3,
	ERespawnType__RandomPoint      = 4,
	ERespawnType__CheckPoint       = 5,
	ERespawnType__ERespawnType_MAX = 6
};


// Enum TslGame.EPlatoonTeam
enum class EPlatoonTeam : uint8_t
{
	EPlatoonTeam__None             = 0,
	EPlatoonTeam__Blue             = 1,
	EPlatoonTeam__Red              = 2,
	EPlatoonTeam__EPlatoonTeam_MAX = 3
};


// Enum TslGame.EAutoRecoveryType
enum class EAutoRecoveryType : uint8_t
{
	EAutoRecoveryType__None        = 0,
	EAutoRecoveryType__Human       = 1,
	EAutoRecoveryType__Zombie      = 2,
	EAutoRecoveryType__HumanAndZombie = 3,
	EAutoRecoveryType__EAutoRecoveryType_MAX = 4
};


// Enum TslGame.EZombieVirusType
enum class EZombieVirusType : uint8_t
{
	EZombieVirusType__None         = 0,
	EZombieVirusType__Attacked     = 1,
	EZombieVirusType__All          = 2,
	EZombieVirusType__EZombieVirusType_MAX = 3
};


// Enum TslGame.ETeamMateEmoteErrorType
enum class ETeamMateEmoteErrorType : uint8_t
{
	ETeamMateEmoteErrorType__Normal = 0,
	ETeamMateEmoteErrorType__ExcessFollower = 1,
	ETeamMateEmoteErrorType__ExcessLimitDistance = 2,
	ETeamMateEmoteErrorType__ETeamMateEmoteErrorType_MAX = 3
};


// Enum TslGame.ERadioMessageInteractionType
enum class ERadioMessageInteractionType : uint8_t
{
	ERadioMessageInteractionType__DroppedItem = 0,
	ERadioMessageInteractionType__Vehicle = 1,
	ERadioMessageInteractionType__CarepackageOrDeadbox = 2,
	ERadioMessageInteractionType__VendingMachine = 3,
	ERadioMessageInteractionType__ERadioMessageInteractionType_MAX = 4
};


// Enum TslGame.ERadioMessageCategory
enum class ERadioMessageCategory : uint8_t
{
	ERadioMessageCategory__Affirmative = 0,
	ERadioMessageCategory__ThankYou = 1,
	ERadioMessageCategory__NeedMed = 2,
	ERadioMessageCategory__Negative = 3,
	ERadioMessageCategory__Sorry   = 4,
	ERadioMessageCategory__NeedAmmo = 5,
	ERadioMessageCategory__EnemySpotted = 6,
	ERadioMessageCategory__ItemSpotted = 7,
	ERadioMessageCategory__Ping    = 8,
	ERadioMessageCategory__HelpMe  = 9,
	ERadioMessageCategory__WayPoint = 10,
	ERadioMessageCategory__EmergencyPickup = 11,
	ERadioMessageCategory__TeamMateEmote = 12,
	ERadioMessageCategory__Max     = 13,
	ERadioMessageCategory__ERadioMessageCategory_MAX = 14
};


// Enum TslGame.EEquippedWeaponRTPC
enum class EEquippedWeaponRTPC : uint8_t
{
	EEquippedWeaponRTPC__None      = 0,
	EEquippedWeaponRTPC__HandBomb_Bottle = 1,
	EEquippedWeaponRTPC__HandBomb_Metal = 2,
	EEquippedWeaponRTPC__Melee     = 3,
	EEquippedWeaponRTPC__Pistol    = 4,
	EEquippedWeaponRTPC__SMG       = 5,
	EEquippedWeaponRTPC__AR        = 6,
	EEquippedWeaponRTPC__SR        = 7,
	EEquippedWeaponRTPC__Max       = 8,
	EEquippedWeaponRTPC__EEquippedWeaponRTPC_MAX = 9
};


// Enum TslGame.EForceRefreshDummy
enum class EForceRefreshDummy : uint8_t
{
	EForceRefreshDummy__Refresh1   = 0,
	EForceRefreshDummy__Refresh2   = 1,
	EForceRefreshDummy__EForceRefreshDummy_MAX = 2
};


// Enum TslGame.EViewModeActorCenterPosition
enum class EViewModeActorCenterPosition : uint8_t
{
	EViewModeActorCenterPosition__None = 0,
	EViewModeActorCenterPosition__Center = 1,
	EViewModeActorCenterPosition__Bottom = 2,
	EViewModeActorCenterPosition__EViewModeActorCenterPosition_MAX = 3
};


// Enum TslGame.EViewModeCategory
enum class EViewModeCategory : uint8_t
{
	EViewModeCategory__None        = 0,
	EViewModeCategory__Weapon      = 1,
	EViewModeCategory__Parachute   = 2,
	EViewModeCategory__Character   = 3,
	EViewModeCategory__Vehicle     = 4,
	EViewModeCategory__FloatingVehicle = 5,
	EViewModeCategory__LootCrate   = 6,
	EViewModeCategory__EViewModeCategory_MAX = 7
};


// Enum TslGame.ESystemMenuButtonType
enum class ESystemMenuButtonType : uint8_t
{
	ESystemMenuButtonType__RESUME  = 0,
	ESystemMenuButtonType__SETTINGS = 1,
	ESystemMenuButtonType__TEAM_MANAGEMENT = 2,
	ESystemMenuButtonType__KEY_GUIDE = 3,
	ESystemMenuButtonType__RESTART_LOBBY = 4,
	ESystemMenuButtonType__LEAVE_MATCH = 5,
	ESystemMenuButtonType__EXIT_TO_DESKTOP = 6,
	ESystemMenuButtonType__GM_COMMAND_INGAME_HELPER = 7,
	ESystemMenuButtonType__MATCH_LOG = 8,
	ESystemMenuButtonType__ESystemMenuButtonType_MAX = 9
};


// Enum TslGame.ERankGuideType
enum class ERankGuideType : uint8_t
{
	ERankGuideType__ForElementaryRank = 0,
	ERankGuideType__ForExpertRank  = 1,
	ERankGuideType__ERankGuideType_MAX = 2
};


// Enum TslGame.EUserRank
enum class EUserRank : uint8_t
{
	EUserRank__ElementaryRank      = 0,
	EUserRank__IntermediateRank    = 1,
	EUserRank__HighRank            = 2,
	EUserRank__ExpertRank          = 3,
	EUserRank__EUserRank_MAX       = 4
};


// Enum TslGame.EProjectileParticleClass
enum class EProjectileParticleClass : uint8_t
{
	EProjectileParticleClass__PPC_None = 0,
	EProjectileParticleClass__PPC_Frag = 1,
	EProjectileParticleClass__PPC_Flash = 2,
	EProjectileParticleClass__PPC_Smoke = 3,
	EProjectileParticleClass__PPC_Molotov = 4,
	EProjectileParticleClass__PPC_Other = 5,
	EProjectileParticleClass__PPC_MAX = 6
};


// Enum TslGame.EReticleType
enum class EReticleType : uint8_t
{
	EReticleType__RedDot           = 0,
	EReticleType__HoloSight        = 1,
	EReticleType__Scope2x          = 2,
	EReticleType__Scope3x          = 3,
	EReticleType__Scope4x          = 4,
	EReticleType__Scope6x          = 5,
	EReticleType__Scope8x          = 6,
	EReticleType__EReticleType_MAX = 7
};


// Enum TslGame.EKeyHintType
enum class EKeyHintType : uint8_t
{
	EKeyHintType__Menu             = 0,
	EKeyHintType__Parachuting      = 1,
	EKeyHintType__Character        = 2,
	EKeyHintType__Driver           = 3,
	EKeyHintType__Rider            = 4,
	EKeyHintType__WeaponUse        = 5,
	EKeyHintType__WeaponChange     = 6,
	EKeyHintType__ADS              = 7,
	EKeyHintType__Aim              = 8,
	EKeyHintType__ADS_8x15x        = 9,
	EKeyHintType__ADS_6x           = 10,
	EKeyHintType__ADS_1x2x3x       = 11,
	EKeyHintType__ADS_CantedSight  = 12,
	EKeyHintType__ADS_IronSight    = 13,
	EKeyHintType__Throwing         = 14,
	EKeyHintType__Heal             = 15,
	EKeyHintType__Swimming         = 16,
	EKeyHintType__TeamSpectating   = 17,
	EKeyHintType__KillerSpectating = 18,
	EKeyHintType__WorldMap         = 19,
	EKeyHintType__None             = 20,
	EKeyHintType__FreefallNew      = 21,
	EKeyHintType__ParachuteNew     = 22,
	EKeyHintType__SpikeTrap        = 23,
	EKeyHintType__MotorGlider      = 24,
	EKeyHintType__JerryCan         = 25,
	EKeyHintType__Melee            = 26,
	EKeyHintType__MeleeThrowing    = 27,
	EKeyHintType__ArenaModeHelpBox = 28,
	EKeyHintType__Other            = 29,
	EKeyHintType__EKeyHintType_MAX = 30
};


// Enum TslGame.EInteractionPlatformType
enum class EInteractionPlatformType : uint8_t
{
	PC_FKey                        = 0,
	Console_X                      = 1,
	Console_B                      = 2,
	Console_XHold                  = 3,
	Console_BHold                  = 4,
	EInteractionPlatformType_MAX   = 5
};


// Enum TslGame.EWeatherChange
enum class EWeatherChange : uint8_t
{
	EWeatherChange__NoChange       = 0,
	EWeatherChange__Rainy          = 1,
	EWeatherChange__Foggy          = 2,
	EWeatherChange__EWeatherChange_MAX = 3
};


// Enum TslGame.EMinimapCaptureType
enum class EMinimapCaptureType : uint8_t
{
	EMinimapCaptureType__Size_8km  = 0,
	EMinimapCaptureType__Size_4km  = 1,
	EMinimapCaptureType__Size_6km  = 2,
	EMinimapCaptureType__Size_2km  = 3,
	EMinimapCaptureType__UseLevelAttribute = 4,
	EMinimapCaptureType__EMinimapCaptureType_MAX = 5
};


// Enum TslGame.EMinimapColorType
enum class EMinimapColorType : uint8_t
{
	EMinimapColorType__DESATURATED = 0,
	EMinimapColorType__SATURATED   = 1,
	EMinimapColorType__EMinimapColorType_MAX = 2
};


// Enum TslGame.EDamageZoneType
enum class EDamageZoneType : uint8_t
{
	EDamageZoneType__Head          = 0,
	EDamageZoneType__Torso         = 1,
	EDamageZoneType__Arm           = 2,
	EDamageZoneType__Pelvis        = 3,
	EDamageZoneType__Leg           = 4,
	EDamageZoneType__EDamageZoneType_MAX = 5
};


// Enum TslGame.ETslWidgetCreationMethod
enum class ETslWidgetCreationMethod : uint8_t
{
	ETslWidgetCreationMethod__CreateOnInit = 0,
	ETslWidgetCreationMethod__OnDemand = 1,
	ETslWidgetCreationMethod__OnDemandOnOnlyPC = 2,
	ETslWidgetCreationMethod__OnDemandOnOnlyConsole = 3,
	ETslWidgetCreationMethod__ETslWidgetCreationMethod_MAX = 4
};


// Enum TslGame.ERedZoneGenerateType
enum class ERedZoneGenerateType : uint8_t
{
	ERedZoneGenerateType__None     = 0,
	ERedZoneGenerateType__Uniform_Distribution = 1,
	ERedZoneGenerateType__Ringtaw  = 2,
	ERedZoneGenerateType__Outsider = 3,
	ERedZoneGenerateType__RingtawOrOutsider = 4,
	ERedZoneGenerateType__ERedZoneGenerateType_MAX = 5
};


// Enum TslGame.ETslHudType
enum class ETslHudType : uint8_t
{
	ETslHudType__None              = 0,
	ETslHudType__CharacterHud      = 1,
	ETslHudType__SpectatorHud      = 2,
	ETslHudType__ObserverHud       = 3,
	ETslHudType__ReplayHud         = 4,
	ETslHudType__LeagueReplayHud   = 5,
	ETslHudType__ETslHudType_MAX   = 6
};


// Enum TslGame.ETargetAnimDynamicsType
enum class ETargetAnimDynamicsType : uint8_t
{
	ETargetAnimDynamicsType__None  = 0,
	ETargetAnimDynamicsType__Hair  = 1,
	ETargetAnimDynamicsType__Coat  = 2,
	ETargetAnimDynamicsType__ETargetAnimDynamicsType_MAX = 3
};


// Enum TslGame.EAnimatableCustomizableTypes
enum class EAnimatableCustomizableTypes : uint8_t
{
	EAnimatableCustomizableTypes__Hair = 0,
	EAnimatableCustomizableTypes__Outer = 1,
	EAnimatableCustomizableTypes__Legs = 2,
	EAnimatableCustomizableTypes__Torso = 3,
	EAnimatableCustomizableTypes__Head = 4,
	EAnimatableCustomizableTypes__Mask = 5,
	EAnimatableCustomizableTypes__Backpack = 6,
	EAnimatableCustomizableTypes__Eyes = 7,
	EAnimatableCustomizableTypes__TorsoArmor = 8,
	EAnimatableCustomizableTypes__Hands = 9,
	EAnimatableCustomizableTypes__Feet = 10,
	EAnimatableCustomizableTypes__Belt = 11,
	EAnimatableCustomizableTypes__Face = 12,
	EAnimatableCustomizableTypes__EAnimatableCustomizableTypes_MAX = 13
};


// Enum TslGame.EGameEndState
enum class EGameEndState : uint8_t
{
	EGameEndState__None            = 0,
	EGameEndState__CereMony        = 1,
	EGameEndState__Cinematic       = 2,
	EGameEndState__MatchFinish     = 3,
	EGameEndState__EGameEndState_MAX = 4
};


// Enum TslGame.ELobbyBlurChangingStates
enum class ELobbyBlurChangingStates : uint8_t
{
	ELobbyBlurChangingStates__AlwaysOff = 0,
	ELobbyBlurChangingStates__AlwaysOn = 1,
	ELobbyBlurChangingStates__ELobbyBlurChangingStates_MAX = 2
};


// Enum TslGame.ELobbyCameraStates
enum class ELobbyCameraStates : uint8_t
{
	ELobbyCameraStates__XBox_Home  = 0,
	ELobbyCameraStates__Main       = 1,
	ELobbyCameraStates__Main01     = 2,
	ELobbyCameraStates__Menu       = 3,
	ELobbyCameraStates__Custom     = 4,
	ELobbyCameraStates__Custom01   = 5,
	ELobbyCameraStates__EventPass_Milestone = 6,
	ELobbyCameraStates__EventPass_Milestone01 = 7,
	ELobbyCameraStates__EventPass_Missions = 8,
	ELobbyCameraStates__ViewMode_Character = 9,
	ELobbyCameraStates__ViewMode_Weapon = 10,
	ELobbyCameraStates__ViewMode_Parachute = 11,
	ELobbyCameraStates__EventPass_Milestone_0_Particle = 12,
	ELobbyCameraStates__None       = 13,
	ELobbyCameraStates__ELobbyCameraStates_MAX = 14
};


// Enum TslGame.EUiShowType
enum class EUiShowType : uint8_t
{
	EUiShowType__AlwaysShow        = 0,
	EUiShowType__TpsOnlyShow       = 1,
	EUiShowType__FpsOnlyShow       = 2,
	EUiShowType__AlwaysHide        = 3,
	EUiShowType__EUiShowType_MAX   = 4
};


// Enum TslGame.EMatchLogTab
enum class EMatchLogTab : uint8_t
{
	EMatchLogTab__All              = 0,
	EMatchLogTab__Squad            = 1,
	EMatchLogTab__You              = 2,
	EMatchLogTab__EMatchLogTab_MAX = 3
};


// Enum TslGame.EMatchLogRelative
enum class EMatchLogRelative : uint8_t
{
	EMatchLogRelative__None        = 0,
	EMatchLogRelative__You         = 1,
	EMatchLogRelative__Squad       = 2,
	EMatchLogRelative__Other       = 3,
	EMatchLogRelative__EMatchLogRelative_MAX = 4
};


// Enum TslGame.EMatchLogType
enum class EMatchLogType : uint8_t
{
	EMatchLogType__None            = 0,
	EMatchLogType__KillMessage     = 1,
	EMatchLogType__SystemMessage   = 2,
	EMatchLogType__EMatchLogType_MAX = 3
};


// Enum TslGame.ETslXpRewardLogicType
enum class ETslXpRewardLogicType : uint8_t
{
	ETslXpRewardLogicType__None    = 0,
	ETslXpRewardLogicType__Public  = 1,
	ETslXpRewardLogicType__ETslXpRewardLogicType_MAX = 2
};


// Enum TslGame.ETslBpRewardLogicType
enum class ETslBpRewardLogicType : uint8_t
{
	ETslBpRewardLogicType__None    = 0,
	ETslBpRewardLogicType__Public  = 1,
	ETslBpRewardLogicType__ScoreBased = 2,
	ETslBpRewardLogicType__ETslBpRewardLogicType_MAX = 3
};


// Enum TslGame.EGamepadInputResponseForTapIconWidget
enum class EGamepadInputResponseForTapIconWidget : uint8_t
{
	EGamepadInputResponseForTapIconWidget__None = 0,
	EGamepadInputResponseForTapIconWidget__Hold = 1,
	EGamepadInputResponseForTapIconWidget__DoubleTap = 2,
	EGamepadInputResponseForTapIconWidget__EGamepadInputResponseForTapIconWidget_MAX = 3
};


// Enum TslGame.EActionType
enum class EActionType : uint8_t
{
	EActionType__Action            = 0,
	EActionType__Axis              = 1,
	EActionType__Action_Combo      = 2,
	EActionType__EActionType_MAX   = 3
};


// Enum TslGame.EEmergencyPickupState
enum class EEmergencyPickupState : uint8_t
{
	EEmergencyPickupState__None    = 0,
	EEmergencyPickupState__Prepare = 1,
	EEmergencyPickupState__Aircraft = 2,
	EEmergencyPickupState__EEmergencyPickupState_MAX = 3
};


// Enum TslGame.EParachuteCutoffState
enum class EParachuteCutoffState : uint8_t
{
	EParachuteCutoffState__Cutoff_None = 0,
	EParachuteCutoffState__Cutoff_Manual = 1,
	EParachuteCutoffState__Cutoff_Automatic = 2,
	EParachuteCutoffState__Cutoff_Ready = 3,
	EParachuteCutoffState__Cutoff_MAX = 4
};


// Enum TslGame.EGamepadInputResponseTypes
enum class EGamepadInputResponseTypes : uint8_t
{
	EGamepadInputResponseTypes__Pressed = 0,
	EGamepadInputResponseTypes__Released = 1,
	EGamepadInputResponseTypes__Tap = 2,
	EGamepadInputResponseTypes__Hold = 3,
	EGamepadInputResponseTypes__DoubleTap = 4,
	EGamepadInputResponseTypes__EGamepadInputResponseTypes_MAX = 5
};


// Enum TslGame.ERadioMessagePresets
enum class ERadioMessagePresets : uint8_t
{
	ERadioMessagePresets__Preset1  = 0,
	ERadioMessagePresets__Preset2  = 1,
	ERadioMessagePresets__ERadioMessagePresets_MAX = 2
};


// Enum TslGame.EGamepadPresets
enum class EGamepadPresets : uint8_t
{
	EGamepadPresets__ControllerTypeA = 0,
	EGamepadPresets__ControllerTypeB = 1,
	EGamepadPresets__ControllerTypeC = 2,
	EGamepadPresets__CustomType    = 3,
	EGamepadPresets__Max           = 4,
	EGamepadPresets__EGamepadPresets_MAX = 5
};


// Enum TslGame.EKeyGuideShowCases
enum class EKeyGuideShowCases : uint8_t
{
	EKeyGuideShowCases__Reload     = 0,
	EKeyGuideShowCases__ExitVehicle = 1,
	EKeyGuideShowCases__EKeyGuideShowCases_MAX = 2
};


// Enum TslGame.ETslInputModes
enum class ETslInputModes : uint8_t
{
	ETslInputModes__Toggle         = 0,
	ETslInputModes__Hold           = 1,
	ETslInputModes__DoubleTap      = 2,
	ETslInputModes__ETslInputModes_MAX = 3
};


// Enum TslGame.EGameplayClientReplay
enum class EGameplayClientReplay : uint8_t
{
	EGameplayClientReplay__Replay  = 0,
	EGameplayClientReplay__Killcam = 1,
	EGameplayClientReplay__KeyGuide = 2,
	EGameplayClientReplay__EGameplayClientReplay_MAX = 3
};


// Enum TslGame.EGameplayFunctionalities
enum class EGameplayFunctionalities : uint8_t
{
	EGameplayFunctionalities__FreeLookInterp = 0,
	EGameplayFunctionalities__EGameplayFunctionalities_MAX = 1
};


// Enum TslGame.EInputModeSettingActions
enum class EInputModeSettingActions : uint8_t
{
	EInputModeSettingActions__Crouch = 0,
	EInputModeSettingActions__Prone = 1,
	EInputModeSettingActions__Walk = 2,
	EInputModeSettingActions__Sprint = 3,
	EInputModeSettingActions__HoldRotation = 4,
	EInputModeSettingActions__HoldBreath = 5,
	EInputModeSettingActions__Peek = 6,
	EInputModeSettingActions__Map  = 7,
	EInputModeSettingActions__ADS  = 8,
	EInputModeSettingActions__Aim  = 9,
	EInputModeSettingActions__HoldAngled = 10,
	EInputModeSettingActions__EInputModeSettingActions_MAX = 11
};


// Enum TslGame.EKeyBindingSlot
enum class EKeyBindingSlot : uint8_t
{
	EKeyBindingSlot__FirstKey      = 0,
	EKeyBindingSlot__SecondKey     = 1,
	EKeyBindingSlot__EKeyBindingSlot_MAX = 2
};


// Enum TslGame.EReportDetailCauseType
enum class EReportDetailCauseType : uint8_t
{
	EReportDetailCauseType__AutoAim = 0,
	EReportDetailCauseType__NoRecoil = 1,
	EReportDetailCauseType__EspOrPenetration = 2,
	EReportDetailCauseType__Speedhack = 3,
	EReportDetailCauseType__EReportDetailCauseType_MAX = 4
};


// Enum TslGame.EReportedSessionType
enum class EReportedSessionType : uint8_t
{
	EReportedSessionType__PublicOrCustomGame = 0,
	EReportedSessionType__Killcam  = 1,
	EReportedSessionType__Replay   = 2,
	EReportedSessionType__EReportedSessionType_MAX = 3
};


// Enum TslGame.EReportCause
enum class EReportCause : uint8_t
{
	EReportCause__Default          = 0,
	EReportCause__Cheat            = 1,
	EReportCause__TeamKill         = 2,
	EReportCause__Teaming          = 3,
	EReportCause__InappropriateID  = 4,
	EReportCause__VerbalHarassment = 5,
	EReportCause__Griefing         = 6,
	EReportCause__EReportCause_MAX = 7
};


// Enum TslGame.ItemPackageType
enum class EItemPackageType : uint8_t
{
	ItemPackageType__RootBox       = 0,
	ItemPackageType__CarePackage   = 1,
	ItemPackageType__DroppedPackage = 2,
	ItemPackageType__DroppedEventPackage = 3,
	ItemPackageType__VehicleTrunk  = 4,
	ItemPackageType__ItemPackageType_MAX = 5
};


// Enum TslGame.ECarePackageIconType
enum class ECarePackageIconType : uint8_t
{
	ECarePackageIconType__Normal   = 0,
	ECarePackageIconType__Flying   = 1,
	ECarePackageIconType__Opened   = 2,
	ECarePackageIconType__ECarePackageIconType_MAX = 3
};


// Enum TslGame.ECharacterIconType
enum class ECharacterIconType : uint8_t
{
	ECharacterIconType__Normal     = 0,
	ECharacterIconType__Vehicle    = 1,
	ECharacterIconType__Parachute  = 2,
	ECharacterIconType__Die        = 3,
	ECharacterIconType__Groggy     = 4,
	ECharacterIconType__Quitter    = 5,
	ECharacterIconType__Observer   = 6,
	ECharacterIconType__Aircraft   = 7,
	ECharacterIconType__EmergencyPickup = 8,
	ECharacterIconType__ECharacterIconType_MAX = 9
};


// Enum TslGame.EReportUiType
enum class EReportUiType : uint8_t
{
	EReportUiType__Normal          = 0,
	EReportUiType__Respawn         = 1,
	EReportUiType__EReportUiType_MAX = 2
};


// Enum TslGame.EZombieRuleType
enum class EZombieRuleType : uint8_t
{
	EZombieRuleType__None          = 0,
	EZombieRuleType__BattleRoyale  = 1,
	EZombieRuleType__Survival      = 2,
	EZombieRuleType__Elimination   = 3,
	EZombieRuleType__EZombieRuleType_MAX = 4
};


// Enum TslGame.EZombieModePlayerState
enum class EZombieModePlayerState : uint8_t
{
	EZombieModePlayerState__None   = 0,
	EZombieModePlayerState__Human  = 1,
	EZombieModePlayerState__ReadyToRevive = 2,
	EZombieModePlayerState__Zombie = 3,
	EZombieModePlayerState__EZombieModePlayerState_MAX = 4
};


// Enum TslGame.ETeamChangeZombieMode
enum class ETeamChangeZombieMode : uint8_t
{
	ETeamChangeZombieMode__None    = 0,
	ETeamChangeZombieMode__LeaveTeam = 1,
	ETeamChangeZombieMode__JoinTeam = 2,
	ETeamChangeZombieMode__ETeamChangeZombieMode_MAX = 3
};


// Enum TslGame.EFollowCameraMode
enum class EFollowCameraMode : uint8_t
{
	EFollowCameraMode__CharacterCamera = 0,
	EFollowCameraMode__VehicleCamera = 1,
	EFollowCameraMode__AircraftCamera = 2,
	EFollowCameraMode__ParachutingCamera = 3,
	EFollowCameraMode__FallingWithParachuteCamera = 4,
	EFollowCameraMode__EFollowCameraMode_MAX = 5
};


// Enum TslGame.EObserverCameraMode
enum class EObserverCameraMode : uint8_t
{
	EObserverCameraMode__FixedCamera = 0,
	EObserverCameraMode__FreeCamera = 1,
	EObserverCameraMode__PlayerCamera = 2,
	EObserverCameraMode__FollowCamera = 3,
	EObserverCameraMode__EObserverCameraMode_MAX = 4
};


// Enum TslGame.EObserverAuthorityType
enum class EObserverAuthorityType : uint8_t
{
	EObserverAuthorityType__None   = 0,
	EObserverAuthorityType__FromBeginning = 1,
	EObserverAuthorityType__AfterDeath = 2,
	EObserverAuthorityType__AfterExtermination = 3,
	EObserverAuthorityType__EagleEye = 4,
	EObserverAuthorityType__EObserverAuthorityType_MAX = 5
};


// Enum TslGame.EGameEndType
enum class EGameEndType : uint8_t
{
	EGameEndType__RoundEnd         = 0,
	EGameEndType__MatchEnd         = 1,
	EGameEndType__EGameEndType_MAX = 2
};


// Enum TslGame.EGameModeType
enum class EGameModeType : uint8_t
{
	EGameModeType__BattleRoyale    = 0,
	EGameModeType__War             = 1,
	EGameModeType__TDM             = 2,
	EGameModeType__Zombie          = 3,
	EGameModeType__ZombieDefense   = 4,
	EGameModeType__Conquest        = 5,
	EGameModeType__Training        = 6,
	EGameModeType__ESports         = 7,
	EGameModeType__Arena           = 8,
	EGameModeType__Challenger      = 9,
	EGameModeType__ZoneTag         = 10,
	EGameModeType__OneShot         = 11,
	EGameModeType__Racing          = 12,
	EGameModeType__Futsal          = 13,
	EGameModeType__None            = 14,
	EGameModeType__EGameModeType_MAX = 15
};


// Enum TslGame.EValueType
enum class EValueType : uint8_t
{
	EValueType__Float              = 0,
	EValueType__Int                = 1,
	EValueType__String             = 2,
	EValueType__Bool               = 3,
	EValueType__EValueType_MAX     = 4
};


// Enum TslGame.EPlatoonSupportRequestType
enum class EPlatoonSupportRequestType : uint8_t
{
	EPlatoonSupportRequestType__NoRequest = 0,
	EPlatoonSupportRequestType__FireSupportRequest = 1,
	EPlatoonSupportRequestType__WeaponPackageRequest = 2,
	EPlatoonSupportRequestType__HealingPackageRequest = 3,
	EPlatoonSupportRequestType__EPlatoonSupportRequestType_MAX = 4
};


// Enum TslGame.ETeamVehicleType
enum class ETeamVehicleType : uint8_t
{
	ETeamVehicleType__Team_None    = 0,
	ETeamVehicleType__Team_Vehicle = 1,
	ETeamVehicleType__Team_MAX     = 2
};


// Enum TslGame.ENearClippingLevel
enum class ENearClippingLevel : uint8_t
{
	ENearClippingLevel__Default    = 0,
	ENearClippingLevel__Low        = 1,
	ENearClippingLevel__Middle     = 2,
	ENearClippingLevel__High       = 3,
	ENearClippingLevel__ENearClippingLevel_MAX = 4
};


// Enum TslGame.EThingSpotGroupType
enum class EThingSpotGroupType : uint8_t
{
	EThingSpotGroupType__GroupA    = 0,
	EThingSpotGroupType__GroupB    = 1,
	EThingSpotGroupType__GroupC    = 2,
	EThingSpotGroupType__GroupD    = 3,
	EThingSpotGroupType__GroupE    = 4,
	EThingSpotGroupType__GroupF    = 5,
	EThingSpotGroupType__GroupG    = 6,
	EThingSpotGroupType__GroupH    = 7,
	EThingSpotGroupType__GroupI    = 8,
	EThingSpotGroupType__GroupJ    = 9,
	EThingSpotGroupType__GroupK    = 10,
	EThingSpotGroupType__GroupL    = 11,
	EThingSpotGroupType__GroupM    = 12,
	EThingSpotGroupType__GroupN    = 13,
	EThingSpotGroupType__EThingSpotGroupType_MAX = 14
};


// Enum TslGame.EPhysMaterialType
enum class EPhysMaterialType : uint8_t
{
	EPhysMaterialType__Unknown     = 0,
	EPhysMaterialType__Asphalt     = 1,
	EPhysMaterialType__Dirt        = 2,
	EPhysMaterialType__Water       = 3,
	EPhysMaterialType__Wood        = 4,
	EPhysMaterialType__Stone       = 5,
	EPhysMaterialType__Metal       = 6,
	EPhysMaterialType__EPhysMaterialType_MAX = 7
};


// Enum TslGame.EUIAkEvent
enum class EUIAkEvent : uint8_t
{
	EUIAkEvent__None               = 0,
	EUIAkEvent__HoverWeak          = 1,
	EUIAkEvent__HoverMedium        = 2,
	EUIAkEvent__SettingSlider      = 3,
	EUIAkEvent__Confirm            = 4,
	EUIAkEvent__Cancel             = 5,
	EUIAkEvent__PopupModal         = 6,
	EUIAkEvent__EUIAkEvent_MAX     = 7
};


// Enum TslGame.EEquipableItemSoundType
enum class EEquipableItemSoundType : uint8_t
{
	EEquipableItemSoundType__None  = 0,
	EEquipableItemSoundType__Vest  = 1,
	EEquipableItemSoundType__LongCoat = 2,
	EEquipableItemSoundType__HipSack = 3,
	EEquipableItemSoundType__Cloth = 4,
	EEquipableItemSoundType__BackPack = 5,
	EEquipableItemSoundType__MilitaryShoes = 6,
	EEquipableItemSoundType__Sneakers = 7,
	EEquipableItemSoundType__EEquipableItemSoundType_MAX = 8
};


// Enum TslGame.EEquipableItemSoundGroup
enum class EEquipableItemSoundGroup : uint8_t
{
	EEquipableItemSoundGroup__Default = 0,
	EEquipableItemSoundGroup__Shoes = 1,
	EEquipableItemSoundGroup__EEquipableItemSoundGroup_MAX = 2
};


// Enum TslGame.EColorBlindType
enum class EColorBlindType : uint8_t
{
	EColorBlindType__Normal        = 0,
	EColorBlindType__Deuteranopia  = 1,
	EColorBlindType__Protanopia    = 2,
	EColorBlindType__Tritanopia    = 3,
	EColorBlindType__EColorBlindType_MAX = 4
};


// Enum TslGame.ELoadingScreenType
enum class ELoadingScreenType : uint8_t
{
	ELoadingScreenType__NONE       = 0,
	ELoadingScreenType__ICE_BRAKE  = 1,
	ELoadingScreenType__RULE_SET   = 2,
	ELoadingScreenType__WEAPON     = 3,
	ELoadingScreenType__ATTACHMENT = 4,
	ELoadingScreenType__EQUIPMENT  = 5,
	ELoadingScreenType__ITEM       = 6,
	ELoadingScreenType__VEHICLE    = 7,
	ELoadingScreenType__SYSTEM     = 8,
	ELoadingScreenType__DEFAULT    = 9,
	ELoadingScreenType__GAME_MODE  = 10,
	ELoadingScreenType__EXPOSE_WITH_HIGHEST_PRIORITY = 11,
	ELoadingScreenType__ELoadingScreenType_MAX = 12
};


// Enum TslGame.GamepadHudDataType
enum class EGamepadHudDataType : uint8_t
{
	GamepadHudDataType__EFloat     = 0,
	GamepadHudDataType__EBool      = 1,
	GamepadHudDataType__EFString   = 2,
	GamepadHudDataType__GamepadHudDataType_MAX = 3
};


// Enum TslGame.ETslControllerType
enum class ETslControllerType : uint8_t
{
	ETslControllerType__Mouse      = 0,
	ETslControllerType__GamePad    = 1,
	ETslControllerType__Total      = 2,
	ETslControllerType__ETslControllerType_MAX = 3
};


// Enum TslGame.EVoiceInterfaceType
enum class EVoiceInterfaceType : uint8_t
{
	EVoiceInterfaceType__VIVOX     = 0,
	EVoiceInterfaceType__XIM       = 1,
	EVoiceInterfaceType__GVOICE    = 2,
	EVoiceInterfaceType__EVoiceInterfaceType_MAX = 3
};


// Enum TslGame.EVoiceTransmissionType
enum class EVoiceTransmissionType : uint8_t
{
	EVoiceTransmissionType__None   = 0,
	EVoiceTransmissionType__ToAll  = 1,
	EVoiceTransmissionType__ToChannel = 2,
	EVoiceTransmissionType__EVoiceTransmissionType_MAX = 3
};


// Enum TslGame.EVoiceChannelType
enum class EVoiceChannelType : uint8_t
{
	EVoiceChannelType__None        = 0,
	EVoiceChannelType__All         = 1,
	EVoiceChannelType__GlobalOnly  = 2,
	EVoiceChannelType__TeamOnly    = 3,
	EVoiceChannelType__EVoiceChannelType_MAX = 4
};


// Enum TslGame.EVoiceChannelJoinState
enum class EVoiceChannelJoinState : uint8_t
{
	EVoiceChannelJoinState__NotJoined = 0,
	EVoiceChannelJoinState__Joining = 1,
	EVoiceChannelJoinState__Leaving = 2,
	EVoiceChannelJoinState__Joined = 3,
	EVoiceChannelJoinState__EVoiceChannelJoinState_MAX = 4
};


// Enum TslGame.EVoiceLoginState
enum class EVoiceLoginState : uint8_t
{
	EVoiceLoginState__NotLoggedin  = 0,
	EVoiceLoginState__Loggingin    = 1,
	EVoiceLoginState__Loggedin     = 2,
	EVoiceLoginState__EVoiceLoginState_MAX = 3
};


// Enum TslGame.EVoiceConnectionState
enum class EVoiceConnectionState : uint8_t
{
	EVoiceConnectionState__NotConnected = 0,
	EVoiceConnectionState__Connecting = 1,
	EVoiceConnectionState__Connected = 2,
	EVoiceConnectionState__EVoiceConnectionState_MAX = 3
};


// Enum TslGame.ETableCheckerHideOption
enum class ETableCheckerHideOption : uint8_t
{
	ETableCheckerHideOption__Hide  = 0,
	ETableCheckerHideOption__Show  = 1,
	ETableCheckerHideOption__ETableCheckerHideOption_MAX = 2
};


// Enum TslGame.EKeyHintGradeSettingValue
enum class EKeyHintGradeSettingValue : uint8_t
{
	EKeyHintGradeSettingValue__Basic = 0,
	EKeyHintGradeSettingValue__Advanced = 1,
	EKeyHintGradeSettingValue__EKeyHintGradeSettingValue_MAX = 2
};


// Enum TslGame.EKeyHintGradeBitmask
enum class EKeyHintGradeBitmask : uint8_t
{
	EKeyHintGradeBitmask__Basic    = 0,
	EKeyHintGradeBitmask__Advanced = 1,
	EKeyHintGradeBitmask__EKeyHintGradeBitmask_MAX = 2
};


// Enum TslGame.ETslWeatherAction
enum class ETslWeatherAction : uint8_t
{
	ETslWeatherAction__NotDefined  = 0,
	ETslWeatherAction__Initialized = 1,
	ETslWeatherAction__Prolonged   = 2,
	ETslWeatherAction__ETslWeatherAction_MAX = 3
};


// Enum TslGame.EBluezoneType
enum class EBluezoneType : uint8_t
{
	EBluezoneType__Normal          = 0,
	EBluezoneType__Fast            = 1,
	EBluezoneType__EBluezoneType_MAX = 2
};


// Enum TslGame.EVendingMachineType
enum class EVendingMachineType : uint8_t
{
	EVendingMachineType__AMMUNITION = 0,
	EVendingMachineType__BOOSTING  = 1,
	EVendingMachineType__THROWABLE = 2,
	EVendingMachineType__WEAPON    = 3,
	EVendingMachineType__HEALING   = 4,
	EVendingMachineType__EVendingMachineType_MAX = 5
};


// Enum TslGame.EPatrolSpeed
enum class EPatrolSpeed : uint8_t
{
	EPatrolSpeed__Walk             = 0,
	EPatrolSpeed__Run              = 1,
	EPatrolSpeed__Sprint           = 2,
	EPatrolSpeed__EPatrolSpeed_MAX = 3
};


// Enum TslGame.EPlayerAuthState
enum class EPlayerAuthState : uint8_t
{
	EPlayerAuthState__None         = 0,
	EPlayerAuthState__Login        = 1,
	EPlayerAuthState__Logout       = 2,
	EPlayerAuthState__EPlayerAuthState_MAX = 3
};


// Enum TslGame.EInteractionPhase
enum class EInteractionPhase : uint8_t
{
	EInteractionPhase__First       = 0,
	EInteractionPhase__Second      = 1,
	EInteractionPhase__EInteractionPhase_MAX = 2
};


// Enum TslGame.ELobbyItemBundleType
enum class ELobbyItemBundleType : uint8_t
{
	ELobbyItemBundleType__Bundle   = 0,
	ELobbyItemBundleType__Generator = 1,
	ELobbyItemBundleType__ELobbyItemBundleType_MAX = 2
};


// Enum TslGame.EItemSpawnType
enum class EItemSpawnType : uint8_t
{
	EItemSpawnType__FixedRatioAndAdjustableTotalNumber = 0,
	EItemSpawnType__AdjustableRatioAndFixedTotalNumber = 1,
	EItemSpawnType__AdjustableRatioAndAdjustableTotalNumber = 2,
	EItemSpawnType__Invalid        = 3,
	EItemSpawnType__EItemSpawnType_MAX = 4
};


// Enum TslGame.EThreatType
enum class EThreatType : uint8_t
{
	EThreatType__Damage            = 0,
	EThreatType__Sight             = 1,
	EThreatType__Noise             = 2,
	EThreatType__EThreatType_MAX   = 3
};


// Enum TslGame.ELocationType
enum class ELocationType : uint8_t
{
	ELocationType__LANDMARK        = 0,
	ELocationType__EXTRA_LANDMARK  = 1,
	ELocationType__CITY            = 2,
	ELocationType__CITY_DETAIL     = 3,
	ELocationType__TOWN            = 4,
	ELocationType__COMPOUNDS       = 5,
	ELocationType__EXTRA           = 6,
	ELocationType__TEST_SHOW_ALL   = 7,
	ELocationType__ELocationType_MAX = 8
};


// Enum TslGame.EClimate
enum class EClimate : uint8_t
{
	Climate_Normal                 = 0,
	Climate_Hot                    = 1,
	Climate_Cold                   = 2,
	Climate_Warm                   = 3,
	Climate_Humid                  = 4,
	Climate_HotAndHumid            = 5,
	Climate_ColdAndHumid           = 6,
	Climate_WarmAndHumid           = 7,
	Climate_Dry                    = 8,
	Climate_HotAndDry              = 9,
	Climate_ColdAndDry             = 10,
	Climate_WarmAndDry             = 11,
	Climate_MAX                    = 12
};


// Enum TslGame.ELobbyLinkState
enum class ELobbyLinkState : uint8_t
{
	ELobbyLinkState__Disconnect    = 0,
	ELobbyLinkState__WaitInitialize = 1,
	ELobbyLinkState__WaitStart     = 2,
	ELobbyLinkState__Gaming        = 3,
	ELobbyLinkState__Finished      = 4,
	ELobbyLinkState__ELobbyLinkState_MAX = 5
};


// Enum TslGame.ELobbyCharacterAnimationType
enum class ELobbyCharacterAnimationType : uint8_t
{
	ELobbyCharacterAnimationType__Default = 0,
	ELobbyCharacterAnimationType__Wardrobe = 1,
	ELobbyCharacterAnimationType__Appearance = 2,
	ELobbyCharacterAnimationType__ELobbyCharacterAnimationType_MAX = 3
};


// Enum TslGame.EParameterLUTChannel
enum class EParameterLUTChannel : uint8_t
{
	EParameterLUTChannel__R        = 0,
	EParameterLUTChannel__G        = 1,
	EParameterLUTChannel__B        = 2,
	EParameterLUTChannel__A        = 3,
	EParameterLUTChannel__RGBA     = 4,
	EParameterLUTChannel__Undefined = 5,
	EParameterLUTChannel__EParameterLUTChannel_MAX = 6
};


// Enum TslGame.EMaterialParameterType
enum class EMaterialParameterType : uint8_t
{
	EMaterialParameterType__Bool   = 0,
	EMaterialParameterType__Scalar = 1,
	EMaterialParameterType__Vector = 2,
	EMaterialParameterType__Texture = 3,
	EMaterialParameterType__Undefined = 4,
	EMaterialParameterType__EMaterialParameterType_MAX = 5
};


// Enum TslGame.EBlackZoneState
enum class EBlackZoneState : uint8_t
{
	EBlackZoneState__BZ_WaitingForMatchStart = 0,
	EBlackZoneState__BZ_SelectNewBlackZone = 1,
	EBlackZoneState__BZ_BeginStrike = 2,
	EBlackZoneState__BZ_FireMisile = 3,
	EBlackZoneState__BZ_EndBombing = 4,
	EBlackZoneState__BZ_MAX        = 5
};


// Enum TslGame.EArenaStageState
enum class EArenaStageState : uint8_t
{
	EArenaStageState__Prematch     = 0,
	EArenaStageState__StageInProgress = 1,
	EArenaStageState__BetweenStages = 2,
	EArenaStageState__FinishMatch  = 3,
	EArenaStageState__EArenaStageState_MAX = 4
};


// Enum TslGame.ERandomPointSelect
enum class ERandomPointSelect : uint8_t
{
	ERandomPointSelect__NavPoint   = 0,
	ERandomPointSelect__NavPointInRadius = 1,
	ERandomPointSelect__ReachableNavPointInRadius = 2,
	ERandomPointSelect__ERandomPointSelect_MAX = 3
};


// Enum TslGame.ENpcDirection
enum class ENpcDirection : uint8_t
{
	ENpcDirection__Forward         = 0,
	ENpcDirection__Backward        = 1,
	ENpcDirection__Left            = 2,
	ENpcDirection__Right           = 3,
	ENpcDirection__ForwardRight    = 4,
	ENpcDirection__BackwardRight   = 5,
	ENpcDirection__BackwardLeft    = 6,
	ENpcDirection__ForwardLeft     = 7,
	ENpcDirection__ENpcDirection_MAX = 8
};


// Enum TslGame.ENpcWalkingSpeedType
enum class ENpcWalkingSpeedType : uint8_t
{
	ENpcWalkingSpeedType__Idle     = 0,
	ENpcWalkingSpeedType__Walk     = 1,
	ENpcWalkingSpeedType__Run      = 2,
	ENpcWalkingSpeedType__Sprint   = 3,
	ENpcWalkingSpeedType__ENpcWalkingSpeedType_MAX = 4
};


// Enum TslGame.ENpcCharacterStateType
enum class ENpcCharacterStateType : uint8_t
{
	ENpcCharacterStateType__Default = 0,
	ENpcCharacterStateType__Respawn = 1,
	ENpcCharacterStateType__Fire1  = 2,
	ENpcCharacterStateType__Fire2  = 3,
	ENpcCharacterStateType__Fire3  = 4,
	ENpcCharacterStateType__Knockback = 5,
	ENpcCharacterStateType__Knockdown = 6,
	ENpcCharacterStateType__Getup  = 7,
	ENpcCharacterStateType__ENpcCharacterStateType_MAX = 8
};


// Enum TslGame.ERandomType
enum class ERandomType : uint8_t
{
	ERandomType__Random            = 0,
	ERandomType__Shuffle           = 1,
	ERandomType__Ascending         = 2,
	ERandomType__Descending        = 3,
	ERandomType__ERandomType_MAX   = 4
};


// Enum TslGame.ECustomAnimDataType
enum class ECustomAnimDataType : uint8_t
{
	ECustomAnimDataType__CustomAnimData = 0,
	ECustomAnimDataType__AnimSequence = 1,
	ECustomAnimDataType__ECustomAnimDataType_MAX = 2
};


// Enum TslGame.ECustomAnimSlotType
enum class ECustomAnimSlotType : uint8_t
{
	ECustomAnimSlotType__FullBody  = 0,
	ECustomAnimSlotType__UpperBody = 1,
	ECustomAnimSlotType__FullBodyInstance = 2,
	ECustomAnimSlotType__UpperBodyInstance = 3,
	ECustomAnimSlotType__LowerBody = 4,
	ECustomAnimSlotType__ECustomAnimSlotType_MAX = 5
};


// Enum TslGame.ERetriggerCounter
enum class ERetriggerCounter : uint8_t
{
	ERetriggerCounter__First       = 0,
	ERetriggerCounter__Sec         = 1,
	ERetriggerCounter__Third       = 2,
	ERetriggerCounter__Fourth      = 3,
	ERetriggerCounter__ERetriggerCounter_MAX = 4
};


// Enum TslGame.EPathDebugType
enum class EPathDebugType : uint8_t
{
	EPathDebugType__None           = 0,
	EPathDebugType__Location       = 1,
	EPathDebugType__SelectNpc      = 2,
	EPathDebugType__EPathDebugType_MAX = 3
};


// Enum TslGame.EPipeRotation
enum class EPipeRotation : uint8_t
{
	EPipeRotation__PIPEROTATION_A  = 0,
	EPipeRotation__PIPEROTATION_B  = 1,
	EPipeRotation__PIPEROTATION_C  = 2,
	EPipeRotation__PIPEROTATION_D  = 3,
	EPipeRotation__PIPEROTATION_MAX = 4
};


// Enum TslGame.EPipeScaleOrigin
enum class EPipeScaleOrigin : uint8_t
{
	PIPESCALEORIGIN_Start          = 0,
	PIPESCALEORIGIN_Middle         = 1,
	PIPESCALEORIGIN_End            = 2,
	PIPESCALEORIGIN_MAX            = 3
};


// Enum TslGame.EPipeAxis
enum class EPipeAxis : uint8_t
{
	EPipeAxis__PIPEAXIS_X          = 0,
	EPipeAxis__PIPEAXIS_Y          = 1,
	EPipeAxis__PIPEAXIS_Z          = 2,
	EPipeAxis__PIPEAXIS_MAX        = 3
};


// Enum TslGame.ECorrectedSpawnLocationTraceOriginMode
enum class ECorrectedSpawnLocationTraceOriginMode : uint8_t
{
	ECorrectedSpawnLocationTraceOriginMode__CapsuleAxis = 0,
	ECorrectedSpawnLocationTraceOriginMode__CapsuleOrigin = 1,
	ECorrectedSpawnLocationTraceOriginMode__ECorrectedSpawnLocationTraceOriginMode_MAX = 2
};


// Enum TslGame.ECorrectedSpawnLocationTraceType
enum class ECorrectedSpawnLocationTraceType : uint8_t
{
	ECorrectedSpawnLocationTraceType__Sweep = 0,
	ECorrectedSpawnLocationTraceType__Trace = 1,
	ECorrectedSpawnLocationTraceType__ECorrectedSpawnLocationTraceType_MAX = 2
};


// Enum TslGame.EThrowableState
enum class EThrowableState : uint8_t
{
	EThrowableState__Idle          = 0,
	EThrowableState__PinOff        = 1,
	EThrowableState__Cooking       = 2,
	EThrowableState__Throw         = 3,
	EThrowableState__Dropped       = 4,
	EThrowableState__EThrowableState_MAX = 5
};


// Enum TslGame.EProjectileExplosionStartType
enum class EProjectileExplosionStartType : uint8_t
{
	EProjectileExplosionStartType__NotStart = 0,
	EProjectileExplosionStartType__Impact = 1,
	EProjectileExplosionStartType__Delay = 2,
	EProjectileExplosionStartType__ImpactOrDelay = 3,
	EProjectileExplosionStartType__EProjectileExplosionStartType_MAX = 4
};


// Enum TslGame.EProjectileExplodeState
enum class EProjectileExplodeState : uint8_t
{
	EProjectileExplodeState__NotExplode = 0,
	EProjectileExplodeState__ImpactExplode = 1,
	EProjectileExplodeState__TimerExplode = 2,
	EProjectileExplodeState__EProjectileExplodeState_MAX = 3
};


// Enum TslGame.EProjectileExplosionRotationType
enum class EProjectileExplosionRotationType : uint8_t
{
	EProjectileExplosionRotationType__ProjectileUpVector = 0,
	EProjectileExplosionRotationType__WorldUpVector = 1,
	EProjectileExplosionRotationType__ProjectileForwardVector = 2,
	EProjectileExplosionRotationType__EProjectileExplosionRotationType_MAX = 3
};


// Enum TslGame.EDoorOpenState
enum class EDoorOpenState : uint8_t
{
	EDoorOpenState__DoorClosed     = 0,
	EDoorOpenState__DoorOpened     = 1,
	EDoorOpenState__DoorOpening    = 2,
	EDoorOpenState__EDoorOpenState_MAX = 3
};


// Enum TslGame.EHornSoundType
enum class EHornSoundType : uint8_t
{
	EHornSoundType__HornOn         = 0,
	EHornSoundType__HornOff        = 1,
	EHornSoundType__InstantHorn    = 2,
	EHornSoundType__EHornSoundType_MAX = 3
};


// Enum TslGame.EVehicleAnimType
enum class EVehicleAnimType : uint8_t
{
	EVehicleAnimType__DefaultDriver = 0,
	EVehicleAnimType__DefaultPassenger = 1,
	EVehicleAnimType__BuggyDriver  = 2,
	EVehicleAnimType__BuggyPassenger = 3,
	EVehicleAnimType__DaciaDriver  = 4,
	EVehicleAnimType__DaciaPassengerFR = 5,
	EVehicleAnimType__DaciaPassengerBL = 6,
	EVehicleAnimType__DaciaPassengerBC = 7,
	EVehicleAnimType__DaciaPassengerBR = 8,
	EVehicleAnimType__UazDriver    = 9,
	EVehicleAnimType__UazPassengerFR = 10,
	EVehicleAnimType__UazPassengerBL = 11,
	EVehicleAnimType__UazPassengerBC = 12,
	EVehicleAnimType__UazPassengerBR = 13,
	EVehicleAnimType__BoatDriver   = 14,
	EVehicleAnimType__BoatPassengerFR = 15,
	EVehicleAnimType__BoatPassengerBL = 16,
	EVehicleAnimType__BoatPassengerBC = 17,
	EVehicleAnimType__BoatPassengerBR = 18,
	EVehicleAnimType__MotoDriver   = 19,
	EVehicleAnimType__MotoPassenger = 20,
	EVehicleAnimType__MotoSidecar  = 21,
	EVehicleAnimType__MotoDriverSidecar = 22,
	EVehicleAnimType__MotoPassengerSidecar = 23,
	EVehicleAnimType__AircraftPassenger = 24,
	EVehicleAnimType__JetskiDriver = 25,
	EVehicleAnimType__JetskiPassenger = 26,
	EVehicleAnimType__PickupTruckDriver = 27,
	EVehicleAnimType__PickupTruckPassengerFR = 28,
	EVehicleAnimType__PickupTruckPassengerBL_Open = 29,
	EVehicleAnimType__PickupTruckPassengerBR_Open = 30,
	EVehicleAnimType__PickupTruckPassengerBL_Closed = 31,
	EVehicleAnimType__PickupTruckPassengerBR_Closed = 32,
	EVehicleAnimType__MinibusDriver = 33,
	EVehicleAnimType__MinibusPassengerFR = 34,
	EVehicleAnimType__MinibusPassengerML = 35,
	EVehicleAnimType__MinibusPassengerMR = 36,
	EVehicleAnimType__MinibusPassengerBL = 37,
	EVehicleAnimType__MinibusPassengerBR = 38,
	EVehicleAnimType__MiradoDriver = 39,
	EVehicleAnimType__MiradoFR     = 40,
	EVehicleAnimType__MiradoRL     = 41,
	EVehicleAnimType__MiradoRR     = 42,
	EVehicleAnimType__ScooterPassenger = 43,
	EVehicleAnimType__TukDriver    = 44,
	EVehicleAnimType__RonyDriver   = 45,
	EVehicleAnimType__Snowmobile_Passenger = 46,
	EVehicleAnimType__YetiDriver   = 47,
	EVehicleAnimType__YetiPassenger = 48,
	EVehicleAnimType__LadaNivaDriver = 49,
	EVehicleAnimType__BRDM_Driver  = 50,
	EVehicleAnimType__BRDM_Passenger = 51,
	EVehicleAnimType__Motorglider_Pilot = 52,
	EVehicleAnimType__Motorglider_Passenger = 53,
	EVehicleAnimType__EVehicleAnimType_MAX = 54
};


// Enum TslGame.ERiderCount
enum class ERiderCount : uint8_t
{
	ERiderCount__Rider_Zero        = 0,
	ERiderCount__Rider_Single      = 1,
	ERiderCount__Rider_Multiple    = 2,
	ERiderCount__Rider_MAX         = 3
};


// Enum TslGame.ERiderType
enum class ERiderType : uint8_t
{
	ERiderType__Driver             = 0,
	ERiderType__Passenger          = 1,
	ERiderType__ERiderType_MAX     = 2
};


// Enum TslGame.ESeatDirection
enum class ESeatDirection : uint8_t
{
	ESeatDirection__Forward        = 0,
	ESeatDirection__Backward       = 1,
	ESeatDirection__Left           = 2,
	ESeatDirection__Right          = 3,
	ESeatDirection__ESeatDirection_MAX = 4
};


// Enum TslGame.EMapColor
enum class EMapColor : uint8_t
{
	EMapColor__Undefined           = 0,
	EMapColor__Red                 = 1,
	EMapColor__Green               = 2,
	EMapColor__Blue                = 3,
	EMapColor__Yellow              = 4,
	EMapColor__EMapColor_MAX       = 5
};


// Enum TslGame.ETdmSpawnKit
enum class ETdmSpawnKit : uint8_t
{
	ETdmSpawnKit__Shotgun          = 0,
	ETdmSpawnKit__Smg              = 1,
	ETdmSpawnKit__Ar               = 2,
	ETdmSpawnKit__Dmr              = 3,
	ETdmSpawnKit__Sr               = 4,
	ETdmSpawnKit__Etc              = 5,
	ETdmSpawnKit__Max              = 6,
	ETdmSpawnKit__ETdmSpawnKit_MAX = 7
};


// Enum TslGame.EMinimapFocus
enum class EMinimapFocus : uint8_t
{
	EMinimapFocus__CharacterFocus  = 0,
	EMinimapFocus__NextPlayzoneFocus = 1,
	EMinimapFocus__None            = 2,
	EMinimapFocus__EMinimapFocus_MAX = 3
};


// Enum TslGame.ETslArenaLoadoutItemCategory
enum class ETslArenaLoadoutItemCategory : uint8_t
{
	ETslArenaLoadoutItemCategory__PistolAndShotgun = 0,
	ETslArenaLoadoutItemCategory__Smg = 1,
	ETslArenaLoadoutItemCategory__Ar = 2,
	ETslArenaLoadoutItemCategory__Dmr = 3,
	ETslArenaLoadoutItemCategory__Sr = 4,
	ETslArenaLoadoutItemCategory__Equipment = 5,
	ETslArenaLoadoutItemCategory__ETslArenaLoadoutItemCategory_MAX = 6
};


// Enum TslGame.ETslArenaLoadoutDirections
enum class ETslArenaLoadoutDirections : uint8_t
{
	ETslArenaLoadoutDirections__Up = 0,
	ETslArenaLoadoutDirections__Right = 1,
	ETslArenaLoadoutDirections__Down = 2,
	ETslArenaLoadoutDirections__Left = 3,
	ETslArenaLoadoutDirections__ETslArenaLoadoutDirections_MAX = 4
};


// Enum TslGame.EResultPopupState
enum class EResultPopupState : uint8_t
{
	EResultPopupState__PopupState_Disable = 0,
	EResultPopupState__PopupState_Enable = 1,
	EResultPopupState__PopupState_JustClosed = 2,
	EResultPopupState__PopupState_MAX = 3
};


// Enum TslGame.EConditionOfDeath
enum class EConditionOfDeath : uint8_t
{
	EConditionOfDeath__HeadShot    = 0,
	EConditionOfDeath__DBNO        = 1,
	EConditionOfDeath__DBNOByHeadShot = 2,
	EConditionOfDeath__None        = 3,
	EConditionOfDeath__EConditionOfDeath_MAX = 4
};


// Enum TslGame.ETslTeamInfoIconState
enum class ETslTeamInfoIconState : uint8_t
{
	ETslTeamInfoIconState__Default = 0,
	ETslTeamInfoIconState__Vehicle = 1,
	ETslTeamInfoIconState__Parachute = 2,
	ETslTeamInfoIconState__Die     = 3,
	ETslTeamInfoIconState__Groggy  = 4,
	ETslTeamInfoIconState__Quitter = 5,
	ETslTeamInfoIconState__AirCraft = 6,
	ETslTeamInfoIconState__ItemRequest = 7,
	ETslTeamInfoIconState__EmergencyPickup = 8,
	ETslTeamInfoIconState__BlueBallHolder = 9,
	ETslTeamInfoIconState__Redeploy = 10,
	ETslTeamInfoIconState__ETslTeamInfoIconState_MAX = 11
};


// Enum TslGame.EControllerImageType
enum class EControllerImageType : uint8_t
{
	EControllerImageType__XboxOne  = 0,
	EControllerImageType__PS4      = 1,
	EControllerImageType__Quail    = 2,
	EControllerImageType__Quail_ThirdParty = 3,
	EControllerImageType__None     = 4,
	EControllerImageType__EControllerImageType_MAX = 5
};


// Enum TslGame.EBinaryStepperType
enum class EBinaryStepperType : uint8_t
{
	EBinaryStepperType__OFF        = 0,
	EBinaryStepperType__ON         = 1,
	EBinaryStepperType__EBinaryStepperType_MAX = 2
};


// Enum TslGame.EKeyIconCombinationDisplayType
enum class EKeyIconCombinationDisplayType : uint8_t
{
	EKeyIconCombinationDisplayType__NotUsed = 0,
	EKeyIconCombinationDisplayType__Empty = 1,
	EKeyIconCombinationDisplayType__Plus = 2,
	EKeyIconCombinationDisplayType__Slash = 3,
	EKeyIconCombinationDisplayType__EKeyIconCombinationDisplayType_MAX = 4
};


// Enum TslGame.EGamepadKeyIconDisplayType
enum class EGamepadKeyIconDisplayType : uint8_t
{
	EGamepadKeyIconDisplayType__Tap = 0,
	EGamepadKeyIconDisplayType__DoubleTap = 1,
	EGamepadKeyIconDisplayType__ComboHold = 2,
	EGamepadKeyIconDisplayType__TimerHoldCircle = 3,
	EGamepadKeyIconDisplayType__TimerHoldBar = 4,
	EGamepadKeyIconDisplayType__EGamepadKeyIconDisplayType_MAX = 5
};


// Enum TslGame.ETslWheelWidgetMouseCursorDirectionType
enum class ETslWheelWidgetMouseCursorDirectionType : uint8_t
{
	ETslWheelWidgetMouseCursorDirectionType__ABSOLUTE_COORD = 0,
	ETslWheelWidgetMouseCursorDirectionType__AREA_RESTRICTED_COORD = 1,
	ETslWheelWidgetMouseCursorDirectionType__CIRCULAR_RESTRICTED_COORD = 2,
	ETslWheelWidgetMouseCursorDirectionType__ETslWheelWidgetMouseCursorDirectionType_MAX = 3
};


// Enum TslGame.ETslWheelWidgetSelectType
enum class ETslWheelWidgetSelectType : uint8_t
{
	ETslWheelWidgetSelectType__BY_CLICK = 0,
	ETslWheelWidgetSelectType__BY_RELEASE = 1,
	ETslWheelWidgetSelectType__BY_MAX = 2
};


// Enum TslGame.EEmotePlayViewType
enum class EEmotePlayViewType : uint8_t
{
	EEmotePlayViewType__Disable    = 0,
	EEmotePlayViewType__TeamMate_Enable = 1,
	EEmotePlayViewType__Interaction_Enable = 2,
	EEmotePlayViewType__EEmotePlayViewType_MAX = 3
};


// Enum TslGame.EWheelMenuMoveType
enum class EWheelMenuMoveType : uint8_t
{
	EWheelMenuMoveType__BY_LEFT    = 0,
	EWheelMenuMoveType__BY_RIGHT   = 1,
	EWheelMenuMoveType__BY_NONE    = 2,
	EWheelMenuMoveType__BY_MAX     = 3
};


// Enum TslGame.EBluezoneState
enum class EBluezoneState : uint8_t
{
	EBluezoneState__None           = 0,
	EBluezoneState__Wait           = 1,
	EBluezoneState__Release        = 2,
	EBluezoneState__EBluezoneState_MAX = 3
};


// Enum TslGame.EStatInfoType
enum class EStatInfoType : uint8_t
{
	EStatInfoType__Kill            = 0,
	EStatInfoType__Damage          = 1,
	EStatInfoType__Assist          = 2,
	EStatInfoType__EStatInfoType_MAX = 3
};


// Enum TslGame.EDisplayPlayerInfoType
enum class EDisplayPlayerInfoType : uint8_t
{
	EDisplayPlayerInfoType__PlayerList = 0,
	EDisplayPlayerInfoType__EngagedEnemies = 1,
	EDisplayPlayerInfoType__NearbyPlayers = 2,
	EDisplayPlayerInfoType__OtherEngagements = 3,
	EDisplayPlayerInfoType__ObserverTeamInfoList = 4,
	EDisplayPlayerInfoType__EDisplayPlayerInfoType_MAX = 5
};


// Enum TslGame.MatchResultTypeEnum
enum class EMatchResultTypeEnum : uint8_t
{
	MatchResultTypeEnum__INVALID   = 0,
	MatchResultTypeEnum__DEFAULT   = 1,
	MatchResultTypeEnum__OBSERVER  = 2,
	MatchResultTypeEnum__ZOMBIE    = 3,
	MatchResultTypeEnum__LEAGUE    = 4,
	MatchResultTypeEnum__TYPE_NUM  = 5,
	MatchResultTypeEnum__MatchResultTypeEnum_MAX = 6
};


// Enum TslGame.EMarkStates
enum class EMarkStates : uint8_t
{
	EMarkStates__Normal            = 0,
	EMarkStates__Groggy            = 1,
	EMarkStates__Dead              = 2,
	EMarkStates__Vehicle           = 3,
	EMarkStates__Parachute         = 4,
	EMarkStates__Quitter           = 5,
	EMarkStates__Aircraft          = 6,
	EMarkStates__ItemRequest       = 7,
	EMarkStates__EmergencyPickup   = 8,
	EMarkStates__EMarkStates_MAX   = 9
};


// Enum TslGame.ETeenageInfoType
enum class ETeenageInfoType : uint8_t
{
	ETeenageInfoType__Normal       = 0,
	ETeenageInfoType__Season       = 1,
	ETeenageInfoType__ETeenageInfoType_MAX = 2
};


// Enum TslGame.EGuideKeyType
enum class EGuideKeyType : uint8_t
{
	EGuideKeyType__None            = 0,
	EGuideKeyType__PickUp          = 1,
	EGuideKeyType__PickUpAndPickUpAmount = 2,
	EGuideKeyType__Unequip         = 3,
	EGuideKeyType__DetachAll       = 4,
	EGuideKeyType__DetachAndDetachAll = 5,
	EGuideKeyType__Drop            = 6,
	EGuideKeyType__DropAndDropAmount = 7,
	EGuideKeyType__DropAndDropWeapon = 8,
	EGuideKeyType__Equip           = 9,
	EGuideKeyType__XQuickEquip     = 10,
	EGuideKeyType__Swap            = 11,
	EGuideKeyType__Use             = 12,
	EGuideKeyType__Confirm         = 13,
	EGuideKeyType__Cancel          = 14,
	EGuideKeyType__SwitchSlot      = 15,
	EGuideKeyType__Apply           = 16,
	EGuideKeyType__QuickPickUp     = 17,
	EGuideKeyType__QuickDrop       = 18,
	EGuideKeyType__SwitchSlotAndSwapWeapon = 19,
	EGuideKeyType__DropWeapon      = 20,
	EGuideKeyType__SwapWeapon      = 21,
	EGuideKeyType__PickUpAndHoldQuickEquip = 22,
	EGuideKeyType__MoveToTrunk     = 23,
	EGuideKeyType__UseAndMoveToTrunk = 24,
	EGuideKeyType__EquipAndMoveToTrunk = 25,
	EGuideKeyType__SwapAndMoveToTrunk = 26,
	EGuideKeyType__SwapWeaponAndMoveToTrunk = 27,
	EGuideKeyType__Purchase        = 28,
	EGuideKeyType__EGuideKeyType_MAX = 29
};


// Enum TslGame.EGuideLineType
enum class EGuideLineType : uint8_t
{
	EGuideLineType__Upper          = 0,
	EGuideLineType__Middle         = 1,
	EGuideLineType__Lower          = 2,
	EGuideLineType__EGuideLineType_MAX = 3
};


// Enum TslGame.EFiremode
enum class EFiremode : uint8_t
{
	EFiremode__FullAuto            = 0,
	EFiremode__ThreeRoundBurst     = 1,
	EFiremode__TwoRoundBurst       = 2,
	EFiremode__SemiAuto            = 3,
	EFiremode__Single              = 4,
	EFiremode__FullAutoFast        = 5,
	EFiremode__EFiremode_MAX       = 6
};


// Enum TslGame.EConsoleHitDirections
enum class EConsoleHitDirections : uint8_t
{
	EConsoleHitDirections__None    = 0,
	EConsoleHitDirections__Front_Right = 1,
	EConsoleHitDirections__Front_Left = 2,
	EConsoleHitDirections__Rear    = 3,
	EConsoleHitDirections__EConsoleHitDirections_MAX = 4
};


// Enum TslGame.EPresetNumSlotState
enum class EPresetNumSlotState : uint8_t
{
	EPresetNumSlotState__Normal    = 0,
	EPresetNumSlotState__Focus     = 1,
	EPresetNumSlotState__Select    = 2,
	EPresetNumSlotState__Lock      = 3,
	EPresetNumSlotState__Disable   = 4,
	EPresetNumSlotState__FocusConsole = 5,
	EPresetNumSlotState__SelectFocus = 6,
	EPresetNumSlotState__SelectFocusConsole = 7,
	EPresetNumSlotState__EPresetNumSlotState_MAX = 8
};



// Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8_t
{
	EPathFollowingResult__Success  = 0,
	EPathFollowingResult__Blocked  = 1,
	EPathFollowingResult__OffPath  = 2,
	EPathFollowingResult__Aborted  = 3,
	EPathFollowingResult__Skipped_DEPRECATED = 4,
	EPathFollowingResult__Invalid  = 5,
	EPathFollowingResult__EPathFollowingResult_MAX = 6
};


// Enum AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8_t
{
	EEnvQueryStatus__Processing    = 0,
	EEnvQueryStatus__Success       = 1,
	EEnvQueryStatus__Failed        = 2,
	EEnvQueryStatus__Aborted       = 3,
	EEnvQueryStatus__OwnerLost     = 4,
	EEnvQueryStatus__MissingParam  = 5,
	EEnvQueryStatus__EEnvQueryStatus_MAX = 6
};


// Enum AIModule.EAILockSource
enum class EAILockSource : uint8_t
{
	EAILockSource__Animation       = 0,
	EAILockSource__Logic           = 1,
	EAILockSource__Script          = 2,
	EAILockSource__Gameplay        = 3,
	EAILockSource__MAX             = 4,
	EAILockSource__EAILockSource_MAX = 5
};


// Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8_t
{
	EAIRequestPriority__SoftScript = 0,
	EAIRequestPriority__Logic      = 1,
	EAIRequestPriority__HardScript = 2,
	EAIRequestPriority__Reaction   = 3,
	EAIRequestPriority__Ultimate   = 4,
	EAIRequestPriority__MAX        = 5,
	EAIRequestPriority__EAIRequestPriority_MAX = 6
};


// Enum AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8_t
{
	EPawnActionEventType__Invalid  = 0,
	EPawnActionEventType__FailedToStart = 1,
	EPawnActionEventType__InstantAbort = 2,
	EPawnActionEventType__FinishedAborting = 3,
	EPawnActionEventType__FinishedExecution = 4,
	EPawnActionEventType__Push     = 5,
	EPawnActionEventType__EPawnActionEventType_MAX = 6
};


// Enum AIModule.EPawnActionResult
enum class EPawnActionResult : uint8_t
{
	EPawnActionResult__NotStarted  = 0,
	EPawnActionResult__InProgress  = 1,
	EPawnActionResult__Success     = 2,
	EPawnActionResult__Failed      = 3,
	EPawnActionResult__Aborted     = 4,
	EPawnActionResult__EPawnActionResult_MAX = 5
};


// Enum AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8_t
{
	EPawnActionAbortState__NeverStarted = 0,
	EPawnActionAbortState__NotBeingAborted = 1,
	EPawnActionAbortState__MarkPendingAbort = 2,
	EPawnActionAbortState__LatentAbortInProgress = 3,
	EPawnActionAbortState__AbortDone = 4,
	EPawnActionAbortState__MAX     = 5,
	EPawnActionAbortState__EPawnActionAbortState_MAX = 6
};


// Enum AIModule.FAIDistanceType
enum class EFAIDistanceType : uint8_t
{
	FAIDistanceType__Distance3D    = 0,
	FAIDistanceType__Distance2D    = 1,
	FAIDistanceType__DistanceZ     = 2,
	FAIDistanceType__MAX           = 3,
	FAIDistanceType__FAIDistanceType_MAX = 4
};


// Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8_t
{
	EAIOptionFlag__Default         = 0,
	EAIOptionFlag__Enable          = 1,
	EAIOptionFlag__Disable         = 2,
	EAIOptionFlag__MAX             = 3,
	EAIOptionFlag__EAIOptionFlag_MAX = 4
};


// Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8_t
{
	EPathFollowingRequestResult__Failed = 0,
	EPathFollowingRequestResult__AlreadyAtGoal = 1,
	EPathFollowingRequestResult__RequestSuccessful = 2,
	EPathFollowingRequestResult__EPathFollowingRequestResult_MAX = 3
};


// Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8_t
{
	EPathFollowingAction__Error    = 0,
	EPathFollowingAction__NoMove   = 1,
	EPathFollowingAction__DirectMove = 2,
	EPathFollowingAction__PartialPath = 3,
	EPathFollowingAction__PathToGoal = 4,
	EPathFollowingAction__EPathFollowingAction_MAX = 5
};


// Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8_t
{
	EPathFollowingStatus__Idle     = 0,
	EPathFollowingStatus__Waiting  = 1,
	EPathFollowingStatus__Paused   = 2,
	EPathFollowingStatus__Moving   = 3,
	EPathFollowingStatus__EPathFollowingStatus_MAX = 4
};


// Enum AIModule.ETeamAttitude
enum class ETeamAttitude : uint8_t
{
	ETeamAttitude__Friendly        = 0,
	ETeamAttitude__Neutral         = 1,
	ETeamAttitude__Hostile         = 2,
	ETeamAttitude__ETeamAttitude_MAX = 3
};


// Enum AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8_t
{
	EAISenseNotifyType__OnEveryPerception = 0,
	EAISenseNotifyType__OnPerceptionChange = 1,
	EAISenseNotifyType__EAISenseNotifyType_MAX = 2
};


// Enum AIModule.EAITaskPriority
enum class EAITaskPriority : uint8_t
{
	EAITaskPriority__Lowest        = 0,
	EAITaskPriority__Low           = 1,
	EAITaskPriority__AutonomousAI  = 2,
	EAITaskPriority__High          = 3,
	EAITaskPriority__Ultimate      = 4,
	EAITaskPriority__EAITaskPriority_MAX = 5
};


// Enum AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8_t
{
	EBTFlowAbortMode__None         = 0,
	EBTFlowAbortMode__LowerPriority = 1,
	EBTFlowAbortMode__Self         = 2,
	EBTFlowAbortMode__Both         = 3,
	EBTFlowAbortMode__EBTFlowAbortMode_MAX = 4
};


// Enum AIModule.EBTNodeResult
enum class EBTNodeResult : uint8_t
{
	EBTNodeResult__Succeeded       = 0,
	EBTNodeResult__Failed          = 1,
	EBTNodeResult__Aborted         = 2,
	EBTNodeResult__InProgress      = 3,
	EBTNodeResult__EBTNodeResult_MAX = 4
};


// Enum AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8_t
{
	EEnvQueryTestClamping__None    = 0,
	EEnvQueryTestClamping__SpecifiedValue = 1,
	EEnvQueryTestClamping__FilterThreshold = 2,
	EEnvQueryTestClamping__EEnvQueryTestClamping_MAX = 3
};


// Enum AIModule.EEnvDirection
enum class EEnvDirection : uint8_t
{
	EEnvDirection__TwoPoints       = 0,
	EEnvDirection__Rotation        = 1,
	EEnvDirection__EEnvDirection_MAX = 2
};


// Enum AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : uint8_t
{
	EEnvOverlapShape__Box          = 0,
	EEnvOverlapShape__Sphere       = 1,
	EEnvOverlapShape__Capsule      = 2,
	EEnvOverlapShape__EEnvOverlapShape_MAX = 3
};


// Enum AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8_t
{
	EEnvTraceShape__Line           = 0,
	EEnvTraceShape__Box            = 1,
	EEnvTraceShape__Sphere         = 2,
	EEnvTraceShape__Capsule        = 3,
	EEnvTraceShape__EEnvTraceShape_MAX = 4
};


// Enum AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8_t
{
	EEnvQueryTrace__None           = 0,
	EEnvQueryTrace__Navigation     = 1,
	EEnvQueryTrace__Geometry       = 2,
	EEnvQueryTrace__NavigationOverLedges = 3,
	EEnvQueryTrace__EEnvQueryTrace_MAX = 4
};


// Enum AIModule.EAIParamType
enum class EAIParamType : uint8_t
{
	EAIParamType__Float            = 0,
	EAIParamType__Int              = 1,
	EAIParamType__Bool             = 2,
	EAIParamType__EAIParamType_MAX = 3
};


// Enum AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8_t
{
	EEnvQueryParam__Float          = 0,
	EEnvQueryParam__Int            = 1,
	EEnvQueryParam__Bool           = 2,
	EEnvQueryParam__EEnvQueryParam_MAX = 3
};


// Enum AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8_t
{
	EEnvQueryRunMode__SingleResult = 0,
	EEnvQueryRunMode__RandomBest5Pct = 1,
	EEnvQueryRunMode__RandomBest25Pct = 2,
	EEnvQueryRunMode__AllMatching  = 3,
	EEnvQueryRunMode__EEnvQueryRunMode_MAX = 4
};


// Enum AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : uint8_t
{
	EEnvTestScoreOperator__AverageScore = 0,
	EEnvTestScoreOperator__MinScore = 1,
	EEnvTestScoreOperator__MaxScore = 2,
	EEnvTestScoreOperator__EEnvTestScoreOperator_MAX = 3
};


// Enum AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : uint8_t
{
	EEnvTestFilterOperator__AllPass = 0,
	EEnvTestFilterOperator__AnyPass = 1,
	EEnvTestFilterOperator__EEnvTestFilterOperator_MAX = 2
};


// Enum AIModule.EEnvTestCost
enum class EEnvTestCost : uint8_t
{
	EEnvTestCost__Low              = 0,
	EEnvTestCost__Medium           = 1,
	EEnvTestCost__High             = 2,
	EEnvTestCost__EEnvTestCost_MAX = 3
};


// Enum AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8_t
{
	EEnvTestWeight__None           = 0,
	EEnvTestWeight__Square         = 1,
	EEnvTestWeight__Inverse        = 2,
	EEnvTestWeight__Unused         = 3,
	EEnvTestWeight__Constant       = 4,
	EEnvTestWeight__Skip           = 5,
	EEnvTestWeight__EEnvTestWeight_MAX = 6
};


// Enum AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8_t
{
	EEnvTestScoreEquation__Linear  = 0,
	EEnvTestScoreEquation__Square  = 1,
	EEnvTestScoreEquation__InverseLinear = 2,
	EEnvTestScoreEquation__SquareRoot = 3,
	EEnvTestScoreEquation__Constant = 4,
	EEnvTestScoreEquation__EEnvTestScoreEquation_MAX = 5
};


// Enum AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8_t
{
	EEnvTestFilterType__Minimum    = 0,
	EEnvTestFilterType__Maximum    = 1,
	EEnvTestFilterType__Range      = 2,
	EEnvTestFilterType__Match      = 3,
	EEnvTestFilterType__EEnvTestFilterType_MAX = 4
};


// Enum AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8_t
{
	EEnvTestPurpose__Filter        = 0,
	EEnvTestPurpose__Score         = 1,
	EEnvTestPurpose__FilterAndScore = 2,
	EEnvTestPurpose__EEnvTestPurpose_MAX = 3
};


// Enum AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8_t
{
	EBTDecoratorLogic__Invalid     = 0,
	EBTDecoratorLogic__Test        = 1,
	EBTDecoratorLogic__And         = 2,
	EBTDecoratorLogic__Or          = 3,
	EBTDecoratorLogic__Not         = 4,
	EBTDecoratorLogic__EBTDecoratorLogic_MAX = 5
};


// Enum AIModule.EBTChildIndex
enum class EBTChildIndex : uint8_t
{
	EBTChildIndex__FirstNode       = 0,
	EBTChildIndex__TaskNode        = 1,
	EBTChildIndex__EBTChildIndex_MAX = 2
};


// Enum AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8_t
{
	ETextKeyOperation__Equal       = 0,
	ETextKeyOperation__NotEqual    = 1,
	ETextKeyOperation__Contain     = 2,
	ETextKeyOperation__NotContain  = 3,
	ETextKeyOperation__ETextKeyOperation_MAX = 4
};


// Enum AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8_t
{
	EArithmeticKeyOperation__Equal = 0,
	EArithmeticKeyOperation__NotEqual = 1,
	EArithmeticKeyOperation__Less  = 2,
	EArithmeticKeyOperation__LessOrEqual = 3,
	EArithmeticKeyOperation__Greater = 4,
	EArithmeticKeyOperation__GreaterOrEqual = 5,
	EArithmeticKeyOperation__EArithmeticKeyOperation_MAX = 6
};


// Enum AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8_t
{
	EBasicKeyOperation__Set        = 0,
	EBasicKeyOperation__NotSet     = 1,
	EBasicKeyOperation__EBasicKeyOperation_MAX = 2
};


// Enum AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8_t
{
	EBTBlackboardRestart__ValueChange = 0,
	EBTBlackboardRestart__ResultChange = 1,
	EBTBlackboardRestart__EBTBlackboardRestart_MAX = 2
};


// Enum AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8_t
{
	EBlackBoardEntryComparison__Equal = 0,
	EBlackBoardEntryComparison__NotEqual = 1,
	EBlackBoardEntryComparison__EBlackBoardEntryComparison_MAX = 2
};


// Enum AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8_t
{
	EPathExistanceQueryType__NavmeshRaycast2D = 0,
	EPathExistanceQueryType__HierarchicalQuery = 1,
	EPathExistanceQueryType__RegularPathFinding = 2,
	EPathExistanceQueryType__EPathExistanceQueryType_MAX = 3
};


// Enum AIModule.EBTParallelMode
enum class EBTParallelMode : uint8_t
{
	EBTParallelMode__AbortBackground = 0,
	EBTParallelMode__WaitForBackground = 1,
	EBTParallelMode__EBTParallelMode_MAX = 2
};


// Enum AIModule.EPointOnCircleSpacingMethod
enum class EPointOnCircleSpacingMethod : uint8_t
{
	EPointOnCircleSpacingMethod__BySpaceBetween = 0,
	EPointOnCircleSpacingMethod__ByNumberOfPoints = 1,
	EPointOnCircleSpacingMethod__EPointOnCircleSpacingMethod_MAX = 2
};


// Enum AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8_t
{
	EEQSNormalizationType__Absolute = 0,
	EEQSNormalizationType__RelativeToScores = 1,
	EEQSNormalizationType__EEQSNormalizationType_MAX = 2
};


// Enum AIModule.EEnvTestDistance
enum class EEnvTestDistance : uint8_t
{
	EEnvTestDistance__Distance3D   = 0,
	EEnvTestDistance__Distance2D   = 1,
	EEnvTestDistance__DistanceZ    = 2,
	EEnvTestDistance__DistanceAbsoluteZ = 3,
	EEnvTestDistance__EEnvTestDistance_MAX = 4
};


// Enum AIModule.EEnvTestDot
enum class EEnvTestDot : uint8_t
{
	EEnvTestDot__Dot3D             = 0,
	EEnvTestDot__Dot2D             = 1,
	EEnvTestDot__EEnvTestDot_MAX   = 2
};


// Enum AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8_t
{
	EEnvTestPathfinding__PathExist = 0,
	EEnvTestPathfinding__PathCost  = 1,
	EEnvTestPathfinding__PathLength = 2,
	EEnvTestPathfinding__EEnvTestPathfinding_MAX = 3
};


// Enum AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8_t
{
	EEnvQueryHightlightMode__All   = 0,
	EEnvQueryHightlightMode__Best5Pct = 1,
	EEnvQueryHightlightMode__Best25Pct = 2,
	EEnvQueryHightlightMode__EEnvQueryHightlightMode_MAX = 3
};


// Enum AIModule.EPawnActionFailHandling
enum class EPawnActionFailHandling : uint8_t
{
	EPawnActionFailHandling__RequireSuccess = 0,
	EPawnActionFailHandling__IgnoreFailure = 1,
	EPawnActionFailHandling__EPawnActionFailHandling_MAX = 2
};


// Enum AIModule.EPawnSubActionTriggeringPolicy
enum class EPawnSubActionTriggeringPolicy : uint8_t
{
	EPawnSubActionTriggeringPolicy__CopyBeforeTriggering = 0,
	EPawnSubActionTriggeringPolicy__ReuseInstances = 1,
	EPawnSubActionTriggeringPolicy__EPawnSubActionTriggeringPolicy_MAX = 2
};


// Enum AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : uint8_t
{
	EPawnActionMoveMode__UsePathfinding = 0,
	EPawnActionMoveMode__StraightLine = 1,
	EPawnActionMoveMode__EPawnActionMoveMode_MAX = 2
};



// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8_t
{
	EModifyCurveApplyMode__Add     = 0,
	EModifyCurveApplyMode__Scale   = 1,
	EModifyCurveApplyMode__Blend   = 2,
	EModifyCurveApplyMode__EModifyCurveApplyMode_MAX = 3
};


// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8_t
{
	ERBFDistanceMethod__Euclidean  = 0,
	ERBFDistanceMethod__Quaternion = 1,
	ERBFDistanceMethod__SwingAngle = 2,
	ERBFDistanceMethod__ERBFDistanceMethod_MAX = 3
};


// Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8_t
{
	ERBFFunctionType__Gaussian     = 0,
	ERBFFunctionType__Exponential  = 1,
	ERBFFunctionType__Linear       = 2,
	ERBFFunctionType__Cubic        = 3,
	ERBFFunctionType__Quintic      = 4,
	ERBFFunctionType__ERBFFunctionType_MAX = 5
};


// Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8_t
{
	EPoseDriverOutput__DrivePoses  = 0,
	EPoseDriverOutput__DriveCurves = 1,
	EPoseDriverOutput__EPoseDriverOutput_MAX = 2
};


// Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8_t
{
	EPoseDriverSource__Rotation    = 0,
	EPoseDriverSource__Translation = 1,
	EPoseDriverSource__EPoseDriverSource_MAX = 2
};


// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8_t
{
	EPoseDriverType__SwingAndTwist = 0,
	EPoseDriverType__SwingOnly     = 1,
	EPoseDriverType__Translation   = 2,
	EPoseDriverType__EPoseDriverType_MAX = 3
};


// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8_t
{
	ESnapshotSourceMode__NamedSnapshot = 0,
	ESnapshotSourceMode__SnapshotPin = 1,
	ESnapshotSourceMode__ESnapshotSourceMode_MAX = 2
};


// Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2
};


// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8_t
{
	ESequenceEvalReinit__NoReset   = 0,
	ESequenceEvalReinit__StartPosition = 1,
	ESequenceEvalReinit__ExplicitTime = 2,
	ESequenceEvalReinit__ESequenceEvalReinit_MAX = 3
};


// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8_t
{
	ESphericalLimitType__Inner     = 0,
	ESphericalLimitType__Outer     = 1,
	ESphericalLimitType__ESphericalLimitType_MAX = 2
};


// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class EAnimPhysSimSpaceType : uint8_t
{
	AnimPhysSimSpaceType__Component = 0,
	AnimPhysSimSpaceType__Actor    = 1,
	AnimPhysSimSpaceType__World    = 2,
	AnimPhysSimSpaceType__RootRelative = 3,
	AnimPhysSimSpaceType__BoneRelative = 4,
	AnimPhysSimSpaceType__AnimPhysSimSpaceType_MAX = 5
};


// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class EAnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType__Free = 0,
	AnimPhysLinearConstraintType__Limited = 1,
	AnimPhysLinearConstraintType__AnimPhysLinearConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class EAnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType__Angular = 0,
	AnimPhysAngularConstraintType__Cone = 1,
	AnimPhysAngularConstraintType__AnimPhysAngularConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8_t
{
	EDrivenDestinationMode__Bone   = 0,
	EDrivenDestinationMode__MorphTarget = 1,
	EDrivenDestinationMode__MaterialParameter = 2,
	EDrivenDestinationMode__EDrivenDestinationMode_MAX = 3
};


// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8_t
{
	EDrivenBoneModificationMode__AddToInput = 0,
	EDrivenBoneModificationMode__ReplaceComponent = 1,
	EDrivenBoneModificationMode__AddToRefPose = 2,
	EDrivenBoneModificationMode__EDrivenBoneModificationMode_MAX = 3
};


// Enum AnimGraphRuntime.EComponentType
enum class EComponentType : uint8_t
{
	EComponentType__None           = 0,
	EComponentType__TranslationX   = 1,
	EComponentType__TranslationY   = 2,
	EComponentType__TranslationZ   = 3,
	EComponentType__RotationX      = 4,
	EComponentType__RotationY      = 5,
	EComponentType__RotationZ      = 6,
	EComponentType__Scale          = 7,
	EComponentType__ScaleX         = 8,
	EComponentType__ScaleY         = 9,
	EComponentType__ScaleZ         = 10,
	EComponentType__EComponentType_MAX = 11
};


// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class ECopyBoneDeltaMode : uint8_t
{
	CopyBoneDeltaMode__Accumulate  = 0,
	CopyBoneDeltaMode__Copy        = 1,
	CopyBoneDeltaMode__CopyBoneDeltaMode_MAX = 2
};


// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8_t
{
	EInterpolationBlend__Linear    = 0,
	EInterpolationBlend__Cubic     = 1,
	EInterpolationBlend__Sinusoidal = 2,
	EInterpolationBlend__EaseInOutExponent2 = 3,
	EInterpolationBlend__EaseInOutExponent3 = 4,
	EInterpolationBlend__EaseInOutExponent4 = 5,
	EInterpolationBlend__EaseInOutExponent5 = 6,
	EInterpolationBlend__MAX       = 7,
	EInterpolationBlend__EInterpolationBlend_MAX = 8
};


// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3
};


// Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8_t
{
	ESplineBoneAxis__X             = 0,
	ESplineBoneAxis__Y             = 1,
	ESplineBoneAxis__Z             = 2,
	ESplineBoneAxis__ESplineBoneAxis_MAX = 3
};



// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8_t
{
	ECheckBoxState__Unchecked      = 0,
	ECheckBoxState__Checked        = 1,
	ECheckBoxState__Undetermined   = 2,
	ECheckBoxState__ECheckBoxState_MAX = 3
};


// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage  = 0,
	ESlateBrushImageType__FullColor = 1,
	ESlateBrushImageType__Linear   = 2,
	ESlateBrushImageType__ESlateBrushImageType_MAX = 3
};


// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror = 0,
	ESlateBrushMirrorType__Horizontal = 1,
	ESlateBrushMirrorType__Vertical = 2,
	ESlateBrushMirrorType__Both    = 3,
	ESlateBrushMirrorType__ESlateBrushMirrorType_MAX = 4
};


// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile    = 0,
	ESlateBrushTileType__Horizontal = 1,
	ESlateBrushTileType__Vertical  = 2,
	ESlateBrushTileType__Both      = 3,
	ESlateBrushTileType__ESlateBrushTileType_MAX = 4
};


// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified = 0,
	ESlateColorStylingMode__UseColor_Specified_Link = 1,
	ESlateColorStylingMode__UseColor_Foreground = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued = 3,
	ESlateColorStylingMode__UseColor_MAX = 4
};


// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType = 0,
	ESlateBrushDrawType__Box       = 1,
	ESlateBrushDrawType__Border    = 2,
	ESlateBrushDrawType__Image     = 3,
	ESlateBrushDrawType__ESlateBrushDrawType_MAX = 4
};


// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8_t
{
	EUINavigationRule__Escape      = 0,
	EUINavigationRule__Explicit    = 1,
	EUINavigationRule__Wrap        = 2,
	EUINavigationRule__Stop        = 3,
	EUINavigationRule__Custom      = 4,
	EUINavigationRule__Invalid     = 5,
	EUINavigationRule__EUINavigationRule_MAX = 6
};


// Enum SlateCore.EUINavigation
enum class EUINavigation : uint8_t
{
	EUINavigation__Left            = 0,
	EUINavigation__Right           = 1,
	EUINavigation__Up              = 2,
	EUINavigation__Down            = 3,
	EUINavigation__Next            = 4,
	EUINavigation__Previous        = 5,
	EUINavigation__Num             = 6,
	EUINavigation__Invalid         = 7,
	EUINavigation__EUINavigation_MAX = 8
};


// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress        = 0,
	ESelectInfo__OnNavigation      = 1,
	ESelectInfo__OnMouseClick      = 2,
	ESelectInfo__Direct            = 3,
	ESelectInfo__ESelectInfo_MAX   = 4
};


// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel__WhenScrollingPossible = 0,
	EConsumeMouseWheel__Always     = 1,
	EConsumeMouseWheel__Never      = 2,
	EConsumeMouseWheel__EConsumeMouseWheel_MAX = 3
};


// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8_t
{
	EFontHinting__Default          = 0,
	EFontHinting__Auto             = 1,
	EFontHinting__AutoLight        = 2,
	EFontHinting__Monochrome       = 3,
	EFontHinting__None             = 4,
	EFontHinting__EFontHinting_MAX = 5
};


// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8_t
{
	ETextCommit__Default           = 0,
	ETextCommit__OnEnter           = 1,
	ETextCommit__OnUserMovedFocus  = 2,
	ETextCommit__OnCleared         = 3,
	ETextCommit__ETextCommit_MAX   = 4
};


// Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8_t
{
	ETextShapingMethod__Auto       = 0,
	ETextShapingMethod__KerningOnly = 1,
	ETextShapingMethod__FullShaping = 2,
	ETextShapingMethod__ETextShapingMethod_MAX = 3
};


// Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8_t
{
	EFontLayoutMethod__Metrics     = 0,
	EFontLayoutMethod__BoundingBox = 1,
	EFontLayoutMethod__EFontLayoutMethod_MAX = 2
};


// Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8_t
{
	EFontLoadingPolicy__LazyLoad   = 0,
	EFontLoadingPolicy__Stream     = 1,
	EFontLoadingPolicy__Inline     = 2,
	EFontLoadingPolicy__EFontLoadingPolicy_MAX = 3
};


// Enum SlateCore.EFontFallback
enum class EFontFallback : uint8_t
{
	EFontFallback__FF_NoFallback   = 0,
	EFontFallback__FF_LocalizedFallback = 1,
	EFontFallback__FF_LastResortFallback = 2,
	EFontFallback__FF_Max          = 3
};


// Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8_t
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2
};


// Enum SlateCore.EOrientation
enum class EOrientation : uint8_t
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2
};


// Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox         = 3,
	MenuPlacement_ComboBoxRight    = 4,
	MenuPlacement_MenuRight        = 5,
	MenuPlacement_AboveAnchor      = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft         = 9,
	MenuPlacement_Center           = 10,
	MenuPlacement_RightLeftCenter  = 11,
	MenuPlacement_MAX              = 12
};


// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4
};


// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4
};


// Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8_t
{
	ENavigationGenesis__Keyboard   = 0,
	ENavigationGenesis__Controller = 1,
	ENavigationGenesis__User       = 2,
	ENavigationGenesis__ENavigationGenesis_MAX = 3
};


// Enum SlateCore.ENavigationSource
enum class ENavigationSource : uint8_t
{
	ENavigationSource__FocusedWidget = 0,
	ENavigationSource__WidgetUnderCursor = 1,
	ENavigationSource__ENavigationSource_MAX = 2
};


// Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8_t
{
	EButtonPressMethod__DownAndUp  = 0,
	EButtonPressMethod__ButtonPress = 1,
	EButtonPressMethod__ButtonRelease = 2,
	EButtonPressMethod__EButtonPressMethod_MAX = 3
};


// Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp  = 0,
	EButtonTouchMethod__PreciseTap = 1,
	EButtonTouchMethod__EButtonTouchMethod_MAX = 2
};


// Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp  = 0,
	EButtonClickMethod__MouseDown  = 1,
	EButtonClickMethod__MouseUp    = 2,
	EButtonClickMethod__PreciseClick = 3,
	EButtonClickMethod__EButtonClickMethod_MAX = 4
};


// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox   = 0,
	ESlateCheckBoxType__ToggleButton = 1,
	ESlateCheckBoxType__ESlateCheckBoxType_MAX = 2
};


// Enum SlateCore.EFocusCause
enum class EFocusCause : uint8_t
{
	EFocusCause__Mouse             = 0,
	EFocusCause__Navigation        = 1,
	EFocusCause__SetDirectly       = 2,
	EFocusCause__Cleared           = 3,
	EFocusCause__OtherWidgetLostFocus = 4,
	EFocusCause__WindowActivate    = 5,
	EFocusCause__EFocusCause_MAX   = 6
};



// Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8_t
{
	EGameplayTagQueryExprType__Undefined = 0,
	EGameplayTagQueryExprType__AnyTagsMatch = 1,
	EGameplayTagQueryExprType__AllTagsMatch = 2,
	EGameplayTagQueryExprType__NoTagsMatch = 3,
	EGameplayTagQueryExprType__AnyExprMatch = 4,
	EGameplayTagQueryExprType__AllExprMatch = 5,
	EGameplayTagQueryExprType__NoExprMatch = 6,
	EGameplayTagQueryExprType__EGameplayTagQueryExprType_MAX = 7
};


// Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8_t
{
	EGameplayContainerMatchType__Any = 0,
	EGameplayContainerMatchType__All = 1,
	EGameplayContainerMatchType__EGameplayContainerMatchType_MAX = 2
};


// Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8_t
{
	EGameplayTagMatchType__Explicit = 0,
	EGameplayTagMatchType__IncludeParentTags = 1,
	EGameplayTagMatchType__EGameplayTagMatchType_MAX = 2
};


// Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8_t
{
	EGameplayTagSourceType__Native = 0,
	EGameplayTagSourceType__DefaultTagList = 1,
	EGameplayTagSourceType__TagList = 2,
	EGameplayTagSourceType__DataTable = 3,
	EGameplayTagSourceType__Invalid = 4,
	EGameplayTagSourceType__EGameplayTagSourceType_MAX = 5
};



// Enum ZipUtility.EZipUtilityCompletionState
enum class EZipUtilityCompletionState : uint8_t
{
	SUCCESS                        = 0,
	FAILURE_NOT_FOUND              = 1,
	FAILURE_UNKNOWN                = 2,
	EZipUtilityCompletionState_MAX = 3
};


// Enum ZipUtility.ZipUtilityCompressionLevel
enum class EZipUtilityCompressionLevel : uint8_t
{
	COMPRESSION_LEVEL_NONE         = 0,
	COMPRESSION_LEVEL_FAST         = 1,
	COMPRESSION_LEVEL_NORMAL       = 2,
	COMPRESSION_LEVEL_MAX          = 3
};


// Enum ZipUtility.ZipUtilityCompressionFormat
enum class EZipUtilityCompressionFormat : uint8_t
{
	COMPRESSION_FORMAT_UNKNOWN     = 0,
	COMPRESSION_FORMAT_SEVEN_ZIP   = 1,
	COMPRESSION_FORMAT_ZIP         = 2,
	COMPRESSION_FORMAT_GZIP        = 3,
	COMPRESSION_FORMAT_BZIP2       = 4,
	COMPRESSION_FORMAT_RAR         = 5,
	COMPRESSION_FORMAT_TAR         = 6,
	COMPRESSION_FORMAT_ISO         = 7,
	COMPRESSION_FORMAT_CAB         = 8,
	COMPRESSION_FORMAT_LZMA        = 9,
	COMPRESSION_FORMAT_LZMA86      = 10,
	COMPRESSION_FORMAT_MAX         = 11
};



// Enum MaterialShaderQualitySettings.EMobileCSMQuality
enum class EMobileCSMQuality : uint8_t
{
	EMobileCSMQuality__NoFiltering = 0,
	EMobileCSMQuality__PCF_1x1     = 1,
	EMobileCSMQuality__PCF_2x2     = 2,
	EMobileCSMQuality__EMobileCSMQuality_MAX = 3
};



// Enum PhysXVehicles.EVehicleDifferential4W
enum class EVehicleDifferential4W : uint8_t
{
	EVehicleDifferential4W__LimitedSlip_4W = 0,
	EVehicleDifferential4W__LimitedSlip_FrontDrive = 1,
	EVehicleDifferential4W__LimitedSlip_RearDrive = 2,
	EVehicleDifferential4W__Open_4W = 3,
	EVehicleDifferential4W__Open_FrontDrive = 4,
	EVehicleDifferential4W__Open_RearDrive = 5,
	EVehicleDifferential4W__EVehicleDifferential4W_MAX = 6
};



// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t
{
	ESlateVisibility__Visible      = 0,
	ESlateVisibility__Collapsed    = 1,
	ESlateVisibility__Hidden       = 2,
	ESlateVisibility__HitTestInvisible = 3,
	ESlateVisibility__SelfHitTestInvisible = 4,
	ESlateVisibility__ESlateVisibility_MAX = 5
};


// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8_t
{
	EVirtualKeyboardType__Default  = 0,
	EVirtualKeyboardType__Number   = 1,
	EVirtualKeyboardType__Web      = 2,
	EVirtualKeyboardType__Email    = 3,
	EVirtualKeyboardType__Password = 4,
	EVirtualKeyboardType__AlphaNumeric = 5,
	EVirtualKeyboardType__EVirtualKeyboardType_MAX = 6
};


// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t
{
	EUMGSequencePlayMode__Forward  = 0,
	EUMGSequencePlayMode__Reverse  = 1,
	EUMGSequencePlayMode__PingPong = 2,
	EUMGSequencePlayMode__EUMGSequencePlayMode_MAX = 3
};


// Enum UMG.EDragPivot
enum class EDragPivot : uint8_t
{
	EDragPivot__MouseDown          = 0,
	EDragPivot__TopLeft            = 1,
	EDragPivot__TopCenter          = 2,
	EDragPivot__TopRight           = 3,
	EDragPivot__CenterLeft         = 4,
	EDragPivot__CenterCenter       = 5,
	EDragPivot__CenterRight        = 6,
	EDragPivot__BottomLeft         = 7,
	EDragPivot__BottomCenter       = 8,
	EDragPivot__BottomRight        = 9,
	EDragPivot__EDragPivot_MAX     = 10
};


// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t
{
	ESlateSizeRule__Automatic      = 0,
	ESlateSizeRule__Fill           = 1,
	ESlateSizeRule__ESlateSizeRule_MAX = 2
};


// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t
{
	EWidgetDesignFlags__None       = 0,
	EWidgetDesignFlags__Designing  = 1,
	EWidgetDesignFlags__ShowOutline = 2,
	EWidgetDesignFlags__ExecutePreConstruct = 3,
	EWidgetDesignFlags__EWidgetDesignFlags_MAX = 4
};


// Enum UMG.EBindingKind
enum class EBindingKind : uint8_t
{
	EBindingKind__Function         = 0,
	EBindingKind__Property         = 1,
	EBindingKind__EBindingKind_MAX = 2
};


// Enum UMG.EDesignPreviewSizeMode
enum class EDesignPreviewSizeMode : uint8_t
{
	EDesignPreviewSizeMode__FillScreen = 0,
	EDesignPreviewSizeMode__Custom = 1,
	EDesignPreviewSizeMode__CustomOnScreen = 2,
	EDesignPreviewSizeMode__Desired = 3,
	EDesignPreviewSizeMode__DesiredOnScreen = 4,
	EDesignPreviewSizeMode__EDesignPreviewSizeMode_MAX = 5
};


// Enum UMG.EWidgetForcedLOD
enum class EWidgetForcedLOD : uint8_t
{
	EWidgetForcedLOD__None         = 0,
	EWidgetForcedLOD__Inactive     = 1,
	EWidgetForcedLOD__LOD0         = 2,
	EWidgetForcedLOD__LOD1         = 3,
	EWidgetForcedLOD__LOD2         = 4,
	EWidgetForcedLOD__LOD3         = 5,
	EWidgetForcedLOD__LOD4         = 6,
	EWidgetForcedLOD__LOD5         = 7,
	EWidgetForcedLOD__LOD6         = 8,
	EWidgetForcedLOD__LOD7         = 9,
	EWidgetForcedLOD__EWidgetForcedLOD_MAX = 10
};


// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8_t
{
	EWidgetGeometryMode__Plane     = 0,
	EWidgetGeometryMode__Cylinder  = 1,
	EWidgetGeometryMode__EWidgetGeometryMode_MAX = 2
};


// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t
{
	EWidgetBlendMode__Opaque       = 0,
	EWidgetBlendMode__Masked       = 1,
	EWidgetBlendMode__Transparent  = 2,
	EWidgetBlendMode__EWidgetBlendMode_MAX = 3
};


// Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8_t
{
	EWidgetTimingPolicy__RealTime  = 0,
	EWidgetTimingPolicy__GameTime  = 1,
	EWidgetTimingPolicy__EWidgetTimingPolicy_MAX = 2
};


// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t
{
	EWidgetSpace__World            = 0,
	EWidgetSpace__Screen           = 1,
	EWidgetSpace__EWidgetSpace_MAX = 2
};


// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8_t
{
	EWidgetInteractionSource__World = 0,
	EWidgetInteractionSource__Mouse = 1,
	EWidgetInteractionSource__CenterScreen = 2,
	EWidgetInteractionSource__Custom = 3,
	EWidgetInteractionSource__EWidgetInteractionSource_MAX = 4
};



// Enum CoherentUIGTPlugin.ECoherentUIGTKeys
enum class ECoherentUIGTKeys : uint8_t
{
	ECoherentUIGTKeys__LeftMouseButton = 0,
	ECoherentUIGTKeys__RightMouseButton = 1,
	ECoherentUIGTKeys__MiddleMouseButton = 2,
	ECoherentUIGTKeys__ThumbMouseButton = 3,
	ECoherentUIGTKeys__ThumbMouseButton2 = 4,
	ECoherentUIGTKeys__BackSpace   = 5,
	ECoherentUIGTKeys__Tab         = 6,
	ECoherentUIGTKeys__Enter       = 7,
	ECoherentUIGTKeys__Pause       = 8,
	ECoherentUIGTKeys__CapsLock    = 9,
	ECoherentUIGTKeys__Escape      = 10,
	ECoherentUIGTKeys__SpaceBar    = 11,
	ECoherentUIGTKeys__PageUp      = 12,
	ECoherentUIGTKeys__PageDown    = 13,
	ECoherentUIGTKeys__End         = 14,
	ECoherentUIGTKeys__Home        = 15,
	ECoherentUIGTKeys__Left        = 16,
	ECoherentUIGTKeys__Up          = 17,
	ECoherentUIGTKeys__Right       = 18,
	ECoherentUIGTKeys__Down        = 19,
	ECoherentUIGTKeys__Insert      = 20,
	ECoherentUIGTKeys__Delete      = 21,
	ECoherentUIGTKeys__Zero        = 22,
	ECoherentUIGTKeys__One         = 23,
	ECoherentUIGTKeys__Two         = 24,
	ECoherentUIGTKeys__Three       = 25,
	ECoherentUIGTKeys__Four        = 26,
	ECoherentUIGTKeys__Five        = 27,
	ECoherentUIGTKeys__Six         = 28,
	ECoherentUIGTKeys__Seven       = 29,
	ECoherentUIGTKeys__Eight       = 30,
	ECoherentUIGTKeys__Nine        = 31,
	ECoherentUIGTKeys__A           = 32,
	ECoherentUIGTKeys__B           = 33,
	ECoherentUIGTKeys__C           = 34,
	ECoherentUIGTKeys__D           = 35,
	ECoherentUIGTKeys__E           = 36,
	ECoherentUIGTKeys__F           = 37,
	ECoherentUIGTKeys__G           = 38,
	ECoherentUIGTKeys__H           = 39,
	ECoherentUIGTKeys__I           = 40,
	ECoherentUIGTKeys__J           = 41,
	ECoherentUIGTKeys__K           = 42,
	ECoherentUIGTKeys__L           = 43,
	ECoherentUIGTKeys__M           = 44,
	ECoherentUIGTKeys__N           = 45,
	ECoherentUIGTKeys__O           = 46,
	ECoherentUIGTKeys__P           = 47,
	ECoherentUIGTKeys__Q           = 48,
	ECoherentUIGTKeys__R           = 49,
	ECoherentUIGTKeys__S           = 50,
	ECoherentUIGTKeys__T           = 51,
	ECoherentUIGTKeys__U           = 52,
	ECoherentUIGTKeys__V           = 53,
	ECoherentUIGTKeys__W           = 54,
	ECoherentUIGTKeys__X           = 55,
	ECoherentUIGTKeys__Y           = 56,
	ECoherentUIGTKeys__Z           = 57,
	ECoherentUIGTKeys__NumPadZero  = 58,
	ECoherentUIGTKeys__NumPadOne   = 59,
	ECoherentUIGTKeys__NumPadTwo   = 60,
	ECoherentUIGTKeys__NumPadThree = 61,
	ECoherentUIGTKeys__NumPadFour  = 62,
	ECoherentUIGTKeys__NumPadFive  = 63,
	ECoherentUIGTKeys__NumPadSix   = 64,
	ECoherentUIGTKeys__NumPadSeven = 65,
	ECoherentUIGTKeys__NumPadEight = 66,
	ECoherentUIGTKeys__NumPadNine  = 67,
	ECoherentUIGTKeys__Multiply    = 68,
	ECoherentUIGTKeys__Add         = 69,
	ECoherentUIGTKeys__Subtract    = 70,
	ECoherentUIGTKeys__Decimal     = 71,
	ECoherentUIGTKeys__Divide      = 72,
	ECoherentUIGTKeys__F1          = 73,
	ECoherentUIGTKeys__F2          = 74,
	ECoherentUIGTKeys__F3          = 75,
	ECoherentUIGTKeys__F4          = 76,
	ECoherentUIGTKeys__F5          = 77,
	ECoherentUIGTKeys__F6          = 78,
	ECoherentUIGTKeys__F7          = 79,
	ECoherentUIGTKeys__F8          = 80,
	ECoherentUIGTKeys__F9          = 81,
	ECoherentUIGTKeys__F10         = 82,
	ECoherentUIGTKeys__F11         = 83,
	ECoherentUIGTKeys__F12         = 84,
	ECoherentUIGTKeys__NumLock     = 85,
	ECoherentUIGTKeys__ScrollLock  = 86,
	ECoherentUIGTKeys__LeftShift   = 87,
	ECoherentUIGTKeys__RightShift  = 88,
	ECoherentUIGTKeys__LeftControl = 89,
	ECoherentUIGTKeys__RightControl = 90,
	ECoherentUIGTKeys__LeftAlt     = 91,
	ECoherentUIGTKeys__RightAlt    = 92,
	ECoherentUIGTKeys__LeftCommand = 93,
	ECoherentUIGTKeys__RightCommand = 94,
	ECoherentUIGTKeys__Semicolon   = 95,
	ECoherentUIGTKeys__Equals      = 96,
	ECoherentUIGTKeys__Comma       = 97,
	ECoherentUIGTKeys__Underscore  = 98,
	ECoherentUIGTKeys__Period      = 99,
	ECoherentUIGTKeys__Slash       = 100,
	ECoherentUIGTKeys__Tilde       = 101,
	ECoherentUIGTKeys__LeftBracket = 102,
	ECoherentUIGTKeys__Backslash   = 103,
	ECoherentUIGTKeys__RightBracket = 104,
	ECoherentUIGTKeys__Quote       = 105,
	ECoherentUIGTKeys__Unknown     = 106,
	ECoherentUIGTKeys__ECoherentUIGTKeys_MAX = 107
};


// Enum CoherentUIGTPlugin.ECoherentUIGTInputPropagationBehaviour
enum class ECoherentUIGTInputPropagationBehaviour : uint8_t
{
	ECoherentUIGTInputPropagationBehaviour__None = 0,
	ECoherentUIGTInputPropagationBehaviour__Keyboard = 1,
	ECoherentUIGTInputPropagationBehaviour__Joystick = 2,
	ECoherentUIGTInputPropagationBehaviour__KeyboardAndJoystick = 3,
	ECoherentUIGTInputPropagationBehaviour__ECoherentUIGTInputPropagationBehaviour_MAX = 4
};


// Enum CoherentUIGTPlugin.EGamepadBehaviourOnFocusLost
enum class EGamepadBehaviourOnFocusLost : uint8_t
{
	ResetState                     = 0,
	UseCurrentState                = 1,
	UseStateBeforeReset            = 2,
	EGamepadBehaviourOnFocusLost_MAX = 3
};


// Enum CoherentUIGTPlugin.EGTInputWidgetLineTraceMode
enum class EGTInputWidgetLineTraceMode : uint8_t
{
	GTInputLineTrace_Single        = 0,
	GTInputLineTrace_Multi         = 1,
	GTInputLineTrace_MAX           = 2
};


// Enum CoherentUIGTPlugin.EGTInputWidgetRaycastQuality
enum class EGTInputWidgetRaycastQuality : uint8_t
{
	RaycastQuality_Fast            = 0,
	RaycastQuality_Balanced        = 1,
	RaycastQuality_Accurate        = 2,
	RaycastQuality_MAX             = 3
};


// Enum CoherentUIGTPlugin.ECoherentUIGTMSAA
enum class ECoherentUIGTMSAA : uint8_t
{
	ECoherentUIGTMSAA__MSAA_1x     = 0,
	ECoherentUIGTMSAA__MSAA_2x     = 1,
	ECoherentUIGTMSAA__MSAA_4x     = 2,
	ECoherentUIGTMSAA__MSAA_MAX    = 3
};


// Enum CoherentUIGTPlugin.ECoherentUIGTSettingsSeverity
enum class ECoherentUIGTSettingsSeverity : uint8_t
{
	ECoherentUIGTSettingsSeverity__Trace = 0,
	ECoherentUIGTSettingsSeverity__Debug = 1,
	ECoherentUIGTSettingsSeverity__Info = 2,
	ECoherentUIGTSettingsSeverity__Warning = 3,
	ECoherentUIGTSettingsSeverity__AssertFailure = 4,
	ECoherentUIGTSettingsSeverity__Error = 5,
	ECoherentUIGTSettingsSeverity__ECoherentUIGTSettingsSeverity_MAX = 6
};



// Enum EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8_t
{
	EThreePlayerSplitScreenType__FavorTop = 0,
	EThreePlayerSplitScreenType__FavorBottom = 1,
	EThreePlayerSplitScreenType__EThreePlayerSplitScreenType_MAX = 2
};


// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8_t
{
	ETwoPlayerSplitScreenType__Horizontal = 0,
	ETwoPlayerSplitScreenType__Vertical = 1,
	ETwoPlayerSplitScreenType__ETwoPlayerSplitScreenType_MAX = 2
};



// Enum CustomizableObject.ECustomizableObjectProjectorType
enum class ECustomizableObjectProjectorType : uint8_t
{
	ECustomizableObjectProjectorType__Planar = 0,
	ECustomizableObjectProjectorType__Cylindrical = 1,
	ECustomizableObjectProjectorType__Wrapping = 2,
	ECustomizableObjectProjectorType__ECustomizableObjectProjectorType_MAX = 3
};


// Enum CustomizableObject.EMutableCompileMeshType
enum class EMutableCompileMeshType : uint8_t
{
	EMutableCompileMeshType__Full  = 0,
	EMutableCompileMeshType__Local = 1,
	EMutableCompileMeshType__LocalAndChildren = 2,
	EMutableCompileMeshType__AddWorkingSetNoChildren = 3,
	EMutableCompileMeshType__AddWorkingSetAndChildren = 4,
	EMutableCompileMeshType__EMutableCompileMeshType_MAX = 5
};


// Enum CustomizableObject.ECustomizableObjectGroupType
enum class ECustomizableObjectGroupType : uint8_t
{
	ECustomizableObjectGroupType__COGT_TOGGLE = 0,
	ECustomizableObjectGroupType__COGT_ALL = 1,
	ECustomizableObjectGroupType__COGT_ONE = 2,
	ECustomizableObjectGroupType__COGT_ONE_OR_NONE = 3,
	ECustomizableObjectGroupType__COGT_MAX = 4
};


// Enum CustomizableObject.EMutableParameterType
enum class EMutableParameterType : uint8_t
{
	EMutableParameterType__None    = 0,
	EMutableParameterType__Bool    = 1,
	EMutableParameterType__Int     = 2,
	EMutableParameterType__Float   = 3,
	EMutableParameterType__Color   = 4,
	EMutableParameterType__Projector = 5,
	EMutableParameterType__Texture = 6,
	EMutableParameterType__EMutableParameterType_MAX = 7
};


// Enum CustomizableObject.ECustomizableObjectRelevancy
enum class ECustomizableObjectRelevancy : uint8_t
{
	ECustomizableObjectRelevancy__All = 0,
	ECustomizableObjectRelevancy__ClientOnly = 1,
	ECustomizableObjectRelevancy__ECustomizableObjectRelevancy_MAX = 2
};



// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8_t
{
	ESpawnOwnership__InnerSequence = 0,
	ESpawnOwnership__MasterSequence = 1,
	ESpawnOwnership__External      = 2,
	ESpawnOwnership__ESpawnOwnership_MAX = 3
};


// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8_t
{
	EMovieSceneObjectBindingSpace__Local = 0,
	EMovieSceneObjectBindingSpace__Root = 1,
	EMovieSceneObjectBindingSpace__EMovieSceneObjectBindingSpace_MAX = 2
};


// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8_t
{
	EMovieSceneKeyInterpolation__Auto = 0,
	EMovieSceneKeyInterpolation__User = 1,
	EMovieSceneKeyInterpolation__Break = 2,
	EMovieSceneKeyInterpolation__Linear = 3,
	EMovieSceneKeyInterpolation__Constant = 4,
	EMovieSceneKeyInterpolation__EMovieSceneKeyInterpolation_MAX = 5
};


// Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8_t
{
	EMovieSceneCompletionMode__KeepState = 0,
	EMovieSceneCompletionMode__RestoreState = 1,
	EMovieSceneCompletionMode__EMovieSceneCompletionMode_MAX = 2
};


// Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8_t
{
	ESectionEvaluationFlags__None  = 0,
	ESectionEvaluationFlags__PreRoll = 1,
	ESectionEvaluationFlags__PostRoll = 2,
	ESectionEvaluationFlags__ESectionEvaluationFlags_MAX = 3
};


// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8_t
{
	EEvaluationMethod__Static      = 0,
	EEvaluationMethod__Swept       = 1,
	EEvaluationMethod__EEvaluationMethod_MAX = 2
};



// Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8_t
{
	EActorSequenceObjectReferenceType__ContextActor = 0,
	EActorSequenceObjectReferenceType__ExternalActor = 1,
	EActorSequenceObjectReferenceType__Component = 2,
	EActorSequenceObjectReferenceType__EActorSequenceObjectReferenceType_MAX = 3
};



// Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8_t
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3
};


// Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8_t
{
	EGrassScaling__Uniform         = 0,
	EGrassScaling__Free            = 1,
	EGrassScaling__LockXY          = 2,
	EGrassScaling__EGrassScaling_MAX = 3
};


// Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear   = 0,
	ELandscapeLODFalloff__SquareRoot = 1,
	ELandscapeLODFalloff__ELandscapeLODFalloff_MAX = 2
};


// Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8_t
{
	ELandscapeLayerDisplayMode__Default = 0,
	ELandscapeLayerDisplayMode__Alphabetical = 1,
	ELandscapeLayerDisplayMode__UserSpecific = 2,
	ELandscapeLayerDisplayMode__ELandscapeLayerDisplayMode_MAX = 3
};


// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly = 2,
	ELandscapeLayerPaintingRestriction__UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX = 4
};


// Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive = 0,
	ELandscapeImportAlphamapType__Layered = 1,
	ELandscapeImportAlphamapType__ELandscapeImportAlphamapType_MAX = 2
};


// Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8_t
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4
};


// Enum Landscape.LandscapeSplineMeshOrientation
enum class ELandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                       = 0,
	LSMO_YUp                       = 1,
	LSMO_MAX                       = 2
};


// Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                 = 0,
	LB_AlphaBlend                  = 1,
	LB_HeightBlend                 = 2,
	LB_MAX                         = 3
};


// Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                      = 0,
	LCCT_CustomUV0                 = 1,
	LCCT_CustomUV1                 = 2,
	LCCT_CustomUV2                 = 3,
	LCCT_WeightMapUV               = 4,
	LCCT_MAX                       = 5
};


// Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4
};



// Enum MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8_t
{
	HCGM_Rec709                    = 0,
	HCGM_P3DCI                     = 1,
	HCGM_Rec2020                   = 2,
	HCGM_ACES                      = 3,
	HCGM_ACEScg                    = 4,
	HCGM_MAX                       = 5
};



// Enum Foliage.EFoliageScaling
enum class EFoliageScaling : uint8_t
{
	EFoliageScaling__Uniform       = 0,
	EFoliageScaling__Free          = 1,
	EFoliageScaling__LockXY        = 2,
	EFoliageScaling__LockXZ        = 3,
	EFoliageScaling__LockYZ        = 4,
	EFoliageScaling__EFoliageScaling_MAX = 5
};


// Enum Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8_t
{
	EVertexColorMaskChannel__Red   = 0,
	EVertexColorMaskChannel__Green = 1,
	EVertexColorMaskChannel__Blue  = 2,
	EVertexColorMaskChannel__Alpha = 3,
	EVertexColorMaskChannel__MAX_None = 4,
	EVertexColorMaskChannel__EVertexColorMaskChannel_MAX = 5
};


// Enum Foliage.FoliageVertexColorMask
enum class EFoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red     = 1,
	FOLIAGEVERTEXCOLORMASK_Green   = 2,
	FOLIAGEVERTEXCOLORMASK_Blue    = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha   = 4,
	FOLIAGEVERTEXCOLORMASK_MAX     = 5
};


// Enum Foliage.ESimulationQuery
enum class ESimulationQuery : uint8_t
{
	ESimulationQuery__CollisionOverlap = 0,
	ESimulationQuery__ShadeOverlap = 1,
	ESimulationQuery__AnyOverlap   = 2,
	ESimulationQuery__ESimulationQuery_MAX = 3
};


// Enum Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8_t
{
	ESimulationOverlap__CollisionOverlap = 0,
	ESimulationOverlap__ShadeOverlap = 1,
	ESimulationOverlap__None       = 2,
	ESimulationOverlap__ESimulationOverlap_MAX = 3
};



// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class EMovieScene3DPathSection_Axis : uint8_t
{
	MovieScene3DPathSection_Axis__X = 0,
	MovieScene3DPathSection_Axis__Y = 1,
	MovieScene3DPathSection_Axis__Z = 2,
	MovieScene3DPathSection_Axis__NEG_X = 3,
	MovieScene3DPathSection_Axis__NEG_Y = 4,
	MovieScene3DPathSection_Axis__NEG_Z = 5,
	MovieScene3DPathSection_Axis__MovieScene3DPathSection_MAX = 6
};


// Enum MovieSceneTracks.EShow3DTrajectory
enum class EShow3DTrajectory : uint8_t
{
	EShow3DTrajectory__EST_OnlyWhenSelected = 0,
	EShow3DTrajectory__EST_Always  = 1,
	EShow3DTrajectory__EST_Never   = 2,
	EShow3DTrajectory__EST_MAX     = 3
};


// Enum MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8_t
{
	EFireEventsAtPosition__AtStartOfEvaluation = 0,
	EFireEventsAtPosition__AtEndOfEvaluation = 1,
	EFireEventsAtPosition__AfterSpawn = 2,
	EFireEventsAtPosition__EFireEventsAtPosition_MAX = 3
};


// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8_t
{
	ELevelVisibility__Visible      = 0,
	ELevelVisibility__Hidden       = 1,
	ELevelVisibility__ELevelVisibility_MAX = 2
};


// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8_t
{
	EParticleKey__Activate         = 0,
	EParticleKey__Deactivate       = 1,
	EParticleKey__Trigger          = 2,
	EParticleKey__EParticleKey_MAX = 3
};



// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8_t
{
	EBeaconConnectionState__Invalid = 0,
	EBeaconConnectionState__Closed = 1,
	EBeaconConnectionState__Pending = 2,
	EBeaconConnectionState__Open   = 3,
	EBeaconConnectionState__EBeaconConnectionState_MAX = 4
};


// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
	EPartyReservationResult__NoResult = 0,
	EPartyReservationResult__RequestPending = 1,
	EPartyReservationResult__GeneralError = 2,
	EPartyReservationResult__PartyLimitReached = 3,
	EPartyReservationResult__IncorrectPlayerCount = 4,
	EPartyReservationResult__RequestTimedOut = 5,
	EPartyReservationResult__ReservationDuplicate = 6,
	EPartyReservationResult__ReservationNotFound = 7,
	EPartyReservationResult__ReservationAccepted = 8,
	EPartyReservationResult__ReservationDenied = 9,
	EPartyReservationResult__ReservationDenied_Banned = 10,
	EPartyReservationResult__ReservationRequestCanceled = 11,
	EPartyReservationResult__ReservationInvalid = 12,
	EPartyReservationResult__BadSessionId = 13,
	EPartyReservationResult__EPartyReservationResult_MAX = 14
};


// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8_t
{
	EClientRequestType__NonePending = 0,
	EClientRequestType__ExistingSessionReservation = 1,
	EClientRequestType__ReservationUpdate = 2,
	EClientRequestType__EmptyServerReservation = 3,
	EClientRequestType__Reconnect  = 4,
	EClientRequestType__Abandon    = 5,
	EClientRequestType__EClientRequestType_MAX = 6
};



// Enum GameplayTasks.ETaskResourceOverlapPolicy
enum class ETaskResourceOverlapPolicy : uint8_t
{
	ETaskResourceOverlapPolicy__StartOnTop = 0,
	ETaskResourceOverlapPolicy__StartAtEnd = 1,
	ETaskResourceOverlapPolicy__ETaskResourceOverlapPolicy_MAX = 2
};


// Enum GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8_t
{
	EGameplayTaskState__Uninitialized = 0,
	EGameplayTaskState__AwaitingActivation = 1,
	EGameplayTaskState__Paused     = 2,
	EGameplayTaskState__Active     = 3,
	EGameplayTaskState__Finished   = 4,
	EGameplayTaskState__EGameplayTaskState_MAX = 5
};


// Enum GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8_t
{
	EGameplayTaskRunResult__Error  = 0,
	EGameplayTaskRunResult__Failed = 1,
	EGameplayTaskRunResult__Success_Paused = 2,
	EGameplayTaskRunResult__Success_Active = 3,
	EGameplayTaskRunResult__Success_Finished = 4,
	EGameplayTaskRunResult__EGameplayTaskRunResult_MAX = 5
};



// Enum ClothingSystemRuntime.EClothingWindMethod
enum class EClothingWindMethod : uint8_t
{
	EClothingWindMethod__Legacy    = 0,
	EClothingWindMethod__Accurate  = 1,
	EClothingWindMethod__EClothingWindMethod_MAX = 2
};


// Enum ClothingSystemRuntime.MaskTarget_PhysMesh
enum class EMaskTarget_PhysMesh : uint8_t
{
	MaskTarget_PhysMesh__None      = 0,
	MaskTarget_PhysMesh__MaxDistance = 1,
	MaskTarget_PhysMesh__BackstopDistance = 2,
	MaskTarget_PhysMesh__BackstopRadius = 3,
	MaskTarget_PhysMesh__MaskTarget_MAX = 4
};



// Enum BuildPatchServices.EManifestFileHeader
enum class EManifestFileHeader : uint8_t
{
	EManifestFileHeader__STORED_RAW = 0,
	EManifestFileHeader__STORED_COMPRESSED = 1,
	EManifestFileHeader__STORED_MAX = 2
};



// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t
{
	EMediaPlayerTrack__Audio       = 0,
	EMediaPlayerTrack__Binary      = 1,
	EMediaPlayerTrack__Caption     = 2,
	EMediaPlayerTrack__Script      = 3,
	EMediaPlayerTrack__Subtitle    = 4,
	EMediaPlayerTrack__Text        = 5,
	EMediaPlayerTrack__Video       = 6,
	EMediaPlayerTrack__EMediaPlayerTrack_MAX = 7
};



// Enum MoviePlayer.EMoviePlaybackType
enum class EMoviePlaybackType : uint8_t
{
	MT_Normal                      = 0,
	MT_Looped                      = 1,
	MT_LoadingLoop                 = 2,
	MT_MAX                         = 3
};



// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	ENiagaraNumericOutputTypeSelectionMode__None = 0,
	ENiagaraNumericOutputTypeSelectionMode__Largest = 1,
	ENiagaraNumericOutputTypeSelectionMode__Smallest = 2,
	ENiagaraNumericOutputTypeSelectionMode__Scalar = 3,
	ENiagaraNumericOutputTypeSelectionMode__ENiagaraNumericOutputTypeSelectionMode_MAX = 4
};


// Enum Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus : uint8_t
{
	ENiagaraScriptCompileStatus__NCS_Unknown = 0,
	ENiagaraScriptCompileStatus__NCS_Dirty = 1,
	ENiagaraScriptCompileStatus__NCS_Error = 2,
	ENiagaraScriptCompileStatus__NCS_UpToDate = 3,
	ENiagaraScriptCompileStatus__NCS_BeingCreated = 4,
	ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings = 5,
	ENiagaraScriptCompileStatus__NCS_MAX = 6
};


// Enum Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8_t
{
	ENiagaraInputNodeUsage__Undefined = 0,
	ENiagaraInputNodeUsage__Parameter = 1,
	ENiagaraInputNodeUsage__Attribute = 2,
	ENiagaraInputNodeUsage__SystemConstant = 3,
	ENiagaraInputNodeUsage__ENiagaraInputNodeUsage_MAX = 4
};


// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8_t
{
	ENiagaraDataSetType__ParticleData = 0,
	ENiagaraDataSetType__Shared    = 1,
	ENiagaraDataSetType__Event     = 2,
	ENiagaraDataSetType__ENiagaraDataSetType_MAX = 3
};


// Enum Niagara.ENiagaraSpriteFacingMode
enum class ENiagaraSpriteFacingMode : uint8_t
{
	ENiagaraSpriteFacingMode__FaceCamera = 0,
	ENiagaraSpriteFacingMode__FaceCameraPlane = 1,
	ENiagaraSpriteFacingMode__CustomFacingVector = 2,
	ENiagaraSpriteFacingMode__ENiagaraSpriteFacingMode_MAX = 3
};


// Enum Niagara.ENiagaraSpriteAlignment
enum class ENiagaraSpriteAlignment : uint8_t
{
	ENiagaraSpriteAlignment__Unaligned = 0,
	ENiagaraSpriteAlignment__VelocityAligned = 1,
	ENiagaraSpriteAlignment__CustomAlignment = 2,
	ENiagaraSpriteAlignment__ENiagaraSpriteAlignment_MAX = 3
};


// Enum Niagara.ENiagaraSortMode
enum class ENiagaraSortMode : uint8_t
{
	ENiagaraSortMode__SortNone     = 0,
	ENiagaraSortMode__SortViewDepth = 1,
	ENiagaraSortMode__SortViewDistance = 2,
	ENiagaraSortMode__ENiagaraSortMode_MAX = 3
};


// Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8_t
{
	ENiagaraScriptUsage__Function  = 0,
	ENiagaraScriptUsage__Module    = 1,
	ENiagaraScriptUsage__SpawnScript = 2,
	ENiagaraScriptUsage__SpawnScriptInterpolated = 3,
	ENiagaraScriptUsage__UpdateScript = 4,
	ENiagaraScriptUsage__EffectScript = 5,
	ENiagaraScriptUsage__ENiagaraScriptUsage_MAX = 6
};


// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8_t
{
	EUnusedAttributeBehaviour__Copy = 0,
	EUnusedAttributeBehaviour__Zero = 1,
	EUnusedAttributeBehaviour__None = 2,
	EUnusedAttributeBehaviour__MarkInvalid = 3,
	EUnusedAttributeBehaviour__PassThrough = 4,
	EUnusedAttributeBehaviour__EUnusedAttributeBehaviour_MAX = 5
};


// Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8_t
{
	ENiagaraCollisionMode__None    = 0,
	ENiagaraCollisionMode__SceneGeometry = 1,
	ENiagaraCollisionMode__DepthBuffer = 2,
	ENiagaraCollisionMode__DistanceField = 3,
	ENiagaraCollisionMode__ENiagaraCollisionMode_MAX = 4
};


// Enum Niagara.EScriptCompileIndices
enum class EScriptCompileIndices : uint8_t
{
	EScriptCompileIndices__SpawnScript = 0,
	EScriptCompileIndices__UpdateScript = 1,
	EScriptCompileIndices__EventScript = 2,
	EScriptCompileIndices__EScriptCompileIndices_MAX = 3
};


// Enum Niagara.EScriptExecutionMode
enum class EScriptExecutionMode : uint8_t
{
	EScriptExecutionMode__EveryParticle = 0,
	EScriptExecutionMode__SpawnedParticles = 1,
	EScriptExecutionMode__SingleParticle = 2,
	EScriptExecutionMode__EScriptExecutionMode_MAX = 3
};



// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
	ESubmixEffectDynamicsPeakMode__MeanSquared = 0,
	ESubmixEffectDynamicsPeakMode__RootMeanSquared = 1,
	ESubmixEffectDynamicsPeakMode__Peak = 2,
	ESubmixEffectDynamicsPeakMode__Count = 3,
	ESubmixEffectDynamicsPeakMode__ESubmixEffectDynamicsPeakMode_MAX = 4
};


// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
	ESubmixEffectDynamicsProcessorType__Compressor = 0,
	ESubmixEffectDynamicsProcessorType__Limiter = 1,
	ESubmixEffectDynamicsProcessorType__Expander = 2,
	ESubmixEffectDynamicsProcessorType__Gate = 3,
	ESubmixEffectDynamicsProcessorType__Count = 4,
	ESubmixEffectDynamicsProcessorType__ESubmixEffectDynamicsProcessorType_MAX = 5
};



// Enum OceanPlugin.EFollowMethod
enum class EFollowMethod : uint8_t
{
	LookAtLocation                 = 0,
	FollowCamera                   = 1,
	FollowPawn                     = 2,
	Stationary                     = 3,
	EFollowMethod_MAX              = 4
};



// Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8_t
{
	ETextFlowDirection__Auto       = 0,
	ETextFlowDirection__LeftToRight = 1,
	ETextFlowDirection__RightToLeft = 2,
	ETextFlowDirection__ETextFlowDirection_MAX = 3
};


// Enum Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8_t
{
	ETextWrappingPolicy__DefaultWrapping = 0,
	ETextWrappingPolicy__AllowPerCharacterWrapping = 1,
	ETextWrappingPolicy__ETextWrappingPolicy_MAX = 2
};


// Enum Slate.ETextJustify
enum class ETextJustify : uint8_t
{
	ETextJustify__Left             = 0,
	ETextJustify__Center           = 1,
	ETextJustify__Right            = 2,
	ETextJustify__ETextJustify_MAX = 3
};


// Enum Slate.ETableViewMode
enum class ETableViewMode : uint8_t
{
	ETableViewMode__List           = 0,
	ETableViewMode__Tile           = 1,
	ETableViewMode__Tree           = 2,
	ETableViewMode__ETableViewMode_MAX = 3
};


// Enum Slate.ESelectionMode
enum class ESelectionMode : uint8_t
{
	ESelectionMode__None           = 0,
	ESelectionMode__Single         = 1,
	ESelectionMode__SingleToggle   = 2,
	ESelectionMode__Multi          = 3,
	ESelectionMode__ESelectionMode_MAX = 4
};


// Enum Slate.EStretch
enum class EStretch : uint8_t
{
	EStretch__None                 = 0,
	EStretch__Fill                 = 1,
	EStretch__ScaleToFit           = 2,
	EStretch__ScaleToFitX          = 3,
	EStretch__ScaleToFitY          = 4,
	EStretch__ScaleToFill          = 5,
	EStretch__ScaleBySafeZone      = 6,
	EStretch__UserSpecified        = 7,
	EStretch__EStretch_MAX         = 8
};


// Enum Slate.EStretchDirection
enum class EStretchDirection : uint8_t
{
	EStretchDirection__Both        = 0,
	EStretchDirection__DownOnly    = 1,
	EStretchDirection__UpOnly      = 2,
	EStretchDirection__EStretchDirection_MAX = 3
};


// Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8_t
{
	EProgressBarFillType__LeftToRight = 0,
	EProgressBarFillType__RightToLeft = 1,
	EProgressBarFillType__FillFromCenter = 2,
	EProgressBarFillType__TopToBottom = 3,
	EProgressBarFillType__BottomToTop = 4,
	EProgressBarFillType__EProgressBarFillType_MAX = 5
};



// Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__None       = 0,
	ECameraFocusMethod__Manual     = 1,
	ECameraFocusMethod__Tracking   = 2,
	ECameraFocusMethod__ECameraFocusMethod_MAX = 3
};



// Enum InputCore.ETouchIndex
enum class ETouchIndex : uint8_t
{
	ETouchIndex__Touch1            = 0,
	ETouchIndex__Touch2            = 1,
	ETouchIndex__Touch3            = 2,
	ETouchIndex__Touch4            = 3,
	ETouchIndex__Touch5            = 4,
	ETouchIndex__Touch6            = 5,
	ETouchIndex__Touch7            = 6,
	ETouchIndex__Touch8            = 7,
	ETouchIndex__Touch9            = 8,
	ETouchIndex__Touch10           = 9,
	ETouchIndex__ETouchIndex_MAX   = 10
};


// Enum InputCore.ETouchType
enum class ETouchType : uint8_t
{
	ETouchType__Began              = 0,
	ETouchType__Moved              = 1,
	ETouchType__Stationary         = 2,
	ETouchType__Ended              = 3,
	ETouchType__NumTypes           = 4,
	ETouchType__ETouchType_MAX     = 5
};


// Enum InputCore.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8_t
{
	EConsoleForGamepadLabels__None = 0,
	EConsoleForGamepadLabels__XBoxOne = 1,
	EConsoleForGamepadLabels__PS4  = 2,
	EConsoleForGamepadLabels__EConsoleForGamepadLabels_MAX = 3
};


// Enum InputCore.EControllerHand
enum class EControllerHand : uint8_t
{
	EControllerHand__Left          = 0,
	EControllerHand__Right         = 1,
	EControllerHand__Pad           = 2,
	EControllerHand__ExternalCamera = 3,
	EControllerHand__Gun           = 4,
	EControllerHand__Special       = 5,
	EControllerHand__Special01     = 6,
	EControllerHand__Special02     = 7,
	EControllerHand__Special03     = 8,
	EControllerHand__Special04     = 9,
	EControllerHand__Special05     = 10,
	EControllerHand__Special06     = 11,
	EControllerHand__Special07     = 12,
	EControllerHand__Special08     = 13,
	EControllerHand__EControllerHand_MAX = 14
};



// Enum PrefabAsset.EPrefabVisualizerType
enum class EPrefabVisualizerType : uint8_t
{
	EPrefabVisualizerType__WireBox = 0,
	EPrefabVisualizerType__WireSphere = 1,
	EPrefabVisualizerType__EPrefabVisualizerType_MAX = 2
};



// Enum Paper2D.EFlipbookCollisionMode
enum class EFlipbookCollisionMode : uint8_t
{
	EFlipbookCollisionMode__NoCollision = 0,
	EFlipbookCollisionMode__FirstFrameCollision = 1,
	EFlipbookCollisionMode__EachFrameCollision = 2,
	EFlipbookCollisionMode__EFlipbookCollisionMode_MAX = 3
};


// Enum Paper2D.ESpritePivotMode
enum class ESpritePivotMode : uint8_t
{
	ESpritePivotMode__Top_Left     = 0,
	ESpritePivotMode__Top_Center   = 1,
	ESpritePivotMode__Top_Right    = 2,
	ESpritePivotMode__Center_Left  = 3,
	ESpritePivotMode__Center_Center = 4,
	ESpritePivotMode__Center_Right = 5,
	ESpritePivotMode__Bottom_Left  = 6,
	ESpritePivotMode__Bottom_Center = 7,
	ESpritePivotMode__Bottom_Right = 8,
	ESpritePivotMode__Custom       = 9,
	ESpritePivotMode__ESpritePivotMode_MAX = 10
};


// Enum Paper2D.ESpritePolygonMode
enum class ESpritePolygonMode : uint8_t
{
	ESpritePolygonMode__SourceBoundingBox = 0,
	ESpritePolygonMode__TightBoundingBox = 1,
	ESpritePolygonMode__ShrinkWrapped = 2,
	ESpritePolygonMode__FullyCustom = 3,
	ESpritePolygonMode__Diced      = 4,
	ESpritePolygonMode__ESpritePolygonMode_MAX = 5
};


// Enum Paper2D.ESpriteShapeType
enum class ESpriteShapeType : uint8_t
{
	ESpriteShapeType__Box          = 0,
	ESpriteShapeType__Circle       = 1,
	ESpriteShapeType__Polygon      = 2,
	ESpriteShapeType__ESpriteShapeType_MAX = 3
};


// Enum Paper2D.ESpriteCollisionMode
enum class ESpriteCollisionMode : uint8_t
{
	ESpriteCollisionMode__None     = 0,
	ESpriteCollisionMode__Use2DPhysics = 1,
	ESpriteCollisionMode__Use3DPhysics = 2,
	ESpriteCollisionMode__ESpriteCollisionMode_MAX = 3
};


// Enum Paper2D.EPaperSpriteAtlasPadding
enum class EPaperSpriteAtlasPadding : uint8_t
{
	EPaperSpriteAtlasPadding__DilateBorder = 0,
	EPaperSpriteAtlasPadding__PadWithZero = 1,
	EPaperSpriteAtlasPadding__EPaperSpriteAtlasPadding_MAX = 2
};


// Enum Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8_t
{
	ETileMapProjectionMode__Orthogonal = 0,
	ETileMapProjectionMode__IsometricDiamond = 1,
	ETileMapProjectionMode__IsometricStaggered = 2,
	ETileMapProjectionMode__HexagonalStaggered = 3,
	ETileMapProjectionMode__ETileMapProjectionMode_MAX = 4
};



// Enum SubstanceCore.ESubstanceInputType
enum class ESubstanceInputType : uint8_t
{
	SIT_Float                      = 0,
	SIT_Float2                     = 1,
	SIT_Float3                     = 2,
	SIT_Float4                     = 3,
	SIT_Integer                    = 4,
	SIT_Image                      = 5,
	SIT_Unused                     = 6,
	SIT_Unused01                   = 7,
	SIT_Integer2                   = 8,
	SIT_Integer3                   = 9,
	SIT_Integer4                   = 10,
	SIT_MAX                        = 11
};


// Enum SubstanceCore.ESubstanceGenerationMode
enum class ESubstanceGenerationMode : uint8_t
{
	SGM_PlatformDefault            = 0,
	SGM_Baked                      = 1,
	SGM_OnLoadSync                 = 2,
	SGM_OnLoadSyncAndCache         = 3,
	SGM_OnLoadAsync                = 4,
	SGM_OnLoadAsyncAndCache        = 5,
	SGM_MAX                        = 6
};


// Enum SubstanceCore.ESubstanceEngineType
enum class ESubstanceEngineType : uint8_t
{
	SET_CPU                        = 0,
	SET_GPU                        = 1,
	SET_MAX                        = 2
};


// Enum SubstanceCore.ESubChannelType
enum class ESubChannelType : uint8_t
{
	Diffuse                        = 0,
	Ambient                        = 1,
	BaseColor                      = 2,
	Metallic                       = 3,
	Roughness                      = 4,
	Emissive                       = 5,
	Normal                         = 6,
	Mask                           = 7,
	Opacity                        = 8,
	Refraction                     = 9,
	AmbientOcclusion               = 10,
	Glossiness                     = 11,
	Height                         = 12,
	Displacement                   = 13,
	Reflection                     = 14,
	Invalid                        = 15,
	ESubChannelType_MAX            = 16
};


// Enum SubstanceCore.ESubstanceTextureSize
enum class ESubstanceTextureSize : uint8_t
{
	ERL                            = 0,
	ERL01                          = 1,
	ERL02                          = 2,
	ERL03                          = 3,
	ERL04                          = 4,
	ERL05                          = 5,
	ERL06                          = 6,
	ERL07                          = 7,
	ERL08                          = 8,
	ERL_MAX                        = 9
};



// Enum MK3DPublisher.ECapurerMode
enum class ECapurerMode : uint8_t
{
	ECapurerMode__ECapturerNone    = 0,
	ECapurerMode__ECapturerMovie   = 1,
	ECapurerMode__ECapturerSound   = 2,
	ECapurerMode__ECapurerMode_MAX = 3
};



// Enum AkAudio.EOcclusionCalculationMode
enum class EOcclusionCalculationMode : uint8_t
{
	EOcclusionCalculationMode__SingleRaycast = 0,
	EOcclusionCalculationMode__MultiRaycast = 1,
	EOcclusionCalculationMode__EOcclusionCalculationMode_MAX = 2
};


// Enum AkAudio.EOcclusionMode
enum class EOcclusionMode : uint8_t
{
	EOcclusionMode__NoOcclusion    = 0,
	EOcclusionMode__OnPostEventWithRefresh = 1,
	EOcclusionMode__OnPostEvent    = 2,
	EOcclusionMode__OnlyRefresh    = 3,
	EOcclusionMode__EOcclusionMode_MAX = 4
};


// Enum AkAudio.ESoundVolumeShape
enum class ESoundVolumeShape : uint8_t
{
	ESoundVolumeShape__Box         = 0,
	ESoundVolumeShape__Sphere      = 1,
	ESoundVolumeShape__Capsule     = 2,
	ESoundVolumeShape__ESoundVolumeShape_MAX = 3
};


// Enum AkAudio.EAkIgnoreRolloffDirection
enum class EAkIgnoreRolloffDirection : uint8_t
{
	EAkIgnoreRolloffDirection__None = 0,
	EAkIgnoreRolloffDirection__Left = 1,
	EAkIgnoreRolloffDirection__Right = 2,
	EAkIgnoreRolloffDirection__Front = 3,
	EAkIgnoreRolloffDirection__Back = 4,
	EAkIgnoreRolloffDirection__LeftAndRight = 5,
	EAkIgnoreRolloffDirection__LeftAndFront = 6,
	EAkIgnoreRolloffDirection__LeftAndBack = 7,
	EAkIgnoreRolloffDirection__RightAndFront = 8,
	EAkIgnoreRolloffDirection__RightAndBack = 9,
	EAkIgnoreRolloffDirection__BackAndFront = 10,
	EAkIgnoreRolloffDirection__EAkIgnoreRolloffDirection_MAX = 11
};



// Enum OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8_t
{
	EInAppPurchaseState__Unknown   = 0,
	EInAppPurchaseState__Success   = 1,
	EInAppPurchaseState__Failed    = 2,
	EInAppPurchaseState__Cancelled = 3,
	EInAppPurchaseState__Invalid   = 4,
	EInAppPurchaseState__NotAllowed = 5,
	EInAppPurchaseState__Restored  = 6,
	EInAppPurchaseState__AlreadyOwned = 7,
	EInAppPurchaseState__EInAppPurchaseState_MAX = 8
};


// Enum OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8_t
{
	EMPMatchOutcome__None          = 0,
	EMPMatchOutcome__Quit          = 1,
	EMPMatchOutcome__Won           = 2,
	EMPMatchOutcome__Lost          = 3,
	EMPMatchOutcome__Tied          = 4,
	EMPMatchOutcome__TimeExpired   = 5,
	EMPMatchOutcome__First         = 6,
	EMPMatchOutcome__Second        = 7,
	EMPMatchOutcome__Third         = 8,
	EMPMatchOutcome__Fourth        = 9,
	EMPMatchOutcome__EMPMatchOutcome_MAX = 10
};



// Enum CoherentRenderingPlugin.ECoherentRenderingSettingsSeverity
enum class ECoherentRenderingSettingsSeverity : uint8_t
{
	ECoherentRenderingSettingsSeverity__Trace = 0,
	ECoherentRenderingSettingsSeverity__Debug = 1,
	ECoherentRenderingSettingsSeverity__Info = 2,
	ECoherentRenderingSettingsSeverity__Warning = 3,
	ECoherentRenderingSettingsSeverity__AssertFailure = 4,
	ECoherentRenderingSettingsSeverity__Error = 5,
	ECoherentRenderingSettingsSeverity__ECoherentRenderingSettingsSeverity_MAX = 6
};



// Enum HoudiniEngineRuntime.EHoudiniToolSelectionType
enum class EHoudiniToolSelectionType : uint8_t
{
	EHoudiniToolSelectionType__HTOOL_SELECTION_ALL = 0,
	EHoudiniToolSelectionType__HTOOL_SELECTION_WORLD_ONLY = 1,
	EHoudiniToolSelectionType__HTOOL_SELECTION_CB_ONLY = 2,
	EHoudiniToolSelectionType__HTOOL_SELECTION_MAX = 3
};


// Enum HoudiniEngineRuntime.EHoudiniToolType
enum class EHoudiniToolType : uint8_t
{
	EHoudiniToolType__HTOOLTYPE_GENERATOR = 0,
	EHoudiniToolType__HTOOLTYPE_OPERATOR_SINGLE = 1,
	EHoudiniToolType__HTOOLTYPE_OPERATOR_MULTI = 2,
	EHoudiniToolType__HTOOLTYPE_OPERATOR_BATCH = 3,
	EHoudiniToolType__HTOOLTYPE_MAX = 4
};


// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsAxisImport
enum class EHoudiniRuntimeSettingsAxisImport : uint8_t
{
	HRSAI_Unreal                   = 0,
	HRSAI_Houdini                  = 1,
	HRSAI_MAX                      = 2
};


// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsRecomputeFlag
enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8_t
{
	HRSRF_Always                   = 0,
	HRSRF_OnlyIfMissing            = 1,
	HRSRF_Nothing                  = 2,
	HRSRF_MAX                      = 3
};


// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsSessionType
enum class EHoudiniRuntimeSettingsSessionType : uint8_t
{
	HRSST_InProcess                = 0,
	HRSST_Socket                   = 1,
	HRSST_NamedPipe                = 2,
	HRSST_MAX                      = 3
};


// Enum HoudiniEngineRuntime.EHoudiniVertexAttributeDataType
enum class EHoudiniVertexAttributeDataType : uint8_t
{
	VADT_Float                     = 0,
	VADT_Int32                     = 1,
	VADT_Bool                      = 2,
	VADT_MAX                       = 3
};


// Enum HoudiniEngineRuntime.EHoudiniHandleType
enum class EHoudiniHandleType : uint8_t
{
	EHoudiniHandleType__Xform      = 0,
	EHoudiniHandleType__Bounder    = 1,
	EHoudiniHandleType__Unsupported = 2,
	EHoudiniHandleType__EHoudiniHandleType_MAX = 3
};



// Enum VectorVM.EVectorVMOp
enum class EVectorVMOp : uint8_t
{
	EVectorVMOp__done              = 0,
	EVectorVMOp__add               = 1,
	EVectorVMOp__sub               = 2,
	EVectorVMOp__mul               = 3,
	EVectorVMOp__div               = 4,
	EVectorVMOp__mad               = 5,
	EVectorVMOp__lerp              = 6,
	EVectorVMOp__rcp               = 7,
	EVectorVMOp__rsq               = 8,
	EVectorVMOp__sqrt              = 9,
	EVectorVMOp__neg               = 10,
	EVectorVMOp__abs               = 11,
	EVectorVMOp__exp               = 12,
	EVectorVMOp__exp2              = 13,
	EVectorVMOp__log               = 14,
	EVectorVMOp__log2              = 15,
	EVectorVMOp__sin               = 16,
	EVectorVMOp__cos               = 17,
	EVectorVMOp__tan               = 18,
	EVectorVMOp__asin              = 19,
	EVectorVMOp__acos              = 20,
	EVectorVMOp__atan              = 21,
	EVectorVMOp__atan2             = 22,
	EVectorVMOp__ceil              = 23,
	EVectorVMOp__floor             = 24,
	EVectorVMOp__fmod              = 25,
	EVectorVMOp__frac              = 26,
	EVectorVMOp__trunc             = 27,
	EVectorVMOp__clamp             = 28,
	EVectorVMOp__min               = 29,
	EVectorVMOp__max               = 30,
	EVectorVMOp__pow               = 31,
	EVectorVMOp__sign              = 32,
	EVectorVMOp__step              = 33,
	EVectorVMOp__random            = 34,
	EVectorVMOp__noise             = 35,
	EVectorVMOp__output            = 36,
	EVectorVMOp__cmplt             = 37,
	EVectorVMOp__cmple             = 38,
	EVectorVMOp__cmpgt             = 39,
	EVectorVMOp__cmpge             = 40,
	EVectorVMOp__cmpeq             = 41,
	EVectorVMOp__cmpneq            = 42,
	EVectorVMOp__select            = 43,
	EVectorVMOp__addi              = 44,
	EVectorVMOp__subi              = 45,
	EVectorVMOp__muli              = 46,
	EVectorVMOp__clampi            = 47,
	EVectorVMOp__mini              = 48,
	EVectorVMOp__maxi              = 49,
	EVectorVMOp__absi              = 50,
	EVectorVMOp__negi              = 51,
	EVectorVMOp__signi             = 52,
	EVectorVMOp__cmplti            = 53,
	EVectorVMOp__cmplei            = 54,
	EVectorVMOp__cmpgti            = 55,
	EVectorVMOp__cmpgei            = 56,
	EVectorVMOp__cmpeqi            = 57,
	EVectorVMOp__cmpneqi           = 58,
	EVectorVMOp__bit_and           = 59,
	EVectorVMOp__bit_or            = 60,
	EVectorVMOp__bit_xor           = 61,
	EVectorVMOp__bit_not           = 62,
	EVectorVMOp__logic_and         = 63,
	EVectorVMOp__logic_or          = 64,
	EVectorVMOp__logic_xor         = 65,
	EVectorVMOp__logic_not         = 66,
	EVectorVMOp__f2i               = 67,
	EVectorVMOp__i2f               = 68,
	EVectorVMOp__f2b               = 69,
	EVectorVMOp__b2f               = 70,
	EVectorVMOp__i2b               = 71,
	EVectorVMOp__b2i               = 72,
	EVectorVMOp__inputdata_32bit   = 73,
	EVectorVMOp__inputdata_noadvance_32bit = 74,
	EVectorVMOp__outputdata_32bit  = 75,
	EVectorVMOp__acquireindex      = 76,
	EVectorVMOp__external_func_call = 77,
	EVectorVMOp__exec_index        = 78,
	EVectorVMOp__noise2D           = 79,
	EVectorVMOp__noise3D           = 80,
	EVectorVMOp__enter_stat_scope  = 81,
	EVectorVMOp__exit_stat_scope   = 82,
	EVectorVMOp__round             = 83,
	EVectorVMOp__NumOpcodes        = 84,
	EVectorVMOp__EVectorVMOp_MAX   = 85
};


// Enum VectorVM.EVectorVMOperandLocation
enum class EVectorVMOperandLocation : uint8_t
{
	EVectorVMOperandLocation__Register = 0,
	EVectorVMOperandLocation__Constant = 1,
	EVectorVMOperandLocation__Num  = 2,
	EVectorVMOperandLocation__EVectorVMOperandLocation_MAX = 3
};


// Enum VectorVM.EVectorVMBaseTypes
enum class EVectorVMBaseTypes : uint8_t
{
	EVectorVMBaseTypes__Float      = 0,
	EVectorVMBaseTypes__Int        = 1,
	EVectorVMBaseTypes__Bool       = 2,
	EVectorVMBaseTypes__Num        = 3,
	EVectorVMBaseTypes__EVectorVMBaseTypes_MAX = 4
};



// UserDefinedEnum Enum_MagazineReloadAnimStateActionType.Enum_MagazineReloadAnimStateActionType
enum class Enum_MagazineReloadAnimStateActionType : uint8_t
{
	Enum_MagazineReloadAnimStateActionType__NewEnumerator0 = 0,
	Enum_MagazineReloadAnimStateActionType__NewEnumerator1 = 1,
	Enum_MagazineReloadAnimStateActionType__NewEnumerator2 = 2,
	Enum_MagazineReloadAnimStateActionType__NewEnumerator3 = 3,
	Enum_MagazineReloadAnimStateActionType__NewEnumerator4 = 4,
	Enum_MagazineReloadAnimStateActionType__NewEnumerator5 = 5,
	Enum_MagazineReloadAnimStateActionType__Enum_MAX = 6
};



