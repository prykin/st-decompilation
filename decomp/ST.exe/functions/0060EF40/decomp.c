#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0060EF40.
   Evidence: incoming_receiver_captures=1; receiver_accesses=47; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=8; adopt_untyped_existing_thiscall;
   single_call_corroborated_by_receiver_family */

int __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0060EF40::FUN_0060ef40
          (AnonReceiver_0060EF40 *this,int param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar1;
  void *pvVar4;
  undefined4 uVar5;
  short sVar6;
  int iVar8;
  short sVar9;
  STWorldObject *this_00;
  short sVar10;
  int iVar11;
  uint uVar12;
  byte *puVar13;
  int iVar14;
  int aiStackY_108 [11];
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

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079ce98;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff38;
  sVar10 = *(short *)&this->field_0x215;
  sVar9 = *(short *)&this->field_0x217;
  local_40 = (int)*(short *)&this->field_0x219;
  aiStackY_108[10] = 0x60efad;
  ExceptionList = &local_14;
  local_2c = (int)sVar9;
  local_20 = (int)sVar10;
  thunk_FUN_00615bb0((int)*(short *)&this->field_0x1f5,local_b8,&local_74,0,nullptr);
  local_3c = sVar10 + local_b8[0];
  local_48 = sVar9 + local_74;
  sVar10 = *(short *)&this->field_0x1ef;
  local_80 = STBiasedDiv16(sVar10, 0xc9); /* exact signed 16-bit grid-index division */
  sVar10 = *(short *)&this->field_0x1f1;
  local_b0 = STBiasedDiv16(sVar10, 0xc9); /* exact signed 16-bit grid-index division */
  sVar10 = *(short *)&this->field_0x1f3;
  local_34 = STBiasedDiv16(sVar10, 200); /* exact signed 16-bit grid-index division */
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
  iVar11 = (int)g_worldGrid.sizeY;
  if (iVar11 < local_94) {
    local_94 = iVar11;
  }
  iVar11 = (int)g_worldGrid.sizeX;
  if (iVar11 < local_84) {
    local_84 = iVar11;
  }
  local_9c = local_84 - local_24;
  local_8c = (local_94 - local_38) * (local_84 - local_24);
  uVar12 = local_8c * 10;
  iVar11 = -(uVar12 + 3 & 0xfffffffc);
  local_1c = &stack0xffffff38 + iVar11;
  local_54 = &stack0xffffff38 + iVar11;
  puVar13 = (byte *)(&stack0xffffff38 + iVar11);
  memset(puVar13, 0, uVar12); /* compiler bulk-zero initialization */
  local_8 = 0xffffffff;
  local_4c = 0;
  do {
    iVar8 = local_4c * local_8c;
    local_a8 = iVar8;
    local_50 = local_38;
    if (local_38 < local_94) {
      do {
        local_98 = (local_50 - local_38) * local_9c + iVar8;
        iVar14 = iVar3;
        if (iVar3 < local_84) {
          do {
            local_88 = (iVar14 - iVar3) + local_98;
            sVar10 = (short)iVar14;
            if ((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                (sVar9 = (short)local_50, sVar9 < 0)) ||
               (((g_worldGrid.sizeY <= sVar9 || (sVar6 = (short)local_4c, sVar6 < 0)) ||
                (g_worldGrid.sizeZ <= sVar6)))) {
              this_00 = nullptr;
            }
            else {
              this_00 = STGridAt3D(g_worldGrid, sVar10, sVar9, sVar6).objects[0];
            }
            if (this_00 == nullptr) {
LAB_0060f21b:
              iVar3 = local_50;
              *(int *)(&stack0xffffff34 + iVar11) = local_4c;
              *(int *)(&stack0xffffff30 + iVar11) = iVar3;
              *(int *)((int)local_b8 + iVar11 + -0x1c) = iVar14;
              *(undefined4 *)((int)local_b8 + iVar11 + -0x20) = 0x60f22c;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              iVar1 = thunk_FUN_004961b0(*(short *)((int)local_b8 + iVar11 + -0x1c),
                                         *(short *)(&stack0xffffff30 + iVar11),
                                         *(short *)(&stack0xffffff34 + iVar11));
              if (iVar1 == 0) {
LAB_0060f230:
                *(undefined2 *)(local_54 + local_88 * 2) = 0xbfff;
              }
            }
            else {
              pcVar2 = this_00->vtable[5].slots_00_28[2];
              *(undefined4 *)(&stack0xffffff34 + iVar11) = 0x60f1e8;
              iVar3 = (*pcVar2)(this_00);
              if (((iVar3 == 0) || ((STWorldObjectVTable *)0x7 < this_00[1].vtable)) ||
                 ((g_playSystem_00802A38 != nullptr &&
                  (7 < g_bulkInitializedRecords_008087C7[(int)this_00[1].vtable].field_0022))))
              goto LAB_0060f21b;
              if (*(int *)&this->field_0x2d1 != *(int *)&this_00->field_0x18) goto LAB_0060f230;
            }
            iVar14 = iVar14 + 1;
            iVar8 = local_a8;
            iVar3 = local_24;
          } while (iVar14 < local_84);
        }
        local_50 = local_50 + 1;
      } while (local_50 < local_94);
    }
    local_4c = local_4c + 1;
  } while (local_4c < 5);
  *(short **)(&stack0xffffff34 + iVar11) = local_60;
  *(undefined4 *)(&stack0xffffff30 + iVar11) = 1;
  *(undefined4 *)((int)local_b8 + iVar11 + -0x1c) = 0;
  *(undefined4 *)((int)local_b8 + iVar11 + -0x20) = 0;
  *(int *)(&stack0xffffff24 + iVar11) = (int)*(short *)&this->field_0x1f5;
  *(undefined4 *)((int)aiStackY_108 + iVar11 + 0x28) = 0x60f28e;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  thunk_FUN_00615bb0(*(Global_sub_00615BB0_param_1Enum *)(&stack0xffffff24 + iVar11),
                     *(undefined4 **)((int)local_b8 + iVar11 + -0x20),
                     *(undefined4 **)((int)local_b8 + iVar11 + -0x1c),
                     *(int *)(&stack0xffffff30 + iVar11),*(undefined2 **)(&stack0xffffff34 + iVar11)
                    );
  iVar8 = 0;
  do {
    if ((((-1 < local_20 + local_60[iVar8 * 2]) && (-1 < local_60[iVar8 * 2 + 1] + local_2c)) &&
        (local_20 + local_60[iVar8 * 2] < (int)g_worldGrid.sizeX)) &&
       (local_60[iVar8 * 2 + 1] + local_2c < (int)g_worldGrid.sizeY)) {
      local_4c = local_40 + -1;
      if (local_4c <= local_40 + 1) {
        do {
          if ((-1 < local_4c) && (local_4c < 5)) {
            local_b8[0] = local_60[iVar8 * 2] + local_20;
            local_74 = local_60[iVar8 * 2 + 1] + local_2c;
            *(undefined2 *)
             (local_54 +
             (((((local_60[iVar8 * 2 + 1] + local_2c) - local_38) * local_9c + local_4c * local_8c)
              - iVar3) + local_60[iVar8 * 2] + local_20) * 2) = 0xbfff;
          }
          local_4c = local_4c + 1;
        } while (local_4c <= local_40 + 1);
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  *(undefined4 *)(&stack0xffffff34 + iVar11) = 2;
  *(int **)(&stack0xffffff30 + iVar11) = local_68;
  *(int *)((int)local_b8 + iVar11 + -0x1c) = local_34;
  iVar8 = local_38;
  *(int *)((int)local_b8 + iVar11 + -0x20) = local_b0 - local_38;
  *(int *)(&stack0xffffff24 + iVar11) = local_80 - iVar3;
  *(int *)((int)aiStackY_108 + iVar11 + 0x28) = local_40;
  *(int *)((int)aiStackY_108 + iVar11 + 0x24) = local_48 - iVar8;
  *(int *)((int)aiStackY_108 + iVar11 + 0x20) = local_3c - iVar3;
  *(undefined4 *)((int)aiStackY_108 + iVar11 + 0x1c) = 5;
  *(int *)((int)aiStackY_108 + iVar11 + 0x18) = local_94 - iVar8;
  *(int *)((int)aiStackY_108 + iVar11 + 0x14) = local_84 - iVar3;
  *(undefined1 **)((int)aiStackY_108 + iVar11 + 0x10) = local_54;
  *(undefined4 *)((int)aiStackY_108 + iVar11 + 0xc) = 0x60f37c;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_6c = Library::DKW::WAY::FUN_006afba0
                       (*(int *)((int)aiStackY_108 + iVar11 + 0x10),
                        *(int *)((int)aiStackY_108 + iVar11 + 0x14),
                        *(short **)((int)aiStackY_108 + iVar11 + 0x18),
                        *(short **)((int)aiStackY_108 + iVar11 + 0x1c),
                        *(short **)((int)aiStackY_108 + iVar11 + 0x20),
                        *(short **)((int)aiStackY_108 + iVar11 + 0x24),
                        *(short **)((int)aiStackY_108 + iVar11 + 0x28),
                        *(short **)(&stack0xffffff24 + iVar11),
                        *(short **)((int)local_b8 + iVar11 + -0x20),
                        *(short **)((int)local_b8 + iVar11 + -0x1c),
                        *(int **)(&stack0xffffff30 + iVar11),(&stack0xffffff34)[iVar11]);
  if (local_6c == nullptr) {
    local_68[0] = 0;
  }
  else {
    puVar1 = &this->field_0x2dd;
    if (*(int *)puVar1 == 0) {
      *(int *)(&stack0xffffff34 + iVar11) = (local_68[0] + 1) * 0x1c;
      *(undefined4 *)(&stack0xffffff30 + iVar11) = 0x60f3ca;
      pvVar4 = Library::DKW::LIB::MemAlloc(*(uint *)(&stack0xffffff34 + iVar11));
      *(void **)puVar1 = pvVar4;
    }
    else {
      if (*(int *)&this->field_0x2d5 <= local_68[0]) {
        *(undefined1 **)(&stack0xffffff34 + iVar11) = puVar1;
        *(undefined4 *)(&stack0xffffff30 + iVar11) = 0x60f3a3;
        FreeAndNull(*(void **)(&stack0xffffff34 + iVar11));
      }
      *(undefined4 *)&this->field_0x2d5 = 0;
    }
    iVar3 = 1;
    if (1 < local_68[0]) {
      do {
        iVar8 = iVar3 * 0x1c;
        *(short *)(*(int *)puVar1 + iVar8) = local_6c[iVar3 * 4 + -4] + (short)local_24;
        *(short *)(*(int *)puVar1 + 2 + iVar8) = local_6c[iVar3 * 4 + -3] + (short)local_38;
        *(short *)(*(int *)puVar1 + 4 + iVar8) = local_6c[iVar3 * 4 + -2];
        *(undefined2 *)(*(int *)puVar1 + 6 + iVar8) =
             *(undefined2 *)
              (PTR_DAT_007ed56c +
              ((((((int)local_6c[iVar3 * 4 + 2] - (int)local_6c[iVar3 * 4 + -2]) * 3 -
                 (int)local_6c[iVar3 * 4 + -3]) + (int)local_6c[iVar3 * 4 + 1]) * 3 -
               (int)local_6c[iVar3 * 4 + -4]) + (int)local_6c[iVar3 * 4]) * 4);
        *(int *)(*(int *)puVar1 + iVar8 + 8) =
             (*(int *)(&DAT_007cfe74 + *(short *)(*(int *)puVar1 + iVar8 + 6) * 4) * 0xc9) / 1000;
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_68[0]);
    }
    iVar3 = local_68[0] * 0x1c;
    *(short *)(*(int *)puVar1 + iVar3) = local_6c[local_68[0] * 4 + -4] + (short)local_24;
    *(short *)(*(int *)puVar1 + 2 + iVar3) = local_6c[local_68[0] * 4 + -3] + (short)local_38;
    *(short *)(*(int *)puVar1 + 4 + iVar3) = local_6c[local_68[0] * 4 + -2];
    *(undefined2 *)(iVar3 + *(int *)puVar1 + 6) = *(undefined2 *)(iVar3 + *(int *)puVar1 + -0x16);
    *(int *)&this->field_0x2d5 = local_68[0] + 1;
    local_7c = 1;
    if (1 < local_68[0] + -1) {
      do {
        iVar8 = local_7c * 0x1c;
        iVar3 = *(int *)puVar1 + iVar8;
        *(undefined4 *)(&stack0xffffff34 + iVar11) = 0;
        *(undefined4 *)(&stack0xffffff30 + iVar11) = 0;
        *(undefined4 *)((int)local_b8 + iVar11 + -0x1c) = 0;
        *(undefined4 *)((int)local_b8 + iVar11 + -0x20) = 0;
        *(undefined4 *)(&stack0xffffff24 + iVar11) = 0;
        *(undefined4 *)((int)aiStackY_108 + iVar11 + 0x28) = 0;
        *(undefined4 *)((int)aiStackY_108 + iVar11 + 0x24) = 0;
        *(undefined4 *)((int)aiStackY_108 + iVar11 + 0x20) = 0;
        *(undefined4 *)((int)aiStackY_108 + iVar11 + 0x1c) = 0;
        *(undefined4 *)((int)aiStackY_108 + iVar11 + 0x18) = 0;
        *(undefined4 *)((int)aiStackY_108 + iVar11 + 0x14) = 0;
        *(undefined4 *)((int)aiStackY_108 + iVar11 + 0x10) = 1;
        *(int *)((int)aiStackY_108 + iVar11 + 0xc) = iVar3;
        *(int *)((int)aiStackY_108 + iVar11 + 8) = (int)*(short *)(iVar3 + 0x22);
        *(int *)((int)aiStackY_108 + iVar11 + 4) = (int)*(short *)(iVar3 + 6);
        *(undefined4 *)((int)aiStackY_108 + iVar11) = 0x60f549;
        uVar5 = thunk_FUN_0060f940(*(int *)((int)aiStackY_108 + iVar11 + 4),
                                   *(int *)((int)aiStackY_108 + iVar11 + 8),
                                   *(AnonShape_0060F940_1CCED7C8 **)
                                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                                    ((int)aiStackY_108 + iVar11 + 0xc),
                                   *(int *)((int)aiStackY_108 + iVar11 + 0x10),
                                   *(int *)((int)aiStackY_108 + iVar11 + 0x14),
                                   *(int *)((int)aiStackY_108 + iVar11 + 0x18),
                                   *(int *)((int)aiStackY_108 + iVar11 + 0x1c),
                                   *(int *)((int)aiStackY_108 + iVar11 + 0x20),
                                   *(int *)((int)aiStackY_108 + iVar11 + 0x24),
                                   *(int *)((int)aiStackY_108 + iVar11 + 0x28),
                                   *(int *)(&stack0xffffff24 + iVar11),
                                   *(int *)((int)local_b8 + iVar11 + -0x20),
                                   *(int *)((int)local_b8 + iVar11 + -0x1c),
                                   *(int **)(&stack0xffffff30 + iVar11),
                                   *(int **)(&stack0xffffff34 + iVar11));
        *(undefined4 *)(*(int *)puVar1 + 0x18 + iVar8) = uVar5;
        if (*(int *)(*(int *)puVar1 + 0x18 + iVar8) < 0) {
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
      *(undefined4 *)(&stack0xffffff34 + iVar11) = 0;
      *(undefined4 *)(&stack0xffffff30 + iVar11) = 0;
      *(undefined4 *)((int)local_b8 + iVar11 + -0x1c) = 0;
      *(undefined4 *)((int)local_b8 + iVar11 + -0x20) = 0;
      *(undefined4 *)(&stack0xffffff24 + iVar11) = 0;
      *(undefined4 *)((int)aiStackY_108 + iVar11 + 0x28) = 0;
      *(undefined4 *)((int)aiStackY_108 + iVar11 + 0x24) = 0;
      *(undefined4 *)((int)aiStackY_108 + iVar11 + 0x20) = 0;
      *(undefined4 *)((int)aiStackY_108 + iVar11 + 0x1c) = 0;
      *(undefined4 *)((int)aiStackY_108 + iVar11 + 0x18) = 0;
      *(undefined4 *)((int)aiStackY_108 + iVar11 + 0x14) = 0;
      *(undefined4 *)((int)aiStackY_108 + iVar11 + 0x10) = 1;
      *(int *)((int)aiStackY_108 + iVar11 + 0xc) = iVar3;
      *(int *)((int)aiStackY_108 + iVar11 + 8) = (int)*(short *)(iVar3 + 0x22);
      *(int *)((int)aiStackY_108 + iVar11 + 4) = (int)*(short *)(iVar3 + 6);
      *(undefined4 *)((int)aiStackY_108 + iVar11) = 0x60f609;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar5 = thunk_FUN_0060f940(*(int *)((int)aiStackY_108 + iVar11 + 4),
                                 *(int *)((int)aiStackY_108 + iVar11 + 8),
                                 *(AnonShape_0060F940_1CCED7C8 **)((int)aiStackY_108 + iVar11 + 0xc)
                                 ,*(int *)((int)aiStackY_108 + iVar11 + 0x10),
                                 *(int *)((int)aiStackY_108 + iVar11 + 0x14),
                                 *(int *)((int)aiStackY_108 + iVar11 + 0x18),
                                 *(int *)((int)aiStackY_108 + iVar11 + 0x1c),
                                 *(int *)((int)aiStackY_108 + iVar11 + 0x20),
                                 *(int *)((int)aiStackY_108 + iVar11 + 0x24),
                                 *(int *)((int)aiStackY_108 + iVar11 + 0x28),
                                 *(int *)(&stack0xffffff24 + iVar11),
                                 *(int *)((int)local_b8 + iVar11 + -0x20),
                                 *(int *)((int)local_b8 + iVar11 + -0x1c),
                                 *(int **)(&stack0xffffff30 + iVar11),
                                 *(int **)(&stack0xffffff34 + iVar11));
      *(undefined4 *)(*(int *)puVar1 + 0x18) = uVar5;
      **(undefined2 **)puVar1 = *(undefined2 *)&this->field_0x1e9;
      *(undefined2 *)(*(int *)puVar1 + 2) = *(undefined2 *)&this->field_0x1eb;
      *(undefined2 *)(*(int *)puVar1 + 4) = *(undefined2 *)&this->field_0x1ed;
      *(undefined4 **)(&stack0xffffff34 + iVar11) = &local_70;
      *(undefined4 **)(&stack0xffffff30 + iVar11) = &local_44;
      *(undefined4 **)((int)local_b8 + iVar11 + -0x1c) = &local_30;
      *(int *)((int)local_b8 + iVar11 + -0x20) = (int)*(short *)&this->field_0x1f5;
      *(undefined4 *)(&stack0xffffff24 + iVar11) = 0x60f64f;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      thunk_FUN_00615860(*(int *)((int)local_b8 + iVar11 + -0x20),
                         *(int **)((int)local_b8 + iVar11 + -0x1c),
                         *(int **)(&stack0xffffff30 + iVar11),*(int **)(&stack0xffffff34 + iVar11));
      iVar3 = *(int *)puVar1;
      *(int *)(&stack0xffffff34 + iVar11) =
           (int)*(short *)&this->field_0x1f3 % 200 + *(short *)(iVar3 + 0x20) * 200;
      *(int *)(&stack0xffffff30 + iVar11) =
           *(short *)(iVar3 + 0x1e) * 0xc9 + (int)*(short *)&this->field_0x1f1 % 0xc9;
      *(int *)((int)local_b8 + iVar11 + -0x1c) =
           *(short *)(iVar3 + 0x1c) * 0xc9 + (int)*(short *)&this->field_0x1ef % 0xc9;
      *(undefined4 *)((int)local_b8 + iVar11 + -0x20) = local_70;
      *(undefined4 *)(&stack0xffffff24 + iVar11) = local_44;
      *(undefined4 *)((int)aiStackY_108 + iVar11 + 0x28) = local_30;
      *(int *)((int)aiStackY_108 + iVar11 + 0x24) = (int)*(short *)&this->field_0x1ed;
      *(int *)((int)aiStackY_108 + iVar11 + 0x20) = (int)*(short *)&this->field_0x1eb;
      *(int *)((int)aiStackY_108 + iVar11 + 0x1c) = (int)*(short *)&this->field_0x1e9;
      *(undefined4 *)((int)aiStackY_108 + iVar11 + 0x18) = 0x60f6d4;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      thunk_FUN_00615e70(this,*(int *)((int)aiStackY_108 + iVar11 + 0x1c),
                         *(int *)((int)aiStackY_108 + iVar11 + 0x20),
                         *(int *)((int)aiStackY_108 + iVar11 + 0x24),
                         *(int *)((int)aiStackY_108 + iVar11 + 0x28),
                         *(int *)(&stack0xffffff24 + iVar11),
                         *(int *)((int)local_b8 + iVar11 + -0x20),
                         *(int *)((int)local_b8 + iVar11 + -0x1c),
                         *(int *)(&stack0xffffff30 + iVar11),*(int *)(&stack0xffffff34 + iVar11));
    }
  }
  if (local_6c != nullptr) {
    *(short ***)(&stack0xffffff34 + iVar11) = &local_6c;
    *(undefined4 *)(&stack0xffffff30 + iVar11) = 0x60f6ee;
    FreeAndNull(*(void **)(&stack0xffffff34 + iVar11));
  }
  ExceptionList = local_14;
  return local_68[0];
}

