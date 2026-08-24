#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SubmarineTitans__Recovered__HiddenThis__AnonReceiver_00644410.cpp

// 00644410 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00644410::FUN_00644410
#line 4 "decomp/ST.exe/functions/00644410/decomp.c"
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00644410.
   Evidence: incoming_receiver_captures=1; receiver_accesses=28; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[16];
   expected_stack=16; receiver_family_members=2; adopt_untyped_existing_thiscall;
   single_call_corroborated_by_receiver_family */

void __thiscall
st::fn_00644410
          (AnonReceiver_00644410 *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  AnonShape_00644410_A4B3CF3D *pAVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort uVar9;
  int iVar8;
  uint *puVar10;
  short sVar11;
  STWorldObject *this_00;
  int iVar12;
  short sVar13;
  int iVar14;
  longlong lVar15;
  undefined1 local_48 [4];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  AnonShape_00644410_A4B3CF3D *local_10;
  short local_a;
  short local_8;
  short local_6;

  iVar14 = 0;
  local_3c = (int)*(short *)&this->field_0x41;
  local_40 = (int)*(short *)&this->field_0x43;
  local_44 = (int)*(short *)&this->field_0x45;
  local_14 = 0;
  local_18 = nullptr;
  if ((byte)this->field_0x27d < 2) {
    *param_2 = local_3c;
    *param_3 = local_40;
    *param_4 = local_44;
    *param_1 = 0;
    return;
  }
  local_10 = (AnonShape_00644410_A4B3CF3D *)this;
  local_2c = st::fn_006AADD0((int)*(short *)&this->field_0x268,(int)*(short *)&this->field_0x26a,
                          (int)*(short *)&this->field_0x26c,local_3c,local_40,local_44);
  local_2c = local_2c / 0x32;
  if (local_2c < 1) {
    local_2c = 1;
  }
  local_38 = 1;
  if (0 < local_2c) {
    do {
      iVar14 = ((local_3c - ((AnonShape_00644410_A4B3CF3D *)this)->field_0268) * local_38) /
               local_2c + (int)((AnonShape_00644410_A4B3CF3D *)this)->field_0268;
      local_14 = ((local_40 - ((AnonShape_00644410_A4B3CF3D *)this)->field_026A) * local_38) /
                 local_2c + (int)((AnonShape_00644410_A4B3CF3D *)this)->field_026A;
      local_18 = (undefined4 *)
                 (((local_44 - ((AnonShape_00644410_A4B3CF3D *)this)->field_026C) * local_38) /
                  local_2c + (int)((AnonShape_00644410_A4B3CF3D *)this)->field_026C);
      local_24 = STBiasedDiv16(iVar14, 0xc9); /* exact signed 16-bit grid-index division */
      iVar6 = STBiasedDiv16(local_14, 0xc9); /* exact signed 16-bit grid-index division */
      sVar3 = (short)((int)local_18 >> 0x1f);
      if ((int)local_18 < 0) {
        puVar10 = (undefined4 *)
                  ((short)(((short)((int)local_18 / 200) + sVar3) -
                          (short)((longlong)(int)local_18 * 0x51eb851f >> 0x3f)) + -1);
      }
      else {
        puVar10 = (undefined4 *)
                  (int)(short)(((short)((int)local_18 / 200) + sVar3) -
                              (short)((longlong)(int)local_18 * 0x51eb851f >> 0x3f));
      }
      local_34 = (int)puVar10 + -1;
      *param_1 = 0;
      local_30 = puVar10;
      local_28 = iVar6;
      local_20 = iVar14;
      if (local_34 <= (int)puVar10 + 1) {
        do {
          if ((local_34 <= g_worldGrid.sizeZ + -1) && (local_1c = iVar6 + -1, local_1c <= iVar6 + 1)
             ) {
            do {
              if ((-1 < local_1c) &&
                 ((local_1c <= g_worldGrid.sizeY + -1 &&
                  (iVar6 = local_24 + -1, iVar6 <= local_24 + 1)))) {
                do {
                  pAVar1 = local_10;
                  iVar14 = local_34;
                  if ((-1 < iVar6) && (iVar7 = (int)g_worldGrid.sizeX, iVar6 <= iVar7 + -1)) {
                    if (local_34 < 0) {
                      if ((((undefined4 *)local_34 == local_30) && (local_1c == local_28)) &&
                         (iVar6 == local_24)) {
                        *param_1 = 1;
                        local_10->field_0270 = 0;
                        lVar15 = st::fn_0072E288();
                        *param_2 = (int)lVar15;
                        pAVar1->field_0041 = (short)lVar15;
                        lVar15 = st::fn_0072E288();
                        *param_3 = (int)lVar15;
                        *(short *)&pAVar1->field_0x43 = (short)lVar15;
                        *param_4 = 5;
                        pAVar1->field_0045 = 5;
                        return;
                      }
                    }
                    else {
                      sVar11 = (short)iVar6;
                      sVar13 = (short)local_34;
                      sVar3 = (short)local_1c;
                      if (((((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) || (sVar3 < 0)) ||
                          ((g_worldGrid.sizeY <= sVar3 || (sVar13 < 0)))) ||
                         (g_worldGrid.sizeZ <= sVar13)) {
                        this_00 = nullptr;
                      }
                      else {
                        this_00 = g_worldGrid.cells
                                  [(int)sVar13 * (int)g_worldGrid.planeStride + sVar3 * iVar7 +
                                   (int)sVar11].objects[0];
                      }
                      if (((local_10->field_0287 != '\0') && (this_00 == nullptr)) &&
                         ((((sVar11 < 0 ||
                            (((g_worldGrid.sizeX <= sVar11 || (sVar3 < 0)) ||
                             (g_worldGrid.sizeY <= sVar3)))) ||
                           ((sVar13 < 0 || (g_worldGrid.sizeZ <= sVar13)))) ||
                          ((this_00 = g_worldGrid.cells
                                      [(int)sVar13 * (int)g_worldGrid.planeStride + sVar3 * iVar7 +
                                       (int)sVar11].objects[1], this_00 != nullptr &&
                           /* ST_CALLSITE[006446F4]: CALL dword ptr [EDX + 0x2c] */
                           (((iVar7 = this_00->GetObjectTypeId(), iVar7 != 0xa6 &&
                             (iVar7 != 0xa7)) && ((iVar7 != 0xbd && (iVar7 != 0xaf)))))))))) {
                        this_00 = nullptr;
                      }
                      iVar7 = local_20;
                      if (((((undefined4 *)iVar14 == local_30) && (local_1c == local_28)) &&
                          (iVar6 == local_24)) &&
                         ((STGridAt3D(g_pathingGrid, iVar6, local_1c, iVar14) < 0 &&
                          (this_00 == nullptr)))) {
                        *param_1 = 1;
                        local_10->field_0270 = 0;
                        *param_2 = local_20;
                        *param_3 = local_14;
                        *param_4 = (int)local_18;
                        sVar3 = (short)((int)local_18 >> 0x1f);
                        if ((int)local_18 < 0) {
                          iVar14 = (short)(((short)((int)local_18 / 200) + sVar3) -
                                          (short)((longlong)(int)local_18 * 0x51eb851f >> 0x3f)) +
                                   -1;
                        }
                        else {
                          iVar14 = (int)(short)(((short)((int)local_18 / 200) + sVar3) -
                                               (short)((longlong)(int)local_18 * 0x51eb851f >> 0x3f)
                                               );
                        }
                        iVar6 = STBiasedDiv16(local_14, 0xc9); /* exact signed 16-bit grid-index division */
                        iVar4 = STBiasedDiv16(local_20, 0xc9); /* exact signed 16-bit grid-index division */
                        sVar3 = local_10->field_026C;
                        local_30 = (undefined4 *)(int)sVar3;
                        if (sVar3 < 0) {
                          iVar8 = (short)((sVar3 / 200 + (sVar3 >> 0xf)) -
                                         (short)((longlong)(int)local_30 * 0x51eb851f >> 0x3f)) + -1
                          ;
                        }
                        else {
                          iVar8 = (int)(short)((sVar3 / 200 + (sVar3 >> 0xf)) -
                                              (short)((longlong)(int)local_30 * 0x51eb851f >> 0x3f));
                        }
                        sVar3 = local_10->field_026A;
                        local_34 = (int)sVar3;
                        if (sVar3 < 0) {
                          iVar12 = (short)((sVar3 / 0xc9 + (sVar3 >> 0xf)) -
                                          (short)((longlong)local_34 * 0x28c1979 >> 0x3f)) + -1;
                        }
                        else {
                          iVar12 = (int)(short)((sVar3 / 0xc9 + (sVar3 >> 0xf)) -
                                               (short)((longlong)local_34 * 0x28c1979 >> 0x3f));
                        }
                        sVar3 = local_10->field_0268;
                        local_38 = (int)sVar3;
                        if (sVar3 < 0) {
                          iVar5 = (short)((sVar3 / 0xc9 + (sVar3 >> 0xf)) -
                                         (short)((longlong)local_38 * 0x28c1979 >> 0x3f)) + -1;
                        }
                        else {
                          iVar5 = (int)(short)((sVar3 / 0xc9 + (sVar3 >> 0xf)) -
                                              (short)((longlong)local_38 * 0x28c1979 >> 0x3f));
                        }
                        if (-1 < STGridAt3D(g_pathingGrid, iVar5, iVar12, iVar8)) {
                          if (STGridAt3D(g_pathingGrid, iVar4, iVar6, iVar14) ==
                              STGridAt3D(g_pathingGrid, iVar5, iVar12, iVar8)) {
                            return;
                          }
                          iVar6 = local_38 - local_20;
                          local_28 = local_20;
                          local_20 = 3;
                          iVar14 = (local_34 - local_14) / 2 + local_14;
                          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                          param_1 = local_18;
                          iVar7 = iVar6 / 2 + iVar7;
                          local_18 = (undefined4 *)
                                     (((int)local_30 - (int)local_18) / 2 + (int)local_18);
                          local_24 = local_14;
                          do {
                            sVar3 = (short)((int)local_18 >> 0x1f);
                            if ((int)local_18 < 0) {
                              local_2c = (short)(((short)((int)local_18 / 200) + sVar3) -
                                                (short)((longlong)(int)local_18 * 0x51eb851f >> 0x3f
                                                       )) + -1;
                            }
                            else {
                              local_2c = (int)(short)(((short)((int)local_18 / 200) + sVar3) -
                                                     (short)((longlong)(int)local_18 * 0x51eb851f >>
                                                            0x3f));
                            }
                            iVar6 = STBiasedDiv16(iVar14, 0xc9); /* exact signed 16-bit grid-index division */
                            iVar4 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
                            iVar8 = iVar7;
                            iVar12 = iVar14;
                            if (STGridAt3D(g_pathingGrid, iVar4, iVar6, local_2c) < 0) {
                              param_1 = local_18;
                              iVar8 = local_38;
                              iVar12 = local_34;
                              local_18 = local_30;
                              local_28 = iVar7;
                              local_24 = iVar14;
                            }
                            local_30 = local_18;
                            local_34 = iVar12;
                            local_38 = iVar8;
                            iVar7 = (local_38 - local_28) / 2 + local_28;
                            iVar14 = (local_34 - local_24) / 2 + local_24;
                            local_18 = (undefined4 *)
                                       (((int)local_30 - (int)param_1) / 2 + (int)param_1);
                            local_20 = local_20 + -1;
                          } while (local_20 != 0);
                          sVar3 = (short)((int)local_18 >> 0x1f);
                          if ((int)local_18 < 0) {
                            param_1 = (undefined4 *)
                                      ((short)(((short)((int)local_18 / 200) + sVar3) -
                                              (short)((longlong)(int)local_18 * 0x51eb851f >> 0x3f))
                                      + -1);
                          }
                          else {
                            param_1 = (undefined4 *)
                                      (int)(short)(((short)((int)local_18 / 200) + sVar3) -
                                                  (short)((longlong)(int)local_18 * 0x51eb851f >>
                                                         0x3f));
                          }
                          iVar6 = STBiasedDiv16(iVar14, 0xc9); /* exact signed 16-bit grid-index division */
                          iVar4 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
                          if (STGridAt3D(g_pathingGrid, iVar4, iVar6, st::machine_word_boundary_cast<int>(param_1)) < 0) {
                            iVar7 = local_38;
                            local_18 = local_30;
                            iVar14 = local_34;
                          }
                          *param_2 = iVar7;
                          *param_3 = iVar14;
                          *param_4 = (int)local_18;
                          local_10->field_0045 = (short)local_18;
                          local_10->field_0041 = (short)iVar7;
                          return;
                        }
                        *param_1 = 2;
                        return;
                      }
                      if ((this_00 != nullptr) &&
                         (*(int *)&this_00->field_0x18 != local_10->field_025E)) {
                        uVar9 = (undefined2)((uint)local_10 >> 0x10);
                        /* ST_CALLSITE[006447C2]: CALL dword ptr [EDX + 0xdc]; [STIndirectCallsiteApplier] exact slot 0xDC; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        iVar14 = this_00->vfunc_DC(local_20, local_14, st::machine_word_boundary_cast<undefined4>(local_18), CONCAT22(uVar9,local_10->field_024B), CONCAT22(uVar9,local_10->field_024D), CONCAT22(uVar9,local_10->field_024F));
                        pAVar1 = local_10;
                        if (-1 < iVar14) {
                          *param_1 = 1;
                          iVar6 = local_10->field_0259;
                          if (((((iVar6 == 0x9c) || (iVar6 == 0x9d)) || (iVar6 == 0x9e)) ||
                              (iVar6 == 0x9b)) &&
                             (((local_10->field_0285 == '\0' &&
                               /* ST_CALLSITE[00644D02]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
                               (bVar2 = st::fn_004049B7(*(char *)&this_00[1].vtable), bVar2 != 3))
                              && (iVar6 = st::fn_0040186B((int)this_00[1].vtable,0x1b),
                                 iVar6 != 0)))) {
                            /* ST_CALLSITE[00644D35]: CALL dword ptr [EAX + 0xe0]; [STIndirectCallsiteApplier] exact slot 0xE0; mode=machine-void; signature=__thiscall;/void;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
                            this_00->vfunc_E0(iVar14, st::machine_word_boundary_cast<undefined4>(&local_6), st::machine_word_boundary_cast<undefined4>(&local_8), st::machine_word_boundary_cast<undefined4>(&local_a), st::machine_word_boundary_cast<undefined4>(local_48));
                            *param_2 = (int)local_6;
                            *param_3 = (int)local_8;
                            *param_4 = (int)local_a;
                            /* ST_CALLSITE[00644D63]: CALL 0x00401159; direct=00401159 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00644410::sub_00645F10 */
                            st::fn_00401159((AnonReceiver_00644410 *)pAVar1,this_00,(ushort)*param_2,
                                         (ushort)*param_3,local_a);
                            pAVar1->field_0285 = '\x02';
                          }
                          pAVar1->field_0270 = 1;
                          *(undefined4 *)&pAVar1->field_0x274 = *(undefined4 *)&this_00->field_0x18;
                          *(int *)&pAVar1->field_0x278 = iVar14;
                          *param_2 = local_20;
                          *param_3 = local_14;
                          *param_4 = (int)local_18;
                          return;
                        }
                      }
                    }
                  }
                  iVar6 = iVar6 + 1;
                  puVar10 = local_30;
                  this = (AnonReceiver_00644410 *)local_10;
                  iVar14 = local_20;
                } while (iVar6 <= local_24 + 1);
              }
              local_1c = local_1c + 1;
              iVar6 = local_28;
            } while (local_1c <= local_28 + 1);
          }
          local_34 = local_34 + 1;
        } while (local_34 <= (int)puVar10 + 1);
      }
      local_38 = local_38 + 1;
    } while (local_38 <= local_2c);
  }
  *param_2 = iVar14;
  *param_3 = local_14;
  *param_4 = (int)local_18;
  return;
}

// 00645F10 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00644410::sub_00645F10
#line 4 "decomp/ST.exe/functions/00645F10/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00644410.
   Evidence: this_call_owners=[SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00644410];
   agreed_this_calls=1; incoming_this_accesses=11; incoming_edx_uses=0;
   incoming_stack_parameter_uses=6; direct_non_thunk_callers=0; incoming_ecx_receiver_callers=0;
   attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00645F71 MOV CX,word ptr
   [EBP + 0xc]

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00645FA1 MOV DX,word ptr
   [EBP + 0x10]

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00644410 -> 00645F10 @ 00644D63; MOVSX at 00644D4B establishes signed source width 2 */

void __thiscall
st::fn_00645F10
          (AnonReceiver_00644410 *this,void *param_1,ushort param_2,ushort param_3,short param_4)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_60 [5];
  undefined2 local_4c;
  short local_4a;
  short local_48;
  ushort local_46;
  ushort local_44;
  short local_42;
  short local_40;
  short local_3e;
  short local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_33;
  undefined2 local_2f;
  undefined1 local_c;
  short local_8;
  short local_6;

  pvVar2 = param_1;
  if (param_1 != nullptr) {
    memset(local_60, 0, 0x58); /* compiler bulk-zero initialization */
    local_60[3] = 1;
    local_60[2] = 1;
    local_60[1] = STField<undefined4>(param_1,0x24);
    local_60[0] = 0x28;
    st::fn_004031E3(param_1,(uint *)((int)&param_1 + 2),&local_6,&local_8);
    local_4c = STPiece<2,2>(param_1);
    local_2f = STField<undefined2>(pvVar2,0x32);
    local_46 = param_2;
    local_48 = local_8;
    local_34 = this->field_0x25d;
    local_4a = local_6;
    local_33 = STField<undefined4>(pvVar2,0x18);
    local_42 = param_4;
    uVar1 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
    local_44 = param_3;
    *(uint *)&this->field_0x1c = uVar1;
    local_c = 1;
    local_3a = 0;
    local_40 = (short)((ulonglong)(uVar1 >> 0x10) % 0x3d) + *(short *)&this->field_0x24b + -0x1e;
    uVar1 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this->field_0x1c = uVar1;
    local_3e = (short)((ulonglong)(uVar1 >> 0x10) % 0x3d) + *(short *)&this->field_0x24d + -0x1e;
    uVar1 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
    *(uint *)&this->field_0x1c = uVar1;
    local_3c = (short)((ulonglong)(uVar1 >> 0x10) % 0x3d) + *(short *)&this->field_0x24f + -0x1e;
    local_38 = *(undefined4 *)&this->field_0x259;
    /* ST_CALLSITE[00646048]: CALL dword ptr [EAX + 0x8] */
    g_playSystem_00802A38->vfunc_08(0x106,0,0,(short)local_60,0);
  }
  return;
}

