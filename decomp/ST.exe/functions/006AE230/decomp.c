
undefined4 FUN_006ae230(uint *param_1)

{
  void *pvVar1;

  pvVar1 = Library::DKW::LIB::MemRealloc
                     ((AnonPointee_TLOBaseTy_0607 *)param_1[7],
                      (param_1[4] + param_1[5]) * param_1[2]);
  if (pvVar1 == (void *)0x0) {
    return 0xfffffffe;
  }
  if ((*param_1 & 0x100) != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)param_1[6])(pvVar1,param_1[4],param_1[5]);
  }
  param_1[7] = (uint)pvVar1;
  param_1[4] = param_1[4] + param_1[5];
  return 0;
}

