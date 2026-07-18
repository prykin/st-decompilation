
int * __fastcall thunk_FUN_005545c0(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = *(int *)(*param_1 + 4);
  iVar2 = param_1[2];
  param_1[8] = *(int *)(*param_1 + 8);
  param_1[9] = 0;
  param_1[0xb] = 1;
  param_1[10] = 1;
  *(undefined4 *)(iVar2 + 0x58) = 1;
  *(undefined4 *)(iVar2 + 0x5c) = 1;
  puVar1 = (uint *)FUN_006b0140(0x267a,DAT_00807618);
  iVar2 = FUN_007111c0((void *)param_1[2],puVar1);
  param_1[0xe] = 0;
  param_1[0xd] = param_1[0xb] + iVar2;
  param_1[0x10] = 1;
  param_1[0xc] = param_1[8] / (param_1[0xb] + iVar2);
  param_1[0xf] = -1;
  param_1[0x14] = -1;
  return param_1;
}

