
undefined4 * FUN_004ad790(uint *param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  char *pcVar10;
  char *pcVar11;
  void *unaff_EDI;
  undefined4 local_60;
  undefined4 local_5c [16];
  char *local_1c;
  void *local_18;
  undefined4 *local_14;
  int local_10;
  char *local_c;
  int local_8;
  
  local_60 = DAT_00858df8;
  DAT_00858df8 = &local_60;
  iVar3 = __setjmp3(local_5c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_60;
    iVar3 = FUN_006ad4d0(s_E____titans_wlad_Tspr3d_cpp_007ac638,0x3da,0,iVar3,&DAT_007a4ccc);
    if (iVar3 == 0) {
      return (undefined4 *)0x0;
    }
    pcVar2 = (code *)swi(3);
    puVar6 = (undefined4 *)(*pcVar2)();
    return puVar6;
  }
  iVar3 = 0;
  *param_1 = (*(int *)((int)local_18 + 0x14) + 1) * 0x24;
  if (0 < *(int *)((int)local_18 + 0x14)) {
    local_c = (char *)0x0;
    do {
      iVar4 = thunk_FUN_004acd30(local_18,(char)iVar3);
      uVar9 = *param_1 + iVar4 * 4;
      *param_1 = uVar9;
      pcVar10 = *(char **)((int)local_c + 8 + *(int *)((int)local_18 + 0x20));
      if (pcVar10 == (char *)0x0) {
        *param_1 = uVar9 + 1;
      }
      else {
        uVar7 = 0xffffffff;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        *param_1 = ~uVar7 + uVar9;
      }
      iVar3 = iVar3 + 1;
      local_c = (char *)((int)local_c + 0x24);
    } while (iVar3 < *(int *)((int)local_18 + 0x14));
  }
  local_14 = (undefined4 *)FUN_006aac70(*param_1);
  uVar9 = *param_1;
  puVar6 = local_14;
  for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  pcVar10 = (char *)(local_14 + 9);
  *local_14 = *(undefined4 *)((int)local_18 + 4);
  local_14[1] = *(undefined4 *)((int)local_18 + 8);
  *(undefined1 *)(local_14 + 2) = *(undefined1 *)((int)local_18 + 0x10);
  *(undefined1 *)((int)local_14 + 9) = *(undefined1 *)((int)local_18 + 0x11);
  *(undefined1 *)((int)local_14 + 10) = *(undefined1 *)((int)local_18 + 0x12);
  *(undefined4 *)((int)local_14 + 0xb) = *(undefined4 *)((int)local_18 + 0xc);
  *(undefined4 *)((int)local_14 + 0xf) = *(undefined4 *)((int)local_18 + 0x14);
  *(undefined4 *)((int)local_14 + 0x13) = *(undefined4 *)((int)local_18 + 0x24);
  *(undefined4 *)((int)local_14 + 0x17) = *(undefined4 *)((int)local_18 + 0x28);
  *(undefined4 *)((int)local_14 + 0x1b) = *(undefined4 *)((int)local_18 + 0x2c);
  *(undefined1 *)((int)local_14 + 0x1f) = *(undefined1 *)((int)local_18 + 0x13);
  local_14[8] = *(undefined4 *)((int)local_18 + 0x30);
  local_8 = 0;
  if (0 < *(int *)((int)local_18 + 0x14)) {
    iVar3 = 0;
    pcVar11 = pcVar10;
    local_c = pcVar10;
    do {
      uVar5 = thunk_FUN_004acd30(local_18,(char)local_8);
      *(undefined4 *)pcVar11 = uVar5;
      pcVar10 = pcVar11 + 0x24;
      pcVar11[4] = *(char *)(iVar3 + 0xc + *(int *)((int)local_18 + 0x20));
      pcVar11[5] = (byte)(*(uint *)((int)local_18 + 0x1c) >> ((byte)local_8 & 0x1f)) & 1;
      pcVar11[6] = *(byte *)(iVar3 + 0xe + *(int *)((int)local_18 + 0x20)) & 1;
      pcVar11[7] = *(char *)(iVar3 + 0xd + *(int *)((int)local_18 + 0x20));
      pcVar11[8] = *(byte *)(iVar3 + 0xe + *(int *)((int)local_18 + 0x20)) >> 1 & 1;
      pcVar11[9] = (byte)((ushort)*(undefined2 *)(iVar3 + 0xe + *(int *)((int)local_18 + 0x20)) >> 9
                         ) & 1;
      pcVar11[10] = *(byte *)(iVar3 + 0xe + *(int *)((int)local_18 + 0x20)) >> 2 & 1;
      *(undefined4 *)(pcVar11 + 0xb) =
           *(undefined4 *)(iVar3 + 0x10 + *(int *)((int)local_18 + 0x20));
      *(undefined4 *)(pcVar11 + 0xf) =
           *(undefined4 *)(iVar3 + 0x14 + *(int *)((int)local_18 + 0x20));
      *(undefined4 *)(pcVar11 + 0x13) =
           *(undefined4 *)(iVar3 + 0x18 + *(int *)((int)local_18 + 0x20));
      *(undefined4 *)(pcVar11 + 0x17) =
           *(undefined4 *)(iVar3 + 0x1c + *(int *)((int)local_18 + 0x20));
      *(undefined4 *)(pcVar11 + 0x1b) =
           *(undefined4 *)(iVar3 + 0x20 + *(int *)((int)local_18 + 0x20));
      pcVar11[0x1f] = *(byte *)(iVar3 + 0xe + *(int *)((int)local_18 + 0x20)) >> 5 & 1;
      pcVar11[0x20] = *(byte *)(iVar3 + 0xe + *(int *)((int)local_18 + 0x20)) >> 6 & 1;
      pcVar11[0x21] = *(byte *)(iVar3 + 0xe + *(int *)((int)local_18 + 0x20)) >> 7;
      pcVar11[0x22] = *(byte *)(iVar3 + 0xe + *(int *)((int)local_18 + 0x20)) >> 3 & 1;
      local_8 = local_8 + 1;
      pcVar11[0x23] = *(byte *)(iVar3 + 0xf + *(int *)((int)local_18 + 0x20)) & 1;
      iVar3 = iVar3 + 0x24;
      pcVar11 = pcVar10;
    } while (local_8 < *(int *)((int)local_18 + 0x14));
  }
  local_8 = 0;
  local_c = pcVar10;
  if (0 < *(int *)((int)local_18 + 0x14)) {
    local_10 = 0;
    do {
      local_1c = *(char **)(*(int *)((int)local_18 + 0x20) + 8 + local_10);
      if (local_1c == (char *)0x0) {
        uVar9 = 1;
      }
      else {
        uVar9 = 0xffffffff;
        pcVar10 = local_1c;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        uVar7 = 0xffffffff;
        pcVar10 = local_1c;
        do {
          pcVar11 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar10 = pcVar11 + -uVar7;
        pcVar11 = local_c;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
      }
      local_c = local_c + uVar9;
      local_8 = local_8 + 1;
      local_10 = local_10 + 0x24;
    } while (local_8 < *(int *)((int)local_18 + 0x14));
  }
  local_8 = 0;
  if (0 < *(int *)((int)local_18 + 0x14)) {
    local_10 = 0;
    do {
      pcVar10 = local_c;
      uVar9 = thunk_FUN_004acd30(local_18,(char)local_8);
      pcVar11 = *(char **)(*(int *)((int)local_18 + 0x20) + 4 + local_10);
      for (uVar7 = uVar9 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar10 = pcVar10 + 4;
      }
      local_10 = local_10 + 0x24;
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pcVar10 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar10 = pcVar10 + 1;
      }
      local_c = local_c + uVar9 * 4;
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)((int)local_18 + 0x14));
  }
  DAT_00858df8 = (undefined4 *)local_60;
  return local_14;
}

