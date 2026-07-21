#include "../../pseudocode_runtime.h"


/* WARNING: Removing unreachable block (ram,0x0056ed8b) */

void __fastcall FUN_0056ebe0(int param_1)

{
  char cVar1;
  uint *puVar2;
  DArrayTy *pDVar3;
  DArrayTy *array;
  DArrayTy *array_00;
  DArrayTy *pDVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar10;
  char *pcVar11;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(AnonShape_006B5570_4D68B99C **)(param_1 + 0x4eab) != (AnonShape_006B5570_4D68B99C *)0x0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    FUN_006b5570(*(AnonShape_006B5570_4D68B99C **)(param_1 + 0x4eab));
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(AnonShape_006B5570_4D68B99C **)(param_1 + 0x4ea7) != (AnonShape_006B5570_4D68B99C *)0x0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    FUN_006b5570(*(AnonShape_006B5570_4D68B99C **)(param_1 + 0x4ea7));
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(*(int *)(param_1 + 0x4ee6) + 0xc) == 0) ||
     (iVar7 = *(int *)(*(int *)(param_1 + 0x4ee6) + 0x1c), iVar7 == 0)) {
    *(undefined4 *)(param_1 + 0x233c) = 1;
    memset((void *)(param_1 + 0x2340), 0, 0x20); /* compiler bulk-zero initialization */
    iVar7 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x233c) = *(undefined4 *)(iVar7 + 0x90);
    uVar5 = 0xffffffff;
    pcVar8 = (char *)(iVar7 + 0x4c);
    do {
      pcVar10 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar10 + -uVar5;
    pcVar10 = (char *)(param_1 + 0x2340);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    puVar2 = Library::Ourlib::MFSARR::mfSarLoad(g_cMf32_0080675C,(char *)(iVar7 + 0x70),0);
    *(uint **)(param_1 + 0x4eab) = puVar2;
  }
  puVar2 = Library::Ourlib::MFSARR::mfSarLoad(g_cMf32_0080675C,PTR_s_DESCRIPTION_0079b074,0);
  *(uint **)(param_1 + 0x4ea7) = puVar2;
  if (puVar2 == (uint *)0x0) {
    pDVar3 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    *(DArrayTy **)(param_1 + 0x4ea7) = pDVar3;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x4eab) == 0) {
    pDVar3 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    *(DArrayTy **)(param_1 + 0x4eab) = pDVar3;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  pDVar3 = (DArrayTy *)CreateOpponentList(g_cMf32_0080675C,1,*(uint *)(param_1 + 0x233c));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  array = (DArrayTy *)CreateOpponentList(g_cMf32_0080675C,2,*(uint *)(param_1 + 0x233c));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  array_00 = (DArrayTy *)CreateOpponentList(g_cMf32_0080675C,3,*(uint *)(param_1 + 0x233c));
  pcVar8 = (char *)(param_1 + 0x11a7);
  local_8 = 8;
  do {
    uVar5 = 0xffffffff;
    pcVar10 = &DAT_008016a0;
    do {
      pcVar11 = pcVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar10 = pcVar11 + -uVar5;
    pcVar11 = pcVar8 + 1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    if ((pcVar8[0x22] != -1) && (*pcVar8 == '\x01')) {
      pDVar4 = pDVar3;
      if ((pcVar8[0x21] != '\x01') && (pDVar4 = array, pcVar8[0x21] != '\x02')) {
        pDVar4 = array_00;
      }
      if ((pDVar4 == (DArrayTy *)0x0) || (pDVar4->count == 0)) {
        pcVar10 = &DAT_008016a0;
      }
      else {
        pcVar10 = (char *)((int)pDVar4->data + 0x4c);
      }
      uVar5 = 0xffffffff;
      do {
        pcVar11 = pcVar10;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar10 = pcVar11 + -uVar5;
      pcVar11 = pcVar8 + 1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
    }
    pcVar8 = pcVar8 + 0x51;
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      if (pDVar3 != (DArrayTy *)0x0) {
        DArrayDestroy(pDVar3);
      }
      if (array != (DArrayTy *)0x0) {
        DArrayDestroy(array);
      }
      if (array_00 != (DArrayTy *)0x0) {
        DArrayDestroy(array_00);
      }
      return;
    }
  } while( true );
}

