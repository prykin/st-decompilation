
void __thiscall
FUN_0062e240(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
            uint param_6)

{
  uint uVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  void *local_8;
  
  sVar5 = (short)param_2;
  local_8 = this;
  if (((((((-1 < sVar5) && (sVar5 < DAT_007fb240)) && (sVar6 = (short)param_3, -1 < sVar6)) &&
        ((sVar6 < DAT_007fb242 && (sVar3 = (short)param_4, -1 < sVar3)))) &&
       ((sVar3 < DAT_007fb244 &&
        ((piVar2 = *(int **)(DAT_007fb248 +
                            ((int)DAT_007fb246 * (int)sVar3 + (int)DAT_007fb240 * (int)sVar6 +
                            (int)sVar5) * 8), piVar2 != (int *)0x0 && (piVar2[6] == param_5)))))) &&
      ((piVar2[8] == 1000 && (iVar4 = (**(code **)(*piVar2 + 0x2c))(), iVar4 == 0x6e)))) ||
     ((param_5 != 0 && (iVar4 = FUN_006e62d0(DAT_00802a38,param_5,(int *)&local_8), iVar4 != -4))))
  {
    uVar7 = param_6;
    if (param_6 == 0) {
      uVar7 = 1;
    }
    if (param_6 < 0x80000000) {
      iVar4 = 0;
      do {
        uVar1 = *(int *)((int)this + 0xb4) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0xb4) = uVar1;
        thunk_FUN_0062e170(param_1,param_2,param_3,param_4,param_5,(uVar1 >> 0x10) % 0x1f + iVar4,3)
        ;
        iVar4 = iVar4 + 0x1e;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}

