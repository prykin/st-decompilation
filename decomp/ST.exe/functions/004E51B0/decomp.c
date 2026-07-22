#include "../../pseudocode_runtime.h"


undefined4 FUN_004e51b0(int *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int *piVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  undefined **local_1c;
  int local_18;
  uint *local_14;
  int local_10;
  int local_c;
  uint local_8;

  piVar5 = param_1;
  if (((int)param_1 < 0) || (7 < (int)param_1)) {
    return 0;
  }
  if ((int)param_3 < (int)param_2) {
    param_3 = param_2;
  }
  /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
  iVar9 = (int)param_1 * 0xa62;
  local_c = g_playerRuntime[(int)param_1].raceId - 1;
  g_playerRuntime[(int)param_1].field480_0x2eb = 0;
  g_playerRuntime[(int)param_1].field481_0x2ef = 0;
  *(undefined4 *)&g_playerRuntime[(int)param_1].field_0x2f3 = 0;
  *(undefined4 *)&g_playerRuntime[(int)param_1].field_0x2f7 = 0;
  *(undefined4 *)&g_playerRuntime[(int)param_1].field_0x2fb = 0;
  g_playerRuntime[(int)param_1].field494_0x2ff = 0;
  g_playerRuntime[(int)param_1].field495_0x303 = 0;
  *(undefined4 *)&g_playerRuntime[(int)param_1].field_0x307 = 0;
  *(undefined4 *)&g_playerRuntime[(int)param_1].field_0x30b = 0;
  *(undefined4 *)&g_playerRuntime[(int)param_1].field_0x30f = 0;
  memset(&g_playerRuntime[(int)param_1].field522_0x327, 0, 0x26c); /* compiler bulk-zero initialization */
  iVar7 = 0;
  puVar10 = &DAT_00798fd8;
  puVar14 = &g_playerRuntime[(int)param_1].field1554_0x73b;
  for (iVar7 = 0x26; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar14 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar14 = puVar14 + 1;
  }
  *(undefined2 *)puVar14 = *(undefined2 *)puVar10;
  iVar7 = local_c * 0x10;
  *(undefined1 *)((int)puVar14 + 2) = *(undefined1 *)((int)puVar10 + 2);
  local_30 = (&DAT_00800f30)[local_c * 4] | *(uint *)(&DAT_00800fb0 + iVar7);
  local_2c = (&DAT_00800f34)[local_c * 4] | *(uint *)(&DAT_00800fb4 + iVar7);
  local_28 = (&DAT_00800f38)[local_c * 4] | *(uint *)(&DAT_00800fb8 + iVar7);
  local_24 = (&DAT_00800f3c)[local_c * 4] | *(uint *)(&DAT_00800fbc + iVar7);
  local_8 = 1;
  local_1c = &PTR_DAT_007bfc04 + local_c;
  do {
    if ((*local_1c)[local_8] != '\0') {
      local_18 = iVar9 + 0x7f510b;
      pbVar4 = (byte *)(local_18 + ((int)(local_8 ^ 7) >> 3));
      *pbVar4 = *pbVar4 | '\x01' << ((local_8 ^ 7) & 7);
    }
    local_8 = local_8 + 1;
  } while ((int)local_8 < 0x9b);
  if (0 < (int)param_2) {
    local_14 = param_2;
    param_2 = (uint *)(&DAT_00799074 + local_c * 0x1c2);
    do {
      iVar7 = 0;
      puVar11 = param_2;
      do {
        uVar3 = *puVar11;
        if (uVar3 == 0) break;
        if (*(int *)(iVar9 + 0x7f5147 + uVar3 * 4) < (int)(uint)(byte)puVar11[1]) {
          *(uint *)(iVar9 + 0x7f5147 + uVar3 * 4) = (uint)(byte)puVar11[1];
        }
        iVar7 = iVar7 + 1;
        puVar11 = (uint *)((int)puVar11 + 5);
      } while (iVar7 < 0x1e);
      param_2 = (uint *)((int)param_2 + 0x96);
      local_14 = (uint *)((int)local_14 + -1);
    } while (local_14 != (uint *)0x0);
  }
  iVar7 = (int)param_3 + 1;
  if (iVar7 < 3) {
    local_14 = (uint *)(&DAT_00799074 + (iVar7 + local_c * 3) * 0x96);
    local_18 = 3 - iVar7;
    do {
      local_8 = 0;
      puVar11 = local_14;
      do {
        uVar3 = *puVar11;
        if (uVar3 == 0) break;
        if (*(char *)((int)&DAT_00798fd8 + uVar3) == '\x01') {
          pbVar4 = (byte *)(iVar9 + 0x7f510b + ((int)(uVar3 ^ 7) >> 3));
          *pbVar4 = *pbVar4 & ~('\x01' << ((uVar3 ^ 7) & 7));
          local_20 = iVar9 + 0x7f511f;
          pbVar4 = (byte *)(local_20 + ((int)(uVar3 ^ 7) >> 3));
          *pbVar4 = *pbVar4 & ~('\x01' << ((uVar3 ^ 7) & 7));
        }
        else {
          iVar7 = (byte)puVar11[1] - 1;
          if ((-1 < iVar7) && (iVar7 < (int)(uint)*(byte *)(iVar9 + 0x7f555b + uVar3))) {
            *(byte *)(iVar9 + 0x7f555b + uVar3) = (byte)puVar11[1] - 1;
          }
        }
        local_8 = local_8 + 1;
        puVar11 = (uint *)((int)puVar11 + 5);
      } while ((int)local_8 < 0x1e);
      local_14 = (uint *)((int)local_14 + 0x96);
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  param_3 = (uint *)0x1;
LAB_004e5403:
  if (((*local_1c)[(int)param_3] != '\0') &&
     ((*(byte *)(iVar9 + 0x7f510b + ((int)((uint)param_3 ^ 7) >> 3)) >> (((uint)param_3 ^ 7) & 7) &
      1) != 0)) {
    iVar7 = *(int *)(iVar9 + 0x7f5147 + (int)param_3 * 4);
    if (iVar7 < (int)(uint)*(byte *)(iVar9 + 0x7f555b + (int)param_3)) {
      iVar8 = 0;
      piVar6 = (int *)(&PTR_DAT_007c0dc8)[local_c];
      puVar11 = (uint *)*piVar6;
      piVar12 = piVar6;
      while (puVar11 != (uint *)0x0) {
        if ((puVar11 == param_3) && ((uint)*(byte *)(piVar12 + 1) == iVar7 + 1U)) {
          iVar7 = 0;
          if (*(int *)(iVar8 * 0x19 + 5 + (int)piVar6) == 0) goto LAB_004e54d9;
          piVar6 = (int *)(iVar8 * 0x19 + 5 + (int)piVar6);
          goto LAB_004e54b9;
        }
        piVar1 = (int *)((int)piVar12 + 0x19);
        piVar12 = (int *)((int)piVar12 + 0x19);
        iVar8 = iVar8 + 1;
        puVar11 = (uint *)*piVar1;
      }
    }
    else {
      pbVar4 = (byte *)(iVar9 + 0x7f511f + ((int)((uint)param_3 ^ 7) >> 3));
      *pbVar4 = *pbVar4 & ~('\x01' << (((uint)param_3 ^ 7) & 7));
    }
  }
  goto cf_continue_loop_004E5505;
  while( true ) {
    if (*(int *)(iVar9 + 0x7f5147 + *piVar6 * 4) < (int)(uint)*(byte *)(piVar6 + 1)) {
      pbVar4 = (byte *)(iVar9 + 0x7f511f + ((int)((uint)param_3 ^ 7) >> 3));
      *pbVar4 = *pbVar4 & ~('\x01' << (((uint)param_3 ^ 7) & 7));
      goto cf_continue_loop_004E5505;
    }
    piVar12 = (int *)((int)piVar6 + 5);
    piVar6 = (int *)((int)piVar6 + 5);
    iVar7 = iVar7 + 1;
    if (*piVar12 == 0) break;
LAB_004e54b9:
    if (3 < iVar7) break;
  }
LAB_004e54d9:
  pbVar4 = (byte *)(iVar9 + 0x7f511f + ((int)((uint)param_3 ^ 7) >> 3));
  *pbVar4 = *pbVar4 | '\x01' << (((uint)param_3 ^ 7) & 7);
cf_continue_loop_004E5505:
  param_3 = (uint *)((int)param_3 + 1);
  if (0x9a < (int)param_3) {
    param_3 = (uint *)&g_playerRuntime[(int)param_1].field_0x69b;
    param_2 = (uint *)0x1;
    puVar13 = &DAT_007c0dd4;
    local_10 = iVar9;
    do {
      iVar7 = FUN_006b0fd0((int)&local_30);
      if (iVar7 != 0) {
        iVar7 = 1;
        *param_3 = 1;
        cVar2 = puVar13[1];
        while( true ) {
          if ((cVar2 == '\0') || (2 < iVar7)) goto LAB_004e5598;
          local_20 = iVar9 + 0x7f510b;
          local_1c = (undefined **)(uint)(byte)puVar13[iVar7];
          if ((*(byte *)(local_20 + ((int)((uint)local_1c ^ 7) >> 3)) >> (((uint)local_1c ^ 7) & 7)
              & 1) == 0) break;
          cVar2 = puVar13[iVar7 + 1];
          iVar7 = iVar7 + 1;
        }
        *param_3 = 0;
      }
LAB_004e5598:
      puVar13 = puVar13 + 3;
      param_2 = (uint *)((int)param_2 + 1);
      param_3 = param_3 + 1;
    } while ((int)puVar13 < 0x7c0e4c);
    param_2 = &g_playerRuntime[(int)piVar5].field1136_0x593;
    param_3 = (uint *)0x32;
    do {
      iVar9 = FUN_006b0fd0((int)&local_30);
      iVar7 = local_10;
      if (iVar9 != 0) {
        *param_2 = 1;
        iVar9 = 1;
        cVar2 = (&DAT_007c0e4d)[(local_c * 0x42 + -0x32 + (int)param_3) * 3];
        while( true ) {
          if ((cVar2 == '\0') || (2 < iVar9)) goto LAB_004e5655;
          iVar8 = (local_c * 0x42 + -0x32 + (int)param_3) * 3;
          local_1c = (undefined **)(uint)(byte)(&DAT_007c0e4c)[iVar9 + iVar8];
          local_20 = local_10 + 0x7f510b;
          if ((*(byte *)(local_20 + ((int)((uint)local_1c ^ 7) >> 3)) >> (((uint)local_1c ^ 7) & 7)
              & 1) == 0) break;
          cVar2 = (&DAT_007c0e4d)[iVar9 + iVar8];
          iVar9 = iVar9 + 1;
        }
        *param_2 = 0;
      }
LAB_004e5655:
      param_3 = (uint *)((int)param_3 + 1);
      param_2 = param_2 + 1;
      if (0x73 < (int)param_3) {
        iVar9 = *(int *)((int)&g_playerRuntime[0].field2164_0x9ce + local_10);
        if (iVar9 != 0) {
          *(undefined4 *)(iVar9 + 4) = 0;
          iVar9 = FUN_006b1190(*(DArrayTy **)((int)&g_playerRuntime[0].field2164_0x9ce + local_10),
                               &param_1);
          while (-1 < iVar9) {
            thunk_FUN_004dd880((AnonShape_004DDCC0_33DEB43E *)param_1);
            iVar9 = FUN_006b1190(*(DArrayTy **)((int)&g_playerRuntime[0].field2164_0x9ce + iVar7),
                                 &param_1);
          }
        }
        iVar9 = *(int *)((int)&g_playerRuntime[0].objects + iVar7);
        if (iVar9 != 0) {
          *(undefined4 *)(iVar9 + 4) = 0;
          iVar9 = FUN_006b1190(*(DArrayTy **)((int)&g_playerRuntime[0].objects + iVar7),&param_1);
          while (-1 < iVar9) {
            if (param_1 != (int *)0x0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              iVar9 = (**(code **)(*param_1 + 0x2c))();
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              if ((iVar9 == 0x36) || (iVar9 = (**(code **)(*param_1 + 0x2c))(), iVar9 == 0x5d)) {
                thunk_FUN_004e4d60(param_1);
              }
              if (param_1 != (int *)0x0) {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                iVar9 = (**(code **)(*param_1 + 0x2c))();
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                if ((iVar9 == 0x5d) || (iVar9 = (**(code **)(*param_1 + 0x2c))(), iVar9 == 0x3d)) {
                  thunk_FUN_004e4f30(param_1);
                }
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                if ((param_1 != (int *)0x0) &&
                   (((iVar9 = (**(code **)(*param_1 + 0x2c))(), iVar9 == 5 ||
                     (iVar9 = (**(code **)(*param_1 + 0x2c))(), iVar9 == 0x21)) ||
                    (iVar9 = (**(code **)(*param_1 + 0x2c))(), iVar9 == 0x11)))) {
                  thunk_FUN_00494ae0((AnonShape_00494AE0_7F188308 *)param_1);
                }
              }
            }
            iVar9 = FUN_006b1190(*(DArrayTy **)((int)&g_playerRuntime[0].objects + iVar7),&param_1);
          }
        }
        return 0;
      }
    } while( true );
  }
  goto LAB_004e5403;
}

