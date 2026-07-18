
int FUN_00757360(int param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_8 = 0;
  if (*(char *)(param_2 + 0x36) == '\0') {
    FUN_00730c40((undefined1 *)(param_2 + 0x36),0x7f2ce8);
    *(undefined4 *)(param_2 + 0x14) = 1;
  }
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar1 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    if (*(int *)(param_2 + 0x14) != 0) {
      *(uint *)(*(int *)(param_1 + 8) + 8) = *(uint *)(*(int *)(param_1 + 8) + 8) | 0x10;
      FUN_006d4860(*(int *)(param_1 + 8),*(int *)(param_2 + 0x18),(undefined4 *)(param_2 + 0x20),
                   0x20);
    }
    FUN_006d4c50(*(int *)(param_1 + 8),*(int *)(param_2 + 0x24),
                 (int)*(short *)(*(int *)(param_1 + 8) + 0x16));
    *(undefined4 *)(param_2 + 0x14) = 0;
    DAT_00858df8 = (undefined4 *)local_4c;
    return local_8;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  return iVar1;
}

