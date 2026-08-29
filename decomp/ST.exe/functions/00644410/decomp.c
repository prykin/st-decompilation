#include "../../pseudocode_runtime.h"


/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_00644410.
   Evidence: incoming_receiver_captures=1; receiver_accesses=28; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[16];
   expected_stack=16; receiver_family_members=2; adopt_untyped_existing_thiscall;
   single_call_corroborated_by_receiver_family */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00644410::FUN_00644410
          (RecoveredReceiver_00644410 *this,undefined4 *param_1,int *param_2,int *param_3,
          int *param_4)

{
  RecoveredReceiver_00644410 *pRVar1;
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
  RecoveredRecord_00645F10_DD339E8F *this_00;
  int iVar12;
  short sVar13;
  int iVar14;
  longlong lVar15;
  byte local_48 [4];
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
  RecoveredReceiver_00644410 *local_10;
  short local_a;
  short local_8;
  short local_6;

  iVar14 = 0;
  local_3c = (int)this->field_0041;
  local_40 = (int)this->field_0043;
  local_44 = (int)this->field_0045;
  local_14 = 0;
  local_18 = nullptr;
  if ((byte)this->field_027D < 2) {
    *param_2 = local_3c;
    *param_3 = local_40;
    *param_4 = local_44;
    *param_1 = 0;
    return;
  }
  local_10 = this;

  local_2c = FUN_006aadd0((int)this->field_0268,(int)this->field_026A,(int)this->field_026C,local_3c
                          ,local_40,local_44);
  local_2c = local_2c / 0x32;
  if (local_2c < 1) {
    local_2c = 1;
  }
  local_38 = 1;
  if (0 < local_2c) {
    do {
      iVar14 = ((local_3c - this->field_0268) * local_38) / local_2c + (int)this->field_0268;
      local_14 = ((local_40 - this->field_026A) * local_38) / local_2c + (int)this->field_026A;
      local_18 = (undefined4 *)
                 (((local_44 - this->field_026C) * local_38) / local_2c + (int)this->field_026C);
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
                  (short)(((short)((int)local_18 / 200) + sVar3) -
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
                  pRVar1 = local_10;
                  iVar14 = local_34;
                  if ((-1 < iVar6) && (iVar7 = (int)g_worldGrid.sizeX, iVar6 <= iVar7 + -1)) {
                    if (local_34 < 0) {
                      if ((((undefined4 *)local_34 == local_30) && (local_1c == local_28)) &&
                         (iVar6 == local_24)) {
                        *param_1 = 1;
                        local_10->field_0270 = 0;
                        lVar15 = Library::MSVCRT::__ftol();
                        *param_2 = (int)lVar15;
                        pRVar1->field_0041 = (short)lVar15;
                        lVar15 = Library::MSVCRT::__ftol();
                        *param_3 = (int)lVar15;
                        pRVar1->field_0043 = (short)lVar15;
                        *param_4 = 5;
                        pRVar1->field_0045 = 5;
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
                        this_00 = (RecoveredRecord_00645F10_DD339E8F *)
                                  g_worldGrid.cells
                                  [(int)sVar13 * (int)g_worldGrid.planeStride + sVar3 * iVar7 +
                                   (int)sVar11].objects[0];
                      }
                      if (((local_10->field_0287 != '\0') &&
                          (this_00 == nullptr)) &&
                         ((((sVar11 < 0 ||
                            (((g_worldGrid.sizeX <= sVar11 || (sVar3 < 0)) ||
                             (g_worldGrid.sizeY <= sVar3)))) ||
                           ((sVar13 < 0 || (g_worldGrid.sizeZ <= sVar13)))) ||
                          ((this_00 = (RecoveredRecord_00645F10_DD339E8F *)
                                      g_worldGrid.cells
                                      [(int)sVar13 * (int)g_worldGrid.planeStride + sVar3 * iVar7 +
                                       (int)sVar11].objects[1],
                           this_00 != nullptr &&
                           /* ST_CALLSITE[006446F4]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
                           (((iVar7 = STStructuralVirtualCall<undefined4>(this_00, 0x2C), iVar7 != 0xa6 &&
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
                          iVar14 = (short)(((short)((int)local_18 / 200) + sVar3) -
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
                          iVar8 = (short)((sVar3 / 200 + (sVar3 >> 0xf)) -
                                              (short)((longlong)(int)local_30 * 0x51eb851f >> 0x3f));
                        }
                        sVar3 = local_10->field_026A;
                        local_34 = (int)sVar3;
                        if (sVar3 < 0) {
                          iVar12 = (short)((sVar3 / 0xc9 + (sVar3 >> 0xf)) -
                                          (short)((longlong)local_34 * 0x28c1979 >> 0x3f)) + -1;
                        }
                        else {
                          iVar12 = (short)((sVar3 / 0xc9 + (sVar3 >> 0xf)) -
                                               (short)((longlong)local_34 * 0x28c1979 >> 0x3f));
                        }
                        sVar3 = local_10->field_0268;
                        local_38 = (int)sVar3;
                        if (sVar3 < 0) {
                          iVar5 = (short)((sVar3 / 0xc9 + (sVar3 >> 0xf)) -
                                         (short)((longlong)local_38 * 0x28c1979 >> 0x3f)) + -1;
                        }
                        else {
                          iVar5 = (short)((sVar3 / 0xc9 + (sVar3 >> 0xf)) -
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
                              local_2c = (short)(((short)((int)local_18 / 200) + sVar3) -
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
                                      (short)(((short)((int)local_18 / 200) + sVar3) -
                                                  (short)((longlong)(int)local_18 * 0x51eb851f >>
                                                         0x3f));
                          }
                          iVar6 = STBiasedDiv16(iVar14, 0xc9); /* exact signed 16-bit grid-index division */
                          iVar4 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
                          if (STGridAt3D(g_pathingGrid, iVar4, iVar6, param_1) < 0) {
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
                        iVar14 = STStructuralVirtualCall<undefined4>((STWorldObject *)this_00, 0xDC, local_20, local_14, local_18, CONCAT22(uVar9,local_10->field_024B), CONCAT22(uVar9,local_10->field_024D), CONCAT22(uVar9,local_10->field_024F));
                        pRVar1 = local_10;
                        if (-1 < iVar14) {
                          *param_1 = 1;
                          iVar6 = local_10->field_0259;
                          if (((((iVar6 == 0x9c) || (iVar6 == 0x9d)) || (iVar6 == 0x9e)) ||
                              (iVar6 == 0x9b)) &&
                             (((local_10->field_0285 == '\0' &&
                               /* ST_CALLSITE[00644D02]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
                               (bVar2 = LookupRecordByte((char)this_00->field_0024), bVar2 != 3)

                               ) && (iVar6 = thunk_FUN_004e60d0(this_00->field_0024,0x1b),
                                    iVar6 != 0)))) {
                            /* ST_CALLSITE[00644D35]: CALL dword ptr [EAX + 0xe0]; [STIndirectCallsiteApplier] exact slot 0xE0; mode=machine-void; signature=__thiscall;/void;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
                            STStructuralVirtualCall<void>((STWorldObject *)this_00, 0xE0, iVar14, &local_6, &local_8, &local_a, local_48);
                            *param_2 = (int)local_6;
                            *param_3 = (int)local_8;
                            *param_4 = (int)local_a;
                            /* ST_CALLSITE[00644D63]: CALL 0x00401159; direct=00401159 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00644410::sub_00645F10 */
                            sub_00645F10(pRVar1,this_00,(ushort)*param_2,(ushort)*param_3,local_a);
                            pRVar1->field_0285 = 2;
                          }
                          pRVar1->field_0270 = 1;
                          pRVar1->field_0274 = *(undefined4 *)&this_00->field_0x18;
                          pRVar1->field_0278 = iVar14;
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
                  this = local_10;
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

