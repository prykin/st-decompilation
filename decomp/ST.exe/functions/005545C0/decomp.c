
int * __fastcall FUN_005545c0(int *param_1)

{
  uint *extraout_EAX;
  int iVar1;
  
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = *(int *)(*param_1 + 4);
  iVar1 = param_1[2];
  param_1[8] = *(int *)(*param_1 + 8);
  param_1[9] = 0;
  param_1[0xb] = 1;
  param_1[10] = 1;
  *(undefined4 *)(iVar1 + 0x58) = 1;
  *(undefined4 *)(iVar1 + 0x5c) = 1;
  LoadResourceString(0x267a,HINSTANCE_00807618);
  iVar1 = FUN_007111c0((void *)param_1[2],extraout_EAX);
  param_1[0xe] = 0;
  param_1[0xd] = param_1[0xb] + iVar1;
  param_1[0x10] = 1;
  param_1[0xc] = param_1[8] / (param_1[0xb] + iVar1);
  param_1[0xf] = -1;
  param_1[0x14] = -1;
  return param_1;
}

