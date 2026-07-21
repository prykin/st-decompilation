
/* WARNING: Removing unreachable block (ram,0x0056ed8b) */

void __fastcall FUN_0056ebe0(int param_1)

{
  char cVar1;
  uint *puVar2;
  DArrayTy *array;
  DArrayTy *array_00;
  DArrayTy *array_01;
  DArrayTy *pDVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  int local_8;
  
  if (*(AnonShape_006B5570_4D68B99C **)(param_1 + 0x4eab) != (AnonShape_006B5570_4D68B99C *)0x0) {
    FUN_006b5570(*(AnonShape_006B5570_4D68B99C **)(param_1 + 0x4eab));
  }
  if (*(AnonShape_006B5570_4D68B99C **)(param_1 + 0x4ea7) != (AnonShape_006B5570_4D68B99C *)0x0) {
    FUN_006b5570(*(AnonShape_006B5570_4D68B99C **)(param_1 + 0x4ea7));
  }
  if ((*(int *)(*(int *)(param_1 + 0x4ee6) + 0xc) == 0) ||
     (iVar6 = *(int *)(*(int *)(param_1 + 0x4ee6) + 0x1c), iVar6 == 0)) {
    *(undefined4 *)(param_1 + 0x233c) = 1;
    puVar8 = (undefined4 *)(param_1 + 0x2340);
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x233c) = *(undefined4 *)(iVar6 + 0x90);
    uVar4 = 0xffffffff;
    pcVar7 = (char *)(iVar6 + 0x4c);
    do {
      pcVar9 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar9 + -uVar4;
    pcVar9 = (char *)(param_1 + 0x2340);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    puVar2 = Library::Ourlib::MFSARR::mfSarLoad(g_cMf32_0080675C,(char *)(iVar6 + 0x70),0);
    *(uint **)(param_1 + 0x4eab) = puVar2;
  }
  puVar2 = Library::Ourlib::MFSARR::mfSarLoad(g_cMf32_0080675C,PTR_s_DESCRIPTION_0079b074,0);
  *(uint **)(param_1 + 0x4ea7) = puVar2;
  if (puVar2 == (uint *)0x0) {
    puVar2 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    *(uint **)(param_1 + 0x4ea7) = puVar2;
  }
  if (*(int *)(param_1 + 0x4eab) == 0) {
    puVar2 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    *(uint **)(param_1 + 0x4eab) = puVar2;
  }
  array = (DArrayTy *)CreateOpponentList(g_cMf32_0080675C,1,*(uint *)(param_1 + 0x233c));
  array_00 = (DArrayTy *)CreateOpponentList(g_cMf32_0080675C,2,*(uint *)(param_1 + 0x233c));
  array_01 = (DArrayTy *)CreateOpponentList(g_cMf32_0080675C,3,*(uint *)(param_1 + 0x233c));
  pcVar7 = (char *)(param_1 + 0x11a7);
  local_8 = 8;
  do {
    uVar4 = 0xffffffff;
    pcVar9 = &DAT_008016a0;
    do {
      pcVar10 = pcVar9;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar9 = pcVar10 + -uVar4;
    pcVar10 = pcVar7 + 1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    if ((pcVar7[0x22] != -1) && (*pcVar7 == '\x01')) {
      pDVar3 = array;
      if ((pcVar7[0x21] != '\x01') && (pDVar3 = array_00, pcVar7[0x21] != '\x02')) {
        pDVar3 = array_01;
      }
      if ((pDVar3 == (DArrayTy *)0x0) || (pDVar3->count == 0)) {
        pcVar9 = &DAT_008016a0;
      }
      else {
        pcVar9 = (char *)((int)pDVar3->data + 0x4c);
      }
      uVar4 = 0xffffffff;
      do {
        pcVar10 = pcVar9;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar10 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar9 = pcVar10 + -uVar4;
      pcVar10 = pcVar7 + 1;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
    pcVar7 = pcVar7 + 0x51;
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      if (array != (DArrayTy *)0x0) {
        DArrayDestroy(array);
      }
      if (array_00 != (DArrayTy *)0x0) {
        DArrayDestroy(array_00);
      }
      if (array_01 != (DArrayTy *)0x0) {
        DArrayDestroy(array_01);
      }
      return;
    }
  } while( true );
}

