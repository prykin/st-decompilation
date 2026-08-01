#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tinittxt.cpp
   Diagnostic line evidence: 352 | 379 | 380 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl LandInit(AnonShape_005751F0_0FFC949A *param_1)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  AnonShape_006DBCA0_EF06575F *pAVar4;
  DArrayTy *pDVar5;
  AnonShape_005751F0_0FFC949A *pAVar6;
  int iVar7;
  InternalExceptionFrame local_54;
  int local_10;
  int local_c;
  undefined4 *local_8;

  iVar7 = 0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (iVar3 == 0) {
    pAVar4 = (AnonShape_006DBCA0_EF06575F *)FUN_006b04d0(0x4f2);
    if (pAVar4 == (AnonShape_006DBCA0_EF06575F *)0x0) {
      g_sT3DSMAPContext_0080760C = (ST3DSMAPContext *)0x0;
    }
    else {
      g_sT3DSMAPContext_0080760C = (ST3DSMAPContext *)FUN_006dbca0(pAVar4);
    }
    if (g_sT3DSMAPContext_0080760C == (ST3DSMAPContext *)0x0) {
      RaiseInternalException
                (-2,g_overwriteContext_007ED77C,"E:\\__titans\\tinittxt.cpp",0x160);
    }
    iVar3 = (uint)param_1->field_0004 << 1;
    ST3DSMAPContext::sub_006DC050
              (g_sT3DSMAPContext_0080760C,g_dDXContext_0080759C,0,0,iVar3,iVar3,-10.0,10.0,-10.0,
               10.0,0x4024000000000000,0x4023ee97865e3540,0);
    *(undefined4 *)&g_sT3DSMAPContext_0080760C->field_0x128 = 0;
    ST3DSMAPContext::sub_006DD610(g_sT3DSMAPContext_0080760C,4,0,0x40240000,0,0x40240000);
    pDVar5 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0x14,8,0x14);
    param_1->field_044D = pDVar5;
    pDVar5 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0x14,0xc,0x14);
    param_1->field_0451 = pDVar5;
    if (0 < param_1->field_0455) {
      pAVar6 = param_1 + 1;
      do {
        if (*(undefined4 **)pAVar6 != (undefined4 *)0x0) {
          thunk_FUN_005745e0((AnonShape_005745E0_AF52CC75 *)param_1,*(undefined4 **)pAVar6);
        }
        iVar7 = iVar7 + 1;
        pAVar6 = (AnonShape_005751F0_0FFC949A *)&pAVar6->field_0004;
      } while (iVar7 < param_1->field_0455);
    }
    sVar1 = *(short *)param_1;
    iVar3 = (int)*(short *)&param_1->field_0002 / 2;
    local_10 = iVar3;
    local_8 = Library::DKW::LIB::MemAlloc((uint)param_1->field_0004 * (uint)param_1->field_0004);
    local_c = 0;
    if (0 < iVar3) {
      do {
        iVar3 = 0;
        if (0 < (int)sVar1 / 2) {
          do {
            thunk_FUN_00574920((AnonShape_00574920_7507981E *)param_1,iVar3,local_c,local_8);
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)sVar1 / 2);
        }
        local_c = local_c + 1;
      } while (local_c < local_10);
    }
    FreeAndNull(&local_8);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar7 = ReportDebugMessage("E:\\__titans\\tinittxt.cpp",0x17b,0,iVar3,"%s",
                             "LandInit");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\tinittxt.cpp",0x17c);
  return;
}

