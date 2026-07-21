#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::AddStr */

void __thiscall WaitTy::AddStr(WaitTy *this,uint *param_1,int param_2)

{
  AnonPointee_WaitTy_1AEC *pAVar1;
  AnonPointee_WaitTy_1AF0 *pAVar2;
  code *pcVar3;
  WaitTy *pWVar4;
  int iVar5;
  AnonShape_006B7830_769CA2DF *pAVar6;
  AnonShape_006B5570_4D68B99C *pAVar7;
  AnonShape_006B5570_4D68B99C *pAVar8;
  char *text;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
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
        uVar11 = local_c->field_1AF4;
        if ((int)uVar11 < (int)pAVar6->field_0008) {
          do {
            FUN_006b7830(pAVar6,uVar11);
            pAVar6 = (AnonShape_006B7830_769CA2DF *)pWVar4->field_1AF0;
            uVar11 = pWVar4->field_1AF4;
          } while ((int)uVar11 < (int)pAVar6->field_0008);
        }
        FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)pWVar4->field_1AEC,0,0,pWVar4->field_1AF4 * 0x13
                     ,pWVar4->field_1AEC->field_0004,(0x16 - pWVar4->field_1AF4) * 0x13,0);
      }
      pAVar7 = (AnonShape_006B5570_4D68B99C *)
               ccFntTy::_TxtToSarr((ccFntTy *)PTR_0081176c->field_0030,param_1);
      pAVar8 = local_10;
      if (pAVar7 != (AnonShape_006B5570_4D68B99C *)0x0) {
        pAVar8 = (AnonShape_006B5570_4D68B99C *)
                 ccFntTy::FormSarr((ccFntTy *)PTR_0081176c->field_0030,(uint *)pAVar7,
                                   s________________007c21d8,0x1e4,0,0xffffffff,1);
        local_10 = pAVar8;
        FUN_006b5570(pAVar7);
      }
      pWVar4->field_1AF4 = pWVar4->field_1AF0->field_0008;
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
            Library::DKW::TBL::FUN_006b5aa0((uint *)pWVar4->field_1AF0,text);
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)pAVar8->field_0008);
        }
        FUN_006b5570(pAVar8);
      }
      iVar5 = pWVar4->field_1AF0->field_0008;
      if (iVar5 < 0x16) {
        iVar12 = iVar5 + -1;
      }
      else if (iVar5 < 0x2c) {
        pAVar1 = pWVar4->field_1AEC;
        iVar12 = 0x2c - iVar5;
        Library::DKW::WGR::FUN_006b55f0
                  ((AnonShape_006B5B10_E0D06CF1 *)pAVar1,0,0,0,(byte *)pAVar1,0,0,
                   iVar5 * 0x13 + -0x1a2,pAVar1->field_0004,iVar12 * 0x13);
      }
      else {
        pAVar1 = pWVar4->field_1AEC;
        iVar12 = 0;
        local_8 = (uint *)pAVar1->field_0014;
        if (local_8 == (uint *)0x0) {
          local_8 = (uint *)(((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 &
                             0x1ffffffc) * pAVar1->field_0008);
        }
        puVar9 = (undefined4 *)FUN_006b4fa0((int)pAVar1);
        for (uVar11 = (uint)local_8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        for (uVar11 = (uint)local_8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar9 = 0;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
      }
      iVar5 = pWVar4->field_1AF0->field_0008;
      while (0x15 < iVar5) {
        FUN_006b7830((AnonShape_006B7830_769CA2DF *)pWVar4->field_1AF0,0);
        pAVar2 = pWVar4->field_1AF0;
        pWVar4->field_1AF0 = pAVar2 + -1;
        iVar5 = pAVar2[-1].field_0008;
      }
      if (iVar12 <= pWVar4->field_1AF0->field_0008 + -1) {
        local_8 = &pWVar4->field_1A94 + iVar12;
        uVar11 = iVar12 * 0x13;
        do {
          FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)pWVar4->field_1AEC,0,0,uVar11,
                       pWVar4->field_1AEC->field_0004,0x13,0);
          ccFntTy::SetSurf((ccFntTy *)PTR_0081176c->field_0030,(int)pWVar4->field_1AEC,0,2,uVar11,
                           pWVar4->field_1AEC->field_0004 + -4,0x13);
          if (iVar12 < (int)pWVar4->field_1AF0->field_0008) {
            puVar10 = *(uint **)(pWVar4->field_1AF0->field_0014 + iVar12 * 4);
          }
          else {
            puVar10 = (uint *)0x0;
          }
          ccFntTy::WrStr((ccFntTy *)PTR_0081176c->field_0030,puVar10,0,-1,1);
          FUN_006b35d0(DAT_008075a8,*local_8);
          iVar12 = iVar12 + 1;
          local_8 = local_8 + 1;
          uVar11 = uVar11 + 0x13;
        } while (iVar12 <= pWVar4->field_1AF0->field_0008 + -1);
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar12 = ReportDebugMessage(s_E____titans_Start_wait_obj_cpp_007cdd5c,0x120,0,iVar5,
                                &DAT_007a4ccc,s_WaitTy__AddStr_007cddc4);
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,s_E____titans_Start_wait_obj_cpp_007cdd5c,0x120);
  }
  return;
}

