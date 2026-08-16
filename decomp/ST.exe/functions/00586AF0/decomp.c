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
  int iVar10;
  uint uVar11;
  int iVar7;
  int iVar9;
  STGameObjC *pSVar12;
  STGameObjC *this_00;
  int iVar13;
  uint local_EAX_2124;
  uint local_EAX_2928;
  int iVar14;
  int local_EAX_3393;
  int iVar15;
  undefined2 uVar18;
  int iVar16;
  uint uVar8;
  uint local_EAX_6098;
  int iVar17;
  uint local_EAX_6553;
  int iVar19;
  int iVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  int iVar24;
  STWorldObject *pSVar25;
  int *piVar26;
  AnonShape_0041AF40_F59F8577 *pAVar27;
  bool bVar28;
  ushort *puVar29;
  short *psVar30;
  ushort *puVar31;
  AnonShape_0041AF40_F59F8577 local_6c;
  int local_4c;
  int local_48;
  STGameObjC *local_44;
  int local_40;
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
  sVar21 = STField<short>(param_1,0x41);
  sVar21 = STBiasedDiv16(sVar21, 0xc9); /* exact signed 16-bit grid-index division */
  STField<short>(param_1,0x47) = sVar21;
  STField<short>(param_1,0x5b) = sVar21;
  sVar21 = STField<short>(param_1,0x43);
  sVar21 = STBiasedDiv16(sVar21, 0xc9); /* exact signed 16-bit grid-index division */
  STField<short>(param_1,0x49) = sVar21;
  STField<short>(param_1,0x5d) = sVar21;
  sVar21 = STField<short>(param_1,0x45);
  sVar21 = STBiasedDiv16(sVar21, 200); /* exact signed 16-bit grid-index division */
  STField<short>(param_1,0x4b) = sVar21;
  STField<short>(param_1,0x5f) = sVar21;
  iVar10 = thunk_FUN_0041c710((AnonShape_0041C710_C4D46939 *)param_1);
  this = (STT3DSprC *)((int)param_1 + 0x1d5);
  if (iVar10 == 0) {
    iVar10 = 0;
    uVar11 = thunk_FUN_004ad650(this);
    Library::Ourlib::ST3DSMAP::SprSetVisible(STField<void *>(param_1,0x211),uVar11,iVar10);
    iVar7 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)param_1);
    if (iVar7 == 1) {
      iVar10 = 1;
    }
    else {
      iVar10 = 0;
    }
  }
  else {
    iVar10 = 1;
    uVar11 = thunk_FUN_004ad650(this);
    Library::Ourlib::ST3DSMAP::SprSetVisible(STField<void *>(param_1,0x211),uVar11,iVar10);
    iVar10 = 1;
  }
  iVar9 = thunk_FUN_004ad650(this);
  FUN_006e6870(STField<void *>(param_1,0x211),iVar9,iVar10);
  iVar10 = STField<int>(param_1,0x231);
  if (iVar10 == 0) {
    lVar4 = (longlong)STField<int>(param_1,0x235) * 0xeeff;
    uVar11 = (uint)lVar4;
    STField<uint>(param_1,0x235) =
         (uVar11 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
         (uint)((uVar11 >> 0xf & 1) != 0);
    lVar4 = (longlong)STField<int>(param_1,0x239) * 0xeeff;
    uVar11 = (uint)lVar4;
    local_4c = STField<int>(param_1,0x23d);
    STField<uint>(param_1,0x239) =
         (uVar11 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
         (uint)((uVar11 >> 0xf & 1) != 0);
    uVar11 = (uint)((longlong)local_4c * 0xeeff);
    STField<uint>(param_1,0x23d) =
         (uVar11 >> 0x10 | (int)((ulonglong)((longlong)local_4c * 0xeeff) >> 0x20) << 0x10) +
         (uint)((uVar11 >> 0xf & 1) != 0);
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
      iVar19 = (int)STField<short>(param_1,0x245);
      iVar24 = (int)STField<short>(param_1,0x243);
      iVar14 = (int)STField<short>(param_1,0x241);
      iVar17 = (int)STField<short>(param_1,0x45);
      iVar13 = (int)STField<short>(param_1,0x43);
      iVar10 = (int)STField<short>(param_1,0x41);
      local_EAX_3393 = FUN_006acf0d(iVar10,iVar13,iVar17,iVar14,iVar24,iVar19);
    }
    else {
      thunk_FUN_00416270(local_44,(uint *)((int)param_1 + 0x241),(int *)((int)param_1 + 0x243),
                         (short *)((int)param_1 + 0x245));
      iVar19 = (int)STField<short>(param_1,0x245);
      iVar24 = (int)STField<short>(param_1,0x243);
      iVar14 = (int)STField<short>(param_1,0x241);
      iVar17 = (int)STField<short>(param_1,0x45);
      iVar13 = (int)STField<short>(param_1,0x43);
      iVar10 = (int)STField<short>(param_1,0x41);
      local_EAX_3393 = FUN_006acf0d(iVar10,iVar13,iVar17,iVar14,iVar24,iVar19);
      if (DAT_0081170c < local_EAX_3393) goto LAB_00587844;
    }
    iVar15 = DAT_0081170c - local_EAX_3393;
    if (iVar15 < 0) {
      iVar15 = -iVar15;
    }
    iVar15 = (((iVar15 * iVar15) / 10) * (iVar15 / 10)) / 50000;
    STField<uint>(param_1,0x263) = STField<uint>(param_1,0x263) & 3;
    uVar11 = STField<uint>(param_1,0x26b) & 3;
    STField<uint>(param_1,0x267) = STField<uint>(param_1,0x267) & 3;
    STField<uint>(param_1,0x26b) = uVar11;
    if (local_EAX_3393 != 0) {
      STField<int>(param_1,0x263) =
           (((((int)STField<short>(param_1,0x241) - (int)STField<short>(param_1,0x41)) *
             DAT_0081170c) / local_EAX_3393) * iVar15 * 4) / 0x19640 +
           STField<int>(param_1,0x263);
      STField<int>(param_1,0x267) =
           (((((int)STField<short>(param_1,0x243) - (int)STField<short>(param_1,0x43)) *
             DAT_0081170c) / local_EAX_3393) * iVar15 * 4) / 0x19640 +
           STField<int>(param_1,0x267);
      uVar11 = ((((int)STField<short>(param_1,0x245) - (int)STField<short>(param_1,0x45)) *
                DAT_0081170c) / local_EAX_3393) * iVar15 * 4;
      STField<int>(param_1,0x26b) = (int)uVar11 / 0x19640 + STField<int>(param_1,0x26b);
    }
    iVar20 = STReplaceLowWord((uint32_t)(uVar11), (uint16_t)(STField<short>(param_1,0x41)));
    iVar16 = STReplaceLowWord((uint32_t)(iVar15), (uint16_t)(STField<short>(param_1,0x43)));
    local_10 = (STField<int>(param_1,0x263) >> 2) +
               ((int)(STField<int>(param_1,0x235) +
                     (STField<int>(param_1,0x235) >> 0x1f & 0xffffU)) >> 0x10) +
               (int)STField<short>(param_1,0x41);
    local_40 = STReplaceLowWord((uint32_t)(local_40), (uint16_t)(STField<short>(param_1,0x45)));
    local_14 = (STField<int>(param_1,0x267) >> 2) +
               ((int)(STField<int>(param_1,0x239) +
                     (STField<int>(param_1,0x239) >> 0x1f & 0xffffU)) >> 0x10) +
               (int)STField<short>(param_1,0x43);
    iVar15 = (STField<int>(param_1,0x26b) >> 2) +
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
    if (iVar15 < 0) {
      iVar15 = 0;
    }
    if (g_worldGrid.sizeX * 0xc9 <= local_10) {
      local_10 = g_worldGrid.sizeX * 0xc9 + -1;
    }
    iVar8 = local_10;
    if (g_worldGrid.sizeY * 0xc9 <= local_14) {
      local_14 = g_worldGrid.sizeY * 0xc9 + -1;
    }
    if (g_worldGrid.sizeZ * 200 <= iVar15) {
      iVar15 = g_worldGrid.sizeZ * 200 + -1;
    }
    local_34 = STBiasedDiv16(local_10, 0xc9); /* exact signed 16-bit grid-index division */
    local_38 = STBiasedDiv16(local_14, 0xc9); /* exact signed 16-bit grid-index division */
    local_3c = STBiasedDiv16(iVar15, 200); /* exact signed 16-bit grid-index division */
    param_1[0x9e] = -1;
    local_4c = iVar16;
    local_48 = iVar20;
    local_1c = local_14;
    local_18 = iVar15;
    local_c = local_10;
    if (((((g_playSystem_00802A38->field_00E4 & 1) != 0) && (local_44->field_0047 == local_34)) &&
        (local_44->field_0049 == local_38)) && (local_44->field_004B == local_3c)) {
      uVar18 = (undefined2)((uint)local_3c >> 0x10);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar19 = CONCAT22(uVar18,STField<undefined2>(param_1,0x251));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar24 = CONCAT22(uVar18,STField<undefined2>(param_1,0x24f));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar14 = CONCAT22(uVar18,STField<undefined2>(param_1,0x24d));
      iVar17 = local_40;
      iVar10 = (*local_44->vtable[1].vfunc_08)(local_44);
      param_1[0x9e] = iVar10;
      iVar10 = iVar20;
      iVar13 = iVar16;
    }
    if (param_1[0x9e] < 0) {
      sVar21 = STField<short>(param_1,0x41);
      iVar20 = STBiasedDiv16(sVar21, 0xc9); /* exact signed 16-bit grid-index division */
      iVar16 = param_1[0xa4];
      iVar16 = STBiasedDiv16(iVar16, 0xc9); /* exact signed 16-bit grid-index division */
      if (iVar20 == iVar16) {
        sVar21 = STField<short>(param_1,0x43);
        iVar20 = STBiasedDiv16(sVar21, 0xc9); /* exact signed 16-bit grid-index division */
        iVar16 = param_1[0xa5];
        iVar16 = STBiasedDiv16(iVar16, 0xc9); /* exact signed 16-bit grid-index division */
        if (iVar20 != iVar16) goto LAB_00587dde;
        sVar21 = STField<short>(param_1,0x45);
        iVar20 = STBiasedDiv16(sVar21, 200); /* exact signed 16-bit grid-index division */
        iVar16 = param_1[0xa6];
        iVar16 = STBiasedDiv16(iVar16, 200); /* exact signed 16-bit grid-index division */
        if (iVar20 != iVar16) goto LAB_00587dde;
LAB_00587fb9:
        iVar10 = 0;
        pSVar25 = local_20;
      }
      else {
LAB_00587dde:
        sVar21 = (short)local_34;
        if ((((sVar21 < 0) || (g_worldGrid.sizeX <= sVar21)) ||
            ((sVar22 = (short)local_38, sVar22 < 0 ||
             ((g_worldGrid.sizeY <= sVar22 || (sVar23 = (short)local_3c, sVar23 < 0)))))) ||
           ((g_worldGrid.sizeZ <= sVar23 ||
            (pSVar25 = STGridAt3D(g_worldGrid, sVar21, sVar22, sVar23).objects[0],
            local_20 = pSVar25, pSVar25 == nullptr)))) {
          uVar8 = thunk_FUN_00496250(iVar8,local_14,iVar15);
          local_20 = (STWorldObject *)(uint)(-1 < (int)uVar8);
          goto LAB_00587fb9;
        }
        if ((pSVar25->value_20 != 0xb4) &&
           (iVar10 = (*pSVar25->vtable[5].slots_00_28[2])(iVar10,iVar13,iVar17,iVar14,iVar24,iVar19)
           , iVar10 != 0)) {
          if (((pSVar25->value_20 == 1000) || (pSVar25->value_20 == 0x14)) &&
             ((pSVar25[1].vtable < (STWorldObjectVTable *)0x8 &&
              ((g_playSystem_00802A38 == nullptr ||
               (g_bulkInitializedRecords_008087C7[(int)pSVar25[1].vtable].field_0022 < 8)))))) {
            iVar10 = param_1[4];
            bVar1 = *(byte *)&pSVar25[1].vtable;
            bVar2 = *(byte *)(param_1 + 9);
            local_4c = STReplaceLowByte((uint32_t)(local_4c), (uint8_t)(bVar1));
            local_48 = STReplaceLowByte((uint32_t)(local_48), (uint8_t)(bVar2));
            if (*(char *)(iVar10 + 0x146f) == '\0') {
              if (bVar1 == bVar2) {
LAB_00587f89:
                iVar10 = 0;
              }
              else {
                uVar11 = (uint)bVar1;
                uVar6 = (uint)bVar2;
                cVar3 = *(char *)(iVar10 + uVar11 * 8 + 0x142f + uVar6);
                if ((cVar3 == '\0') && (*(char *)(iVar10 + uVar6 * 8 + 0x142f + uVar11) == '\0')) {
                  iVar10 = -2;
                }
                else if ((cVar3 == '\x01') &&
                        (*(char *)(iVar10 + uVar6 * 8 + 0x142f + uVar11) == '\0')) {
                  iVar10 = -1;
                }
                else if ((cVar3 == '\0') &&
                        (*(char *)(iVar10 + uVar6 * 8 + 0x142f + uVar11) == '\x01')) {
                  iVar10 = 1;
                }
                else {
                  if ((cVar3 != '\x01') ||
                     (*(char *)(iVar10 + uVar6 * 8 + 0x142f + uVar11) != '\x01')) goto LAB_00587f89;
                  iVar10 = 2;
                }
              }
              bVar28 = iVar10 < 0;
            }
            else {
              bVar28 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar10) !=
                       *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar10);
            }
            if (bVar28) goto LAB_00587f98;
          }
          goto LAB_00587fb9;
        }
LAB_00587f98:
        iVar10 = 0;
        pSVar25 = nullptr;
      }
      do {
        if (pSVar25 == nullptr) {
          if (iVar10 < 7) {
            iVar10 = local_18;
            if (local_18 < 0) {
              iVar10 = 0;
              STField<int>(param_1,0x25f) = -STField<int>(param_1,0x25f);
            }
            sub_00416240(param_1,(ushort)local_c,(short)local_1c,(ushort)iVar10);
          }
          break;
        }
        switch(iVar10) {
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
        local_38 = iVar10 + 1;
        local_34 = STBiasedDiv16(local_c, 0xc9); /* exact signed 16-bit grid-index division */
        sVar21 = STBiasedDiv16(local_1c, 0xc9); /* exact signed 16-bit grid-index division */
        sVar22 = STBiasedDiv16(local_18, 200); /* exact signed 16-bit grid-index division */
        sVar23 = (short)local_34;
        if ((((sVar23 < 0) || (g_worldGrid.sizeX <= sVar23)) || (sVar21 < 0)) ||
           (((g_worldGrid.sizeY <= sVar21 || (sVar22 < 0)) ||
            ((g_worldGrid.sizeZ <= sVar22 ||
             (pSVar25 = STGridAt3D(g_worldGrid, sVar23, sVar21, sVar22).objects[0],
             pSVar25 == nullptr)))))) {
          local_EAX_6098 = thunk_FUN_00496250(local_c,local_1c,local_18);
          pSVar25 = (STWorldObject *)(uint)(-1 < (int)local_EAX_6098);
        }
        else if ((pSVar25->value_20 == 0xb4) ||
                (iVar10 = (*pSVar25->vtable[5].slots_00_28[2])(pSVar25), iVar10 == 0)) {
LAB_005882af:
          pSVar25 = nullptr;
        }
        else if ((((pSVar25->value_20 == 1000) || (pSVar25->value_20 == 0x14)) &&
                 (pSVar25[1].vtable < (STWorldObjectVTable *)0x8)) &&
                ((g_playSystem_00802A38 == nullptr ||
                 (g_bulkInitializedRecords_008087C7[(int)pSVar25[1].vtable].field_0022 < 8)))) {
          iVar10 = param_1[4];
          bVar1 = *(byte *)&pSVar25[1].vtable;
          bVar2 = *(byte *)(param_1 + 9);
          local_4c = STReplaceLowByte((uint32_t)(local_4c), (uint8_t)(bVar1));
          local_48 = STReplaceLowByte((uint32_t)(local_48), (uint8_t)(bVar2));
          if (*(char *)(iVar10 + 0x146f) == '\0') {
            if (bVar1 == bVar2) {
LAB_005882a0:
              iVar10 = 0;
            }
            else {
              uVar11 = (uint)bVar1;
              uVar6 = (uint)bVar2;
              local_5 = *(char *)(iVar10 + uVar11 * 8 + 0x142f + uVar6);
              if ((local_5 == '\0') && (*(char *)(iVar10 + uVar6 * 8 + 0x142f + uVar11) == '\0')) {
                iVar10 = -2;
              }
              else if ((local_5 == '\x01') &&
                      (*(char *)(iVar10 + uVar6 * 8 + 0x142f + uVar11) == '\0')) {
                iVar10 = -1;
              }
              else if ((local_5 == '\0') &&
                      (*(char *)(iVar10 + uVar6 * 8 + 0x142f + uVar11) == '\x01')) {
                iVar10 = 1;
              }
              else {
                if ((local_5 != '\x01') ||
                   (*(char *)(iVar10 + uVar6 * 8 + 0x142f + uVar11) != '\x01')) goto LAB_005882a0;
                iVar10 = 2;
              }
            }
            bVar28 = iVar10 < 0;
          }
          else {
            local_44 = (STGameObjC *)(iVar10 + (uint)bVar2 * 0x48);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            bVar28 = *(char *)((int)&local_44[2].field_0185 + (uint)bVar2 * 9 + 1) !=
                     *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar10);
          }
          if (bVar28) goto LAB_005882af;
        }
        iVar10 = local_38;
      } while (local_38 < 7);
      iVar10 = STField<int>(param_1,0x25b) + STField<int>(param_1,0x25f);
      STField<int>(param_1,0x25b) = iVar10;
      if (iVar10 < 0xd) {
        if (iVar10 < -0xc) {
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
      iVar10 = thunk_FUN_00589740((AnonShape_00589740_397F9B27 *)param_1);
      pSVar12 = local_44;
      if (iVar10 != 0) goto LAB_00587761;
      (*local_44->vtable[1].vfunc_0C)(local_44);
      if (local_24 == 0) {
        Library::Ourlib::ST3DSMAP::SprSetLevBefore
                  (STField<void *>(param_1,0x211),STField<uint>(param_1,0x1ed),
                   pSVar12->field_01ED);
      }
      else {
        Library::Ourlib::ST3DSMAP::SprSetLevAfter
                  (STField<void *>(param_1,0x211),STField<uint>(param_1,0x1ed),
                   pSVar12->field_01ED);
      }
    }
  }
  else if (iVar10 == 1) {
    if (STField<int>(param_1,599) == 0) {
      STField<uint>(param_1,599) = g_playSystem_00802A38->field_00E4;
    }
    lVar4 = (longlong)STField<int>(param_1,0x235) * 0xeeff;
    uVar11 = (uint)lVar4;
    STField<uint>(param_1,0x235) =
         (uVar11 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
         (uint)((uVar11 >> 0xf & 1) != 0);
    lVar4 = (longlong)STField<int>(param_1,0x239) * 0xeeff;
    uVar11 = (uint)lVar4;
    STField<uint>(param_1,0x239) =
         (uVar11 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
         (uint)((uVar11 >> 0xf & 1) != 0);
    lVar4 = (longlong)STField<int>(param_1,0x23d) * 0xeeff;
    uVar11 = (uint)lVar4;
    iVar10 = (uVar11 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
             (uint)((uVar11 >> 0xf & 1) != 0);
    sVar21 = STField<short>(param_1,0x41);
    STField<int>(param_1,0x23d) = iVar10;
    iVar13 = (int)sVar21;
    local_10 = ((int)(STField<int>(param_1,0x235) +
                     (STField<int>(param_1,0x235) >> 0x1f & 0xffffU)) >> 0x10) + iVar13;
    sVar22 = STField<short>(param_1,0x43);
    local_4c = STReplaceLowWord((uint32_t)(local_10), (uint16_t)(sVar22));
    local_44 = (STGameObjC *)(int)sVar22;
    local_14 = (int)&local_44->vtable +
               ((int)(STField<int>(param_1,0x239) +
                     (STField<int>(param_1,0x239) >> 0x1f & 0xffffU)) >> 0x10);
    sVar23 = STField<short>(param_1,0x45);
    local_40 = STReplaceLowWord((uint32_t)(local_14), (uint16_t)(sVar23));
    local_48 = (int)sVar23;
    local_18 = ((int)(STField<int>(param_1,0x25b) + (STField<int>(param_1,0x25b) >> 0x1f & 3U)
                     ) >> 2) + local_48 + ((int)(iVar10 + (iVar10 >> 0x1f & 0xffffU)) >> 0x10);
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
    local_34 = STBiasedDiv16(local_10, 0xc9); /* exact signed 16-bit grid-index division */
    local_38 = STBiasedDiv16(local_14, 0xc9); /* exact signed 16-bit grid-index division */
    local_3c = STBiasedDiv16(local_18, 200); /* exact signed 16-bit grid-index division */
    if (sVar21 < 0) {
      iVar10 = (short)((sVar21 / 0xc9 + (sVar21 >> 0xf)) -
                      (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar10 = (int)(short)((sVar21 / 0xc9 + (sVar21 >> 0xf)) -
                           (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
    }
    iVar13 = param_1[0xa4];
    iVar13 = STBiasedDiv16(iVar13, 0xc9); /* exact signed 16-bit grid-index division */
    if (iVar10 == iVar13) {
      if (sVar22 < 0) {
        iVar10 = (short)((sVar22 / 0xc9 + (sVar22 >> 0xf)) -
                        (short)((longlong)(int)local_44 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar10 = (int)(short)((sVar22 / 0xc9 + (sVar22 >> 0xf)) -
                             (short)((longlong)(int)local_44 * 0x28c1979 >> 0x3f));
      }
      iVar13 = param_1[0xa5];
      iVar13 = STBiasedDiv16(iVar13, 0xc9); /* exact signed 16-bit grid-index division */
      if (iVar10 != iVar13) goto LAB_00587161;
      if (sVar23 < 0) {
        iVar10 = (short)((sVar23 / 200 + (sVar23 >> 0xf)) -
                        (short)((longlong)local_48 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar10 = (int)(short)((sVar23 / 200 + (sVar23 >> 0xf)) -
                             (short)((longlong)local_48 * 0x51eb851f >> 0x3f));
      }
      iVar13 = param_1[0xa6];
      iVar13 = STBiasedDiv16(iVar13, 200); /* exact signed 16-bit grid-index division */
      pSVar25 = local_20;
      if (iVar10 != iVar13) goto LAB_00587161;
      goto LAB_00587359;
    }
LAB_00587161:
    sVar21 = (short)local_34;
    if (((((sVar21 < 0) || (g_worldGrid.sizeX <= sVar21)) ||
         ((sVar22 = (short)local_38, sVar22 < 0 ||
          ((g_worldGrid.sizeY <= sVar22 || (sVar23 = (short)local_3c, sVar23 < 0)))))) ||
        (g_worldGrid.sizeZ <= sVar23)) ||
       (pSVar25 = STGridAt3D(g_worldGrid, sVar21, sVar22, sVar23).objects[0], local_20 = pSVar25, pSVar25 == nullptr))
    {
      local_EAX_2124 = thunk_FUN_00496250(local_10,local_14,local_18);
      local_38 = 0;
      iVar10 = local_18;
      pSVar25 = (STWorldObject *)(uint)(-1 < (int)local_EAX_2124);
    }
    else if ((pSVar25->value_20 == 0xb4) ||
            (iVar10 = (*pSVar25->vtable[5].slots_00_28[2])(pSVar25), iVar10 == 0)) {
LAB_00587323:
      local_38 = 0;
      iVar10 = local_18;
      pSVar25 = nullptr;
    }
    else {
      if (((pSVar25->value_20 == 1000) || (pSVar25->value_20 == 0x14)) &&
         ((pSVar25[1].vtable < (STWorldObjectVTable *)0x8 &&
          ((g_playSystem_00802A38 == nullptr ||
           (g_bulkInitializedRecords_008087C7[(int)pSVar25[1].vtable].field_0022 < 8)))))) {
        iVar10 = param_1[4];
        bVar1 = *(byte *)&pSVar25[1].vtable;
        bVar2 = *(byte *)(param_1 + 9);
        local_4c = STReplaceLowByte((uint32_t)(local_4c), (uint8_t)(bVar1));
        local_48 = STReplaceLowByte((uint32_t)(local_48), (uint8_t)(bVar2));
        if (*(char *)(iVar10 + 0x146f) == '\0') {
          if (bVar1 == bVar2) {
            iVar10 = 0;
          }
          else {
            uVar11 = (uint)bVar1;
            uVar6 = (uint)bVar2;
            cVar3 = *(char *)(iVar10 + uVar11 * 8 + 0x142f + uVar6);
            pSVar25 = local_20;
            if ((cVar3 == '\0') && (*(char *)(iVar10 + uVar6 * 8 + 0x142f + uVar11) == '\0')) {
              iVar10 = -2;
            }
            else if ((cVar3 == '\x01') && (*(char *)(iVar10 + uVar6 * 8 + 0x142f + uVar11) == '\0'))
            {
              iVar10 = -1;
            }
            else if ((cVar3 == '\0') && (*(char *)(iVar10 + uVar6 * 8 + 0x142f + uVar11) == '\x01'))
            {
              iVar10 = 1;
            }
            else if ((cVar3 == '\x01') &&
                    (*(char *)(iVar10 + uVar6 * 8 + 0x142f + uVar11) == '\x01')) {
              iVar10 = 2;
            }
            else {
              iVar10 = 0;
            }
          }
          bVar28 = iVar10 < 0;
        }
        else {
          bVar28 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar10) !=
                   *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar10);
        }
        if (bVar28) goto LAB_00587323;
      }
LAB_00587359:
      local_38 = 0;
      iVar10 = local_18;
    }
    do {
      if (pSVar25 == nullptr) {
        if (local_38 < 7) {
          if (iVar10 < 0) {
            iVar10 = 0;
            STField<undefined4>(param_1,0x25f) = 2;
          }
          sub_00416240(param_1,(ushort)local_c,(short)local_1c,(ushort)iVar10);
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
        iVar10 = ((int)(STField<int>(param_1,0x25b) +
                       (STField<int>(param_1,0x25b) >> 0x1f & 3U)) >> 2) +
                 (int)STField<short>(param_1,0x45);
        local_18 = iVar10;
        break;
      case 5:
        local_1c = (int)STField<short>(param_1,0x43);
        local_c = local_10;
        iVar10 = ((int)(STField<int>(param_1,0x25b) +
                       (STField<int>(param_1,0x25b) >> 0x1f & 3U)) >> 2) +
                 (int)STField<short>(param_1,0x45);
        local_18 = iVar10;
        break;
      case 6:
        local_10 = (int)STField<short>(param_1,0x41);
        local_14 = (int)STField<short>(param_1,0x43);
      }
      local_38 = local_38 + 1;
      sVar21 = STBiasedDiv16(local_c, 0xc9); /* exact signed 16-bit grid-index division */
      sVar22 = STBiasedDiv16(local_1c, 0xc9); /* exact signed 16-bit grid-index division */
      sVar23 = STBiasedDiv16(iVar10, 200); /* exact signed 16-bit grid-index division */
      if ((((((sVar21 < 0) || (g_worldGrid.sizeX <= sVar21)) || (sVar22 < 0)) ||
           ((g_worldGrid.sizeY <= sVar22 || (sVar23 < 0)))) || (g_worldGrid.sizeZ <= sVar23)) ||
         (pSVar25 = STGridAt3D(g_worldGrid, sVar21, sVar22, sVar23).objects[0],
         local_20 = pSVar25, pSVar25 == nullptr)) {
        local_EAX_2928 = thunk_FUN_00496250(local_c,local_1c,iVar10);
        local_20 = (STWorldObject *)(uint)(-1 < (int)local_EAX_2928);
      }
      else if ((pSVar25->value_20 == 0xb4) ||
              (iVar13 = (*pSVar25->vtable[5].slots_00_28[2])(pSVar25), iVar13 == 0)) {
LAB_00587648:
        local_20 = nullptr;
      }
      else if ((((pSVar25->value_20 == 1000) || (pSVar25->value_20 == 0x14)) &&
               (pSVar25[1].vtable < (STWorldObjectVTable *)0x8)) &&
              ((g_playSystem_00802A38 == nullptr ||
               (g_bulkInitializedRecords_008087C7[(int)pSVar25[1].vtable].field_0022 < 8)))) {
        iVar13 = param_1[4];
        bVar1 = *(byte *)&pSVar25[1].vtable;
        bVar2 = *(byte *)(param_1 + 9);
        local_4c = STReplaceLowByte((uint32_t)(local_4c), (uint8_t)(bVar1));
        local_48 = STReplaceLowByte((uint32_t)(local_48), (uint8_t)(bVar2));
        if (*(char *)(iVar13 + 0x146f) == '\0') {
          if (bVar1 == bVar2) {
            iVar13 = 0;
          }
          else {
            uVar11 = (uint)bVar1;
            uVar6 = (uint)bVar2;
            cVar3 = *(char *)(iVar13 + uVar11 * 8 + 0x142f + uVar6);
            iVar10 = local_18;
            if ((cVar3 == '\0') && (*(char *)(iVar13 + uVar6 * 8 + 0x142f + uVar11) == '\0')) {
              iVar13 = -2;
            }
            else if ((cVar3 == '\x01') && (*(char *)(iVar13 + uVar6 * 8 + 0x142f + uVar11) == '\0'))
            {
              iVar13 = -1;
            }
            else if ((cVar3 == '\0') && (*(char *)(iVar13 + uVar6 * 8 + 0x142f + uVar11) == '\x01'))
            {
              iVar13 = 1;
            }
            else if ((cVar3 == '\x01') &&
                    (*(char *)(iVar13 + uVar6 * 8 + 0x142f + uVar11) == '\x01')) {
              iVar13 = 2;
            }
            else {
              iVar13 = 0;
            }
          }
          bVar28 = iVar13 < 0;
        }
        else {
          local_5 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar13);
          local_44 = nullptr;
          bVar28 = local_5 != *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar13);
        }
        if (bVar28) goto LAB_00587648;
      }
      pSVar25 = local_20;
    } while (local_38 < 7);
    iVar10 = STField<int>(param_1,0x25b) + STField<int>(param_1,0x25f);
    STField<int>(param_1,0x25b) = iVar10;
    if (iVar10 < 0xd) {
      if (iVar10 < -0xc) {
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
      iVar10 = thunk_FUN_00589740((AnonShape_00589740_397F9B27 *)param_1);
      if (iVar10 == 0) goto LAB_00588350;
LAB_00587761:
      thunk_FUN_005862e0(param_1);
    }
  }
  else if (iVar10 == 2) {
    pSVar12 = (STGameObjC *)thunk_FUN_004ac910(this,'\b');
    local_44 = pSVar12;
    if ((pSVar12 == (STGameObjC *)0x1) && (STField<int>(param_1,0x26f) != 0xff)) {
      this_00 = STAllPlayersC::GetObjPtr
                          (g_allPlayers_007FA174,(char)STField<int>(param_1,0x26f),
                           STField<ushort>(param_1,0x273),CASE_1);
      if (this_00 != nullptr) {
        memset(&DAT_008116f0, 0, 0x1c); /* compiler bulk-zero initialization */
        DAT_008116f0 = DAT_007e660c;
        _DAT_008116fc = (undefined2)param_1[0xa9];
        _DAT_008116fe = (undefined2)param_1[0xa8];
        _DAT_008116f8 = param_1[0xa0];
        iVar10 = 8;
        DAT_008116f4 = 0xab;
        pAVar27 = &local_6c;
        while( true ) {
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          *(undefined4 *)pAVar27 = 0;
          pAVar27 = (AnonShape_0041AF40_F59F8577 *)&pAVar27->field_0x4;
        }
        STPiece<8,4>(local_6c) = this_00->field_0008;
        STPiece<12,4>(local_6c) = 2;
        local_6c.field_0010 = 0x110;
        local_6c.field_0014 = &DAT_008116f0;
        this_00->GetMessage(&local_6c);
        pSVar12 = local_44;
      }
    }
    if ((STField<char>(param_1,0x275) != '\0') &&
       (pSVar12 == (STGameObjC *)(uint)STField<byte>(param_1,0x276))) {
      STT3DSprC::StartShow(this,9,g_playSystem_00802A38->field_00E4);
      thunk_FUN_004ad0e0(this,9);
    }
    iVar10 = STT3DSprC::sub_004ACD30(this,'\b');
    if (pSVar12 == (STGameObjC *)(iVar10 - 1U)) {
      STT3DSprC::StopShow(this,8);
    }
    iVar10 = STT3DSprC::sub_004ACD30(this,'\n');
    if (pSVar12 == (STGameObjC *)(iVar10 - 1U)) {
      STT3DSprC::StopShow(this,10);
    }
    if (STField<char>(param_1,0x275) != '\0') {
      iVar10 = STT3DSprC::sub_004ACD30(this,'\t');
      iVar13 = thunk_FUN_004ac910(this,'\t');
      pSVar12 = local_44;
      if (iVar13 == iVar10 + -1) {
        STT3DSprC::StopShow(this,9);
        STField<undefined1>(param_1,0x275) = 0;
        pSVar12 = local_44;
      }
    }
    iVar10 = STT3DSprC::sub_004ACD30(this,'\b');
    if ((pSVar12 == (STGameObjC *)(iVar10 - 1U)) && (STField<char>(param_1,0x275) == '\0')) {
      thunk_FUN_005862e0(param_1);
      return;
    }
    if ((((int)pSVar12 < 10) && (STField<int>(param_1,0x26f) != 0xff)) &&
       (pSVar12 = STAllPlayersC::GetObjPtr
                            (g_allPlayers_007FA174,(char)STField<int>(param_1,0x26f),
                             STField<ushort>(param_1,0x273),CASE_1), pSVar12 != nullptr
       )) {
      piVar26 = &local_24;
      puVar31 = local_30;
      psVar30 = local_2c;
      puVar29 = local_28;
      iVar10 = param_1[0x9e];
      (*pSVar12->vtable[1].vfunc_0C)(pSVar12);
      sub_00416240(param_1,local_28[0],local_2c[0],local_30[0]);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*param_1 + 0xd8))(iVar10,puVar29,psVar30,puVar31,piVar26);
      return;
    }
    goto LAB_005884da;
  }
LAB_00588350:
  sVar21 = STField<short>(param_1,0x41);
  sVar22 = STField<short>(param_1,0x43);
  sVar23 = STField<short>(param_1,0x45);
  STField<short>(param_1,0x24d) = sVar21;
  STField<short>(param_1,0x24f) = sVar22;
  STField<short>(param_1,0x251) = sVar23;
  if (STField<int>(param_1,0x231) != 2) {
    iVar10 = STBiasedDiv16(sVar21, 0xc9); /* exact signed 16-bit grid-index division */
    iVar13 = STBiasedDiv16(sVar22, 0xc9); /* exact signed 16-bit grid-index division */
    iVar17 = STBiasedDiv16(sVar23, 200); /* exact signed 16-bit grid-index division */
    if ((((STField<short>(param_1,0x47) != iVar10) || (STField<short>(param_1,0x49) != iVar13)
         ) || (STField<short>(param_1,0x4b) != iVar17)) &&
       (((-1 < iVar10 && (-1 < iVar13)) &&
        ((iVar10 < g_worldGrid.sizeX &&
         ((iVar13 < g_worldGrid.sizeY &&
          (iVar17 = g_worldGrid.sizeX * iVar13, *(char *)(iVar10 + iVar17 + DAT_007fb26c) != '\0')))
         ))))) {
      if ((((&DAT_007fb24c)[param_1[9]] == 0) ||
          (*(char *)((&DAT_007fb24c)[param_1[9]] + iVar10 + iVar17) == '\0')) &&
         (local_EAX_6553 = thunk_FUN_00497030(iVar10,iVar13,param_1[9],1,DAT_007e660c),
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
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
LAB_005884da:
  (**(code **)(*param_1 + 0xd8))();
  return;
}

