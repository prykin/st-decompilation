
undefined4
thunk_FUN_0062e440(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,int param_5,
                  int param_6)

{
  uint uVar1;
  undefined4 uVar2;
  STManRub3C *in_ECX;
  
  uVar1 = STManRub3C::AddNewDock
                    (in_ECX,param_1,param_2,param_3,param_4,param_5,(short)param_6,&param_6);
  uVar2 = 1;
  if ((int)uVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

