
float10 __cdecl
FUN_00735390(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  double dVar1;
  float10 fVar2;
  undefined4 local_c;
  undefined4 uStack_8;
  
  dVar1 = (double)CONCAT44(param_3,param_2) + (double)CONCAT44(param_5,param_4);
  if (DAT_007f24d0 == 0) {
    uStack_8 = (undefined4)((ulonglong)dVar1 >> 0x20);
    local_c = SUB84(dVar1,0);
    fVar2 = __umatherr(1,param_1,param_2,param_3,param_4,param_5,local_c,uStack_8);
  }
  else {
    DAT_00857148 = 0x21;
    FUN_00736270();
    fVar2 = (float10)dVar1;
  }
  return fVar2;
}

