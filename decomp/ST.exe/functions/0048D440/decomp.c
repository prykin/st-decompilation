
bool __fastcall FUN_0048d440(int param_1)

{
  undefined4 in_EAX;
  void *this;
  int iVar1;
  int iVar2;
  
  this = (void *)thunk_FUN_0042b760(CONCAT31((int3)((uint)param_1 >> 8),
                                             *(undefined1 *)(param_1 + 0x24)),
                                    CONCAT22((short)((uint)in_EAX >> 0x10),
                                             *(undefined2 *)(param_1 + 0x30)));
  if (*(int *)(param_1 + 0x4a1) == -1) {
    if (*(int *)(param_1 + 0x4ab) != -1) {
      return (bool)((*(int *)(param_1 + 0x7da) + *(int *)(param_1 + 0x7d6) +
                     *(int *)(param_1 + 0x7d2) < 1) - 1U & 7);
    }
    return false;
  }
  if (*(int *)(param_1 + 0x4ab) == -1) {
    return *(int *)(param_1 + 0x7da) + *(int *)(param_1 + 0x7d6) + *(int *)(param_1 + 0x7d2) < 0x28;
  }
  iVar1 = thunk_FUN_0040bc90(this,(uint)*(ushort *)(param_1 + 0x32),
                             (short *)(int)*(short *)(param_1 + 0x49b),
                             (short *)(int)*(short *)(param_1 + 0x49d),
                             (short *)(*(short *)(param_1 + 0x49f) + 1),'\0');
  iVar2 = thunk_FUN_0040bc90(this,(uint)*(ushort *)(param_1 + 0x32),
                             (short *)(int)*(short *)(param_1 + 0x4a5),
                             (short *)(int)*(short *)(param_1 + 0x4a7),
                             (short *)(*(short *)(param_1 + 0x4a9) + 1),'\0');
  if (iVar1 != -4) {
    if (iVar2 == -4) {
      return *(int *)(param_1 + 0x7da) + *(int *)(param_1 + 0x7d6) + *(int *)(param_1 + 0x7d2) <
             0x28;
    }
    return (bool)(((((*(int *)(param_1 + 0x7da) + *(int *)(param_1 + 0x7d6) +
                     *(int *)(param_1 + 0x7d2)) * 100) / 0x28 <=
                   100 - (iVar1 * 100) / (iVar2 + iVar1)) - 1U & 6) + 1);
  }
  if (iVar2 != -4) {
    return (bool)((*(int *)(param_1 + 0x7da) + *(int *)(param_1 + 0x7d6) + *(int *)(param_1 + 0x7d2)
                  < 1) - 1U & 7);
  }
  return false;
}

