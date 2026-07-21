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
  uint uVar10;
  STGameObjC *this_00;
  undefined4 *puVar11;
  STGroupBoatC *pSVar12;
  dword dVar13;
  STFishC *pSVar14;
  int iVar15;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  undefined2 uVar16;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  undefined2 uVar17;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_04;
  STFishC *pSVar18;
  uint uVar19;
  STFishCVTable *pSVar20;
  int iVar21;
  ushort *puVar22;
  STWorldObject *pSVar23;
  bool bVar24;
  AnonShape_00645880_0D5933D4 local_9c;
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
  STFishC *local_10;
  STFishC *local_c;
  undefined2 local_8 [2];

  if ((param_1 == 0) || (param_1 == 1)) {
    memset((void *)((int)this + 0x2cc), 0, 0x5c); /* compiler bulk-zero initialization */
    iVar15 = 0;
    *(undefined4 *)((int)this + 0x2c4) = 0;
    uVar10 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar10;
    *(short *)((int)this + 0xf8) = (short)((ulonglong)(uVar10 >> 0x10) % 0x1f) + 0x1e;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00 = STAllPlayersC::GetObjPtr
                        (g_sTAllPlayers_007FA174,*(char *)((int)this + 0x33a),
                         (uint)*(ushort *)((int)this + 0x33f),
                         *(STAllPlayersC_GetObjPtr_param_3Enum *)((int)this + 0x33b));
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if (((this_00 != (STGameObjC *)0x0) && (this_00 != this)) &&
       ((*(int *)((int)this + 0x6f7) != 9 ||
        ((iVar15 = (**(code **)&this_00->vtable->field_0x2c)(), iVar15 == 0x3b ||
         (iVar15 = (**(code **)&this_00->vtable->field_0x2c)(), iVar15 == 0x60)))))) {
      *(undefined4 *)((int)this + 0x7f4) = this_00->field_0018;
      *(undefined4 *)((int)this + 0x7f8) = this_00->field_002C;
      *(undefined4 *)((int)this + 0x7fc) = *(undefined4 *)((int)this + 0x33b);
      STFishC::sub_004162B0
                ((STFishC *)this_00,(undefined2 *)((int)this + 0x800),
                 (undefined2 *)((int)this + 0x802),(undefined2 *)((int)this + 0x804));
      *(undefined2 *)((int)this + 0x7f2) = *(undefined2 *)((int)this + 0x341);
      *(undefined4 *)((int)this + 0x7de) = *(undefined4 *)((int)this + 0x336);
      *(undefined4 *)((int)this + 0x82e) = 0;
      *(undefined4 *)((int)this + 0x832) = 0;
      *(undefined4 *)((int)this + 0x836) = 0xffffffff;
      *(undefined4 *)((int)this + 0x83a) = 0;
      uVar10 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar10;
      *(uint *)((int)this + 0x818) = (uVar10 >> 0x10) % 0xb + 10;
      *(undefined2 *)((int)this + 0x80a) = 0xffff;
      *(undefined2 *)((int)this + 0x808) = 0xffff;
      *(undefined2 *)((int)this + 0x806) = 0xffff;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar15 = (**(code **)&this_00->vtable->field_0x2c)();
      if (iVar15 == 0x4d) {
        *(undefined2 *)((int)this + 0x816) = 9;
      }
      else {
        *(undefined2 *)((int)this + 0x816) = 5;
      }
      *(short *)((int)this + 0x814) = *(short *)((int)this + 0x816) * 0xc9;
      goto LAB_00462320;
    }
    goto cf_common_exit_0046351A;
  }
LAB_00462320:
  if (*(int *)((int)this + 0x6f7) != 9) {
    if (*(int *)((int)this + 0x6f7) != 0x15) {
      iVar15 = *(int *)((int)this + 0x836) + 1;
      *(int *)((int)this + 0x836) = iVar15;
      if ((iVar15 % 5 == 0) && (*(int *)((int)this + 0x82e) == 0)) {
        iVar15 = thunk_FUN_00482db0(this,0);
        switch(iVar15) {
        case 0:
          sVar9 = *(short *)((int)this + 0x804);
          sVar6 = *(short *)((int)this + 0x802);
          sVar7 = *(short *)((int)this + 0x800);
          if (*(int *)((int)this + 0x7fc) == 3) {
            if (((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar6 < 0)) ||
                ((g_worldGrid.sizeY <= sVar6 || (sVar9 < 0)))) || (g_worldGrid.sizeZ <= sVar9)) {
LAB_004625fd:
              pSVar23 = (STWorldObject *)0x0;
            }
            else {
              pSVar23 = g_worldGrid.cells
                        [(int)sVar9 * (int)g_worldGrid.planeStride +
                         (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[1];
            }
          }
          else {
            if ((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
                ((sVar6 < 0 || ((g_worldGrid.sizeY <= sVar6 || (sVar9 < 0)))))) ||
               (g_worldGrid.sizeZ <= sVar9)) goto LAB_004625fd;
            pSVar23 = g_worldGrid.cells
                      [(int)sVar9 * (int)g_worldGrid.planeStride +
                       (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0];
          }
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_9c._8_2_ = *(undefined2 *)((int)this + 0x41);
          local_9c.field_000A = *(undefined2 *)((int)this + 0x43);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_9c._12_2_ = *(undefined2 *)((int)this + 0x45);
          local_10 = (STFishC *)0x0;
          if (*(char *)((int)this + 0x2b2) != '\0') {
            puVar22 = (ushort *)((int)this + 0x2a8);
            do {
              puVar11 = (undefined4 *)
                        thunk_FUN_0041dc40(local_74,(short)*(undefined4 *)(puVar22 + -1),puVar22[1],
                                           *(short *)((int)this + 0x6c));
              local_9c.field_000E = *(short *)((int)this + 0x41) + (short)*puVar11;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_9c._16_2_ = *(short *)((int)this + 0x43) - (short)((uint)*puVar11 >> 0x10);
              local_9c.field_0012 = *(short *)(puVar11 + 1) + *(short *)((int)this + 0x45);
              local_30 = (uint)*puVar22 << 0x10;
              puVar11 = (undefined4 *)thunk_FUN_0041dc40(&local_c,0,0,*(short *)((int)this + 0x6c));
              uVar8 = *puVar11;
              local_2c = *(undefined2 *)(puVar11 + 1);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_9c._20_2_ = (short)uVar8 + *(short *)&pSVar23[1].field_0x1d;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_30._2_2_ = (short)((uint)uVar8 >> 0x10);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_9c.field_0016 = *(short *)&pSVar23[1].field_0x1f - local_30._2_2_;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_9c._24_2_ = *(undefined2 *)((int)&pSVar23[1].value_20 + 1);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_9c._0_4_ = *(undefined4 *)((int)this + 0x24);
              local_9c.field_0022 = (-(uint)(*(int *)((int)this + 0x6f7) != 10) & 0xfffffffe) + 1;
              if (*(int *)((int)this + 0x7de) == 0) {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_9c._4_4_ = *(undefined4 *)((int)this + 0x79a);
              }
              else {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_9c._4_4_ = 0xa1;
              }
              local_9c.field_001A = *(undefined2 *)((int)this + 0x6c);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_9c._28_4_ = *(undefined4 *)((int)this + 0x18);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_9c._32_2_ = *(undefined2 *)((int)this + 0x32);
              local_30 = uVar8;
              thunk_FUN_00645880(&local_9c);
              *(undefined4 *)((int)this + 0x83a) = 0;
              iVar15 = *(int *)((int)this + 0x7a2) + -1;
              *(int *)((int)this + 0x7a2) = iVar15;
              *(undefined4 *)((int)this + 0x7aa) = 0;
              if ((*(int *)((int)this + 0x7de) == 0) && (iVar15 < 1)) break;
              local_10 = (STFishC *)((int)&local_10->vtable + 1);
              puVar22 = puVar22 + 3;
            } while ((int)local_10 < (int)(uint)*(byte *)((int)this + 0x2b2));
          }
          if (*(int *)((int)this + 0x7de) == 1) {
            *(undefined4 *)((int)this + 0x72a) = 0;
          }
          break;
        case 1:
        case 5:
          *(undefined4 *)((int)this + 0x82e) = 2;
          if (((*(short *)((int)this + 0x800) != *(short *)((int)this + 0x806)) ||
              (*(short *)((int)this + 0x802) != *(short *)((int)this + 0x808))) ||
             (*(short *)((int)this + 0x804) != *(short *)((int)this + 0x80a))) {
            STBoatC::sub_004602B0(this);
            STBoatC::sub_00481520
                      (this,(int)*(short *)((int)this + 0x800),(int)*(short *)((int)this + 0x802),
                       (int)*(short *)((int)this + 0x804));
            *(undefined2 *)((int)this + 0x806) = *(undefined2 *)((int)this + 0x800);
            *(undefined2 *)((int)this + 0x808) = *(undefined2 *)((int)this + 0x802);
            *(undefined2 *)((int)this + 0x80a) = *(undefined2 *)((int)this + 0x804);
LAB_004624c3:
            iVar15 = STBoatC::sub_00460260(this,0);
            if (iVar15 == -1) {
              return -1;
            }
          }
          break;
        case 2:
          return 4;
        case 3:
          *(undefined4 *)((int)this + 0x82e) = 0;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*(int *)this + 0x20))();
          break;
        case 4:
          goto cf_common_exit_0046351A;
        case 6:
        case 7:
        case 8:
          if (*(int *)((int)this + 0x832) == 0) {
            *(undefined4 *)((int)this + 0x832) = 1;
            *(undefined4 *)((int)this + 0x83a) = *(undefined4 *)((int)this + 0x818);
          }
          iVar21 = *(int *)((int)this + 0x83a) + 1;
          *(int *)((int)this + 0x83a) = iVar21;
          if (*(int *)((int)this + 0x818) < iVar21) {
            *(undefined4 *)((int)this + 0x83a) = 0;
            iVar15 = thunk_FUN_00484020(this,(short)iVar15,(short *)&local_24,(short *)&local_1c,
                                        (short *)&local_20);
            if (iVar15 != 0) {
              *(undefined4 *)((int)this + 0x82e) = 3;
              STBoatC::sub_00481520
                        (this,(int)(short)local_24,(int)(short)local_1c,(int)(short)local_20);
              goto LAB_004624c3;
            }
            *(short *)((int)this + 0x814) = *(short *)((int)this + 0x814) + -0xc9;
            if (*(short *)((int)this + 0x814) < 100) {
              return 8;
            }
          }
          *(undefined4 *)((int)this + 0x82e) = 0;
          break;
        case 9:
          *(undefined4 *)((int)this + 0x82e) = 1;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*(int *)this + 0x20))();
          uVar10 = thunk_FUN_004836c0(this);
          thunk_FUN_00417740(this,*(short *)((int)this + 0x6c),(short)uVar10);
        }
      }
      iVar15 = *(int *)((int)this + 0x82e);
      if (iVar15 == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)this + 0xd8))();
        return 2;
      }
      if (iVar15 == 1) {
        iVar15 = thunk_FUN_00417830(this);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)this + 0xd8))();
        if (iVar15 == 0) {
cf_common_exit_00462823:
          *(undefined4 *)((int)this + 0x836) = 0xffffffff;
          *(undefined4 *)((int)this + 0x82e) = 0;
        }
switchD_004627fb_default:
        return 2;
      }
      if (iVar15 != 2) {
        if (iVar15 != 3) {
cf_common_exit_0046401F:
          return -1;
        }
        iVar15 = STBoatC::sub_00460260(this,2);
        switch(iVar15) {
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
      iVar15 = STBoatC::sub_00460260(this,2);
      switch(iVar15) {
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
    iVar15 = *(int *)((int)this + 0x82e);
    if (iVar15 == 0) {
      *(undefined4 *)((int)this + 0x82e) = 1;
      if (*(int *)((int)this + 0x7f8) == 1) {
        *(undefined4 *)((int)this + 0xb7) = 3;
      }
      else {
        *(undefined4 *)((int)this + 0xb7) = 1;
      }
      STBoatC::sub_00481520
                (this,(int)*(short *)((int)this + 0x800),(int)*(short *)((int)this + 0x802),
                 (int)*(short *)((int)this + 0x804));
      STBoatC::sub_00460260(this,0);
      *(undefined2 *)((int)this + 0xf8) = 0;
      goto cf_common_exit_00464889;
    }
    if (iVar15 != 1) {
      if (iVar15 == 2) {
        iVar15 = STBoatC::sub_00460260(this,2);
        switch(iVar15) {
        case 0:
          break;
        case 1:
          sVar9 = *(short *)((int)this + 0x804);
          sVar6 = *(short *)((int)this + 0x802);
          sVar7 = *(short *)((int)this + 0x800);
          if (*(int *)((int)this + 0x7fc) == 3) {
            if (((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) &&
               ((-1 < sVar6 &&
                (((sVar6 < g_worldGrid.sizeY && (-1 < sVar9)) && (sVar9 < g_worldGrid.sizeZ)))))) {
              pSVar23 = g_worldGrid.cells
                        [(int)sVar9 * (int)g_worldGrid.planeStride +
                         (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[1];
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_004644dc:
              if (((pSVar23 != (STWorldObject *)0x0) &&
                  (*(int *)&pSVar23->field_0x18 == *(int *)((int)this + 0x7f4))) &&
                 ((iVar15 = (*pSVar23->vtable[5].slots_00_28[2])(), iVar15 != 0 &&
                  ((pSVar23->value_20 != 0x1ae ||
                   (iVar15 = (*pSVar23->vtable[5].slots_00_28[1])(*(undefined4 *)((int)this + 0x24))
                   , iVar15 != 0)))))) {
cf_common_exit_00464526:
                return 2;
              }
            }
          }
          else if ((((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) && (-1 < sVar6)) &&
                  (((sVar6 < g_worldGrid.sizeY && (-1 < sVar9)) && (sVar9 < g_worldGrid.sizeZ)))) {
            pSVar23 = g_worldGrid.cells
                      [(int)sVar9 * (int)g_worldGrid.planeStride +
                       (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0];
            goto LAB_004644dc;
          }
          break;
        default:
          goto cf_common_exit_00464526;
        case 3:
          sVar9 = *(short *)((int)this + 0x804);
          sVar6 = *(short *)((int)this + 0x802);
          psVar1 = (short *)((int)this + 0x804);
          psVar2 = (short *)((int)this + 0x802);
          local_c = (STFishC *)((int)this + 0x800);
          sVar7 = *(short *)&local_c->vtable;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_10 = (STFishC *)CONCAT22((short)((uint)local_c >> 0x10),sVar7);
          if (*(int *)((int)this + 0x7fc) == 3) {
            if ((((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) &&
                ((-1 < sVar6 && ((sVar6 < g_worldGrid.sizeY && (-1 < sVar9)))))) &&
               (sVar9 < g_worldGrid.sizeZ)) {
              local_14 = (STFishC *)
                         g_worldGrid.cells
                         [(int)sVar9 * (int)g_worldGrid.planeStride +
                          (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[1];
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_00464147:
              if ((((local_14 != (STFishC *)0x0) &&
                   (local_14->field_0018 == *(int *)((int)this + 0x7f4))) &&
                  (iVar15 = (*local_14->vtable->vfunc_F8)(), iVar15 != 0)) &&
                 ((*(int *)&local_14->field_0x20 != 0x1ae ||
                  (iVar15 = (*local_14->vtable->vfunc_F4)(*(undefined4 *)((int)this + 0x24)),
                  iVar15 != 0)))) {
                sVar9 = *(short *)((int)this + 0xdf);
                sVar6 = *(short *)((int)this + 0xdb);
                sVar7 = *(short *)((int)this + 0xd7);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_10 = (STFishC *)
                           CONCAT22((short)((uint)*(int *)((int)this + 0x7fc) >> 0x10),sVar7);
                if (*(int *)((int)this + 0x7fc) == 3) {
                  if (((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) &&
                     (((-1 < sVar6 && ((sVar6 < g_worldGrid.sizeY && (-1 < sVar9)))) &&
                      (sVar9 < g_worldGrid.sizeZ)))) {
                    pSVar14 = (STFishC *)
                              g_worldGrid.cells
                              [(int)sVar9 * (int)g_worldGrid.planeStride +
                               (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[1];
                    goto cf_common_exit_00464282;
                  }
                }
                else if (((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) &&
                        ((-1 < sVar6 &&
                         (((sVar6 < g_worldGrid.sizeY && (-1 < sVar9)) &&
                          (sVar9 < g_worldGrid.sizeZ)))))) {
                  pSVar14 = (STFishC *)
                            g_worldGrid.cells
                            [(int)sVar9 * (int)g_worldGrid.planeStride +
                             (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0];
                  goto cf_common_exit_00464282;
                }
                pSVar14 = (STFishC *)0x0;
cf_common_exit_00464282:
                if (local_14 != pSVar14) {
                  STFishC::sub_004162B0(local_14,(undefined2 *)local_c,psVar2,psVar1);
                  STBoatC::sub_00481520
                            (this,(int)*(short *)&local_c->vtable,(int)*psVar2,(int)*psVar1);
                  thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2,*psVar1);
                  thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
                  thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
                  thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
                  STBoatC::sub_00460260(this,0);
                  *(undefined2 *)((int)this + 0xf8) = 0;
                  thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2,*psVar1);
                  thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
                  thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
                  thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
                  return 2;
                }
                *(undefined4 *)((int)this + 0x82e) = 3;
                return 2;
              }
            }
          }
          else if (((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) &&
                  ((-1 < sVar6 &&
                   (((sVar6 < g_worldGrid.sizeY && (-1 < sVar9)) && (sVar9 < g_worldGrid.sizeZ))))))
          {
            local_14 = (STFishC *)
                       g_worldGrid.cells
                       [(int)sVar9 * (int)g_worldGrid.planeStride +
                        (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0];
            goto LAB_00464147;
          }
          break;
        case -1:
          goto cf_common_exit_0046401F;
        }
        goto cf_common_exit_0046351A;
      }
      if (iVar15 != 3) {
        return -1;
      }
      sVar9 = *(short *)((int)this + 0x804);
      sVar6 = *(short *)((int)this + 0x802);
      sVar7 = *(short *)((int)this + 0x800);
      if (*(int *)((int)this + 0x7fc) == 3) {
        if (((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
           ((sVar6 < 0 ||
            (((g_worldGrid.sizeY <= sVar6 || (sVar9 < 0)) || (g_worldGrid.sizeZ <= sVar9)))))) {
LAB_0046461c:
          local_c = (STFishC *)0x0;
        }
        else {
          local_c = (STFishC *)
                    g_worldGrid.cells
                    [(int)sVar9 * (int)g_worldGrid.planeStride + (int)sVar6 * (int)g_worldGrid.sizeX
                     + (int)sVar7].objects[1];
        }
      }
      else {
        if (((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar6 < 0)) ||
            ((g_worldGrid.sizeY <= sVar6 || (sVar9 < 0)))) || (g_worldGrid.sizeZ <= sVar9))
        goto LAB_0046461c;
        local_c = (STFishC *)
                  g_worldGrid.cells
                  [(int)sVar9 * (int)g_worldGrid.planeStride + (int)sVar6 * (int)g_worldGrid.sizeX +
                   (int)sVar7].objects[0];
      }
      if ((local_c == (STFishC *)0x0) || (local_c->field_0018 != *(int *)((int)this + 0x7f4))) {
        iVar15 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + 0x7f4),(int *)&local_c);
        pSVar14 = this;
        if (((iVar15 == -4) || (iVar15 = (*local_c->vtable->vfunc_F8)(), iVar15 == 0)) ||
           ((*(int *)&local_c->field_0x20 == 0x1ae &&
            (iVar15 = (*local_c->vtable->vfunc_F4)(*(undefined4 *)((int)this + 0x24)), iVar15 == 0))
           )) {
          pSVar20 = *(STFishCVTable **)this;
          local_58 = &local_4c;
          local_4c = 10000;
          local_44 = 0xff;
          local_5c = 0x110;
        }
        else {
          STFishC::sub_004162B0
                    (local_c,(undefined2 *)&local_10,(undefined2 *)&local_28,(undefined2 *)&local_14
                    );
          uVar10 = (int)*(short *)((int)this + 0x800) - (int)(short)local_10;
          uVar19 = (int)uVar10 >> 0x1f;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((((int)((uVar10 ^ uVar19) - uVar19) < 2) &&
              (uVar10 = (int)*(short *)((int)this + 0x802) - (int)(short)local_28,
              uVar19 = (int)uVar10 >> 0x1f, (int)((uVar10 ^ uVar19) - uVar19) < 2)) &&
             (uVar10 = (int)*(short *)((int)this + 0x804) - (int)(short)local_14,
             uVar19 = (int)uVar10 >> 0x1f, (int)((uVar10 ^ uVar19) - uVar19) < 2)) {
            *(short *)((int)this + 0x804) = (short)local_14;
            *(short *)((int)this + 0x800) = (short)local_10;
            *(short *)((int)this + 0x802) = (short)local_28;
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
        thunk_FUN_00416270(local_c,(undefined2 *)&local_10,&local_28,(int *)&local_14);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        sVar9 = (**(code **)(*(int *)this + 0x10))
                          (*(undefined2 *)((int)this + 0x41),*(undefined2 *)((int)this + 0x43),
                           *(undefined2 *)((int)this + 0x45),local_10,local_28,local_14);
        uVar10 = STBoatC::sub_004176C0(this,sVar9);
        STBoatC::sub_00417910(this,(short)uVar10);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        sub_00415B30(this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                     *(short *)((int)this + 0x45),(short)local_10,(short)local_28,(short)local_14,
                     *(byte *)((int)this + 0x61));
        *(undefined4 *)((int)this + 0x7a) = 0;
        iVar15 = STJellyGunC::sub_00415ED0(this,&local_30,local_74);
        if (iVar15 == -1) {
          return -1;
        }
        if (iVar15 == 0) {
          local_58 = &local_4c;
          local_4c = 10000;
          local_44 = 0xff;
          local_5c = 0x110;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)**(undefined4 **)this)(local_6c);
          local_48 = *(undefined4 *)((int)this + 0x6f7);
          local_44 = *(undefined4 *)((int)this + 0x24);
          local_40 = *(undefined2 *)((int)this + 0x32);
          local_3e = *(undefined2 *)((int)this + 0x18);
        }
        else {
          if ((iVar15 != 1) ||
             (iVar15 = (*local_c->vtable->vfunc_DC)
                                 (*(undefined2 *)((int)this + 0x41),
                                  *(undefined2 *)((int)this + 0x43),
                                  *(undefined2 *)((int)this + 0x45),
                                  *(undefined2 *)((int)this + 0x34),
                                  *(undefined2 *)((int)this + 0x36),
                                  *(undefined2 *)((int)this + 0x38)), iVar15 < 0))
          goto cf_common_exit_00464889;
          local_58 = &local_4c;
          local_4c = 10000;
          local_44 = 0xff;
          local_5c = 0x110;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)**(undefined4 **)this)(local_6c);
          local_48 = *(undefined4 *)((int)this + 0x6f7);
          local_44 = *(undefined4 *)((int)this + 0x24);
          local_40 = *(undefined2 *)((int)this + 0x32);
          local_3e = *(undefined2 *)((int)this + 0x18);
        }
        local_4c = 600;
        pSVar20 = local_c->vtable;
        pSVar14 = local_c;
      }
      local_38 = 1;
      (*pSVar20->GetMessage)(pSVar14,(int)local_6c);
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
cf_common_exit_00464889:
      iVar15 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar15 != 0) & 0xfffffffd) + 2;
    }
    iVar15 = STBoatC::sub_00460260(this,2);
    switch(iVar15) {
    case 0:
      sVar9 = *(short *)((int)this + 0x804);
      sVar6 = *(short *)((int)this + 0x802);
      psVar1 = (short *)((int)this + 0x804);
      psVar2 = (short *)((int)this + 0x802);
      local_c = (STFishC *)((int)this + 0x800);
      sVar7 = *(short *)&local_c->vtable;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_10 = (STFishC *)CONCAT22((short)((uint)local_c >> 0x10),sVar7);
      if (*(int *)((int)this + 0x7fc) == 3) {
        if (((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
           ((sVar6 < 0 ||
            (((g_worldGrid.sizeY <= sVar6 || (sVar9 < 0)) || (g_worldGrid.sizeZ <= sVar9)))))) {
LAB_00463d56:
          local_14 = (STFishC *)0x0;
        }
        else {
          local_14 = (STFishC *)
                     g_worldGrid.cells
                     [(int)sVar9 * (int)g_worldGrid.planeStride +
                      (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[1];
        }
      }
      else {
        if (((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar6 < 0)) ||
            ((g_worldGrid.sizeY <= sVar6 || (sVar9 < 0)))) || (g_worldGrid.sizeZ <= sVar9))
        goto LAB_00463d56;
        local_14 = (STFishC *)
                   g_worldGrid.cells
                   [(int)sVar9 * (int)g_worldGrid.planeStride + (int)sVar6 * (int)g_worldGrid.sizeX
                    + (int)sVar7].objects[0];
      }
      if ((local_14 == (STFishC *)0x0) || (local_14->field_0018 != *(int *)((int)this + 0x7f4))) {
        iVar15 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + 0x7f4),(int *)&local_14);
        if (((iVar15 != -4) && (iVar15 = (*local_14->vtable->vfunc_F8)(), iVar15 != 0)) &&
           ((*(int *)&local_14->field_0x20 != 0x1ae ||
            (iVar15 = (*local_14->vtable->vfunc_F4)(*(undefined4 *)((int)this + 0x24)), iVar15 != 0)
            ))) {
          STFishC::sub_004162B0(local_14,(undefined2 *)local_c,psVar2,psVar1);
          sVar6 = *psVar1;
          sVar9 = *psVar2;
          iVar15 = (int)*(short *)&local_c->vtable;
          goto cf_common_exit_00463FD6;
        }
      }
      else {
        iVar15 = (*local_14->vtable->vfunc_F8)();
        if ((iVar15 != 0) &&
           ((*(int *)&local_14->field_0x20 != 0x1ae ||
            (iVar15 = (*local_14->vtable->vfunc_F4)(*(undefined4 *)((int)this + 0x24)), iVar15 != 0)
            ))) {
          if (*(int *)((int)this + 0x7f8) != 0) {
            *(undefined4 *)((int)this + 0x82e) = 2;
            *(undefined4 *)((int)this + 0xb7) = 0;
            STFishC::sub_004162B0(local_14,(undefined2 *)local_c,psVar2,psVar1);
            STBoatC::sub_00481520(this,(int)*(short *)&local_c->vtable,(int)*psVar2,(int)*psVar1);
            thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2,*psVar1);
            thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
            thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
            thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
            STBoatC::sub_00460260(this,0);
            *(undefined2 *)((int)this + 0xf8) = 0;
            thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2,*psVar1);
            thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
            thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
            thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
            return 2;
          }
          iVar15 = (int)*(short *)&local_c->vtable;
          uVar10 = *(short *)((int)this + 0x47) - iVar15;
          uVar19 = (int)uVar10 >> 0x1f;
          if ((((int)((uVar10 ^ uVar19) - uVar19) < 2) &&
              (uVar10 = (int)*(short *)((int)this + 0x49) - (int)*psVar2,
              uVar19 = (int)uVar10 >> 0x1f, (int)((uVar10 ^ uVar19) - uVar19) < 2)) &&
             (uVar10 = (int)*(short *)((int)this + 0x4b) - (int)*psVar1,
             uVar19 = (int)uVar10 >> 0x1f, (int)((uVar10 ^ uVar19) - uVar19) < 2)) {
            *(undefined4 *)((int)this + 0x82e) = 3;
            return 2;
          }
          sVar6 = *psVar1;
          sVar9 = *psVar2;
cf_common_exit_00463FD6:
          STBoatC::sub_00481520(this,iVar15,(int)sVar9,(int)sVar6);
          STBoatC::sub_00460260(this,0);
          *(undefined2 *)((int)this + 0xf8) = 0;
switchD_004638e6_caseD_2:
          return 2;
        }
      }
      break;
    case 1:
      sVar9 = *(short *)((int)this + 0x804);
      sVar6 = *(short *)((int)this + 0x802);
      sVar7 = *(short *)((int)this + 0x800);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_10 = (STFishC *)CONCAT22((short)((uint)*(int *)((int)this + 0x7fc) >> 0x10),sVar7);
      if (*(int *)((int)this + 0x7fc) == 3) {
        if (((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
           ((sVar6 < 0 ||
            (((g_worldGrid.sizeY <= sVar6 || (sVar9 < 0)) || (g_worldGrid.sizeZ <= sVar9)))))) {
LAB_00463b9d:
          local_c = (STFishC *)0x0;
        }
        else {
          local_c = (STFishC *)
                    g_worldGrid.cells
                    [(int)sVar9 * (int)g_worldGrid.planeStride + (int)sVar6 * (int)g_worldGrid.sizeX
                     + (int)sVar7].objects[1];
        }
      }
      else {
        if ((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar6 < 0)) ||
           (((g_worldGrid.sizeY <= sVar6 || (sVar9 < 0)) || (g_worldGrid.sizeZ <= sVar9))))
        goto LAB_00463b9d;
        local_c = (STFishC *)
                  g_worldGrid.cells
                  [(int)sVar9 * (int)g_worldGrid.planeStride + (int)sVar6 * (int)g_worldGrid.sizeX +
                   (int)sVar7].objects[0];
      }
      if ((local_c != (STFishC *)0x0) && (local_c->field_0018 == *(int *)((int)this + 0x7f4))) {
        iVar15 = (*local_c->vtable->vfunc_F8)();
        if (iVar15 != 0) {
          if (*(int *)&local_c->field_0x20 != 0x1ae) {
            return 2;
          }
          iVar15 = (*local_c->vtable->vfunc_F4)(*(undefined4 *)((int)this + 0x24));
          if (iVar15 != 0) {
            return 2;
          }
        }
        STBoatC::sub_004602B0(this);
        return 0;
      }
      STBoatC::sub_004602B0(this);
      iVar15 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + 0x7f4),(int *)&local_c);
      if ((iVar15 != -4) && (iVar15 = (*local_c->vtable->vfunc_F8)(), iVar15 != 0)) {
        if (*(int *)&local_c->field_0x20 == 0x1ae) {
          iVar15 = (*local_c->vtable->vfunc_F4)(*(undefined4 *)((int)this + 0x24));
joined_r0x00463a7a:
          if (iVar15 == 0) break;
        }
LAB_00463a83:
        STFishC::sub_004162B0
                  (local_c,(undefined2 *)((int)this + 0x800),(undefined2 *)((int)this + 0x802),
                   (undefined2 *)((int)this + 0x804));
LAB_00463a91:
        sVar6 = *(short *)((int)this + 0x804);
        sVar9 = *(short *)((int)this + 0x802);
        iVar15 = (int)*(short *)((int)this + 0x800);
        goto cf_common_exit_00463FD6;
      }
      break;
    default:
      goto switchD_004638e6_caseD_2;
    case 3:
      sVar9 = *(short *)((int)this + 0x804);
      sVar6 = *(short *)((int)this + 0x802);
      sVar7 = *(short *)((int)this + 0x800);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_10 = (STFishC *)CONCAT22((short)((uint)*(int *)((int)this + 0x7fc) >> 0x10),sVar7);
      if (*(int *)((int)this + 0x7fc) == 3) {
        if (((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
           ((sVar6 < 0 ||
            (((g_worldGrid.sizeY <= sVar6 || (sVar9 < 0)) || (g_worldGrid.sizeZ <= sVar9)))))) {
LAB_004639e6:
          local_c = (STFishC *)0x0;
        }
        else {
          local_c = (STFishC *)
                    g_worldGrid.cells
                    [(int)sVar9 * (int)g_worldGrid.planeStride + (int)sVar6 * (int)g_worldGrid.sizeX
                     + (int)sVar7].objects[1];
        }
      }
      else {
        if (((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar6 < 0)) ||
            ((g_worldGrid.sizeY <= sVar6 || (sVar9 < 0)))) || (g_worldGrid.sizeZ <= sVar9))
        goto LAB_004639e6;
        local_c = (STFishC *)
                  g_worldGrid.cells
                  [(int)sVar9 * (int)g_worldGrid.planeStride + (int)sVar6 * (int)g_worldGrid.sizeX +
                   (int)sVar7].objects[0];
      }
      if ((local_c == (STFishC *)0x0) || (local_c->field_0018 != *(int *)((int)this + 0x7f4))) {
        iVar15 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + 0x7f4),(int *)&local_c);
        if ((iVar15 != -4) && (iVar15 = (*local_c->vtable->vfunc_F8)(), iVar15 != 0)) {
          if (*(int *)&local_c->field_0x20 == 0x1ae) {
            iVar15 = (*local_c->vtable->vfunc_F4)(*(undefined4 *)((int)this + 0x24));
            goto joined_r0x00463a7a;
          }
          goto LAB_00463a83;
        }
      }
      else {
        iVar15 = (*local_c->vtable->vfunc_F8)();
        if ((iVar15 != 0) &&
           ((*(int *)&local_c->field_0x20 != 0x1ae ||
            (iVar15 = (*local_c->vtable->vfunc_F4)(*(undefined4 *)((int)this + 0x24)), iVar15 != 0))
           )) goto LAB_00463a91;
      }
      break;
    case -1:
      goto cf_common_exit_0046401F;
    }
    goto cf_common_exit_0046351A;
  }
  iVar15 = *(int *)((int)this + 0x82e);
  if (iVar15 == 0) {
    *(undefined4 *)((int)this + 0x82e) = 1;
    *(undefined4 *)((int)this + 0xb7) = 3;
    STBoatC::sub_00481520
              (this,(int)*(short *)((int)this + 0x800),(int)*(short *)((int)this + 0x802),
               (int)*(short *)((int)this + 0x804));
    STBoatC::sub_00460260(this,0);
    goto cf_common_exit_00464889;
  }
  if (iVar15 != 1) {
    if (iVar15 != 2) {
      if (iVar15 != 3) {
        return -1;
      }
      iVar15 = STJellyGunC::sub_00415ED0(this,local_74,(int *)&local_10);
      if (iVar15 == -1) {
        return -1;
      }
      if (iVar15 == 0) {
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
      else if (iVar15 == 1) {
        sVar9 = *(short *)((int)this + 0x800);
        sVar6 = *(short *)((int)this + 0x804);
        sVar7 = *(short *)((int)this + 0x802);
        if (((((-1 < sVar9) && (sVar9 < g_worldGrid.sizeX)) && (-1 < sVar7)) &&
            ((sVar7 < g_worldGrid.sizeY && (-1 < sVar6)))) && (sVar6 < g_worldGrid.sizeZ)) {
          iVar15 = (int)sVar6 * (int)g_worldGrid.planeStride + (int)sVar7 * (int)g_worldGrid.sizeX +
                   (int)sVar9;
          pSVar23 = g_worldGrid.cells[iVar15].objects[0];
          if (pSVar23 != (STWorldObject *)0x0) {
            sVar9 = sVar9 >> 0xf;
            uVar17 = (undefined2)((uint)iVar15 >> 0x10);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            iVar15 = (*pSVar23->vtable[4].slots_00_28[7])
                               (CONCAT22(uVar17,*(undefined2 *)((int)this + 0x41)),
                                CONCAT22(sVar9,*(undefined2 *)((int)this + 0x43)),
                                CONCAT22(uVar17,*(undefined2 *)((int)this + 0x45)),
                                CONCAT22(sVar9,*(undefined2 *)((int)this + 0x34)),
                                CONCAT22(uVar17,*(undefined2 *)((int)this + 0x36)),
                                CONCAT22(sVar9,*(undefined2 *)((int)this + 0x38)));
            if (-1 < iVar15) {
              iVar15 = thunk_FUN_004d8870(*(char *)&pSVar23[1].vtable);
              if (200 < iVar15) {
                iVar15 = 200;
              }
              thunk_FUN_004d8800(*(char *)&pSVar23[1].vtable,iVar15);
              thunk_FUN_004d87b0(*(char *)((int)this + 0x24),iVar15);
              iVar15 = thunk_FUN_004d89b0(*(char *)&pSVar23[1].vtable);
              if (100 < iVar15) {
                iVar15 = 100;
              }
              thunk_FUN_004d8940(*(char *)&pSVar23[1].vtable,iVar15);
              thunk_FUN_004d88f0(*(char *)((int)this + 0x24),iVar15);
              iVar15 = thunk_FUN_004d8af0(*(char *)&pSVar23[1].vtable);
              if (0x5dc < iVar15) {
                iVar15 = 0x5dc;
              }
              thunk_FUN_004d8a80(*(char *)&pSVar23[1].vtable,iVar15);
              thunk_FUN_004d8a30(*(char *)((int)this + 0x24),iVar15);
              thunk_FUN_004d78e0(*(char *)&pSVar23[1].vtable);
              thunk_FUN_004d78e0(*(char *)((int)this + 0x24));
              if (((STWorldObjectVTable *)(uint)DAT_0080874d == pSVar23[1].vtable) ||
                 ((STWorldObjectVTable *)(uint)DAT_0080874d ==
                  *(STWorldObjectVTable **)((int)this + 0x24))) {
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
                        ((STT3DSprC *)((int)this + 0x1d5),8,DAT_00806774,"expdstrwd",0x1d);
              if (DAT_00811798 != (void *)0x0) {
                thunk_FUN_004162f0(pSVar23,(undefined2 *)((int)&local_14 + 2),
                                   (undefined2 *)((int)&local_28 + 2),local_8);
                (*pSVar23->vtable->GetObjectTypeId)(pSVar23);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                thunk_FUN_00620a00(DAT_00811798,(int)local_14._2_2_,(int)local_28._2_2_,
                                   (uint)pSVar23[1].vtable);
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                iVar15 = (**(code **)(*(int *)this + 0xd8))();
                return (-(uint)(iVar15 != 0) & 0xfffffffd) + 2;
              }
            }
            goto LAB_00463844;
          }
        }
        local_58 = &local_4c;
        local_4c = 10000;
        local_44 = 0xff;
        local_38 = 1;
        local_5c = 0x110;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)**(undefined4 **)this)(local_6c);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar15 = (**(code **)(*(int *)this + 0xd8))();
        return (-(uint)(iVar15 != 0) & 0xfffffffd) + 2;
      }
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_00463844:
      iVar15 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar15 != 0) & 0xfffffffd) + 2;
    }
    iVar15 = STBoatC::sub_00460260(this,2);
    switch(iVar15 + 1) {
    case 0:
      goto cf_common_exit_0046401F;
    case 1:
      local_58 = &local_4c;
      local_4c = 10000;
      local_44 = 0xff;
      local_38 = 1;
      local_5c = 0x110;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)**(undefined4 **)this)(local_6c);
      return 2;
    case 2:
      goto switchD_00462e6c_caseD_2;
    default:
      return 2;
    case 4:
      sVar9 = *(short *)((int)this + 0x800);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar10 = CONCAT22((short)((uint)(iVar15 + 1) >> 0x10),sVar9);
      sVar6 = *(short *)((int)this + 0x804);
      sVar7 = *(short *)((int)this + 0x802);
      psVar1 = (short *)((int)this + 0x804);
      if ((((-1 < sVar9) && (sVar9 < g_worldGrid.sizeX)) && (-1 < sVar7)) &&
         (((sVar7 < g_worldGrid.sizeY && (-1 < sVar6)) && (sVar6 < g_worldGrid.sizeZ)))) {
        pSVar14 = (STFishC *)
                  g_worldGrid.cells
                  [(int)sVar6 * (int)g_worldGrid.planeStride + (int)sVar7 * (int)g_worldGrid.sizeX +
                   (int)sVar9].objects[0];
        uVar10 = (int)sVar9;
        local_14 = pSVar14;
        if (((pSVar14 != (STFishC *)0x0) &&
            (uVar19 = pSVar14->field_0024, uVar10 = uVar19, uVar19 < 8)) &&
           ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
            (uVar10 = uVar19 * 9, (byte)(&DAT_008087e9)[uVar19 * 0x51] < 8)))) {
          bVar3 = *(byte *)&pSVar14->field_0024;
          bVar4 = *(byte *)((int)this + 0x24);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_10 = (STFishC *)CONCAT31(local_10._1_3_,bVar3);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = (STFishC *)CONCAT31(local_c._1_3_,bVar4);
          if (DAT_00808a8f == '\0') {
            if (bVar3 == bVar4) {
LAB_00462fde:
              iVar15 = 0;
            }
            else {
              bVar5 = g_playerRelationMatrix[bVar3][bVar4];
              if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                iVar15 = -2;
              }
              else if ((bVar5 == 1) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                iVar15 = -1;
              }
              else if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 1)) {
                iVar15 = 1;
              }
              else {
                if ((bVar5 != 1) || (g_playerRelationMatrix[bVar4][bVar3] != 1)) goto LAB_00462fde;
                iVar15 = 2;
              }
            }
            bVar24 = iVar15 < 0;
          }
          else {
            bVar24 = (&DAT_008087ea)[(uint)bVar4 * 0x51] != (&DAT_008087ea)[(uint)bVar3 * 0x51];
          }
          uVar10 = 0;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          if ((bVar24) &&
             ((uVar10 = (*pSVar14->vtable->slot_2C)(pSVar14), uVar17 = extraout_var_03,
              uVar16 = extraout_var_00, uVar10 == 0x3b ||
              (uVar10 = (*pSVar14->vtable->slot_2C)(pSVar14), uVar17 = extraout_var_04,
              uVar16 = extraout_var_01, uVar10 == 0x60)))) {
            sVar9 = *(short *)((int)this + 0xd7);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_24 = CONCAT22((short)(uVar10 >> 0x10),sVar9);
            sVar6 = *(short *)((int)this + 0xdb);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_1c = CONCAT22(uVar16,sVar6);
            sVar7 = *(short *)((int)this + 0xdf);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_20 = CONCAT22(uVar17,sVar7);
            if ((sVar9 < 0) ||
               ((((g_worldGrid.sizeX <= sVar9 || (sVar6 < 0)) || (g_worldGrid.sizeY <= sVar6)) ||
                ((sVar7 < 0 || (g_worldGrid.sizeZ <= sVar7)))))) {
              pSVar18 = (STFishC *)0x0;
            }
            else {
              pSVar18 = (STFishC *)
                        g_worldGrid.cells
                        [(int)g_worldGrid.planeStride * (int)sVar7 +
                         (int)g_worldGrid.sizeX * (int)sVar6 + (int)sVar9].objects[0];
              pSVar14 = local_14;
            }
            if (pSVar14 != pSVar18) {
              psVar2 = (short *)((int)this + 0x802);
              local_c = (STFishC *)((int)this + 0x800);
              STFishC::sub_004162B0(local_14,(undefined2 *)local_c,psVar2,psVar1);
              STBoatC::sub_00481520(this,(int)*(short *)&local_c->vtable,(int)*psVar2,(int)*psVar1);
              thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2,*psVar1);
              thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
              thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
              thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
              STBoatC::sub_00460260(this,0);
              *(undefined2 *)((int)this + 0xf8) = 0;
              thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2,*psVar1);
              thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
              thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
              thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
              return 2;
            }
            *(undefined4 *)((int)this + 0x82e) = 3;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            sub_00415B30(this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                         *(short *)((int)this + 0x45),(short)(local_24 * 0xc9 + 100),
                         sVar6 * 0xc9 + 100,sVar7 * 200 + 100,*(byte *)((int)this + 0x61));
            *(undefined4 *)((int)this + 0x7a) = 0;
            return 2;
          }
        }
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      pSVar12 = thunk_FUN_0042b760(*(char *)((int)this + 0x24),
                                   CONCAT22((short)(uVar10 >> 0x10),
                                            *(undefined2 *)((int)this + 0x30)));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      STGroupBoatC::GetDepotForAttack
                (pSVar12,CONCAT22((short)((uint)&local_16 >> 0x10),*(undefined2 *)((int)this + 0x32)
                                 ),(undefined1 *)((int)&param_1 + 3),&local_16,(short *)&local_24,
                 (short *)&local_1c,(short *)&local_20);
      if (local_16 != -1) {
        *psVar1 = (short)local_20;
        *(short *)((int)this + 0x802) = (short)local_1c;
        *(undefined4 *)((int)this + 0x82e) = 1;
        *(undefined4 *)((int)this + 0xb7) = 3;
        *(short *)((int)this + 0x800) = (short)local_24;
        STBoatC::sub_00481520(this,(int)(short)local_24,(int)(short)local_1c,(int)(short)local_20);
        STBoatC::sub_00460260(this,0);
        *(undefined2 *)((int)this + 0xf8) = 0;
        return 2;
      }
      goto cf_common_exit_0046351A;
    }
  }
  iVar15 = STBoatC::sub_00460260(this,2);
  switch(iVar15) {
  case 0:
    sVar9 = *(short *)((int)this + 0x804);
    sVar6 = *(short *)((int)this + 0x802);
    local_c = (STFishC *)((int)this + 0x800);
    psVar1 = (short *)((int)this + 0x804);
    psVar2 = (short *)((int)this + 0x802);
    sVar7 = *(short *)&local_c->vtable;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_10 = (STFishC *)CONCAT22((short)((uint)local_c >> 0x10),sVar7);
    pSVar14 = local_10;
    if ((((((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) && (-1 < sVar6)) &&
         ((sVar6 < g_worldGrid.sizeY && (-1 < sVar9)))) && (sVar9 < g_worldGrid.sizeZ)) &&
       (((local_14 = (STFishC *)
                     g_worldGrid.cells
                     [(int)sVar9 * (int)g_worldGrid.planeStride +
                      (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0],
         pSVar14 = local_14, local_14 != (STFishC *)0x0 && ((uint)local_14->field_0024 < 8)) &&
        ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
         ((byte)(&DAT_008087e9)[local_14->field_0024 * 0x51] < 8)))))) {
      bVar3 = *(byte *)&local_14->field_0024;
      bVar4 = *(byte *)((int)this + 0x24);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_10._1_3_ = (undefined3)((uint)local_10 >> 8);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_10 = (STFishC *)CONCAT31(local_10._1_3_,bVar3);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_28 = CONCAT31(local_28._1_3_,bVar4);
      if (DAT_00808a8f == '\0') {
        if (bVar3 == bVar4) {
LAB_00462c49:
          iVar15 = 0;
        }
        else {
          bVar5 = g_playerRelationMatrix[bVar3][bVar4];
          if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
            iVar15 = -2;
          }
          else if ((bVar5 == 1) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
            iVar15 = -1;
          }
          else if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 1)) {
            iVar15 = 1;
          }
          else {
            if ((bVar5 != 1) || (g_playerRelationMatrix[bVar4][bVar3] != 1)) goto LAB_00462c49;
            iVar15 = 2;
          }
        }
        bVar24 = iVar15 < 0;
      }
      else {
        bVar24 = (&DAT_008087ea)[(uint)bVar4 * 0x51] != (&DAT_008087ea)[(uint)bVar3 * 0x51];
      }
      pSVar14 = (STFishC *)0x0;
      if ((bVar24) &&
         ((dVar13 = (*local_14->vtable->slot_2C)(local_14), dVar13 == 0x3b ||
          (pSVar14 = (STFishC *)(*local_14->vtable->slot_2C)(local_14), pSVar14 == (STFishC *)0x60))
         )) {
        *(undefined4 *)((int)this + 0x82e) = 2;
        *(undefined4 *)((int)this + 0xb7) = 0;
        STFishC::sub_004162B0(local_14,(undefined2 *)local_c,psVar2,psVar1);
        STBoatC::sub_00481520(this,(int)*(short *)&local_c->vtable,(int)*psVar2,(int)*psVar1);
        thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2,*psVar1);
        thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
        thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
        thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
        STBoatC::sub_00460260(this,0);
        *(undefined2 *)((int)this + 0xf8) = 0;
        thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2,*psVar1);
        thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
        thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
        thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
        return 2;
      }
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    pSVar12 = thunk_FUN_0042b760(*(char *)((int)this + 0x24),
                                 CONCAT22((short)((uint)pSVar14 >> 0x10),
                                          *(undefined2 *)((int)this + 0x30)));
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    STGroupBoatC::GetDepotForAttack
              (pSVar12,CONCAT22((short)((uint)&local_16 >> 0x10),*(undefined2 *)((int)this + 0x32)),
               (undefined1 *)((int)&param_1 + 3),&local_16,(short *)&local_24,(short *)&local_1c,
               (short *)&local_20);
    if (local_16 != -1) {
      *(short *)&local_c->vtable = (short)local_24;
      *psVar2 = (short)local_1c;
      *psVar1 = (short)local_20;
cf_common_exit_00462E32:
      STBoatC::sub_00481520(this,(int)(short)local_24,(int)(short)local_1c,(int)(short)local_20);
      STBoatC::sub_00460260(this,0);
      return 2;
    }
    break;
  case 1:
    sVar9 = *(short *)((int)this + 0x800);
    sVar6 = *(short *)((int)this + 0x804);
    sVar7 = *(short *)((int)this + 0x802);
    if ((((-1 < sVar9) && (sVar9 < g_worldGrid.sizeX)) && (-1 < sVar7)) &&
       ((((sVar7 < g_worldGrid.sizeY && (-1 < sVar6)) &&
         ((sVar6 < g_worldGrid.sizeZ &&
          ((pSVar23 = g_worldGrid.cells
                      [(int)sVar6 * (int)g_worldGrid.planeStride +
                       (int)sVar7 * (int)g_worldGrid.sizeX + (int)sVar9].objects[0],
           pSVar23 != (STWorldObject *)0x0 && (pSVar23[1].vtable < (STWorldObjectVTable *)0x8))))))
        && ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
            ((byte)(&DAT_008087e9)[(int)pSVar23[1].vtable * 0x51] < 8)))))) {
      bVar3 = *(byte *)&pSVar23[1].vtable;
      bVar4 = *(byte *)((int)this + 0x24);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_10 = (STFishC *)CONCAT31(local_10._1_3_,bVar3);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_c = (STFishC *)CONCAT31(local_c._1_3_,bVar4);
      if (DAT_00808a8f == '\0') {
        if (bVar3 == bVar4) {
LAB_00462a36:
          iVar15 = 0;
        }
        else {
          bVar5 = g_playerRelationMatrix[bVar3][bVar4];
          if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
            iVar15 = -2;
          }
          else if ((bVar5 == 1) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
            iVar15 = -1;
          }
          else if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 1)) {
            iVar15 = 1;
          }
          else {
            if ((bVar5 != 1) || (g_playerRelationMatrix[bVar4][bVar3] != 1)) goto LAB_00462a36;
            iVar15 = 2;
          }
        }
        bVar24 = iVar15 < 0;
      }
      else {
        bVar24 = (&DAT_008087ea)[(uint)bVar4 * 0x51] != (&DAT_008087ea)[(uint)bVar3 * 0x51];
      }
      if (bVar24) {
        iVar15 = (*pSVar23->vtable->GetObjectTypeId)(pSVar23);
        if (iVar15 == 0x3b) {
          return 2;
        }
        iVar15 = (*pSVar23->vtable->GetObjectTypeId)(pSVar23);
        if (iVar15 == 0x60) {
          return 2;
        }
      }
    }
    STBoatC::sub_004602B0(this);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    pSVar12 = thunk_FUN_0042b760(*(char *)((int)this + 0x24),
                                 CONCAT22(extraout_var,*(undefined2 *)((int)this + 0x30)));
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    STGroupBoatC::GetDepotForAttack
              (pSVar12,CONCAT22((short)((uint)&local_16 >> 0x10),*(undefined2 *)((int)this + 0x32)),
               (undefined1 *)((int)&param_1 + 3),&local_16,(short *)&local_24,(short *)&local_1c,
               (short *)&local_20);
    if (local_16 != -1) {
      *(short *)((int)this + 0x800) = (short)local_24;
      *(short *)((int)this + 0x802) = (short)local_1c;
      *(short *)((int)this + 0x804) = (short)local_20;
      goto cf_common_exit_00462E32;
    }
    break;
  default:
    goto cf_common_exit_00464526;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case 3:
    local_20._0_2_ = *(short *)((int)this + 0x804);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_1c._0_2_ = *(short *)((int)this + 0x802);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_24._0_2_ = *(short *)((int)this + 0x800);
    goto cf_common_exit_00462E32;
  case -1:
    goto cf_common_exit_0046401F;
  }
  goto LAB_00463510;
switchD_00462e6c_caseD_2:
  sVar9 = *(short *)((int)this + 0x800);
  sVar6 = *(short *)((int)this + 0x804);
  sVar7 = *(short *)((int)this + 0x802);
  if (((((-1 < sVar9) && (sVar9 < g_worldGrid.sizeX)) &&
       ((-1 < sVar7 &&
        (((sVar7 < g_worldGrid.sizeY && (-1 < sVar6)) && (sVar6 < g_worldGrid.sizeZ)))))) &&
      ((pSVar23 = g_worldGrid.cells
                  [(int)sVar6 * (int)g_worldGrid.planeStride + (int)sVar7 * (int)g_worldGrid.sizeX +
                   (int)sVar9].objects[0], pSVar23 != (STWorldObject *)0x0 &&
       (pSVar23[1].vtable < (STWorldObjectVTable *)0x8)))) &&
     ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
      ((byte)(&DAT_008087e9)[(int)pSVar23[1].vtable * 0x51] < 8)))) {
    bVar3 = *(byte *)&pSVar23[1].vtable;
    bVar4 = *(byte *)((int)this + 0x24);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_10 = (STFishC *)CONCAT31(local_10._1_3_,bVar3);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c = (STFishC *)CONCAT31(local_c._1_3_,bVar4);
    if (DAT_00808a8f == '\0') {
      if (bVar3 == bVar4) {
LAB_00463442:
        iVar15 = 0;
      }
      else {
        bVar5 = g_playerRelationMatrix[bVar3][bVar4];
        if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
          iVar15 = -2;
        }
        else if ((bVar5 == 1) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
          iVar15 = -1;
        }
        else if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 1)) {
          iVar15 = 1;
        }
        else {
          if ((bVar5 != 1) || (g_playerRelationMatrix[bVar4][bVar3] != 1)) goto LAB_00463442;
          iVar15 = 2;
        }
      }
      bVar24 = iVar15 < 0;
    }
    else {
      bVar24 = (&DAT_008087ea)[(uint)bVar4 * 0x51] != (&DAT_008087ea)[(uint)bVar3 * 0x51];
    }
    if (bVar24) {
      iVar15 = (*pSVar23->vtable->GetObjectTypeId)(pSVar23);
      if (iVar15 == 0x3b) {
        return 2;
      }
      iVar15 = (*pSVar23->vtable->GetObjectTypeId)(pSVar23);
      if (iVar15 == 0x60) {
        return 2;
      }
    }
  }
  STBoatC::sub_004602B0(this);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  pSVar12 = thunk_FUN_0042b760(*(char *)((int)this + 0x24),
                               CONCAT22(extraout_var_02,*(undefined2 *)((int)this + 0x30)));
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  STGroupBoatC::GetDepotForAttack
            (pSVar12,CONCAT22((short)((uint)&local_16 >> 0x10),*(undefined2 *)((int)this + 0x32)),
             (undefined1 *)((int)&param_1 + 3),&local_16,(short *)&local_24,(short *)&local_1c,
             (short *)&local_20);
  if (local_16 != -1) {
    *(short *)((int)this + 0x804) = (short)local_20;
    *(short *)((int)this + 0x802) = (short)local_1c;
    *(undefined4 *)((int)this + 0x82e) = 1;
    *(undefined4 *)((int)this + 0xb7) = 3;
    *(short *)((int)this + 0x800) = (short)local_24;
    STBoatC::sub_00481520(this,(int)(short)local_24,(int)(short)local_1c,(int)(short)local_20);
    STBoatC::sub_00460260(this,0);
    return 2;
  }
LAB_00463510:
  *(undefined4 *)((int)this + 0xb7) = 0;
cf_common_exit_0046351A:
  iVar15 = 0;
cf_common_exit_0046351C:
  return iVar15;
}

