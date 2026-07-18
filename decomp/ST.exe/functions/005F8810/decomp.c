
void __thiscall FUN_005f8810(void *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  void *this_00;
  
  sVar1 = *(short *)((int)this + 0x285);
  sVar2 = *(short *)((int)this + 0x281);
  sVar3 = *(short *)((int)this + 0x27d);
  if (((((-1 < sVar3) && (sVar3 < DAT_007fb240)) && (-1 < sVar2)) &&
      ((sVar2 < DAT_007fb242 && (-1 < sVar1)))) && (sVar1 < DAT_007fb244)) {
    this_00 = *(void **)(DAT_007fb248 + 4 +
                        ((int)DAT_007fb246 * (int)sVar1 + (int)DAT_007fb240 * (int)sVar2 +
                        (int)sVar3) * 8);
    if ((this_00 != (void *)0x0) && (*(int *)((int)this_00 + 0x20) == 0xbe)) {
      thunk_FUN_0062f6c0(this_00,param_1);
    }
  }
  return;
}

