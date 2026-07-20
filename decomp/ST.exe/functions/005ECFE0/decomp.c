
undefined4 __thiscall
FUN_005ecfe0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  short sVar2;
  void *pvVar3;
  int iVar4;
  short sVar5;
  
  if ((param_1 < 0) || (4 < param_1)) {
    if ((param_2 != -1) &&
       (((param_3 != -1 && (param_4 != -1)) &&
        (iVar4 = thunk_FUN_005ecd70(this,param_2,param_3,param_4,param_5,'\0',0x1e), iVar4 != 0))))
    {
      *(undefined4 *)((int)this + 0x23a) = 2;
      return 1;
    }
  }
  else {
    iVar4 = (int)*(short *)((int)this + 0x246);
    if ((param_1 == iVar4) && (*(int *)((int)this + 0x2ba) == param_5)) {
      return 0;
    }
    if (param_1 - iVar4 < 1) {
      sVar5 = -(ushort)(param_1 != iVar4);
    }
    else {
      sVar5 = 1;
    }
    sVar1 = *(short *)((int)this + 0x244);
    sVar5 = *(short *)((int)this + 0x246) + sVar5;
    sVar2 = *(short *)((int)this + 0x242);
    if ((((sVar2 < 0) || (SHORT_007fb240 <= sVar2)) ||
        ((sVar1 < 0 ||
         ((((SHORT_007fb242 <= sVar1 || (sVar5 < 0)) || (SHORT_007fb244 <= sVar5)) ||
          ((pvVar3 = *(void **)(DAT_007fb248 +
                               ((int)SHORT_007fb246 * (int)sVar5 + (int)SHORT_007fb240 * (int)sVar1
                               + (int)sVar2) * 8), pvVar3 == (void *)0x0 || (pvVar3 == this))))))))
       && (iVar4 = thunk_FUN_005ecd70(this,(int)(short)(sVar2 * 0xc9 + 100),
                                      (int)(short)(sVar1 * 0xc9 + 100),
                                      (int)(short)((short)param_1 * 200 + 100),param_5,'\0',0x1e),
          iVar4 != 0)) {
      *(undefined4 *)((int)this + 0x23a) = 2;
      return 1;
    }
  }
  return 0xffffffff;
}

