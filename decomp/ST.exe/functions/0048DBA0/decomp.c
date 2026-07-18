
void __fastcall FUN_0048dba0(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  void *this;
  
  if ((*(int *)(param_1 + 0x45d) == 4) || (*(int *)(param_1 + 0x459) == 0x68)) {
    sVar1 = *(short *)(param_1 + 0x554);
    sVar2 = *(short *)(param_1 + 0x558);
    sVar3 = *(short *)(param_1 + 0x556);
    if (((-1 < sVar1) && (((sVar1 < DAT_007fb240 && (-1 < sVar3)) && (sVar3 < DAT_007fb242)))) &&
       ((-1 < sVar2 && (sVar2 < DAT_007fb244)))) {
      this = *(void **)(DAT_007fb248 +
                       ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 + (int)sVar1
                       ) * 8);
      if ((this != (void *)0x0) && (*(int *)((int)this + 0x18) == *(int *)(param_1 + 0x55a))) {
        thunk_FUN_004e22a0(this,*(int *)(param_1 + 0x568),*(int *)(param_1 + 0x18));
        thunk_FUN_004e2000(this,*(int *)(param_1 + 0x568),*(int *)(param_1 + 0x18));
      }
    }
  }
  return;
}

