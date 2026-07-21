
undefined4 __fastcall FUN_004d5470(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;

  iVar1 = thunk_FUN_0041c710(param_1);
  if (iVar1 == 0) {
    iVar1 = 0;
    uVar2 = thunk_FUN_004ad650(param_1 + 0x1d5);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    FUN_006eabf0(*(void **)(param_1 + 0x211),uVar2,iVar1);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(param_1 + 0x35c) != 0) {
      iVar1 = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar2 = thunk_FUN_004ad650(*(int *)(param_1 + 0x35c));
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      FUN_006eabf0(*(void **)(param_1 + 0x211),uVar2,iVar1);
    }
    piVar3 = (int *)(param_1 + 0x350);
    iVar1 = 3;
    do {
      if (*piVar3 != 0) {
        iVar4 = 0;
        uVar2 = thunk_FUN_004ad650(*piVar3);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        FUN_006eabf0(*(void **)(param_1 + 0x211),uVar2,iVar4);
      }
      piVar3 = piVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 1;
    uVar2 = thunk_FUN_004ad650(param_1 + 0x1d5);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    FUN_006eabf0(*(void **)(param_1 + 0x211),uVar2,iVar1);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(param_1 + 0x35c) != 0) {
      iVar1 = 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar2 = thunk_FUN_004ad650(*(int *)(param_1 + 0x35c));
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      FUN_006eabf0(*(void **)(param_1 + 0x211),uVar2,iVar1);
    }
    piVar3 = (int *)(param_1 + 0x350);
    iVar1 = 3;
    do {
      if (*piVar3 != 0) {
        iVar4 = 1;
        uVar2 = thunk_FUN_004ad650(*piVar3);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        FUN_006eabf0(*(void **)(param_1 + 0x211),uVar2,iVar4);
      }
      piVar3 = piVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 1;
  }
  iVar4 = thunk_FUN_004ad650(param_1 + 0x1d5);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  FUN_006e6870(*(void **)(param_1 + 0x211),iVar4,iVar1);
  return 0;
}

