
undefined4 __thiscall FUN_005f8ba0(void *this,undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  short sVar5;
  
  iVar4 = *(int *)((int)this + 0x285);
  do {
    if (4 < iVar4) {
      return 0;
    }
    sVar5 = (short)iVar4;
    bVar3 = thunk_FUN_004961b0(*(short *)((int)this + 0x27d),*(short *)((int)this + 0x281),sVar5);
    if (CONCAT31(extraout_var,bVar3) != 0) {
      sVar1 = *(short *)((int)this + 0x27d);
      sVar2 = *(short *)((int)this + 0x281);
      if ((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) || (sVar2 < 0)) ||
         (((DAT_007fb242 <= sVar2 || (sVar5 < 0)) ||
          ((DAT_007fb244 <= sVar5 ||
           (*(int *)(DAT_007fb248 +
                    ((int)sVar5 * (int)DAT_007fb246 + (int)DAT_007fb240 * (int)sVar2 + (int)sVar1) *
                    8) == 0)))))) {
        *param_1 = *(undefined4 *)((int)this + 0x27d);
        *param_2 = *(undefined4 *)((int)this + 0x281);
        *param_3 = iVar4;
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

