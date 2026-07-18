
undefined4 __fastcall thunk_FUN_00490d90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x6f7);
  if (((((iVar1 == 8) || (iVar1 == 0x14)) || (iVar1 == 0x1a)) ||
      ((((iVar1 == 7 || (iVar1 == 0x13)) || ((iVar1 == 0x1b || ((iVar1 == 0xc || (iVar1 == 0x18)))))
        ) || (iVar1 == 0x19)))) ||
     (((iVar1 == 9 || (iVar1 == 0x15)) || (uVar2 = 1, *(int *)(param_1 + 0x73e) != 1)))) {
    uVar2 = 0;
  }
  return uVar2;
}

