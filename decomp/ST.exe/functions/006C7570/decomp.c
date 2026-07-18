
void FUN_006c7570(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,int param_6,
                 int param_7,byte param_8)

{
  uint uVar1;
  
  if (((param_7 != 0) && (param_7 * 2 <= (int)param_5)) && (param_7 * 2 <= param_6)) {
    if (param_2 == 0) {
      param_2 = FUN_006b4fa0(param_1);
    }
    uVar1 = (uint)*(ushort *)(param_1 + 0xe) * *(int *)(param_1 + 4) + 0x1f >> 3 & 0x1ffffffc;
    FUN_006d7830((undefined1 *)
                 (((*(int *)(param_1 + 8) - param_4) + -1) * uVar1 + param_2 + param_3),-uVar1,
                 param_5,param_6,param_7,param_8);
    return;
  }
  FUN_006b5ee0(param_1,param_2,param_3,param_4,(int)param_5,param_6,param_8,0xd);
  return;
}

