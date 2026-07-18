
void FUN_007595f0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *param_1;
  if (param_2 != 1) {
    FUN_006a5e40(0xc,DAT_007ed77c,0x7f2dc8,0x211);
  }
  puVar2 = (undefined4 *)FUN_00759290(param_1,param_2,0x7e);
  puVar2[1] = param_5;
  puVar2[2] = param_4;
  *puVar2 = 0;
  puVar2[3] = param_6;
  puVar2[8] = param_3;
  puVar2[10] = 0;
  puVar2[0xb] = *(undefined4 *)(iVar1 + 0x40);
  *(undefined4 **)(iVar1 + 0x40) = puVar2;
  return;
}

