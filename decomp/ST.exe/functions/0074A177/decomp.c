
undefined4 __fastcall FUN_0074a177(int *param_1)

{
  if ((AnonShape_0074F0D8_3A9DA5F1 *)param_1[0x14] != (AnonShape_0074F0D8_3A9DA5F1 *)0x0) {
    FUN_0074f0d8((AnonShape_0074F0D8_3A9DA5F1 *)param_1[0x14]);
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_1 + 0x28))(1);
  return 0;
}

