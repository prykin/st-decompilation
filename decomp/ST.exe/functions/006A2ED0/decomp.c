
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_006a2ed0(short *param_1)

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
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  cMf32 *in_stack_00000008;
  int local_18;
  int *local_14;
  short *local_8;
  
  local_8 = (short *)0x0;
  puVar6 = FUN_006b04d0(0x4f2);
  if (puVar6 == (undefined4 *)0x0) {
    local_14 = (int *)0x0;
  }
  else {
    local_14 = (int *)FUN_006dbca0((int)puVar6);
    if (local_14 != (int *)0x0) goto LAB_006a2f2f;
  }
  RaiseInternalException(-2,DAT_007ed77c,s_E____titans_Maps_prepare_cpp_007dfacc,0xcf);
LAB_006a2f2f:
  dVar1 = (double)((float)(int)param_1[1] * _DAT_0079d84c);
  dVar2 = (double)((float)-(int)param_1[1] * _DAT_0079d84c);
  dVar3 = (double)((float)(int)*param_1 * _DAT_0079d84c);
  dVar4 = (double)((float)-(int)*param_1 * _DAT_0079d84c);
  FUN_006dc050(local_14,0,0,0,0x8c,0x8c,SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20),
               SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),SUB84(dVar2,0),
               (int)((ulonglong)dVar2 >> 0x20),SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),
               0x4024000000000000,0x4023ee97865e3540,0);
  local_14[0x4a] = 0xe0;
  local_14[0x49] = 2;
  local_14[0x10e] = -0x191b1d20;
  *(undefined2 *)(local_14 + 0x10f) = 0xeae8;
  iVar9 = 0;
  if (0 < *(int *)((int)param_1 + 0x455)) {
    piVar12 = (int *)((int)param_1 + 0x459);
    do {
      piVar5 = (int *)*piVar12;
      if ((piVar5 != (int *)0x0) && ((short)piVar5[2] != 0)) {
        *piVar5 = local_14[0x50];
        local_14[0x50] = (int)piVar5;
        local_14[0x4f] = local_14[0x4f] + 1;
      }
      iVar9 = iVar9 + 1;
      piVar12 = piVar12 + 1;
    } while (iVar9 < *(int *)((int)param_1 + 0x455));
  }
  FUN_006dd610(local_14,8,SUB84((double)((float)(int)*param_1 * _DAT_007904f4),0),
               (int)((ulonglong)(double)((float)(int)*param_1 * _DAT_007904f4) >> 0x20),
               SUB84((double)((float)(int)param_1[1] * _DAT_007904f4),0),
               (int)((ulonglong)(double)((float)(int)param_1[1] * _DAT_007904f4) >> 0x20));
  FUN_006ddbe0((int)local_14);
  FUN_006ddd50(local_14);
  local_8 = (short *)Library::DKW::LIB::FUN_006aac10(0x4b79);
  iVar13 = 0;
  iVar9 = 0;
  do {
    puVar6 = (undefined4 *)(local_14[10] * iVar13 + local_14[3]);
    puVar16 = (undefined4 *)((int)local_8 + iVar9);
    for (iVar10 = 0x22; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar16 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar16 = puVar16 + 1;
    }
    *(undefined2 *)puVar16 = *(undefined2 *)puVar6;
    iVar9 = iVar9 + 0x8b;
    iVar13 = iVar13 + 1;
    *(undefined1 *)((int)puVar16 + 2) = *(undefined1 *)((int)puVar6 + 2);
  } while (iVar9 < 0x4b79);
  puVar7 = cMf32::RecGet(in_stack_00000008,1,PTR_s_PALETTE_0079d848,(int *)0x0,1);
  iVar9 = FUN_006b50c0(0x8b,0x8b,8,0x100,(undefined4 *)(puVar7 + 0x14),1);
  uVar15 = *(uint *)(iVar9 + 0x14);
  if (uVar15 == 0) {
    uVar15 = ((uint)*(ushort *)(iVar9 + 0xe) * *(int *)(iVar9 + 4) + 0x1f >> 3 & 0x1ffffffc) *
             *(int *)(iVar9 + 8);
  }
  puVar6 = (undefined4 *)FUN_006b4fa0(iVar9);
  for (uVar11 = uVar15 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  param_1 = local_8;
  in_stack_00000008 = (cMf32 *)0x45;
  iVar8 = FUN_006b4fa0(iVar9);
  local_18 = 0x46;
  iVar8 = iVar8 + ((uint)*(ushort *)(iVar9 + 0xe) * *(int *)(iVar9 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                  (*(int *)(iVar9 + 8) + -1);
  iVar13 = 0x45;
  iVar10 = (int)in_stack_00000008;
  do {
    in_stack_00000008 = (cMf32 *)iVar10;
    iVar17 = iVar13;
    if (iVar17 <= (int)in_stack_00000008) {
      iVar13 = ((int)in_stack_00000008 - iVar17) + 1;
      puVar14 = (undefined1 *)(iVar8 + iVar17);
      do {
        iVar13 = iVar13 + -1;
        *puVar14 = (puVar14 + 1)[(int)param_1 + (-1 - iVar8)];
        puVar14 = puVar14 + 1;
      } while (iVar13 != 0);
    }
    param_1 = (short *)((int)param_1 + 0x8b);
    iVar8 = iVar8 - ((uint)*(ushort *)(iVar9 + 0xe) * *(int *)(iVar9 + 4) + 0x1f >> 3 & 0x1ffffffc);
    local_18 = local_18 + -1;
    iVar13 = iVar17 + -1;
    iVar10 = (int)in_stack_00000008 + 1;
  } while (local_18 != 0);
  local_18 = 0x45;
  do {
    iVar17 = iVar17 + 1;
    in_stack_00000008 = (cMf32 *)((int)in_stack_00000008 + -1);
    if (iVar17 <= (int)in_stack_00000008) {
      iVar13 = ((int)in_stack_00000008 - iVar17) + 1;
      puVar14 = (undefined1 *)(iVar8 + iVar17);
      do {
        iVar13 = iVar13 + -1;
        *puVar14 = puVar14[(int)param_1 - iVar8];
        puVar14 = puVar14 + 1;
      } while (iVar13 != 0);
    }
    iVar8 = iVar8 - ((uint)*(ushort *)(iVar9 + 0xe) * *(int *)(iVar9 + 4) + 0x1f >> 3 & 0x1ffffffc);
    param_1 = (short *)((int)param_1 + 0x8b);
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  if (local_14 != (int *)0x0) {
    FUN_006dbcf0(local_14);
    Library::MSVCRT::FUN_0072e2b0(local_14);
  }
  if (local_8 != (short *)0x0) {
    FUN_006ab060(&local_8);
  }
  return iVar9;
}

