
undefined4 __fastcall FUN_00419c70(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined2 extraout_var;
  
  uVar1 = thunk_FUN_0042e210(CONCAT31((int3)((uint)param_2 >> 8),(char)param_1[9]),
                             CONCAT22((short)((uint)param_1 >> 0x10),(short)param_1[0xc]),0xffff,
                             param_1,param_3,0);
  thunk_FUN_00440860(1,(int *)param_1[9],
                     CONCAT22((short)((uint)uVar1 >> 0x10),*(undefined2 *)((int)param_1 + 0x32)));
  thunk_FUN_00440990(1,(int *)param_1[9],CONCAT22(extraout_var,*(undefined2 *)((int)param_1 + 0x32))
                    );
  return uVar1;
}

