
void __thiscall FUN_00490a00(void *this,short param_1,short param_2,short param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  void *this_00;
  
  sVar1 = *(short *)((int)this + 0x554);
  if (((sVar1 != param_1) || (*(short *)((int)this + 0x556) != param_2)) ||
     (*(short *)((int)this + 0x558) != param_3)) {
    sVar2 = *(short *)((int)this + 0x558);
    sVar3 = *(short *)((int)this + 0x556);
    if ((((-1 < sVar1) && (sVar1 < DAT_007fb240)) &&
        ((-1 < sVar3 && ((sVar3 < DAT_007fb242 && (-1 < sVar2)))))) && (sVar2 < DAT_007fb244)) {
      this_00 = *(void **)(DAT_007fb248 +
                          ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                          (int)sVar1) * 8);
      if (this_00 != (void *)0x0) {
        thunk_FUN_004e22a0(this_00,*(int *)((int)this + 0x568),*(int *)((int)this + 0x18));
        thunk_FUN_004e2000(this_00,*(int *)((int)this + 0x568),*(int *)((int)this + 0x18));
      }
    }
    *(undefined4 *)((int)this + 0x564) = 1;
    *(short *)((int)this + 0x554) = param_1;
    *(short *)((int)this + 0x556) = param_2;
    *(short *)((int)this + 0x558) = param_3;
  }
  return;
}

