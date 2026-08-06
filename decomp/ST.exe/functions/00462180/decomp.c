#include "../../pseudocode_runtime.h"


int __thiscall FUN_00462180(void *this,int param_1)

{
  short *psVar1;
  short *psVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  short sVar9;
  uint uVar11;
  STGameObjC *this_00;
  int local_EAX_486;
  int local_EAX_837;
  uint uVar10;
  undefined4 *puVar12;
  int local_EAX_1646;
  int local_EAX_1824;
  STGroupBoatC *pSVar13;
  dword dVar14;
  int iVar15;
  int local_EAX_5975;
  int local_EAX_7817;
  STFishC *pSVar15;
  uint local_EAX_9668;
  int iVar16;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  undefined2 uVar17;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  undefined2 uVar21;
  STFishC *pSVar18;
  uint uVar19;
  STFishCVTable *pSVar20;
  ushort *puVar22;
  STWorldObject *pSVar23;
  bool bVar24;
  RecoveredRecord_STBoatC_00645880 local_9c;
  int local_74 [2];
  undefined1 local_6c [16];
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  short local_16;
  STFishC *local_14;
  uint local_10;
  STFishC *local_c;
  undefined2 local_8 [2];

  if ((param_1 == 0) || (param_1 == 1)) {
    memset((void *)((int)this + 0x2cc), 0, 0x5c); /* compiler bulk-zero initialization */
    iVar16 = 0;
    STField<undefined4>(this,0x2c4) = 0;
    uVar11 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar11;
    STField<short>(this,0xf8) = (short)((ulonglong)(uVar11 >> 0x10) % 0x1f) + 0x1e;
    this_00 = STAllPlayersC::GetObjPtr
                        (g_allPlayers_007FA174,STField<char>(this,0x33a),
                         STField<ushort>(this,0x33f),
                         STField<STAllPlayersC_GetObjPtr_param_3Enum>(this,0x33b));
    if (((this_00 != nullptr) && (this_00 != this)) &&
       ((STField<int>(this,0x6f7) != 9 ||
        ((iVar16 = (*this_00->vtable->vfunc_2C)(), iVar16 == 0x3b ||
         (iVar16 = (*this_00->vtable->vfunc_2C)(), iVar16 == 0x60)))))) {
      STField<undefined4>(this,0x7f4) = this_00->field_0018;
      STField<undefined4>(this,0x7f8) = this_00->field_002C;
      STField<undefined4>(this,0x7fc) = STField<undefined4>(this,0x33b);
      STFishC::sub_004162B0
                ((STFishC *)this_00,(short *)((int)this + 0x800),(short *)((int)this + 0x802),
                 (short *)((int)this + 0x804));
      STField<undefined2>(this,0x7f2) = STField<undefined2>(this,0x341);
      STField<undefined4>(this,0x7de) = STField<undefined4>(this,0x336);
      STField<undefined4>(this,0x82e) = 0;
      STField<undefined4>(this,0x832) = 0;
      STField<undefined4>(this,0x836) = 0xffffffff;
      STField<undefined4>(this,0x83a) = 0;
      uVar11 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar11;
      STField<uint>(this,0x818) = (uVar11 >> 0x10) % 0xb + 10;
      STField<undefined2>(this,0x80a) = 0xffff;
      STField<undefined2>(this,0x808) = 0xffff;
      STField<undefined2>(this,0x806) = 0xffff;
      iVar16 = (*this_00->vtable->vfunc_2C)();
      if (iVar16 == 0x4d) {
        STField<undefined2>(this,0x816) = 9;
      }
      else {
        STField<undefined2>(this,0x816) = 5;
      }
      STField<short>(this,0x814) = STField<short>(this,0x816) * 0xc9;
      goto LAB_00462320;
    }
  }
  else {
LAB_00462320:
    if (STField<int>(this,0x6f7) == 9) {
      iVar16 = STField<int>(this,0x82e);
      if (iVar16 == 0) {
        STField<undefined4>(this,0x82e) = 1;
        STField<undefined4>(this,0xb7) = 3;
        STBoatC::sub_00481520
                  (this,(int)STField<short>(this,0x800),(int)STField<short>(this,0x802),
                   (int)STField<short>(this,0x804));
        STBoatC::sub_00460260(this,0);
        goto cf_common_exit_00464889;
      }
      if (iVar16 == 1) {
        local_EAX_1824 = STBoatC::sub_00460260(this,2);
        switch(local_EAX_1824) {
        case 0:
          sVar9 = STField<short>(this,0x804);
          sVar6 = STField<short>(this,0x802);
          local_c = (STFishC *)((int)this + 0x800);
          psVar1 = (short *)((int)this + 0x804);
          psVar2 = (short *)((int)this + 0x802);
          sVar7 = *(short *)&local_c->vtable;
          local_10 = STReplaceLowWord((uint32_t)(local_c), (uint16_t)(sVar7));
          if ((((((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) && (-1 < sVar6)) &&
               ((sVar6 < g_worldGrid.sizeY && (-1 < sVar9)))) && (sVar9 < g_worldGrid.sizeZ)) &&
             (((local_14 = (STFishC *)
                           STGridAt3D(g_worldGrid, sVar7, sVar6, sVar9).objects[0],
               local_14 != nullptr && ((uint)local_14->field_0024 < 8)) &&
              ((g_playSystem_00802A38 == nullptr ||
               (g_bulkInitializedRecords_008087C7[local_14->field_0024].field_0022 < 8)))))) {
            bVar3 = *(byte *)&local_14->field_0024;
            bVar4 = STField<byte>(this,0x24);
            STPiece<1,3>(local_10) = (undefined3)(local_10 >> 8);
            local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar3));
            local_28 = STReplaceLowByte((uint32_t)(local_28), (uint8_t)(bVar4));
            if (DAT_00808a8f == '\0') {
              if (bVar3 == bVar4) {
LAB_00462c49:
                iVar16 = 0;
              }
              else {
                bVar5 = g_playerRelationMatrix[bVar3][bVar4];
                if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                  iVar16 = -2;
                }
                else if ((bVar5 == 1) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                  iVar16 = -1;
                }
                else if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 1)) {
                  iVar16 = 1;
                }
                else {
                  if ((bVar5 != 1) || (g_playerRelationMatrix[bVar4][bVar3] != 1))
                  goto LAB_00462c49;
                  iVar16 = 2;
                }
              }
              bVar24 = iVar16 < 0;
            }
            else {
              bVar24 = g_bulkInitializedRecords_008087C7[bVar4].field_0023 !=
                       g_bulkInitializedRecords_008087C7[bVar3].field_0023;
            }
            if ((bVar24) &&
               ((dVar14 = local_14->slot_2C(), dVar14 == 0x3b ||
                (dVar14 = local_14->slot_2C(), dVar14 == 0x60)))) {
              STField<undefined4>(this,0x82e) = 2;
              STField<undefined4>(this,0xb7) = 0;
              STFishC::sub_004162B0(local_14,(short *)local_c,psVar2,psVar1);
              STBoatC::sub_00481520(this,(int)*(short *)&local_c->vtable,(int)*psVar2,(int)*psVar1);
              thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2,*psVar1);
              thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
              thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
              thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
              STBoatC::sub_00460260(this,0);
              STField<undefined2>(this,0xf8) = 0;
              thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2,*psVar1);
              thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
              thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
              thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
              return 2;
            }
          }
          pSVar13 = thunk_FUN_0042b760(STField<char>(this,0x24),STField<ushort>(this,0x30));
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          STGroupBoatC::GetDepotForAttack
                    (pSVar13,CONCAT22((short)((uint)&local_16 >> 0x10),
                                      STField<undefined2>(this,0x32)),
                     (undefined1 *)((int)&param_1 + 3),&local_16,(short *)&local_24,
                     (short *)&local_1c,(short *)&local_20);
          if (local_16 != -1) {
            *(short *)&local_c->vtable = (short)local_24;
            *psVar2 = (short)local_1c;
            *psVar1 = (short)local_20;
cf_common_exit_00462E32:
            STBoatC::sub_00481520
                      (this,(int)(short)local_24,(int)(short)local_1c,(int)(short)local_20);
            STBoatC::sub_00460260(this,0);
            return 2;
          }
          break;
        case 1:
          sVar9 = STField<short>(this,0x800);
          sVar6 = STField<short>(this,0x804);
          sVar7 = STField<short>(this,0x802);
          if ((((-1 < sVar9) && (sVar9 < g_worldGrid.sizeX)) && (-1 < sVar7)) &&
             ((((sVar7 < g_worldGrid.sizeY && (-1 < sVar6)) &&
               ((sVar6 < g_worldGrid.sizeZ &&
                ((pSVar23 = STGridAt3D(g_worldGrid, sVar9, sVar7, sVar6).objects[0],
                 pSVar23 != nullptr && (pSVar23[1].vtable < (STWorldObjectVTable *)0x8)
                 ))))) &&
              ((g_playSystem_00802A38 == nullptr ||
               (g_bulkInitializedRecords_008087C7[(int)pSVar23[1].vtable].field_0022 < 8)))))) {
            bVar3 = *(byte *)&pSVar23[1].vtable;
            bVar4 = STField<byte>(this,0x24);
            local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar3));
            local_c = (STFishC *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar4));
            if (DAT_00808a8f == '\0') {
              if (bVar3 == bVar4) {
LAB_00462a36:
                iVar16 = 0;
              }
              else {
                bVar5 = g_playerRelationMatrix[bVar3][bVar4];
                if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                  iVar16 = -2;
                }
                else if ((bVar5 == 1) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                  iVar16 = -1;
                }
                else if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 1)) {
                  iVar16 = 1;
                }
                else {
                  if ((bVar5 != 1) || (g_playerRelationMatrix[bVar4][bVar3] != 1))
                  goto LAB_00462a36;
                  iVar16 = 2;
                }
              }
              bVar24 = iVar16 < 0;
            }
            else {
              bVar24 = g_bulkInitializedRecords_008087C7[bVar4].field_0023 !=
                       g_bulkInitializedRecords_008087C7[bVar3].field_0023;
            }
            if (bVar24) {
              iVar16 = pSVar23->GetObjectTypeId();
              if (iVar16 == 0x3b) {
                return 2;
              }
              iVar16 = pSVar23->GetObjectTypeId();
              if (iVar16 == 0x60) {
                return 2;
              }
            }
          }
          STBoatC::sub_004602B0(this);
          pSVar13 = thunk_FUN_0042b760(STField<char>(this,0x24),STField<ushort>(this,0x30));
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          STGroupBoatC::GetDepotForAttack
                    (pSVar13,CONCAT22((short)((uint)&local_16 >> 0x10),
                                      STField<undefined2>(this,0x32)),
                     (undefined1 *)((int)&param_1 + 3),&local_16,(short *)&local_24,
                     (short *)&local_1c,(short *)&local_20);
          if (local_16 != -1) {
            STField<short>(this,0x800) = (short)local_24;
            STField<short>(this,0x802) = (short)local_1c;
            STField<short>(this,0x804) = (short)local_20;
            goto cf_common_exit_00462E32;
          }
          break;
        default:
          goto cf_common_exit_00464526;
        case 3:
          STPiece<0,2>(local_20) = STField<short>(this,0x804);
          STPiece<0,2>(local_1c) = STField<short>(this,0x802);
          STPiece<0,2>(local_24) = STField<short>(this,0x800);
          goto cf_common_exit_00462E32;
        case -1:
          goto cf_common_exit_0046401F;
        }
      }
      else {
        if (iVar16 != 2) {
          if (iVar16 != 3) {
            return -1;
          }
          iVar16 = STJellyGunC::sub_00415ED0(this,local_74,(int *)&local_10);
          if (iVar16 == -1) {
            return -1;
          }
          if (iVar16 == 0) {
            local_58 = &local_4c;
            local_4c = 10000;
            local_44 = 0xff;
            local_38 = 1;
            local_5c = 0x110;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)**(undefined4 **)this)(local_6c);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)this + 0x90))(3,0x101);
          }
          else if (iVar16 == 1) {
            sVar9 = STField<short>(this,0x800);
            sVar6 = STField<short>(this,0x804);
            sVar7 = STField<short>(this,0x802);
            if (((((sVar9 < 0) || (g_worldGrid.sizeX <= sVar9)) || (sVar7 < 0)) ||
                ((g_worldGrid.sizeY <= sVar7 || (sVar6 < 0)))) ||
               ((g_worldGrid.sizeZ <= sVar6 ||
                (pSVar15 = (STFishC *)
                           STGridAt3D(g_worldGrid, sVar9, sVar7, sVar6).objects[0],
                pSVar15 == nullptr)))) {
              local_58 = &local_4c;
              local_4c = 10000;
              local_44 = 0xff;
              local_38 = 1;
              local_5c = 0x110;
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)**(undefined4 **)this)(local_6c);
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              iVar16 = (**(code **)(*(int *)this + 0xd8))();
              return (-(uint)(iVar16 != 0) & 0xfffffffd) + 2;
            }
            iVar16 = pSVar15->vfunc_DC(STField<undefined2>(this,0x41),
                                STField<undefined2>(this,0x43),STField<undefined2>(this,0x45),
                                STField<undefined2>(this,0x34),STField<undefined2>(this,0x36),
                                STField<undefined2>(this,0x38));
            if (-1 < iVar16) {
              iVar16 = thunk_FUN_004d8870(*(char *)&pSVar15->field_0024);
              if (200 < iVar16) {
                iVar16 = 200;
              }
              thunk_FUN_004d8800(*(char *)&pSVar15->field_0024,iVar16);
              thunk_FUN_004d87b0(STField<char>(this,0x24),iVar16);
              iVar16 = thunk_FUN_004d89b0(*(char *)&pSVar15->field_0024);
              if (100 < iVar16) {
                iVar16 = 100;
              }
              thunk_FUN_004d8940(*(char *)&pSVar15->field_0024,iVar16);
              thunk_FUN_004d88f0(STField<char>(this,0x24),iVar16);
              iVar16 = thunk_FUN_004d8af0(*(char *)&pSVar15->field_0024);
              if (0x5dc < iVar16) {
                iVar16 = 0x5dc;
              }
              thunk_FUN_004d8a80(*(char *)&pSVar15->field_0024,iVar16);
              thunk_FUN_004d8a30(STField<char>(this,0x24),iVar16);
              thunk_FUN_004d78e0(*(char *)&pSVar15->field_0024);
              thunk_FUN_004d78e0(STField<char>(this,0x24));
              if (((uint)DAT_0080874d == pSVar15->field_0024) ||
                 ((uint)DAT_0080874d == STField<uint>(this,0x24))) {
                thunk_FUN_004d8b70(DAT_0080874d);
              }
              local_58 = &local_4c;
              local_4c = 10000;
              local_44 = 0xff;
              local_38 = 1;
              local_5c = 0x110;
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)**(undefined4 **)this)(local_6c);
              STT3DSprC::LoadSequence
                        ((STT3DSprC *)((int)this + 0x1d5),8,PTR_00806774,"expdstrwd",
                         CASE_1D);
              if (DAT_00811798 != nullptr) {
                STFishC::sub_004162F0
                          (pSVar15,(undefined2 *)((int)&local_14 + 2),
                           (undefined2 *)((int)&local_28 + 2),local_8);
                pSVar15->slot_2C();
                thunk_FUN_00620a00(DAT_00811798,(int)STPiece<2,2>(local_14),(int)STPiece<2,2>(local_28),
                                   pSVar15->field_0024);
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                iVar16 = (**(code **)(*(int *)this + 0xd8))();
                return (-(uint)(iVar16 != 0) & 0xfffffffd) + 2;
              }
            }
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar16 = (**(code **)(*(int *)this + 0xd8))();
          return (-(uint)(iVar16 != 0) & 0xfffffffd) + 2;
        }
        iVar15 = STBoatC::sub_00460260(this,2);
        switch(iVar15) {
        case 0:
          local_58 = &local_4c;
          local_4c = 10000;
          local_44 = 0xff;
          local_38 = 1;
          local_5c = 0x110;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)**(undefined4 **)this)(local_6c);
          return 2;
        case 1:
          sVar9 = STField<short>(this,0x800);
          sVar6 = STField<short>(this,0x804);
          sVar7 = STField<short>(this,0x802);
          if (((((-1 < sVar9) && (sVar9 < g_worldGrid.sizeX)) &&
               ((-1 < sVar7 &&
                (((sVar7 < g_worldGrid.sizeY && (-1 < sVar6)) && (sVar6 < g_worldGrid.sizeZ)))))) &&
              ((pSVar23 = STGridAt3D(g_worldGrid, sVar9, sVar7, sVar6).objects[0],
               pSVar23 != nullptr && (pSVar23[1].vtable < (STWorldObjectVTable *)0x8)))
              ) && ((g_playSystem_00802A38 == nullptr ||
                    (g_bulkInitializedRecords_008087C7[(int)pSVar23[1].vtable].field_0022 < 8)))) {
            bVar3 = *(byte *)&pSVar23[1].vtable;
            bVar4 = STField<byte>(this,0x24);
            local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar3));
            local_c = (STFishC *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar4));
            if (DAT_00808a8f == '\0') {
              if (bVar3 == bVar4) {
LAB_00463442:
                iVar16 = 0;
              }
              else {
                bVar5 = g_playerRelationMatrix[bVar3][bVar4];
                if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                  iVar16 = -2;
                }
                else if ((bVar5 == 1) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                  iVar16 = -1;
                }
                else if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 1)) {
                  iVar16 = 1;
                }
                else {
                  if ((bVar5 != 1) || (g_playerRelationMatrix[bVar4][bVar3] != 1))
                  goto LAB_00463442;
                  iVar16 = 2;
                }
              }
              bVar24 = iVar16 < 0;
            }
            else {
              bVar24 = g_bulkInitializedRecords_008087C7[bVar4].field_0023 !=
                       g_bulkInitializedRecords_008087C7[bVar3].field_0023;
            }
            if (bVar24) {
              iVar16 = pSVar23->GetObjectTypeId();
              if (iVar16 == 0x3b) {
                return 2;
              }
              iVar16 = pSVar23->GetObjectTypeId();
              if (iVar16 == 0x60) {
                return 2;
              }
            }
          }
          STBoatC::sub_004602B0(this);
          pSVar13 = thunk_FUN_0042b760(STField<char>(this,0x24),STField<ushort>(this,0x30));
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          STGroupBoatC::GetDepotForAttack
                    (pSVar13,CONCAT22((short)((uint)&local_16 >> 0x10),
                                      STField<undefined2>(this,0x32)),
                     (undefined1 *)((int)&param_1 + 3),&local_16,(short *)&local_24,
                     (short *)&local_1c,(short *)&local_20);
          if (local_16 != -1) {
            STField<short>(this,0x804) = (short)local_20;
            STField<short>(this,0x802) = (short)local_1c;
            STField<undefined4>(this,0x82e) = 1;
            STField<undefined4>(this,0xb7) = 3;
            STField<short>(this,0x800) = (short)local_24;
            STBoatC::sub_00481520
                      (this,(int)(short)local_24,(int)(short)local_1c,(int)(short)local_20);
            STBoatC::sub_00460260(this,0);
            return 2;
          }
          break;
        default:
          return 2;
        case 3:
          sVar9 = STField<short>(this,0x800);
          sVar6 = STField<short>(this,0x804);
          sVar7 = STField<short>(this,0x802);
          psVar1 = (short *)((int)this + 0x804);
          if (((((-1 < sVar9) && (sVar9 < g_worldGrid.sizeX)) && (-1 < sVar7)) &&
              (((sVar7 < g_worldGrid.sizeY && (-1 < sVar6)) &&
               ((sVar6 < g_worldGrid.sizeZ &&
                ((pSVar15 = (STFishC *)
                            STGridAt3D(g_worldGrid, sVar9, sVar7, sVar6).objects[0],
                 local_14 = pSVar15, pSVar15 != nullptr && ((uint)pSVar15->field_0024 < 8))))
               )))) && ((g_playSystem_00802A38 == nullptr ||
                        (g_bulkInitializedRecords_008087C7[pSVar15->field_0024].field_0022 < 8)))) {
            bVar3 = *(byte *)&pSVar15->field_0024;
            bVar4 = STField<byte>(this,0x24);
            local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar3));
            local_c = (STFishC *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar4));
            if (DAT_00808a8f == '\0') {
              if (bVar3 == bVar4) {
LAB_00462fde:
                iVar16 = 0;
              }
              else {
                bVar5 = g_playerRelationMatrix[bVar3][bVar4];
                if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                  iVar16 = -2;
                }
                else if ((bVar5 == 1) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                  iVar16 = -1;
                }
                else if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 1)) {
                  iVar16 = 1;
                }
                else {
                  if ((bVar5 != 1) || (g_playerRelationMatrix[bVar4][bVar3] != 1))
                  goto LAB_00462fde;
                  iVar16 = 2;
                }
              }
              bVar24 = iVar16 < 0;
            }
            else {
              bVar24 = g_bulkInitializedRecords_008087C7[bVar4].field_0023 !=
                       g_bulkInitializedRecords_008087C7[bVar3].field_0023;
            }
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if ((bVar24) &&
               ((dVar14 = pSVar15->slot_2C(), uVar21 = extraout_var_01,
                uVar17 = extraout_var, dVar14 == 0x3b ||
                (dVar14 = pSVar15->slot_2C(), uVar21 = extraout_var_02,
                uVar17 = extraout_var_00, dVar14 == 0x60)))) {
              sVar9 = STField<short>(this,0xd7);
              local_24 = STReplaceLowWord((uint32_t)(dVar14), (uint16_t)(sVar9));
              sVar6 = STField<short>(this,0xdb);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_1c = CONCAT22(uVar17,sVar6);
              sVar7 = STField<short>(this,0xdf);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_20 = CONCAT22(uVar21,sVar7);
              if ((sVar9 < 0) ||
                 ((((g_worldGrid.sizeX <= sVar9 || (sVar6 < 0)) || (g_worldGrid.sizeY <= sVar6)) ||
                  ((sVar7 < 0 || (g_worldGrid.sizeZ <= sVar7)))))) {
                pSVar18 = nullptr;
              }
              else {
                pSVar18 = (STFishC *)
                          STGridAt3D(g_worldGrid, sVar9, sVar6, sVar7).objects[0];
                pSVar15 = local_14;
              }
              if (pSVar15 != pSVar18) {
                psVar2 = (short *)((int)this + 0x802);
                local_c = (STFishC *)((int)this + 0x800);
                STFishC::sub_004162B0(local_14,(short *)local_c,psVar2,psVar1);
                STBoatC::sub_00481520
                          (this,(int)*(short *)&local_c->vtable,(int)*psVar2,(int)*psVar1);
                thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2,*psVar1);
                thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
                thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
                thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
                STBoatC::sub_00460260(this,0);
                STField<undefined2>(this,0xf8) = 0;
                thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2,*psVar1);
                thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
                thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
                thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
                return 2;
              }
              STField<undefined4>(this,0x82e) = 3;
              sub_00415B30(this,STField<short>(this,0x41),STField<short>(this,0x43),
                           STField<short>(this,0x45),(short)(local_24 * 0xc9 + 100),
                           sVar6 * 0xc9 + 100,sVar7 * 200 + 100,STField<byte>(this,0x61));
              STField<undefined4>(this,0x7a) = 0;
              return 2;
            }
          }
          pSVar13 = thunk_FUN_0042b760(STField<char>(this,0x24),STField<ushort>(this,0x30));
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          STGroupBoatC::GetDepotForAttack
                    (pSVar13,CONCAT22((short)((uint)&local_16 >> 0x10),
                                      STField<undefined2>(this,0x32)),
                     (undefined1 *)((int)&param_1 + 3),&local_16,(short *)&local_24,
                     (short *)&local_1c,(short *)&local_20);
          if (local_16 != -1) {
            *psVar1 = (short)local_20;
            STField<short>(this,0x802) = (short)local_1c;
            STField<undefined4>(this,0x82e) = 1;
            STField<undefined4>(this,0xb7) = 3;
            STField<short>(this,0x800) = (short)local_24;
            STBoatC::sub_00481520
                      (this,(int)(short)local_24,(int)(short)local_1c,(int)(short)local_20);
            STBoatC::sub_00460260(this,0);
            STField<undefined2>(this,0xf8) = 0;
            return 2;
          }
          goto cf_common_exit_0046351A;
        case -1:
          goto cf_common_exit_0046401F;
        }
      }
      STField<undefined4>(this,0xb7) = 0;
    }
    else {
      if (STField<int>(this,0x6f7) != 0x15) {
        iVar16 = STField<int>(this,0x836) + 1;
        STField<int>(this,0x836) = iVar16;
        if ((iVar16 % 5 == 0) && (STField<int>(this,0x82e) == 0)) {
          local_EAX_486 = thunk_FUN_00482db0(this,0);
          switch(local_EAX_486) {
          case 0:
            sVar9 = STField<short>(this,0x804);
            sVar6 = STField<short>(this,0x802);
            sVar7 = STField<short>(this,0x800);
            if (STField<int>(this,0x7fc) == 3) {
              if (((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar6 < 0)) ||
                  ((g_worldGrid.sizeY <= sVar6 || (sVar9 < 0)))) || (g_worldGrid.sizeZ <= sVar9)) {
LAB_004625fd:
                pSVar23 = nullptr;
              }
              else {
                pSVar23 = STGridAt3D(g_worldGrid, sVar7, sVar6, sVar9).objects[1];
              }
            }
            else {
              if ((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
                  ((sVar6 < 0 || ((g_worldGrid.sizeY <= sVar6 || (sVar9 < 0)))))) ||
                 (g_worldGrid.sizeZ <= sVar9)) goto LAB_004625fd;
              pSVar23 = STGridAt3D(g_worldGrid, sVar7, sVar6, sVar9).objects[0];
            }
            local_9c.field_0008 = STField<ushort>(this,0x41);
            local_9c.field_000A = STField<ushort>(this,0x43);
            local_9c.field_000C = STField<ushort>(this,0x45);
            local_10 = 0;
            if (STField<char>(this,0x2b2) != '\0') {
              puVar22 = (ushort *)((int)this + 0x2a8);
              do {
                puVar12 = (undefined4 *)
                          thunk_FUN_0041dc40(local_74,(short)*(undefined4 *)(puVar22 + -1),
                                             puVar22[1],STField<short>(this,0x6c));
                local_9c.field_000E = STField<short>(this,0x41) + (short)*puVar12;
                local_9c.field_0010 = STField<short>(this,0x43) - (short)((uint)*puVar12 >> 0x10);
                local_9c.field_0012 = *(short *)(puVar12 + 1) + STField<short>(this,0x45);
                local_30 = (uint)*puVar22 << 0x10;
                puVar12 = (undefined4 *)
                          thunk_FUN_0041dc40(&local_c,0,0,STField<short>(this,0x6c));
                uVar8 = *puVar12;
                local_2c = *(undefined2 *)(puVar12 + 1);
                local_9c.field_0014 = (short)uVar8 + *(short *)&pSVar23[1].field_0x1d;
                STPiece<2,2>(local_30) = (short)((uint)uVar8 >> 0x10);
                local_9c.field_0016 = *(short *)&pSVar23[1].field_0x1f - STPiece<2,2>(local_30);
                local_9c.field_0018 = *(short *)((int)&pSVar23[1].value_20 + 1);
                local_9c.field_0000 = STField<uint>(this,0x24);
                local_9c.field_0022 = (-(uint)(STField<int>(this,0x6f7) != 10) & 0xfffffffe) + 1;
                if (STField<int>(this,0x7de) == 0) {
                  local_9c.field_0004 = STField<uint>(this,0x79a);
                }
                else {
                  local_9c.field_0004 = 0xa1;
                }
                local_9c.field_001A = STField<ushort>(this,0x6c);
                local_9c.field_001C = STField<uint>(this,0x18);
                local_9c.field_0020 = STField<ushort>(this,0x32);
                local_30 = uVar8;
                thunk_FUN_00645880(&local_9c);
                STField<undefined4>(this,0x83a) = 0;
                iVar16 = STField<int>(this,0x7a2) + -1;
                STField<int>(this,0x7a2) = iVar16;
                STField<undefined4>(this,0x7aa) = 0;
                if ((STField<int>(this,0x7de) == 0) && (iVar16 < 1)) break;
                local_10 = local_10 + 1;
                puVar22 = puVar22 + 3;
              } while ((int)local_10 < (int)(uint)STField<byte>(this,0x2b2));
            }
            if (STField<int>(this,0x7de) == 1) {
              STField<undefined4>(this,0x72a) = 0;
            }
            break;
          case 1:
          case 5:
            STField<undefined4>(this,0x82e) = 2;
            if (((STField<short>(this,0x800) != STField<short>(this,0x806)) ||
                (STField<short>(this,0x802) != STField<short>(this,0x808))) ||
               (STField<short>(this,0x804) != STField<short>(this,0x80a))) {
              STBoatC::sub_004602B0(this);
              STBoatC::sub_00481520
                        (this,(int)STField<short>(this,0x800),(int)STField<short>(this,0x802),
                         (int)STField<short>(this,0x804));
              STField<undefined2>(this,0x806) = STField<undefined2>(this,0x800);
              STField<undefined2>(this,0x808) = STField<undefined2>(this,0x802);
              STField<undefined2>(this,0x80a) = STField<undefined2>(this,0x804);
LAB_004624c3:
              local_EAX_837 = STBoatC::sub_00460260(this,0);
              if (local_EAX_837 == -1) {
                return -1;
              }
            }
            break;
          case 2:
            return 4;
          case 3:
            STField<undefined4>(this,0x82e) = 0;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)this + 0x20))();
            break;
          case 4:
            goto cf_common_exit_0046351A;
          case 6:
          case 7:
          case 8:
            if (STField<int>(this,0x832) == 0) {
              STField<undefined4>(this,0x832) = 1;
              STField<undefined4>(this,0x83a) = STField<undefined4>(this,0x818);
            }
            iVar16 = STField<int>(this,0x83a) + 1;
            STField<int>(this,0x83a) = iVar16;
            if (STField<int>(this,0x818) < iVar16) {
              STField<undefined4>(this,0x83a) = 0;
              iVar16 = thunk_FUN_00484020(this,(short)local_EAX_486,(short *)&local_24,
                                          (short *)&local_1c,(short *)&local_20);
              if (iVar16 != 0) {
                STField<undefined4>(this,0x82e) = 3;
                STBoatC::sub_00481520
                          (this,(int)(short)local_24,(int)(short)local_1c,(int)(short)local_20);
                goto LAB_004624c3;
              }
              STField<short>(this,0x814) = STField<short>(this,0x814) + -0xc9;
              if (STField<short>(this,0x814) < 100) {
                return 8;
              }
            }
            STField<undefined4>(this,0x82e) = 0;
            break;
          case 9:
            STField<undefined4>(this,0x82e) = 1;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)this + 0x20))();
            uVar10 = thunk_FUN_004836c0(this);
            thunk_FUN_00417740(this,STField<short>(this,0x6c),(short)uVar10);
          }
        }
        iVar16 = STField<int>(this,0x82e);
        if (iVar16 == 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*(int *)this + 0xd8))();
          return 2;
        }
        if (iVar16 == 1) {
          iVar16 = thunk_FUN_00417830(this);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*(int *)this + 0xd8))();
          if (iVar16 == 0) {
cf_common_exit_00462823:
            STField<undefined4>(this,0x836) = 0xffffffff;
            STField<undefined4>(this,0x82e) = 0;
          }
switchD_004627fb_default:
          return 2;
        }
        if (iVar16 != 2) {
          if (iVar16 != 3) {
cf_common_exit_0046401F:
            return -1;
          }
          local_EAX_1646 = STBoatC::sub_00460260(this,2);
          switch(local_EAX_1646) {
          case 0:
          case 1:
            goto cf_common_exit_00462823;
          case -1:
          case 2:
          case 3:
            goto cf_common_exit_0046351C;
          default:
            goto switchD_004627fb_default;
          }
        }
        local_EAX_1646 = STBoatC::sub_00460260(this,2);
        switch(local_EAX_1646) {
        case 0:
        case 1:
          goto cf_common_exit_00462823;
        case -1:
        case 2:
        case 3:
          goto cf_common_exit_0046351C;
        default:
          goto switchD_004627fb_default;
        }
      }
      iVar16 = STField<int>(this,0x82e);
      if (iVar16 == 0) {
        STField<undefined4>(this,0x82e) = 1;
        if (STField<int>(this,0x7f8) == 1) {
          STField<undefined4>(this,0xb7) = 3;
        }
        else {
          STField<undefined4>(this,0xb7) = 1;
        }
        STBoatC::sub_00481520
                  (this,(int)STField<short>(this,0x800),(int)STField<short>(this,0x802),
                   (int)STField<short>(this,0x804));
        STBoatC::sub_00460260(this,0);
        STField<undefined2>(this,0xf8) = 0;
        goto cf_common_exit_00464889;
      }
      if (iVar16 != 1) {
        if (iVar16 == 2) {
          local_EAX_7817 = STBoatC::sub_00460260(this,2);
          switch(local_EAX_7817) {
          case 0:
            break;
          case 1:
            sVar9 = STField<short>(this,0x804);
            sVar6 = STField<short>(this,0x802);
            sVar7 = STField<short>(this,0x800);
            if (STField<int>(this,0x7fc) == 3) {
              if (((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) &&
                 ((-1 < sVar6 &&
                  (((sVar6 < g_worldGrid.sizeY && (-1 < sVar9)) && (sVar9 < g_worldGrid.sizeZ))))))
              {
                pSVar23 = STGridAt3D(g_worldGrid, sVar7, sVar6, sVar9).objects[1];
LAB_004644dc:
                if (((pSVar23 != nullptr) &&
                    (*(int *)&pSVar23->field_0x18 == STField<int>(this,0x7f4))) &&
                   ((iVar16 = (*pSVar23->vtable[5].slots_00_28[2])(), iVar16 != 0 &&
                    ((pSVar23->value_20 != 0x1ae ||
                     (iVar16 = (*pSVar23->vtable[5].slots_00_28[1])
                                         (STField<undefined4>(this,0x24)), iVar16 != 0)))))) {
cf_common_exit_00464526:
                  return 2;
                }
              }
            }
            else if ((((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) && (-1 < sVar6)) &&
                    (((sVar6 < g_worldGrid.sizeY && (-1 < sVar9)) && (sVar9 < g_worldGrid.sizeZ))))
            {
              pSVar23 = STGridAt3D(g_worldGrid, sVar7, sVar6, sVar9).objects[0];
              goto LAB_004644dc;
            }
            break;
          default:
            goto cf_common_exit_00464526;
          case 3:
            sVar9 = STField<short>(this,0x804);
            sVar6 = STField<short>(this,0x802);
            psVar1 = (short *)((int)this + 0x804);
            psVar2 = (short *)((int)this + 0x802);
            local_c = (STFishC *)((int)this + 0x800);
            sVar7 = *(short *)&local_c->vtable;
            local_10 = STReplaceLowWord((uint32_t)(local_c), (uint16_t)(sVar7));
            if (STField<int>(this,0x7fc) == 3) {
              if ((((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) &&
                  ((-1 < sVar6 && ((sVar6 < g_worldGrid.sizeY && (-1 < sVar9)))))) &&
                 (sVar9 < g_worldGrid.sizeZ)) {
                local_14 = (STFishC *)
                           STGridAt3D(g_worldGrid, sVar7, sVar6, sVar9).objects[1];
LAB_00464147:
                if ((((local_14 != nullptr) &&
                     (local_14->field_0018 == STField<int>(this,0x7f4))) &&
                    (iVar16 = (*local_14->vtable->vfunc_F8)(), iVar16 != 0)) &&
                   ((*(int *)&local_14->field_0x20 != 0x1ae ||
                    (iVar16 = (*local_14->vtable->vfunc_F4)(STField<undefined4>(this,0x24)),
                    iVar16 != 0)))) {
                  sVar9 = STField<short>(this,0xdf);
                  sVar6 = STField<short>(this,0xdb);
                  sVar7 = STField<short>(this,0xd7);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_10 = CONCAT22((short)((uint)STField<int>(this,0x7fc) >> 0x10),sVar7);
                  if (STField<int>(this,0x7fc) == 3) {
                    if (((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) &&
                       (((-1 < sVar6 && ((sVar6 < g_worldGrid.sizeY && (-1 < sVar9)))) &&
                        (sVar9 < g_worldGrid.sizeZ)))) {
                      pSVar15 = (STFishC *)
                                STGridAt3D(g_worldGrid, sVar7, sVar6, sVar9).objects[1];
                      goto cf_common_exit_00464282;
                    }
                  }
                  else if (((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) &&
                          ((-1 < sVar6 &&
                           (((sVar6 < g_worldGrid.sizeY && (-1 < sVar9)) &&
                            (sVar9 < g_worldGrid.sizeZ)))))) {
                    pSVar15 = (STFishC *)
                              STGridAt3D(g_worldGrid, sVar7, sVar6, sVar9).objects[0];
                    goto cf_common_exit_00464282;
                  }
                  pSVar15 = nullptr;
cf_common_exit_00464282:
                  if (local_14 != pSVar15) {
                    STFishC::sub_004162B0(local_14,(short *)local_c,psVar2,psVar1);
                    STBoatC::sub_00481520
                              (this,(int)*(short *)&local_c->vtable,(int)*psVar2,(int)*psVar1);
                    thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2,*psVar1);
                    thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
                    thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
                    thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
                    STBoatC::sub_00460260(this,0);
                    STField<undefined2>(this,0xf8) = 0;
                    thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2,*psVar1);
                    thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
                    thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
                    thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
                    return 2;
                  }
                  STField<undefined4>(this,0x82e) = 3;
                  return 2;
                }
              }
            }
            else if (((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) &&
                    ((-1 < sVar6 &&
                     (((sVar6 < g_worldGrid.sizeY && (-1 < sVar9)) && (sVar9 < g_worldGrid.sizeZ))))
                    )) {
              local_14 = (STFishC *)
                         STGridAt3D(g_worldGrid, sVar7, sVar6, sVar9).objects[0];
              goto LAB_00464147;
            }
            break;
          case -1:
            goto cf_common_exit_0046401F;
          }
          goto cf_common_exit_0046351A;
        }
        if (iVar16 != 3) {
          return -1;
        }
        sVar9 = STField<short>(this,0x804);
        sVar6 = STField<short>(this,0x802);
        sVar7 = STField<short>(this,0x800);
        if (STField<int>(this,0x7fc) == 3) {
          if (((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
             ((sVar6 < 0 ||
              (((g_worldGrid.sizeY <= sVar6 || (sVar9 < 0)) || (g_worldGrid.sizeZ <= sVar9)))))) {
LAB_0046461c:
            local_c = nullptr;
          }
          else {
            local_c = (STFishC *)
                      STGridAt3D(g_worldGrid, sVar7, sVar6, sVar9).objects[1];
          }
        }
        else {
          if (((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar6 < 0)) ||
              ((g_worldGrid.sizeY <= sVar6 || (sVar9 < 0)))) || (g_worldGrid.sizeZ <= sVar9))
          goto LAB_0046461c;
          local_c = (STFishC *)
                    STGridAt3D(g_worldGrid, sVar7, sVar6, sVar9).objects[0];
        }
        if ((local_c == nullptr) || (local_c->field_0018 != STField<int>(this,0x7f4))) {
          iVar16 = STPlaySystemC::sub_006E62D0
                             (g_playSystem_00802A38,
                              STField<AnonShape_005EFAE0_B406B78B *>(this,0x7f4),(int *)&local_c);
          pSVar15 = this;
          if (((iVar16 == -4) || (iVar16 = (*local_c->vtable->vfunc_F8)(), iVar16 == 0)) ||
             ((*(int *)&local_c->field_0x20 == 0x1ae &&
              (iVar16 = (*local_c->vtable->vfunc_F4)(STField<undefined4>(this,0x24)), iVar16 == 0
              )))) {
            pSVar20 = *(STFishCVTable **)this;
            local_58 = &local_4c;
            local_4c = 10000;
            local_44 = 0xff;
            local_5c = 0x110;
          }
          else {
            STFishC::sub_004162B0(local_c,(short *)&local_10,(short *)&local_28,(short *)&local_14);
            uVar11 = (int)STField<short>(this,0x800) - (int)(short)local_10;
            uVar19 = (int)uVar11 >> 0x1f;
            if ((((int)((uVar11 ^ uVar19) - uVar19) < 2) &&
                (uVar11 = (int)STField<short>(this,0x802) - (int)(short)local_28,
                uVar19 = (int)uVar11 >> 0x1f, (int)((uVar11 ^ uVar19) - uVar19) < 2)) &&
               (uVar11 = (int)STField<short>(this,0x804) - (int)(short)local_14,
               uVar19 = (int)uVar11 >> 0x1f, (int)((uVar11 ^ uVar19) - uVar19) < 2)) {
              STField<short>(this,0x804) = (short)local_14;
              STField<short>(this,0x800) = (short)local_10;
              STField<short>(this,0x802) = (short)local_28;
              goto LAB_0046470b;
            }
            pSVar20 = *(STFishCVTable **)this;
            local_58 = &local_4c;
            local_4c = 10000;
            local_44 = 0xff;
            local_5c = 0x110;
          }
        }
        else {
LAB_0046470b:
          thunk_FUN_00416270(local_c,&local_10,&local_28,(short *)&local_14);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          sVar9 = (**(code **)(*(int *)this + 0x10))
                            (STField<undefined2>(this,0x41),STField<undefined2>(this,0x43),
                             STField<undefined2>(this,0x45),local_10,local_28,local_14);
          local_EAX_9668 = STBoatC::sub_004176C0(this,sVar9);
          STBoatC::sub_00417910(this,(short)local_EAX_9668);
          sub_00415B30(this,STField<short>(this,0x41),STField<short>(this,0x43),
                       STField<short>(this,0x45),(short)local_10,(short)local_28,(short)local_14,
                       STField<byte>(this,0x61));
          STField<undefined4>(this,0x7a) = 0;
          iVar16 = STJellyGunC::sub_00415ED0(this,&local_30,local_74);
          if (iVar16 == -1) {
            return -1;
          }
          if (iVar16 == 0) {
            local_58 = &local_4c;
            local_4c = 10000;
            local_44 = 0xff;
            local_5c = 0x110;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)**(undefined4 **)this)(local_6c);
            local_48 = STField<undefined4>(this,0x6f7);
            local_44 = STField<undefined4>(this,0x24);
            local_40 = STField<undefined2>(this,0x32);
            local_3e = STField<undefined2>(this,0x18);
          }
          else {
            if ((iVar16 != 1) ||
               (iVar16 = local_c->vfunc_DC(STField<undefined2>(this,0x41),
                                    STField<undefined2>(this,0x43),
                                    STField<undefined2>(this,0x45),
                                    STField<undefined2>(this,0x34),
                                    STField<undefined2>(this,0x36),
                                    STField<undefined2>(this,0x38)), iVar16 < 0))
            goto cf_common_exit_00464889;
            local_58 = &local_4c;
            local_4c = 10000;
            local_44 = 0xff;
            local_5c = 0x110;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)**(undefined4 **)this)(local_6c);
            local_48 = STField<undefined4>(this,0x6f7);
            local_44 = STField<undefined4>(this,0x24);
            local_40 = STField<undefined2>(this,0x32);
            local_3e = STField<undefined2>(this,0x18);
          }
          local_4c = 600;
          pSVar20 = local_c->vtable;
          pSVar15 = local_c;
        }
        local_38 = 1;
        (*pSVar20->GetMessage)(pSVar15,(int)local_6c);
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
cf_common_exit_00464889:
        iVar16 = (**(code **)(*(int *)this + 0xd8))();
        return (-(uint)(iVar16 != 0) & 0xfffffffd) + 2;
      }
      local_EAX_5975 = STBoatC::sub_00460260(this,2);
      switch(local_EAX_5975) {
      case 0:
        sVar9 = STField<short>(this,0x804);
        sVar6 = STField<short>(this,0x802);
        psVar1 = (short *)((int)this + 0x804);
        psVar2 = (short *)((int)this + 0x802);
        local_c = (STFishC *)((int)this + 0x800);
        sVar7 = *(short *)&local_c->vtable;
        local_10 = STReplaceLowWord((uint32_t)(local_c), (uint16_t)(sVar7));
        if (STField<int>(this,0x7fc) == 3) {
          if (((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
             ((sVar6 < 0 ||
              (((g_worldGrid.sizeY <= sVar6 || (sVar9 < 0)) || (g_worldGrid.sizeZ <= sVar9)))))) {
LAB_00463d56:
            local_14 = nullptr;
          }
          else {
            local_14 = (STFishC *)
                       STGridAt3D(g_worldGrid, sVar7, sVar6, sVar9).objects[1];
          }
        }
        else {
          if (((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar6 < 0)) ||
              ((g_worldGrid.sizeY <= sVar6 || (sVar9 < 0)))) || (g_worldGrid.sizeZ <= sVar9))
          goto LAB_00463d56;
          local_14 = (STFishC *)
                     STGridAt3D(g_worldGrid, sVar7, sVar6, sVar9).objects[0];
        }
        if ((local_14 == nullptr) || (local_14->field_0018 != STField<int>(this,0x7f4))) {
          iVar16 = STPlaySystemC::sub_006E62D0
                             (g_playSystem_00802A38,
                              STField<AnonShape_005EFAE0_B406B78B *>(this,0x7f4),(int *)&local_14);
          if (((iVar16 != -4) && (iVar16 = (*local_14->vtable->vfunc_F8)(), iVar16 != 0)) &&
             ((*(int *)&local_14->field_0x20 != 0x1ae ||
              (iVar16 = (*local_14->vtable->vfunc_F4)(STField<undefined4>(this,0x24)),
              iVar16 != 0)))) {
            STFishC::sub_004162B0(local_14,(short *)local_c,psVar2,psVar1);
            sVar9 = *psVar1;
            sVar6 = *psVar2;
            iVar16 = (int)*(short *)&local_c->vtable;
            goto cf_common_exit_00463FD6;
          }
        }
        else {
          iVar16 = (*local_14->vtable->vfunc_F8)();
          if ((iVar16 != 0) &&
             ((*(int *)&local_14->field_0x20 != 0x1ae ||
              (iVar16 = (*local_14->vtable->vfunc_F4)(STField<undefined4>(this,0x24)),
              iVar16 != 0)))) {
            if (STField<int>(this,0x7f8) != 0) {
              STField<undefined4>(this,0x82e) = 2;
              STField<undefined4>(this,0xb7) = 0;
              STFishC::sub_004162B0(local_14,(short *)local_c,psVar2,psVar1);
              STBoatC::sub_00481520(this,(int)*(short *)&local_c->vtable,(int)*psVar2,(int)*psVar1);
              thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2,*psVar1);
              thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
              thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
              thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
              STBoatC::sub_00460260(this,0);
              STField<undefined2>(this,0xf8) = 0;
              thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2,*psVar1);
              thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
              thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
              thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
              return 2;
            }
            iVar16 = (int)*(short *)&local_c->vtable;
            uVar11 = STField<short>(this,0x47) - iVar16;
            uVar19 = (int)uVar11 >> 0x1f;
            if ((((int)((uVar11 ^ uVar19) - uVar19) < 2) &&
                (uVar11 = (int)STField<short>(this,0x49) - (int)*psVar2,
                uVar19 = (int)uVar11 >> 0x1f, (int)((uVar11 ^ uVar19) - uVar19) < 2)) &&
               (uVar11 = (int)STField<short>(this,0x4b) - (int)*psVar1,
               uVar19 = (int)uVar11 >> 0x1f, (int)((uVar11 ^ uVar19) - uVar19) < 2)) {
              STField<undefined4>(this,0x82e) = 3;
              return 2;
            }
            sVar9 = *psVar1;
            sVar6 = *psVar2;
cf_common_exit_00463FD6:
            STBoatC::sub_00481520(this,iVar16,(int)sVar6,(int)sVar9);
            STBoatC::sub_00460260(this,0);
            STField<undefined2>(this,0xf8) = 0;
switchD_004638e6_caseD_2:
            return 2;
          }
        }
        break;
      case 1:
        sVar9 = STField<short>(this,0x804);
        sVar6 = STField<short>(this,0x802);
        sVar7 = STField<short>(this,0x800);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_10 = CONCAT22((short)((uint)STField<int>(this,0x7fc) >> 0x10),sVar7);
        if (STField<int>(this,0x7fc) == 3) {
          if (((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
             ((sVar6 < 0 ||
              (((g_worldGrid.sizeY <= sVar6 || (sVar9 < 0)) || (g_worldGrid.sizeZ <= sVar9)))))) {
LAB_00463b9d:
            local_c = nullptr;
          }
          else {
            local_c = (STFishC *)
                      STGridAt3D(g_worldGrid, sVar7, sVar6, sVar9).objects[1];
          }
        }
        else {
          if ((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar6 < 0)) ||
             (((g_worldGrid.sizeY <= sVar6 || (sVar9 < 0)) || (g_worldGrid.sizeZ <= sVar9))))
          goto LAB_00463b9d;
          local_c = (STFishC *)
                    STGridAt3D(g_worldGrid, sVar7, sVar6, sVar9).objects[0];
        }
        if ((local_c != nullptr) && (local_c->field_0018 == STField<int>(this,0x7f4))) {
          iVar16 = (*local_c->vtable->vfunc_F8)();
          if (iVar16 != 0) {
            if (*(int *)&local_c->field_0x20 != 0x1ae) {
              return 2;
            }
            iVar16 = (*local_c->vtable->vfunc_F4)(STField<undefined4>(this,0x24));
            if (iVar16 != 0) {
              return 2;
            }
          }
          STBoatC::sub_004602B0(this);
          return 0;
        }
        STBoatC::sub_004602B0(this);
        iVar16 = STPlaySystemC::sub_006E62D0
                           (g_playSystem_00802A38,
                            STField<AnonShape_005EFAE0_B406B78B *>(this,0x7f4),(int *)&local_c);
        if ((iVar16 != -4) && (iVar16 = (*local_c->vtable->vfunc_F8)(), iVar16 != 0)) {
          if (*(int *)&local_c->field_0x20 == 0x1ae) {
            iVar16 = (*local_c->vtable->vfunc_F4)(STField<undefined4>(this,0x24));
joined_r0x00463a7a:
            if (iVar16 == 0) break;
          }
LAB_00463a83:
          STFishC::sub_004162B0
                    (local_c,(short *)((int)this + 0x800),(short *)((int)this + 0x802),
                     (short *)((int)this + 0x804));
LAB_00463a91:
          sVar9 = STField<short>(this,0x804);
          sVar6 = STField<short>(this,0x802);
          iVar16 = (int)STField<short>(this,0x800);
          goto cf_common_exit_00463FD6;
        }
        break;
      default:
        goto switchD_004638e6_caseD_2;
      case 3:
        sVar9 = STField<short>(this,0x804);
        sVar6 = STField<short>(this,0x802);
        sVar7 = STField<short>(this,0x800);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_10 = CONCAT22((short)((uint)STField<int>(this,0x7fc) >> 0x10),sVar7);
        if (STField<int>(this,0x7fc) == 3) {
          if (((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
             ((sVar6 < 0 ||
              (((g_worldGrid.sizeY <= sVar6 || (sVar9 < 0)) || (g_worldGrid.sizeZ <= sVar9)))))) {
LAB_004639e6:
            local_c = nullptr;
          }
          else {
            local_c = (STFishC *)
                      STGridAt3D(g_worldGrid, sVar7, sVar6, sVar9).objects[1];
          }
        }
        else {
          if (((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar6 < 0)) ||
              ((g_worldGrid.sizeY <= sVar6 || (sVar9 < 0)))) || (g_worldGrid.sizeZ <= sVar9))
          goto LAB_004639e6;
          local_c = (STFishC *)
                    STGridAt3D(g_worldGrid, sVar7, sVar6, sVar9).objects[0];
        }
        if ((local_c == nullptr) || (local_c->field_0018 != STField<int>(this,0x7f4))) {
          iVar16 = STPlaySystemC::sub_006E62D0
                             (g_playSystem_00802A38,
                              STField<AnonShape_005EFAE0_B406B78B *>(this,0x7f4),(int *)&local_c);
          if ((iVar16 != -4) && (iVar16 = (*local_c->vtable->vfunc_F8)(), iVar16 != 0)) {
            if (*(int *)&local_c->field_0x20 == 0x1ae) {
              iVar16 = (*local_c->vtable->vfunc_F4)(STField<undefined4>(this,0x24));
              goto joined_r0x00463a7a;
            }
            goto LAB_00463a83;
          }
        }
        else {
          iVar16 = (*local_c->vtable->vfunc_F8)();
          if ((iVar16 != 0) &&
             ((*(int *)&local_c->field_0x20 != 0x1ae ||
              (iVar16 = (*local_c->vtable->vfunc_F4)(STField<undefined4>(this,0x24)), iVar16 != 0
              )))) goto LAB_00463a91;
        }
        break;
      case -1:
        goto cf_common_exit_0046401F;
      }
    }
  }
cf_common_exit_0046351A:
  local_EAX_1646 = 0;
cf_common_exit_0046351C:
  return local_EAX_1646;
}

