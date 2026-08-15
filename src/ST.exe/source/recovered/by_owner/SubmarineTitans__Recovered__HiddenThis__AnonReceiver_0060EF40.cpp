#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SubmarineTitans__Recovered__HiddenThis__AnonReceiver_0060EF40.cpp

// 0060EF40 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0060EF40::FUN_0060ef40
#line 4 "decomp/ST.exe/functions/0060EF40/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0060EF40.
   Evidence: incoming_receiver_captures=1; receiver_accesses=47; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=8; adopt_untyped_existing_thiscall;
   single_call_corroborated_by_receiver_family */

int __thiscall
st::fn_0060EF40
          (AnonReceiver_0060EF40 *this,int param_1)

{
  alignas(4) byte st_stack_frame[212];

  undefined1 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar1;
  void *pvVar4;
  undefined4 uVar5;
  short sVar6;
  short sVar8;
  undefined1 *puVar9;
  STWorldObject *pSVar11;
  short sVar12;
  int iVar13;
  uint uVar14;
  byte *puVar15;
  int iVar16;
  int local_b8 [2];
  int local_b0;
  int local_a8;
  int local_9c;
  int local_98;
  int local_94;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_74;
  undefined4 local_70;
  short *local_6c;
  int local_68 [2];
  short local_60 [6];
  undefined1 *local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  undefined4 *puVar10;

  local_8 = 0xffffffff;
  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_0079ce98);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 8);
  sVar12 = *(short *)&this->field_0x215;
  sVar8 = *(short *)&this->field_0x217;
  local_40 = (int)*(short *)&this->field_0x219;
  ExceptionList = &local_14;
  local_2c = (int)sVar8;
  local_20 = (int)sVar12;
  st::fn_0040156E((int)*(short *)&this->field_0x1f5,st::pointer_boundary_cast<undefined4 *>(local_b8),st::pointer_boundary_cast<undefined4 *>(&local_74),0,nullptr);
  local_3c = sVar12 + local_b8[0];
  local_48 = sVar8 + local_74;
  sVar12 = *(short *)&this->field_0x1ef;
  local_80 = STBiasedDiv16(sVar12, 0xc9); /* exact signed 16-bit grid-index division */
  sVar12 = *(short *)&this->field_0x1f1;
  local_b0 = STBiasedDiv16(sVar12, 0xc9); /* exact signed 16-bit grid-index division */
  sVar12 = *(short *)&this->field_0x1f3;
  local_34 = STBiasedDiv16(sVar12, 200); /* exact signed 16-bit grid-index division */
  local_38 = local_48 - param_1;
  local_24 = local_3c - param_1;
  local_94 = local_48 + 1 + param_1;
  local_84 = local_3c + 1 + param_1;
  if (local_48 - param_1 < 0) {
    local_38 = 0;
  }
  if (local_3c - param_1 < 0) {
    local_24 = 0;
  }
  iVar3 = local_24;
  iVar13 = (int)g_worldGrid.sizeY;
  if (iVar13 < local_94) {
    local_94 = iVar13;
  }
  iVar13 = (int)g_worldGrid.sizeX;
  if (iVar13 < local_84) {
    local_84 = iVar13;
  }
  local_9c = local_84 - local_24;
  local_8c = (local_94 - local_38) * (local_84 - local_24);
  uVar14 = local_8c * 10;
  iVar13 = -(uVar14 + 3 & 0xfffffffc);
  puVar9 = (st_stack_frame + 8) + iVar13;
  local_1c = (st_stack_frame + 8) + iVar13;
  local_54 = (st_stack_frame + 8) + iVar13;
  puVar15 = (byte *)((st_stack_frame + 8) + iVar13);
  memset(puVar15, 0, uVar14); /* compiler bulk-zero initialization */
  local_8 = 0xffffffff;
  local_4c = 0;
  do {
    iVar13 = local_4c * local_8c;
    local_a8 = iVar13;
    local_50 = local_38;
    if (local_38 < local_94) {
      do {
        local_98 = (local_50 - local_38) * local_9c + iVar13;
        iVar16 = iVar3;
        if (iVar3 < local_84) {
          do {
            local_88 = (iVar16 - iVar3) + local_98;
            sVar12 = (short)iVar16;
            if ((((sVar12 < 0) || (g_worldGrid.sizeX <= sVar12)) ||
                (sVar8 = (short)local_50, sVar8 < 0)) ||
               (((g_worldGrid.sizeY <= sVar8 || (sVar6 = (short)local_4c, sVar6 < 0)) ||
                (g_worldGrid.sizeZ <= sVar6)))) {
              pSVar11 = nullptr;
            }
            else {
              pSVar11 = STGridAt3D(g_worldGrid, sVar12, sVar8, sVar6).objects[0];
            }
            if (pSVar11 == nullptr) {
LAB_0060f21b:
              iVar3 = local_50;
              *(int *)(puVar9 + -4) = local_4c;
              *(int *)(puVar9 + -8) = iVar3;
              *(int *)(puVar9 + -0xc) = iVar16;
              *(undefined4 *)(puVar9 + -0x10) = 0x60f22c;
              iVar1 = st::fn_00404D3B(*(short *)(puVar9 + -0xc),*(short *)(puVar9 + -8),
                                         *(short *)(puVar9 + -4));
              if (iVar1 == 0) {
LAB_0060f230:
                *(undefined2 *)(local_54 + local_88 * 2) = 0xbfff;
              }
            }
            else {
              pcVar2 = st::pointer_boundary_cast<code *>(pSVar11->vtable[5].slots_00_28[2]);
              puVar10 = (undefined4 *)(puVar9 + -4);
              puVar9 = puVar9 + -4;
              *puVar10 = 0x60f1e8;
              iVar3 = (*pcVar2)();
              if (((iVar3 == 0) || ((STWorldObjectVTable *)0x7 < pSVar11[1].vtable)) ||
                 ((g_playSystem_00802A38 != nullptr &&
                  (7 < g_bulkInitializedRecords_008087C7[(int)pSVar11[1].vtable].field_0022))))
              goto LAB_0060f21b;
              if (*(int *)&this->field_0x2d1 != *(int *)&pSVar11->field_0x18) goto LAB_0060f230;
            }
            iVar16 = iVar16 + 1;
            iVar13 = local_a8;
            iVar3 = local_24;
          } while (iVar16 < local_84);
        }
        local_50 = local_50 + 1;
      } while (local_50 < local_94);
    }
    local_4c = local_4c + 1;
  } while (local_4c < 5);
  *(short **)(puVar9 + -4) = local_60;
  *(undefined4 *)(puVar9 + -8) = 1;
  *(undefined4 *)(puVar9 + -0xc) = 0;
  *(undefined4 *)(puVar9 + -0x10) = 0;
  *(int *)(puVar9 + -0x14) = (int)*(short *)&this->field_0x1f5;
  *(undefined4 *)(puVar9 + -0x18) = 0x60f28e;
  st::fn_0040156E(*(Global_sub_00615BB0_param_1Enum *)(puVar9 + -0x14),
                     *(undefined4 **)(puVar9 + -0x10),*(undefined4 **)(puVar9 + -0xc),
                     *(int *)(puVar9 + -8),*(undefined2 **)(puVar9 + -4));
  iVar13 = 0;
  do {
    if ((((-1 < local_20 + local_60[iVar13 * 2]) && (-1 < local_60[iVar13 * 2 + 1] + local_2c)) &&
        (local_20 + local_60[iVar13 * 2] < (int)g_worldGrid.sizeX)) &&
       (local_60[iVar13 * 2 + 1] + local_2c < (int)g_worldGrid.sizeY)) {
      local_4c = local_40 + -1;
      if (local_4c <= local_40 + 1) {
        do {
          if ((-1 < local_4c) && (local_4c < 5)) {
            local_b8[0] = st::machine_word_boundary_cast<int>(local_60[iVar13 * 2] + local_20);
            local_74 = st::machine_word_boundary_cast<int>(local_60[iVar13 * 2 + 1] + local_2c);
            *(undefined2 *)
             (local_54 +
             (((((local_60[iVar13 * 2 + 1] + local_2c) - local_38) * local_9c + local_4c * local_8c)
              - iVar3) + local_60[iVar13 * 2] + local_20) * 2) = 0xbfff;
          }
          local_4c = local_4c + 1;
        } while (local_4c <= local_40 + 1);
      }
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 3);
  *(undefined4 *)(puVar9 + -4) = 2;
  *(int **)(puVar9 + -8) = local_68;
  *(int *)(puVar9 + -0xc) = local_34;
  iVar13 = local_38;
  *(int *)(puVar9 + -0x10) = local_b0 - local_38;
  *(int *)(puVar9 + -0x14) = local_80 - iVar3;
  *(int *)(puVar9 + -0x18) = local_40;
  *(int *)(puVar9 + -0x1c) = local_48 - iVar13;
  *(int *)(puVar9 + -0x20) = local_3c - iVar3;
  *(undefined4 *)(puVar9 + -0x24) = 5;
  *(int *)(puVar9 + -0x28) = local_94 - iVar13;
  *(int *)(puVar9 + -0x2c) = local_84 - iVar3;
  *(undefined1 **)(puVar9 + -0x30) = local_54;
  *(undefined4 *)(puVar9 + -0x34) = 0x60f37c;
  local_6c = st::fn_006AFBA0
                       (*(int *)(puVar9 + -0x30),*(int *)(puVar9 + -0x2c),
                        *(short **)(puVar9 + -0x28),*(short **)(puVar9 + -0x24),
                        *(short **)(puVar9 + -0x20),*(short **)(puVar9 + -0x1c),
                        *(short **)(puVar9 + -0x18),*(short **)(puVar9 + -0x14),
                        *(short **)(puVar9 + -0x10),*(short **)(puVar9 + -0xc),
                        *(int **)(puVar9 + -8),puVar9[-4]);
  if (local_6c == nullptr) {
    local_68[0] = 0;
  }
  else {
    puVar1 = st::pointer_boundary_cast<undefined1 *>(&this->field_0x2dd);
    if (*(int *)puVar1 == 0) {
      *(int *)(puVar9 + -4) = (local_68[0] + 1) * 0x1c;
      *(undefined4 *)(puVar9 + -8) = 0x60f3ca;
      pvVar4 = st::fn_006AAC70(*(uint *)(puVar9 + -4));
      *(void **)puVar1 = pvVar4;
    }
    else {
      if (*(int *)&this->field_0x2d5 <= local_68[0]) {
        *(undefined1 **)(puVar9 + -4) = puVar1;
        *(undefined4 *)(puVar9 + -8) = 0x60f3a3;
        st::fn_006AB060(*(void **)(puVar9 + -4));
      }
      *(undefined4 *)&this->field_0x2d5 = 0;
    }
    iVar3 = 1;
    if (1 < local_68[0]) {
      do {
        iVar13 = iVar3 * 0x1c;
        *(short *)(*(int *)puVar1 + iVar13) = local_6c[iVar3 * 4 + -4] + (short)local_24;
        *(short *)(*(int *)puVar1 + 2 + iVar13) = local_6c[iVar3 * 4 + -3] + (short)local_38;
        *(short *)(*(int *)puVar1 + 4 + iVar13) = local_6c[iVar3 * 4 + -2];
        *(undefined2 *)(*(int *)puVar1 + 6 + iVar13) =
             *(undefined2 *)
              (PTR_DAT_007ed56c +
              ((((((int)local_6c[iVar3 * 4 + 2] - (int)local_6c[iVar3 * 4 + -2]) * 3 -
                 (int)local_6c[iVar3 * 4 + -3]) + (int)local_6c[iVar3 * 4 + 1]) * 3 -
               (int)local_6c[iVar3 * 4 + -4]) + (int)local_6c[iVar3 * 4]) * 4);
        *(int *)(*(int *)puVar1 + iVar13 + 8) =
             (*(int *)(&DAT_007cfe74 + *(short *)(*(int *)puVar1 + iVar13 + 6) * 4) * 0xc9) / 1000;
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_68[0]);
    }
    iVar3 = st::machine_word_boundary_cast<int>(local_68[0] * 0x1c);
    *(short *)(*(int *)puVar1 + iVar3) = local_6c[local_68[0] * 4 + -4] + (short)local_24;
    *(short *)(*(int *)puVar1 + 2 + iVar3) = local_6c[local_68[0] * 4 + -3] + (short)local_38;
    *(short *)(*(int *)puVar1 + 4 + iVar3) = local_6c[local_68[0] * 4 + -2];
    *(undefined2 *)(iVar3 + *(int *)puVar1 + 6) = *(undefined2 *)(iVar3 + *(int *)puVar1 + -0x16);
    *(int *)&this->field_0x2d5 = st::machine_word_boundary_cast<int>(local_68[0] + 1);
    local_7c = 1;
    if (1 < local_68[0] + -1) {
      do {
        iVar13 = local_7c * 0x1c;
        iVar3 = *(int *)puVar1 + iVar13;
        *(undefined4 *)(puVar9 + -4) = 0;
        *(undefined4 *)(puVar9 + -8) = 0;
        *(undefined4 *)(puVar9 + -0xc) = 0;
        *(undefined4 *)(puVar9 + -0x10) = 0;
        *(undefined4 *)(puVar9 + -0x14) = 0;
        *(undefined4 *)(puVar9 + -0x18) = 0;
        *(undefined4 *)(puVar9 + -0x1c) = 0;
        *(undefined4 *)(puVar9 + -0x20) = 0;
        *(undefined4 *)(puVar9 + -0x24) = 0;
        *(undefined4 *)(puVar9 + -0x28) = 0;
        *(undefined4 *)(puVar9 + -0x2c) = 0;
        *(undefined4 *)(puVar9 + -0x30) = 1;
        *(int *)(puVar9 + -0x34) = iVar3;
        *(int *)(puVar9 + -0x38) = (int)*(short *)(iVar3 + 0x22);
        *(int *)(puVar9 + -0x3c) = (int)*(short *)(iVar3 + 6);
        *(undefined4 *)(puVar9 + -0x40) = 0x60f549;
        uVar5 = st::fn_00402EFF(*(int *)(puVar9 + -0x3c),*(int *)(puVar9 + -0x38),
                                   *(AnonShape_0060F940_1CCED7C8 **)(puVar9 + -0x34),
                                   *(int *)(puVar9 + -0x30),*(int *)(puVar9 + -0x2c),
                                   *(int *)(puVar9 + -0x28),*(int *)(puVar9 + -0x24),
                                   *(int *)(puVar9 + -0x20),*(int *)(puVar9 + -0x1c),
                                   *(int *)(puVar9 + -0x18),*(int *)(puVar9 + -0x14),
                                   *(int *)(puVar9 + -0x10),*(int *)(puVar9 + -0xc),
                                   *(int **)(puVar9 + -8),*(int **)(puVar9 + -4));
        *(undefined4 *)(*(int *)puVar1 + 0x18 + iVar13) = uVar5;
        if (*(int *)(*(int *)puVar1 + 0x18 + iVar13) < 0) {
          local_68[0] = -1;
          break;
        }
        local_7c = local_7c + 1;
      } while (local_7c < local_68[0] + -1);
    }
    if (1 < local_68[0]) {
      **(undefined2 **)puVar1 = (short)local_20;
      *(short *)(*(int *)puVar1 + 2) = (short)local_2c;
      *(undefined2 *)(*(int *)puVar1 + 4) = (undefined2)local_40;
      *(undefined2 *)(*(int *)puVar1 + 6) =
           *(undefined2 *)
            (PTR_DAT_007ed56c + (((local_48 - local_2c) * 3 - local_20) + local_3c) * 4);
      *(int *)(*(int *)puVar1 + 8) =
           (*(int *)(&DAT_007cfe74 + *(short *)(*(int *)puVar1 + 6) * 4) * 0xc9) / 1000;
      iVar3 = *(int *)puVar1;
      *(undefined4 *)(puVar9 + -4) = 0;
      *(undefined4 *)(puVar9 + -8) = 0;
      *(undefined4 *)(puVar9 + -0xc) = 0;
      *(undefined4 *)(puVar9 + -0x10) = 0;
      *(undefined4 *)(puVar9 + -0x14) = 0;
      *(undefined4 *)(puVar9 + -0x18) = 0;
      *(undefined4 *)(puVar9 + -0x1c) = 0;
      *(undefined4 *)(puVar9 + -0x20) = 0;
      *(undefined4 *)(puVar9 + -0x24) = 0;
      *(undefined4 *)(puVar9 + -0x28) = 0;
      *(undefined4 *)(puVar9 + -0x2c) = 0;
      *(undefined4 *)(puVar9 + -0x30) = 1;
      *(int *)(puVar9 + -0x34) = iVar3;
      *(int *)(puVar9 + -0x38) = (int)*(short *)(iVar3 + 0x22);
      *(int *)(puVar9 + -0x3c) = (int)*(short *)(iVar3 + 6);
      *(undefined4 *)(puVar9 + -0x40) = 0x60f609;
      uVar5 = st::fn_00402EFF(*(int *)(puVar9 + -0x3c),*(int *)(puVar9 + -0x38),
                                 *(AnonShape_0060F940_1CCED7C8 **)(puVar9 + -0x34),
                                 *(int *)(puVar9 + -0x30),*(int *)(puVar9 + -0x2c),
                                 *(int *)(puVar9 + -0x28),*(int *)(puVar9 + -0x24),
                                 *(int *)(puVar9 + -0x20),*(int *)(puVar9 + -0x1c),
                                 *(int *)(puVar9 + -0x18),*(int *)(puVar9 + -0x14),
                                 *(int *)(puVar9 + -0x10),*(int *)(puVar9 + -0xc),
                                 *(int **)(puVar9 + -8),*(int **)(puVar9 + -4));
      *(undefined4 *)(*(int *)puVar1 + 0x18) = uVar5;
      **(undefined2 **)puVar1 = *(undefined2 *)&this->field_0x1e9;
      *(undefined2 *)(*(int *)puVar1 + 2) = *(undefined2 *)&this->field_0x1eb;
      *(undefined2 *)(*(int *)puVar1 + 4) = *(undefined2 *)&this->field_0x1ed;
      *(undefined4 **)(puVar9 + -4) = &local_70;
      *(undefined4 **)(puVar9 + -8) = &local_44;
      *(undefined4 **)(puVar9 + -0xc) = &local_30;
      *(int *)(puVar9 + -0x10) = (int)*(short *)&this->field_0x1f5;
      *(undefined4 *)(puVar9 + -0x14) = 0x60f64f;
      st::fn_004047AF(*(int *)(puVar9 + -0x10),*(int **)(puVar9 + -0xc),*(int **)(puVar9 + -8),
                         *(int **)(puVar9 + -4));
      iVar3 = *(int *)puVar1;
      *(int *)(puVar9 + -4) =
           (int)*(short *)&this->field_0x1f3 % 200 + *(short *)(iVar3 + 0x20) * 200;
      *(int *)(puVar9 + -8) =
           *(short *)(iVar3 + 0x1e) * 0xc9 + (int)*(short *)&this->field_0x1f1 % 0xc9;
      *(int *)(puVar9 + -0xc) =
           *(short *)(iVar3 + 0x1c) * 0xc9 + (int)*(short *)&this->field_0x1ef % 0xc9;
      *(undefined4 *)(puVar9 + -0x10) = local_70;
      *(undefined4 *)(puVar9 + -0x14) = local_44;
      *(undefined4 *)(puVar9 + -0x18) = local_30;
      *(int *)(puVar9 + -0x1c) = (int)*(short *)&this->field_0x1ed;
      *(int *)(puVar9 + -0x20) = (int)*(short *)&this->field_0x1eb;
      *(int *)(puVar9 + -0x24) = (int)*(short *)&this->field_0x1e9;
      *(undefined4 *)(puVar9 + -0x28) = 0x60f6d4;
      st::fn_004037FB(this,*(int *)(puVar9 + -0x24),*(int *)(puVar9 + -0x20),
                         *(int *)(puVar9 + -0x1c),*(int *)(puVar9 + -0x18),*(int *)(puVar9 + -0x14),
                         *(int *)(puVar9 + -0x10),*(int *)(puVar9 + -0xc),*(int *)(puVar9 + -8),
                         *(int *)(puVar9 + -4));
    }
  }
  if (local_6c != nullptr) {
    *(short ***)(puVar9 + -4) = &local_6c;
    *(undefined4 *)(puVar9 + -8) = 0x60f6ee;
    st::fn_006AB060(*(void **)(puVar9 + -4));
  }
  ExceptionList = local_14;
  return local_68[0];
}

