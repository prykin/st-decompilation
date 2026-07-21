
undefined4 * __fastcall FUN_00691570(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_8;

  puVar3 = param_1 + 0x654;
  puVar2 = param_1;
  for (iVar1 = 0x438; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x438;
  for (iVar1 = 0x168; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x5a0;
  for (iVar1 = 0xb4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x6c2;
  local_8 = 3;
  do {
    *puVar3 = 0;
    puVar2[-1] = 0;
    puVar3 = puVar3 + 0x92;
    puVar4 = puVar2;
    for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puVar4 = puVar2 + -0x6d;
    for (iVar1 = 0x48; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puVar4 = puVar2 + -0x25;
    for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puVar2 = puVar2 + 0x92;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  puVar3 = param_1 + 0x80a;
  for (iVar1 = 0x2d0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = param_1 + 0xada;
  for (iVar1 = 0x2d0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}

