
undefined4 __thiscall FUN_00660420(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_1c [6];
  
  *(undefined4 *)((int)this + 0xa7) = 0;
  puVar3 = local_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_1c[0] = 0;
  local_1c[2] = param_1;
  if ((*(short *)((int)this + 0x7d) != -2) && (DAT_007fa174 != 0)) {
    piVar1 = (int *)thunk_FUN_0042b760(CONCAT31((int3)((uint)this >> 8),
                                                *(undefined1 *)((int)this + 0x24)),
                                       CONCAT22((short)((uint)param_1 >> 0x10),
                                                *(short *)((int)this + 0x7d)));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(2,local_1c);
      return 0;
    }
  }
  return 0xffffffff;
}

