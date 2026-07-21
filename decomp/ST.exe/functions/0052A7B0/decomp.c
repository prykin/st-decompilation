
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=005522A0 @ 005524FB
   -> PUSH PUSH EAX */

int __cdecl FUN_0052a7b0(AnonShape_0052A7B0_DD603BF4 *param_1)

{
  AnonNested_0052A7B0_0014_0177A204 *pAVar1;
  int iVar2;
  uint local_8;

  local_8 = 0;
  iVar2 = 8;
  pAVar1 = param_1->field_0014;
  switch(pAVar1->field_0000) {
  case 1:
    iVar2 = 0;
    break;
  case 2:
    iVar2 = 2;
    break;
  case 3:
    iVar2 = 4;
    break;
  case 4:
    iVar2 = 0xe;
    break;
  case 5:
    iVar2 = 6;
  }
  switch(pAVar1->field_0004) {
  case 0:
  case 2:
    return iVar2;
  case 1:
    return iVar2 + 1;
  case 3:
    local_8 = (uint)(pAVar1->field_0008 != 0);
  }
  return local_8 + iVar2;
}

