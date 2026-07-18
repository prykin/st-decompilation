
undefined4 __cdecl FUN_006a4f20(int param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  BOOL BVar5;
  
  if ((DAT_007ec178 & 4) != 0) {
    iVar3 = thunk_FUN_006a5210();
    if (iVar3 == 0) {
      iVar3 = FUN_00730fa0(2,0x7ec1d0,0x50e,0,(byte *)s__CrtCheckMemory___007ec2bc);
      if (iVar3 == 1) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
  }
  BVar5 = thunk_FUN_006a5620(param_1);
  if (BVar5 == 0) {
    iVar3 = FUN_00730fa0(2,0x7ec1d0,0x517,0,(byte *)s__CrtIsValidHeapPointer_pUserData_007ec688);
    if (iVar3 == 1) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar1 = *(uint *)(param_1 + -0xc);
  if (((((uVar1 & 0xffff) != 4) && (uVar1 != 1)) && ((uVar1 & 0xffff) != 2)) && (uVar1 != 3)) {
    iVar3 = FUN_00730fa0(2,0x7ec1d0,0x51d,0,(byte *)s__BLOCK_TYPE_IS_VALID_pHead_>nBlo_007ec658);
    if (iVar3 == 1) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  iVar3 = *(int *)(param_1 + -0xc);
  if ((iVar3 == 2) && (param_2 == 1)) {
    param_2 = 2;
  }
  if ((iVar3 != 3) && (iVar3 != param_2)) {
    iVar3 = FUN_00730fa0(2,0x7ec1d0,0x524,0,(byte *)s_pHead_>nBlockUse____nBlockUse_007ec634);
    if (iVar3 == 1) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return *(undefined4 *)(param_1 + -0x10);
}

