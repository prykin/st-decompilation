
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004F5690 -> 006B4FE0 @ 004F572B; data at 0080679C | 004F5690 -> 006B4FE0 @ 004F593D;
   data at 0080679C | 004F5690 -> 006B4FE0 @ 004F5FF9; data at 0080679C | 00511AB0 -> 006B4FE0 @
   00511B28; /HelpPanelTy+0x1dc | 0051FBA0 -> 006B4FE0 @ 0051FC1E; data at 0080679C | 005219E0 ->
   006B4FE0 @ 00521A74; return of cMf32::RecGet | 0052BF00 -> 006B4FE0 @ 0052C0D9; data at 0080679C
   | 0052BF00 -> 006B4FE0 @ 0052C155; data at 0080679C | 0052BF00 -> 006B4FE0 @ 0052C1CF; data at
   0080679C | 0052BF00 -> 006B4FE0 @ 0052C249; data at 0080679C | 0052DD20 -> 006B4FE0 @ 0052DDAF;
   data at 0080679C | 0052E5E0 -> 006B4FE0 @ 0052E738; /OptPanelTy+0x184 | 005381B0 -> 006B4FE0 @
   005381F4; data at 0080679C | 00543600 -> 006B4FE0 @ 005436EE; return of cMf32::RecGet | 0056F250
   -> 006B4FE0 @ 0056F505; data at 0080679C | 005CBD00 -> 006B4FE0 @ 005CBDD5; /StartSystemTy+0x2f0
   | 005D7A50 -> 006B4FE0 @ 005D7B05; /StartSystemTy+0x2c | 005D7A50 -> 006B4FE0 @ 005D7B79;
   /StartSystemTy+0x2c | 005D7A50 -> 006B4FE0 @ 005D7BEA; /StartSystemTy+0x2c | 006BC360 -> 006B4FE0
   @ 006BC369; FUN_006bc360 parameter param_1 */

int FUN_006b4fe0(ushort *param_1)

{
  ushort uVar1;
  int iVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
    uVar1 = param_1[7];
    if ((uVar1 != 0) && (uVar1 < 9)) {
      iVar2 = 1 << ((byte)uVar1 & 0x1f);
    }
  }
  return iVar2;
}

