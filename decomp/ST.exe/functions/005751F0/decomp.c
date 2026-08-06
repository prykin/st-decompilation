#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tinittxt.cpp
   Diagnostic line evidence: 352 | 379 | 380 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl LandInit(AnonShape_005751F0_0FFC949A *param_1)

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
  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (iVar2 == 0) {
    pAVar2 = (AnonShape_006DBCA0_EF06575F *)FUN_006b04d0(0x4f2);
    if (pAVar2 == nullptr) {
      g_sT3DSMAPContext_0080760C = nullptr;
    }
    else {
      g_sT3DSMAPContext_0080760C = (ST3DSMAPContext *)FUN_006dbca0(pAVar2);
    }
    if (g_sT3DSMAPContext_0080760C == nullptr) {
      RaiseInternalException
                (-2,g_overwriteContext_007ED77C,"E:\\__titans\\tinittxt.cpp",0x160);
    }
    iVar4 = (uint)param_1->field_0004 << 1;
    ST3DSMAPContext::sub_006DC050
              (g_sT3DSMAPContext_0080760C,g_dDXContext_0080759C,0,0,iVar4,iVar4,-10.0,10.0,-10.0,
               10.0,10.0,9.965999793052674,0);
    g_sT3DSMAPContext_0080760C->field_0128 = 0;
    ST3DSMAPContext::sub_006DD610(g_sT3DSMAPContext_0080760C,4,10.0,10.0);
    pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,0x14,8,0x14);
    param_1->field_044D = pDVar3;
    pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,0x14,0xc,0x14);
    param_1->field_0451 = pDVar3;
    if (0 < param_1->field_0455) {
      pAVar5 = param_1 + 1;
      do {
        if (*(undefined4 **)pAVar5 != nullptr) {
          thunk_FUN_005745e0((AnonShape_005745E0_AF52CC75 *)param_1,*(undefined4 **)pAVar5);
        }
        iVar6 = iVar6 + 1;
        pAVar5 = (AnonShape_005751F0_0FFC949A *)&pAVar5->field_0004;
      } while (iVar6 < param_1->field_0455);
    }
    iVar4 = (int)param_1->field_0002 / 2;
    iVar6 = (int)param_1->field_0000 / 2;
    local_10 = iVar4;
    local_8 = Library::DKW::LIB::MemAlloc((uint)param_1->field_0004 * (uint)param_1->field_0004);
    local_c = 0;
    if (0 < iVar4) {
      do {
        iVar4 = 0;
        if (0 < iVar6) {
          do {
            thunk_FUN_00574920((AnonShape_00574920_7507981E *)param_1,iVar4,local_c,local_8);
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar6);
        }
        local_c = local_c + 1;
      } while (local_c < local_10);
    }
    FreeAndNull(&local_8);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\tinittxt.cpp",0x17b,0,iVar2,"%s",
                             "LandInit");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\tinittxt.cpp",0x17c);
  return;
}

