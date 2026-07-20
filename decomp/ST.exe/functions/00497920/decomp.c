
bool FUN_00497920(AnonShape_00497920_894F87D6 *param_1,undefined4 param_2,undefined4 param_3,
                 undefined4 param_4)

{
  int iVar1;
  void *this;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  
  sVar5 = (short)param_2;
  if ((((-1 < sVar5) && (sVar5 < SHORT_007fb240)) && (sVar4 = (short)param_3, -1 < sVar4)) &&
     (((sVar4 < SHORT_007fb242 && (sVar3 = (short)param_4, -1 < sVar3)) &&
      ((sVar3 < SHORT_007fb244 &&
       (this = *(void **)(DAT_007fb248 +
                         ((int)SHORT_007fb246 * (int)sVar3 + (int)SHORT_007fb240 * (int)sVar4 +
                         (int)sVar5) * 8), this != (void *)0x0)))))) {
    if (((*(int *)((int)this + 0x24) != param_1->field_0024) ||
        (*(short *)((int)this + 0x30) != param_1->field_0030)) || (*(int *)((int)this + 0xfd) == 1))
    {
      if (*(char *)((int)this + 0xe3) == '\x01') {
        return true;
      }
      if (*(char *)((int)this + 0xe3) == '\0') {
        return false;
      }
      if (*(short *)((int)this + 0xfa) == 0) {
        return false;
      }
      if (*(int *)((int)this + 0x97) == 0) {
        return false;
      }
      thunk_FUN_00416840(this,(undefined2 *)((int)&param_2 + 2),(undefined2 *)((int)&param_3 + 2),
                         (undefined2 *)((int)&param_4 + 2));
      if (((param_1->field_005B == param_2._2_2_) && (param_1->field_005D == param_3._2_2_)) &&
         (param_1->field_005F == param_4._2_2_)) {
        return false;
      }
      return *(short *)((int)this + 0xfa) < 0x1e;
    }
    iVar2 = *(int *)((int)this + 0x97);
    if (iVar2 == 0) {
      return true;
    }
    iVar1 = iVar2 + *(int *)((int)this + 0xd3) * 8;
    if (((*(short *)(iVar2 + *(int *)((int)this + 0xd3) * 8) == param_1->field_0047) &&
        (*(short *)(iVar1 + 2) == param_1->field_0049)) &&
       (*(short *)(iVar1 + 4) == param_1->field_004B)) {
      return false;
    }
  }
  return true;
}

