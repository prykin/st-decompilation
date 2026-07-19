
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl thunk_FUN_006a2ed0(short *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int *piVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  int iStack00000008;
  int iStack_18;
  int *piStack_14;
  short *psStack_8;
  
  psStack_8 = (short *)0x0;
  puVar6 = FUN_006b04d0(0x4f2);
  if (puVar6 == (undefined4 *)0x0) {
    piStack_14 = (int *)0x0;
  }
  else {
    piStack_14 = (int *)FUN_006dbca0((int)puVar6);
    if (piStack_14 != (int *)0x0) goto LAB_006a2f2f;
  }
  RaiseInternalException(-2,DAT_007ed77c,s_E____titans_Maps_prepare_cpp_007dfacc,0xcf);
LAB_006a2f2f:
  dVar1 = (double)((float)(int)param_1[1] * _DAT_0079d84c);
  dVar2 = (double)((float)-(int)param_1[1] * _DAT_0079d84c);
  dVar3 = (double)((float)(int)*param_1 * _DAT_0079d84c);
  dVar4 = (double)((float)-(int)*param_1 * _DAT_0079d84c);
  FUN_006dc050(piStack_14,0,0,0,0x8c,0x8c,SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20),
               SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),SUB84(dVar2,0),
               (int)((ulonglong)dVar2 >> 0x20),SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),
               0x4024000000000000,0x4023ee97865e3540,0);
  piStack_14[0x4a] = 0xe0;
  piStack_14[0x49] = 2;
  piStack_14[0x10e] = -0x191b1d20;
  *(undefined2 *)(piStack_14 + 0x10f) = 0xeae8;
  iVar8 = 0;
  if (0 < *(int *)((int)param_1 + 0x455)) {
    piVar11 = (int *)((int)param_1 + 0x459);
    do {
      piVar5 = (int *)*piVar11;
      if ((piVar5 != (int *)0x0) && ((short)piVar5[2] != 0)) {
        *piVar5 = piStack_14[0x50];
        piStack_14[0x50] = (int)piVar5;
        piStack_14[0x4f] = piStack_14[0x4f] + 1;
      }
      iVar8 = iVar8 + 1;
      piVar11 = piVar11 + 1;
    } while (iVar8 < *(int *)((int)param_1 + 0x455));
  }
  FUN_006dd610(piStack_14,8,SUB84((double)((float)(int)*param_1 * _DAT_007904f4),0),
               (int)((ulonglong)(double)((float)(int)*param_1 * _DAT_007904f4) >> 0x20),
               SUB84((double)((float)(int)param_1[1] * _DAT_007904f4),0),
               (int)((ulonglong)(double)((float)(int)param_1[1] * _DAT_007904f4) >> 0x20));
  FUN_006ddbe0((int)piStack_14);
  FUN_006ddd50(piStack_14);
  psStack_8 = (short *)FUN_006aac10(0x4b79);
  iVar12 = 0;
  iVar8 = 0;
  do {
    puVar6 = (undefined4 *)(piStack_14[10] * iVar12 + piStack_14[3]);
    puVar17 = (undefined4 *)((int)psStack_8 + iVar8);
    for (iVar9 = 0x22; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar17 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar17 = puVar17 + 1;
    }
    *(undefined2 *)puVar17 = *(undefined2 *)puVar6;
    iVar8 = iVar8 + 0x8b;
    iVar12 = iVar12 + 1;
    *(undefined1 *)((int)puVar17 + 2) = *(undefined1 *)((int)puVar6 + 2);
  } while (iVar8 < 0x4b79);
  puVar7 = FUN_006f1ce0(1,PTR_s_PALETTE_0079d848,(int *)0x0,1);
  iVar8 = FUN_006b50c0(0x8b,0x8b,8,0x100,(undefined4 *)(puVar7 + 0x14),1);
  uVar14 = *(uint *)(iVar8 + 0x14);
  if (uVar14 == 0) {
    uVar14 = ((uint)*(ushort *)(iVar8 + 0xe) * *(int *)(iVar8 + 4) + 0x1f >> 3 & 0x1ffffffc) *
             *(int *)(iVar8 + 8);
  }
  puVar6 = (undefined4 *)FUN_006b4fa0(iVar8);
  for (uVar10 = uVar14 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  iVar15 = 0x45;
  param_1 = psStack_8;
  iStack00000008 = 0x45;
  iVar9 = FUN_006b4fa0(iVar8);
  iStack_18 = 0x46;
  iVar9 = iVar9 + ((uint)*(ushort *)(iVar8 + 0xe) * *(int *)(iVar8 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                  (*(int *)(iVar8 + 8) + -1);
  iVar12 = 0x45;
  do {
    iVar18 = iVar12;
    iVar16 = iVar15;
    if (iVar18 <= iVar15) {
      iVar12 = (iVar15 - iVar18) + 1;
      puVar13 = (undefined1 *)(iVar9 + iVar18);
      do {
        iVar12 = iVar12 + -1;
        *puVar13 = (puVar13 + 1)[(int)param_1 + (-1 - iVar9)];
        puVar13 = puVar13 + 1;
        iVar16 = iStack00000008;
      } while (iVar12 != 0);
    }
    param_1 = (short *)((int)param_1 + 0x8b);
    iVar9 = iVar9 - ((uint)*(ushort *)(iVar8 + 0xe) * *(int *)(iVar8 + 4) + 0x1f >> 3 & 0x1ffffffc);
    iVar15 = iVar16 + 1;
    iStack_18 = iStack_18 + -1;
    iVar12 = iVar18 + -1;
    iStack00000008 = iVar15;
  } while (iStack_18 != 0);
  iStack_18 = 0x45;
  do {
    iVar18 = iVar18 + 1;
    iVar16 = iVar16 + -1;
    if (iVar18 <= iVar16) {
      iVar12 = (iVar16 - iVar18) + 1;
      puVar13 = (undefined1 *)(iVar9 + iVar18);
      do {
        iVar12 = iVar12 + -1;
        *puVar13 = puVar13[(int)param_1 - iVar9];
        puVar13 = puVar13 + 1;
      } while (iVar12 != 0);
    }
    iVar9 = iVar9 - ((uint)*(ushort *)(iVar8 + 0xe) * *(int *)(iVar8 + 4) + 0x1f >> 3 & 0x1ffffffc);
    param_1 = (short *)((int)param_1 + 0x8b);
    iStack_18 = iStack_18 + -1;
  } while (iStack_18 != 0);
  iStack00000008 = iVar16;
  if (piStack_14 != (int *)0x0) {
    FUN_006dbcf0(piStack_14);
    FUN_0072e2b0(piStack_14);
  }
  if (psStack_8 != (short *)0x0) {
    FUN_006ab060(&psStack_8);
  }
  return iVar8;
}

