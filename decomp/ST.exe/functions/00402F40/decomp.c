
undefined4 __cdecl thunk_FUN_0067f030(byte *param_1,char *param_2,uint *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 in_stack_ffffffb8;
  uint uStack_8;
  
  puVar4 = DAT_00858df8;
  uStack_8 = 0;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3((undefined4 *)&stack0xffffffb8,0,puVar4,in_stack_ffffffb8);
  puVar1 = puVar4;
  if (((iVar2 == 0) &&
      (iVar2 = thunk_FUN_0067ef60(param_1,(int *)&uStack_8), puVar1 = DAT_00858df8, iVar2 != 0)) &&
     (-1 < (int)uStack_8)) {
    uStack_8 = FUN_006b6020(DAT_00848a18,uStack_8,param_2);
    DAT_00858df8 = puVar4;
    if (param_3 != (uint *)0x0) {
      *param_3 = uStack_8;
    }
    uVar3 = thunk_FUN_0067ee40(uStack_8);
    return uVar3;
  }
  DAT_00858df8 = puVar1;
  return 0;
}

