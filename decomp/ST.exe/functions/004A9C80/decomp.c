
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a9c80(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 local_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  if (param_1 == 0) {
    uVar2 = DAT_0080743c & 0xff;
    if (uVar2 == 0) {
      return;
    }
    if (uVar2 == 1) {
      _DAT_00807438 = 0x3f800000;
    }
    else if (uVar2 == 2) {
      _DAT_00807438 = 0x3fc00000;
      cVar1 = (char)DAT_0080743c + -1;
      goto LAB_004a9cfb;
    }
    cVar1 = (char)DAT_0080743c + -1;
  }
  else {
    uVar2 = DAT_0080743c & 0xff;
    if (uVar2 == 0) {
      _DAT_00807438 = 0x3fc00000;
    }
    else if (uVar2 == 1) {
      _DAT_00807438 = 0x40200000;
    }
    else if (uVar2 == 2) {
      return;
    }
    cVar1 = (char)DAT_0080743c + '\x01';
  }
/* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
LAB_004a9cfb:
  DAT_0080743c = CONCAT31(DAT_0080743c._1_3_,cVar1);
  thunk_FUN_004a9990();
  local_18 = 0xf;
  local_14 = 0x109;
  local_10 = 0;
  (*g_playSystem_00802A38->vtable->SendMessage)
            ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,(int)local_24);
  return;
}

