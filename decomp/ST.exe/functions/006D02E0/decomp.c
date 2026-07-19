
void FUN_006d02e0(int *param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  
  if ((param_2 < (uint)param_1[0x68]) &&
     (puVar1 = *(uint **)(param_1[0x6c] + param_2 * 4), (*puVar1 & 0xc000) == 0xc000)) {
    puVar1 = (uint *)puVar1[0x30];
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    Library::DKW::DDX::FUN_006b3640(param_1,*puVar1,0xffffffff,param_3,param_4);
  }
  return;
}

