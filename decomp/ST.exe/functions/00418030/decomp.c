#include "../../pseudocode_runtime.h"


/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00417FF0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=37; incoming_edx_uses=0; calls=15;
   ecx_pointer_setup=15; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=5; adopt_untyped_existing_thiscall */

undefined4 __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004167A0::FUN_00418030
          (AnonReceiver_004167A0 *this,short param_1,short param_2,short param_3)

{
  bool bVar1;
  bool bVar2;
  STBoatC *this_00;
  short sVar3;
  int iVar4;
  uint uVar4;
  STWorldObject *pSVar5;
  ushort *puVar6;
  uint uVar7;
  short *psVar8;
  uint uVar5;
  STBoatC *pSVar9;
  short sVar10;
  uint uVar11;
  short sVar12;
  int iVar13;
  short *psVar14;
  int iVar15;
  InternalExceptionFrame local_9c;
  STBoatC *local_58;
  short *local_54;
  short *local_50;
  short *local_4c;
  short *local_48;
  short *local_44;
  short *local_40;
  int local_3c;
  short *local_38;
  int local_34;
  int local_30;
  short *local_2c;
  int local_28;
  short *local_24;
  short *local_20;
  short *local_1c;
  undefined1 local_15;
  short *local_14;
  short *local_10;
  short *local_c;
  bool local_5;
  short *psVar9;
  short *psVar14_mg3;

  local_58 = (STBoatC *)this;
  /* ST_CALLSITE[00418041]: CALL 0x00405952; direct=00405952 sub_004167A0 */
  sub_004167A0(this);
  if (((param_1 == *(short *)&this->field_0x47) && (param_2 == *(short *)&this->field_0x49)) &&
     (param_3 == *(short *)&this->field_0x4b)) {
    return 1;
  }
  local_9c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_9c;
  iVar4 = Library::MSVCRT::__setjmp3(local_9c.jumpBuffer,0);
  this_00 = local_58;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_9c.previous;
    return 0xffffffff;
  }
  local_2c = (short *)(int)param_1;
  uVar4 = (int)local_2c - (int)local_58->field_005B;
  uVar11 = (int)uVar4 >> 0x1f;
  if ((((int)((uVar4 ^ uVar11) - uVar11) < 2) &&
      (iVar15 = (int)param_2, uVar4 = iVar15 - local_58->field_005D, uVar11 = (int)uVar4 >> 0x1f,
      (int)((uVar4 ^ uVar11) - uVar11) < 2)) &&
     (iVar13 = (int)param_3, uVar4 = iVar13 - local_58->field_005F, uVar11 = (int)uVar4 >> 0x1f,
     (int)((uVar4 ^ uVar11) - uVar11) < 2)) {
    if (((param_1 < 0) || (g_worldGrid.sizeX <= param_1)) ||
       ((param_2 < 0 ||
        (((g_worldGrid.sizeY <= param_2 || (param_3 < 0)) || (g_worldGrid.sizeZ <= param_3)))))) {
      pSVar5 = nullptr;
    }
    else {
      pSVar5 = STGridAt3D(g_worldGrid, local_2c, iVar15, iVar13).
               objects[(byte)local_58->field_008E];
    }
    if (pSVar5 == nullptr) {
      *(undefined4 *)&local_58->field_0x9b = 2;
      puVar6 = Library::DKW::LIB::MemAllocClear(0x10);
      this_00->field_0097 = puVar6;
      puVar6[4] = param_1;
      this_00->field_0097[5] = param_2;
      this_00->field_0097[6] = param_3;
      uVar7 = FUN_006a5eb0((int)this_00->field_005B,(int)this_00->field_005D,
                           (int)this_00->field_005F,(int)local_2c,iVar15,iVar13);
      this_00->field_0097[7] = (ushort)uVar7;
      goto LAB_0041862b;
    }
  }
  local_44 = (short *)0x3;
  local_14 = Library::DKW::LIB::MemAllocClear(0x2ae);
  sVar3 = this_00->field_0047;
  local_54 = local_14 + 0xab;
  iVar15 = 2;
  if (sVar3 < 2) {
    iVar15 = (int)sVar3;
  }
  local_38 = (short *)-iVar15;
  if (sVar3 + 2 < (int)g_pathingGrid.sizeX) {
    local_28 = 2;
  }
  else {
    local_28 = ((int)g_pathingGrid.sizeX - (int)sVar3) + -1;
  }
  sVar3 = this_00->field_0049;
  local_34 = 2;
  if (sVar3 < 2) {
    local_34 = (int)sVar3;
  }
  local_34 = -local_34;
  if (sVar3 + 2 < (int)g_pathingGrid.sizeY) {
    local_3c = 2;
  }
  else {
    local_3c = ((int)g_pathingGrid.sizeY - (int)sVar3) + -1;
  }
  sVar3 = this_00->field_004B;
  iVar13 = 2;
  if (sVar3 < 2) {
    iVar13 = (int)sVar3;
  }
  local_4c = (short *)-iVar13;
  if (sVar3 + 2 < (int)g_pathingGrid.sizeZ) {
    local_24 = (short *)0x2;
  }
  else {
    local_24 = (short *)(((int)g_pathingGrid.sizeZ - (int)sVar3) + -1);
  }
  local_c = nullptr;
  local_1c = local_4c;
  if (-(int)local_24 == iVar13 || (int)local_4c < (int)local_24) {
    local_20 = local_54 + (iVar13 * -7 + local_34) * 7;
    iVar13 = local_34;
    psVar14 = local_54;
    psVar8 = local_20;
    do {
      while (local_48 = psVar8, local_30 = iVar13, local_30 <= local_3c) {
        local_10 = local_38;
        if ((int)local_38 <= local_28) {
          local_40 = local_48 + -iVar15;
          do {
            sVar10 = this_00->field_004B + (short)local_1c;
            sVar3 = this_00->field_0047 + (short)local_10;
            local_50 = (short *)(STReplaceLowWord((uint32_t)(psVar14), (uint16_t)(this_00->field_0049)) +
                                local_30);
            sVar12 = (short)local_50;
            if (((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
               (((sVar12 < 0 || ((g_worldGrid.sizeY <= sVar12 || (sVar10 < 0)))) ||
                (g_worldGrid.sizeZ <= sVar10)))) {
              pSVar9 = nullptr;
            }
            else {
              pSVar9 = (STBoatC *)
                       STGridAt3D(g_worldGrid, sVar3, sVar12, sVar10).objects[0];
            }
            psVar14 = local_50;
            if (pSVar9 == nullptr) {
              if (this_00->field_008E != '\0') {
                if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) || (sVar12 < 0)) ||
                    ((g_worldGrid.sizeY <= sVar12 || (sVar10 < 0)))) ||
                   (g_worldGrid.sizeZ <= sVar10)) {
                  pSVar9 = nullptr;
                }
                else {
                  pSVar9 = (STBoatC *)
                           STGridAt3D(g_worldGrid, sVar3, sVar12, sVar10).objects[1];
                  psVar14 = (short *)(int)g_worldGrid.sizeX;
                }
              }
              if (pSVar9 != nullptr) goto LAB_004183b8;
            }
            else {
LAB_004183b8:
              if ((pSVar9 != this_00) &&
                 (((psVar14 = local_1c, (int)this_00->field_004B + (int)local_1c != (int)param_3 ||
                   (this_00->field_0049 + local_30 != (int)param_2)) ||
                  ((short *)((int)this_00->field_0047 + (int)local_10) != local_2c)))) {
                local_c = (short *)0x1;
                *local_40 = -3;
              }
            }
            local_10 = (short *)((int)local_10 + 1);
            local_40 = local_40 + 1;
          } while ((int)local_10 <= local_28);
        }
        psVar8 = local_48 + 7;
        iVar13 = local_30 + 1;
      }
      local_20 = local_20 + 0x31;
      local_1c = (short *)((int)local_1c + 1);
      iVar13 = local_34;
      psVar14 = local_24;
      psVar8 = local_20;
    } while ((int)local_1c <= (int)local_24);
  }
  if (local_c == nullptr) {
    FreeAndNull(&local_14);
    local_44 = nullptr;
  }
  local_50 = (short *)(int)param_2;
  psVar14 = local_44;
  local_44 = (short *)(int)param_3;
  puVar6 = (ushort *)
           Library::DKW::WAY::FUN_006ae7d0
                     ((int)g_pathingGrid.cells,(int)g_pathingGrid.sizeX,
                      (short *)(int)g_pathingGrid.sizeY,(short *)(int)g_pathingGrid.sizeZ,
                      (short *)(int)this_00->field_0047,(short *)(int)this_00->field_0049,
                      (short *)(int)this_00->field_004B,local_2c,local_50,(short *)(int)param_3,
                      (int *)&this_00->field_0x9b,(undefined4 *)local_14,psVar14);
  this_00->field_0097 = puVar6;
  if (puVar6 == nullptr) {
    iVar15 = (int)g_pathingGrid.planeStride;
    iVar13 = (int)g_pathingGrid.sizeZ;
    psVar14_mg3 = g_pathingGrid.cells;
    psVar9 = g_pathingScratchGrid.cells;
    for (uVar4 = (iVar15 * iVar13 & 0x7fffffffU) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)psVar9 = *(undefined4 *)psVar14_mg3;
      psVar14_mg3 = psVar14_mg3 + 2;
      psVar9 = psVar9 + 2;
    }
    for (uVar4 = iVar15 * iVar13 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)psVar9 = (char)*psVar14_mg3;
      psVar14_mg3 = (short *)((int)psVar14_mg3 + 1);
      psVar9 = (short *)((int)psVar9 + 1);
    }
    if ((local_c != nullptr) && (local_1c = local_4c, (int)local_4c <= (int)local_24)) {
      local_c = local_54 + ((int)local_4c * 7 + local_34) * 7;
      do {
        local_10 = g_pathingScratchGrid.cells +
                   ((int)this_00->field_004B + (int)local_1c) * (int)g_pathingGrid.planeStride +
                   (this_00->field_0049 + local_34) * (int)g_pathingGrid.sizeX +
                   (int)this_00->field_0047;
        if (local_34 <= local_3c) {
          iVar15 = (local_3c - local_34) + 1;
          psVar14 = local_c;
          do {
            if ((int)local_38 <= local_28) {
              psVar8 = psVar14 + (int)local_38;
              iVar13 = (local_28 - (int)local_38) + 1;
              do {
                if (*psVar8 < 0) {
                  *(short *)(((int)local_10 - (int)psVar14) + (int)psVar8) = *psVar8;
                }
                psVar8 = psVar8 + 1;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            }
            psVar14 = psVar14 + 7;
            iVar15 = iVar15 + -1;
            local_10 = local_10 + g_pathingGrid.sizeX;
          } while (iVar15 != 0);
          local_20 = nullptr;
        }
        local_1c = (short *)((int)local_1c + 1);
        local_c = local_c + 0x31;
      } while ((int)local_1c <= (int)local_24);
    }
    puVar6 = (ushort *)
             Library::DKW::WAY::FUN_006afba0
                       ((int)g_pathingScratchGrid.cells,(int)g_pathingScratchGrid.sizeX,
                        (short *)(int)g_pathingScratchGrid.sizeY,
                        (short *)(int)g_pathingScratchGrid.sizeZ,(short *)(int)this_00->field_0047,
                        (short *)(int)this_00->field_0049,(short *)(int)this_00->field_004B,local_2c
                        ,local_50,local_44,(int *)&this_00->field_0x9b,0);
    this_00->field_0097 = puVar6;
  }
  FreeAndNull(&local_14);
LAB_0041862b:
  g_currentExceptionFrame = local_9c.previous;
  puVar6 = this_00->field_0097;
  if (puVar6 == nullptr) {
    return 2;
  }
  this_00->field_00E3 = '\x01';
  this_00->field_00D3 = 1;
  sVar3 = puVar6[4] * 0xc9 + 100;
  uVar4 = (int)sVar3 - (int)this_00->field_0041;
  sVar10 = puVar6[5] * 0xc9 + 100;
  uVar11 = (int)uVar4 >> 0x1f;
  local_c = (short *)(STReplaceLowWord((uint32_t)(local_9c.previous), (uint16_t)(puVar6[6] * 200)) + 100);
  local_54 = (short *)((uVar4 ^ uVar11) - uVar11);
  local_15 = 0;
  uVar4 = (int)sVar10 - (int)this_00->field_0043;
  local_5 = false;
  uVar11 = (int)uVar4 >> 0x1f;
  local_4c = (short *)((uVar4 ^ uVar11) - uVar11);
  uVar4 = (short)local_c - (int)this_00->field_0045;
  uVar11 = (int)uVar4 >> 0x1f;
  local_10 = (short *)((uVar4 ^ uVar11) - uVar11);
  if (local_10 == nullptr) {
    local_14 = (short *)STReplaceLowByte((uint32_t)(local_14), (uint8_t)(this_00->field_0061));
  }
  else {
    bVar1 = 2 < (int)local_10 / (int)local_54;
    local_5 = local_54 == nullptr || bVar1;
    if ((local_4c == nullptr) || (2 < (int)local_10 / (int)local_4c)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((local_54 == nullptr || bVar1) && (bVar2)) {
      local_14 = (short *)STReplaceLowByte((uint32_t)(local_14), (uint8_t)(this_00->field_0062));
    }
    else {
      local_14 = (short *)STReplaceLowByte((uint32_t)(local_14), (uint8_t)(this_00->field_0061));
    }
  }
  /* ST_CALLSITE[00418731]: CALL 0x00402455; direct=00402455 sub_00415B30 */
  iVar15 = sub_00415B30(this_00,this_00->field_0041,this_00->field_0043,this_00->field_0045,sVar3,
                        sVar10,(short)local_c,(byte)local_14);
  if (iVar15 != 0) {
    return 0xffffffff;
  }
  if ((this_00->field_008C != 1) &&
     ((this_00->field_0041 != sVar3 || (this_00->field_0043 != sVar10)))) {
    /* ST_CALLSITE[00418768]: CALL dword ptr [EDX + 0x10] */
    sVar3 = (*this_00->vtable->vfunc_10)
                      (this_00->field_0041,this_00->field_0043,(int)this_00->field_0045,sVar3,sVar10
                       ,local_c);
    /* ST_CALLSITE[0041876E]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0 */
    uVar5 = STBoatC::sub_004176C0(this_00,sVar3);
    if ((short)uVar5 != this_00->field_006C) {
      thunk_FUN_00417740(this_00,this_00->field_006C,(short)uVar5);
    }
  }
  return 0;
}

