
void __cdecl FUN_006a5560(undefined *param_1,undefined4 param_2)

{
  undefined4 *puVar1;

  puVar1 = DAT_0085496c;
  if ((DAT_007ec178 & 1) != 0) {
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      if ((puVar1[5] & 0xffff) == 4) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)param_1)(puVar1 + 8,param_2);
      }
    }
  }
  return;
}

