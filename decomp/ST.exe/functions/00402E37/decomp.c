
int __thiscall thunk_FUN_0067b3c0(void *this,int param_1,int param_2,int param_3,undefined1 param_4)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 auStack_5c [16];
  undefined1 uStack_1c;
  undefined2 uStack_1b;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined2 uStack_17;
  undefined1 uStack_15;
  int iStack_14;
  int iStack_10;
  undefined2 uStack_c;
  void *pvStack_8;
  
  pvStack_8 = this;
  iVar3 = thunk_FUN_0067b2e0(this,param_1,param_2);
  uVar5 = DAT_00858df8;
  if (0 < iVar3) {
    return 0;
  }
  DAT_00858df8 = &stack0xffffffa0;
  iVar3 = __setjmp3(auStack_5c,0,unaff_ESI,uVar5);
  pvVar2 = pvStack_8;
  if (iVar3 == 0) {
    uStack_1c = param_4;
    uStack_1b = (undefined2)param_1;
    uStack_c = 0;
    uStack_15 = 0;
    uStack_17 = 1;
    uStack_19 = (undefined1)param_2;
    uStack_18 = (undefined1)((uint)param_2 >> 8);
    if (0 < param_3) {
      uStack_17 = (undefined2)param_3;
    }
    iStack_14 = iVar3;
    iStack_10 = iVar3;
    FUN_006ae1c0(*(uint **)((int)pvStack_8 + 0x6a1),(undefined4 *)&uStack_1c);
    thunk_FUN_00676c40(*(int *)((int)pvVar2 + 0x6a1),&LAB_004029b9);
    DAT_00858df8 = (undefined1 *)uVar5;
    return 0;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E____titans_ai_ai_plr_cpp_007d2e4c,0x3a9,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  FUN_006a5e40(iVar3,0,0x7d2e4c,0x3aa);
  return iVar3;
}

