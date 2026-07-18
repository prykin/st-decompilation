
void __thiscall thunk_FUN_00555040(void *this,undefined4 param_1,uint param_2,char *param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  DWORD DVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *pvVar10;
  uint *puVar11;
  void *unaff_EDI;
  uint *puVar12;
  char *pcVar13;
  uint auStack_450 [256];
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  uint uStack_c;
  void *pvStack_8;
  
  pvStack_8 = this;
  thunk_FUN_00555570((int)this);
  if (*(int *)((int)this + 0x3c) < -1) {
    return;
  }
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  iVar3 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  pvVar10 = pvStack_8;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_50;
    iVar6 = FUN_006ad4d0(s_E____titans_grig_loading_cpp_007c8f0c,0x14a,0,iVar3,&DAT_007a4ccc);
    if (iVar6 == 0) {
      FUN_006a5e40(iVar3,0,0x7c8f0c,0x14b);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  switch(param_1) {
  case 0:
    pcVar5 = (char *)FUN_006b0140(0x267a,DAT_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    puVar11 = (uint *)(pcVar13 + -uVar8);
    puVar12 = auStack_450;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar12 = (char)*puVar11;
      puVar11 = (uint *)((int)puVar11 + 1);
      puVar12 = (uint *)((int)puVar12 + 1);
    }
    pcVar5 = (char *)FUN_006b0140(0x267e,DAT_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar3 = -1;
    puVar11 = auStack_450;
    do {
      puVar12 = puVar11;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      puVar12 = (uint *)((int)puVar11 + 1);
      uVar9 = *puVar11;
      puVar11 = puVar12;
    } while ((char)uVar9 != '\0');
    pcVar5 = pcVar13 + -uVar8;
    pcVar13 = (char *)((int)puVar12 + -1);
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar13 = pcVar13 + 1;
    }
    thunk_FUN_00554ad0(pvStack_8,auStack_450);
    DAT_00858df8 = (undefined4 *)uStack_50;
    return;
  case 1:
    pcVar5 = (char *)FUN_006b0140(0x267a,DAT_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    puVar11 = (uint *)(pcVar13 + -uVar8);
    puVar12 = auStack_450;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar12 = (char)*puVar11;
      puVar11 = (uint *)((int)puVar11 + 1);
      puVar12 = (uint *)((int)puVar12 + 1);
    }
    pcVar5 = (char *)FUN_006b0140(0x267b,DAT_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar3 = -1;
    puVar11 = auStack_450;
    do {
      puVar12 = puVar11;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      puVar12 = (uint *)((int)puVar11 + 1);
      uVar9 = *puVar11;
      puVar11 = puVar12;
    } while ((char)uVar9 != '\0');
    pcVar5 = pcVar13 + -uVar8;
    pcVar13 = (char *)((int)puVar12 + -1);
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; pvVar10 = pvStack_8, uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar13 = pcVar13 + 1;
    }
    if (*(int *)((int)pvStack_8 + 0x3c) == 0) {
      uVar8 = *(uint *)((int)pvStack_8 + 0x40);
      if (uVar8 < param_2) {
        param_2 = uVar8;
      }
    }
    else {
      DVar4 = timeGetTime();
      uVar8 = *(uint *)((int)pvVar10 + 0x40);
      param_2 = DVar4 - *(int *)((int)pvVar10 + 0x44);
      if (uVar8 < param_2) {
        param_2 = uVar8;
      }
    }
    if (param_2 == 0) {
      param_2 = 1;
    }
    uVar8 = (param_2 * 100) / uVar8;
    if (uVar8 != *(uint *)((int)pvVar10 + 0x50)) {
      if (0 < (int)uVar8) {
        uStack_c = uVar8;
        do {
          uVar9 = 0xffffffff;
          pcVar5 = &DAT_007c8fec;
          do {
            pcVar13 = pcVar5;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar13 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar13;
          } while (cVar1 != '\0');
          uVar9 = ~uVar9;
          iVar3 = -1;
          puVar11 = auStack_450;
          do {
            puVar12 = puVar11;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            puVar12 = (uint *)((int)puVar11 + 1);
            uVar7 = *puVar11;
            puVar11 = puVar12;
          } while ((char)uVar7 != '\0');
          pcVar5 = pcVar13 + -uVar9;
          pcVar13 = (char *)((int)puVar12 + -1);
          for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar13 = pcVar13 + 4;
          }
          uVar7 = uStack_c - 1;
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar13 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar13 = pcVar13 + 1;
          }
          uStack_c = uVar7;
          pvVar10 = pvStack_8;
        } while (uVar7 != 0);
      }
      thunk_FUN_00554ad0(pvVar10,auStack_450);
      *(uint *)((int)pvVar10 + 0x50) = uVar8;
      DAT_00858df8 = (undefined4 *)uStack_50;
      return;
    }
    if (*(code **)((int)pvVar10 + 0x58) != (code *)0x0) {
      (**(code **)((int)pvVar10 + 0x58))(*(undefined4 *)((int)pvVar10 + 0x54));
      DAT_00858df8 = (undefined4 *)uStack_50;
      return;
    }
    break;
  case 2:
    *(undefined4 *)((int)pvStack_8 + 0x3c) = 0xffffffff;
    pcVar5 = (char *)FUN_006b0140(0x267a,DAT_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    puVar11 = (uint *)(pcVar13 + -uVar8);
    puVar12 = auStack_450;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar12 = (char)*puVar11;
      puVar11 = (uint *)((int)puVar11 + 1);
      puVar12 = (uint *)((int)puVar12 + 1);
    }
    pcVar5 = (char *)FUN_006b0140(0x267c,DAT_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar3 = -1;
    puVar11 = auStack_450;
    do {
      puVar12 = puVar11;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      puVar12 = (uint *)((int)puVar11 + 1);
      uVar9 = *puVar11;
      puVar11 = puVar12;
    } while ((char)uVar9 != '\0');
    pcVar5 = pcVar13 + -uVar8;
    pcVar13 = (char *)((int)puVar12 + -1);
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar13 = pcVar13 + 1;
    }
    goto joined_r0x00555393;
  case 3:
    *(undefined4 *)((int)pvStack_8 + 0x3c) = 0xffffffff;
    pcVar5 = (char *)FUN_006b0140(0x267a,DAT_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    puVar11 = (uint *)(pcVar13 + -uVar8);
    puVar12 = auStack_450;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar12 = (char)*puVar11;
      puVar11 = (uint *)((int)puVar11 + 1);
      puVar12 = (uint *)((int)puVar12 + 1);
    }
    pcVar5 = (char *)FUN_006b0140(0x267d,DAT_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar3 = -1;
    puVar11 = auStack_450;
    do {
      puVar12 = puVar11;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      puVar12 = (uint *)((int)puVar11 + 1);
      uVar9 = *puVar11;
      puVar11 = puVar12;
    } while ((char)uVar9 != '\0');
    pcVar5 = pcVar13 + -uVar8;
    pcVar13 = (char *)((int)puVar12 + -1);
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar13 = pcVar13 + 1;
    }
joined_r0x00555393:
    if (param_3 != (char *)0x0) {
      uVar8 = 0xffffffff;
      do {
        pcVar5 = param_3;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar5 = param_3 + 1;
        cVar1 = *param_3;
        param_3 = pcVar5;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar3 = -1;
      puVar11 = auStack_450;
      do {
        puVar12 = puVar11;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        puVar12 = (uint *)((int)puVar11 + 1);
        uVar9 = *puVar11;
        puVar11 = puVar12;
      } while ((char)uVar9 != '\0');
      pcVar5 = pcVar5 + -uVar8;
      pcVar13 = (char *)((int)puVar12 + -1);
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    thunk_FUN_00554c80(pvVar10,auStack_450);
    DAT_00858df8 = (undefined4 *)uStack_50;
    return;
  default:
    if (*(code **)((int)pvStack_8 + 0x58) != (code *)0x0) {
      (**(code **)((int)pvStack_8 + 0x58))(*(undefined4 *)((int)pvStack_8 + 0x54));
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  return;
}

