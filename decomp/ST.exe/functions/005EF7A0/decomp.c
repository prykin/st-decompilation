
void __thiscall FUN_005ef7a0(void *this,short param_1,short param_2,short param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  void *pvVar5;
  int iVar6;
  undefined3 extraout_var;
  
  if (*(char *)((int)this + 0x252) == '\0') {
    if (((((-1 < param_1) && (param_1 < DAT_007fb240)) && (-1 < param_2)) &&
        (((param_2 < DAT_007fb242 && (-1 < param_3)) &&
         ((param_3 < DAT_007fb244 &&
          (*(int *)(DAT_007fb248 +
                   ((int)DAT_007fb246 * (int)param_3 + (int)DAT_007fb240 * (int)param_2 +
                   (int)param_1) * 8) != 0)))))) ||
       (iVar6 = thunk_FUN_00495ec0(param_1,param_2,param_3,0,(int)this), iVar6 != 0))
    goto LAB_005ef8d0;
    *(char *)((int)this + 0x252) = *(char *)((int)this + 0x252) + '\x01';
  }
  else {
    sVar1 = *(short *)((int)this + 0x242);
    sVar2 = *(short *)((int)this + 0x246);
    sVar3 = *(short *)((int)this + 0x244);
    if (((sVar1 < 0) || (DAT_007fb240 <= sVar1)) ||
       ((sVar3 < 0 || (((DAT_007fb242 <= sVar3 || (sVar2 < 0)) || (DAT_007fb244 <= sVar2)))))) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = *(void **)(DAT_007fb248 +
                         ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                         (int)sVar1) * 8);
    }
    if (pvVar5 != this) goto LAB_005ef8d0;
  }
  bVar4 = thunk_FUN_005ef4b0(this,*(int *)((int)this + 0x273));
  if (CONCAT31(extraout_var,bVar4) != 0) {
    *(undefined4 *)((int)this + 0x23a) = 2;
    return;
  }
LAB_005ef8d0:
  *(undefined4 *)((int)this + 0x23a) = 6;
  return;
}

