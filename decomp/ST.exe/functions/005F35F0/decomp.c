
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005f35f0(int param_1)

{
  uint *puVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  undefined **local_c;
  uint local_8;
  
  local_10 = 0;
  local_c = &PTR_s_adcbo_007ce5a0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_1 == 1) {
      puVar3 = mfRLoad(DAT_00806774,CASE_1D,local_c[*(int *)(local_8 + 0x87)],0xffffffff,0,1,0,
                       (undefined4 *)0x0);
      puVar1 = (uint *)(local_8 + 0x8f);
      FUN_006e8660(DAT_00807598,(int *)puVar1,1,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x5a,0x45,0);
      FUN_006e98e0(DAT_00807598,*puVar1,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(DAT_00807598,*puVar1,0,*(uint *)(local_8 + 0xab));
      *(ushort **)(local_8 + 0x171) = puVar3;
      if (DAT_00807326 != '\0') {
        FUN_006e9520(DAT_00807598,*puVar1,0,0x403170,local_8);
      }
    }
    else {
      puVar1 = (uint *)(local_8 + 0x8f);
      if (-1 < (int)*(uint *)(local_8 + 0x8f)) {
        FUN_006e9520(DAT_00807598,*(uint *)(local_8 + 0x8f),0,0,local_8);
        FUN_006e8ba0(DAT_00807598,*puVar1);
      }
      puVar3 = mfRLoad(DAT_00806774,CASE_1D,(byte *)s_expl_i13_007ce618,0xffffffff,0,1,0,
                       (undefined4 *)0x0);
      FUN_006e8660(DAT_00807598,(int *)puVar1,3,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x5a,0x45,0);
      FUN_006e98e0(DAT_00807598,*puVar1,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(DAT_00807598,*puVar1,0,*(uint *)(local_8 + 0xab));
      puVar3 = mfRLoad(DAT_00806764,CASE_1D,(byte *)s_expl_s0_007ce610,0xffffffff,0,1,0,
                       (undefined4 *)0x0);
      FUN_006e98e0(DAT_00807598,*puVar1,2,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(DAT_00807598,*puVar1,2,*(uint *)(local_8 + 0xc0));
      FUN_006e9d40(DAT_00807598,(uint *)*puVar1,2);
    }
    FUN_006ea960(DAT_00807598,*(uint *)(local_8 + 0x8f),
                 (float)*(int *)(local_8 + 0x93) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(local_8 + 0x97) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(local_8 + 0x9b) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    FUN_006eaaa0(DAT_00807598,*(uint *)(local_8 + 0x8f),0);
    *(undefined1 *)(local_8 + 0xc4) = 1;
    g_currentExceptionFrame = local_54.previous;
    return 1;
  }
  g_currentExceptionFrame = local_54.previous;
  return local_10;
}

