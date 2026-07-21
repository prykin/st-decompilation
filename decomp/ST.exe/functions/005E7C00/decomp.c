#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::AddStr */

void __thiscall WaitTy::AddStr(WaitTy *this,uint *param_1,int param_2)

{
  ushort *puVar1;
  AnonShape_006B5B10_E0D06CF1 *pAVar2;
  code *pcVar3;
  WaitTy *pWVar4;
  int iVar5;
  AnonShape_006B7830_769CA2DF *pAVar6;
  AnonShape_006B5570_4D68B99C *pAVar7;
  AnonShape_006B5570_4D68B99C *pAVar8;
  char *text;
  undefined4 *puVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  InternalExceptionFrame local_54;
  AnonShape_006B5570_4D68B99C *local_10;
  WaitTy *local_c;
  uint *local_8;

  if (param_1 != (uint *)0x0) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_c = this;
    iVar5 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
    pWVar4 = local_c;
    if (iVar5 == 0) {
      if (param_2 != 0) {
        pAVar6 = (AnonShape_006B7830_769CA2DF *)local_c->field_1AF0;
        uVar12 = local_c->field_1AF4;
        if ((int)uVar12 < (int)pAVar6->field_0008) {
          do {
            FUN_006b7830(pAVar6,uVar12);
            pAVar6 = (AnonShape_006B7830_769CA2DF *)pWVar4->field_1AF0;
            uVar12 = pWVar4->field_1AF4;
          } while ((int)uVar12 < (int)pAVar6->field_0008);
        }
        FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)pWVar4->field_1AEC,0,0,pWVar4->field_1AF4 * 0x13
                     ,((AnonShape_006B5B10_E0D06CF1 *)pWVar4->field_1AEC)->field_0004,
                     (0x16 - pWVar4->field_1AF4) * 0x13,0);
      }
      pAVar7 = (AnonShape_006B5570_4D68B99C *)ccFntTy::_TxtToSarr(PTR_0081176c->field_0030,param_1);
      pAVar8 = local_10;
      if (pAVar7 != (AnonShape_006B5570_4D68B99C *)0x0) {
        pAVar8 = (AnonShape_006B5570_4D68B99C *)
                 ccFntTy::FormSarr(PTR_0081176c->field_0030,(uint *)pAVar7," ,.;:!?/\\()[]{}"
                                   ,0x1e4,0,0xffffffff,1);
        local_10 = pAVar8;
        FUN_006b5570(pAVar7);
      }
      pWVar4->field_1AF4 = pWVar4->field_1AF0[2];
      if (pAVar8 != (AnonShape_006B5570_4D68B99C *)0x0) {
        iVar5 = 0;
        if (0 < (int)pAVar8->field_0008) {
          if ((int)pAVar8->field_0008 < 1) {
            text = (char *)0x0;
            goto LAB_005e7d14;
          }
          do {
            text = *(char **)(pAVar8->field_0014 + iVar5 * 4);
LAB_005e7d14:
            Library::DKW::TBL::FUN_006b5aa0(pWVar4->field_1AF0,text);
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)pAVar8->field_0008);
        }
        FUN_006b5570(pAVar8);
      }
      uVar12 = pWVar4->field_1AF0[2];
      if ((int)uVar12 < 0x16) {
        iVar5 = uVar12 - 1;
      }
      else if ((int)uVar12 < 0x2c) {
        pAVar2 = (AnonShape_006B5B10_E0D06CF1 *)pWVar4->field_1AEC;
        iVar5 = 0x2c - uVar12;
        Library::DKW::WGR::FUN_006b55f0
                  (pAVar2,0,0,0,(byte *)pAVar2,0,0,uVar12 * 0x13 + -0x1a2,pAVar2->field_0004,
                   iVar5 * 0x13);
      }
      else {
        puVar1 = pWVar4->field_1AEC;
        iVar5 = 0;
        local_8 = *(uint **)(puVar1 + 10);
        if (local_8 == (uint *)0x0) {
          local_8 = (uint *)(((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                            *(int *)(puVar1 + 4));
        }
        puVar9 = (undefined4 *)FUN_006b4fa0((int)puVar1);
        for (uVar12 = (uint)local_8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        for (uVar12 = (uint)local_8 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined1 *)puVar9 = 0;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
      }
      uVar12 = pWVar4->field_1AF0[2];
      while (0x15 < (int)uVar12) {
        FUN_006b7830((AnonShape_006B7830_769CA2DF *)pWVar4->field_1AF0,0);
        puVar10 = pWVar4->field_1AF0;
        pWVar4->field_1AF0 = puVar10 + -6;
        uVar12 = puVar10[-4];
      }
      if (iVar5 <= (int)(pWVar4->field_1AF0[2] - 1)) {
        local_8 = &pWVar4->field_1A94 + iVar5;
        uVar12 = iVar5 * 0x13;
        do {
          FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)pWVar4->field_1AEC,0,0,uVar12,
                       ((AnonShape_006B5B10_E0D06CF1 *)pWVar4->field_1AEC)->field_0004,0x13,0);
          ccFntTy::SetSurf(PTR_0081176c->field_0030,(int)pWVar4->field_1AEC,0,2,uVar12,
                           *(int *)(pWVar4->field_1AEC + 2) + -4,0x13);
          if (iVar5 < (int)pWVar4->field_1AF0[2]) {
            puVar10 = *(uint **)(pWVar4->field_1AF0[5] + iVar5 * 4);
          }
          else {
            puVar10 = (uint *)0x0;
          }
          ccFntTy::WrStr(PTR_0081176c->field_0030,puVar10,0,-1,1);
          FUN_006b35d0((int *)PTR_008075a8,*local_8);
          iVar5 = iVar5 + 1;
          local_8 = local_8 + 1;
          uVar12 = uVar12 + 0x13;
        } while (iVar5 <= (int)(pWVar4->field_1AF0[2] - 1));
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\Start\\wait_obj.cpp",0x120,0,iVar5,
                                "%s","WaitTy::AddStr");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\wait_obj.cpp",0x120);
  }
  return;
}

