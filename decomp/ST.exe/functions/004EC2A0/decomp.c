#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004ec2a0(int param_1)

{
  int iVar2;
  int iVar1;
  uint uVar3;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((*(uint *)(param_1 + 0x1f1) & 0x4000) != 0) &&
     (((iVar2 = *(int *)(param_1 + 0x4d0), iVar2 == 3 || (iVar2 == 4)) || (iVar2 == 5)))) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(*(int *)(param_1 + 0x1f5) + 0x154) < *(int *)(*(int *)(param_1 + 0x1f5) + 0x158)) {
      iVar2 = thunk_FUN_004ac910((void *)(param_1 + 0x1d5),'\t');
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (iVar2 < *(int *)(*(int *)(param_1 + 0x1f5) + 0x154) + 2) {
        return 0;
      }
    }
    else {
      iVar2 = thunk_FUN_004ac910((void *)(param_1 + 0x1d5),'\t');
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(*(int *)(param_1 + 0x1f5) + 0x154) + -2 < iVar2) {
        return 0;
      }
    }
    iVar1 = thunk_FUN_004ab050();
    uVar3 = 0;
    switch(iVar1) {
    case 0:
      uVar3 = DAT_0079aa90;
      break;
    case 1:
      uVar3 = DAT_0079aa94;
      break;
    case 2:
      uVar3 = DAT_0079aa98;
      break;
    case 3:
      uVar3 = DAT_0079aa9c;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_004abce0(*(void **)(param_1 + 0x5ff),0xe,uVar3,uVar3,'\0');
    /* ST_CALLSITE[004EC371]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    STT3DSprC::SetCurFase(*(STT3DSprC **)(param_1 + 0x5ff),'\x0e',uVar3);
    /* ST_CALLSITE[004EC38B]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    STT3DSprC::StartShow(*(STT3DSprC **)(param_1 + 0x5ff),0xe,g_playSystem_00802A38->field_00E4);
  }
  return 0;
}

