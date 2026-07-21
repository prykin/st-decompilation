
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\scoreai.cpp
   Diagnostic line evidence: 600 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * __cdecl FUN_00561670(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  short *psVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *puVar13;
  int iVar14;
  int local_3c;
  uint local_34;
  int local_2c;
  uint local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;

  local_2c = 0;
  if (param_5 < 1) {
    return (undefined4 *)0x0;
  }
  puVar5 = Library::DKW::LIB::FUN_006aac10(param_2 * param_3 * 2);
  if (puVar5 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (0 < param_3) {
    local_28 = param_3;
    puVar13 = puVar5;
    do {
      puVar6 = puVar13;
      iVar9 = param_2;
      if (0 < param_2) {
        do {
          if (*(short *)((param_1 - (int)puVar5) + (int)puVar6) == -1) {
            *(undefined2 *)puVar6 = 0xffff;
          }
          iVar9 = iVar9 + -1;
          puVar6 = (undefined4 *)((int)puVar6 + 2);
        } while (iVar9 != 0);
      }
      puVar13 = (undefined4 *)((int)puVar13 + param_2 * 2);
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  iVar9 = (param_2 + param_3) * 2;
  if (iVar9 < param_5) {
    iVar9 = param_5;
  }
  local_18 = iVar9;
  local_24 = (int *)FUN_006bfb70(iVar9 << 4);
  if (local_24 == (int *)0x0) {
LAB_00561bff:
    local_2c = -2;
  }
  else {
    local_14 = local_24 + iVar9 * 2;
    local_20 = 0;
    piVar12 = local_14;
    local_1c = local_24;
    if (0 < param_5) {
      do {
        iVar9 = *param_4;
        if ((((-1 < iVar9) && (iVar9 < param_2)) && (iVar14 = param_4[1], -1 < iVar14)) &&
           (iVar14 < param_3)) {
          *(undefined2 *)((int)puVar5 + (iVar14 * param_2 + iVar9) * 2) = 1;
          *piVar12 = *param_4;
          local_20 = local_20 + 1;
          piVar12[1] = param_4[1];
          piVar12 = piVar12 + 2;
        }
        param_4 = param_4 + 2;
        param_5 = param_5 + -1;
        iVar9 = local_18;
      } while (param_5 != 0);
    }
    while( true ) {
      param_5 = 0;
      local_3c = 0;
      if (local_20 < 1) break;
      local_28 = iVar9 * 8 - 0x400;
      local_34 = iVar9 << 4;
      param_4 = (int *)0x8;
      piVar12 = local_1c;
      do {
        local_8 = local_14[local_3c * 2];
        local_10 = local_14[local_3c * 2 + 1];
        iVar14 = (local_10 * param_2 + local_8) * 2;
        sVar2 = *(short *)(iVar14 + (int)puVar5);
        iVar9 = (int)sVar2;
        local_c = iVar14 + (int)puVar5;
        iVar14 = iVar14 + param_1;
        if (local_18 < (int)param_4) {
          local_34 = local_34 + 0x800;
          local_18 = local_18 + 0x80;
          uVar7 = local_28 + 0x400;
          piVar8 = (int *)FUN_006bfb50(local_24,local_34);
          if (piVar8 == (int *)0x0) goto LAB_00561bff;
          local_1c = piVar8 + ((int)local_1c - (int)local_24 >> 3) * 2;
          local_14 = piVar8 + ((int)local_14 - (int)local_24 >> 3) * 2;
          if (local_1c == piVar8) {
            local_14 = local_14 + 0x100;
          }
          else {
            local_1c = local_1c + 0x100;
          }
          piVar12 = local_1c + param_5 * 2;
          local_24 = piVar8;
          Library::MSVCRT::FUN_0072da70
                    ((undefined4 *)(local_28 + 0x800 + (int)piVar8),
                     (undefined4 *)(uVar7 + (int)piVar8),uVar7);
          local_28 = uVar7;
        }
        piVar8 = local_1c;
        sVar4 = (short)local_8;
        piVar11 = piVar12;
        if ((local_8 < param_2 + -1) &&
           ((*(short *)(local_c + 2) == 0 ||
            (*(short *)(iVar14 + 2) + DAT_00803320 + iVar9 < (int)*(short *)(local_c + 2))))) {
          piVar11 = piVar12 + 2;
          *(short *)(local_c + 2) = *(short *)(iVar14 + 2) + (short)DAT_00803320 + sVar2;
          piVar12[1] = (int)(short)local_10;
          *piVar12 = (int)(short)(sVar4 + 1);
          param_5 = param_5 + 1;
          param_4 = (int *)((int)param_4 + 1);
        }
        piVar12 = piVar11;
        if ((0 < local_10) &&
           ((psVar10 = (short *)(local_c + param_2 * -2), *psVar10 == 0 ||
            (*(short *)(iVar14 + param_2 * -2) + DAT_00803320 + iVar9 < (int)*psVar10)))) {
          piVar12 = piVar11 + 2;
          *psVar10 = *(short *)(iVar14 + param_2 * -2) + (short)DAT_00803320 + sVar2;
          *piVar11 = (int)sVar4;
          piVar11[1] = (int)(short)((short)local_10 + -1);
          param_5 = param_5 + 1;
          param_4 = (int *)((int)param_4 + 1);
        }
        piVar11 = piVar12;
        if ((0 < local_8) &&
           ((*(short *)(local_c + -2) == 0 ||
            (*(short *)(iVar14 + -2) + DAT_00803320 + iVar9 < (int)*(short *)(local_c + -2))))) {
          piVar11 = piVar12 + 2;
          *(short *)(local_c + -2) = *(short *)(iVar14 + -2) + (short)DAT_00803320 + sVar2;
          piVar12[1] = (int)(short)local_10;
          *piVar12 = (int)(short)(sVar4 + -1);
          param_5 = param_5 + 1;
          param_4 = (int *)((int)param_4 + 1);
        }
        piVar12 = piVar11;
        if ((local_10 < param_3 + -1) &&
           ((sVar3 = *(short *)(local_c + param_2 * 2), sVar3 == 0 ||
            (*(short *)(iVar14 + param_2 * 2) + DAT_00803320 + iVar9 < (int)sVar3)))) {
          piVar12 = piVar11 + 2;
          *(short *)(local_c + param_2 * 2) =
               *(short *)(iVar14 + param_2 * 2) + (short)DAT_00803320 + sVar2;
          *piVar11 = (int)sVar4;
          piVar11[1] = (int)(short)((short)local_10 + 1);
          param_5 = param_5 + 1;
          param_4 = (int *)((int)param_4 + 1);
        }
        if (0 < local_10) {
          piVar11 = piVar12;
          if ((local_8 < param_2 + -1) &&
             ((psVar10 = (short *)(local_c + param_2 * -2 + 2), *psVar10 == 0 ||
              (*(short *)(iVar14 + param_2 * -2 + 2) + DAT_00803324 + iVar9 < (int)*psVar10)))) {
            piVar11 = piVar12 + 2;
            *psVar10 = *(short *)(iVar14 + param_2 * -2 + 2) + (short)DAT_00803324 + sVar2;
            *piVar12 = (int)(short)(sVar4 + 1);
            piVar12[1] = (int)(short)((short)local_10 + -1);
            param_5 = param_5 + 1;
            param_4 = (int *)((int)param_4 + 1);
          }
          piVar12 = piVar11;
          if (0 < local_8) {
            iVar1 = param_2 * 2 + 2;
            psVar10 = (short *)(local_c - iVar1);
            if ((*psVar10 == 0) ||
               (*(short *)(iVar14 - iVar1) + DAT_00803324 + iVar9 < (int)*psVar10)) {
              piVar12 = piVar11 + 2;
              *psVar10 = *(short *)(iVar14 - (param_2 * 2 + 2)) + (short)DAT_00803324 + sVar2;
              *piVar11 = (int)(short)(sVar4 + -1);
              piVar11[1] = (int)(short)((short)local_10 + -1);
              param_5 = param_5 + 1;
              param_4 = (int *)((int)param_4 + 1);
            }
          }
        }
        if (local_10 < param_3 + -1) {
          piVar11 = piVar12;
          if ((0 < local_8) &&
             ((sVar3 = *(short *)(local_c + -2 + param_2 * 2), sVar3 == 0 ||
              (*(short *)(iVar14 + -2 + param_2 * 2) + DAT_00803324 + iVar9 < (int)sVar3)))) {
            piVar11 = piVar12 + 2;
            *(short *)(local_c + -2 + param_2 * 2) =
                 *(short *)(iVar14 + -2 + param_2 * 2) + (short)DAT_00803324 + sVar2;
            *piVar12 = (int)(short)(sVar4 + -1);
            piVar12[1] = (int)(short)((short)local_10 + 1);
            param_5 = param_5 + 1;
            param_4 = (int *)((int)param_4 + 1);
          }
          piVar12 = piVar11;
          if ((local_8 < param_2 + -1) &&
             ((sVar3 = *(short *)(local_c + 2 + param_2 * 2), sVar3 == 0 ||
              (*(short *)(iVar14 + 2 + param_2 * 2) + DAT_00803324 + iVar9 < (int)sVar3)))) {
            piVar12 = piVar11 + 2;
            *(short *)(local_c + 2 + param_2 * 2) =
                 *(short *)(iVar14 + 2 + param_2 * 2) + (short)DAT_00803324 + sVar2;
            *piVar11 = (int)(short)(sVar4 + 1);
            piVar11[1] = (int)(short)((short)local_10 + 1);
            param_5 = param_5 + 1;
            param_4 = (int *)((int)param_4 + 1);
          }
        }
        local_3c = local_3c + 1;
      } while (local_3c < local_20);
      if (param_5 == 0) break;
      local_1c = local_14;
      local_14 = piVar8;
      iVar9 = local_18;
      local_20 = param_5;
    }
  }
  FreeAndNull(&local_24);
  if (local_2c == 0) {
    return puVar5;
  }
  RaiseInternalException
            (local_2c,g_overwriteContext_007ED77C,"E:\\__titans\\scoreai.cpp",600);
  return (undefined4 *)0x0;
}

