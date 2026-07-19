
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005faa10(int param_1)

{
  int iVar1;
  ushort *puVar2;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  InternalExceptionFrame local_54;
  int local_10;
  undefined4 local_c;
  uint local_8;
  
  local_c = 0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar1 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 != 0) {
    g_currentExceptionFrame = local_54.previous;
    return local_c;
  }
  if (*(int *)(local_10 + 0x2e6) != 0) {
    if (param_1 == 1) {
      puVar2 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806774,CASE_1D,(byte *)s_rubb3_007ce700,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
      uVar4 = *(uint *)((int)puVar2 + 0xd);
      uVar3 = *(uint *)((int)puVar2 + 9);
      uVar6 = 8;
      uVar5 = 8;
    }
    else {
      puVar2 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806774,CASE_1D,(byte *)s_bulb_tel_007ce708,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
      uVar4 = *(uint *)((int)puVar2 + 0xd);
      uVar3 = *(uint *)((int)puVar2 + 9);
      uVar6 = 0x2f;
      uVar5 = 0x5a;
    }
    FUN_006e8660(*(void **)(local_10 + 0x211),(int *)&local_8,1,0,uVar3,uVar4,uVar5,uVar6,0);
    FUN_006e98e0(*(void **)(local_10 + 0x211),local_8,0,*(undefined4 *)puVar2,
                 *(int *)((int)puVar2 + 0x21),1);
    FUN_006ea270(*(void **)(local_10 + 0x211),local_8,0,0);
    iVar1 = *(int *)(local_10 + 0x2e6);
    FUN_006ea960(*(void **)(local_10 + 0x211),local_8,
                 (float)*(int *)(iVar1 + 0x14) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(iVar1 + 0x18) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(iVar1 + 0x1c) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    FUN_006e9ef0(*(void **)(local_10 + 0x211),local_8,0,1,0,0,30000);
    FUN_006eaaa0(*(void **)(local_10 + 0x211),local_8,0);
    *(uint *)(*(int *)(local_10 + 0x2e6) + 4) = local_8;
    g_currentExceptionFrame = local_54.previous;
    return 1;
  }
  g_currentExceptionFrame = local_54.previous;
  return local_c;
}

