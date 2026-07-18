
void __cdecl thunk_FUN_006a49c0(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  int *piVar8;
  int *piVar9;
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
        thunk_FUN_006a3b20(2);
        iVar3 = FUN_006ad4d0(s_E____titans_Crt__Dbgheap_c_007ec1d0,0x465,0,0,
                             (byte *)s_bad_pointer_0x_08X__s_007ec5f8);
        if (iVar3 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        DAT_00854a4c = 1;
        return;
      }
      uVar5 = param_1[-3];
      piVar8 = param_1 + -8;
      if (((((uVar5 & 0xffff) != 4) && (uVar5 != 1)) && ((uVar5 & 0xffff) != 2)) && (uVar5 != 3)) {
        thunk_FUN_006a3b20(2);
        FUN_006a47f0((int)piVar8);
        FUN_00730c40(auStack_88,0x7ec5d0);
        iVar3 = FUN_006ad4d0(s_E____titans_Crt__Dbgheap_c_007ec1d0,0x472,0,0,&DAT_007a4ccc);
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
          thunk_FUN_006a3b20(2);
          FUN_006a47f0((int)piVar8);
          FUN_00730c40(auStack_88,0x7ec594);
          iVar3 = FUN_006ad4d0(s_E____titans_Crt__Dbgheap_c_007ec1d0,0x47e,0,0,&DAT_007a4ccc);
          if (iVar3 != 0) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          DAT_00854a4c = 1;
        }
        iVar3 = FUN_006a5130((char *)(param_1[-4] + 0x20 + (int)piVar8),(char)DAT_007ec184,4);
        if (iVar3 == 0) {
          thunk_FUN_006a3b20(2);
          FUN_006a47f0((int)piVar8);
          FUN_00730c40(auStack_88,0x7ec558);
          iVar3 = FUN_006ad4d0(s_E____titans_Crt__Dbgheap_c_007ec1d0,0x486,0,0,&DAT_007a4ccc);
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
        uVar7 = CONCAT11(DAT_007ec184._1_1_,DAT_007ec184._1_1_);
        piVar9 = piVar8;
        for (uVar5 = iVar3 + 0x24U >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *piVar9 = CONCAT22(uVar7,uVar7);
          piVar9 = piVar9 + 1;
        }
        for (uVar5 = iVar3 + 0x24U & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)piVar9 = uVar2;
          piVar9 = (int *)((int)piVar9 + 1);
        }
        FUN_007318a0(piVar8);
        return;
      }
      if ((iVar3 == 2) && (param_2 == 1)) {
        param_2 = 2;
      }
      if (iVar3 != param_2) {
        thunk_FUN_006a3b20(2);
        FUN_006a47f0((int)piVar8);
        FUN_00730c40(auStack_88,0x7ec4e4);
        iVar3 = FUN_006ad4d0(s_E____titans_Crt__Dbgheap_c_007ec1d0,0x4ab,0,0,&DAT_007a4ccc);
        if (iVar3 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (DAT_00854a4c == 0) {
        DAT_00854a44 = DAT_00854a44 - param_1[-4];
        if ((DAT_007ec178 & 2) == 0) {
          if (*piVar8 == 0) {
            if (DAT_00854964 != piVar8) {
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
            *(undefined4 *)(*piVar8 + 4) = param_1[-7];
          }
          if ((int *)param_1[-7] == (int *)0x0) {
            if (DAT_0085496c != piVar8) {
              iVar3 = FUN_00730fa0(2,0x7ec1d0,0x4c6,0,(byte *)s__pFirstBlock____pHead_007ec4ac);
              if (iVar3 == 1) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            DAT_0085496c = (int *)*piVar8;
          }
          else {
            *(int *)param_1[-7] = *piVar8;
          }
          goto LAB_006a4c4a;
        }
        uVar5 = param_1[-4];
        param_1[-3] = 0;
        uVar2 = DAT_007ec184._1_1_;
        uVar7 = CONCAT11(DAT_007ec184._1_1_,DAT_007ec184._1_1_);
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *param_1 = CONCAT22(uVar7,uVar7);
          param_1 = param_1 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)param_1 = uVar2;
          param_1 = (undefined4 *)((int)param_1 + 1);
        }
      }
    }
  }
  return;
}

