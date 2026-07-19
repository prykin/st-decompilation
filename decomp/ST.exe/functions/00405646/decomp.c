
int __fastcall thunk_FUN_0047da50(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined2 extraout_var;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 extraout_var_00;
  int iVar10;
  int iVar11;
  longlong lVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  byte bVar20;
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
    iVar7 = thunk_FUN_0047d080(param_1,(undefined4 *)0x2);
    return iVar7;
  }
  iVar7 = *(int *)((int)param_1 + 0x6a5);
  if (((iVar7 == 0) || (iVar7 == 1)) || (iVar7 == 2)) {
    return 0;
  }
  if (iVar7 == 3) {
    iVar7 = CONCAT22(extraout_var,*(short *)((int)param_1 + 0x695) * 200) + 100;
    iVar10 = CONCAT22(extraout_var_00,*(short *)((int)param_1 + 0x693) * 0xc9) + 100;
    iVar8 = CONCAT22((short)((uint)iVar7 >> 0x10),*(short *)((int)param_1 + 0x691) * 0xc9) + 100;
    uVar4 = (undefined2)((uint)iVar10 >> 0x10);
    uVar4 = (**(code **)(*param_1 + 0x10))
                      (CONCAT22(uVar4,*(undefined2 *)((int)param_1 + 0x41)),
                       CONCAT22((short)((uint)iVar8 >> 0x10),*(undefined2 *)((int)param_1 + 0x43)),
                       CONCAT22(uVar4,*(undefined2 *)((int)param_1 + 0x45)),iVar8,iVar10,iVar7);
    *(undefined2 *)((int)param_1 + 0x69b) = uVar4;
    *(undefined4 *)((int)param_1 + 0x6a5) = 4;
  }
  if (*(int *)((int)param_1 + 0x6a5) == 4) {
    uVar5 = thunk_FUN_004176c0(param_1,*(short *)((int)param_1 + 0x69b));
    uVar5 = thunk_FUN_00417910(param_1,(short)uVar5);
    if (uVar5 == 0xffffffff) {
      iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3925,0,0,&DAT_007a4ccc,
                                 s_STBoatC__BackAnnih_1_007ab6bc);
      if (iVar7 != 0) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
      iVar7 = 0x3925;
LAB_0047ddc3:
      RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar7);
      return 0xffff;
    }
    if (uVar5 == 0) {
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
      uVar5 = param_1[7] * 0x41c64e6d + 0x3039;
      param_1[7] = uVar5;
      iVar7 = (uVar5 >> 0x10) % 7 - 3;
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
          bVar20 = 0;
          sVar19 = 0;
          iVar8 = -1;
          sStack_20 = *(short *)(puVar6 + 1);
          sVar18 = 0;
          sVar17 = 0;
          sVar16 = 0;
          sVar15 = 0;
          sVar14 = 0;
          sVar13 = 0;
          uStack_24 = uVar2;
          if (DAT_0080732c == 1) {
            sVar13 = 0;
            sVar14 = 0;
            sVar15 = 0;
            sVar16 = 0;
            sVar17 = 0;
            sVar18 = 0;
            sVar19 = 0;
            bVar20 = 0;
            lVar12 = __ftol();
            iVar9 = (int)sStack_20 + *(short *)((int)param_1 + 0x45) + iStack_c + (int)(short)lVar12
            ;
            iVar10 = (int)*(short *)((int)param_1 + 0x43) - (int)uStack_24._2_2_;
            iVar11 = (int)(short)uStack_24 + iVar7 + *(short *)((int)param_1 + 0x41);
          }
          else {
            iVar9 = (int)sStack_20 + iStack_c + *(short *)((int)param_1 + 0x45);
            uStack_24._2_2_ = (short)((uint)uVar2 >> 0x10);
            iVar10 = (int)*(short *)((int)param_1 + 0x43) - (int)uStack_24._2_2_;
            uStack_24._0_2_ = (short)uVar2;
            iVar11 = (int)(short)uStack_24 + iVar7 + *(short *)((int)param_1 + 0x41);
          }
          thunk_FUN_00556760(DAT_00802a7c,1,2,7,iVar11,iVar10 + ((uVar5 >> 0x10) % 7 - 3),iVar9,
                             sVar13,sVar14,sVar15,sVar16,sVar17,sVar18,iVar8,sVar19,bVar20);
          puStack_8 = (undefined4 *)((int)puStack_8 + 6);
          iStack_10 = iStack_10 + 1;
        } while (iStack_10 < (int)(uint)*(byte *)((int)param_1 + 0x2bf));
      }
      if (iStack_1c == -1) {
        iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x394c,0,0,&DAT_007a4ccc,
                                   s_STBoatC__BackAnnih_2_007ab6a0);
        if (iVar7 != 0) {
          pcVar3 = (code *)swi(3);
          iVar7 = (*pcVar3)();
          return iVar7;
        }
        iVar7 = 0x394c;
        goto LAB_0047ddc3;
      }
      if (iStack_1c == 0) {
        iVar7 = (**(code **)(*param_1 + 0xd8))();
        return -(uint)(iVar7 != 0);
      }
    }
  }
  iVar7 = (**(code **)(*param_1 + 0xd8))();
  return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
}

