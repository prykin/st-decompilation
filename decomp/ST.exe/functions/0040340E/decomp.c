
uint __thiscall STGroupC::AddObj(STGroupC *this,uint param_1,int param_2)

{
  code *pcVar1;
  STGroupC *pSVar2;
  int iVar3;
  int *this_00;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 extraout_ECX;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_80;
  undefined4 auStack_7c [16];
  undefined1 auStack_3c [16];
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_26;
  int iStack_24;
  STGroupC *pSStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  short sStack_8;
  undefined1 uStack_5;
  
  uStack_18 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  uStack_c = 0;
  uStack_10 = 0;
  uStack_80 = DAT_00858df8;
  DAT_00858df8 = &uStack_80;
  pSStack_1c = this;
  uStack_14 = uStack_18;
  iVar3 = __setjmp3(auStack_7c,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_1c;
  uVar8 = uStack_14;
  uVar7 = uStack_18;
  if (iVar3 == 0) {
    while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
      FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar7,(undefined4 *)&sStack_8);
      if (sStack_8 == -1) {
        uVar8 = uVar7;
        uStack_14 = uVar7;
      }
      if (sStack_8 == (short)param_1) {
        FUN_006a5e40(-0x5001ffff,DAT_007ed77c,0x7a50a4,0xb1);
      }
    }
    FUN_006ae140(*(uint **)(pSVar2 + 0x29),uVar8,&param_1);
    this_00 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar2[0x24]),
                                        param_1,1);
    thunk_FUN_00419c30(this_00,*(undefined2 *)(pSVar2 + 0x25));
    *(short *)(pSVar2 + 0x27) = *(short *)(pSVar2 + 0x27) + 1;
    if (param_2 == 1) {
      if (*(int *)(pSVar2 + 0x2d) == 0) {
        puVar4 = FUN_006ae290((uint *)0x0,5,2,5);
        *(uint **)(pSVar2 + 0x2d) = puVar4;
      }
      FUN_006ae1c0(*(uint **)(pSVar2 + 0x2d),&param_1);
      uStack_5 = 0xff;
      (**(code **)(*(int *)pSVar2 + 8))(0x65,&uStack_5);
    }
    uVar5 = thunk_FUN_00423120((int)this_00);
    uVar7 = *(uint *)(pSVar2 + 0x35);
    if ((uVar7 & 1) == 0) {
      if ((uVar5 & 1) != 0) {
        uStack_10 = uStack_10 | 1;
      }
    }
    else if ((uVar5 & 1) == 0) {
      uStack_c = uStack_c | 1;
    }
    if ((uVar7 & 2) == 0) {
      if ((uVar5 & 2) != 0) {
        uStack_10 = uStack_10 | 2;
      }
    }
    else if ((uVar5 & 2) == 0) {
      uStack_c = uStack_c | 2;
    }
    if ((uVar7 & 4) == 0) {
      if ((uVar5 & 4) != 0) {
        uStack_10 = uStack_10 | 4;
      }
    }
    else if ((uVar5 & 4) == 0) {
      uStack_c = uStack_c | 4;
    }
    if ((uVar7 & 8) == 0) {
      if ((uVar5 & 8) != 0) {
        uStack_10 = uStack_10 | 8;
      }
    }
    else if ((uVar5 & 8) == 0) {
      uStack_c = uStack_c | 8;
    }
    if ((uVar7 & 0x10) == 0) {
      if ((uVar5 & 0x10) != 0) {
        uStack_10 = uStack_10 | 0x10;
      }
    }
    else if ((uVar5 & 0x10) == 0) {
      uStack_c = uStack_c | 0x10;
    }
    if (uStack_c != 0) {
      (**(code **)(*this_00 + 0x100))(uStack_c);
    }
    if (uStack_10 != 0) {
      (**(code **)(*this_00 + 0x104))(uStack_10);
    }
    if (this_00[8] == 0x14) {
      thunk_FUN_004956c0(this_00,*(undefined4 *)(pSVar2 + 0x39));
    }
    if (*(undefined4 **)(pSVar2 + 0x1c) != (undefined4 *)0x0) {
      uStack_2c = 0x5d96;
      uStack_28 = 0;
      uStack_26 = (short)param_1;
      iStack_24 = this_00[6];
      (**(code **)**(undefined4 **)(pSVar2 + 0x1c))(auStack_3c);
    }
    DAT_00858df8 = (undefined4 *)uStack_80;
    return uVar8;
  }
  DAT_00858df8 = (undefined4 *)uStack_80;
  if (iVar3 != -0x5001ffff) {
    iVar6 = FUN_006ad4d0(s_E____titans_wlad_tc_grp_cpp_007a50a4,0xdf,0,iVar3,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return uVar7;
    }
    FUN_006a5e40(iVar3,0,0x7a50a4,0xe0);
    return 0xffffffff;
  }
  return 0xaffe0001;
}

