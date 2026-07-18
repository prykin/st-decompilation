
/* WARNING: Removing unreachable block (ram,0x0056ed8b) */

void __fastcall FUN_0056ebe0(int param_1)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char *pcVar12;
  int local_8;
  
  if (*(byte **)(param_1 + 0x4eab) != (byte *)0x0) {
    FUN_006b5570(*(byte **)(param_1 + 0x4eab));
  }
  if (*(byte **)(param_1 + 0x4ea7) != (byte *)0x0) {
    FUN_006b5570(*(byte **)(param_1 + 0x4ea7));
  }
  if ((*(int *)(*(int *)(param_1 + 0x4ee6) + 0xc) == 0) ||
     (iVar8 = *(int *)(*(int *)(param_1 + 0x4ee6) + 0x1c), iVar8 == 0)) {
    *(undefined4 *)(param_1 + 0x233c) = 1;
    puVar10 = (undefined4 *)(param_1 + 0x2340);
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x233c) = *(undefined4 *)(iVar8 + 0x90);
    uVar6 = 0xffffffff;
    pcVar9 = (char *)(iVar8 + 0x4c);
    do {
      pcVar11 = pcVar9;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar9 = pcVar11 + -uVar6;
    pcVar11 = (char *)(param_1 + 0x2340);
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    puVar2 = FUN_0071aa10(DAT_0080675c,(char *)(iVar8 + 0x70),0);
    *(uint **)(param_1 + 0x4eab) = puVar2;
  }
  puVar2 = FUN_0071aa10(DAT_0080675c,PTR_s_DESCRIPTION_0079b074,0);
  *(uint **)(param_1 + 0x4ea7) = puVar2;
  if (puVar2 == (uint *)0x0) {
    puVar2 = FUN_006b54f0((uint *)0x0,10,10);
    *(uint **)(param_1 + 0x4ea7) = puVar2;
  }
  if (*(int *)(param_1 + 0x4eab) == 0) {
    puVar2 = FUN_006b54f0((uint *)0x0,10,10);
    *(uint **)(param_1 + 0x4eab) = puVar2;
  }
  puVar2 = thunk_FUN_0067dfd0(DAT_0080675c,1,*(uint *)(param_1 + 0x233c));
  puVar3 = thunk_FUN_0067dfd0(DAT_0080675c,2,*(uint *)(param_1 + 0x233c));
  puVar4 = thunk_FUN_0067dfd0(DAT_0080675c,3,*(uint *)(param_1 + 0x233c));
  pcVar9 = (char *)(param_1 + 0x11a7);
  local_8 = 8;
  do {
    uVar6 = 0xffffffff;
    pcVar11 = &DAT_008016a0;
    do {
      pcVar12 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar11 = pcVar12 + -uVar6;
    pcVar12 = pcVar9 + 1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar12 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar12 + 1;
    }
    if ((pcVar9[0x22] != -1) && (*pcVar9 == '\x01')) {
      puVar5 = puVar2;
      if ((pcVar9[0x21] != '\x01') && (puVar5 = puVar3, pcVar9[0x21] != '\x02')) {
        puVar5 = puVar4;
      }
      if ((puVar5 == (uint *)0x0) || (puVar5[3] == 0)) {
        pcVar11 = &DAT_008016a0;
      }
      else {
        pcVar11 = (char *)(puVar5[7] + 0x4c);
      }
      uVar6 = 0xffffffff;
      do {
        pcVar12 = pcVar11;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar11 = pcVar12 + -uVar6;
      pcVar12 = pcVar9 + 1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar12 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar12 = pcVar12 + 1;
      }
    }
    pcVar9 = pcVar9 + 0x51;
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      if (puVar2 != (uint *)0x0) {
        FUN_006ae110((byte *)puVar2);
      }
      if (puVar3 != (uint *)0x0) {
        FUN_006ae110((byte *)puVar3);
      }
      if (puVar4 != (uint *)0x0) {
        FUN_006ae110((byte *)puVar4);
      }
      return;
    }
  } while( true );
}

