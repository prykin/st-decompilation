
undefined4 __fastcall FUN_005f07a0(void *param_1)

{
  short sVar1;
  short sVar2;
  int *this;
  bool bVar3;
  short sVar4;
  undefined3 extraout_var;
  int iVar5;
  undefined3 extraout_var_00;
  short local_a;
  short local_8;
  short local_6;
  
  if ((*(char *)((int)param_1 + 0x24f) == '\0') && (0 < *(short *)((int)param_1 + 0x246))) {
    bVar3 = thunk_FUN_004961b0(*(short *)((int)param_1 + 0x242),*(short *)((int)param_1 + 0x244),
                               *(short *)((int)param_1 + 0x246) + -1);
    if (CONCAT31(extraout_var,bVar3) == 0) {
      sVar1 = *(short *)((int)param_1 + 0x242);
      sVar2 = *(short *)((int)param_1 + 0x244);
      sVar4 = *(short *)((int)param_1 + 0x246) + -1;
      if ((((-1 < sVar1) && (sVar1 < DAT_007fb240)) && (-1 < sVar2)) &&
         (((sVar2 < DAT_007fb242 && (-1 < sVar4)) &&
          ((sVar4 < DAT_007fb244 &&
           (this = *(int **)(DAT_007fb248 +
                            ((int)DAT_007fb246 * (int)sVar4 + (int)DAT_007fb240 * (int)sVar2 +
                            (int)sVar1) * 8), this != (int *)0x0)))))) {
        iVar5 = (**(code **)(*this + 0x2c))();
        if (iVar5 == 99) {
          iVar5 = thunk_FUN_004b7d00(this,(int)param_1);
          if (iVar5 != 0) {
            iVar5 = thunk_FUN_005f09b0(param_1,(int)this);
            if (iVar5 != 0) {
              bVar3 = thunk_FUN_004b7d90(this);
              if (CONCAT31(extraout_var_00,bVar3) != 0) {
                thunk_FUN_004162b0(this,&local_6,&local_8,&local_a);
                iVar5 = thunk_FUN_005ecd70(param_1,(local_6 + 1) * 0xc9,(local_8 + 1) * 0xc9,
                                           local_a * 0xc9 + 0x96,*(int *)((int)param_1 + 0x2ba),
                                           '\x01',0x3c);
                if (iVar5 != 0) {
                  return 1;
                }
              }
              thunk_FUN_004b7d50(this,(int)param_1);
            }
          }
        }
      }
    }
  }
  return 0;
}

