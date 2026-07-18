
int __fastcall thunk_FUN_0047da50(int *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined2 extraout_var;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 extraout_var_00;
  int iVar9;
  int iVar10;
  longlong lVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  byte bVar19;
  undefined4 uVar20;
  undefined4 auStack_2c [2];
  undefined4 uStack_24;
  short sStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  undefined4 *puStack_8;
  
  thunk_FUN_004952e0((int)param_1);
  if ((*(int *)((int)param_1 + 0x6a1) == 1) || (*(int *)((int)param_1 + 0x6a1) == 2)) {
    iVar6 = thunk_FUN_0047d080(param_1,(undefined4 *)0x2);
    return iVar6;
  }
  iVar6 = *(int *)((int)param_1 + 0x6a5);
  if (((iVar6 == 0) || (iVar6 == 1)) || (iVar6 == 2)) {
    return 0;
  }
  if (iVar6 == 3) {
    iVar6 = CONCAT22(extraout_var,*(short *)((int)param_1 + 0x695) * 200) + 100;
    iVar9 = CONCAT22(extraout_var_00,*(short *)((int)param_1 + 0x693) * 0xc9) + 100;
    iVar7 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)((int)param_1 + 0x691) * 0xc9) + 100;
    uVar3 = (undefined2)((uint)iVar9 >> 0x10);
    uVar3 = (**(code **)(*param_1 + 0x10))
                      (CONCAT22(uVar3,*(undefined2 *)((int)param_1 + 0x41)),
                       CONCAT22((short)((uint)iVar7 >> 0x10),*(undefined2 *)((int)param_1 + 0x43)),
                       CONCAT22(uVar3,*(undefined2 *)((int)param_1 + 0x45)),iVar7,iVar9,iVar6);
    *(undefined2 *)((int)param_1 + 0x69b) = uVar3;
    *(undefined4 *)((int)param_1 + 0x6a5) = 4;
  }
  if (*(int *)((int)param_1 + 0x6a5) == 4) {
    uVar4 = thunk_FUN_004176c0(param_1,*(short *)((int)param_1 + 0x69b));
    uVar4 = thunk_FUN_00417910(param_1,(short)uVar4);
    if (uVar4 == 0xffffffff) {
      iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3925,0,0,&DAT_007a4ccc);
      if (iVar6 != 0) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      uVar20 = 0x3925;
LAB_0047ddc3:
      FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,uVar20);
      return 0xffff;
    }
    if (uVar4 == 0) {
      *(undefined4 *)((int)param_1 + 0x6a5) = 5;
    }
  }
  else {
    if (*(int *)((int)param_1 + 0x6a5) == 5) {
      thunk_FUN_00415b30(param_1,*(short *)((int)param_1 + 0x41),*(short *)((int)param_1 + 0x43),
                         *(short *)((int)param_1 + 0x45),
                         *(short *)((int)param_1 + 0x691) * 0xc9 + 100,
                         *(short *)((int)param_1 + 0x693) * 0xc9 + 100,
                         *(short *)((int)param_1 + 0x695) * 200 + 100,*(byte *)((int)param_1 + 0x61)
                        );
      *(undefined4 *)((int)param_1 + 0x6a5) = 6;
    }
    if (*(int *)((int)param_1 + 0x6a5) == 6) {
      iStack_1c = thunk_FUN_00415ed0(param_1,&uStack_18,&uStack_14);
      uVar4 = param_1[7] * 0x41c64e6d + 0x3039;
      param_1[7] = uVar4;
      iVar6 = (uVar4 >> 0x10) % 7 - 3;
      uVar4 = param_1[7] * 0x41c64e6d + 0x3039;
      param_1[7] = uVar4;
      uVar1 = param_1[7] * 0x41c64e6d + 0x3039;
      param_1[7] = uVar1;
      iStack_c = (uVar1 >> 0x10) % 7 - 3;
      if ((*(int *)((int)param_1 + 0x74a) <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
         (iStack_10 = 0, *(char *)((int)param_1 + 0x2bf) != '\0')) {
        puStack_8 = (undefined4 *)((int)param_1 + 0x2b3);
        do {
          puVar5 = (undefined4 *)
                   thunk_FUN_0041dc40(auStack_2c,*puStack_8,*(undefined2 *)(puStack_8 + 1),
                                      (short)param_1[0x1b]);
          uVar20 = *puVar5;
          bVar19 = 0;
          sVar18 = 0;
          iVar7 = -1;
          sStack_20 = *(short *)(puVar5 + 1);
          sVar17 = 0;
          sVar16 = 0;
          sVar15 = 0;
          sVar14 = 0;
          sVar13 = 0;
          sVar12 = 0;
          uStack_24 = uVar20;
          if (DAT_0080732c == 1) {
            sVar12 = 0;
            sVar13 = 0;
            sVar14 = 0;
            sVar15 = 0;
            sVar16 = 0;
            sVar17 = 0;
            sVar18 = 0;
            bVar19 = 0;
            lVar11 = __ftol();
            iVar8 = (int)sStack_20 + *(short *)((int)param_1 + 0x45) + iStack_c + (int)(short)lVar11
            ;
            iVar9 = (int)*(short *)((int)param_1 + 0x43) - (int)uStack_24._2_2_;
            iVar10 = (int)(short)uStack_24 + iVar6 + *(short *)((int)param_1 + 0x41);
          }
          else {
            iVar8 = (int)sStack_20 + iStack_c + *(short *)((int)param_1 + 0x45);
            uStack_24._2_2_ = (short)((uint)uVar20 >> 0x10);
            iVar9 = (int)*(short *)((int)param_1 + 0x43) - (int)uStack_24._2_2_;
            uStack_24._0_2_ = (short)uVar20;
            iVar10 = (int)(short)uStack_24 + iVar6 + *(short *)((int)param_1 + 0x41);
          }
          thunk_FUN_00556760(DAT_00802a7c,1,2,7,iVar10,iVar9 + ((uVar4 >> 0x10) % 7 - 3),iVar8,
                             sVar12,sVar13,sVar14,sVar15,sVar16,sVar17,iVar7,sVar18,bVar19);
          puStack_8 = (undefined4 *)((int)puStack_8 + 6);
          iStack_10 = iStack_10 + 1;
        } while (iStack_10 < (int)(uint)*(byte *)((int)param_1 + 0x2bf));
      }
      if (iStack_1c == -1) {
        iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x394c,0,0,&DAT_007a4ccc);
        if (iVar6 != 0) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
        uVar20 = 0x394c;
        goto LAB_0047ddc3;
      }
      if (iStack_1c == 0) {
        iVar6 = (**(code **)(*param_1 + 0xd8))();
        return -(uint)(iVar6 != 0);
      }
    }
  }
  iVar6 = (**(code **)(*param_1 + 0xd8))();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
}

