
int __cdecl thunk_FUN_0064a830(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *unaff_ESI;
  undefined4 uVar3;
  undefined4 auStack_44 [16];
  
  uVar3 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb8;
  iVar1 = __setjmp3(auStack_44,0,unaff_ESI,uVar3);
  if (iVar1 == 0) {
    if (*param_1 <= param_1[1]) {
      iVar1 = *param_1 + 10;
      *param_1 = iVar1;
      iVar1 = FUN_006acf50((undefined4 *)param_1[2],iVar1 * 5);
      param_1[2] = iVar1;
    }
    puVar2 = (undefined4 *)(param_1[1] * 5 + param_1[2]);
    *puVar2 = *param_2;
    *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_2 + 1);
    iVar1 = param_1[1];
    param_1[1] = iVar1 + 1;
    DAT_00858df8 = (undefined1 *)uVar3;
    return iVar1;
  }
  DAT_00858df8 = (undefined1 *)uVar3;
  FUN_006a5e40(iVar1,0,0x7d2a04,0x56);
  if (iVar1 < 0) {
    return iVar1;
  }
  return -1;
}

