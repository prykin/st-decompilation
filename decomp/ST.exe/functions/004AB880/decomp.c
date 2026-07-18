
undefined4 FUN_004ab880(byte param_1,int *param_2,byte *param_3,byte param_4)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 unaff_ESI;
  byte *pbVar13;
  void *unaff_EDI;
  byte *pbVar14;
  undefined4 local_58;
  undefined4 local_54 [16];
  uint local_14;
  int local_c;
  int local_8;
  
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar3 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_58;
    iVar3 = FUN_006ad4d0(s_E____titans_wlad_Tspr3d_cpp_007ac638,0x3b,0,iVar3,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return uVar7;
    }
    return 0xffffffff;
  }
  if (*(int *)(local_c + 0x18) == -1) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0x22);
  }
  if (((char)param_1 < '\0') || (*(int *)(local_c + 0x14) + -1 < (int)(char)param_1)) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0x23);
  }
  local_14 = (uint)(char)param_1;
  iVar3 = local_14 * 0x24;
  local_8 = iVar3;
  if (*(int *)(*(int *)(local_c + 0x20) + iVar3) != 0) {
    iVar4 = thunk_FUN_004abb30(param_1);
    if (iVar4 != 0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0x24);
    }
  }
  puVar5 = FUN_00709af0(param_2,param_4,param_3,0xffffffff,0,1,0,(undefined4 *)0x0);
  *(ushort **)(*(int *)(local_c + 0x20) + iVar3) = puVar5;
  iVar4 = **(int **)(*(int *)(local_c + 0x20) + iVar3);
  iVar6 = FUN_006aac70(iVar4 * 4);
  *(int *)(*(int *)(local_c + 0x20) + 4 + iVar3) = iVar6;
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      piVar8 = (int *)(*(int *)(local_c + 0x20) + iVar3);
      iVar6 = iVar6 + 1;
      *(undefined4 *)(piVar8[1] + -4 + iVar6 * 4) = *(undefined4 *)(*piVar8 + 0x2d + iVar6 * 4);
    } while (iVar6 < iVar4);
  }
  uVar9 = 0xffffffff;
  pbVar13 = param_3;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    bVar1 = *pbVar13;
    pbVar13 = pbVar13 + 1;
  } while (bVar1 != 0);
  iVar4 = FUN_006aac70(~uVar9);
  uVar9 = local_14;
  *(int *)(*(int *)(local_c + 0x20) + 8 + iVar3) = iVar4;
  uVar10 = 0xffffffff;
  do {
    pbVar13 = param_3;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pbVar13 = param_3 + 1;
    bVar1 = *param_3;
    param_3 = pbVar13;
  } while (bVar1 != 0);
  uVar10 = ~uVar10;
  pbVar13 = pbVar13 + -uVar10;
  pbVar14 = *(byte **)(*(int *)(local_c + 0x20) + 8 + local_8);
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pbVar14 = *(undefined4 *)pbVar13;
    pbVar13 = pbVar13 + 4;
    pbVar14 = pbVar14 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pbVar14 = *pbVar13;
    pbVar13 = pbVar13 + 1;
    pbVar14 = pbVar14 + 1;
  }
  *(byte *)(*(int *)(local_c + 0x20) + 0xc + local_8) = param_4;
  *(undefined4 *)(*(int *)(local_c + 0x20) + 0x18 + local_8) = 0;
  *(undefined4 *)(*(int *)(local_c + 0x20) + 0x10 + local_8) = 0;
  puVar12 = (undefined4 *)(*(int *)(local_c + 0x20) + local_8);
  puVar12[5] = *(int *)*puVar12 + -1;
  *(undefined4 *)(*(int *)(local_c + 0x20) + 0x20 + local_8) = 0;
  puVar12 = *(undefined4 **)(*(int *)(local_c + 0x20) + local_8);
  FUN_006e98e0(*(void **)(local_c + 0x3c),*(uint *)(local_c + 0x18),local_14,*puVar12,
               *(int *)((int)puVar12 + 0x21),0);
  puVar5 = (ushort *)(*(int *)(local_c + 0x20) + 0xe + local_8);
  *puVar5 = *puVar5 & 0xfe37;
  pbVar13 = (byte *)(*(int *)(local_c + 0x20) + 0xe + local_8);
  *pbVar13 = *pbVar13 | 0x20;
  *(uint *)(local_c + 0x1c) = *(uint *)(local_c + 0x1c) & ~(1 << ((byte)uVar9 & 0x1f));
  DAT_00858df8 = (undefined4 *)local_58;
  return 0;
}

