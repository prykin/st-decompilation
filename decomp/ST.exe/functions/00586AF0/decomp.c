#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STTypeFamilyApplier] RETURN_TO_LOCAL_FAMILY.
   Evidence: direct call return copied through registers into this script-owned anonymous stack
   local */

void __fastcall FUN_00586af0(int *param_1)

{
  STT3DSprC *this;
  byte bVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  short sVar5;
  uint uVar6;
  int iVar8;
  uint uVar9;
  int iVar7;
  int iVar9;
  STGameObjC *pSVar10;
  STGameObjC *this_00;
  int iVar11;
  uint local_EAX_2124;
  uint local_EAX_2928;
  int local_EAX_3393;
  undefined2 uVar14;
  int iVar12;
  uint uVar8;
  uint local_EAX_6098;
  int iVar13;
  uint local_EAX_6553;
  short sVar15;
  short sVar16;
  short sVar17;
  STWorldObject *pSVar18;
  AnonShape_0041AF40_F59F8577 *pAVar20;
  bool bVar21;
  AnonShape_0041AF40_F59F8577 local_6c;
  int local_4c;
  int local_48;
  STGameObjC *local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  ushort local_30 [2];
  short local_2c [2];
  ushort local_28 [2];
  int local_24;
  STWorldObject *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  char local_5;

  local_20 = nullptr;
  sVar15 = STField<short>(param_1,0x41);
  if (sVar15 < 0) {
    sVar15 = ((sVar15 / 0xc9 + (sVar15 >> 0xf)) - (short)((longlong)(int)sVar15 * 0x28c1979 >> 0x3f)
             ) + -1;
  }
  else {
    sVar15 = (sVar15 / 0xc9 + (sVar15 >> 0xf)) - (short)((longlong)(int)sVar15 * 0x28c1979 >> 0x3f);
  }
  STField<short>(param_1,0x47) = sVar15;
  STField<short>(param_1,0x5b) = sVar15;
  sVar15 = STField<short>(param_1,0x43);
  if (sVar15 < 0) {
    sVar15 = ((sVar15 / 0xc9 + (sVar15 >> 0xf)) - (short)((longlong)(int)sVar15 * 0x28c1979 >> 0x3f)
             ) + -1;
  }
  else {
    sVar15 = (sVar15 / 0xc9 + (sVar15 >> 0xf)) - (short)((longlong)(int)sVar15 * 0x28c1979 >> 0x3f);
  }
  STField<short>(param_1,0x49) = sVar15;
  STField<short>(param_1,0x5d) = sVar15;
  sVar15 = STField<short>(param_1,0x45);
  if (sVar15 < 0) {
    sVar15 = ((sVar15 / 200 + (sVar15 >> 0xf)) - (short)((longlong)(int)sVar15 * 0x51eb851f >> 0x3f)
             ) + -1;
  }
  else {
    sVar15 = (sVar15 / 200 + (sVar15 >> 0xf)) - (short)((longlong)(int)sVar15 * 0x51eb851f >> 0x3f);
  }
  STField<short>(param_1,0x4b) = sVar15;
  STField<short>(param_1,0x5f) = sVar15;
  iVar8 = thunk_FUN_0041c710((AnonShape_0041C710_C4D46939 *)param_1);
  this = (STT3DSprC *)((int)param_1 + 0x1d5);
  if (iVar8 == 0) {
    iVar8 = 0;
    uVar9 = thunk_FUN_004ad650(this);
    Library::Ourlib::ST3DSMAP::SprSetVisible(STField<void *>(param_1,0x211),uVar9,iVar8);
    iVar7 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)param_1);
    if (iVar7 == 1) {
      iVar8 = 1;
    }
    else {
      iVar8 = 0;
    }
  }
  else {
    iVar8 = 1;
    uVar9 = thunk_FUN_004ad650(this);
    Library::Ourlib::ST3DSMAP::SprSetVisible(STField<void *>(param_1,0x211),uVar9,iVar8);
    iVar8 = 1;
  }
  iVar9 = thunk_FUN_004ad650(this);
  FUN_006e6870(STField<void *>(param_1,0x211),iVar9,iVar8);
  iVar8 = STField<int>(param_1,0x231);
  if (iVar8 == 0) {
    lVar4 = (longlong)STField<int>(param_1,0x235) * 0xeeff;
    uVar9 = (uint)lVar4;
    STField<uint>(param_1,0x235) =
         (uVar9 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) + (uint)((uVar9 >> 0xf & 1) != 0);
    lVar4 = (longlong)STField<int>(param_1,0x239) * 0xeeff;
    uVar9 = (uint)lVar4;
    local_4c = STField<int>(param_1,0x23d);
    STField<uint>(param_1,0x239) =
         (uVar9 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) + (uint)((uVar9 >> 0xf & 1) != 0);
    uVar9 = (uint)((longlong)local_4c * 0xeeff);
    STField<uint>(param_1,0x23d) =
         (uVar9 >> 0x10 | (int)((ulonglong)((longlong)local_4c * 0xeeff) >> 0x20) << 0x10) +
         (uint)((uVar9 >> 0xf & 1) != 0);
    local_44 = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,STField<char>(param_1,0x26f),
                          STField<ushort>(param_1,0x273),CASE_1);
    if (local_44 == nullptr) {
LAB_00587844:
      local_44 = (STGameObjC *)thunk_FUN_00586320((AnonShape_00586320_9792A2C7 *)param_1);
      STField<uint>(param_1,0x253) = g_playSystem_00802A38->field_00E4;
      if ((local_44 == nullptr) || (STField<int>(param_1,0x231) != 0)) {
        STField<undefined4>(param_1,0x26b) = 0;
        STField<undefined4>(param_1,0x267) = 0;
        STField<undefined4>(param_1,0x263) = 0;
        goto LAB_00588350;
      }
      thunk_FUN_00416270(local_44,(uint *)((int)param_1 + 0x241),(int *)((int)param_1 + 0x243),
                         (short *)((int)param_1 + 0x245));
      local_EAX_3393 =
           FUN_006acf0d((int)STField<short>(param_1,0x41),(int)STField<short>(param_1,0x43),
                        (int)STField<short>(param_1,0x45),(int)STField<short>(param_1,0x241),
                        (int)STField<short>(param_1,0x243),(int)STField<short>(param_1,0x245));
    }
    else {
      thunk_FUN_00416270(local_44,(uint *)((int)param_1 + 0x241),(int *)((int)param_1 + 0x243),
                         (short *)((int)param_1 + 0x245));
      local_EAX_3393 =
           FUN_006acf0d((int)STField<short>(param_1,0x41),(int)STField<short>(param_1,0x43),
                        (int)STField<short>(param_1,0x45),(int)STField<short>(param_1,0x241),
                        (int)STField<short>(param_1,0x243),(int)STField<short>(param_1,0x245));
      if (DAT_0081170c < local_EAX_3393) goto LAB_00587844;
    }
    iVar8 = DAT_0081170c - local_EAX_3393;
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    iVar8 = (((iVar8 * iVar8) / 10) * (iVar8 / 10)) / 50000;
    STField<uint>(param_1,0x263) = STField<uint>(param_1,0x263) & 3;
    uVar9 = STField<uint>(param_1,0x26b) & 3;
    STField<uint>(param_1,0x267) = STField<uint>(param_1,0x267) & 3;
    STField<uint>(param_1,0x26b) = uVar9;
    if (local_EAX_3393 != 0) {
      STField<int>(param_1,0x263) =
           (((((int)STField<short>(param_1,0x241) - (int)STField<short>(param_1,0x41)) *
             DAT_0081170c) / local_EAX_3393) * iVar8 * 4) / 0x19640 + STField<int>(param_1,0x263);
      STField<int>(param_1,0x267) =
           (((((int)STField<short>(param_1,0x243) - (int)STField<short>(param_1,0x43)) *
             DAT_0081170c) / local_EAX_3393) * iVar8 * 4) / 0x19640 + STField<int>(param_1,0x267);
      uVar9 = ((((int)STField<short>(param_1,0x245) - (int)STField<short>(param_1,0x45)) *
               DAT_0081170c) / local_EAX_3393) * iVar8 * 4;
      STField<int>(param_1,0x26b) = (int)uVar9 / 0x19640 + STField<int>(param_1,0x26b);
    }
    local_48 = STReplaceLowWord((uint32_t)(uVar9), (uint16_t)(STField<short>(param_1,0x41)));
    local_4c = STReplaceLowWord((uint32_t)(iVar8), (uint16_t)(STField<short>(param_1,0x43)));
    local_10 = (STField<int>(param_1,0x263) >> 2) +
               ((int)(STField<int>(param_1,0x235) +
                     (STField<int>(param_1,0x235) >> 0x1f & 0xffffU)) >> 0x10) +
               (int)STField<short>(param_1,0x41);
    local_40 = STReplaceLowWord((uint32_t)(local_40), (uint16_t)(STField<short>(param_1,0x45)));
    local_14 = (STField<int>(param_1,0x267) >> 2) +
               ((int)(STField<int>(param_1,0x239) +
                     (STField<int>(param_1,0x239) >> 0x1f & 0xffffU)) >> 0x10) +
               (int)STField<short>(param_1,0x43);
    iVar8 = (STField<int>(param_1,0x26b) >> 2) +
            ((int)(STField<int>(param_1,0x23d) +
                  (STField<int>(param_1,0x23d) >> 0x1f & 0xffffU)) >> 0x10) +
            ((int)(STField<int>(param_1,0x25b) + (STField<int>(param_1,0x25b) >> 0x1f & 3U))
            >> 2) + (int)STField<short>(param_1,0x45);
    if (local_10 < 0) {
      local_10 = 0;
    }
    if (local_14 < 0) {
      local_14 = 0;
    }
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    if (g_worldGrid.sizeX * 0xc9 <= local_10) {
      local_10 = g_worldGrid.sizeX * 0xc9 + -1;
    }
    iVar11 = local_10;
    if (g_worldGrid.sizeY * 0xc9 <= local_14) {
      local_14 = g_worldGrid.sizeY * 0xc9 + -1;
    }
    if (g_worldGrid.sizeZ * 200 <= iVar8) {
      iVar8 = g_worldGrid.sizeZ * 200 + -1;
    }
    sVar15 = (short)(local_10 >> 0x1f);
    if (local_10 < 0) {
      local_34 = (short)(((short)(local_10 / 0xc9) + sVar15) -
                        (short)((longlong)local_10 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_34 = (int)(short)(((short)(local_10 / 0xc9) + sVar15) -
                             (short)((longlong)local_10 * 0x28c1979 >> 0x3f));
    }
    sVar15 = (short)(local_14 >> 0x1f);
    if (local_14 < 0) {
      local_38 = (short)(((short)(local_14 / 0xc9) + sVar15) -
                        (short)((longlong)local_14 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_38 = (int)(short)(((short)(local_14 / 0xc9) + sVar15) -
                             (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
    }
    sVar15 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      local_3c = (short)(((short)(iVar8 / 200) + sVar15) -
                        (short)((longlong)iVar8 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      local_3c = (int)(short)(((short)(iVar8 / 200) + sVar15) -
                             (short)((longlong)iVar8 * 0x51eb851f >> 0x3f));
    }
    param_1[0x9e] = -1;
    local_1c = local_14;
    local_18 = iVar8;
    local_c = local_10;
    if (((((g_playSystem_00802A38->field_00E4 & 1) != 0) && (local_44->field_0047 == local_34)) &&
        (local_44->field_0049 == local_38)) && (local_44->field_004B == local_3c)) {
      uVar14 = (undefined2)((uint)local_3c >> 0x10);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar13 = (*local_44->vtable->vfunc_DC)
                         (local_48,local_4c,local_40,
                          CONCAT22(uVar14,STField<undefined2>(param_1,0x24d)),
                          CONCAT22(uVar14,STField<undefined2>(param_1,0x24f)),
                          CONCAT22(uVar14,STField<undefined2>(param_1,0x251)));
      param_1[0x9e] = iVar13;
    }
    if (param_1[0x9e] < 0) {
      sVar15 = STField<short>(param_1,0x41);
      if (sVar15 < 0) {
        iVar13 = (short)((sVar15 / 0xc9 + (sVar15 >> 0xf)) -
                        (short)((longlong)(int)sVar15 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar13 = (int)(short)((sVar15 / 0xc9 + (sVar15 >> 0xf)) -
                             (short)((longlong)(int)sVar15 * 0x28c1979 >> 0x3f));
      }
      iVar12 = param_1[0xa4];
      sVar15 = (short)(iVar12 >> 0x1f);
      if (iVar12 < 0) {
        iVar12 = (short)(((short)(iVar12 / 0xc9) + sVar15) -
                        (short)((longlong)iVar12 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar12 = (int)(short)(((short)(iVar12 / 0xc9) + sVar15) -
                             (short)((longlong)iVar12 * 0x28c1979 >> 0x3f));
      }
      if (iVar13 == iVar12) {
        sVar15 = STField<short>(param_1,0x43);
        if (sVar15 < 0) {
          iVar13 = (short)((sVar15 / 0xc9 + (sVar15 >> 0xf)) -
                          (short)((longlong)(int)sVar15 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar13 = (int)(short)((sVar15 / 0xc9 + (sVar15 >> 0xf)) -
                               (short)((longlong)(int)sVar15 * 0x28c1979 >> 0x3f));
        }
        iVar12 = param_1[0xa5];
        sVar15 = (short)(iVar12 >> 0x1f);
        if (iVar12 < 0) {
          iVar12 = (short)(((short)(iVar12 / 0xc9) + sVar15) -
                          (short)((longlong)iVar12 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar12 = (int)(short)(((short)(iVar12 / 0xc9) + sVar15) -
                               (short)((longlong)iVar12 * 0x28c1979 >> 0x3f));
        }
        if (iVar13 != iVar12) goto LAB_00587dde;
        sVar15 = STField<short>(param_1,0x45);
        if (sVar15 < 0) {
          iVar13 = (short)((sVar15 / 200 + (sVar15 >> 0xf)) -
                          (short)((longlong)(int)sVar15 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          iVar13 = (int)(short)((sVar15 / 200 + (sVar15 >> 0xf)) -
                               (short)((longlong)(int)sVar15 * 0x51eb851f >> 0x3f));
        }
        iVar12 = param_1[0xa6];
        sVar15 = (short)(iVar12 >> 0x1f);
        if (iVar12 < 0) {
          iVar12 = (short)(((short)(iVar12 / 200) + sVar15) -
                          (short)((longlong)iVar12 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          iVar12 = (int)(short)(((short)(iVar12 / 200) + sVar15) -
                               (short)((longlong)iVar12 * 0x51eb851f >> 0x3f));
        }
        if (iVar13 != iVar12) goto LAB_00587dde;
LAB_00587fb9:
        iVar8 = 0;
        pSVar18 = local_20;
      }
      else {
LAB_00587dde:
        sVar15 = (short)local_34;
        if ((((sVar15 < 0) || (g_worldGrid.sizeX <= sVar15)) ||
            ((sVar16 = (short)local_38, sVar16 < 0 ||
             ((g_worldGrid.sizeY <= sVar16 || (sVar17 = (short)local_3c, sVar17 < 0)))))) ||
           ((g_worldGrid.sizeZ <= sVar17 ||
            (pSVar18 = STGridAt3D(g_worldGrid, sVar15, sVar16, sVar17).objects[0],
            local_20 = pSVar18, pSVar18 == nullptr)))) {
          uVar8 = thunk_FUN_00496250(iVar11,local_14,iVar8);
          local_20 = (STWorldObject *)(uint)(-1 < (int)uVar8);
          goto LAB_00587fb9;
        }
        if ((pSVar18->value_20 != 0xb4) &&
           (iVar8 = (*pSVar18->vtable[5].slots_00_28[2])(), iVar8 != 0)) {
          if (((pSVar18->value_20 == 1000) || (pSVar18->value_20 == 0x14)) &&
             ((pSVar18[1].vtable < (STWorldObjectVTable *)0x8 &&
              ((g_playSystem_00802A38 == nullptr ||
               (g_bulkInitializedRecords_008087C7[(int)pSVar18[1].vtable].field_0022 < 8)))))) {
            iVar8 = param_1[4];
            bVar1 = *(byte *)&pSVar18[1].vtable;
            bVar2 = *(byte *)(param_1 + 9);
            local_4c = STReplaceLowByte((uint32_t)(local_4c), (uint8_t)(bVar1));
            local_48 = STReplaceLowByte((uint32_t)(local_48), (uint8_t)(bVar2));
            if (*(char *)(iVar8 + 0x146f) == '\0') {
              if (bVar1 == bVar2) {
LAB_00587f89:
                iVar8 = 0;
              }
              else {
                uVar9 = (uint)bVar1;
                uVar6 = (uint)bVar2;
                cVar3 = *(char *)(iVar8 + uVar9 * 8 + 0x142f + uVar6);
                if ((cVar3 == '\0') && (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) == '\0')) {
                  iVar8 = -2;
                }
                else if ((cVar3 == '\x01') &&
                        (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) == '\0')) {
                  iVar8 = -1;
                }
                else if ((cVar3 == '\0') &&
                        (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) == '\x01')) {
                  iVar8 = 1;
                }
                else {
                  if ((cVar3 != '\x01') || (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) != '\x01')
                     ) goto LAB_00587f89;
                  iVar8 = 2;
                }
              }
              bVar21 = iVar8 < 0;
            }
            else {
              bVar21 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar8) !=
                       *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar8);
            }
            if (bVar21) goto LAB_00587f98;
          }
          goto LAB_00587fb9;
        }
LAB_00587f98:
        iVar8 = 0;
        pSVar18 = nullptr;
      }
      do {
        if (pSVar18 == nullptr) {
          if (iVar8 < 7) {
            iVar8 = local_18;
            if (local_18 < 0) {
              iVar8 = 0;
              STField<int>(param_1,0x25f) = -STField<int>(param_1,0x25f);
            }
            sub_00416240(param_1,(ushort)local_c,(short)local_1c,(ushort)iVar8);
          }
          break;
        }
        switch(iVar8) {
        case 0:
        case 2:
          local_c = (int)STField<short>(param_1,0x41);
          break;
        case 1:
          local_1c = (int)STField<short>(param_1,0x43);
          local_c = local_10;
          break;
        case 3:
          local_c = local_10;
          goto LAB_00588002;
        case 4:
          local_c = (int)STField<short>(param_1,0x41);
LAB_00588002:
          local_1c = local_14;
          local_18 = ((int)(STField<int>(param_1,0x25b) +
                           (STField<int>(param_1,0x25b) >> 0x1f & 3U)) >> 2) +
                     (int)STField<short>(param_1,0x45);
          break;
        case 5:
          local_1c = (int)STField<short>(param_1,0x43);
          local_c = local_10;
          local_18 = ((int)(STField<int>(param_1,0x25b) +
                           (STField<int>(param_1,0x25b) >> 0x1f & 3U)) >> 2) +
                     (int)STField<short>(param_1,0x45);
          break;
        case 6:
          local_10 = (int)STField<short>(param_1,0x41);
          local_14 = (int)STField<short>(param_1,0x43);
        }
        local_38 = iVar8 + 1;
        sVar15 = (short)(local_c >> 0x1f);
        if (local_c < 0) {
          local_34 = (short)(((short)(local_c / 0xc9) + sVar15) -
                            (short)((longlong)local_c * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          local_34 = (int)(short)(((short)(local_c / 0xc9) + sVar15) -
                                 (short)((longlong)local_c * 0x28c1979 >> 0x3f));
        }
        sVar15 = (short)(local_1c >> 0x1f);
        if (local_1c < 0) {
          sVar15 = (((short)(local_1c / 0xc9) + sVar15) -
                   (short)((longlong)local_1c * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          sVar15 = ((short)(local_1c / 0xc9) + sVar15) -
                   (short)((longlong)local_1c * 0x28c1979 >> 0x3f);
        }
        sVar16 = (short)(local_18 >> 0x1f);
        if (local_18 < 0) {
          sVar16 = (((short)(local_18 / 200) + sVar16) -
                   (short)((longlong)local_18 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          sVar16 = ((short)(local_18 / 200) + sVar16) -
                   (short)((longlong)local_18 * 0x51eb851f >> 0x3f);
        }
        sVar17 = (short)local_34;
        if ((((sVar17 < 0) || (g_worldGrid.sizeX <= sVar17)) || (sVar15 < 0)) ||
           (((g_worldGrid.sizeY <= sVar15 || (sVar16 < 0)) ||
            ((g_worldGrid.sizeZ <= sVar16 ||
             (pSVar18 = STGridAt3D(g_worldGrid, sVar17, sVar15, sVar16).objects[0],
             pSVar18 == nullptr)))))) {
          local_EAX_6098 = thunk_FUN_00496250(local_c,local_1c,local_18);
          pSVar18 = (STWorldObject *)(uint)(-1 < (int)local_EAX_6098);
        }
        else if ((pSVar18->value_20 == 0xb4) ||
                (iVar8 = (*pSVar18->vtable[5].slots_00_28[2])(), iVar8 == 0)) {
LAB_005882af:
          pSVar18 = nullptr;
        }
        else if ((((pSVar18->value_20 == 1000) || (pSVar18->value_20 == 0x14)) &&
                 (pSVar18[1].vtable < (STWorldObjectVTable *)0x8)) &&
                ((g_playSystem_00802A38 == nullptr ||
                 (g_bulkInitializedRecords_008087C7[(int)pSVar18[1].vtable].field_0022 < 8)))) {
          iVar8 = param_1[4];
          bVar1 = *(byte *)&pSVar18[1].vtable;
          bVar2 = *(byte *)(param_1 + 9);
          local_4c = STReplaceLowByte((uint32_t)(local_4c), (uint8_t)(bVar1));
          local_48 = STReplaceLowByte((uint32_t)(local_48), (uint8_t)(bVar2));
          if (*(char *)(iVar8 + 0x146f) == '\0') {
            if (bVar1 == bVar2) {
LAB_005882a0:
              iVar8 = 0;
            }
            else {
              uVar9 = (uint)bVar1;
              uVar6 = (uint)bVar2;
              local_5 = *(char *)(iVar8 + uVar9 * 8 + 0x142f + uVar6);
              if ((local_5 == '\0') && (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) == '\0')) {
                iVar8 = -2;
              }
              else if ((local_5 == '\x01') &&
                      (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) == '\0')) {
                iVar8 = -1;
              }
              else if ((local_5 == '\0') &&
                      (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) == '\x01')) {
                iVar8 = 1;
              }
              else {
                if ((local_5 != '\x01') || (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) != '\x01')
                   ) goto LAB_005882a0;
                iVar8 = 2;
              }
            }
            bVar21 = iVar8 < 0;
          }
          else {
            local_44 = (STGameObjC *)(iVar8 + (uint)bVar2 * 0x48);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            bVar21 = *(char *)((int)&local_44[2].field_0185 + (uint)bVar2 * 9 + 1) !=
                     *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar8);
          }
          if (bVar21) goto LAB_005882af;
        }
        iVar8 = local_38;
      } while (local_38 < 7);
      iVar8 = STField<int>(param_1,0x25b) + STField<int>(param_1,0x25f);
      STField<int>(param_1,0x25b) = iVar8;
      if (iVar8 < 0xd) {
        if (iVar8 < -0xc) {
          STField<undefined4>(param_1,0x25f) = 2;
        }
      }
      else {
        STField<undefined4>(param_1,0x25f) = 0xfffffffe;
      }
    }
    else {
      STField<undefined4>(param_1,0x231) = 2;
      STT3DSprC::StopShow((STT3DSprC *)((int)param_1 + 0x1d5),0xe);
      thunk_FUN_004ad5e0((STT3DSprC *)((int)param_1 + 0x1d5));
      thunk_FUN_00589870(param_1,(int)STField<short>(param_1,0x41),
                         (int)STField<short>(param_1,0x43),0x45c);
      iVar8 = thunk_FUN_00589740((AnonShape_00589740_397F9B27 *)param_1);
      pSVar10 = local_44;
      if (iVar8 != 0) goto LAB_00587761;
      (*local_44->vtable->vfunc_E0)
                (param_1[0x9e],(int)param_1 + 0x41,(int)param_1 + 0x43,(int)param_1 + 0x45,&local_24
                );
      if (local_24 == 0) {
        Library::Ourlib::ST3DSMAP::SprSetLevBefore
                  (STField<void *>(param_1,0x211),STField<uint>(param_1,0x1ed),
                   pSVar10->field_01ED);
      }
      else {
        Library::Ourlib::ST3DSMAP::SprSetLevAfter
                  (STField<void *>(param_1,0x211),STField<uint>(param_1,0x1ed),
                   pSVar10->field_01ED);
      }
    }
  }
  else if (iVar8 == 1) {
    if (STField<int>(param_1,599) == 0) {
      STField<uint>(param_1,599) = g_playSystem_00802A38->field_00E4;
    }
    lVar4 = (longlong)STField<int>(param_1,0x235) * 0xeeff;
    uVar9 = (uint)lVar4;
    STField<uint>(param_1,0x235) =
         (uVar9 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) + (uint)((uVar9 >> 0xf & 1) != 0);
    lVar4 = (longlong)STField<int>(param_1,0x239) * 0xeeff;
    uVar9 = (uint)lVar4;
    STField<uint>(param_1,0x239) =
         (uVar9 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) + (uint)((uVar9 >> 0xf & 1) != 0);
    lVar4 = (longlong)STField<int>(param_1,0x23d) * 0xeeff;
    uVar9 = (uint)lVar4;
    iVar8 = (uVar9 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
            (uint)((uVar9 >> 0xf & 1) != 0);
    sVar15 = STField<short>(param_1,0x41);
    STField<int>(param_1,0x23d) = iVar8;
    iVar11 = (int)sVar15;
    local_10 = ((int)(STField<int>(param_1,0x235) +
                     (STField<int>(param_1,0x235) >> 0x1f & 0xffffU)) >> 0x10) + iVar11;
    sVar16 = STField<short>(param_1,0x43);
    local_4c = STReplaceLowWord((uint32_t)(local_10), (uint16_t)(sVar16));
    local_44 = (STGameObjC *)(int)sVar16;
    local_14 = (int)&local_44->vtable +
               ((int)(STField<int>(param_1,0x239) +
                     (STField<int>(param_1,0x239) >> 0x1f & 0xffffU)) >> 0x10);
    sVar17 = STField<short>(param_1,0x45);
    local_40 = STReplaceLowWord((uint32_t)(local_14), (uint16_t)(sVar17));
    local_48 = (int)sVar17;
    local_18 = ((int)(STField<int>(param_1,0x25b) + (STField<int>(param_1,0x25b) >> 0x1f & 3U)
                     ) >> 2) + local_48 + ((int)(iVar8 + (iVar8 >> 0x1f & 0xffffU)) >> 0x10);
    if (local_10 < 0) {
      local_10 = 0;
    }
    if (local_14 < 0) {
      local_14 = 0;
    }
    if (local_18 < 0) {
      local_18 = 0;
    }
    if (g_worldGrid.sizeX * 0xc9 <= local_10) {
      local_10 = g_worldGrid.sizeX * 0xc9 + -1;
    }
    if (g_worldGrid.sizeY * 0xc9 <= local_14) {
      local_14 = g_worldGrid.sizeY * 0xc9 + -1;
    }
    if (g_worldGrid.sizeZ * 200 <= local_18) {
      local_18 = g_worldGrid.sizeZ * 200 + -1;
    }
    local_c = local_10;
    local_1c = local_14;
    sVar5 = (short)(local_10 >> 0x1f);
    if (local_10 < 0) {
      local_34 = (short)(((short)(local_10 / 0xc9) + sVar5) -
                        (short)((longlong)local_10 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_34 = (int)(short)(((short)(local_10 / 0xc9) + sVar5) -
                             (short)((longlong)local_10 * 0x28c1979 >> 0x3f));
    }
    sVar5 = (short)(local_14 >> 0x1f);
    if (local_14 < 0) {
      local_38 = (short)(((short)(local_14 / 0xc9) + sVar5) -
                        (short)((longlong)local_14 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_38 = (int)(short)(((short)(local_14 / 0xc9) + sVar5) -
                             (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
    }
    sVar5 = (short)(local_18 >> 0x1f);
    if (local_18 < 0) {
      local_3c = (short)(((short)(local_18 / 200) + sVar5) -
                        (short)((longlong)local_18 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      local_3c = (int)(short)(((short)(local_18 / 200) + sVar5) -
                             (short)((longlong)local_18 * 0x51eb851f >> 0x3f));
    }
    if (sVar15 < 0) {
      iVar8 = (short)((sVar15 / 0xc9 + (sVar15 >> 0xf)) -
                     (short)((longlong)iVar11 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar8 = (int)(short)((sVar15 / 0xc9 + (sVar15 >> 0xf)) -
                          (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
    }
    iVar11 = param_1[0xa4];
    sVar15 = (short)(iVar11 >> 0x1f);
    if (iVar11 < 0) {
      iVar11 = (short)(((short)(iVar11 / 0xc9) + sVar15) -
                      (short)((longlong)iVar11 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar11 = (int)(short)(((short)(iVar11 / 0xc9) + sVar15) -
                           (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
    }
    if (iVar8 == iVar11) {
      if (sVar16 < 0) {
        iVar8 = (short)((sVar16 / 0xc9 + (sVar16 >> 0xf)) -
                       (short)((longlong)(int)local_44 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar8 = (int)(short)((sVar16 / 0xc9 + (sVar16 >> 0xf)) -
                            (short)((longlong)(int)local_44 * 0x28c1979 >> 0x3f));
      }
      iVar11 = param_1[0xa5];
      sVar15 = (short)(iVar11 >> 0x1f);
      if (iVar11 < 0) {
        iVar11 = (short)(((short)(iVar11 / 0xc9) + sVar15) -
                        (short)((longlong)iVar11 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar11 = (int)(short)(((short)(iVar11 / 0xc9) + sVar15) -
                             (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
      }
      if (iVar8 != iVar11) goto LAB_00587161;
      if (sVar17 < 0) {
        iVar8 = (short)((sVar17 / 200 + (sVar17 >> 0xf)) -
                       (short)((longlong)local_48 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar8 = (int)(short)((sVar17 / 200 + (sVar17 >> 0xf)) -
                            (short)((longlong)local_48 * 0x51eb851f >> 0x3f));
      }
      iVar11 = param_1[0xa6];
      sVar15 = (short)(iVar11 >> 0x1f);
      if (iVar11 < 0) {
        iVar11 = (short)(((short)(iVar11 / 200) + sVar15) -
                        (short)((longlong)iVar11 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar11 = (int)(short)(((short)(iVar11 / 200) + sVar15) -
                             (short)((longlong)iVar11 * 0x51eb851f >> 0x3f));
      }
      pSVar18 = local_20;
      if (iVar8 != iVar11) goto LAB_00587161;
      goto LAB_00587359;
    }
LAB_00587161:
    sVar15 = (short)local_34;
    if (((((sVar15 < 0) || (g_worldGrid.sizeX <= sVar15)) ||
         ((sVar16 = (short)local_38, sVar16 < 0 ||
          ((g_worldGrid.sizeY <= sVar16 || (sVar17 = (short)local_3c, sVar17 < 0)))))) ||
        (g_worldGrid.sizeZ <= sVar17)) ||
       (pSVar18 = STGridAt3D(g_worldGrid, sVar15, sVar16, sVar17).objects[0], local_20 = pSVar18, pSVar18 == nullptr))
    {
      local_EAX_2124 = thunk_FUN_00496250(local_10,local_14,local_18);
      local_38 = 0;
      iVar8 = local_18;
      pSVar18 = (STWorldObject *)(uint)(-1 < (int)local_EAX_2124);
    }
    else if ((pSVar18->value_20 == 0xb4) ||
            (iVar8 = (*pSVar18->vtable[5].slots_00_28[2])(), iVar8 == 0)) {
LAB_00587323:
      local_38 = 0;
      iVar8 = local_18;
      pSVar18 = nullptr;
    }
    else {
      if (((pSVar18->value_20 == 1000) || (pSVar18->value_20 == 0x14)) &&
         ((pSVar18[1].vtable < (STWorldObjectVTable *)0x8 &&
          ((g_playSystem_00802A38 == nullptr ||
           (g_bulkInitializedRecords_008087C7[(int)pSVar18[1].vtable].field_0022 < 8)))))) {
        iVar8 = param_1[4];
        bVar1 = *(byte *)&pSVar18[1].vtable;
        bVar2 = *(byte *)(param_1 + 9);
        local_4c = STReplaceLowByte((uint32_t)(local_4c), (uint8_t)(bVar1));
        local_48 = STReplaceLowByte((uint32_t)(local_48), (uint8_t)(bVar2));
        if (*(char *)(iVar8 + 0x146f) == '\0') {
          if (bVar1 == bVar2) {
            iVar8 = 0;
          }
          else {
            uVar9 = (uint)bVar1;
            uVar6 = (uint)bVar2;
            cVar3 = *(char *)(iVar8 + uVar9 * 8 + 0x142f + uVar6);
            pSVar18 = local_20;
            if ((cVar3 == '\0') && (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) == '\0')) {
              iVar8 = -2;
            }
            else if ((cVar3 == '\x01') && (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) == '\0')) {
              iVar8 = -1;
            }
            else if ((cVar3 == '\0') && (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) == '\x01')) {
              iVar8 = 1;
            }
            else if ((cVar3 == '\x01') && (*(char *)(iVar8 + uVar6 * 8 + 0x142f + uVar9) == '\x01'))
            {
              iVar8 = 2;
            }
            else {
              iVar8 = 0;
            }
          }
          bVar21 = iVar8 < 0;
        }
        else {
          bVar21 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar8) !=
                   *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar8);
        }
        if (bVar21) goto LAB_00587323;
      }
LAB_00587359:
      local_38 = 0;
      iVar8 = local_18;
    }
    do {
      if (pSVar18 == nullptr) {
        if (local_38 < 7) {
          if (iVar8 < 0) {
            iVar8 = 0;
            STField<undefined4>(param_1,0x25f) = 2;
          }
          sub_00416240(param_1,(ushort)local_c,(short)local_1c,(ushort)iVar8);
        }
        break;
      }
      switch(local_38) {
      case 0:
      case 2:
        local_c = (int)STField<short>(param_1,0x41);
        break;
      case 1:
        local_1c = (int)STField<short>(param_1,0x43);
        local_c = local_10;
        break;
      case 3:
        local_c = local_10;
        goto LAB_005873a4;
      case 4:
        local_c = (int)STField<short>(param_1,0x41);
LAB_005873a4:
        local_1c = local_14;
        iVar8 = ((int)(STField<int>(param_1,0x25b) +
                      (STField<int>(param_1,0x25b) >> 0x1f & 3U)) >> 2) +
                (int)STField<short>(param_1,0x45);
        local_18 = iVar8;
        break;
      case 5:
        local_1c = (int)STField<short>(param_1,0x43);
        local_c = local_10;
        iVar8 = ((int)(STField<int>(param_1,0x25b) +
                      (STField<int>(param_1,0x25b) >> 0x1f & 3U)) >> 2) +
                (int)STField<short>(param_1,0x45);
        local_18 = iVar8;
        break;
      case 6:
        local_10 = (int)STField<short>(param_1,0x41);
        local_14 = (int)STField<short>(param_1,0x43);
      }
      local_38 = local_38 + 1;
      sVar15 = (short)(local_c >> 0x1f);
      if (local_c < 0) {
        sVar15 = (((short)(local_c / 0xc9) + sVar15) -
                 (short)((longlong)local_c * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        sVar15 = ((short)(local_c / 0xc9) + sVar15) - (short)((longlong)local_c * 0x28c1979 >> 0x3f);
      }
      sVar16 = (short)(local_1c >> 0x1f);
      if (local_1c < 0) {
        sVar16 = (((short)(local_1c / 0xc9) + sVar16) -
                 (short)((longlong)local_1c * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        sVar16 = ((short)(local_1c / 0xc9) + sVar16) -
                 (short)((longlong)local_1c * 0x28c1979 >> 0x3f);
      }
      sVar17 = (short)(iVar8 >> 0x1f);
      if (iVar8 < 0) {
        sVar17 = (((short)(iVar8 / 200) + sVar17) - (short)((longlong)iVar8 * 0x51eb851f >> 0x3f)) +
                 -1;
      }
      else {
        sVar17 = ((short)(iVar8 / 200) + sVar17) - (short)((longlong)iVar8 * 0x51eb851f >> 0x3f);
      }
      if ((((((sVar15 < 0) || (g_worldGrid.sizeX <= sVar15)) || (sVar16 < 0)) ||
           ((g_worldGrid.sizeY <= sVar16 || (sVar17 < 0)))) || (g_worldGrid.sizeZ <= sVar17)) ||
         (pSVar18 = STGridAt3D(g_worldGrid, sVar15, sVar16, sVar17).objects[0],
         local_20 = pSVar18, pSVar18 == nullptr)) {
        local_EAX_2928 = thunk_FUN_00496250(local_c,local_1c,iVar8);
        local_20 = (STWorldObject *)(uint)(-1 < (int)local_EAX_2928);
      }
      else if ((pSVar18->value_20 == 0xb4) ||
              (iVar11 = (*pSVar18->vtable[5].slots_00_28[2])(), iVar11 == 0)) {
LAB_00587648:
        local_20 = nullptr;
      }
      else if ((((pSVar18->value_20 == 1000) || (pSVar18->value_20 == 0x14)) &&
               (pSVar18[1].vtable < (STWorldObjectVTable *)0x8)) &&
              ((g_playSystem_00802A38 == nullptr ||
               (g_bulkInitializedRecords_008087C7[(int)pSVar18[1].vtable].field_0022 < 8)))) {
        iVar11 = param_1[4];
        bVar1 = *(byte *)&pSVar18[1].vtable;
        bVar2 = *(byte *)(param_1 + 9);
        local_4c = STReplaceLowByte((uint32_t)(local_4c), (uint8_t)(bVar1));
        local_48 = STReplaceLowByte((uint32_t)(local_48), (uint8_t)(bVar2));
        if (*(char *)(iVar11 + 0x146f) == '\0') {
          if (bVar1 == bVar2) {
            iVar11 = 0;
          }
          else {
            uVar9 = (uint)bVar1;
            uVar6 = (uint)bVar2;
            cVar3 = *(char *)(iVar11 + uVar9 * 8 + 0x142f + uVar6);
            iVar8 = local_18;
            if ((cVar3 == '\0') && (*(char *)(iVar11 + uVar6 * 8 + 0x142f + uVar9) == '\0')) {
              iVar11 = -2;
            }
            else if ((cVar3 == '\x01') && (*(char *)(iVar11 + uVar6 * 8 + 0x142f + uVar9) == '\0'))
            {
              iVar11 = -1;
            }
            else if ((cVar3 == '\0') && (*(char *)(iVar11 + uVar6 * 8 + 0x142f + uVar9) == '\x01'))
            {
              iVar11 = 1;
            }
            else if ((cVar3 == '\x01') && (*(char *)(iVar11 + uVar6 * 8 + 0x142f + uVar9) == '\x01')
                    ) {
              iVar11 = 2;
            }
            else {
              iVar11 = 0;
            }
          }
          bVar21 = iVar11 < 0;
        }
        else {
          local_5 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar11);
          local_44 = nullptr;
          bVar21 = local_5 != *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar11);
        }
        if (bVar21) goto LAB_00587648;
      }
      pSVar18 = local_20;
    } while (local_38 < 7);
    iVar8 = STField<int>(param_1,0x25b) + STField<int>(param_1,0x25f);
    STField<int>(param_1,0x25b) = iVar8;
    if (iVar8 < 0xd) {
      if (iVar8 < -0xc) {
        STField<undefined4>(param_1,0x25f) = 2;
      }
    }
    else {
      STField<undefined4>(param_1,0x25f) = 0xfffffffe;
    }
    if (10 < g_playSystem_00802A38->field_00E4 - STField<int>(param_1,0x253)) {
      thunk_FUN_00586320((AnonShape_00586320_9792A2C7 *)param_1);
      STField<uint>(param_1,0x253) = g_playSystem_00802A38->field_00E4;
    }
    if (4000 < g_playSystem_00802A38->field_00E4 - STField<int>(param_1,599)) {
      STField<undefined4>(param_1,0x231) = 2;
      STT3DSprC::StopShow((STT3DSprC *)((int)param_1 + 0x1d5),0xe);
      thunk_FUN_004ad5e0((STT3DSprC *)((int)param_1 + 0x1d5));
      STField<undefined4>(param_1,0x26f) = 0xff;
      iVar8 = thunk_FUN_00589740((AnonShape_00589740_397F9B27 *)param_1);
      if (iVar8 == 0) goto LAB_00588350;
LAB_00587761:
      thunk_FUN_005862e0(param_1);
    }
  }
  else if (iVar8 == 2) {
    pSVar10 = (STGameObjC *)thunk_FUN_004ac910(this,'\b');
    local_44 = pSVar10;
    if ((pSVar10 == (STGameObjC *)0x1) && (STField<int>(param_1,0x26f) != 0xff)) {
      this_00 = STAllPlayersC::GetObjPtr
                          (g_allPlayers_007FA174,(char)STField<int>(param_1,0x26f),
                           STField<ushort>(param_1,0x273),CASE_1);
      if (this_00 != nullptr) {
        memset(&DAT_008116f0, 0, 0x1c); /* compiler bulk-zero initialization */
        DAT_008116f0 = DAT_007e660c;
        _DAT_008116fc = (undefined2)param_1[0xa9];
        _DAT_008116fe = (undefined2)param_1[0xa8];
        _DAT_008116f8 = param_1[0xa0];
        iVar8 = 8;
        DAT_008116f4 = 0xab;
        pAVar20 = &local_6c;
        while( true ) {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          *(undefined4 *)pAVar20 = 0;
          pAVar20 = (AnonShape_0041AF40_F59F8577 *)&pAVar20->field_0x4;
        }
        STPiece<8,4>(local_6c) = this_00->field_0008;
        STPiece<12,4>(local_6c) = 2;
        local_6c.field_0010 = 0x110;
        local_6c.field_0014 = &DAT_008116f0;
        this_00->GetMessage(&local_6c);
        pSVar10 = local_44;
      }
    }
    if ((STField<char>(param_1,0x275) != '\0') &&
       (pSVar10 == (STGameObjC *)(uint)STField<byte>(param_1,0x276))) {
      STT3DSprC::StartShow(this,9,g_playSystem_00802A38->field_00E4);
      thunk_FUN_004ad0e0(this,9);
    }
    iVar8 = STT3DSprC::sub_004ACD30(this,'\b');
    if (pSVar10 == (STGameObjC *)(iVar8 - 1U)) {
      STT3DSprC::StopShow(this,8);
    }
    iVar8 = STT3DSprC::sub_004ACD30(this,'\n');
    if (pSVar10 == (STGameObjC *)(iVar8 - 1U)) {
      STT3DSprC::StopShow(this,10);
    }
    if (STField<char>(param_1,0x275) != '\0') {
      iVar8 = STT3DSprC::sub_004ACD30(this,'\t');
      iVar11 = thunk_FUN_004ac910(this,'\t');
      pSVar10 = local_44;
      if (iVar11 == iVar8 + -1) {
        STT3DSprC::StopShow(this,9);
        STField<undefined1>(param_1,0x275) = 0;
        pSVar10 = local_44;
      }
    }
    iVar8 = STT3DSprC::sub_004ACD30(this,'\b');
    if ((pSVar10 == (STGameObjC *)(iVar8 - 1U)) && (STField<char>(param_1,0x275) == '\0')) {
      thunk_FUN_005862e0(param_1);
      return;
    }
    if ((((int)pSVar10 < 10) && (STField<int>(param_1,0x26f) != 0xff)) &&
       (pSVar10 = STAllPlayersC::GetObjPtr
                            (g_allPlayers_007FA174,(char)STField<int>(param_1,0x26f),
                             STField<ushort>(param_1,0x273),CASE_1), pSVar10 != nullptr
       )) {
      (*pSVar10->vtable->vfunc_E0)(param_1[0x9e],local_28,local_2c,local_30,&local_24);
      sub_00416240(param_1,local_28[0],local_2c[0],local_30[0]);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1 + 0xd8))();
      return;
    }
    goto LAB_005884da;
  }
LAB_00588350:
  sVar15 = STField<short>(param_1,0x41);
  sVar16 = STField<short>(param_1,0x43);
  sVar17 = STField<short>(param_1,0x45);
  STField<short>(param_1,0x24d) = sVar15;
  STField<short>(param_1,0x24f) = sVar16;
  STField<short>(param_1,0x251) = sVar17;
  if (STField<int>(param_1,0x231) != 2) {
    if (sVar15 < 0) {
      iVar8 = (short)((sVar15 / 0xc9 + (sVar15 >> 0xf)) -
                     (short)((longlong)(int)sVar15 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar8 = (int)(short)((sVar15 / 0xc9 + (sVar15 >> 0xf)) -
                          (short)((longlong)(int)sVar15 * 0x28c1979 >> 0x3f));
    }
    if (sVar16 < 0) {
      iVar11 = (short)((sVar16 / 0xc9 + (sVar16 >> 0xf)) -
                      (short)((longlong)(int)sVar16 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar11 = (int)(short)((sVar16 / 0xc9 + (sVar16 >> 0xf)) -
                           (short)((longlong)(int)sVar16 * 0x28c1979 >> 0x3f));
    }
    if (sVar17 < 0) {
      iVar13 = (short)((sVar17 / 200 + (sVar17 >> 0xf)) -
                      (short)((longlong)(int)sVar17 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      iVar13 = (int)(short)((sVar17 / 200 + (sVar17 >> 0xf)) -
                           (short)((longlong)(int)sVar17 * 0x51eb851f >> 0x3f));
    }
    if ((((STField<short>(param_1,0x47) != iVar8) || (STField<short>(param_1,0x49) != iVar11))
        || (STField<short>(param_1,0x4b) != iVar13)) &&
       (((-1 < iVar8 && (-1 < iVar11)) &&
        ((iVar8 < g_worldGrid.sizeX &&
         ((iVar11 < g_worldGrid.sizeY &&
          (iVar13 = g_worldGrid.sizeX * iVar11, *(char *)(iVar8 + iVar13 + DAT_007fb26c) != '\0'))))
        )))) {
      if ((((&DAT_007fb24c)[param_1[9]] == 0) ||
          (*(char *)((&DAT_007fb24c)[param_1[9]] + iVar8 + iVar13) == '\0')) &&
         (local_EAX_6553 = thunk_FUN_00497030(iVar8,iVar11,param_1[9],1,DAT_007e660c),
         -1 < (int)local_EAX_6553)) {
        thunk_FUN_00637ae0((int)STField<short>(param_1,0x41),(int)STField<short>(param_1,0x43)
                           ,(int)STField<short>(param_1,0x45));
        STT3DSprC::StopShow((STT3DSprC *)((int)param_1 + 0x1d5),0xe);
        thunk_FUN_004ad5e0((STT3DSprC *)((int)param_1 + 0x1d5));
        STField<undefined4>(param_1,0x231) = 2;
        STField<undefined4>(param_1,0x26f) = 0xff;
        thunk_FUN_005862e0(param_1);
      }
    }
  }
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_005884da:
  (**(code **)(*param_1 + 0xd8))();
  return;
}

