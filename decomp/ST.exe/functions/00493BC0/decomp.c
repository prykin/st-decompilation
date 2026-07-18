
void __fastcall FUN_00493bc0(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int *this;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x45d) == 0x15) || (*(int *)(param_1 + 0x459) == 0x79)) {
    sVar1 = *(short *)(param_1 + 0x639);
    sVar2 = *(short *)(param_1 + 0x63d);
    sVar3 = *(short *)(param_1 + 0x63b);
    if (((-1 < sVar1) && (((sVar1 < DAT_007fb240 && (-1 < sVar3)) && (sVar3 < DAT_007fb242)))) &&
       ((-1 < sVar2 && (sVar2 < DAT_007fb244)))) {
      this = *(int **)(DAT_007fb248 +
                      ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 + (int)sVar1)
                      * 8);
      if ((this != (int *)0x0) && (this[6] == *(int *)(param_1 + 0x63f))) {
        iVar4 = (**(code **)(*this + 0xf8))();
        if (iVar4 != 0) {
          thunk_FUN_004e95c0(this,param_1);
        }
      }
    }
  }
  return;
}

