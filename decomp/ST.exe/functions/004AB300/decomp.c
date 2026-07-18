
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ab300(int param_1)

{
  int iVar1;
  
  if (param_1 < 0) {
    return;
  }
  if (9 < param_1) {
    return;
  }
  if (*(int *)(&DAT_0080747a + param_1 * 0x19) == 0) {
    return;
  }
  thunk_FUN_0054b540(DAT_00802a30);
  DAT_008073d0 = *(undefined4 *)(&DAT_00807465 + param_1 * 0x19);
  _DAT_008073d4 = *(undefined4 *)(&DAT_00807469 + param_1 * 0x19);
  DAT_008073d8 = *(int *)(&DAT_0080746d + param_1 * 0x19);
  DAT_008073dc = *(int *)(&DAT_00807471 + param_1 * 0x19);
  DAT_008073fc = *(int *)(&DAT_00807475 + param_1 * 0x19);
  thunk_FUN_004a8f20(1);
  switch((DAT_0080743c & 0xff) - (uint)(byte)(&DAT_00807479)[param_1 * 0x19]) {
  case 0:
    thunk_FUN_004a9990();
    goto switchD_004ab3a0_default;
  case 2:
    thunk_FUN_004a9c80(0);
  case 1:
    iVar1 = 0;
    break;
  case 0xfffffffe:
    thunk_FUN_004a9c80(1);
  case 0xffffffff:
    iVar1 = 1;
    break;
  default:
    goto switchD_004ab3a0_default;
  }
  thunk_FUN_004a9c80(iVar1);
switchD_004ab3a0_default:
  thunk_FUN_00567510(&DAT_00807658,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
  return;
}

