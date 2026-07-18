
void __fastcall thunk_FUN_005f0a30(int *param_1)

{
  short sVar1;
  short sVar2;
  int *this;
  bool bVar3;
  short sVar4;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((*(char *)((int)param_1 + 0x24f) != '\0') && (0 < *(short *)((int)param_1 + 0x246))) {
    bVar3 = thunk_FUN_004961b0(*(short *)((int)param_1 + 0x242),(short)param_1[0x91],
                               *(short *)((int)param_1 + 0x246) + -1);
    if (CONCAT31(extraout_var,bVar3) == 0) {
      sVar1 = *(short *)((int)param_1 + 0x242);
      sVar2 = (short)param_1[0x91];
      sVar4 = *(short *)((int)param_1 + 0x246) + -1;
      if ((((-1 < sVar1) && (sVar1 < DAT_007fb240)) && (-1 < sVar2)) &&
         (((sVar2 < DAT_007fb242 && (-1 < sVar4)) && (sVar4 < DAT_007fb244)))) {
        this = *(int **)(DAT_007fb248 +
                        ((int)DAT_007fb246 * (int)sVar4 + (int)DAT_007fb240 * (int)sVar2 +
                        (int)sVar1) * 8);
        if (this != (int *)0x0) {
          iVar5 = (**(code **)(*this + 0x2c))();
          if (iVar5 == 99) {
            iVar5 = (**(code **)(*param_1 + 0x138))();
            iVar6 = (**(code **)(*param_1 + 0x130))();
            iVar7 = (**(code **)(*param_1 + 0x2c))();
            thunk_FUN_004b7e30(this,iVar7,iVar6,iVar5);
            iVar5 = (**(code **)(*param_1 + 0xac))(this[6]);
            if (iVar5 != 0) {
              thunk_FUN_004b7de0(this);
              thunk_FUN_004b7d50(this,(int)param_1);
            }
          }
        }
      }
    }
  }
  return;
}

