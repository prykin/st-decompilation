
void __cdecl
thunk_FUN_006a2920(int *param_1,uint param_2,int param_3,int param_4,int param_5,undefined *param_6,
                  undefined4 param_7)

{
  undefined4 uStack_c;
  uint uStack_8;
  
  thunk_FUN_006a1370(param_1,param_2,param_3,param_4,&uStack_c);
  if ((uStack_8 & 0x4000) == 0) {
    thunk_FUN_006a1c80(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  thunk_FUN_006a36e0(param_1,param_2,param_3,param_4,param_6,param_7);
  return;
}

