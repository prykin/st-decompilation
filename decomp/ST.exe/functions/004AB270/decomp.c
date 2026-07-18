
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ab270(int param_1)

{
  if ((-1 < param_1) && (param_1 < 10)) {
    *(undefined4 *)(&DAT_00807465 + param_1 * 0x19) = DAT_008073d0;
    *(undefined4 *)(&DAT_00807469 + param_1 * 0x19) = _DAT_008073d4;
    *(undefined4 *)(&DAT_0080746d + param_1 * 0x19) = DAT_008073d8;
    *(undefined4 *)(&DAT_00807471 + param_1 * 0x19) = DAT_008073dc;
    *(undefined4 *)(&DAT_00807475 + param_1 * 0x19) = DAT_008073fc;
    (&DAT_00807479)[param_1 * 0x19] = (undefined1)DAT_0080743c;
    *(undefined4 *)(&DAT_0080747a + param_1 * 0x19) = 1;
  }
  return;
}

