
undefined4 __cdecl
FUN_006a34e0(int *param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6,
            ushort *param_7,undefined *param_8,undefined4 param_9)

{
  undefined1 uVar1;
  undefined3 extraout_var;
  int iVar2;
  ushort local_c [4];
  
  if ((((((-1 < (int)param_2) && ((int)param_2 < *param_1)) && (-1 < param_3)) &&
       ((param_3 < param_1[1] && (-1 < param_6)))) &&
      ((param_6 < 6 && ((-1 < (int)param_4 && ((int)param_4 < *param_1)))))) &&
     ((-1 < param_5 && (param_5 < param_1[1])))) {
    uVar1 = thunk_FUN_006a3390(param_2,param_3,param_4,param_5);
    thunk_FUN_006a3420(param_7,CONCAT31(extraout_var,uVar1));
    iVar2 = thunk_FUN_006a1370(param_1,param_4,param_5,param_6,(undefined4 *)local_c);
    iVar2 = thunk_FUN_006a24e0(local_c,(int)(short)iVar2,param_7,param_6,0xff);
    if (iVar2 == 0) {
      thunk_FUN_006a2920(param_1,param_4,param_5,param_6,0xff,param_8,param_9);
    }
    thunk_FUN_006a1620(param_1,param_4,param_5,param_6,0xff,param_7,param_8,param_9);
    iVar2 = thunk_FUN_006a1370(param_1,param_2,param_3,param_6,(undefined4 *)local_c);
    iVar2 = thunk_FUN_006a24e0(local_c,(int)(short)iVar2,param_7,param_6,0xff);
    if (iVar2 == 0) {
      thunk_FUN_006a2920(param_1,param_2,param_3,param_6,0xff,param_8,param_9);
    }
    thunk_FUN_006a3930(param_1,param_2,param_3,param_6,param_7,param_8,param_9);
    thunk_FUN_006a3930(param_1,param_4,param_5,param_6,param_7,param_8,param_9);
    return 1;
  }
  return 0;
}

