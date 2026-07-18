
undefined4 __fastcall FUN_004dd460(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x4e0);
  for (iVar1 = 0x28; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if ((*(int *)(param_1 + 0x231) != 0) && (DAT_008117a4 != 0)) {
    thunk_FUN_0062e440(*(int *)(param_1 + 0x24),(short)*(undefined4 *)(param_1 + 0x5b0),
                       (short)*(undefined4 *)(param_1 + 0x5b4),
                       (short)*(undefined4 *)(param_1 + 0x5b8),*(int *)(param_1 + 0x18),
                       CONCAT22((short)((uint)*(int *)(param_1 + 0x231) >> 0x10),
                                *(undefined2 *)(param_1 + 0x32)));
  }
  return 0;
}

