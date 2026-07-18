
void __cdecl thunk_FUN_0067bda0(short *param_1,void *param_2)

{
  short asStack_c [2];
  short asStack_8 [2];
  
  thunk_FUN_004162b0(param_2,asStack_8,asStack_c,(undefined2 *)((int)&param_2 + 2));
  *param_1 = asStack_8[0] + -1;
  param_1[2] = 0;
  param_1[1] = asStack_c[0] + -1;
  param_1[3] = 3;
  param_1[4] = 3;
  param_1[5] = 5;
  thunk_FUN_006756d0(param_1,param_1 + 1,param_1 + 3,param_1 + 4);
  return;
}

