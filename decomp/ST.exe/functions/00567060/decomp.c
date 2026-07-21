
uint __fastcall FUN_00567060(int param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  InternalExceptionFrame local_54;
  uint local_10;
  uint local_c;
  uint local_8;

  local_10 = 0;
  FUN_007193f0();
  uVar3 = DAT_00807300 & 0xff;
  if (uVar3 == 2) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(param_1 + 0xf8f) != 0) {
      bVar2 = FUN_00719650((MCIDEVICEID *)(param_1 + 0xf8f));
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      return CONCAT31(extraout_var,bVar2);
    }
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  else if (((uVar3 == 4) || (uVar3 == 8)) && (*(int *)(param_1 + 0xf8b) != 0)) {
    local_c = 0;
    local_8 = local_8 & 0xffffff00;
    do {
      local_54.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_54;
      iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
      if (iVar4 == 0) {
        FUN_006c1f00(local_8 & 0xff,&local_c,(uint *)0x0);
      }
      g_currentExceptionFrame = local_54.previous;
      if (local_c == 1) {
        local_10 = 1;
      }
      bVar1 = (char)local_8 + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8 = CONCAT31(local_8._1_3_,bVar1);
    } while (bVar1 < 2);
    return local_10;
  }
  return 0;
}

