
float10 __cdecl FUN_00735330(int param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  
  if (DAT_007f24d0 == 0) {
    fVar1 = __umatherr(1,param_1,param_2,param_3,0,0,param_2,param_3);
  }
  else {
    DAT_00857148 = 0x21;
    FUN_00736270();
    fVar1 = (float10)(double)CONCAT44(param_3,param_2);
  }
  return fVar1;
}

