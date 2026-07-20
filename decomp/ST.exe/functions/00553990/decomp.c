
void __cdecl FUN_00553990(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  short *psVar1;
  
  if ((((param_3 != 0) && (-1 < param_1)) && (param_1 < (int)param_4)) &&
     ((-1 < param_2 && (param_2 < param_5)))) {
    thunk_FUN_00553390(param_1,param_2,param_3,param_4,param_5,0xf);
    psVar1 = &SHORT_007c88d4;
    do {
      thunk_FUN_00553390(*psVar1 + param_1,psVar1[1] + param_2,param_3,param_4,param_5,0xf);
      psVar1 = psVar1 + 2;
    } while ((int)psVar1 < 0x7c88f4);
    psVar1 = &SHORT_007c88d4;
    do {
      thunk_FUN_00553910(*psVar1 + param_1,psVar1[1] + param_2,param_3,param_4,param_5);
      psVar1 = psVar1 + 2;
    } while ((int)psVar1 < 0x7c88f4);
  }
  return;
}

