
/* WARNING: Removing unreachable block (ram,0x006aad6b) */
/* WARNING: Removing unreachable block (ram,0x006aad47) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006aad10(void)

{
  int *piVar1;
  uint uVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  byte in_ID;
  uint local_c;
  int local_8;

  local_8 = 0;
  local_c = 0;
  DAT_00858de0 = 0;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uVar2 = (uint)(in_ID & 1) * 0x200000 ^ 0x200000;
  if (uVar2 == (uint)(uVar2 != 0) * 0x200000) {
    piVar1 = (int *)cpuid_basic_info(0);
    if ((((*piVar1 != 0) && (piVar1[1] == 0x756e6547)) && (piVar1[2] == 0x49656e69)) &&
       (piVar1[3] == 0x6c65746e)) {
      piVar1 = (int *)cpuid_Version_info(1);
      local_8 = *piVar1;
      local_c = piVar1[2];
    }
  }
  DAT_00858e24 = local_8 >> 8 & 0xf;
  _DAT_00858e28 = local_8 >> 4 & 0xf;
  if (DAT_00858e24 == 6) {
    if (2 < _DAT_00858e28) {
      DAT_00858de0 = 2;
    }
    if (_DAT_00858e28 == 7) {
      DAT_00858de0 = DAT_00858de0 | 4;
    }
  }
  if ((local_c & 0x800000) != 0) {
    DAT_00858de0 = DAT_00858de0 | 1;
  }
  return;
}

