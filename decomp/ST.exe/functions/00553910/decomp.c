
void __cdecl FUN_00553910(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  ushort uVar1;
  short sVar2;

  if ((((param_3 != 0) && (-1 < param_1)) && (param_1 < (int)param_4)) &&
     ((-1 < param_2 && (param_2 < param_5)))) {
    uVar1 = thunk_FUN_00553480(param_1,param_2,param_3,param_4,param_5);
    sVar2 = thunk_FUN_005537d0(uVar1);
    thunk_FUN_00553410(param_1,param_2,param_3,param_4,param_5,(char)sVar2);
  }
  return;
}

