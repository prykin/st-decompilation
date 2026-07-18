
undefined4 __cdecl FUN_0072ea90(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if ((param_1[3] & 0x40U) == 0) {
    if ((param_1 == (int *)0x0) &&
       (iVar2 = FUN_00730fa0(2,0x79fe44,0x77,0,(byte *)"str != NULL"), iVar2 == 1)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    if ((param_1[3] & 0x83U) != 0) {
      local_8 = FUN_00733dc0(param_1);
      FUN_00737200(param_1);
      iVar2 = FUN_00737110(param_1[4]);
      if (iVar2 < 0) {
        local_8 = 0xffffffff;
      }
      else if (param_1[7] != 0) {
        thunk_FUN_006a49c0((undefined4 *)param_1[7],2);
        param_1[7] = 0;
      }
    }
    param_1[3] = 0;
  }
  else {
    param_1[3] = 0;
    local_8 = 0xffffffff;
  }
  return local_8;
}

