#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004d0670(int param_1)

{
  char cVar1;
  int iVar3;
  int iVar2;
  uint uVar4;
  uint uVar5;
  char *pcVar6;

  uVar5 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1 + 0x4d0) == 3) || (*(int *)(param_1 + 0x4d0) == 2)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(*(int *)(param_1 + 0x1f5) + 0x154) < *(int *)(*(int *)(param_1 + 0x1f5) + 0x158)) {
      iVar3 = thunk_FUN_004ac910((void *)(param_1 + 0x1d5),'\t');
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (iVar3 < *(int *)(*(int *)(param_1 + 0x1f5) + 0x154) + 2) {
        return 0;
      }
    }
    else {
      iVar3 = thunk_FUN_004ac910((void *)(param_1 + 0x1d5),'\t');
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(*(int *)(param_1 + 0x1f5) + 0x154) + -2 < iVar3) {
        return 0;
      }
    }
    iVar2 = thunk_FUN_004ab050();
    uVar4 = 0;
    switch(iVar2) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 0:
      uVar5 = *(uint *)(&DAT_007a90b8 + *(int *)(param_1 + 0x369) * 0x10);
      uVar4 = DAT_007a9438;
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 1:
      uVar5 = *(uint *)(&DAT_007a90bc + *(int *)(param_1 + 0x369) * 0x10);
      uVar4 = DAT_007a943c;
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 2:
      uVar5 = *(uint *)(&DAT_007a90c0 + *(int *)(param_1 + 0x369) * 0x10);
      uVar4 = DAT_007a9440;
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 3:
      uVar5 = *(uint *)(&DAT_007a90c4 + *(int *)(param_1 + 0x369) * 0x10);
      uVar4 = DAT_007a9444;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_004abce0(*(void **)(param_1 + 0x5ff),0xe,uVar5,uVar5,'\0');
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_004abce0(*(void **)(param_1 + 0x5ff),0xc,uVar5,uVar5,'\0');
    /* ST_CALLSITE[004D0781]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    STT3DSprC::SetCurFase(*(STT3DSprC **)(param_1 + 0x5ff),'\x0e',uVar5);
    /* ST_CALLSITE[004D078F]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    STT3DSprC::SetCurFase(*(STT3DSprC **)(param_1 + 0x5ff),'\f',uVar5);
    /* ST_CALLSITE[004D07A8]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    STT3DSprC::StartShow(*(STT3DSprC **)(param_1 + 0x5ff),0xe,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[004D07C2]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    STT3DSprC::StartShow(*(STT3DSprC **)(param_1 + 0x5ff),0xc,g_playSystem_00802A38->field_00E4);
    iVar3 = -1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pcVar6 = (char *)((int)&DAT_007a9440 + *(int *)(param_1 + 0x369) * 6 + 2);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (iVar3 != -2) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      thunk_FUN_004abce0(*(void **)(param_1 + 0x5ff),0xd,uVar4,uVar4,'\0');
      /* ST_CALLSITE[004D07FC]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STT3DSprC::SetCurFase(*(STT3DSprC **)(param_1 + 0x5ff),'\r',uVar4);
      /* ST_CALLSITE[004D0816]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STT3DSprC::StartShow(*(STT3DSprC **)(param_1 + 0x5ff),0xd,g_playSystem_00802A38->field_00E4);
    }
  }
  return 0;
}

