
undefined4 __cdecl
thunk_FUN_006a36e0(int *param_1,int param_2,int param_3,int param_4,undefined *param_5,
                  undefined4 param_6)

{
  int iVar1;
  ushort auStack_c [4];
  
  if ((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
     (((param_3 < param_1[1] && (-1 < param_4)) && (param_4 < 6)))) {
    iVar1 = thunk_FUN_006a20e0(param_1,param_2,param_3,param_4,0xff);
    if (iVar1 != 0) {
      thunk_FUN_006a1370(param_1,param_2,param_3,param_4,(undefined4 *)auStack_c);
      thunk_FUN_006a1410(param_1,param_2,param_3,param_4,0xff,param_5,param_6);
      thunk_FUN_006a3840(param_1,param_2,param_3,param_4,auStack_c,param_5,param_6);
    }
  }
  return 1;
}

