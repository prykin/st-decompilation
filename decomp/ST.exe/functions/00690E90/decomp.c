
undefined4 * __cdecl FUN_00690e90(char *param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  uint *puVar2;
  void *unaff_ESI;
  undefined4 uVar3;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  uVar3 = DAT_00858df8;
  local_8 = (undefined4 *)0x0;
  DAT_00858df8 = &stack0xffffffb4;
  iVar1 = __setjmp3(local_48,0,unaff_ESI,uVar3);
  if (iVar1 == 0) {
    local_8 = FUN_006aac10(0x10c);
    *local_8 = 0x38e;
    local_8[5] = 0x10c;
    *(undefined1 *)(local_8 + 6) = 2;
    _strncpy((char *)((int)local_8 + 0x1b),param_1,0x3f);
    *(undefined2 *)((int)local_8 + 0x19) = param_2;
    *(undefined2 *)(local_8 + 0x17) = param_3;
    if (*(int *)((int)local_8 + 0x85) == 0) {
      puVar2 = FUN_006ae290((uint *)0x0,10,8,10);
      *(uint **)((int)local_8 + 0x85) = puVar2;
    }
    DAT_00858df8 = (undefined1 *)uVar3;
    return local_8;
  }
  DAT_00858df8 = (undefined1 *)uVar3;
  thunk_FUN_00691540((int *)&local_8);
  FUN_006a5e40(iVar1,0,0x7d58fc,0x21);
  return (undefined4 *)0x0;
}

