
int __fastcall thunk_FUN_00475530(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  short sVar18;
  byte bVar19;
  undefined4 auStack_2c [2];
  undefined4 uStack_24;
  short sStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  undefined4 *puStack_8;
  
  iVar4 = param_1[0x170];
  if (iVar4 == 0) {
LAB_00475545:
    iVar4 = (**(code **)(*param_1 + 0xd8))();
    return -(uint)(iVar4 != 0);
  }
  if ((iVar4 == 1) || (iVar4 == 2)) {
    iVar17 = param_1[0x171];
    if (iVar17 == 0) {
      iVar4 = thunk_FUN_00460360(param_1);
      return iVar4;
    }
    if (((((iVar17 == 1) || (iVar17 == 2)) || (iVar17 == 3)) || ((iVar17 == 5 || (iVar17 == 6)))) ||
       (iVar17 == 7)) {
      *(undefined4 *)((int)param_1 + 0x76) = 1;
      iVar4 = (**(code **)(*param_1 + 0xd8))();
      return -(uint)(iVar4 != 0);
    }
    if (iVar17 == 4) {
      iStack_1c = thunk_FUN_00415ed0(param_1,&uStack_18,&uStack_14);
      uVar5 = param_1[7] * 0x41c64e6d + 0x3039;
      param_1[7] = uVar5;
      iVar4 = (uVar5 >> 0x10) % 7 - 3;
      uVar5 = param_1[7] * 0x41c64e6d + 0x3039;
      param_1[7] = uVar5;
      uVar1 = param_1[7] * 0x41c64e6d + 0x3039;
      param_1[7] = uVar1;
      iStack_c = (uVar1 >> 0x10) % 7 - 3;
      if ((*(int *)((int)param_1 + 0x74a) <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
         (iStack_10 = 0, *(char *)((int)param_1 + 0x2bf) != '\0')) {
        puStack_8 = (undefined4 *)((int)param_1 + 0x2b3);
        do {
          puVar6 = (undefined4 *)
                   thunk_FUN_0041dc40(auStack_2c,*puStack_8,*(undefined2 *)(puStack_8 + 1),
                                      (short)param_1[0x1b]);
          uVar2 = *puVar6;
          bVar19 = 0;
          sVar18 = 0;
          iVar17 = -1;
          sStack_20 = *(short *)(puVar6 + 1);
          sVar16 = 0;
          sVar15 = 0;
          sVar14 = 0;
          sVar13 = 0;
          sVar12 = 0;
          sVar11 = 0;
          uStack_24 = uVar2;
          if (DAT_0080732c == 1) {
            sVar11 = 0;
            sVar12 = 0;
            sVar13 = 0;
            sVar14 = 0;
            sVar15 = 0;
            sVar16 = 0;
            sVar18 = 0;
            bVar19 = 0;
            lVar10 = __ftol();
            iVar7 = (int)sStack_20 + *(short *)((int)param_1 + 0x45) + iStack_c + (int)(short)lVar10
            ;
            iVar8 = (int)*(short *)((int)param_1 + 0x43) - (int)uStack_24._2_2_;
            iVar9 = (int)(short)uStack_24 + iVar4 + *(short *)((int)param_1 + 0x41);
          }
          else {
            iVar7 = (int)sStack_20 + iStack_c + *(short *)((int)param_1 + 0x45);
            uStack_24._2_2_ = (short)((uint)uVar2 >> 0x10);
            iVar8 = (int)*(short *)((int)param_1 + 0x43) - (int)uStack_24._2_2_;
            uStack_24._0_2_ = (short)uVar2;
            iVar9 = (int)(short)uStack_24 + iVar4 + *(short *)((int)param_1 + 0x41);
          }
          thunk_FUN_00556760(DAT_00802a7c,1,2,7,iVar9,iVar8 + ((uVar5 >> 0x10) % 7 - 3),iVar7,sVar11
                             ,sVar12,sVar13,sVar14,sVar15,sVar16,iVar17,sVar18,bVar19);
          puStack_8 = (undefined4 *)((int)puStack_8 + 6);
          iStack_10 = iStack_10 + 1;
        } while (iStack_10 < (int)(uint)*(byte *)((int)param_1 + 0x2bf));
      }
      if (iStack_1c == -1) {
        iVar4 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x303e,0,0,&DAT_007a4ccc);
        if (iVar4 != 0) {
          pcVar3 = (code *)swi(3);
          iVar4 = (*pcVar3)();
          return iVar4;
        }
        return -1;
      }
      if (iStack_1c != 0) {
        iVar4 = (**(code **)(*param_1 + 0xd8))();
        return (-(uint)(iVar4 != 0) & 0xfffffffd) + 2;
      }
      goto LAB_00475545;
    }
  }
  if (iVar4 == 3) {
    iVar4 = thunk_FUN_004749c0(param_1,(void *)0x2);
    return iVar4;
  }
  iVar4 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3052,0,0,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar3 = (code *)swi(3);
    iVar4 = (*pcVar3)();
    return iVar4;
  }
  return -1;
}

