
void FUN_00755d40(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0xc) + 0x34);
  if (sVar1 == 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 0xc) + 8))(param_2 + 0x18 + param_3);
  }
  else {
    iVar2 = (int)sVar1;
  }
  iVar2 = iVar2 + 8;
  FUN_0072da70((undefined4 *)(param_2 + 0x10 + param_3),
               (undefined4 *)(iVar2 + param_2 + 0x10 + param_3),
               (*(short *)(param_2 + 8) - iVar2) - param_3);
  *(short *)(param_2 + 8) = *(short *)(param_2 + 8) - (short)iVar2;
  return;
}

