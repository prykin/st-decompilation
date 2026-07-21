#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tinittxt.cpp
   Diagnostic line evidence: 352 | 379 | 380 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl LandInit(short *param_1)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  int iVar4;
  AnonShape_006DBCA0_EF06575F *pAVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  InternalExceptionFrame local_54;
  int local_10;
  int local_c;
  undefined4 *local_8;

  iVar8 = 0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (iVar4 == 0) {
    pAVar5 = (AnonShape_006DBCA0_EF06575F *)FUN_006b04d0(0x4f2);
    if (pAVar5 == (AnonShape_006DBCA0_EF06575F *)0x0) {
      DAT_0080760c = (AnonShape_006DC050_D52EE3EA *)0x0;
    }
    else {
      DAT_0080760c = (AnonShape_006DC050_D52EE3EA *)FUN_006dbca0(pAVar5);
    }
    if (DAT_0080760c == (AnonShape_006DC050_D52EE3EA *)0x0) {
      RaiseInternalException
                (-2,g_overwriteContext_007ED77C,"E:\\__titans\\tinittxt.cpp",0x160);
    }
    FUN_006dc050(DAT_0080760c,DAT_0080759c,0,0,(uint)*(byte *)(param_1 + 2) << 1,
                 (uint)*(byte *)(param_1 + 2) << 1,0,0xc0240000,0,0x40240000,0,0xc0240000,0,
                 0x40240000,0x4024000000000000,0x4023ee97865e3540,0);
    DAT_0080760c->field_0128 = 0;
    FUN_006dd610(DAT_0080760c,4,0,0x40240000,0,0x40240000);
    puVar6 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,8,0x14);
    *(uint **)((int)param_1 + 0x44d) = puVar6;
    puVar6 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,0xc,0x14);
    *(uint **)((int)param_1 + 0x451) = puVar6;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (0 < *(int *)((int)param_1 + 0x455)) {
      puVar7 = (undefined4 *)((int)param_1 + 0x459);
      do {
        if ((undefined4 *)*puVar7 != (undefined4 *)0x0) {
          thunk_FUN_005745e0((AnonShape_005745E0_AF52CC75 *)param_1,(undefined4 *)*puVar7);
        }
        iVar8 = iVar8 + 1;
        puVar7 = puVar7 + 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      } while (iVar8 < *(int *)((int)param_1 + 0x455));
    }
    sVar1 = *param_1;
    sVar2 = param_1[1];
    local_10 = (int)sVar2 / 2;
    local_8 = (undefined4 *)
              Library::DKW::LIB::FUN_006aac70
                        ((uint)*(byte *)(param_1 + 2) * (uint)*(byte *)(param_1 + 2));
    local_c = 0;
    if (0 < (int)sVar2 / 2) {
      do {
        iVar4 = 0;
        if (0 < (int)sVar1 / 2) {
          do {
            thunk_FUN_00574920(param_1,iVar4,local_c,local_8);
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)sVar1 / 2);
        }
        local_c = local_c + 1;
      } while (local_c < local_10);
    }
    FreeAndNull(&local_8);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar8 = ReportDebugMessage("E:\\__titans\\tinittxt.cpp",0x17b,0,iVar4,"%s",
                             "LandInit");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\tinittxt.cpp",0x17c);
  return;
}

