
undefined4 thunk_FUN_00423ec0(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined2 extraout_var;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar8;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  int iStack_c;
  void *pvStack_8;
  
  uVar7 = 0;
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  iVar2 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_50;
    iVar4 = FUN_006ad4d0(s_E____titans_wlad_tc_grp_cpp_007a50a4,0x17c,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    FUN_006a5e40(iVar2,0,0x7a50a4,0x17d);
    return 0xffff;
  }
  FUN_006e5fd0();
  if (*(int *)(param_1 + 0x10) == 2) {
    iVar2 = *(int *)(param_1 + 0x14);
    if (*(uint *)(iVar2 + 0xc) < 2) {
      *(undefined4 *)((int)pvStack_8 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
      *(undefined1 *)((int)pvStack_8 + 0x24) = *(undefined1 *)(iVar2 + 4);
      *(undefined2 *)((int)pvStack_8 + 0x25) = *(undefined2 *)(iVar2 + 0x14);
      *(undefined2 *)((int)pvStack_8 + 0x27) = *(undefined2 *)(iVar2 + 0x18);
      puVar3 = FUN_006ae310((uint *)0x0,5,2,5,0x4045c5);
      *(uint **)((int)pvStack_8 + 0x29) = puVar3;
      iStack_c = *(int *)(iVar2 + 0x1c);
      uVar6 = extraout_var_01;
      if (0 < iStack_c) {
        puVar8 = (undefined4 *)(iVar2 + 0x24);
        do {
          FUN_006ae140(*(uint **)((int)pvStack_8 + 0x29),uVar7,puVar8);
          uVar7 = uVar7 + 1;
          puVar8 = puVar8 + 1;
          uVar6 = extraout_var_02;
        } while ((int)uVar7 < iStack_c);
      }
      thunk_FUN_0042efd0(*(char *)((int)pvStack_8 + 0x24),
                         CONCAT22(uVar6,*(undefined2 *)((int)pvStack_8 + 0x25)),(int)pvStack_8);
      *(int *)((int)pvStack_8 + 0x31) = *(int *)((int)pvStack_8 + 0x18) * DAT_00808754;
    }
    else if (*(uint *)(iVar2 + 0xc) == 2) {
      thunk_FUN_00424360(iVar2);
      thunk_FUN_0042efd0(*(char *)((int)pvStack_8 + 0x24),
                         CONCAT22(extraout_var,*(undefined2 *)((int)pvStack_8 + 0x25)),
                         (int)pvStack_8);
      DAT_00858df8 = (undefined4 *)uStack_50;
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x10) == 3) {
    thunk_FUN_00423e00(pvStack_8);
    FUN_006ae110(*(byte **)((int)pvStack_8 + 0x29));
    *(undefined4 *)((int)pvStack_8 + 0x29) = 0;
    thunk_FUN_0042f140(*(char *)((int)pvStack_8 + 0x24),
                       CONCAT22(extraout_var_00,*(undefined2 *)((int)pvStack_8 + 0x25)),
                       (int)pvStack_8);
    if (*(byte **)((int)pvStack_8 + 0x2d) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)pvStack_8 + 0x2d));
      *(undefined4 *)((int)pvStack_8 + 0x2d) = 0;
      DAT_00858df8 = (undefined4 *)uStack_50;
      return 0;
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  return 0;
}

