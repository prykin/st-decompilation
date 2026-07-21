
/* WARNING: Removing unreachable block (ram,0x00483fc6) */

undefined4 __fastcall FUN_00483f10(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = STAllPlayersC::IsTorpLive
                    (g_sTAllPlayers_007FA174,*(short *)(param_1 + 0x46f),*(int *)(param_1 + 0x471));
  if (iVar2 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = *(int *)(param_1 + 0x46b);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar3 = (int)*(short *)(param_1 + 0x45) - (int)*(short *)(iVar2 + 0x45);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar4 = (int)*(short *)(param_1 + 0x43) - (int)*(short *)(iVar2 + 0x43);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar5 = (int)*(short *)(param_1 + 0x41) - (int)*(short *)(iVar2 + 0x41);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar1 = *(uint *)(param_1 + 0x810);
    lVar6 = Library::MSVCRT::__allmul(uVar5,(int)uVar5 >> 0x1f,uVar5,(int)uVar5 >> 0x1f);
    lVar7 = Library::MSVCRT::__allmul(uVar4,(int)uVar4 >> 0x1f,uVar4,(int)uVar4 >> 0x1f);
    lVar8 = Library::MSVCRT::__allmul(uVar3,(int)uVar3 >> 0x1f,uVar3,(int)uVar3 >> 0x1f);
    lVar9 = Library::MSVCRT::__allmul(uVar1,(int)uVar1 >> 0x1f,uVar1,(int)uVar1 >> 0x1f);
    if (lVar9 < lVar7 + lVar6 + lVar8) {
      return 0;
    }
  }
  return 1;
}

