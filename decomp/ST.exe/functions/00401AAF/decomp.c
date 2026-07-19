
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_005faa10(int param_1)

{
  int iVar1;
  ushort *puVar2;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  InternalExceptionFrame IStack_54;
  int iStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_c = 0;
  IStack_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_54;
  iVar1 = __setjmp3(IStack_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 != 0) {
    g_currentExceptionFrame = IStack_54.previous;
    return uStack_c;
  }
  if (*(int *)(iStack_10 + 0x2e6) != 0) {
    if (param_1 == 1) {
      puVar2 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_rubb3_007ce700,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      uVar4 = *(uint *)((int)puVar2 + 0xd);
      uVar3 = *(uint *)((int)puVar2 + 9);
      uVar6 = 8;
      uVar5 = 8;
    }
    else {
      puVar2 = FUN_00709af0(DAT_00806774,0x1d,(byte *)s_bulb_tel_007ce708,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      uVar4 = *(uint *)((int)puVar2 + 0xd);
      uVar3 = *(uint *)((int)puVar2 + 9);
      uVar6 = 0x2f;
      uVar5 = 0x5a;
    }
    FUN_006e8660(*(void **)(iStack_10 + 0x211),(int *)&uStack_8,1,0,uVar3,uVar4,uVar5,uVar6,0);
    FUN_006e98e0(*(void **)(iStack_10 + 0x211),uStack_8,0,*(undefined4 *)puVar2,
                 *(int *)((int)puVar2 + 0x21),1);
    FUN_006ea270(*(void **)(iStack_10 + 0x211),uStack_8,0,0);
    iVar1 = *(int *)(iStack_10 + 0x2e6);
    FUN_006ea960(*(void **)(iStack_10 + 0x211),uStack_8,
                 (float)*(int *)(iVar1 + 0x14) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(iVar1 + 0x18) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(iVar1 + 0x1c) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    FUN_006e9ef0(*(void **)(iStack_10 + 0x211),uStack_8,0,1,0,0,30000);
    FUN_006eaaa0(*(void **)(iStack_10 + 0x211),uStack_8,0);
    *(uint *)(*(int *)(iStack_10 + 0x2e6) + 4) = uStack_8;
    g_currentExceptionFrame = IStack_54.previous;
    return 1;
  }
  g_currentExceptionFrame = IStack_54.previous;
  return uStack_c;
}

