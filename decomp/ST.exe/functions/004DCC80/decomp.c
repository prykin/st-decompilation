
undefined4 __fastcall FUN_004dcc80(int param_1)

{
  int iVar1;
  STJellyGunC *local_8;

  local_8 = nullptr;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(AnonShape_005EFAE0_B406B78B **)(param_1 + 0x4ec) != nullptr) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = STPlaySystemC::sub_006E62D0
                      (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)(param_1 + 0x4ec),
                       (int *)&local_8);
    if (iVar1 == 0) {
      thunk_FUN_00617880(local_8);
    }
    *(undefined4 *)(param_1 + 0x4ec) = 0;
  }
  return 0;
}

