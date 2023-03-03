#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 6.3.9600.16384
//
//
// Buffer Definitions: 
//
// cbuffer cbPerFrame
// {
//
//   struct GFSDK_Hair_ConstantBuffer
//   {
//       
//       row_major float4x4 inverseViewProjection;// Offset:    0
//       row_major float4x4 inverseProjection;// Offset:   64
//       row_major float4x4 inverseViewport;// Offset:  128
//       row_major float4x4 inverseViewProjectionViewport;// Offset:  192
//       float4 camPosition;            // Offset:  256
//       float4 modelCenter;            // Offset:  272
//       int useRootColorTexture;       // Offset:  288
//       int useTipColorTexture;        // Offset:  292
//       int useStrandTexture;          // Offset:  296
//       int useSpecularTexture;        // Offset:  300
//       int receiveShadows;            // Offset:  304
//       int shadowUseLeftHanded;       // Offset:  308
//       float __shadowReserved1__;     // Offset:  312
//       float __shadowReserved2__;     // Offset:  316
//       int strandBlendMode;           // Offset:  320
//       int colorizeMode;              // Offset:  324
//       int strandPointCount;          // Offset:  328
//       int __reserved__;              // Offset:  332
//       float lodDistanceFactor;       // Offset:  336
//       float lodDetailFactor;         // Offset:  340
//       float lodAlphaFactor;          // Offset:  344
//       float __reservedLOD___;        // Offset:  348
//       
//       struct GFSDK_Hair_Material
//       {
//           
//           float4 rootColor;          // Offset:  352
//           float4 tipColor;           // Offset:  368
//           float4 specularColor;      // Offset:  384
//           float diffuseBlend;        // Offset:  400
//           float diffuseScale;        // Offset:  404
//           float diffuseHairNormalWeight;// Offset:  408
//           float _diffuseUnused_;     // Offset:  412
//           float specularPrimaryScale;// Offset:  416
//           float specularPrimaryPower;// Offset:  420
//           float specularPrimaryBreakup;// Offset:  424
//           float specularNoiseScale;  // Offset:  428
//           float specularSecondaryScale;// Offset:  432
//           float specularSecondaryPower;// Offset:  436
//           float specularSecondaryOffset;// Offset:  440
//           float _specularUnused_;    // Offset:  444
//           float rootTipColorWeight;  // Offset:  448
//           float rootTipColorFalloff; // Offset:  452
//           float shadowSigma;         // Offset:  456
//           float strandBlendScale;    // Offset:  460
//           float glintStrength;       // Offset:  464
//           float glintCount;          // Offset:  468
//           float glintExponent;       // Offset:  472
//           float rootAlphaFalloff;    // Offset:  476
//
//       } defaultMaterial;             // Offset:  352
//       float4 _noiseTable[256];       // Offset:  480
//
//   } g_hairConstantBuffer;            // Offset:    0 Size:  4576
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim Slot Elements
// ------------------------------ ---------- ------- ----------- ---- --------
// cbPerFrame                        cbuffer      NA          NA    0        1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Position              0   xyzw        0      POS   float   xyzw
// HAIR_TEX                 0   x           1     NONE   float       
// COMP_TEXCOORD            0   x           2     NONE   float       
// C                        0    y          2     NONE    uint       
// COORDS                   0     z         2     NONE   float       
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Target                0   x           0   TARGET   float   x   
//
ps_5_0
dcl_globalFlags refactoringAllowed
dcl_constantbuffer cb0[12], immediateIndexed
dcl_input_ps_siv linear noperspective v0.xyzw, position
dcl_output o0.x
dcl_temps 1
mul r0.xy, v0.yyyy, cb0[9].xyxx
mad r0.xy, v0.xxxx, cb0[8].xyxx, r0.xyxx
add r0.xy, r0.xyxx, cb0[11].xyxx
mov r0.z, v0.z
mul r0.xyz, r0.xyzx, v0.wwww
mul r0.y, r0.y, cb0[5].z
mad r0.x, r0.x, cb0[4].z, r0.y
mad r0.x, r0.z, cb0[6].z, r0.x
mad o0.x, v0.w, cb0[7].z, r0.x
ret 
// Approximately 10 instruction slots used
#endif

const BYTE g_ps_main[] =
{
     68,  88,  66,  67, 244, 122, 
    145, 228,  89,  52, 217, 179, 
    127,  91, 154,  76, 119, 117, 
    202, 158,   1,   0,   0,   0, 
    208,  10,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    208,   7,   0,   0, 132,   8, 
      0,   0, 184,   8,   0,   0, 
     52,  10,   0,   0,  82,  68, 
     69,  70, 148,   7,   0,   0, 
      1,   0,   0,   0, 104,   0, 
      0,   0,   1,   0,   0,   0, 
     60,   0,   0,   0,   0,   5, 
    255, 255,   0,   1,   0,   0, 
     96,   7,   0,   0,  82,  68, 
     49,  49,  60,   0,   0,   0, 
     24,   0,   0,   0,  32,   0, 
      0,   0,  40,   0,   0,   0, 
     36,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
     92,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,  99,  98,  80, 101, 
    114,  70, 114,  97, 109, 101, 
      0, 171,  92,   0,   0,   0, 
      1,   0,   0,   0, 128,   0, 
      0,   0, 224,  17,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 168,   0,   0,   0, 
      0,   0,   0,   0, 224,  17, 
      0,   0,   2,   0,   0,   0, 
     60,   7,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    103,  95, 104,  97, 105, 114, 
     67, 111, 110, 115, 116,  97, 
    110, 116,  66, 117, 102, 102, 
    101, 114,   0,  71,  70,  83, 
     68,  75,  95,  72,  97, 105, 
    114,  95,  67, 111, 110, 115, 
    116,  97, 110, 116,  66, 117, 
    102, 102, 101, 114,   0, 105, 
    110, 118, 101, 114, 115, 101, 
     86, 105, 101, 119,  80, 114, 
    111, 106, 101,  99, 116, 105, 
    111, 110,   0, 102, 108, 111, 
     97, 116,  52, 120,  52,   0, 
    171, 171,   2,   0,   3,   0, 
      4,   0,   4,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 237,   0, 
      0,   0, 105, 110, 118, 101, 
    114, 115, 101,  80, 114, 111, 
    106, 101,  99, 116, 105, 111, 
    110,   0, 105, 110, 118, 101, 
    114, 115, 101,  86, 105, 101, 
    119, 112, 111, 114, 116,   0, 
    105, 110, 118, 101, 114, 115, 
    101,  86, 105, 101, 119,  80, 
    114, 111, 106, 101,  99, 116, 
    105, 111, 110,  86, 105, 101, 
    119, 112, 111, 114, 116,   0, 
     99,  97, 109,  80, 111, 115, 
    105, 116, 105, 111, 110,   0, 
    102, 108, 111,  97, 116,  52, 
      0, 171,   1,   0,   3,   0, 
      1,   0,   4,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 104,   1, 
      0,   0, 109, 111, 100, 101, 
    108,  67, 101, 110, 116, 101, 
    114,   0, 117, 115, 101,  82, 
    111, 111, 116,  67, 111, 108, 
    111, 114,  84, 101, 120, 116, 
    117, 114, 101,   0, 105, 110, 
    116,   0,   0,   0,   2,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 180,   1, 
      0,   0, 117, 115, 101,  84, 
    105, 112,  67, 111, 108, 111, 
    114,  84, 101, 120, 116, 117, 
    114, 101,   0, 117, 115, 101, 
     83, 116, 114,  97, 110, 100, 
     84, 101, 120, 116, 117, 114, 
    101,   0, 117, 115, 101,  83, 
    112, 101,  99, 117, 108,  97, 
    114,  84, 101, 120, 116, 117, 
    114, 101,   0, 114, 101,  99, 
    101, 105, 118, 101,  83, 104, 
     97, 100, 111, 119, 115,   0, 
    115, 104,  97, 100, 111, 119, 
     85, 115, 101,  76, 101, 102, 
    116,  72,  97, 110, 100, 101, 
    100,   0,  95,  95, 115, 104, 
     97, 100, 111, 119,  82, 101, 
    115, 101, 114, 118, 101, 100, 
     49,  95,  95,   0, 102, 108, 
    111,  97, 116,   0,   0,   0, 
      3,   0,   1,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     74,   2,   0,   0,  95,  95, 
    115, 104,  97, 100, 111, 119, 
     82, 101, 115, 101, 114, 118, 
    101, 100,  50,  95,  95,   0, 
    115, 116, 114,  97, 110, 100, 
     66, 108, 101, 110, 100,  77, 
    111, 100, 101,   0,  99, 111, 
    108, 111, 114, 105, 122, 101, 
     77, 111, 100, 101,   0, 115, 
    116, 114,  97, 110, 100,  80, 
    111, 105, 110, 116,  67, 111, 
    117, 110, 116,   0,  95,  95, 
    114, 101, 115, 101, 114, 118, 
    101, 100,  95,  95,   0, 108, 
    111, 100,  68, 105, 115, 116, 
     97, 110,  99, 101,  70,  97, 
     99, 116, 111, 114,   0, 108, 
    111, 100,  68, 101, 116,  97, 
    105, 108,  70,  97,  99, 116, 
    111, 114,   0, 108, 111, 100, 
     65, 108, 112, 104,  97,  70, 
     97,  99, 116, 111, 114,   0, 
     95,  95, 114, 101, 115, 101, 
    114, 118, 101, 100,  76,  79, 
     68,  95,  95,  95,   0, 100, 
    101, 102,  97, 117, 108, 116, 
     77,  97, 116, 101, 114, 105, 
     97, 108,   0,  71,  70,  83, 
     68,  75,  95,  72,  97, 105, 
    114,  95,  77,  97, 116, 101, 
    114, 105,  97, 108,   0, 114, 
    111, 111, 116,  67, 111, 108, 
    111, 114,   0, 116, 105, 112, 
     67, 111, 108, 111, 114,   0, 
    115, 112, 101,  99, 117, 108, 
     97, 114,  67, 111, 108, 111, 
    114,   0, 100, 105, 102, 102, 
    117, 115, 101,  66, 108, 101, 
    110, 100,   0, 100, 105, 102, 
    102, 117, 115, 101,  83,  99, 
     97, 108, 101,   0, 100, 105, 
    102, 102, 117, 115, 101,  72, 
     97, 105, 114,  78, 111, 114, 
    109,  97, 108,  87, 101, 105, 
    103, 104, 116,   0,  95, 100, 
    105, 102, 102, 117, 115, 101, 
     85, 110, 117, 115, 101, 100, 
     95,   0, 115, 112, 101,  99, 
    117, 108,  97, 114,  80, 114, 
    105, 109,  97, 114, 121,  83, 
     99,  97, 108, 101,   0, 115, 
    112, 101,  99, 117, 108,  97, 
    114,  80, 114, 105, 109,  97, 
    114, 121,  80, 111, 119, 101, 
    114,   0, 115, 112, 101,  99, 
    117, 108,  97, 114,  80, 114, 
    105, 109,  97, 114, 121,  66, 
    114, 101,  97, 107, 117, 112, 
      0, 115, 112, 101,  99, 117, 
    108,  97, 114,  78, 111, 105, 
    115, 101,  83,  99,  97, 108, 
    101,   0, 115, 112, 101,  99, 
    117, 108,  97, 114,  83, 101, 
     99, 111, 110, 100,  97, 114, 
    121,  83,  99,  97, 108, 101, 
      0, 115, 112, 101,  99, 117, 
    108,  97, 114,  83, 101,  99, 
    111, 110, 100,  97, 114, 121, 
     80, 111, 119, 101, 114,   0, 
    115, 112, 101,  99, 117, 108, 
     97, 114,  83, 101,  99, 111, 
    110, 100,  97, 114, 121,  79, 
    102, 102, 115, 101, 116,   0, 
     95, 115, 112, 101,  99, 117, 
    108,  97, 114,  85, 110, 117, 
    115, 101, 100,  95,   0, 114, 
    111, 111, 116,  84, 105, 112, 
     67, 111, 108, 111, 114,  87, 
    101, 105, 103, 104, 116,   0, 
    114, 111, 111, 116,  84, 105, 
    112,  67, 111, 108, 111, 114, 
     70,  97, 108, 108, 111, 102, 
    102,   0, 115, 104,  97, 100, 
    111, 119,  83, 105, 103, 109, 
     97,   0, 115, 116, 114,  97, 
    110, 100,  66, 108, 101, 110, 
    100,  83,  99,  97, 108, 101, 
      0, 103, 108, 105, 110, 116, 
     83, 116, 114, 101, 110, 103, 
    116, 104,   0, 103, 108, 105, 
    110, 116,  67, 111, 117, 110, 
    116,   0, 103, 108, 105, 110, 
    116,  69, 120, 112, 111, 110, 
    101, 110, 116,   0, 114, 111, 
    111, 116,  65, 108, 112, 104, 
     97,  70,  97, 108, 108, 111, 
    102, 102,   0, 171,  41,   3, 
      0,   0, 112,   1,   0,   0, 
      0,   0,   0,   0,  51,   3, 
      0,   0, 112,   1,   0,   0, 
     16,   0,   0,   0,  60,   3, 
      0,   0, 112,   1,   0,   0, 
     32,   0,   0,   0,  74,   3, 
      0,   0,  80,   2,   0,   0, 
     48,   0,   0,   0,  87,   3, 
      0,   0,  80,   2,   0,   0, 
     52,   0,   0,   0, 100,   3, 
      0,   0,  80,   2,   0,   0, 
     56,   0,   0,   0, 124,   3, 
      0,   0,  80,   2,   0,   0, 
     60,   0,   0,   0, 140,   3, 
      0,   0,  80,   2,   0,   0, 
     64,   0,   0,   0, 161,   3, 
      0,   0,  80,   2,   0,   0, 
     68,   0,   0,   0, 182,   3, 
      0,   0,  80,   2,   0,   0, 
     72,   0,   0,   0, 205,   3, 
      0,   0,  80,   2,   0,   0, 
     76,   0,   0,   0, 224,   3, 
      0,   0,  80,   2,   0,   0, 
     80,   0,   0,   0, 247,   3, 
      0,   0,  80,   2,   0,   0, 
     84,   0,   0,   0,  14,   4, 
      0,   0,  80,   2,   0,   0, 
     88,   0,   0,   0,  38,   4, 
      0,   0,  80,   2,   0,   0, 
     92,   0,   0,   0,  55,   4, 
      0,   0,  80,   2,   0,   0, 
     96,   0,   0,   0,  74,   4, 
      0,   0,  80,   2,   0,   0, 
    100,   0,   0,   0,  94,   4, 
      0,   0,  80,   2,   0,   0, 
    104,   0,   0,   0, 106,   4, 
      0,   0,  80,   2,   0,   0, 
    108,   0,   0,   0, 123,   4, 
      0,   0,  80,   2,   0,   0, 
    112,   0,   0,   0, 137,   4, 
      0,   0,  80,   2,   0,   0, 
    116,   0,   0,   0, 148,   4, 
      0,   0,  80,   2,   0,   0, 
    120,   0,   0,   0, 162,   4, 
      0,   0,  80,   2,   0,   0, 
    124,   0,   0,   0,   5,   0, 
      0,   0,   1,   0,  32,   0, 
      0,   0,  23,   0, 180,   4, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     21,   3,   0,   0,  95, 110, 
    111, 105, 115, 101,  84,  97, 
     98, 108, 101,   0,   1,   0, 
      3,   0,   1,   0,   4,   0, 
      0,   1,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    104,   1,   0,   0, 215,   0, 
      0,   0, 248,   0,   0,   0, 
      0,   0,   0,   0,  28,   1, 
      0,   0, 248,   0,   0,   0, 
     64,   0,   0,   0,  46,   1, 
      0,   0, 248,   0,   0,   0, 
    128,   0,   0,   0,  62,   1, 
      0,   0, 248,   0,   0,   0, 
    192,   0,   0,   0,  92,   1, 
      0,   0, 112,   1,   0,   0, 
      0,   1,   0,   0, 148,   1, 
      0,   0, 112,   1,   0,   0, 
     16,   1,   0,   0, 160,   1, 
      0,   0, 184,   1,   0,   0, 
     32,   1,   0,   0, 220,   1, 
      0,   0, 184,   1,   0,   0, 
     36,   1,   0,   0, 239,   1, 
      0,   0, 184,   1,   0,   0, 
     40,   1,   0,   0,   0,   2, 
      0,   0, 184,   1,   0,   0, 
     44,   1,   0,   0,  19,   2, 
      0,   0, 184,   1,   0,   0, 
     48,   1,   0,   0,  34,   2, 
      0,   0, 184,   1,   0,   0, 
     52,   1,   0,   0,  54,   2, 
      0,   0,  80,   2,   0,   0, 
     56,   1,   0,   0, 116,   2, 
      0,   0,  80,   2,   0,   0, 
     60,   1,   0,   0, 136,   2, 
      0,   0, 184,   1,   0,   0, 
     64,   1,   0,   0, 152,   2, 
      0,   0, 184,   1,   0,   0, 
     68,   1,   0,   0, 165,   2, 
      0,   0, 184,   1,   0,   0, 
     72,   1,   0,   0, 182,   2, 
      0,   0, 184,   1,   0,   0, 
     76,   1,   0,   0, 195,   2, 
      0,   0,  80,   2,   0,   0, 
     80,   1,   0,   0, 213,   2, 
      0,   0,  80,   2,   0,   0, 
     84,   1,   0,   0, 229,   2, 
      0,   0,  80,   2,   0,   0, 
     88,   1,   0,   0, 244,   2, 
      0,   0,  80,   2,   0,   0, 
     92,   1,   0,   0,   5,   3, 
      0,   0, 200,   5,   0,   0, 
     96,   1,   0,   0, 236,   5, 
      0,   0, 248,   5,   0,   0, 
    224,   1,   0,   0,   5,   0, 
      0,   0,   1,   0, 120,   4, 
      0,   0,  24,   0,  28,   6, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    189,   0,   0,   0,  77, 105, 
     99, 114, 111, 115, 111, 102, 
    116,  32,  40,  82,  41,  32, 
     72,  76,  83,  76,  32,  83, 
    104,  97, 100, 101, 114,  32, 
     67, 111, 109, 112, 105, 108, 
    101, 114,  32,  54,  46,  51, 
     46,  57,  54,  48,  48,  46, 
     49,  54,  51,  56,  52,   0, 
    171, 171,  73,  83,  71,  78, 
    172,   0,   0,   0,   5,   0, 
      0,   0,   8,   0,   0,   0, 
    128,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,  15,   0,   0, 
    140,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
    149,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   2,   0, 
      0,   0,   1,   0,   0,   0, 
    163,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   2,   0, 
      0,   0,   2,   0,   0,   0, 
    165,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   2,   0, 
      0,   0,   4,   0,   0,   0, 
     83,  86,  95,  80, 111, 115, 
    105, 116, 105, 111, 110,   0, 
     72,  65,  73,  82,  95,  84, 
     69,  88,   0,  67,  79,  77, 
     80,  95,  84,  69,  88,  67, 
     79,  79,  82,  68,   0,  67, 
      0,  67,  79,  79,  82,  68, 
     83,   0,  79,  83,  71,  78, 
     44,   0,   0,   0,   1,   0, 
      0,   0,   8,   0,   0,   0, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,   1,  14,   0,   0, 
     83,  86,  95,  84,  97, 114, 
    103, 101, 116,   0, 171, 171, 
     83,  72,  69,  88, 116,   1, 
      0,   0,  80,   0,   0,   0, 
     93,   0,   0,   0, 106,   8, 
      0,   1,  89,   0,   0,   4, 
     70, 142,  32,   0,   0,   0, 
      0,   0,  12,   0,   0,   0, 
    100,  32,   0,   4, 242,  16, 
     16,   0,   0,   0,   0,   0, 
      1,   0,   0,   0, 101,   0, 
      0,   3,  18,  32,  16,   0, 
      0,   0,   0,   0, 104,   0, 
      0,   2,   1,   0,   0,   0, 
     56,   0,   0,   8,  50,   0, 
     16,   0,   0,   0,   0,   0, 
     86,  21,  16,   0,   0,   0, 
      0,   0,  70, 128,  32,   0, 
      0,   0,   0,   0,   9,   0, 
      0,   0,  50,   0,   0,  10, 
     50,   0,  16,   0,   0,   0, 
      0,   0,   6,  16,  16,   0, 
      0,   0,   0,   0,  70, 128, 
     32,   0,   0,   0,   0,   0, 
      8,   0,   0,   0,  70,   0, 
     16,   0,   0,   0,   0,   0, 
      0,   0,   0,   8,  50,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   0,  16,   0,   0,   0, 
      0,   0,  70, 128,  32,   0, 
      0,   0,   0,   0,  11,   0, 
      0,   0,  54,   0,   0,   5, 
     66,   0,  16,   0,   0,   0, 
      0,   0,  42,  16,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   7, 114,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
    246,  31,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   8, 
     34,   0,  16,   0,   0,   0, 
      0,   0,  26,   0,  16,   0, 
      0,   0,   0,   0,  42, 128, 
     32,   0,   0,   0,   0,   0, 
      5,   0,   0,   0,  50,   0, 
      0,  10,  18,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     42, 128,  32,   0,   0,   0, 
      0,   0,   4,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0,  50,   0,   0,  10, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  42,   0,  16,   0, 
      0,   0,   0,   0,  42, 128, 
     32,   0,   0,   0,   0,   0, 
      6,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     50,   0,   0,  10,  18,  32, 
     16,   0,   0,   0,   0,   0, 
     58,  16,  16,   0,   0,   0, 
      0,   0,  42, 128,  32,   0, 
      0,   0,   0,   0,   7,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,  62,   0, 
      0,   1,  83,  84,  65,  84, 
    148,   0,   0,   0,  10,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0,   8,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0
};
