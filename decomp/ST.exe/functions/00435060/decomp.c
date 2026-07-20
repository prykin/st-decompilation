
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SelfCheckObjControl */

void __thiscall STAllPlayersC::SelfCheckObjControl(STAllPlayersC *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  STGameObjC *pSVar5;
  uint uVar6;
  int iVar7;
  undefined2 uVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  int extraout_EDX_11;
  int *unaff_EDI;
  uint uVar9;
  int iVar10;
  uint local_c;
  int local_8;
  
  if (DAT_0080874d != 0xff) {
    local_8 = 4;
    iVar1 = (uint)DAT_0080874d * 0xa62 + 0x7f4f83;
    do {
      iVar7 = *(int *)(local_8 * 0x10 + iVar1);
      iVar4 = local_8 * 0x10 + iVar1;
      if (iVar7 != 0) {
        if (iVar7 == 0x3c) {
          if (*(int *)(iVar4 + 10) != 0) {
            iVar7 = *(int *)(*(int *)(iVar4 + 10) + 0xc);
            uVar9 = 0;
            if (0 < iVar7) {
              do {
                uVar6 = FUN_006acc70(*(AnonShape_006ACC70_C8641025 **)(iVar4 + 10),uVar9,&local_c);
                pSVar5 = (STGameObjC *)
                         GetObjPtr(this,CONCAT31((int3)(uVar6 >> 8),*(undefined1 *)(iVar4 + 4)),
                                   local_c,CASE_1);
                if (pSVar5 != (STGameObjC *)0x0) {
                  if (local_8 == 0) {
                    STGameObjC::SetSelfCheckFlag(pSVar5,unaff_EDI);
                  }
                  else {
                    STGameObjC::ResetSelfCheckFlag(pSVar5,(int)unaff_EDI);
                  }
                }
                uVar9 = uVar9 + 1;
              } while ((int)uVar9 < iVar7);
            }
          }
        }
        else if (iVar7 == 0x1ae) {
          pSVar5 = (STGameObjC *)GetObjPtr(this,0xffffffff,(uint)*(ushort *)(iVar4 + 8),CASE_3);
          if (pSVar5 != (STGameObjC *)0x0) {
            if (local_8 == 0) {
              STGameObjC::SetSelfCheckFlag(pSVar5,unaff_EDI);
            }
            else {
              STGameObjC::ResetSelfCheckFlag(pSVar5,(int)unaff_EDI);
            }
          }
        }
        else {
          iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x10bb,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__SelfCheckObjContr_007a7334);
          if (iVar4 != 0) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      local_8 = local_8 + -1;
    } while (-1 < local_8);
    local_8 = 4;
    iVar1 = (uint)DAT_0080874d * 0xa62 + 0x7f4fd3;
    iVar4 = iVar1;
    do {
      iVar10 = local_8;
      iVar7 = local_8 * 0x10 + iVar1;
      iVar2 = *(int *)(local_8 * 0x10 + iVar1);
      uVar8 = (undefined2)((uint)iVar4 >> 0x10);
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          if (*(int *)(iVar7 + 10) != 0) {
            iVar2 = *(int *)(*(int *)(iVar7 + 10) + 0xc);
            uVar9 = 0;
            if (0 < iVar2) {
              do {
                uVar6 = FUN_006acc70(*(AnonShape_006ACC70_C8641025 **)(iVar7 + 10),uVar9,&local_c);
                pSVar5 = (STGameObjC *)
                         GetObjPtr(this,CONCAT31((int3)(uVar6 >> 8),*(undefined1 *)(iVar7 + 4)),
                                   local_c,CASE_1);
                iVar4 = extraout_EDX_03;
                if (pSVar5 != (STGameObjC *)0x0) {
                  if (local_8 == 0) {
                    STGameObjC::SetSelfCheckFlag(pSVar5,unaff_EDI);
                    iVar4 = extraout_EDX_04;
                  }
                  else {
                    STGameObjC::ResetSelfCheckFlag(pSVar5,(int)unaff_EDI);
                    iVar4 = extraout_EDX_05;
                  }
                }
                uVar9 = uVar9 + 1;
                iVar10 = local_8;
              } while ((int)uVar9 < iVar2);
            }
          }
        }
        else if (iVar2 != 0) {
          if (iVar2 == 0x5a) {
            pSVar5 = (STGameObjC *)GetObjPtr(this,0xffffffff,(uint)*(ushort *)(iVar7 + 8),CASE_4);
            iVar4 = extraout_EDX_01;
            if (pSVar5 != (STGameObjC *)0x0) {
              if (iVar10 != 0) goto LAB_004352f5;
              STGameObjC::SetSelfCheckFlag(pSVar5,unaff_EDI);
              iVar4 = extraout_EDX_02;
            }
          }
          else {
            if (iVar2 != 0x172) goto LAB_00435287;
            pSVar5 = (STGameObjC *)
                     GetObjPtr(this,0xffffffff,CONCAT22(uVar8,*(undefined2 *)(iVar7 + 8)),CASE_2);
            iVar4 = extraout_EDX;
            if (pSVar5 != (STGameObjC *)0x0) {
              if (iVar10 != 0) goto LAB_004352f5;
              STGameObjC::SetSelfCheckFlag(pSVar5,unaff_EDI);
              iVar4 = extraout_EDX_00;
            }
          }
        }
      }
      else if (iVar2 == 0x1a4) {
        pSVar5 = (STGameObjC *)
                 GetObjPtr(this,0xffffffff,CONCAT22(uVar8,*(undefined2 *)(iVar7 + 8)),CASE_5);
        iVar4 = extraout_EDX_09;
        if (pSVar5 != (STGameObjC *)0x0) {
          if (iVar10 == 0) {
            STGameObjC::SetSelfCheckFlag(pSVar5,unaff_EDI);
            iVar4 = extraout_EDX_10;
          }
          else {
LAB_004352f5:
            STGameObjC::ResetSelfCheckFlag(pSVar5,(int)unaff_EDI);
            iVar4 = extraout_EDX_11;
          }
        }
      }
      else if (iVar2 == 0x1b8) {
        pSVar5 = (STGameObjC *)
                 GetObjPtr(this,0xffffffff,
                           CONCAT22((short)((uint)iVar1 >> 0x10),*(undefined2 *)(iVar7 + 8)),CASE_6)
        ;
        iVar4 = extraout_EDX_07;
        if (pSVar5 != (STGameObjC *)0x0) {
          if (iVar10 != 0) goto LAB_004352f5;
          STGameObjC::SetSelfCheckFlag(pSVar5,unaff_EDI);
          iVar4 = extraout_EDX_08;
        }
      }
      else {
LAB_00435287:
        iVar7 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x10ec,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__SelfCheckObjContr_007a72e8);
        iVar4 = extraout_EDX_06;
        if (iVar7 != 0) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_8 = iVar10 + -1;
    } while (-1 < local_8);
  }
  return;
}

