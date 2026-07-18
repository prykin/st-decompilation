
undefined4 __thiscall thunk_FUN_004ea530(void *this,short param_1,short param_2,short param_3)

{
  int *this_00;
  int iVar1;
  
  if (((((-1 < param_1) && (param_1 < DAT_007fb240)) && (-1 < param_2)) &&
      ((param_2 < DAT_007fb242 && (-1 < param_3)))) &&
     ((param_3 < DAT_007fb244 &&
      (this_00 = *(int **)(DAT_007fb248 +
                          ((int)DAT_007fb246 * (int)param_3 + (int)DAT_007fb240 * (int)param_2 +
                          (int)param_1) * 8), this_00 != (int *)0x0)))) {
    iVar1 = (**(code **)(*this_00 + 0x2c))();
    if ((iVar1 != 0x37) && (iVar1 = (**(code **)(*this_00 + 0x2c))(), iVar1 != 0x6c)) {
      return 0;
    }
    iVar1 = thunk_FUN_004e8b10(this_00,*(uint *)((int)this + 0x24));
    if (iVar1 != 0) {
      thunk_FUN_004ea460(this,this_00[6],(int)this_00);
    }
  }
  return 0;
}

