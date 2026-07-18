
undefined4 * __cdecl FUN_00648530(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar3;
  undefined4 local_4c;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar1 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    local_8 = FUN_006aac10(0x85);
    puVar2 = param_1;
    puVar3 = local_8;
    for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
    *(undefined4 *)((int)local_8 + 1) = 0x85;
    *(undefined1 *)((int)local_8 + 5) = 2;
    puVar2 = thunk_FUN_0065cb00((undefined4 *)(*(int *)((int)local_8 + 0x46) + 0x84 + (int)param_1))
    ;
    *(undefined4 **)((int)local_8 + 0x4e) = puVar2;
    DAT_00858df8 = (undefined4 *)local_4c;
    return local_8;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  thunk_FUN_006484f0((int *)&local_8);
  FUN_006a5e40(iVar1,0,0x7d27f4,0x45);
  return (undefined4 *)0x0;
}

