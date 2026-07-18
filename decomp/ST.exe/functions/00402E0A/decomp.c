
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall thunk_FUN_00630000(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  int *piVar2;
  int iStack_8;
  
  piVar2 = (int *)((int)this + 0x1e5);
  iStack_8 = 5;
  do {
    if (*piVar2 != 0) {
      iVar1 = thunk_FUN_0062ffd0(param_1,*(int *)(*piVar2 + 0x1c));
      *(int *)(*piVar2 + 0x2c) = iVar1;
      this_00 = *(void **)(*piVar2 + 0x10);
      if (this_00 != (void *)0x0) {
        thunk_FUN_004abe40(this_00,'\x0e',*(undefined4 *)(*piVar2 + 0x2c));
        thunk_FUN_004ac040('\x0e');
        iVar1 = *piVar2;
        thunk_FUN_004ad3c0(this_00,(float)*(int *)(iVar1 + 0x20) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(iVar1 + 0x24) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(iVar1 + 0x28) * _DAT_007904f8 * _DAT_007904f0 +
                           _DAT_007904fc);
      }
    }
    piVar2 = piVar2 + 1;
    iStack_8 = iStack_8 + -1;
  } while (iStack_8 != 0);
  return;
}

