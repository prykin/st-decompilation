
uint __fastcall FUN_0046cf20(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar6;
  void *this;
  int iVar7;
  int iVar8;
  undefined2 extraout_var;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar9;
  undefined2 extraout_var_00;
  uint extraout_EDX;
  uint uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  short local_18;
  short local_16;
  short local_14 [2];
  undefined4 local_10;
  undefined4 local_c;
  void *local_8;
  
  uVar10 = 2;
  if (param_1[0x14a] == 0) {
    iVar7 = CONCAT22((short)((uint)param_1 >> 0x10),(short)param_1[0x145] * 200) + 100;
    iVar9 = CONCAT22((short)((uint)param_2 >> 0x10),*(short *)((int)param_1 + 0x512) * 0xc9) + 100;
    iVar8 = CONCAT22((short)((uint)iVar7 >> 0x10),(short)param_1[0x144] * 0xc9) + 100;
    uVar5 = (undefined2)((uint)iVar9 >> 0x10);
    uVar5 = (**(code **)(*param_1 + 0x10))
                      (CONCAT22(uVar5,*(undefined2 *)((int)param_1 + 0x41)),
                       CONCAT22((short)((uint)iVar8 >> 0x10),*(undefined2 *)((int)param_1 + 0x43)),
                       CONCAT22(uVar5,*(undefined2 *)((int)param_1 + 0x45)),iVar8,iVar9,iVar7);
    *(undefined2 *)((int)param_1 + 0x522) = uVar5;
    param_1[0x14a] = 1;
  }
  if (param_1[0x14a] == 1) {
    uVar10 = thunk_FUN_004176c0(param_1,*(short *)((int)param_1 + 0x522));
    uVar10 = thunk_FUN_00417910(param_1,(short)uVar10);
    if (uVar10 != 0xffffffff) {
      if (uVar10 == 0) {
        param_1[0x14a] = 2;
      }
      iVar7 = (**(code **)(*param_1 + 0xd8))();
      return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
    }
    iVar7 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x25a8,0,0,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      uVar10 = (*pcVar1)();
      return uVar10;
    }
    uVar12 = 0x25a9;
LAB_0046d1e2:
    FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,uVar12);
    return 0xffff;
  }
  if (param_1[0x14a] == 2) {
    thunk_FUN_00415b30(param_1,*(short *)((int)param_1 + 0x41),*(short *)((int)param_1 + 0x43),
                       *(short *)((int)param_1 + 0x45),(short)param_1[0x144] * 0xc9 + 100,
                       *(short *)((int)param_1 + 0x512) * 0xc9 + 100,
                       (short)param_1[0x145] * 200 + 100,*(byte *)((int)param_1 + 0x62));
    param_1[0x14a] = 3;
  }
  if (param_1[0x14a] == 3) {
    iVar7 = thunk_FUN_00415ed0(param_1,&local_10,&local_c);
    if (iVar7 == -1) {
      iVar7 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x25c7,0,0,&DAT_007a4ccc);
      if (iVar7 != 0) {
        pcVar1 = (code *)swi(3);
        uVar10 = (*pcVar1)();
        return uVar10;
      }
      uVar12 = 0x25c8;
      goto LAB_0046d1e2;
    }
    if (iVar7 == 0) {
      uVar10 = 0;
      if ((param_1[0x149] != 0) &&
         (iVar7 = FUN_006e62d0(DAT_00802a38,param_1[0x149],(int *)&local_8), iVar7 != -4)) {
        thunk_FUN_004cf3e0(local_8,param_1[6]);
        FUN_006ea2f0(*(void **)((int)param_1 + 0x211),*(uint *)((int)param_1 + 0x1ed));
      }
      iVar7 = thunk_FUN_0048fa80((int)param_1);
      if (iVar7 == 1) {
        if (((((short)param_1[0x147] < 0) || (*(short *)((int)param_1 + 0x51e) < 0)) ||
            (sVar2 = (short)param_1[0x147], sVar3 = *(short *)((int)param_1 + 0x51e),
            sVar4 = (short)param_1[0x148], (short)param_1[0x148] < 0)) &&
           (iVar7 = CONCAT22(extraout_var,*(undefined2 *)((int)param_1 + 0x512)),
           iVar8 = CONCAT22(extraout_var_00,(short)param_1[0x144]),
           iVar7 = thunk_FUN_0048dfd0(iVar8,iVar7,(uint)*(ushort *)(param_1 + 0x145),iVar8,iVar7,
                                      (int *)(uint)*(ushort *)(param_1 + 0x145),2,&local_18,
                                      &local_16,local_14), sVar2 = local_18, sVar3 = local_16,
           sVar4 = local_14[0], iVar7 == 0)) {
          sVar2 = (short)param_1[0x144];
          sVar3 = *(short *)((int)param_1 + 0x512);
          sVar4 = (short)param_1[0x145];
        }
        local_14[0] = sVar4;
        local_16 = sVar3;
        local_18 = sVar2;
        thunk_FUN_00481520(param_1,(int)local_18,(int)local_16,(int)local_14[0]);
        iVar7 = thunk_FUN_0045ff50(param_1,0);
        if (iVar7 == -1) {
          return 0xffffffff;
        }
        param_1[0x14a] = 4;
        iVar7 = (**(code **)(*param_1 + 0xd8))();
        return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
      }
    }
  }
  if (param_1[0x14a] == 4) {
    uVar10 = thunk_FUN_0045ff50(param_1,2);
    if (uVar10 == 0xffffffff) {
      return 0xffffffff;
    }
    if (uVar10 == 3) {
      iVar7 = extraout_ECX;
      uVar10 = extraout_EDX;
      if (*(int *)((int)param_1 + 0xb3) == 0) {
        iVar7 = (int)*(short *)((int)param_1 + 0x5b);
        uVar6 = *(int *)((int)param_1 + 0xbb) - iVar7;
        uVar10 = (int)uVar6 >> 0x1f;
        if (((int)((uVar6 ^ uVar10) - uVar10) < 2) &&
           (uVar6 = *(int *)((int)param_1 + 0xbf) - (int)*(short *)((int)param_1 + 0x5d),
           uVar10 = (int)uVar6 >> 0x1f, (int)((uVar6 ^ uVar10) - uVar10) < 2)) {
          iVar7 = (int)*(short *)((int)param_1 + 0x5f);
          uVar6 = *(int *)((int)param_1 + 0xc3) - iVar7;
          uVar10 = (int)uVar6 >> 0x1f;
          iVar8 = (uVar6 ^ uVar10) - uVar10;
          if (iVar8 < 2) {
            uVar5 = (undefined2)((uint)iVar8 >> 0x10);
            uVar11 = (**(code **)(*param_1 + 0x18))
                               (CONCAT22(uVar5,*(undefined2 *)((int)param_1 + 0xbb)),
                                CONCAT22(*(short *)((int)param_1 + 0x5f) >> 0xf,
                                         *(undefined2 *)((int)param_1 + 0xbf)),
                                CONCAT22(uVar5,*(undefined2 *)((int)param_1 + 0xc3)));
            uVar10 = (uint)((ulonglong)uVar11 >> 0x20);
            iVar7 = extraout_ECX_00;
            if ((int)uVar11 == 0) {
              uVar10 = 0;
              goto LAB_0046d2d1;
            }
          }
        }
      }
      this = (void *)thunk_FUN_0042b760(CONCAT31((int3)(uVar10 >> 8),(char)param_1[9]),
                                        CONCAT22((short)((uint)iVar7 >> 0x10),(short)param_1[0xc]));
      iVar7 = thunk_FUN_0040ae40(this,(uint)*(ushort *)((int)param_1 + 0x32),'\0');
      uVar10 = -(uint)(iVar7 != -4) & 2;
    }
  }
LAB_0046d2d1:
  iVar7 = (**(code **)(*param_1 + 0xd8))();
  if (iVar7 != 0) {
    return 0xffffffff;
  }
  return uVar10;
}

