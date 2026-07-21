
int FUN_004e6fe0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_10;
  int local_c;
  int local_8;

  uVar4 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if ((-1 < param_1) && (param_1 < 8)) {
    uVar1 = GetPlayerRaceId((char)param_1);
    uVar3 = 0;
    do {
      if ((&PTR_DAT_007bfc04)[(uVar1 & 0xff) - 1] + uVar3 != (undefined *)0x0) {
        iVar2 = thunk_FUN_004e60d0(param_1,uVar4);
        /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
        if ((int)(uint)*(byte *)(uVar4 + 0x7f555b + param_1 * 0xa62) <= iVar2) {
          local_c = local_c + 1;
        }
        iVar2 = thunk_FUN_004e5910(param_1,uVar4);
        if (iVar2 != 0) {
          local_8 = local_8 + 1;
        }
      }
      uVar3 = uVar3 + 0x9b;
      uVar4 = uVar4 + 1;
    } while (uVar3 < 0x5dd9);
    if (local_8 != 0) {
      local_8 = (local_c * 100) / local_8;
      if (local_8 < 0x65) {
        return local_8;
      }
      local_10 = 100;
    }
    return local_10;
  }
  return 0;
}

