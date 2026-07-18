
undefined4 __thiscall
STAllPlayersC::AddObjToTmp
          (STAllPlayersC *this,char param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  int *piVar7;
  void *unaff_EDI;
  undefined1 uVar8;
  undefined4 uStack_5c;
  undefined4 auStack_58 [16];
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  STAllPlayersC *pSStack_c;
  short sStack_6;
  
  uStack_18 = 0;
  uStack_5c = DAT_00858df8;
  DAT_00858df8 = &uStack_5c;
  pSStack_c = this;
  iVar3 = __setjmp3(auStack_58,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_5c;
    if (iVar3 == -0x5001fff7) {
      iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x21d,0,0,&DAT_007a4ccc);
      if (iVar3 == 0) {
        return uStack_18;
      }
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    if (iVar3 == -0x5001ffff) {
      iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x219,0,0,&DAT_007a4ccc);
      if (iVar3 == 0) {
        return 0xaffe0001;
      }
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    iVar6 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x215,0,iVar3,&DAT_007a4ccc);
    if (iVar6 == 0) {
      FUN_006a5e40(iVar3,0,0x7a6004,0x216);
      return 0xffffffff;
    }
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  if (param_2 == 0) {
    iStack_10 = (int)&DAT_007f4f83 + param_1 * 0xa62;
    if (param_3 != 0) goto LAB_0042bc00;
    thunk_FUN_0043fc50(1,0);
    uVar8 = 2;
  }
  else {
    if (param_2 != 1) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x1f8);
      goto LAB_0042bc00;
    }
    iStack_10 = (int)&DAT_007f4fd3 + param_1 * 0xa62;
    if (param_3 != 0) goto LAB_0042bc00;
    thunk_FUN_0043fc50(4,0);
    uVar8 = 5;
  }
  thunk_FUN_0043fc50(uVar8,param_3);
LAB_0042bc00:
  piVar7 = (int *)(param_3 * 0x10 + iStack_10);
  if (*piVar7 == 0) {
    puVar4 = FUN_006ae290((uint *)0x0,0,2,1);
    *(uint **)((int)piVar7 + 10) = puVar4;
    *(undefined2 *)((int)piVar7 + 0xe) = 0;
    piVar7[1] = (int)(char)param_4;
    if (param_2 == 0) {
      *piVar7 = 0x3c;
    }
    else if (param_2 == 1) {
      *piVar7 = 0x19a;
    }
  }
  if (piVar7[1] != (int)(char)param_4) {
    iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x210,0,0,&DAT_007a4ccc);
    if (iVar3 == 0) {
      DAT_00858df8 = (undefined4 *)uStack_5c;
      return uStack_18;
    }
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  puVar4 = *(uint **)((int)piVar7 + 10);
  uStack_14 = puVar4[3];
  uVar2 = uStack_14;
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    FUN_006acc70((int)puVar4,uVar2,(undefined4 *)&sStack_6);
    if (sStack_6 == -1) {
      uStack_14 = uVar2;
    }
    if (sStack_6 == (short)param_5) {
      FUN_006a5e40(-0x5001ffff,DAT_007ed77c,0x7a6004,0x209);
    }
  }
  FUN_006ae140(puVar4,uStack_14,&param_5);
  *(short *)((int)piVar7 + 0xe) = *(short *)((int)piVar7 + 0xe) + 1;
  piVar7 = (int *)thunk_FUN_0042b620(param_4,param_5,1);
  (**(code **)(*piVar7 + 0xe8))(1);
  DAT_00858df8 = (undefined4 *)uStack_5c;
  return uStack_18;
}

