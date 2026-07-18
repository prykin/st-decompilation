
int __cdecl thunk_FUN_00552f50(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  int iVar3;
  void *unaff_EDI;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_8 = 0;
  if (param_1 < 0) {
    return 0;
  }
  uStack_54 = DAT_00858df8;
  DAT_00858df8 = &uStack_54;
  iVar1 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    iVar1 = param_1 * 2 + 1;
    iStack_8 = FUN_006aac70(iVar1 * iVar1);
    iStack_10 = 0;
    iStack_c = 0;
    if (0 < iVar1) {
      do {
        iVar3 = 0;
        do {
          iVar2 = FUN_006aced8(param_1,param_1,iVar3,iStack_c);
          *(bool *)(iStack_10 + iStack_8) = iVar2 <= param_1;
          iStack_10 = iStack_10 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar1);
        iStack_c = iStack_c + 1;
      } while (iStack_c < iVar1);
    }
    DAT_00858df8 = (undefined4 *)uStack_54;
    return iStack_8;
  }
  DAT_00858df8 = (undefined4 *)uStack_54;
  if (iStack_8 == 0) {
    FUN_006ab060(&iStack_8);
  }
  return iStack_8;
}

