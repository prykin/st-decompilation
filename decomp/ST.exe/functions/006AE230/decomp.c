
undefined4 FUN_006ae230(uint *param_1)

{
  uint uVar1;

  uVar1 = Library::DKW::LIB::FUN_006acf50(param_1[7],(param_1[4] + param_1[5]) * param_1[2]);
  if (uVar1 == 0) {
    return 0xfffffffe;
  }
  if ((*param_1 & 0x100) != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)param_1[6])(uVar1,param_1[4],param_1[5]);
  }
  param_1[7] = uVar1;
  param_1[4] = param_1[4] + param_1[5];
  return 0;
}

