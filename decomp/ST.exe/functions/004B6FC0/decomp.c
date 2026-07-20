
undefined4 FUN_004b6fc0(char param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = &g_playerRuntime[param_1].field2110_0x97a;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,0xc,0x14);
  *(uint **)&g_playerRuntime[param_1].field_0x992 = puVar1;
  return 0;
}

