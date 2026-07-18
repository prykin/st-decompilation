
void thunk_FUN_004d8190(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (DAT_007fa13c != 0) {
    lVar3 = FUN_006b12cc(DAT_007fa140);
    lVar4 = FUN_006b12cc(DAT_007fa13c);
    iVar1 = FUN_006b12a8((int)lVar3,(int)lVar4);
    iVar2 = FUN_006b1280(iVar1);
    if (iVar2 < 0x1c2) {
      iVar1 = FUN_006b12dc(iVar1,iVar1);
      lVar3 = FUN_006b12cc(0x19);
      iVar1 = FUN_006b12dc((int)lVar3,iVar1);
      iVar1 = FUN_006b1280(iVar1);
      DAT_007fa144 = iVar1 << 1;
      return;
    }
  }
  DAT_007fa144 = 0xfffffff;
  return;
}

