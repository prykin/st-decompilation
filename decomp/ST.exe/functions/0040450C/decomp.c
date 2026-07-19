
void __cdecl thunk_FUN_006a49c0(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  BOOL BVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  undefined2 uVar10;
  int *piVar11;
  int *piVar12;
  undefined1 *puVar13;
  char *pcVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_88 [132];
  
  if ((DAT_007ec178 & 4) != 0) {
    iVar3 = thunk_FUN_006a5210();
    if (iVar3 == 0) {
      iVar3 = FUN_00730fa0(2,0x7ec1d0,0x452,0,(byte *)s__CrtCheckMemory___007ec2bc);
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    iVar3 = (*(code *)PTR_FUN_007f1498)(3,param_1,0,param_2,0,0,0);
    if (iVar3 == 0) {
      iVar3 = FUN_00730fa0(0,0,0,0,&DAT_007a4ccc);
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      BVar4 = thunk_FUN_006a5620((int)param_1);
      if (BVar4 == 0) {
        puVar5 = thunk_FUN_006a3b20(2);
        iVar3 = ReportDebugMessage(s_E____titans_Crt__Dbgheap_c_007ec1d0,0x465,0,0,
                                   s_bad_pointer_0x_08X__s_007ec5f8,param_1,puVar5);
        if (iVar3 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        DAT_00854a4c = 1;
        return;
      }
      uVar8 = param_1[-3];
      piVar11 = param_1 + -8;
      if (((((uVar8 & 0xffff) != 4) && (uVar8 != 1)) && ((uVar8 & 0xffff) != 2)) && (uVar8 != 3)) {
        puVar5 = thunk_FUN_006a3b20(2);
        uVar17 = param_1[-5];
        puVar6 = FUN_006a47f0((int)piVar11);
        uVar16 = param_1[-2];
        uVar15 = param_1[-3];
        puVar13 = auStack_88;
        pcVar14 = s_bad_block_type__X___d__s___d___s_007ec5d0;
        FUN_00730c40(puVar13,0x7ec5d0);
        iVar3 = ReportDebugMessage(s_E____titans_Crt__Dbgheap_c_007ec1d0,0x472,0,0,&DAT_007a4ccc,
                                   auStack_88,puVar13,pcVar14,uVar15,uVar16,puVar6,uVar17,puVar5);
        if (iVar3 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        DAT_00854a4c = 1;
      }
      if ((DAT_007ec178 & 4) == 0) {
        iVar3 = FUN_006a5130((char *)(param_1 + -1),(char)DAT_007ec184,4);
        if (iVar3 == 0) {
          puVar5 = thunk_FUN_006a3b20(2);
          uVar17 = param_1[-5];
          puVar6 = FUN_006a47f0((int)piVar11);
          uVar16 = param_1[-1];
          uVar15 = param_1[-2];
          puVar13 = auStack_88;
          pcVar14 = s_MEMORY_DAMAGE__before_block___d__007ec594;
          FUN_00730c40(puVar13,0x7ec594);
          iVar3 = ReportDebugMessage(s_E____titans_Crt__Dbgheap_c_007ec1d0,0x47e,0,0,&DAT_007a4ccc,
                                     auStack_88,puVar13,pcVar14,uVar15,uVar16,puVar6,uVar17,puVar5);
          if (iVar3 != 0) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          DAT_00854a4c = 1;
        }
        iVar3 = FUN_006a5130((char *)(param_1[-4] + 0x20 + (int)piVar11),(char)DAT_007ec184,4);
        if (iVar3 == 0) {
          puVar5 = thunk_FUN_006a3b20(2);
          uVar17 = param_1[-5];
          puVar6 = FUN_006a47f0((int)piVar11);
          uVar16 = param_1[-2];
          uVar15 = *(undefined4 *)(param_1[-4] + 0x20 + (int)piVar11);
          puVar13 = auStack_88;
          pcVar14 = s_MEMORY_DAMAGE__after_block___d___007ec558;
          FUN_00730c40(puVar13,0x7ec558);
          iVar3 = ReportDebugMessage(s_E____titans_Crt__Dbgheap_c_007ec1d0,0x486,0,0,&DAT_007a4ccc,
                                     auStack_88,puVar13,pcVar14,uVar16,uVar15,puVar6,uVar17,puVar5);
          if (iVar3 != 0) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          DAT_00854a4c = 1;
        }
      }
      iVar3 = param_1[-3];
      if (iVar3 == 3) {
        if ((param_1[-5] != -0x1234544) || (param_1[-2] != 0)) {
          iVar3 = FUN_00730fa0(2,0x7ec1d0,0x49a,0,
                               (byte *)s_pHead_>nLine____IGNORE_LINE____p_007ec50c);
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
LAB_006a4c4a:
        uVar2 = DAT_007ec184._1_1_;
        iVar3 = param_1[-4];
        uVar10 = CONCAT11(DAT_007ec184._1_1_,DAT_007ec184._1_1_);
        piVar12 = piVar11;
        for (uVar8 = iVar3 + 0x24U >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *piVar12 = CONCAT22(uVar10,uVar10);
          piVar12 = piVar12 + 1;
        }
        for (uVar8 = iVar3 + 0x24U & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)piVar12 = uVar2;
          piVar12 = (int *)((int)piVar12 + 1);
        }
        FUN_007318a0(piVar11);
        return;
      }
      if ((iVar3 == 2) && (param_2 == 1)) {
        param_2 = 2;
      }
      if (iVar3 != param_2) {
        puVar6 = thunk_FUN_006a3b20(2);
        uVar17 = param_1[-5];
        puVar7 = FUN_006a47f0((int)piVar11);
        uVar16 = param_1[-2];
        puVar13 = auStack_88;
        puVar5 = (&PTR_DAT_007ec188)[param_1[-3] & 0xffff];
        pcVar14 = s_bad_block_type__hs___d__s___d____007ec4e4;
        FUN_00730c40(puVar13,0x7ec4e4);
        iVar3 = ReportDebugMessage(s_E____titans_Crt__Dbgheap_c_007ec1d0,0x4ab,0,0,&DAT_007a4ccc,
                                   auStack_88,puVar13,pcVar14,puVar5,uVar16,puVar7,uVar17,puVar6);
        if (iVar3 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (DAT_00854a4c == 0) {
        DAT_00854a44 = DAT_00854a44 - param_1[-4];
        if ((DAT_007ec178 & 2) == 0) {
          if (*piVar11 == 0) {
            if (DAT_00854964 != piVar11) {
              iVar3 = FUN_00730fa0(2,0x7ec1d0,0x4bc,0,(byte *)s__pLastBlock____pHead_007ec4c8);
              if (iVar3 == 1) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            DAT_00854964 = (int *)param_1[-7];
          }
          else {
            *(undefined4 *)(*piVar11 + 4) = param_1[-7];
          }
          if ((int *)param_1[-7] == (int *)0x0) {
            if (DAT_0085496c != piVar11) {
              iVar3 = FUN_00730fa0(2,0x7ec1d0,0x4c6,0,(byte *)s__pFirstBlock____pHead_007ec4ac);
              if (iVar3 == 1) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            DAT_0085496c = (int *)*piVar11;
          }
          else {
            *(int *)param_1[-7] = *piVar11;
          }
          goto LAB_006a4c4a;
        }
        uVar8 = param_1[-4];
        param_1[-3] = 0;
        uVar2 = DAT_007ec184._1_1_;
        uVar10 = CONCAT11(DAT_007ec184._1_1_,DAT_007ec184._1_1_);
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *param_1 = CONCAT22(uVar10,uVar10);
          param_1 = param_1 + 1;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)param_1 = uVar2;
          param_1 = (undefined4 *)((int)param_1 + 1);
        }
      }
    }
  }
  return;
}

