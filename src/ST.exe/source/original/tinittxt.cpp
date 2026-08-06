#include "st/generated.hpp"
// Generated translation unit: source/original/tinittxt.cpp

// 005751F0 LandInit
#line 4 "decomp/ST.exe/functions/005751F0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tinittxt.cpp
   Diagnostic line evidence: 352 | 379 | 380 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl st::fn_005751F0(AnonShape_005751F0_0FFC949A *param_1)

{
  int iVar2;
  AnonShape_006DBCA0_EF06575F *pAVar2;
  DArrayTy *pDVar3;
  int iVar4;
  AnonShape_005751F0_0FFC949A *pAVar5;
  int iVar6;
  InternalExceptionFrame local_54;
  int local_10;
  int local_c;
  undefined4 *local_8;

  iVar6 = 0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar2 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  if (iVar2 == 0) {
    pAVar2 = (AnonShape_006DBCA0_EF06575F *)st::fn_006B04D0(0x4f2);
    if (pAVar2 == nullptr) {
      g_sT3DSMAPContext_0080760C = nullptr;
    }
    else {
      g_sT3DSMAPContext_0080760C = (ST3DSMAPContext *)st::fn_006DBCA0(pAVar2);
    }
    if (g_sT3DSMAPContext_0080760C == nullptr) {
      st::fn_006A5E40
                (-2,g_overwriteContext_007ED77C,"E:\\__titans\\tinittxt.cpp",0x160);
    }
    iVar4 = (uint)param_1->field_0004 << 1;
    st::fn_006DC050
              (g_sT3DSMAPContext_0080760C,g_dDXContext_0080759C,0,0,iVar4,iVar4,-10.0,10.0,-10.0,
               10.0,10.0,9.965999793052674,0);
    g_sT3DSMAPContext_0080760C->field_0128 = 0;
    st::fn_006DD610(g_sT3DSMAPContext_0080760C,4,10.0,10.0);
    pDVar3 = st::fn_006AE290(nullptr,0x14,8,0x14);
    param_1->field_044D = pDVar3;
    pDVar3 = st::fn_006AE290(nullptr,0x14,0xc,0x14);
    param_1->field_0451 = pDVar3;
    if (0 < param_1->field_0455) {
      pAVar5 = param_1 + 1;
      do {
        if (*(undefined4 **)pAVar5 != nullptr) {
          st::fn_004016C2((AnonShape_005745E0_AF52CC75 *)param_1,*(undefined4 **)pAVar5);
        }
        iVar6 = iVar6 + 1;
        pAVar5 = (AnonShape_005751F0_0FFC949A *)&pAVar5->field_0004;
      } while (iVar6 < param_1->field_0455);
    }
    iVar4 = (int)param_1->field_0002 / 2;
    iVar6 = (int)param_1->field_0000 / 2;
    local_10 = iVar4;
    local_8 = st::fn_006AAC70((uint)param_1->field_0004 * (uint)param_1->field_0004);
    local_c = 0;
    if (0 < iVar4) {
      do {
        iVar4 = 0;
        if (0 < iVar6) {
          do {
            st::fn_00404B79((AnonShape_00574920_7507981E *)param_1,iVar4,local_c,local_8);
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar6);
        }
        local_c = local_c + 1;
      } while (local_c < local_10);
    }
    st::fn_006AB060(&local_8);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar6 = st::fn_006AD4D0("E:\\__titans\\tinittxt.cpp",0x17b,0,iVar2,"%s",
                             "LandInit");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\tinittxt.cpp",0x17c);
  return;
}

