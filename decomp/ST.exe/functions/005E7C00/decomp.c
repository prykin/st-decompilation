#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::AddStr */

void __thiscall WaitTy::AddStr(WaitTy *this,uint *param_1,int param_2)

{
  dword dVar1;
  ushort *puVar2;
  AnonShape_006B5B10_E0D06CF1 *pAVar3;
  code *pcVar4;
  WaitTy *pWVar5;
  int iVar6;
  DArrayTy *pDVar7;
  DArrayTy *pDVar8;
  char *text;
  undefined4 *puVar9;
  uint *resourceString;
  int iVar10;
  uint uVar11;
  InternalExceptionFrame local_54;
  DArrayTy *local_10;
  WaitTy *local_c;
  uint *local_8;

  if (param_1 != (uint *)0x0) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_c = this;
    iVar6 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
    pWVar5 = local_c;
    if (iVar6 == 0) {
      if (param_2 != 0) {
        pDVar8 = local_c->field_1AF0;
        uVar11 = local_c->field_1AF4;
        if ((int)uVar11 < (int)pDVar8->elementSize) {
          do {
            FUN_006b7830((AnonShape_006B7830_769CA2DF *)pDVar8,uVar11);
            pDVar8 = pWVar5->field_1AF0;
            uVar11 = pWVar5->field_1AF4;
          } while ((int)uVar11 < (int)pDVar8->elementSize);
        }
        FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)pWVar5->field_1AEC,0,0,pWVar5->field_1AF4 * 0x13
                     ,((AnonShape_006B5B10_E0D06CF1 *)pWVar5->field_1AEC)->field_0004,
                     (0x16 - pWVar5->field_1AF4) * 0x13,0);
      }
      pDVar7 = (DArrayTy *)ccFntTy::_TxtToSarr(g_startSystem_0081176C->field_0030,param_1);
      pDVar8 = local_10;
      if (pDVar7 != (DArrayTy *)0x0) {
        pDVar8 = (DArrayTy *)
                 ccFntTy::FormSarr(g_startSystem_0081176C->field_0030,(uint *)pDVar7,
                                   " ,.;:!?/\\()[]{}",0x1e4,0,0xffffffff,1);
        local_10 = pDVar8;
        FUN_006b5570(pDVar7);
      }
      pWVar5->field_1AF4 = pWVar5->field_1AF0->elementSize;
      if (pDVar8 != (DArrayTy *)0x0) {
        iVar6 = 0;
        if (0 < (int)pDVar8->elementSize) {
          if ((int)pDVar8->elementSize < 1) {
            text = (char *)0x0;
            goto LAB_005e7d14;
          }
          do {
            text = *(char **)(pDVar8->growCapacity + iVar6 * 4);
LAB_005e7d14:
            Library::DKW::TBL::FUN_006b5aa0(&pWVar5->field_1AF0->flags,text);
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)pDVar8->elementSize);
        }
        FUN_006b5570(pDVar8);
      }
      dVar1 = pWVar5->field_1AF0->elementSize;
      if ((int)dVar1 < 0x16) {
        iVar6 = dVar1 - 1;
      }
      else if ((int)dVar1 < 0x2c) {
        pAVar3 = (AnonShape_006B5B10_E0D06CF1 *)pWVar5->field_1AEC;
        iVar6 = 0x2c - dVar1;
        Library::DKW::WGR::FUN_006b55f0
                  (pAVar3,0,0,0,(byte *)pAVar3,0,0,dVar1 * 0x13 + -0x1a2,pAVar3->field_0004,
                   iVar6 * 0x13);
      }
      else {
        puVar2 = pWVar5->field_1AEC;
        iVar6 = 0;
        local_8 = *(uint **)(puVar2 + 10);
        if (local_8 == (uint *)0x0) {
          local_8 = (uint *)(((uint)puVar2[7] * *(int *)(puVar2 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                            *(int *)(puVar2 + 4));
        }
        puVar9 = (undefined4 *)FUN_006b4fa0((int)puVar2);
        for (uVar11 = (uint)local_8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        for (uVar11 = (uint)local_8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar9 = 0;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
      }
      dVar1 = pWVar5->field_1AF0->elementSize;
      while (0x15 < (int)dVar1) {
        FUN_006b7830((AnonShape_006B7830_769CA2DF *)pWVar5->field_1AF0,0);
        pDVar8 = pWVar5->field_1AF0;
        pWVar5->field_1AF0 = (DArrayTy *)&pDVar8[-1].elementSize;
        dVar1 = pDVar8[-1].capacity;
      }
      if (iVar6 <= (int)(pWVar5->field_1AF0->elementSize - 1)) {
        local_8 = &pWVar5->field_1A94 + iVar6;
        uVar11 = iVar6 * 0x13;
        do {
          FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)pWVar5->field_1AEC,0,0,uVar11,
                       ((AnonShape_006B5B10_E0D06CF1 *)pWVar5->field_1AEC)->field_0004,0x13,0);
          ccFntTy::SetSurf(g_startSystem_0081176C->field_0030,(int)pWVar5->field_1AEC,0,2,uVar11,
                           *(int *)(pWVar5->field_1AEC + 2) + -4,0x13);
          if (iVar6 < (int)pWVar5->field_1AF0->elementSize) {
            resourceString = *(uint **)(pWVar5->field_1AF0->growCapacity + iVar6 * 4);
          }
          else {
            resourceString = (uint *)0x0;
          }
          ccFntTy::WrStr(g_startSystem_0081176C->field_0030,resourceString,0,-1,1);
          FUN_006b35d0((int *)PTR_008075a8,*local_8);
          iVar6 = iVar6 + 1;
          local_8 = local_8 + 1;
          uVar11 = uVar11 + 0x13;
        } while (iVar6 <= (int)(pWVar5->field_1AF0->elementSize - 1));
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\Start\\wait_obj.cpp",0x120,0,iVar6,
                                "%s","WaitTy::AddStr");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Start\\wait_obj.cpp",0x120);
  }
  return;
}

