#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0046.cpp

// 004601F0 FUN_004601f0
#line 4 "decomp/ST.exe/functions/004601F0/decomp.c"
int __thiscall st::fn_004601F0(void *this,int param_1)

{
  int iVar1;

  if (param_1 == 0) {
    STField<undefined4>(this,0xf4) = 0;
  }
  iVar1 = st::fn_00403B34(st::pointer_boundary_cast<STBoatC *>(this),param_1);
  if ((iVar1 == 2) && (STField<int>(this,0xf4) == 1)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0x20))();
    STField<undefined4>(this,0xf4) = 0;
    iVar1 = 0;
  }
  return iVar1;
}

// 004602E0 FUN_004602e0
#line 4 "decomp/ST.exe/functions/004602E0/decomp.c"
void __thiscall st::fn_004602E0(void *this,int param_1)

{
  uint uVar1;

  if ((param_1 == 0) || (param_1 == 1)) {
    memset((void *)((int)this + 0x2cc), 0, 0x5c); /* compiler bulk-zero initialization */
    STField<undefined4>(this,0x2c4) = 0;
    uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar1;
    STField<short>(this,0xf8) = (short)((ulonglong)(uVar1 >> 0x10) % 0x1f) + 0x1e;
  }
  st::fn_00403B34(st::pointer_boundary_cast<STBoatC *>(this),param_1);
  return;
}

// 004603B0 FUN_004603b0
#line 4 "decomp/ST.exe/functions/004603B0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004603B0 parameter used as this of STTorpC::ClearDangerous @ 004604BD | 004603B0
   parameter used as this of STTorpC::ClearDangerous @ 00460546 | 004603B0 parameter used as this of
   STTorpC::SetDangerous @ 004604AB */

int __thiscall st::fn_004603B0(void *this,STTorpC *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  int iVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int iVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  uint index;
  bool bVar10;
  undefined4 uVar11;
  uint local_8;

  if ((param_1 == nullptr) || (param_1 == (STTorpC *)0x1)) {
    memset((void *)((int)this + 0x2cc), 0, 0x5c); /* compiler bulk-zero initialization */
    iVar7 = 0;
    STField<undefined4>(this,0x2c4) = 0;
    STField<undefined4>(this,0x82e) = 0xffffffff;
    STField<undefined4>(this,0x836) = 3;
  }
  if ((STField<int>(this,0x82e) == -1) &&
     (iVar7 = STField<int>(this,0x836) + -1, STField<int>(this,0x836) = iVar7, iVar7 == 0)) {
    STField<undefined4>(this,0x82e) = 0;
  }
  if (STField<int>(this,0x82e) == 0) {
    uVar2 = STField<uint>(this,0x836) & 0x80000001;
    bVar10 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar10 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if ((((bVar10) && (DAT_007fa134 != 0)) && (uVar2 = g_array_007FA130->count, uVar2 != 0)) &&
       (index = 0, iVar7 = DAT_007fa134, uVar2 != 0)) {
      do {
        st::fn_006ACC70(g_array_007FA130,index,&param_1);
        if (param_1 != nullptr) {
          iVar7 = iVar7 + -1;
          iVar3 = st::fn_0040478C(param_1,STField<int>(this,0x18),&local_8);
          if (iVar3 != 2) {
            if (iVar3 == 0) {
              iVar4 = st::fn_00403A99(st::pointer_boundary_cast<AnonReceiver_004603B0 *>(this),(RecoveredRecord_STBoatC_004838E0 *)param_1);
              if (iVar4 == 1) {
                st::fn_0040368E(param_1,STField<uint>(this,0x18),&local_8);
LAB_004604c9:
                iVar4 = st::fn_00401451(this,(RecoveredRecord_STBoatC_00482DB0 *)param_1);
                if (iVar4 == 1) {
                  st::fn_0040282E(param_1,STField<int>(this,0x18),local_8);
                  STField<STTorpC *>(this,0x46b) = param_1;
                  STField<undefined2>(this,0x46f) = param_1->field_026E;
                  uVar5 = param_1->field_0018;
                  STField<undefined4>(this,0x471) = uVar5;
                  sVar1 = STField<short>(this,0x4b);
                  uVar5 = STReplaceLowWord((uint32_t)(uVar5), (uint16_t)(sVar1));
                  if (sVar1 == 0) {
                    iVar4 = *(int *)this;
                    STField<undefined2>(this,0x469) = 1;
                    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                    uVar6 = extraout_var;
                    uVar11 = 1;
/* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
LAB_00460581:
                    iVar7 = (**(code **)(iVar4 + 0x18))
                                      (CONCAT22(uVar6,STField<undefined2>(this,0x47)),
                                       STReplaceLowWord((uint32_t)(uVar5), (uint16_t)(STField<undefined2>(this,0x49))),uVar11);
                    if (iVar7 != 1) break;
                    iVar8 = (int)STField<short>(this,0x49);
                    STField<undefined4>(this,0x82e) = 1;
                    iVar7 = (int)STField<short>(this,0x469) + (int)STField<short>(this,0x4b);
                    iVar4 = (int)STField<short>(this,0x47);
                  }
                  else if (sVar1 == 4) {
                    STField<undefined2>(this,0x469) = 0xffff;
                    /* ST_PSEUDO[return_width_artifact,raw_indirect_call]: candidate call-output artifact: verify return width, clobbers, or x87 state; expected typed vtable/callback call with explicit __thiscall receiver */
                    iVar7 = (**(code **)(*(int *)this + 0x18))
                                      (CONCAT22(extraout_var_02,STField<undefined2>(this,0x47)),
                                       CONCAT22(extraout_var,STField<undefined2>(this,0x49)),3);
                    if (iVar7 != 1) break;
                    iVar8 = (int)STField<short>(this,0x49);
                    STField<undefined4>(this,0x82e) = 1;
                    iVar7 = (int)STField<short>(this,0x469) + (int)STField<short>(this,0x4b);
                    iVar4 = (int)STField<short>(this,0x47);
                  }
                  else {
                    iVar4 = STField<int>(this,0x1c) * 0x41c64e6d;
                    uVar2 = iVar4 + 0x3039;
                    STField<uint>(this,0x1c) = uVar2;
                    STField<ushort>(this,0x469) = (ushort)(uVar2 >> 0x10) & 1;
                    iVar7 = (-(uint)((uVar2 & 0x10000) != 0) & 2) - 1;
                    sVar1 = (short)iVar7;
                    STField<short>(this,0x469) = sVar1;
                    uVar6 = (undefined2)((uint)iVar7 >> 0x10);
                    /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
                    iVar7 = (**(code **)(*(int *)this + 0x18))
                                      (CONCAT22(uVar6,STField<undefined2>(this,0x47)),
                                       STReplaceLowWord((uint32_t)(iVar4), (uint16_t)(STField<undefined2>(this,0x49))),
                                       CONCAT22(uVar6,sVar1 + STField<short>(this,0x4b)));
                    if (iVar7 != 1) {
                      sVar1 = STField<short>(this,0x469);
                      iVar4 = *(int *)this;
                      STField<short>(this,0x469) = -sVar1;
                      uVar5 = STReplaceLowWord((uint32_t)(iVar7), (uint16_t)(-sVar1 + STField<short>(this,0x4b)));
                      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                      uVar6 = extraout_var_00;
                      uVar11 = uVar5;
                      goto LAB_00460581;
                    }
                    iVar7 = (int)STField<short>(this,0x469) + (int)STField<short>(this,0x4b);
                    STField<undefined4>(this,0x82e) = 1;
                    iVar8 = (int)STField<short>(this,0x49);
                    iVar4 = (int)STField<short>(this,0x47);
                  }
                  st::fn_00404F6B(st::pointer_boundary_cast<STBoatC *>(this),iVar4,iVar8,iVar7);
                  iVar7 = st::fn_00403B34(st::pointer_boundary_cast<STBoatC *>(this),0);
                  if (iVar7 == -1) {
                    return -1;
                  }
                  break;
                }
              }
              else {
                st::fn_0040282E(param_1,STField<int>(this,0x18),local_8);
              }
            }
            else if (iVar3 == 1) goto LAB_004604c9;
          }
          if (iVar7 == 0) break;
        }
        index = index + 1;
      } while (index < uVar2);
    }
    STField<int>(this,0x836) = STField<int>(this,0x836) + 1;
  }
  if (STField<int>(this,0x82e) == 1) {
    STField<int>(this,0x836) = STField<int>(this,0x836) + 1;
    iVar7 = st::fn_00403B34(st::pointer_boundary_cast<STBoatC *>(this),2);
    if (iVar7 == -1) {
      return -1;
    }
    if (iVar7 == 0) {
      STField<undefined4>(this,0x82e) = 2;
    }
    else if (iVar7 == 3) {
      STField<undefined4>(this,0x82e) = 0;
    }
  }
  if ((STField<int>(this,0x82e) == 2) && (iVar7 = st::fn_00405E57(st::pointer_boundary_cast<STBoatC *>(this)), iVar7 == 1)) {
    sVar1 = STField<short>(this,0x469);
    STField<short>(this,0x469) = -sVar1;
    /* ST_PSEUDO[return_width_artifact,raw_indirect_call]: candidate call-output artifact: verify return width, clobbers, or x87 state; expected typed vtable/callback call with explicit __thiscall receiver */
    iVar7 = (**(code **)(*(int *)this + 0x18))
                      (CONCAT22(extraout_var_01,STField<undefined2>(this,0x47)),
                       STField<undefined2>(this,0x49),-sVar1 + STField<short>(this,0x4b));
    if (iVar7 == 1) {
      STField<undefined4>(this,0x82e) = 3;
      st::fn_00404F6B
                (st::pointer_boundary_cast<STBoatC *>(this),(int)STField<short>(this,0x47),(int)STField<short>(this,0x49),
                 (int)STField<short>(this,0x469) + (int)STField<short>(this,0x4b));
      iVar7 = st::fn_00403B34(st::pointer_boundary_cast<STBoatC *>(this),0);
      if (iVar7 == -1) {
        return -1;
      }
    }
    else {
      STField<short>(this,0x469) = -STField<short>(this,0x469);
    }
  }
  if (STField<int>(this,0x82e) == 3) {
    STField<int>(this,0x836) = STField<int>(this,0x836) + 1;
    iVar7 = st::fn_00403B34(st::pointer_boundary_cast<STBoatC *>(this),2);
    if (iVar7 == -1) {
      return -1;
    }
    if ((iVar7 == 0) || (iVar7 == 3)) {
      STField<undefined4>(this,0x82e) = 0;
    }
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar7 = (**(code **)(*(int *)this + 0xd8))();
  return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
}

// 004620F0 FUN_004620f0
#line 4 "decomp/ST.exe/functions/004620F0/decomp.c"
int __fastcall st::fn_004620F0(STBoatC *param_1)

{
  int iVar1;
  int iVar2;

  if (param_1->field_047B != nullptr) {
    st::fn_006AE110(param_1->field_047B);
    param_1->field_047B = nullptr;
  }
  iVar2 = param_1->field_082E;
  if (((iVar2 != -1) && (iVar2 != 0)) && (iVar2 != 2)) {
    iVar1 = st::fn_00403DF0(param_1);
    return iVar1;
  }
  iVar2 = param_1->vfunc_D8();
  if (iVar2 != 0) {
    return -1;
  }
  return 0;
}

// 00462180 FUN_00462180
#line 4 "decomp/ST.exe/functions/00462180/decomp.c"
int __thiscall st::fn_00462180(void *this,int param_1)

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
  short local_8 [2];

  if ((param_1 == 0) || (param_1 == 1)) {
    memset((void *)((int)this + 0x2cc), 0, 0x5c); /* compiler bulk-zero initialization */
    iVar16 = 0;
    STField<undefined4>(this,0x2c4) = 0;
    uVar11 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar11;
    STField<short>(this,0xf8) = (short)((ulonglong)(uVar11 >> 0x10) % 0x1f) + 0x1e;
    this_00 = st::fn_004028BA
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
      st::fn_004018C5
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
        st::fn_00404F6B
                  (st::pointer_boundary_cast<STBoatC *>(this),(int)STField<short>(this,0x800),(int)STField<short>(this,0x802),
                   (int)STField<short>(this,0x804));
        st::fn_004031DE(st::pointer_boundary_cast<STBoatC *>(this),0);
        goto cf_common_exit_00464889;
      }
      if (iVar16 == 1) {
        local_EAX_1824 = st::fn_004031DE(st::pointer_boundary_cast<STBoatC *>(this),2);
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
              st::fn_004018C5(local_14,(short *)local_c,psVar2,psVar1);
              st::fn_00404F6B(st::pointer_boundary_cast<STBoatC *>(this),(int)*(short *)&local_c->vtable,(int)*psVar2,(int)*psVar1);
              st::fn_0040232E(*(short *)&local_c->vtable,*psVar2,*psVar1);
              st::fn_0040232E(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
              st::fn_0040232E(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
              st::fn_0040232E(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
              st::fn_004031DE(st::pointer_boundary_cast<STBoatC *>(this),0);
              STField<undefined2>(this,0xf8) = 0;
              st::fn_00404CCD(*(short *)&local_c->vtable,*psVar2,*psVar1);
              st::fn_00404CCD(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
              st::fn_00404CCD(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
              st::fn_00404CCD(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
              return 2;
            }
          }
          pSVar13 = st::fn_00405CF9(STField<char>(this,0x24),STField<ushort>(this,0x30));
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          st::fn_004019BA
                    (pSVar13,CONCAT22((short)((uint)&local_16 >> 0x10),
                                      STField<undefined2>(this,0x32)),
                     (undefined1 *)((int)&param_1 + 3),&local_16,(short *)&local_24,
                     (short *)&local_1c,(short *)&local_20);
          if (local_16 != -1) {
            *(short *)&local_c->vtable = (short)local_24;
            *psVar2 = (short)local_1c;
            *psVar1 = (short)local_20;
cf_common_exit_00462E32:
            st::fn_00404F6B
                      (st::pointer_boundary_cast<STBoatC *>(this),(int)(short)local_24,(int)(short)local_1c,(int)(short)local_20);
            st::fn_004031DE(st::pointer_boundary_cast<STBoatC *>(this),0);
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
          st::fn_00403855(st::pointer_boundary_cast<STBoatC *>(this));
          pSVar13 = st::fn_00405CF9(STField<char>(this,0x24),STField<ushort>(this,0x30));
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          st::fn_004019BA
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
          iVar16 = st::fn_00402847(st::pointer_boundary_cast<STJellyGunC *>(this),st::pointer_boundary_cast<undefined4 *>(local_74),(int *)&local_10);
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
              iVar16 = st::fn_004016E0(*(char *)&pSVar15->field_0024);
              if (200 < iVar16) {
                iVar16 = 200;
              }
              st::fn_00403166(*(char *)&pSVar15->field_0024,iVar16);
              st::fn_00404336(STField<char>(this,0x24),iVar16);
              iVar16 = st::fn_00403954(*(char *)&pSVar15->field_0024);
              if (100 < iVar16) {
                iVar16 = 100;
              }
              st::fn_00403418(*(char *)&pSVar15->field_0024,iVar16);
              st::fn_00404412(STField<char>(this,0x24),iVar16);
              iVar16 = st::fn_00402284(*(char *)&pSVar15->field_0024);
              if (0x5dc < iVar16) {
                iVar16 = 0x5dc;
              }
              st::fn_00405367(*(char *)&pSVar15->field_0024,iVar16);
              st::fn_004055E7(STField<char>(this,0x24),iVar16);
              st::fn_004028F6(*(char *)&pSVar15->field_0024);
              st::fn_004028F6(STField<char>(this,0x24));
              if (((uint)DAT_0080874d == pSVar15->field_0024) ||
                 ((uint)DAT_0080874d == STField<uint>(this,0x24))) {
                st::fn_00404B8D(DAT_0080874d);
              }
              local_58 = &local_4c;
              local_4c = 10000;
              local_44 = 0xff;
              local_38 = 1;
              local_5c = 0x110;
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)**(undefined4 **)this)(local_6c);
              st::fn_00404183
                        ((STT3DSprC *)((int)this + 0x1d5),8,PTR_00806774,st::mutable_c_string("expdstrwd"),
                         CASE_1D);
              if (DAT_00811798 != nullptr) {
                st::fn_00405F0B
                          (pSVar15,(short *)((int)&local_14 + 2),(short *)((int)&local_28 + 2),
                           local_8);
                pSVar15->slot_2C();
                st::fn_00404E62(st::pointer_boundary_cast<void *>(DAT_00811798),(int)STPiece<2,2>(local_14),(int)STPiece<2,2>(local_28),
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
        iVar15 = st::fn_004031DE(st::pointer_boundary_cast<STBoatC *>(this),2);
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
          st::fn_00403855(st::pointer_boundary_cast<STBoatC *>(this));
          pSVar13 = st::fn_00405CF9(STField<char>(this,0x24),STField<ushort>(this,0x30));
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          st::fn_004019BA
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
            st::fn_00404F6B
                      (st::pointer_boundary_cast<STBoatC *>(this),(int)(short)local_24,(int)(short)local_1c,(int)(short)local_20);
            st::fn_004031DE(st::pointer_boundary_cast<STBoatC *>(this),0);
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
                st::fn_004018C5(local_14,(short *)local_c,psVar2,psVar1);
                st::fn_00404F6B
                          (st::pointer_boundary_cast<STBoatC *>(this),(int)*(short *)&local_c->vtable,(int)*psVar2,(int)*psVar1);
                st::fn_0040232E(*(short *)&local_c->vtable,*psVar2,*psVar1);
                st::fn_0040232E(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
                st::fn_0040232E(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
                st::fn_0040232E(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
                st::fn_004031DE(st::pointer_boundary_cast<STBoatC *>(this),0);
                STField<undefined2>(this,0xf8) = 0;
                st::fn_00404CCD(*(short *)&local_c->vtable,*psVar2,*psVar1);
                st::fn_00404CCD(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
                st::fn_00404CCD(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
                st::fn_00404CCD(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
                return 2;
              }
              STField<undefined4>(this,0x82e) = 3;
              st::fn_00402455(this,STField<short>(this,0x41),STField<short>(this,0x43),
                           STField<short>(this,0x45),(short)(local_24 * 0xc9 + 100),
                           sVar6 * 0xc9 + 100,sVar7 * 200 + 100,STField<byte>(this,0x61));
              STField<undefined4>(this,0x7a) = 0;
              return 2;
            }
          }
          pSVar13 = st::fn_00405CF9(STField<char>(this,0x24),STField<ushort>(this,0x30));
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          st::fn_004019BA
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
            st::fn_00404F6B
                      (st::pointer_boundary_cast<STBoatC *>(this),(int)(short)local_24,(int)(short)local_1c,(int)(short)local_20);
            st::fn_004031DE(st::pointer_boundary_cast<STBoatC *>(this),0);
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
          local_EAX_486 = st::fn_004014BA(st::pointer_boundary_cast<int *>(this),0);
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
                puVar12 = st::fn_0040342C(st::pointer_boundary_cast<undefined4 *>(local_74),(short)*(undefined4 *)(puVar22 + -1),
                                             puVar22[1],STField<short>(this,0x6c));
                local_9c.field_000E = STField<short>(this,0x41) + (short)*puVar12;
                local_9c.field_0010 = STField<short>(this,0x43) - (short)((uint)*puVar12 >> 0x10);
                local_9c.field_0012 = *(short *)(puVar12 + 1) + STField<short>(this,0x45);
                local_30 = (uint)*puVar22 << 0x10;
                puVar12 = st::fn_0040342C(st::pointer_boundary_cast<undefined4 *>(&local_c),0,0,STField<short>(this,0x6c));
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
                st::fn_00402D1A(&local_9c);
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
              st::fn_00403855(st::pointer_boundary_cast<STBoatC *>(this));
              st::fn_00404F6B
                        (st::pointer_boundary_cast<STBoatC *>(this),(int)STField<short>(this,0x800),(int)STField<short>(this,0x802),
                         (int)STField<short>(this,0x804));
              STField<undefined2>(this,0x806) = STField<undefined2>(this,0x800);
              STField<undefined2>(this,0x808) = STField<undefined2>(this,0x802);
              STField<undefined2>(this,0x80a) = STField<undefined2>(this,0x804);
LAB_004624c3:
              local_EAX_837 = st::fn_004031DE(st::pointer_boundary_cast<STBoatC *>(this),0);
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
              iVar16 = st::fn_00405E66(this,(short)local_EAX_486,(short *)&local_24,
                                          (short *)&local_1c,(short *)&local_20);
              if (iVar16 != 0) {
                STField<undefined4>(this,0x82e) = 3;
                st::fn_00404F6B
                          (st::pointer_boundary_cast<STBoatC *>(this),(int)(short)local_24,(int)(short)local_1c,(int)(short)local_20);
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
            uVar10 = st::fn_00402987(st::pointer_boundary_cast<AnonShape_004836C0_617DC527 *>(this));
            st::fn_004021E9(this,STField<short>(this,0x6c),(short)uVar10);
          }
        }
        iVar16 = STField<int>(this,0x82e);
        if (iVar16 == 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*(int *)this + 0xd8))();
          return 2;
        }
        if (iVar16 == 1) {
          iVar16 = st::fn_0040314D(st::pointer_boundary_cast<AnonShape_00417830_9254190A *>(this));
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
          local_EAX_1646 = st::fn_004031DE(st::pointer_boundary_cast<STBoatC *>(this),2);
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
        local_EAX_1646 = st::fn_004031DE(st::pointer_boundary_cast<STBoatC *>(this),2);
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
        st::fn_00404F6B
                  (st::pointer_boundary_cast<STBoatC *>(this),(int)STField<short>(this,0x800),(int)STField<short>(this,0x802),
                   (int)STField<short>(this,0x804));
        st::fn_004031DE(st::pointer_boundary_cast<STBoatC *>(this),0);
        STField<undefined2>(this,0xf8) = 0;
        goto cf_common_exit_00464889;
      }
      if (iVar16 != 1) {
        if (iVar16 == 2) {
          local_EAX_7817 = st::fn_004031DE(st::pointer_boundary_cast<STBoatC *>(this),2);
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
                    st::fn_004018C5(local_14,(short *)local_c,psVar2,psVar1);
                    st::fn_00404F6B
                              (st::pointer_boundary_cast<STBoatC *>(this),(int)*(short *)&local_c->vtable,(int)*psVar2,(int)*psVar1);
                    st::fn_0040232E(*(short *)&local_c->vtable,*psVar2,*psVar1);
                    st::fn_0040232E(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
                    st::fn_0040232E(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
                    st::fn_0040232E(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
                    st::fn_004031DE(st::pointer_boundary_cast<STBoatC *>(this),0);
                    STField<undefined2>(this,0xf8) = 0;
                    st::fn_00404CCD(*(short *)&local_c->vtable,*psVar2,*psVar1);
                    st::fn_00404CCD(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
                    st::fn_00404CCD(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
                    st::fn_00404CCD(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
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
          iVar16 = st::fn_006E62D0
                             (g_playSystem_00802A38,
                              STField<AnonShape_005EFAE0_B406B78B *>(this,0x7f4),(int *)&local_c);
          pSVar15 = st::pointer_boundary_cast<STFishC *>(this);
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
            st::fn_004018C5(local_c,(short *)&local_10,(short *)&local_28,(short *)&local_14);
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
          st::fn_004031E3(local_c,&local_10,st::pointer_boundary_cast<int *>(&local_28),(short *)&local_14);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          sVar9 = (**(code **)(*(int *)this + 0x10))
                            (STField<undefined2>(this,0x41),STField<undefined2>(this,0x43),
                             STField<undefined2>(this,0x45),local_10,local_28,local_14);
          local_EAX_9668 = st::fn_004030B2(st::pointer_boundary_cast<STBoatC *>(this),sVar9);
          st::fn_004022FC(st::pointer_boundary_cast<STBoatC *>(this),(short)local_EAX_9668);
          st::fn_00402455(this,STField<short>(this,0x41),STField<short>(this,0x43),
                       STField<short>(this,0x45),(short)local_10,(short)local_28,(short)local_14,
                       STField<byte>(this,0x61));
          STField<undefined4>(this,0x7a) = 0;
          iVar16 = st::fn_00402847(st::pointer_boundary_cast<STJellyGunC *>(this),&local_30,local_74);
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
      local_EAX_5975 = st::fn_004031DE(st::pointer_boundary_cast<STBoatC *>(this),2);
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
          iVar16 = st::fn_006E62D0
                             (g_playSystem_00802A38,
                              STField<AnonShape_005EFAE0_B406B78B *>(this,0x7f4),(int *)&local_14);
          if (((iVar16 != -4) && (iVar16 = (*local_14->vtable->vfunc_F8)(), iVar16 != 0)) &&
             ((*(int *)&local_14->field_0x20 != 0x1ae ||
              (iVar16 = (*local_14->vtable->vfunc_F4)(STField<undefined4>(this,0x24)),
              iVar16 != 0)))) {
            st::fn_004018C5(local_14,(short *)local_c,psVar2,psVar1);
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
              st::fn_004018C5(local_14,(short *)local_c,psVar2,psVar1);
              st::fn_00404F6B(st::pointer_boundary_cast<STBoatC *>(this),(int)*(short *)&local_c->vtable,(int)*psVar2,(int)*psVar1);
              st::fn_0040232E(*(short *)&local_c->vtable,*psVar2,*psVar1);
              st::fn_0040232E(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
              st::fn_0040232E(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
              st::fn_0040232E(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
              st::fn_004031DE(st::pointer_boundary_cast<STBoatC *>(this),0);
              STField<undefined2>(this,0xf8) = 0;
              st::fn_00404CCD(*(short *)&local_c->vtable,*psVar2,*psVar1);
              st::fn_00404CCD(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
              st::fn_00404CCD(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
              st::fn_00404CCD(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
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
            st::fn_00404F6B(st::pointer_boundary_cast<STBoatC *>(this),iVar16,(int)sVar6,(int)sVar9);
            st::fn_004031DE(st::pointer_boundary_cast<STBoatC *>(this),0);
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
          st::fn_00403855(st::pointer_boundary_cast<STBoatC *>(this));
          return 0;
        }
        st::fn_00403855(st::pointer_boundary_cast<STBoatC *>(this));
        iVar16 = st::fn_006E62D0
                           (g_playSystem_00802A38,
                            STField<AnonShape_005EFAE0_B406B78B *>(this,0x7f4),(int *)&local_c);
        if ((iVar16 != -4) && (iVar16 = (*local_c->vtable->vfunc_F8)(), iVar16 != 0)) {
          if (*(int *)&local_c->field_0x20 == 0x1ae) {
            iVar16 = (*local_c->vtable->vfunc_F4)(STField<undefined4>(this,0x24));
joined_r0x00463a7a:
            if (iVar16 == 0) break;
          }
LAB_00463a83:
          st::fn_004018C5
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
          iVar16 = st::fn_006E62D0
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

// 004658D0 FUN_004658d0
#line 4 "decomp/ST.exe/functions/004658D0/decomp.c"
int __thiscall st::fn_004658D0(void *this,int param_1)

{
  int local_EAX_48;
  STGroupBoatC *pSVar1;
  uint uVar2;
  int local_EAX_187;
  int iVar1;
  int local_EAX_382;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int iVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;

  if ((param_1 == 0) || (param_1 == 1)) {
    memset((void *)((int)this + 0x2cc), 0, 0x5c); /* compiler bulk-zero initialization */
    STField<undefined4>(this,0x48f) = STField<undefined4>(this,0x34b);
    STField<undefined4>(this,0x2c4) = 0;
    STField<undefined4>(this,0x497) = 0;
    st::fn_00404F6B
              (st::pointer_boundary_cast<STBoatC *>(this),STField<int>(this,199),STField<int>(this,0xcb),STField<int>(this,0xcf));
    st::fn_00402266(this,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar3 = (**(code **)(*(int *)this + 0xd8))();
    return (-(uint)(iVar3 != 0) & 0xfffffffd) + 2;
  }
  if (STField<int>(this,0x497) == 0) {
    local_EAX_48 = st::fn_00402266(this,2);
    switch(local_EAX_48) {
    case 0:
      pSVar1 = st::fn_00405CF9(STField<char>(this,0x24),STField<ushort>(this,0x30));
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar2 = st::fn_0040547F
                        (pSVar1,0,CONCAT22(extraout_var_00,STField<undefined2>(this,0x32)),
                         STField<uint>(this,0x48f));
      if (uVar2 == 0) {
        iVar1 = st::fn_00403A2B(st::pointer_boundary_cast<STBoatC *>(this),0);
        if (iVar1 == -1) {
          return -1;
        }
        if ((STField<int>(this,0x82e) == 0) && (STField<int>(this,0x48b) == 0xffff)) {
          st::fn_00404F6B
                    (st::pointer_boundary_cast<STBoatC *>(this),STField<int>(this,199),STField<int>(this,0xcb),
                     STField<int>(this,0xcf));
          st::fn_00402266(this,0);
          return 2;
        }
        STField<undefined4>(this,0x497) = 1;
        STField<undefined4>(this,0x493) = 1;
        return 2;
      }
LAB_0046597c:
      STField<undefined4>(this,0x497) = 1;
      STField<undefined4>(this,0x493) = 0;
      local_EAX_187 = st::fn_00403A2B(st::pointer_boundary_cast<STBoatC *>(this),0);
      return (-(uint)(local_EAX_187 != -1) & 3) - 1;
    default:
      goto switchD_0046590f_caseD_2;
    case 2:
      break;
    case 3:
      pSVar1 = st::fn_00405CF9(STField<char>(this,0x24),STField<ushort>(this,0x30));
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar2 = st::fn_0040547F
                        (pSVar1,1,CONCAT22(extraout_var,STField<undefined2>(this,0x32)),
                         STField<uint>(this,0x48f));
      if (uVar2 != 0) goto LAB_0046597c;
      st::fn_00404F6B
                (st::pointer_boundary_cast<STBoatC *>(this),STField<int>(this,199),STField<int>(this,0xcb),
                 STField<int>(this,0xcf));
      st::fn_00402266(this,0);
      break;
    case -1:
      return -1;
    }
  }
  else {
switchD_0046590f_caseD_2:
    if (STField<int>(this,0x497) == 1) {
      local_EAX_382 = st::fn_00403A2B(st::pointer_boundary_cast<STBoatC *>(this),2);
      if (local_EAX_382 == -1) {
        return -1;
      }
      if (((STField<int>(this,0x82e) == 0) && (STField<int>(this,0x48b) == 0xffff)) &&
         (STField<int>(this,0x493) == 1)) {
        STField<undefined4>(this,0x497) = 0;
        st::fn_00404F6B
                  (st::pointer_boundary_cast<STBoatC *>(this),STField<int>(this,199),STField<int>(this,0xcb),
                   STField<int>(this,0xcf));
        st::fn_00402266(this,0);
        return 2;
      }
    }
  }
  return 2;
}

// 0046D400 FUN_0046d400
#line 4 "decomp/ST.exe/functions/0046D400/decomp.c"
void __fastcall st::fn_0046D400(int *param_1,undefined4 param_2)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *in_stack_00000004;

  if (param_1[0x14a] == 4) {
    iVar1 = st::fn_00404CD7((STBoatC *)param_1);
    if (iVar1 == 0) {
      st::fn_00403DF0((STBoatC *)param_1);
      return;
    }
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  st::fn_004011D1((STBoatC *)param_1,in_stack_00000004);
  return;
}

