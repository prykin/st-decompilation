
undefined4 __fastcall thunk_FUN_005eda50(int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int *this;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  uVar5 = 0;
  uStack_18 = 0;
  if (0 < *(short *)((int)param_1 + 0x5f)) {
    sVar2 = *(short *)((int)param_1 + 0x5d);
    sVar1 = *(short *)((int)param_1 + 0x5f) + -1;
    sVar3 = *(short *)((int)param_1 + 0x5b);
    if ((((-1 < sVar3) && (sVar3 < DAT_007fb240)) && (-1 < sVar2)) &&
       (((sVar2 < DAT_007fb242 && (-1 < sVar1)) &&
        ((sVar1 < DAT_007fb244 &&
         (this = *(int **)(DAT_007fb248 +
                          ((int)DAT_007fb246 * (int)sVar1 + (int)DAT_007fb240 * (int)sVar2 +
                          (int)sVar3) * 8), uVar5 = uStack_18, this != (int *)0x0)))))) {
      if ((*(char *)((int)param_1 + 0x2e9) != '\0') &&
         (iVar4 = (**(code **)(*param_1 + 0x128))(), this[6] == iVar4)) {
        return 0;
      }
      iVar4 = (**(code **)(*this + 0x2c))();
      if ((((iVar4 == 0x52) || (iVar4 == 0x5f)) &&
          (iVar4 = thunk_FUN_004e1490((int)this), iVar4 != 0)) && (this[0x142] == 0)) {
        iVar4 = (**(code **)(*param_1 + 0xc))();
        thunk_FUN_004ebcb0(this,param_1[6],iVar4);
        thunk_FUN_004ebfd0(this,&iStack_14,&iStack_10,&iStack_c,&iStack_8);
        iVar4 = thunk_FUN_005ecd70(param_1,iStack_14,iStack_10,iStack_c,iStack_8,'\x01',0x3c);
        if (iVar4 != 0) {
          uVar5 = 1;
          if (*(void **)((int)param_1 + 0x211) != (void *)0x0) {
            FUN_006ea460(*(void **)((int)param_1 + 0x211),*(uint *)((int)param_1 + 0x1ed),
                         *(int *)((int)this + 0x1ed));
            return 1;
          }
        }
      }
    }
  }
  return uVar5;
}

