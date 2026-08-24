#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __thiscall
FUN_00728da0(void *this,int param_1,int param_2,short *param_3,uint param_4,int param_5,int param_6)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  short *psVar7;
  uint *puVar8;
  RuntimeRecord_00857110_0008 *pRVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte *puVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  short asStack_c8 [2];
  undefined4 uStack_c4;
  short local_b0 [8];
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_88;
  int local_7c;
  int local_78;
  int local_6c;
  RuntimeRecord_00857110_0008 *local_60;
  int local_54;
  int local_50;
  uint local_48;
  int local_44;
  uint local_40;
  uint local_34;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079e2f8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_78 = 0;
  local_98 = 0;
  DAT_0085710c = param_4;
  if (2 < (int)param_4) {
    uStack_c4 = 0x728e05;
    iVar4 = param_4 * -8;
    (&uStack_c4)[param_4 * -2] = 0x728e1b;
    (&uStack_c4)[param_4 * -4] = 0x728e32;
    iVar5 = -(param_4 + 3 & 0xfffffffc);
    puVar13 = &stack0xffffff40 + iVar5 + param_4 * -0x10;
    local_8 = 0xffffffff;
    DAT_0085710c = 1;
    *(undefined4 *)(&stack0xffffff40 + iVar4) = *(undefined4 *)param_3;
    *(undefined4 *)(&stack0xffffff44 + iVar4) = *(undefined4 *)(param_3 + 2);
    pRVar9 = (RuntimeRecord_00857110_0008 *)(&stack0xffffff48 + iVar4);
    ExceptionList = &local_14;
    if (1 < (int)param_4) {
      iVar14 = param_4 - 1;
      g_runtimeRecords_00857110 = pRVar9;
      ExceptionList = &local_14;
      do {
        psVar7 = param_3 + 4;
        if ((*psVar7 != pRVar9[-1].field_0000) || (param_3[5] != pRVar9[-1].field_0002)) {
          sVar2 = psVar7[1];
          pRVar9->field_0000 = psVar7[0];
          pRVar9->field_0002 = sVar2;
          g_runtimeRecords_00857110->field_0004 = *(int *)(param_3 + 6);
          pRVar9 = g_runtimeRecords_00857110 + 1;
          DAT_0085710c = DAT_0085710c + 1;
          g_runtimeRecords_00857110 = pRVar9;
        }
        iVar14 = iVar14 + -1;
        param_3 = psVar7;
      } while (iVar14 != 0);
    }
    if ((*(short *)(&stack0xffffff40 + iVar4) == asStack_c8[param_4 * -4 + DAT_0085710c * 4]) &&
       (*(short *)(&stack0xffffff42 + iVar4) == asStack_c8[param_4 * -4 + DAT_0085710c * 4 + 1])) {
      DAT_0085710c = DAT_0085710c - 1;
    }
    local_6c = -1;
    local_94 = 0;
LAB_00728ee6:
    while (uVar11 = DAT_0085710c,
          g_runtimeRecords_00857110 = (RuntimeRecord_00857110_0008 *)(&stack0xffffff40 + iVar4),
          3 < (int)DAT_0085710c) {
      iVar14 = (int)g_runtimeRecords_00857110->field_0000;
      local_a0 = (int)*(short *)(&stack0xffffff42 + iVar4);
      g_runtimeRecordCount_00857114 = 0;
      DAT_00857104 = 0;
      puVar8 = (undefined4 *)(&stack0xffffff40 + iVar5 + param_4 * -0x10);
      for (uVar10 = DAT_0085710c >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined1 *)puVar8 = 0;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      local_40 = 0;
      local_9c = iVar14;
      local_44 = iVar14;
      do {
        iVar12 = (int)g_runtimeRecords_00857110[local_40].field_0000;
        if (iVar12 < local_9c) {
          local_9c = iVar12;
        }
        if (iVar14 < iVar12) {
          iVar14 = iVar12;
          local_44 = iVar12;
        }
        if (g_runtimeRecords_00857110[local_40].field_0002 !=
            g_runtimeRecords_00857110[DAT_0085710c - 1].field_0002) goto LAB_00728f70;
        local_40 = local_40 + 1;
      } while ((int)local_40 < (int)DAT_0085710c);
      local_40 = 0;
LAB_00728f70:
      local_60 = g_runtimeRecords_00857110 + local_40;
      local_90 = (int)local_60->field_0002;
      uVar11 = local_40;
      iVar14 = local_90;
      do {
        uVar11 = uVar11 - 1;
        if ((int)uVar11 < 0) {
          uVar11 = DAT_0085710c - 1;
        }
      } while ((uVar11 != local_40) &&
              (iVar14 = (int)g_runtimeRecords_00857110[uVar11].field_0002, iVar14 == local_90));
      local_54 = 0;
      local_88 = 0;
      local_48 = 0x7fffffff;
      bVar6 = false;
      uVar11 = local_40;
      iVar12 = (int)local_60->field_0000;
      iVar15 = local_90;
      local_50 = local_a0;
LAB_00728fcd:
      do {
        local_40 = local_40 + 1;
        if ((int)DAT_0085710c <= (int)local_40) {
          if (!bVar6) {
            bVar6 = true;
            local_40 = 0;
            local_60 = g_runtimeRecords_00857110;
            goto LAB_00729005;
          }
          break;
        }
        local_60 = local_60 + 1;
LAB_00729005:
        local_78 = (int)local_60->field_0000;
        local_98 = (int)local_60->field_0002;
        if (local_78 < local_9c) {
          local_9c = local_78;
        }
        if (local_44 < local_78) {
          local_44 = local_78;
        }
      } while (local_98 == iVar15);
      if (((iVar14 < iVar15) && (local_98 < iVar15)) &&
         (bVar1 = (&stack0xffffff40)[uVar11 + iVar5 + param_4 * -0x10], (bVar1 & 1) == 0)) {
        (&stack0xffffff40)[uVar11 + iVar5 + param_4 * -0x10] = bVar1 | 1;
        iVar14 = uVar11 - 1;
        if (iVar14 < 0) {
          iVar14 = DAT_0085710c - 1;
        }
        if (((iVar15 - g_runtimeRecords_00857110[iVar14].field_0002) *
             (local_78 - g_runtimeRecords_00857110[iVar14].field_0000) -
             (iVar12 - g_runtimeRecords_00857110[iVar14].field_0000) *
             (local_98 - g_runtimeRecords_00857110[iVar14].field_0002) < 0) &&
           ((&stack0xffffff40)[uVar11 + iVar5 + param_4 * -0x10] = bVar1 | 5,
           (int)uVar11 < (int)local_48)) {
          local_48 = uVar11;
        }
        local_54 = local_54 + 1;
        iVar14 = iVar15;
        if (local_50 < iVar15) {
          DAT_00857104 = uVar11;
          local_50 = iVar15;
        }
      }
      else {
        bVar3 = iVar15 < iVar14;
        iVar14 = iVar15;
        if (((bVar3) && (iVar15 < local_98)) &&
           (bVar1 = (&stack0xffffff40)[uVar11 + iVar5 + param_4 * -0x10], (bVar1 & 2) == 0)) {
          (&stack0xffffff40)[uVar11 + iVar5 + param_4 * -0x10] = bVar1 | 2;
          iVar14 = uVar11 - 1;
          if (iVar14 < 0) {
            iVar14 = DAT_0085710c - 1;
          }
          if (((local_90 - g_runtimeRecords_00857110[iVar14].field_0002) *
               (local_78 - g_runtimeRecords_00857110[iVar14].field_0000) -
               (iVar12 - g_runtimeRecords_00857110[iVar14].field_0000) *
               (local_98 - g_runtimeRecords_00857110[iVar14].field_0002) < 0) &&
             ((&stack0xffffff40)[uVar11 + iVar5 + param_4 * -0x10] = bVar1 | 6,
             (int)uVar11 < (int)local_48)) {
            local_48 = uVar11;
          }
          local_88 = local_88 + 1;
          iVar14 = local_90;
          if (local_90 < local_a0) {
            local_a0 = local_90;
            g_runtimeRecordCount_00857114 = uVar11;
          }
        }
      }
      if (!bVar6) {
        local_90 = local_98;
        uVar11 = local_40;
        iVar12 = local_78;
        iVar15 = local_98;
        goto LAB_00728fcd;
      }
      local_34 = DAT_0085710c;
      if (((1 < local_54) || (1 < local_88)) && ((int)local_48 < (int)DAT_0085710c)) {
        local_34 = local_48;
      }
      if ((int)DAT_0085710c <= (int)local_34) goto LAB_007294f8;
      sVar2 = g_runtimeRecords_00857110[local_34].field_0002;
      if (((&stack0xffffff40)[local_34 + iVar5 + param_4 * -0x10] & 1) == 0) {
        bVar6 = false;
        uVar11 = local_34;
        do {
          while( true ) {
            uVar11 = uVar11 + 1;
            if ((int)DAT_0085710c <= (int)uVar11) {
              uVar11 = 0;
            }
            uVar10 = DAT_0085710c;
            if (uVar11 == local_34) goto LAB_0072926d;
            uVar10 = uVar11;
            if (sVar2 != g_runtimeRecords_00857110[uVar11].field_0002) break;
            if (bVar6) goto LAB_0072926d;
            bVar6 = false;
          }
          bVar6 = true;
        } while (sVar2 < g_runtimeRecords_00857110[uVar11].field_0002);
LAB_0072926d:
        if ((int)DAT_0085710c <= (int)uVar10) goto LAB_007294f8;
        bVar6 = false;
        uVar11 = local_34;
        do {
          while( true ) {
            uVar11 = uVar11 - 1;
            if ((int)uVar11 < 0) {
              uVar11 = DAT_0085710c - 1;
            }
            if (uVar11 == local_34) goto LAB_007292a6;
            if (sVar2 == g_runtimeRecords_00857110[uVar10].field_0002) break;
            bVar6 = true;
            if (g_runtimeRecords_00857110[uVar10].field_0002 <= sVar2) goto LAB_007292a6;
          }
        } while (!bVar6);
      }
      else {
        bVar6 = false;
        local_7c = 0;
        uVar11 = local_34;
        do {
          while( true ) {
            uVar11 = uVar11 + 1;
            if ((int)DAT_0085710c <= (int)uVar11) {
              uVar11 = 0;
            }
            uVar10 = DAT_0085710c;
            if (uVar11 == local_34) goto LAB_007291f7;
            local_7c = local_7c + 1;
            uVar10 = uVar11;
            if (sVar2 != g_runtimeRecords_00857110[uVar11].field_0002) break;
            if (bVar6) goto LAB_007291f7;
            bVar6 = false;
          }
          bVar6 = true;
        } while (g_runtimeRecords_00857110[uVar11].field_0002 <= sVar2);
LAB_007291f7:
        if ((int)uVar10 < (int)DAT_0085710c) {
          iVar14 = 0;
          bVar6 = false;
          uVar11 = local_34;
          do {
            while( true ) {
              uVar11 = uVar11 - 1;
              if ((int)uVar11 < 0) {
                uVar11 = DAT_0085710c - 1;
              }
              if (uVar11 == local_34) goto LAB_00729231;
              iVar14 = iVar14 + 1;
              if (sVar2 == g_runtimeRecords_00857110[uVar11].field_0002) break;
              bVar6 = true;
              if (sVar2 < g_runtimeRecords_00857110[uVar11].field_0002) goto LAB_00729231;
            }
          } while (!bVar6);
LAB_00729231:
          if (iVar14 < local_7c) {
            uVar10 = uVar11;
          }
        }
      }
LAB_007292a6:
      if ((int)DAT_0085710c <= (int)uVar10) goto LAB_007294f8;
      if (local_94 < local_6c) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        puVar8 = *(undefined4 **)(&stack0xffffff44 + local_94 * 8 + param_4 * -0x10);
      }
      else {
        *(undefined4 *)(puVar13 + -4) = 0x7292db;
        iVar14 = DAT_0085710c * -8;
        puVar8 = (undefined4 *)(puVar13 + iVar14);
        local_8 = 0xffffffff;
        *(undefined1 **)(&stack0xffffff44 + local_94 * 8 + param_4 * -0x10) = puVar13 + iVar14;
        local_6c = local_94;
        puVar13 = puVar13 + iVar14;
      }
      iVar14 = 0;
      uVar11 = local_34;
      while( true ) {
        *puVar8 = *(undefined4 *)(g_runtimeRecords_00857110 + uVar11);
        puVar8[1] = g_runtimeRecords_00857110[uVar11].field_0004;
        puVar8 = puVar8 + 2;
        iVar14 = iVar14 + 1;
        if (uVar11 == uVar10) break;
        uVar11 = uVar11 + 1;
        if ((int)DAT_0085710c <= (int)uVar11) {
          uVar11 = 0;
        }
      }
      *(int *)(&stack0xffffff40 + local_94 * 8 + param_4 * -0x10) = iVar14;
      local_94 = local_94 + 1;
      if (local_94 < local_6c) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        puVar8 = *(undefined4 **)(&stack0xffffff44 + local_94 * 8 + param_4 * -0x10);
      }
      else {
        *(undefined4 *)(puVar13 + -4) = 0x72936b;
        iVar14 = DAT_0085710c * -8;
        puVar8 = (undefined4 *)(puVar13 + iVar14);
        local_8 = 0xffffffff;
        *(undefined1 **)(&stack0xffffff44 + local_94 * 8 + param_4 * -0x10) = puVar13 + iVar14;
        puVar13 = puVar13 + iVar14;
        local_6c = local_94;
      }
      *puVar8 = *(undefined4 *)(g_runtimeRecords_00857110 + uVar10);
      puVar8[1] = g_runtimeRecords_00857110[uVar10].field_0004;
      uVar11 = 1;
      while (uVar10 != local_34) {
        uVar10 = uVar10 + 1;
        if ((int)DAT_0085710c <= (int)uVar10) {
          uVar10 = 0;
        }
        puVar8[2] = *(undefined4 *)(g_runtimeRecords_00857110 + uVar10);
        puVar8[3] = g_runtimeRecords_00857110[uVar10].field_0004;
        uVar11 = uVar11 + 1;
        puVar8 = puVar8 + 2;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      puVar8 = *(undefined4 **)(&stack0xffffff44 + local_94 * 8 + param_4 * -0x10);
      puVar16 = (undefined4 *)(&stack0xffffff40 + iVar4);
      DAT_0085710c = uVar11;
      for (iVar14 = (uVar11 & 0x1fffffff) << 1; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar16 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar16 = puVar16 + 1;
      }
      for (iVar14 = 0; iVar14 != 0; iVar14 = iVar14 + -1) {
        *(undefined1 *)puVar16 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar16 = (undefined4 *)((int)puVar16 + 1);
      }
    }
    local_44 = (int)g_runtimeRecords_00857110->field_0000;
    iVar12 = (int)*(short *)(&stack0xffffff42 + iVar4);
    iVar14 = (int)*(short *)(&stack0xffffff48 + iVar4);
    local_9c = local_44;
    if (iVar14 < local_44) {
      local_9c = iVar14;
    }
    if (local_44 < iVar14) {
      local_44 = iVar14;
    }
    iVar14 = (int)*(short *)(&stack0xffffff4a + iVar4);
    local_a0 = iVar12;
    if (iVar14 < iVar12) {
      local_a0 = iVar14;
    }
    g_runtimeRecordCount_00857114 = (int)(iVar14 < iVar12);
    iVar14 = (int)*(short *)(&stack0xffffff4a + iVar4);
    local_50 = iVar12;
    if (iVar12 < iVar14) {
      local_50 = iVar14;
    }
    DAT_00857104 = (uint)(iVar12 < iVar14);
    iVar14 = (int)local_b0[param_4 * -4];
    if (iVar14 < local_9c) {
      local_9c = iVar14;
    }
    if (local_44 < iVar14) {
      local_44 = iVar14;
    }
    if (local_b0[param_4 * -4 + 1] < local_a0) {
      g_runtimeRecordCount_00857114 = 2;
      local_a0 = (int)local_b0[param_4 * -4 + 1];
    }
    if (local_50 < local_b0[param_4 * -4 + 1]) {
      DAT_00857104 = 2;
      local_50 = (int)local_b0[param_4 * -4 + 1];
    }
LAB_007294f8:
    if (2 < (int)DAT_0085710c) {
      if (param_5 == 0) {
        *(int *)(puVar13 + -4) = param_6;
        *(int *)(puVar13 + -8) = param_2;
        *(int *)(puVar13 + -0xc) = param_1;
        *(undefined4 *)(puVar13 + -0x10) = 0x729571;
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00728640::FUN_00728a80
                  (this,*(int *)(puVar13 + -0xc),*(int *)(puVar13 + -8),*(int *)(puVar13 + -4));
      }
      else if (((local_9c < STField<int>(this,0x30)) || (STField<int>(this,0x38) <= local_44))
              || ((local_a0 < STField<int>(this,0x34) || (STField<int>(this,0x3c) <= local_50)
                  ))) {
        *(int *)(puVar13 + -4) = param_6;
        *(int *)(puVar13 + -8) = param_2;
        *(int *)(puVar13 + -0xc) = param_1;
        *(undefined4 *)(puVar13 + -0x10) = 0x729558;
        FUN_007288a0(this,*(int *)(puVar13 + -0xc),*(int *)(puVar13 + -8),*(int *)(puVar13 + -4));
      }
      else {
        *(int *)(puVar13 + -4) = param_6;
        *(int *)(puVar13 + -8) = param_2;
        *(int *)(puVar13 + -0xc) = param_1;
        *(undefined4 *)(puVar13 + -0x10) = 0x729545;
        FUN_00728640(this,*(int *)(puVar13 + -0xc),*(int *)(puVar13 + -8),*(int *)(puVar13 + -4));
      }
    }
    local_94 = local_94 + -1;
    if (-1 < local_94) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      DAT_0085710c = *(uint *)(&stack0xffffff40 + local_94 * 8 + param_4 * -0x10);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      puVar8 = *(undefined4 **)(&stack0xffffff44 + local_94 * 8 + param_4 * -0x10);
      puVar16 = (undefined4 *)(&stack0xffffff40 + iVar4);
      for (iVar14 = (DAT_0085710c & 0x1fffffff) << 1; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar16 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar16 = puVar16 + 1;
      }
      for (iVar14 = 0; iVar14 != 0; iVar14 = iVar14 + -1) {
        *(undefined1 *)puVar16 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar16 = (undefined4 *)((int)puVar16 + 1);
      }
      goto LAB_00728ee6;
    }
  }
  ExceptionList = local_14;
  return 0;
}

