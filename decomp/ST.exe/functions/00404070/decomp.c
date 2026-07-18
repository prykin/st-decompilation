
undefined4 __thiscall thunk_FUN_005f9050(void *this,int *param_1,undefined4 *param_2)

{
  int *this_00;
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  short asStack_c [2];
  short sStack_8;
  short sStack_6;
  
  thunk_FUN_004162b0(this,&sStack_8,&sStack_6,asStack_c);
  sVar1 = asStack_c[0] + -1;
  if (((((-1 < sStack_8) && (sStack_8 < DAT_007fb240)) && (-1 < sStack_6)) &&
      ((((sStack_6 < DAT_007fb242 && (-1 < sVar1)) &&
        ((sVar1 < DAT_007fb244 &&
         ((this_00 = *(int **)(DAT_007fb248 +
                              ((int)DAT_007fb246 * (int)sVar1 + (int)DAT_007fb240 * (int)sStack_6 +
                              (int)sStack_8) * 8), this_00 != (int *)0x0 && (this_00[8] == 1000)))))
        ) && (iVar2 = (**(code **)(*this_00 + 0x2c))(), iVar2 == 0x6e)))) &&
     (((this_00[6] == *(int *)((int)this + 0x255) &&
       (iVar2 = thunk_FUN_004dd740((int)this_00), iVar2 == 0)) &&
      (iVar2 = thunk_FUN_004dd6c0(this_00,*(undefined4 *)((int)this + 0x18)), iVar2 != 0)))) {
    thunk_FUN_004dd770(this_00,*(int *)((int)this + 0x18));
    thunk_FUN_00416270(this_00,&sStack_8,&sStack_6,asStack_c);
    uVar3 = thunk_FUN_004ad650((int)this_00 + 0x1d5);
    *param_2 = uVar3;
    *param_1 = asStack_c[0] + -0x5a;
    return 1;
  }
  return 0;
}

