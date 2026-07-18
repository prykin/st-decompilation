
int __cdecl
FUN_00753f10(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 *puVar1;
  int _Value;
  undefined4 extraout_ECX;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  puVar3 = &stack0xfffffffc;
  uVar2 = thunk_FUN_006a3be0(0xc1d2);
  puVar1 = (undefined4 *)uVar2;
  if (puVar1 == (undefined4 *)0x0) {
    _Value = -2;
  }
  else {
    *puVar1 = param_1;
    puVar1[3] = param_4;
    puVar1[1] = param_2;
    puVar1[6] = param_2;
    puVar1[4] = param_5;
    puVar1[7] = param_5;
    puVar1[2] = param_3;
    puVar1[8] = param_3 + 1;
    puVar1[5] = param_6;
    puVar1[9] = param_6;
    puVar1[0xf] = 0;
    FUN_00754185(extraout_ECX,(int)((ulonglong)uVar2 >> 0x20));
    _Value = puVar1[0xf];
    thunk_FUN_006a4950(*(undefined4 **)(puVar3 + -4));
  }
  if ((_Value < 0) && (DAT_00858df8 != 0)) {
                    /* WARNING: Subroutine does not return */
    _longjmp((int *)(DAT_00858df8 + 4),_Value);
  }
  return _Value;
}

