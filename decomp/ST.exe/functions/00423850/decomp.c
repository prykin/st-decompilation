
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::AddObj */

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
  undefined4 local_80;
  undefined4 local_7c [16];
  undefined1 local_3c [16];
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  int local_24;
  STGroupC *local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  short local_8;
  undefined1 local_5;
  
  local_18 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  local_c = 0;
  local_10 = 0;
  local_80 = DAT_00858df8;
  DAT_00858df8 = &local_80;
  local_1c = this;
  local_14 = local_18;
  iVar3 = __setjmp3(local_7c,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_1c;
  uVar8 = local_14;
  uVar7 = local_18;
  if (iVar3 == 0) {
    while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
      FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar7,(undefined4 *)&local_8);
      if (local_8 == -1) {
        uVar8 = uVar7;
        local_14 = uVar7;
      }
      if (local_8 == (short)param_1) {
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
      local_5 = 0xff;
      (**(code **)(*(int *)pSVar2 + 8))(0x65,&local_5);
    }
    uVar5 = thunk_FUN_00423120((int)this_00);
    uVar7 = *(uint *)(pSVar2 + 0x35);
    if ((uVar7 & 1) == 0) {
      if ((uVar5 & 1) != 0) {
        local_10 = local_10 | 1;
      }
    }
    else if ((uVar5 & 1) == 0) {
      local_c = local_c | 1;
    }
    if ((uVar7 & 2) == 0) {
      if ((uVar5 & 2) != 0) {
        local_10 = local_10 | 2;
      }
    }
    else if ((uVar5 & 2) == 0) {
      local_c = local_c | 2;
    }
    if ((uVar7 & 4) == 0) {
      if ((uVar5 & 4) != 0) {
        local_10 = local_10 | 4;
      }
    }
    else if ((uVar5 & 4) == 0) {
      local_c = local_c | 4;
    }
    if ((uVar7 & 8) == 0) {
      if ((uVar5 & 8) != 0) {
        local_10 = local_10 | 8;
      }
    }
    else if ((uVar5 & 8) == 0) {
      local_c = local_c | 8;
    }
    if ((uVar7 & 0x10) == 0) {
      if ((uVar5 & 0x10) != 0) {
        local_10 = local_10 | 0x10;
      }
    }
    else if ((uVar5 & 0x10) == 0) {
      local_c = local_c | 0x10;
    }
    if (local_c != 0) {
      (**(code **)(*this_00 + 0x100))(local_c);
    }
    if (local_10 != 0) {
      (**(code **)(*this_00 + 0x104))(local_10);
    }
    if (this_00[8] == 0x14) {
      thunk_FUN_004956c0(this_00,*(undefined4 *)(pSVar2 + 0x39));
    }
    if (*(undefined4 **)(pSVar2 + 0x1c) != (undefined4 *)0x0) {
      local_2c = 0x5d96;
      local_28 = 0;
      local_26 = (short)param_1;
      local_24 = this_00[6];
      (**(code **)**(undefined4 **)(pSVar2 + 0x1c))(local_3c);
    }
    DAT_00858df8 = (undefined4 *)local_80;
    return uVar8;
  }
  DAT_00858df8 = (undefined4 *)local_80;
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

