
undefined4 * __fastcall FUN_00604080(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_004158e0(param_1);
  *param_1 = &STExplosionVTable;
  *(undefined4 *)((int)param_1 + 0x215) = 0;
  puVar2 = (undefined4 *)((int)param_1 + 0x219);
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x269) = 0;
  *(undefined1 *)((int)param_1 + 0x26d) = 0;
  *(undefined4 *)((int)param_1 + 0x26e) = *(undefined4 *)(DAT_00802a38 + 0xe4);
  puVar2 = (undefined4 *)((int)param_1 + 0x282);
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  *(undefined4 *)((int)param_1 + 0x2af) = 0;
  *(undefined4 *)((int)param_1 + 0x2b3) = 0;
  *(undefined4 *)((int)param_1 + 699) = 0;
  *(undefined4 *)((int)param_1 + 0x2b7) = 0xffffffff;
  return param_1;
}

