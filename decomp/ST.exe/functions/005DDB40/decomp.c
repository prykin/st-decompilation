#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_005ddb40(int param_1)

{
  char cVar1;
  StartSystemTy *pSVar2;
  bool bVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar4;
  uint uVar5;
  uint uVar6;
  DArrayTy *pDVar7;
  char *pcVar8;
  char *pcVar9;
  char local_460 [64];
  char local_420 [1044];
  char *local_c;
  StartSystemTy *local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(*(int *)(param_1 + 0x686) + 8) < 1) {
    pcVar8 = nullptr;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pcVar8 = (char *)**(undefined4 **)(*(int *)(param_1 + 0x686) + 0x14);
  }
  local_8 = (StartSystemTy *)param_1;
  bVar3 = thunk_FUN_00571810(pcVar8);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (CONCAT31(extraout_var,bVar3) == 0) {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  pDVar7 = *(DArrayTy **)(param_1 + 0x696);
  pcVar8 = local_460;
  for (iVar4 = 0x114; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + 4;
  }
  *pcVar8 = '\0';
  iVar4 = 0;
  if (0 < (int)pDVar7->elementSize) {
    do {
      uVar5 = 0xffffffff;
      local_c = local_460;
      pcVar8 = &DAT_008016a0;
      do {
        pcVar9 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar8 = pcVar9 + -uVar5;
      pcVar9 = local_c;
      memmove(pcVar9, pcVar8, uVar5); /* compiler REP MOVS byte copy */
      uVar6 = 0;
      if (iVar4 < (int)pDVar7->elementSize) {
        pcVar8 = *(char **)(pDVar7->growCapacity + iVar4 * 4);
      }
      else {
        pcVar8 = nullptr;
      }
      uVar5 = 0xffffffff;
      do {
        pcVar9 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar8 = pcVar9 + -uVar5;
      pcVar9 = local_420;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; pSVar2 = local_8, uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      StartSystemTy::AddToChat(local_8,(int)local_460);
      pDVar7 = pSVar2->field_0696;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)pDVar7->elementSize);
  }
  return 1;
}

