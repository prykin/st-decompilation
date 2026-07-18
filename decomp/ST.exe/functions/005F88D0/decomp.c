
undefined4 __thiscall
FUN_005f88d0(void *this,int param_1,int param_2,int *param_3,undefined4 *param_4,undefined4 *param_5
            )

{
  short sVar1;
  short sVar2;
  short sVar3;
  void *this_00;
  int iVar4;
  undefined4 uVar5;
  
  sVar1 = *(short *)((int)this + 0x285);
  sVar2 = *(short *)((int)this + 0x281);
  sVar3 = *(short *)((int)this + 0x27d);
  uVar5 = 0;
  if (((((-1 < sVar3) && (sVar3 < DAT_007fb240)) && (-1 < sVar2)) &&
      ((sVar2 < DAT_007fb242 && (-1 < sVar1)))) && (sVar1 < DAT_007fb244)) {
    this_00 = *(void **)(DAT_007fb248 + 4 +
                        ((int)DAT_007fb246 * (int)sVar1 + (int)DAT_007fb240 * (int)sVar2 +
                        (int)sVar3) * 8);
    if ((this_00 != (void *)0x0) && (*(int *)((int)this_00 + 0x20) == 0xbe)) {
      if (param_2 == 0) {
        iVar4 = thunk_FUN_00630340(this_00,param_1,(int *)0x0,(undefined4 *)0x0,(undefined4 *)0x0);
        if (iVar4 != 0) {
          uVar5 = 1;
        }
      }
      else {
        iVar4 = thunk_FUN_00630340(this_00,param_1,param_3,param_4,param_5);
        if (iVar4 != 0) {
          return 1;
        }
      }
    }
  }
  return uVar5;
}

