
void __cdecl FUN_0072e2b0(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    if (((((param_1[-3] & 0xffff) != 4) && (param_1[-3] != 1)) && ((param_1[-3] & 0xffff) != 2)) &&
       ((param_1[-3] != 3 &&
        (iVar2 = FUN_00730fa0(2,0x79fde8,0x2f,0,(byte *)s__BLOCK_TYPE_IS_VALID_pHead_>nBlo_007ec658)
        , iVar2 == 1)))) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_006a49c0(param_1,param_1[-3]);
  }
  return;
}

