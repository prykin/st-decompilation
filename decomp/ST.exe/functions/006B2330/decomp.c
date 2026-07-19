
void FUN_006b2330(uint param_1,uint *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = Library::DKW::DDX::FUN_006b1d50
                    (param_1,param_2,param_3,0,(int *)0x0,0,0xffffffff,0xffffffff,0,1);
  if (iVar2 == 0) {
    puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + *param_2 * 4);
    puVar1[0xe] = param_5;
    puVar1[0xc] = param_5;
    puVar1[8] = param_5;
    puVar1[3] = param_5;
    puVar1[0xf] = param_6;
    puVar1[0xd] = param_6;
    puVar1[9] = param_6;
    puVar1[4] = param_6;
    puVar1[0x33] = param_4;
    *puVar1 = *puVar1 | 0x4000;
    puVar1[0x30] = param_7;
  }
  return;
}

