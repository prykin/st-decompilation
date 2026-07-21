
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=00413AF0 @ 004143AC
   -> MOV MOV [0x007f4d08],EAX | 0055DEE0 @ 0055E040 -> MOV MOV dword ptr [EBP + -0x38],EAX */

int FUN_006ad0b0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  uVar3 = param_3 - param_1 >> 0x1f;
  iVar2 = (param_3 - param_1 ^ uVar3) - uVar3;
  uVar3 = param_4 - param_2 >> 0x1f;
  iVar1 = (param_4 - param_2 ^ uVar3) - uVar3;
  if ((iVar2 == 0) && (iVar1 == 0)) {
    return 0x7f;
  }
  if (param_2 <= param_4) {
    if (param_3 < param_1) {
      if (iVar1 * 2 <= iVar2) {
        return 4;
      }
      return (iVar2 * 2 <= iVar1) + 5;
    }
    if (iVar1 * 2 <= iVar2) {
      return 0;
    }
    return (iVar1 < iVar2 * 2) + 6;
  }
  if (param_3 < param_1) {
    if (iVar1 * 2 <= iVar2) {
      return 4;
    }
    return (iVar1 < iVar2 * 2) + 2;
  }
  if (iVar1 * 2 <= iVar2) {
    return 0;
  }
  return (iVar2 * 2 <= iVar1) + 1;
}

