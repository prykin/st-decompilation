
int FUN_006bb6c0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                uint param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_88 [26];
  uint local_20;
  int local_c;
  int local_8;
  
  puVar2 = local_88;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_2 = 0;
  local_88[0] = 0x7c;
  local_88[1] = 7;
  local_20 = param_6;
  if ((param_6 & 0x210a4) == 0) {
    local_20 = param_6 | 0x40;
  }
  local_88[2] = param_4;
  local_88[3] = param_3;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0x18))
                    (*(int **)(param_1 + 0x30),local_88,param_2,0);
  if ((iVar1 == 0) && (param_5 != -1)) {
    local_8 = param_5;
    local_c = param_5;
    iVar1 = (**(code **)(*(int *)*param_2 + 0x74))
                      ((int *)*param_2,(-((param_6 & 0x80) != 0) & 8U) + 8,&local_c);
    if (iVar1 != 0) {
      (**(code **)(*(int *)*param_2 + 8))((int *)*param_2);
      *param_2 = 0;
    }
  }
  return iVar1;
}

