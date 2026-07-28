#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 1055 | 1081 | 1082 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl
_EnumMines(int param_1,short param_2,char param_3,byte *param_4,short param_5,short param_6,
          short param_7,short param_8,short param_9,short param_10,undefined *param_11,
          undefined4 param_12)

{
  byte bVar1;
  STFishC *this;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  dword dVar5;
  byte *pbVar6;
  int iVar7;
  DArrayTy *pDVar8;
  uint uVar9;
  byte *pbVar10;
  bool bVar11;
  InternalExceptionFrame local_6c;
  byte local_28 [16];
  int local_18;
  int local_14;
  uint local_10;
  short local_c;
  short local_a;
  short local_8;
  char local_5;

  local_18 = 0;
  if (param_3 == '\b') {
    local_5 = (char)param_1;
  }
  else if ((param_3 < '\0') || (local_5 = param_3, '\b' < param_3)) {
    local_5 = -1;
  }
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  iVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\ai\\ai_mdef.cpp",0x439,0,iVar3,"%s",
                               "_EnumMines");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_mdef.cpp",0x43a);
    return iVar3;
  }
  if (PTR_007fa158 == (DArrayTy *)0x0) {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_mdef.cpp",0x41f);
  }
  uVar9 = PTR_007fa158->count - 1;
  pDVar8 = PTR_007fa158;
  if ((int)uVar9 < 0) {
    g_currentExceptionFrame = local_6c.previous;
    return local_18;
  }
  do {
    if (uVar9 < pDVar8->count) {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar8, uVar9) (runtime stride) */
      puVar4 = (undefined4 *)(pDVar8->elementSize * uVar9 + (int)pDVar8->data);
    }
    else {
      puVar4 = (undefined4 *)0x0;
    }
    this = (STFishC *)*puVar4;
    if (((this != (STFishC *)0x0) && (this->field_0024 == param_1)) &&
       ((local_10 = uVar9, dVar5 = this->slot_2C(), param_2 == 0 ||
        (pDVar8 = PTR_007fa158, (int)param_2 == dVar5)))) {
      iVar3 = 1;
      local_14 = 1;
      if ((param_4 != (byte *)0x0) && (*param_4 != 0)) {
        (*this->vtable->vfunc_74)(local_28);
        pbVar10 = local_28;
        pbVar6 = param_4;
        do {
          bVar1 = *pbVar6;
          bVar11 = bVar1 < *pbVar10;
          if (bVar1 != *pbVar10) {
LAB_0067835d:
            iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00678362;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar11 = bVar1 < pbVar10[1];
          if (bVar1 != pbVar10[1]) goto LAB_0067835d;
          pbVar6 = pbVar6 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_00678362:
        if (iVar7 != 0) {
          iVar3 = 0;
          local_14 = 0;
        }
      }
      pDVar8 = PTR_007fa158;
      uVar9 = local_10;
      if ((iVar3 != 0) &&
         ((local_5 == -1 ||
          (iVar7 = this->vfunc_6C(), pDVar8 = PTR_007fa158, uVar9 = local_10,
          local_5 == iVar7)))) {
        if ((0 < param_8) &&
           (((0 < param_9 && (0 < param_10)) &&
            ((STFishC::sub_004162B0(this,&local_8,&local_a,&local_c), local_8 < param_5 ||
             ((((local_a < param_6 || (local_c < param_7)) ||
               ((int)param_5 + (int)param_8 <= (int)local_8)) ||
              (((int)param_6 + (int)param_9 <= (int)local_a ||
               (iVar3 = local_14, (int)param_7 + (int)param_10 <= (int)local_c)))))))))) {
          iVar3 = 0;
        }
        pDVar8 = PTR_007fa158;
        uVar9 = local_10;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if (((iVar3 != 0) && (param_11 != (undefined *)0x0)) &&
           (iVar3 = (*(code *)param_11)(param_1,local_10,this,param_12), pDVar8 = PTR_007fa158,
           uVar9 = local_10, iVar3 != 0)) {
          g_currentExceptionFrame = local_6c.previous;
          return -1;
        }
      }
    }
    uVar9 = uVar9 - 1;
    if ((int)uVar9 < 0) {
      g_currentExceptionFrame = local_6c.previous;
      return local_18;
    }
  } while( true );
}

