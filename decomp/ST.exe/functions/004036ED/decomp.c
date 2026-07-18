
undefined4 __thiscall thunk_FUN_00695010(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_14;
  uint uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(param_3 + 4);
  uStack_8 = 0xffffffff;
  iStack_c = 0;
  do {
    iVar1 = iVar1 + -1;
    iVar2 = iStack_c;
    if (iVar1 < 0) break;
    iVar3 = thunk_FUN_006a20e0(*(int **)((int)this + 8),param_1,param_2,iVar1,0xff);
    iVar2 = iVar1;
  } while (iVar3 == 0);
  iStack_c = iVar2;
  thunk_FUN_006a1370(*(int **)((int)this + 8),param_1,param_2,iStack_c,&uStack_14);
  if (((uStack_10 & 0x2000) != 0) || (uVar4 = 6, (short)uStack_10 == 0x1100)) {
    uVar4 = uStack_8;
  }
  if ((uStack_10 & 0x4000) != 0) {
    uVar4 = 0x7110;
  }
  if (iStack_c == 0) {
    uVar4 = 1;
  }
  else if ((0 < iStack_c) && (iStack_c < 5)) {
    return 9;
  }
  return uVar4;
}

