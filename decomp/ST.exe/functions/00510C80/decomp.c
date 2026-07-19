
undefined4 * __fastcall FUN_00510c80(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_006e5fb0(param_1);
  param_1[0x17] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 3;
  param_1[0x1a] = 0;
  *(undefined2 *)((int)param_1 + 0x172) = 2;
  param_1[0x5e] = 0;
  *param_1 = &HelpPanelTyVTable;
  param_1[0x10] = 500;
  param_1[0x12] = 400;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)((int)param_1 + 0x1a2) = 0;
  *(undefined1 *)((int)param_1 + 0x1a1) = 0;
  *(undefined4 *)((int)param_1 + 0x1a7) = 0;
  *(undefined4 *)((int)param_1 + 0x1a3) = 0;
  param_1[0x77] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x86] = 0;
  param_1[0x7b] = 0;
  puVar3 = param_1 + 0x7c;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x5f] = 0;
  puVar3 = param_1 + 0x60;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x67] = 0;
  *(undefined4 *)((int)param_1 + 0x1cb) = 0;
  *(undefined4 *)((int)param_1 + 0x1bb) = 0;
  *(undefined4 *)((int)param_1 + 0x1b3) = 0;
  uVar1 = *(undefined4 *)structHelp_exref;
  *(undefined4 *)((int)param_1 + 0x1cf) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x1c7) = uVar1;
  *(undefined4 *)((int)param_1 + 0x1bf) = 0;
  *(undefined4 *)((int)param_1 + 0x1b7) = 0;
  *(undefined4 *)((int)param_1 + 0x1d7) = 0;
  *(undefined1 *)((int)param_1 + 0x1db) = 0;
  param_1[0x93] = 0;
  param_1[0x87] = 0;
  param_1[0x8e] = 0;
  param_1[0x92] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)((int)param_1 + 0x1d3) = 0;
  return param_1;
}

