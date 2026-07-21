
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SelfCheckObjControl */

void __thiscall STAllPlayersC::SelfCheckObjControl(STAllPlayersC *this)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  STGameObjC *pSVar5;
  int iVar6;
  undefined2 uVar7;
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
  uint uVar8;
  int iVar9;
  uint local_c;
  int local_8;
  
  if (DAT_0080874d != 0xff) {
    local_8 = 4;
    iVar1 = (uint)DAT_0080874d * 0xa62 + 0x7f4f83;
    do {
      iVar6 = *(int *)(local_8 * 0x10 + iVar1);
      iVar3 = local_8 * 0x10 + iVar1;
      if (iVar6 != 0) {
        if (iVar6 == 0x3c) {
          if (*(int *)(iVar3 + 10) != 0) {
            iVar6 = *(int *)(*(int *)(iVar3 + 10) + 0xc);
            uVar8 = 0;
            if (0 < iVar6) {
              do {
                iVar4 = DArrayGetElement(*(DArrayTy **)(iVar3 + 10),uVar8,&local_c);
                pSVar5 = GetObjPtr(this,CONCAT31((int3)((uint)iVar4 >> 8),*(undefined1 *)(iVar3 + 4)
                                                ),local_c,CASE_1);
                if (pSVar5 != (STGameObjC *)0x0) {
                  if (local_8 == 0) {
                    STGameObjC::SetSelfCheckFlag(pSVar5,unaff_EDI);
                  }
                  else {
                    STGameObjC::ResetSelfCheckFlag(pSVar5,(int)unaff_EDI);
                  }
                }
                uVar8 = uVar8 + 1;
              } while ((int)uVar8 < iVar6);
            }
          }
        }
        else if (iVar6 == 0x1ae) {
          pSVar5 = GetObjPtr(this,0xffffffff,(uint)*(ushort *)(iVar3 + 8),CASE_3);
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
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x10bb,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__SelfCheckObjContr_007a7334);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      local_8 = local_8 + -1;
    } while (-1 < local_8);
    local_8 = 4;
    iVar1 = (uint)DAT_0080874d * 0xa62 + 0x7f4fd3;
    iVar3 = iVar1;
    do {
      iVar9 = local_8;
      iVar6 = local_8 * 0x10 + iVar1;
      iVar4 = *(int *)(local_8 * 0x10 + iVar1);
      uVar7 = (undefined2)((uint)iVar3 >> 0x10);
      if (iVar4 < 0x19b) {
        if (iVar4 == 0x19a) {
          if (*(int *)(iVar6 + 10) != 0) {
            iVar4 = *(int *)(*(int *)(iVar6 + 10) + 0xc);
            uVar8 = 0;
            if (0 < iVar4) {
              do {
                iVar3 = DArrayGetElement(*(DArrayTy **)(iVar6 + 10),uVar8,&local_c);
                pSVar5 = GetObjPtr(this,CONCAT31((int3)((uint)iVar3 >> 8),*(undefined1 *)(iVar6 + 4)
                                                ),local_c,CASE_1);
                iVar3 = extraout_EDX_03;
                if (pSVar5 != (STGameObjC *)0x0) {
                  if (local_8 == 0) {
                    STGameObjC::SetSelfCheckFlag(pSVar5,unaff_EDI);
                    iVar3 = extraout_EDX_04;
                  }
                  else {
                    STGameObjC::ResetSelfCheckFlag(pSVar5,(int)unaff_EDI);
                    iVar3 = extraout_EDX_05;
                  }
                }
                uVar8 = uVar8 + 1;
                iVar9 = local_8;
              } while ((int)uVar8 < iVar4);
            }
          }
        }
        else if (iVar4 != 0) {
          if (iVar4 == 0x5a) {
            pSVar5 = GetObjPtr(this,0xffffffff,(uint)*(ushort *)(iVar6 + 8),CASE_4);
            iVar3 = extraout_EDX_01;
            if (pSVar5 != (STGameObjC *)0x0) {
              if (iVar9 != 0) goto LAB_004352f5;
              STGameObjC::SetSelfCheckFlag(pSVar5,unaff_EDI);
              iVar3 = extraout_EDX_02;
            }
          }
          else {
            if (iVar4 != 0x172) goto LAB_00435287;
            pSVar5 = GetObjPtr(this,0xffffffff,CONCAT22(uVar7,*(undefined2 *)(iVar6 + 8)),CASE_2);
            iVar3 = extraout_EDX;
            if (pSVar5 != (STGameObjC *)0x0) {
              if (iVar9 != 0) goto LAB_004352f5;
              STGameObjC::SetSelfCheckFlag(pSVar5,unaff_EDI);
              iVar3 = extraout_EDX_00;
            }
          }
        }
      }
      else if (iVar4 == 0x1a4) {
        pSVar5 = GetObjPtr(this,0xffffffff,CONCAT22(uVar7,*(undefined2 *)(iVar6 + 8)),CASE_5);
        iVar3 = extraout_EDX_09;
        if (pSVar5 != (STGameObjC *)0x0) {
          if (iVar9 == 0) {
            STGameObjC::SetSelfCheckFlag(pSVar5,unaff_EDI);
            iVar3 = extraout_EDX_10;
          }
          else {
LAB_004352f5:
            STGameObjC::ResetSelfCheckFlag(pSVar5,(int)unaff_EDI);
            iVar3 = extraout_EDX_11;
          }
        }
      }
      else if (iVar4 == 0x1b8) {
        pSVar5 = GetObjPtr(this,0xffffffff,
                           CONCAT22((short)((uint)iVar1 >> 0x10),*(undefined2 *)(iVar6 + 8)),CASE_6)
        ;
        iVar3 = extraout_EDX_07;
        if (pSVar5 != (STGameObjC *)0x0) {
          if (iVar9 != 0) goto LAB_004352f5;
          STGameObjC::SetSelfCheckFlag(pSVar5,unaff_EDI);
          iVar3 = extraout_EDX_08;
        }
      }
      else {
LAB_00435287:
        iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x10ec,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__SelfCheckObjContr_007a72e8);
        iVar3 = extraout_EDX_06;
        if (iVar6 != 0) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_8 = iVar9 + -1;
    } while (-1 < local_8);
  }
  return;
}

