
void __cdecl FUN_006a5080(int param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  BOOL BVar3;
  int iVar4;
  
  BVar3 = thunk_FUN_006a5620(param_1);
  if (BVar3 != 0) {
    uVar1 = *(uint *)(param_1 + -0xc);
    if (((((uVar1 & 0xffff) != 4) && (uVar1 != 1)) && ((uVar1 & 0xffff) != 2)) && (uVar1 != 3)) {
      iVar4 = FUN_00730fa0(2,0x7ec1d0,0x565,0,(byte *)s__BLOCK_TYPE_IS_VALID_pHead_>nBlo_007ec658);
      if (iVar4 == 1) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)(param_1 + -0xc) = param_2;
  }
  return;
}

