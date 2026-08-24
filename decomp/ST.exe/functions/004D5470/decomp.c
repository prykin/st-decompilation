#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004d5470(int param_1)

{
  int iVar2;
  uint uVar3;
  int iVar1;
  uint *puVar4;
  int iVar5;

  iVar2 = thunk_FUN_0041c710((AnonShape_0041C710_C4D46939 *)param_1);
  if (iVar2 == 0) {
    iVar2 = 0;
    uVar3 = thunk_FUN_004ad650((STT3DSprC *)(param_1 + 0x1d5));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    Library::Ourlib::ST3DSMAP::SprSetVisible(*(void **)(param_1 + 0x211),uVar3,iVar2);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(STT3DSprC **)(param_1 + 0x35c) != nullptr) {
      iVar2 = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar3 = thunk_FUN_004ad650(*(STT3DSprC **)(param_1 + 0x35c));
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      Library::Ourlib::ST3DSMAP::SprSetVisible(*(void **)(param_1 + 0x211),uVar3,iVar2);
    }
    puVar4 = (undefined4 *)(param_1 + 0x350);
    iVar2 = 3;
    do {
      if ((STT3DSprC *)*puVar4 != nullptr) {
        iVar5 = 0;
        uVar3 = thunk_FUN_004ad650((STT3DSprC *)*puVar4);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        Library::Ourlib::ST3DSMAP::SprSetVisible(*(void **)(param_1 + 0x211),uVar3,iVar5);
      }
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar1 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)param_1);
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 1;
    uVar3 = thunk_FUN_004ad650((STT3DSprC *)(param_1 + 0x1d5));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    Library::Ourlib::ST3DSMAP::SprSetVisible(*(void **)(param_1 + 0x211),uVar3,iVar2);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(STT3DSprC **)(param_1 + 0x35c) != nullptr) {
      iVar2 = 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar3 = thunk_FUN_004ad650(*(STT3DSprC **)(param_1 + 0x35c));
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      Library::Ourlib::ST3DSMAP::SprSetVisible(*(void **)(param_1 + 0x211),uVar3,iVar2);
    }
    puVar4 = (undefined4 *)(param_1 + 0x350);
    iVar2 = 3;
    do {
      if ((STT3DSprC *)*puVar4 != nullptr) {
        iVar5 = 1;
        uVar3 = thunk_FUN_004ad650((STT3DSprC *)*puVar4);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        Library::Ourlib::ST3DSMAP::SprSetVisible(*(void **)(param_1 + 0x211),uVar3,iVar5);
      }
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 1;
  }
  iVar5 = thunk_FUN_004ad650((STT3DSprC *)(param_1 + 0x1d5));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  FUN_006e6870(*(void **)(param_1 + 0x211),iVar5,iVar2);
  return 0;
}

