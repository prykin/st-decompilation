
undefined4 * __cdecl FUN_0067cf30(char *param_1,undefined2 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  void *unaff_ESI;
  char *_Source;
  undefined4 uVar4;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  uVar4 = DAT_00858df8;
  local_8 = (undefined4 *)0x0;
  DAT_00858df8 = &stack0xffffffb4;
  iVar1 = __setjmp3(local_48,0,unaff_ESI,uVar4);
  if (iVar1 != 0) {
    DAT_00858df8 = (undefined1 *)uVar4;
    thunk_FUN_0067d160((int *)&local_8);
    FUN_006a5e40(iVar1,0,0x7d2fa4,0x28);
    return (undefined4 *)0x0;
  }
  local_8 = FUN_006aac10(299);
  *local_8 = 0x38e;
  local_8[5] = 299;
  *(undefined1 *)(local_8 + 6) = 2;
  _strncpy((char *)((int)local_8 + 0x1b),param_1,0x3f);
  _Source = param_1;
  if (param_3 != (char *)0x0) {
    _Source = param_3;
  }
  _strncpy((char *)((int)local_8 + 0x5b),_Source,0xb);
  *(undefined2 *)((int)local_8 + 0x19) = param_2;
  *(undefined4 *)((int)local_8 + 0x6d) = 0xff;
  puVar2 = FUN_006ae290((uint *)0x0,5,0x10,5);
  *(uint **)((int)local_8 + 0xc2) = puVar2;
  puVar3 = thunk_FUN_0065c9e0(param_1);
  *(undefined4 **)((int)local_8 + 0x106) = puVar3;
  *(undefined4 *)((int)local_8 + 0x10a) = param_4;
  DAT_00858df8 = (undefined1 *)uVar4;
  return local_8;
}

