#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SubmarineTitans__Recovered__HiddenThis__AnonReceiver_004167A0.cpp

// 00418030 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004167A0::FUN_00418030
#line 4 "decomp/ST.exe/functions/00418030/decomp.c"
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00417FF0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=37; incoming_edx_uses=0; calls=15;
   ecx_pointer_setup=15; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=5; adopt_untyped_existing_thiscall */

undefined4 __thiscall
st::fn_00418030
          (AnonReceiver_004167A0 *this,short param_1,short param_2,short param_3)

{
  bool bVar1;
  bool bVar2;
  STBoatC *this_00;
  short sVar3;
  int iVar4;
  uint uVar5;
  STWorldObject *pSVar6;
  ushort *puVar7;
  undefined4 uVar8;
  short *psVar9;
  STBoatC *pSVar10;
  short sVar11;
  uint uVar12;
  short sVar13;
  int iVar14;
  short *psVar15;
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

  local_58 = (STBoatC *)this;
  st::fn_00405952(this);
  if (((param_1 == *(short *)&this->field_0x47) && (param_2 == *(short *)&this->field_0x49)) &&
     (param_3 == *(short *)&this->field_0x4b)) {
    return 1;
  }
  local_9c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_9c;
  iVar4 = st::fn_0072D7F0(local_9c.jumpBuffer,0);
  this_00 = local_58;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_9c.previous;
    return 0xffffffff;
  }
  local_2c = (short *)(int)param_1;
  uVar5 = (int)local_2c - (int)local_58->field_005B;
  uVar12 = (int)uVar5 >> 0x1f;
  if ((((int)((uVar5 ^ uVar12) - uVar12) < 2) &&
      (iVar4 = (int)param_2, uVar5 = iVar4 - local_58->field_005D, uVar12 = (int)uVar5 >> 0x1f,
      (int)((uVar5 ^ uVar12) - uVar12) < 2)) &&
     (iVar14 = (int)param_3, uVar5 = iVar14 - local_58->field_005F, uVar12 = (int)uVar5 >> 0x1f,
     (int)((uVar5 ^ uVar12) - uVar12) < 2)) {
    if (((param_1 < 0) || (g_worldGrid.sizeX <= param_1)) ||
       ((param_2 < 0 ||
        (((g_worldGrid.sizeY <= param_2 || (param_3 < 0)) || (g_worldGrid.sizeZ <= param_3)))))) {
      pSVar6 = nullptr;
    }
    else {
      pSVar6 = STGridAt3D(g_worldGrid, local_2c, iVar4, iVar14).
               objects[(byte)local_58->field_008E];
    }
    if (pSVar6 == nullptr) {
      *(undefined4 *)&local_58->field_0x9b = 2;
      puVar7 = st::fn_006AAC10(0x10);
      this_00->field_0097 = puVar7;
      puVar7[4] = param_1;
      this_00->field_0097[5] = param_2;
      this_00->field_0097[6] = param_3;
      uVar8 = st::fn_006A5EB0((int)this_00->field_005B,(int)this_00->field_005D,
                           (int)this_00->field_005F,(int)local_2c,iVar4,iVar14);
      this_00->field_0097[7] = (ushort)uVar8;
      goto LAB_0041862b;
    }
  }
  local_44 = (short *)0x3;
  local_14 = st::fn_006AAC10(0x2ae);
  sVar3 = this_00->field_0047;
  local_54 = local_14 + 0xab;
  iVar4 = 2;
  if (sVar3 < 2) {
    iVar4 = (int)sVar3;
  }
  local_38 = (short *)-iVar4;
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
  iVar14 = 2;
  if (sVar3 < 2) {
    iVar14 = (int)sVar3;
  }
  local_4c = (short *)-iVar14;
  if (sVar3 + 2 < (int)g_pathingGrid.sizeZ) {
    local_24 = (short *)0x2;
  }
  else {
    local_24 = (short *)(((int)g_pathingGrid.sizeZ - (int)sVar3) + -1);
  }
  local_c = nullptr;
  local_1c = local_4c;
  if (-(int)local_24 == iVar14 || (int)local_4c < (int)local_24) {
    local_20 = local_54 + (iVar14 * -7 + local_34) * 7;
    iVar14 = local_34;
    psVar15 = local_54;
    psVar9 = local_20;
    do {
      while (local_48 = psVar9, local_30 = iVar14, local_30 <= local_3c) {
        local_10 = local_38;
        if ((int)local_38 <= local_28) {
          local_40 = local_48 + -iVar4;
          do {
            sVar11 = this_00->field_004B + (short)local_1c;
            sVar3 = this_00->field_0047 + (short)local_10;
            local_50 = (short *)(STReplaceLowWord((uint32_t)(psVar15), (uint16_t)(this_00->field_0049)) +
                                local_30);
            sVar13 = (short)local_50;
            if (((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
               (((sVar13 < 0 || ((g_worldGrid.sizeY <= sVar13 || (sVar11 < 0)))) ||
                (g_worldGrid.sizeZ <= sVar11)))) {
              pSVar10 = nullptr;
            }
            else {
              pSVar10 = (STBoatC *)
                        STGridAt3D(g_worldGrid, sVar3, sVar13, sVar11).objects[0];
            }
            psVar15 = local_50;
            if (pSVar10 == nullptr) {
              if (this_00->field_008E != '\0') {
                if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) || (sVar13 < 0)) ||
                    ((g_worldGrid.sizeY <= sVar13 || (sVar11 < 0)))) ||
                   (g_worldGrid.sizeZ <= sVar11)) {
                  pSVar10 = nullptr;
                }
                else {
                  pSVar10 = (STBoatC *)
                            STGridAt3D(g_worldGrid, sVar3, sVar13, sVar11).objects[1];
                  psVar15 = (short *)(int)g_worldGrid.sizeX;
                }
              }
              if (pSVar10 != nullptr) goto LAB_004183b8;
            }
            else {
LAB_004183b8:
              if ((pSVar10 != this_00) &&
                 (((psVar15 = local_1c, (int)this_00->field_004B + (int)local_1c != (int)param_3 ||
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
        psVar9 = local_48 + 7;
        iVar14 = local_30 + 1;
      }
      local_20 = local_20 + 0x31;
      local_1c = (short *)((int)local_1c + 1);
      iVar14 = local_34;
      psVar15 = local_24;
      psVar9 = local_20;
    } while ((int)local_1c <= (int)local_24);
  }
  if (local_c == nullptr) {
    st::fn_006AB060(&local_14);
    local_44 = nullptr;
  }
  local_50 = (short *)(int)param_2;
  psVar15 = local_44;
  local_44 = (short *)(int)param_3;
  puVar7 = (ushort *)
           st::fn_006AE7D0
                     ((int)g_pathingGrid.cells,(int)g_pathingGrid.sizeX,
                      (short *)(int)g_pathingGrid.sizeY,(short *)(int)g_pathingGrid.sizeZ,
                      (short *)(int)this_00->field_0047,(short *)(int)this_00->field_0049,
                      (short *)(int)this_00->field_004B,local_2c,local_50,(short *)(int)param_3,
                      (int *)&this_00->field_0x9b,(undefined4 *)local_14,psVar15);
  this_00->field_0097 = puVar7;
  if (puVar7 == nullptr) {
    iVar4 = (int)g_pathingGrid.planeStride;
    iVar14 = (int)g_pathingGrid.sizeZ;
    psVar15 = g_pathingGrid.cells;
    psVar9 = g_pathingScratchGrid.cells;
    for (uVar5 = (iVar4 * iVar14 & 0x7fffffffU) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)psVar9 = *(undefined4 *)psVar15;
      psVar15 = psVar15 + 2;
      psVar9 = psVar9 + 2;
    }
    for (uVar5 = iVar4 * iVar14 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)psVar9 = (char)*psVar15;
      psVar15 = (short *)((int)psVar15 + 1);
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
          iVar4 = (local_3c - local_34) + 1;
          psVar15 = local_c;
          do {
            if ((int)local_38 <= local_28) {
              psVar9 = psVar15 + (int)local_38;
              iVar14 = (local_28 - (int)local_38) + 1;
              do {
                if (*psVar9 < 0) {
                  *(short *)(((int)local_10 - (int)psVar15) + (int)psVar9) = *psVar9;
                }
                psVar9 = psVar9 + 1;
                iVar14 = iVar14 + -1;
              } while (iVar14 != 0);
            }
            psVar15 = psVar15 + 7;
            iVar4 = iVar4 + -1;
            local_10 = local_10 + g_pathingGrid.sizeX;
          } while (iVar4 != 0);
          local_20 = nullptr;
        }
        local_1c = (short *)((int)local_1c + 1);
        local_c = local_c + 0x31;
      } while ((int)local_1c <= (int)local_24);
    }
    puVar7 = (ushort *)
             st::fn_006AFBA0
                       ((int)g_pathingScratchGrid.cells,(int)g_pathingScratchGrid.sizeX,
                        (short *)(int)g_pathingScratchGrid.sizeY,
                        (short *)(int)g_pathingScratchGrid.sizeZ,(short *)(int)this_00->field_0047,
                        (short *)(int)this_00->field_0049,(short *)(int)this_00->field_004B,local_2c
                        ,local_50,local_44,(int *)&this_00->field_0x9b,0);
    this_00->field_0097 = puVar7;
  }
  st::fn_006AB060(&local_14);
LAB_0041862b:
  g_currentExceptionFrame = local_9c.previous;
  puVar7 = this_00->field_0097;
  if (puVar7 == nullptr) {
    return 2;
  }
  this_00->field_00E3 = 1;
  this_00->field_00D3 = 1;
  sVar3 = puVar7[4] * 0xc9 + 100;
  uVar5 = (int)sVar3 - (int)this_00->field_0041;
  sVar11 = puVar7[5] * 0xc9 + 100;
  uVar12 = (int)uVar5 >> 0x1f;
  local_c = (short *)(STReplaceLowWord((uint32_t)(local_9c.previous), (uint16_t)(puVar7[6] * 200)) + 100);
  local_54 = (short *)((uVar5 ^ uVar12) - uVar12);
  local_15 = 0;
  uVar5 = (int)sVar11 - (int)this_00->field_0043;
  local_5 = false;
  uVar12 = (int)uVar5 >> 0x1f;
  local_4c = (short *)((uVar5 ^ uVar12) - uVar12);
  uVar5 = (int)(short)local_c - (int)this_00->field_0045;
  uVar12 = (int)uVar5 >> 0x1f;
  local_10 = (short *)((uVar5 ^ uVar12) - uVar12);
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
  iVar4 = st::fn_00402455(this_00,this_00->field_0041,this_00->field_0043,this_00->field_0045,sVar3,
                       sVar11,(short)local_c,(byte)local_14);
  if (iVar4 != 0) {
    return 0xffffffff;
  }
  if ((this_00->field_008C != 1) &&
     ((this_00->field_0041 != sVar3 || (this_00->field_0043 != sVar11)))) {
    sVar3 = (*this_00->vtable->vfunc_10)
                      (this_00->field_0041,this_00->field_0043,(int)this_00->field_0045,sVar3,sVar11
                       ,local_c);
    uVar5 = st::fn_004030B2(this_00,sVar3);
    if ((short)uVar5 != this_00->field_006C) {
      st::fn_004021E9(this_00,this_00->field_006C,(short)uVar5);
    }
  }
  return 0;
}

