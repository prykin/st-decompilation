
void __cdecl FUN_0067bda0(short *param_1,void *param_2)

{
  short local_c [2];
  short local_8 [2];
  
  thunk_FUN_004162b0(param_2,local_8,local_c,(undefined2 *)((int)&param_2 + 2));
  *param_1 = local_8[0] + -1;
  param_1[2] = 0;
  param_1[1] = local_c[0] + -1;
  param_1[3] = 3;
  param_1[4] = 3;
  param_1[5] = 5;
  thunk_FUN_006756d0(param_1,param_1 + 1,param_1 + 3,param_1 + 4);
  return;
}

