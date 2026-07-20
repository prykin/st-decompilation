
/* [STPrototypeApplier] Propagated return.
   Evidence: 005EF7A0 returns return of FUN_005ef4b0 @ 005EF8CD | 005EF7A0 returns return of
   FUN_005ef4b0 @ 005EF8DE */

bool __thiscall FUN_005ef7a0(void *this,short param_1,short param_2,short param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  undefined3 extraout_var;
  
  sVar1 = param_1;
  _param_1 = (void *)(uint)(ushort)param_1;
  if (*(char *)((int)this + 0x252) == '\0') {
    if (((((-1 < sVar1) && (sVar1 < SHORT_007fb240)) && (-1 < param_2)) &&
        (((param_2 < SHORT_007fb242 && (-1 < param_3)) &&
         ((param_3 < SHORT_007fb244 &&
          (*(int *)(DAT_007fb248 +
                   ((int)SHORT_007fb246 * (int)param_3 + (int)SHORT_007fb240 * (int)param_2 +
                   (int)sVar1) * 8) != 0)))))) ||
       (_param_1 = (void *)DumpClassC::WritePtr(sVar1,param_2,param_3,0,(int)this),
       _param_1 != (void *)0x0)) goto cf_common_exit_005EF8D0;
    *(char *)((int)this + 0x252) = *(char *)((int)this + 0x252) + '\x01';
  }
  else {
    sVar1 = *(short *)((int)this + 0x242);
    sVar2 = *(short *)((int)this + 0x246);
    sVar3 = *(short *)((int)this + 0x244);
    if (((sVar1 < 0) || (SHORT_007fb240 <= sVar1)) ||
       ((sVar3 < 0 || (((SHORT_007fb242 <= sVar3 || (sVar2 < 0)) || (SHORT_007fb244 <= sVar2)))))) {
      _param_1 = (void *)0x0;
    }
    else {
      _param_1 = *(void **)(DAT_007fb248 +
                           ((int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar3 +
                           (int)sVar1) * 8);
    }
    if (_param_1 != this) goto cf_common_exit_005EF8D0;
  }
  bVar4 = thunk_FUN_005ef4b0(this,*(int *)((int)this + 0x273));
  _param_1 = (void *)0x0;
  if (CONCAT31(extraout_var,bVar4) != 0) {
    *(undefined4 *)((int)this + 0x23a) = 2;
    return bVar4;
  }
cf_common_exit_005EF8D0:
  *(undefined4 *)((int)this + 0x23a) = 6;
  return SUB41(_param_1,0);
}

