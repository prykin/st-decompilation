
void FUN_0059d240(void)

{
  undefined4 uVar1;
  code *pcVar2;
  uint uVar3;
  LPBITMAPINFO ptVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  void *unaff_EDI;
  int *piVar8;
  undefined4 *puVar9;
  int local_8c4 [5];
  int local_8b0;
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_8a0;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  undefined4 local_808 [4];
  undefined4 local_7f8;
  undefined4 local_7f4;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_68c;
  undefined4 local_688 [4];
  undefined4 local_678;
  undefined4 local_674;
  undefined4 local_620;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4c;
  undefined4 local_48 [16];
  void *local_8;
  
  piVar8 = local_8c4;
  for (iVar6 = 0x21e; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar6 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar6 == 0) {
    piVar8 = (int *)((int)local_8 + 0x1e8e);
    if (*(int *)((int)local_8 + 0x1e8e) != 0) {
      FUN_006ab060(piVar8);
    }
    if (*(int *)((int)local_8 + 0x1e92) != 0) {
      FUN_006ab060((undefined4 *)((int)local_8 + 0x1e92));
    }
    iVar6 = 1;
    puVar7 = (undefined4 *)(*(int *)((int)local_8 + 0x5d) + 0x28);
    uVar3 = FUN_006b4fe0(*(int *)((int)local_8 + 0x5d));
    iVar6 = FUN_006b50c0(0x2c8 - *(int *)((int)local_8 + 0x1b4c),0x149,
                         (uint)*(ushort *)(*(int *)((int)local_8 + 0x5d) + 0xe),uVar3,puVar7,iVar6);
    *piVar8 = iVar6;
    ptVar4 = FUN_006c4880(DAT_0080759c,0x22,0x72,0x2e1,0x14c,8);
    *(undefined4 *)((int)local_8 + 0x1e92) = ptVar4;
    if ((*piVar8 != 0) && (ptVar4 != (LPBITMAPINFO)0x0)) {
      iVar6 = *(int *)((int)local_8 + 0x1a73);
      local_8c4[0] = 0;
      local_8c4[3] = 0;
      local_8c4[4] = 0x2c8 - *(int *)((int)local_8 + 0x1b4c);
      local_8c4[1] = 2;
      local_8a4 = 0x28;
      local_8a0 = 0x73;
      local_8c4[2] = 1;
      if (*(int *)(iVar6 + 0xa0) != 0) {
        FUN_00710790(iVar6);
      }
      local_8b0 = *(int *)(iVar6 + 0x8a);
      local_8a8 = (undefined4)(0x149 / (longlong)local_8b0);
      local_808[3] = *(undefined4 *)((int)local_8 + 0x1bd9);
      local_810 = 0;
      local_808[0] = 0;
      local_808[2] = *(undefined4 *)((int)local_8 + 0x1bd5);
      local_888 = 2;
      local_80c = 2;
      local_808[1] = 2;
      local_7f8 = *(undefined4 *)((int)local_8 + 0x1bdd);
      local_7a4 = 2;
      local_68c = 2;
      local_8ac = 1;
      local_884 = 0x6982;
      local_814 = 4;
      local_7f4 = *(undefined4 *)((int)local_8 + 0x1be1);
      local_6f8 = 500;
      local_6f4 = 0x32;
      local_7a0 = 0x6334;
      uVar1 = *(undefined4 *)((int)local_8 + 0x1b48);
      local_88c = *(undefined4 *)((int)local_8 + 8);
      local_7a8 = local_88c;
      puVar7 = local_808;
      puVar9 = local_688;
      for (iVar6 = 0x5f; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      local_688[2] = *(undefined4 *)((int)local_8 + 0x1b44);
      local_674 = *(undefined4 *)((int)local_8 + 0x1b50);
      local_678 = *(undefined4 *)((int)local_8 + 0x1b4c);
      local_4fc = *(undefined4 *)((int)local_8 + 0x1c66);
      local_4f4 = *(undefined4 *)((int)local_8 + 0x1c6e);
      local_4f8 = *(undefined4 *)((int)local_8 + 0x1c6a);
      local_620 = 0x6333;
      local_50c = 3;
      local_508 = 1;
      local_500 = 0;
      local_4f0 = 0xe7;
      local_4ec = 0xe;
      local_4b4 = 2;
      local_4b0 = 0x6335;
      local_688[3] = uVar1;
      local_4b8 = local_88c;
      (**(code **)(**(int **)((int)local_8 + 0xc) + 8))
                (8,(undefined4 *)((int)local_8 + 0x1b14),0,local_8c4,0);
      *(undefined4 *)((int)local_8 + 0x2d) = 5;
      FUN_006e6080(local_8,2,*(undefined4 *)((int)local_8 + 0x1b14),
                   (undefined4 *)((int)local_8 + 0x1d));
      if (*(uint *)((int)local_8 + 0x1b2c) != 0xffffffff) {
        FUN_006b34d0(*(uint **)((int)local_8 + 0x1b70),*(uint *)((int)local_8 + 0x1b2c),0xfffffffe,
                     *(uint *)((int)local_8 + 0x1b44),*(uint *)((int)local_8 + 0x1b48));
      }
      if (*(uint *)((int)local_8 + 0x1bbd) != 0xffffffff) {
        FUN_006b34d0(*(uint **)((int)local_8 + 0x1c01),*(uint *)((int)local_8 + 0x1bbd),0xfffffffe,
                     *(uint *)((int)local_8 + 0x1bd5),*(uint *)((int)local_8 + 0x1bd9));
      }
      if (*(uint *)((int)local_8 + 0x1c4e) != 0xffffffff) {
        FUN_006b34d0(*(uint **)((int)local_8 + 0x1c92),*(uint *)((int)local_8 + 0x1c4e),0xfffffffe,
                     *(uint *)((int)local_8 + 0x1c66),*(uint *)((int)local_8 + 0x1c6a));
      }
    }
    *(undefined4 *)((int)local_8 + 0x2d) = 0x61;
    *(undefined4 *)((int)local_8 + 0x35) = 0;
    FUN_006e6080(local_8,0xf,0,(undefined4 *)((int)local_8 + 0x1d));
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar5 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x666,0,iVar6,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar6,0,0x7cbf70,0x666);
  return;
}

