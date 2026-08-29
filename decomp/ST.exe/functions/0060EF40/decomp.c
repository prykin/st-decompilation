#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_0060EF40.
   Evidence: incoming_receiver_captures=1; receiver_accesses=47; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=8; adopt_untyped_existing_thiscall;
   single_call_corroborated_by_receiver_family */

int __thiscall
SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0060EF40::FUN_0060ef40
          (RecoveredReceiver_0060EF40 *this,int param_1)

{
  ushort **ppuVar1;
  code *pcVar2;
  int iVar3;
  int iVar1;
  ushort *puVar4;
  short sVar5;
  int iVar7;
  short sVar8;
  STWorldObject *this_00;
  short sVar9;
  int iVar10;
  uint uVar11;
  byte *puVar12;
  int iVar13;
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
  uint local_70;
  short *local_6c;
  int local_68 [2];
  short local_60 [6];
  byte *local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_24;
  int local_20;
  byte *local_1c;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079ce98;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff38;
  sVar9 = this->field_0215;
  sVar8 = this->field_0217;
  local_40 = (int)this->field_0219;
  aiStackY_108[10] = 0x60efad;
  ExceptionList = &local_14;
  local_2c = (int)sVar8;
  local_20 = (int)sVar9;
  thunk_FUN_00615bb0((int)this->field_01F5,local_b8,&local_74,0,nullptr);
  local_3c = sVar9 + local_b8[0];
  local_48 = sVar8 + local_74;
  sVar9 = this->field_01EF;
  local_80 = STBiasedDiv16(sVar9, 0xc9); /* exact signed 16-bit grid-index division */
  sVar9 = this->field_01F1;
  local_b0 = STBiasedDiv16(sVar9, 0xc9); /* exact signed 16-bit grid-index division */
  sVar9 = this->field_01F3;
  local_34 = STBiasedDiv16(sVar9, 200); /* exact signed 16-bit grid-index division */
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
  iVar10 = (int)g_worldGrid.sizeY;
  if (iVar10 < local_94) {
    local_94 = iVar10;
  }
  iVar10 = (int)g_worldGrid.sizeX;
  if (iVar10 < local_84) {
    local_84 = iVar10;
  }
  local_9c = local_84 - local_24;
  local_8c = (local_94 - local_38) * (local_84 - local_24);
  uVar11 = local_8c * 10;
  iVar10 = -(uVar11 + 3 & 0xfffffffc);
  local_1c = &stack0xffffff38 + iVar10;
  local_54 = &stack0xffffff38 + iVar10;
  puVar12 = (byte *)(&stack0xffffff38 + iVar10);
  memset(puVar12, 0, uVar11); /* compiler bulk-zero initialization */
  local_8 = 0xffffffff;
  local_4c = 0;
  do {
    iVar7 = local_4c * local_8c;
    local_a8 = iVar7;
    local_50 = local_38;
    if (local_38 < local_94) {
      do {
        local_98 = (local_50 - local_38) * local_9c + iVar7;
        iVar13 = iVar3;
        if (iVar3 < local_84) {
          do {
            local_88 = (iVar13 - iVar3) + local_98;
            sVar9 = (short)iVar13;
            if ((((sVar9 < 0) || (g_worldGrid.sizeX <= sVar9)) ||
                (sVar8 = (short)local_50, sVar8 < 0)) ||
               (((g_worldGrid.sizeY <= sVar8 || (sVar5 = (short)local_4c, sVar5 < 0)) ||
                (g_worldGrid.sizeZ <= sVar5)))) {
              this_00 = nullptr;
            }
            else {
              this_00 = STGridAt3D(g_worldGrid, sVar9, sVar8, sVar5).objects[0];
            }
            if (this_00 == nullptr) {
LAB_0060f21b:
              iVar3 = local_50;
              *(int *)(&stack0xffffff34 + iVar10) = local_4c;
              *(int *)(&stack0xffffff30 + iVar10) = iVar3;
              *(int *)((int)local_b8 + iVar10 + -0x1c) = iVar13;
              *(undefined4 *)((int)local_b8 + iVar10 + -0x20) = 0x60f22c;

              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              iVar1 = thunk_FUN_004961b0(*(short *)((int)local_b8 + iVar10 + -0x1c),
                                         *(short *)(&stack0xffffff30 + iVar10),
                                         *(short *)(&stack0xffffff34 + iVar10));
              if (iVar1 == 0) {
LAB_0060f230:
                *(undefined2 *)(local_54 + local_88 * 2) = 0xbfff;
              }
            }
            else {
              pcVar2 = this_00->vtable[5].slots_00_28[2];
              *(undefined4 *)(&stack0xffffff34 + iVar10) = 0x60f1e8;
              /* ST_CALLSITE[0060F1E2]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
              iVar3 = (*pcVar2)(this_00);
              if (((iVar3 == 0) || ((STWorldObjectVTable *)0x7 < this_00[1].vtable)) ||
                 ((g_playSystem_00802A38 != nullptr &&
                  (7 < g_bulkInitializedRecords_008087C7[(int)this_00[1].vtable].field_0022))))
              goto LAB_0060f21b;
              if (this->field_02D1 != *(int *)&this_00->field_0x18) goto LAB_0060f230;
            }
            iVar13 = iVar13 + 1;
            iVar7 = local_a8;
            iVar3 = local_24;
          } while (iVar13 < local_84);
        }
        local_50 = local_50 + 1;
      } while (local_50 < local_94);
    }
    local_4c = local_4c + 1;
  } while (local_4c < 5);
  *(short **)(&stack0xffffff34 + iVar10) = local_60;
  *(undefined4 *)(&stack0xffffff30 + iVar10) = 1;
  *(undefined4 *)((int)local_b8 + iVar10 + -0x1c) = 0;
  *(undefined4 *)((int)local_b8 + iVar10 + -0x20) = 0;
  *(int *)(&stack0xffffff24 + iVar10) = (int)this->field_01F5;
  *(undefined4 *)((int)aiStackY_108 + iVar10 + 0x28) = 0x60f28e;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  thunk_FUN_00615bb0(*(Global_sub_00615BB0_param_1Enum *)(&stack0xffffff24 + iVar10),
                     *(undefined4 **)((int)local_b8 + iVar10 + -0x20),
                     *(undefined4 **)((int)local_b8 + iVar10 + -0x1c),
                     *(int *)(&stack0xffffff30 + iVar10),*(undefined2 **)(&stack0xffffff34 + iVar10)
                    );
  iVar7 = 0;
  do {
    if ((((-1 < local_20 + local_60[iVar7 * 2]) && (-1 < local_60[iVar7 * 2 + 1] + local_2c)) &&
        (local_20 + local_60[iVar7 * 2] < (int)g_worldGrid.sizeX)) &&
       (local_60[iVar7 * 2 + 1] + local_2c < (int)g_worldGrid.sizeY)) {
      local_4c = local_40 + -1;
      if (local_4c <= local_40 + 1) {
        do {
          if ((-1 < local_4c) && (local_4c < 5)) {
            local_b8[0] = local_60[iVar7 * 2] + local_20;
            local_74 = local_60[iVar7 * 2 + 1] + local_2c;
            *(undefined2 *)
             (local_54 +
             (((((local_60[iVar7 * 2 + 1] + local_2c) - local_38) * local_9c + local_4c * local_8c)
              - iVar3) + local_60[iVar7 * 2] + local_20) * 2) = 0xbfff;
          }
          local_4c = local_4c + 1;
        } while (local_4c <= local_40 + 1);
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  *(undefined4 *)(&stack0xffffff34 + iVar10) = 2;
  *(int **)(&stack0xffffff30 + iVar10) = local_68;
  *(int *)((int)local_b8 + iVar10 + -0x1c) = local_34;
  iVar7 = local_38;
  *(int *)((int)local_b8 + iVar10 + -0x20) = local_b0 - local_38;
  *(int *)(&stack0xffffff24 + iVar10) = local_80 - iVar3;
  *(int *)((int)aiStackY_108 + iVar10 + 0x28) = local_40;
  *(int *)((int)aiStackY_108 + iVar10 + 0x24) = local_48 - iVar7;
  *(int *)((int)aiStackY_108 + iVar10 + 0x20) = local_3c - iVar3;
  *(undefined4 *)((int)aiStackY_108 + iVar10 + 0x1c) = 5;
  *(int *)((int)aiStackY_108 + iVar10 + 0x18) = local_94 - iVar7;
  *(int *)((int)aiStackY_108 + iVar10 + 0x14) = local_84 - iVar3;
  *(undefined1 **)((int)aiStackY_108 + iVar10 + 0x10) = local_54;
  *(undefined4 *)((int)aiStackY_108 + iVar10 + 0xc) = 0x60f37c;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_6c = Library::DKW::WAY::FUN_006afba0
                       (*(int *)((int)aiStackY_108 + iVar10 + 0x10),
                        *(int *)((int)aiStackY_108 + iVar10 + 0x14),
                        *(short **)((int)aiStackY_108 + iVar10 + 0x18),
                        *(short **)((int)aiStackY_108 + iVar10 + 0x1c),
                        *(short **)((int)aiStackY_108 + iVar10 + 0x20),
                        *(short **)((int)aiStackY_108 + iVar10 + 0x24),
                        *(short **)((int)aiStackY_108 + iVar10 + 0x28),
                        *(short **)(&stack0xffffff24 + iVar10),
                        *(short **)((int)local_b8 + iVar10 + -0x20),
                        *(short **)((int)local_b8 + iVar10 + -0x1c),
                        *(int **)(&stack0xffffff30 + iVar10),(&stack0xffffff34)[iVar10]);
  if (local_6c == nullptr) {
    local_68[0] = 0;
  }
  else {
    ppuVar1 = &this->field_02DD;
    if (*ppuVar1 == nullptr) {
      *(int *)(&stack0xffffff34 + iVar10) = (local_68[0] + 1) * 0x1c;
      *(undefined4 *)(&stack0xffffff30 + iVar10) = 0x60f3ca;
      /* ST_CALLSITE[0060F3C5]: CALL 0x006aac70; direct=006AAC70 Library::DKW::LIB::MemAlloc; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ushort; source view only; no Ghidra override */
      puVar4 = Library::DKW::LIB::MemAlloc(*(uint *)(&stack0xffffff34 + iVar10));
      *ppuVar1 = puVar4;
    }
    else {
      if (this->field_02D5 <= local_68[0]) {
        *(ushort ***)(&stack0xffffff34 + iVar10) = ppuVar1;
        *(undefined4 *)(&stack0xffffff30 + iVar10) = 0x60f3a3;
        FreeAndNull(*(void **)(&stack0xffffff34 + iVar10));
      }
      this->field_02D5 = 0;
    }
    iVar3 = 1;
    if (1 < local_68[0]) {
      do {
        (*ppuVar1)[iVar3 * 0xe] = local_6c[iVar3 * 4 + -4] + (short)local_24;
        (*ppuVar1)[iVar3 * 0xe + 1] = local_6c[iVar3 * 4 + -3] + (short)local_38;
        (*ppuVar1)[iVar3 * 0xe + 2] = local_6c[iVar3 * 4 + -2];
        (*ppuVar1)[iVar3 * 0xe + 3] =
             *(ushort *)
              (PTR_DAT_007ed56c +
              ((((((int)local_6c[iVar3 * 4 + 2] - (int)local_6c[iVar3 * 4 + -2]) * 3 -
                 (int)local_6c[iVar3 * 4 + -3]) + (int)local_6c[iVar3 * 4 + 1]) * 3 -
               (int)local_6c[iVar3 * 4 + -4]) + (int)local_6c[iVar3 * 4]) * 4);
        *(int *)(*ppuVar1 + iVar3 * 0xe + 4) =
             (*(int *)(&DAT_007cfe74 + (short)(*ppuVar1)[iVar3 * 0xe + 3] * 4) * 0xc9) / 1000;
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_68[0]);
    }
    (*ppuVar1)[local_68[0] * 0xe] = local_6c[local_68[0] * 4 + -4] + (short)local_24;
    (*ppuVar1)[local_68[0] * 0xe + 1] = local_6c[local_68[0] * 4 + -3] + (short)local_38;
    (*ppuVar1)[local_68[0] * 0xe + 2] = local_6c[local_68[0] * 4 + -2];
    (*ppuVar1)[local_68[0] * 0xe + 3] = (*ppuVar1)[local_68[0] * 0xe + -0xb];
    this->field_02D5 = local_68[0] + 1;
    local_7c = 1;
    if (1 < local_68[0] + -1) {
      do {
        iVar3 = local_7c;
        puVar4 = *ppuVar1 + local_7c * 0xe;
        *(undefined4 *)(&stack0xffffff34 + iVar10) = 0;
        *(undefined4 *)(&stack0xffffff30 + iVar10) = 0;
        *(undefined4 *)((int)local_b8 + iVar10 + -0x1c) = 0;
        *(undefined4 *)((int)local_b8 + iVar10 + -0x20) = 0;
        *(undefined4 *)(&stack0xffffff24 + iVar10) = 0;
        *(undefined4 *)((int)aiStackY_108 + iVar10 + 0x28) = 0;
        *(undefined4 *)((int)aiStackY_108 + iVar10 + 0x24) = 0;
        *(undefined4 *)((int)aiStackY_108 + iVar10 + 0x20) = 0;
        *(undefined4 *)((int)aiStackY_108 + iVar10 + 0x1c) = 0;
        *(undefined4 *)((int)aiStackY_108 + iVar10 + 0x18) = 0;
        *(undefined4 *)((int)aiStackY_108 + iVar10 + 0x14) = 0;
        *(undefined4 *)((int)aiStackY_108 + iVar10 + 0x10) = 1;
        *(ushort **)((int)aiStackY_108 + iVar10 + 0xc) = puVar4;
        *(int *)((int)aiStackY_108 + iVar10 + 8) = (short)puVar4[0x11];
        *(int *)((int)aiStackY_108 + iVar10 + 4) = (short)puVar4[3];
        *(undefined4 *)((int)aiStackY_108 + iVar10) = 0x60f549;

        iVar7 = thunk_FUN_0060f940(*(int *)((int)aiStackY_108 + iVar10 + 4),
                                   *(int *)((int)aiStackY_108 + iVar10 + 8),
                                   *(RecoveredRecordView_0060F940_8057A92D **)
                                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                                    ((int)aiStackY_108 + iVar10 + 0xc),
                                   *(int *)((int)aiStackY_108 + iVar10 + 0x10),
                                   *(int *)((int)aiStackY_108 + iVar10 + 0x14),
                                   *(int *)((int)aiStackY_108 + iVar10 + 0x18),
                                   *(int *)((int)aiStackY_108 + iVar10 + 0x1c),
                                   *(int *)((int)aiStackY_108 + iVar10 + 0x20),
                                   *(int *)((int)aiStackY_108 + iVar10 + 0x24),
                                   *(int *)((int)aiStackY_108 + iVar10 + 0x28),
                                   *(int *)(&stack0xffffff24 + iVar10),
                                   *(int *)((int)local_b8 + iVar10 + -0x20),
                                   *(int *)((int)local_b8 + iVar10 + -0x1c),
                                   *(int **)(&stack0xffffff30 + iVar10),
                                   *(int **)(&stack0xffffff34 + iVar10));
        *(int *)(*ppuVar1 + iVar3 * 0xe + 0xc) = iVar7;
        if (*(int *)(*ppuVar1 + iVar3 * 0xe + 0xc) < 0) {
          local_68[0] = -1;
          break;
        }
        local_7c = local_7c + 1;
      } while (local_7c < local_68[0] + -1);
    }
    if (1 < local_68[0]) {
      **ppuVar1 = (ushort)local_20;
      (*ppuVar1)[1] = (ushort)local_2c;
      (*ppuVar1)[2] = (ushort)local_40;
      (*ppuVar1)[3] =
           *(ushort *)(PTR_DAT_007ed56c + (((local_48 - local_2c) * 3 - local_20) + local_3c) * 4);
      *(int *)(*ppuVar1 + 4) = (*(int *)(&DAT_007cfe74 + (short)(*ppuVar1)[3] * 4) * 0xc9) / 1000;
      puVar4 = *ppuVar1;
      *(undefined4 *)(&stack0xffffff34 + iVar10) = 0;
      *(undefined4 *)(&stack0xffffff30 + iVar10) = 0;
      *(undefined4 *)((int)local_b8 + iVar10 + -0x1c) = 0;
      *(undefined4 *)((int)local_b8 + iVar10 + -0x20) = 0;
      *(undefined4 *)(&stack0xffffff24 + iVar10) = 0;
      *(undefined4 *)((int)aiStackY_108 + iVar10 + 0x28) = 0;
      *(undefined4 *)((int)aiStackY_108 + iVar10 + 0x24) = 0;
      *(undefined4 *)((int)aiStackY_108 + iVar10 + 0x20) = 0;
      *(undefined4 *)((int)aiStackY_108 + iVar10 + 0x1c) = 0;
      *(undefined4 *)((int)aiStackY_108 + iVar10 + 0x18) = 0;
      *(undefined4 *)((int)aiStackY_108 + iVar10 + 0x14) = 0;
      *(undefined4 *)((int)aiStackY_108 + iVar10 + 0x10) = 1;
      *(ushort **)((int)aiStackY_108 + iVar10 + 0xc) = puVar4;
      *(int *)((int)aiStackY_108 + iVar10 + 8) = (short)puVar4[0x11];
      *(int *)((int)aiStackY_108 + iVar10 + 4) = (short)puVar4[3];
      *(undefined4 *)((int)aiStackY_108 + iVar10) = 0x60f609;

      iVar3 = thunk_FUN_0060f940(*(int *)((int)aiStackY_108 + iVar10 + 4),
                                 *(int *)((int)aiStackY_108 + iVar10 + 8),
                                 *(RecoveredRecordView_0060F940_8057A92D **)
                                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                                  ((int)aiStackY_108 + iVar10 + 0xc),
                                 *(int *)((int)aiStackY_108 + iVar10 + 0x10),
                                 *(int *)((int)aiStackY_108 + iVar10 + 0x14),
                                 *(int *)((int)aiStackY_108 + iVar10 + 0x18),
                                 *(int *)((int)aiStackY_108 + iVar10 + 0x1c),
                                 *(int *)((int)aiStackY_108 + iVar10 + 0x20),
                                 *(int *)((int)aiStackY_108 + iVar10 + 0x24),
                                 *(int *)((int)aiStackY_108 + iVar10 + 0x28),
                                 *(int *)(&stack0xffffff24 + iVar10),
                                 *(int *)((int)local_b8 + iVar10 + -0x20),
                                 *(int *)((int)local_b8 + iVar10 + -0x1c),
                                 *(int **)(&stack0xffffff30 + iVar10),
                                 *(int **)(&stack0xffffff34 + iVar10));
      *(int *)(*ppuVar1 + 0xc) = iVar3;
      **ppuVar1 = this->field_01E9;
      (*ppuVar1)[1] = this->field_01EB;
      (*ppuVar1)[2] = this->field_01ED;
      *(undefined4 **)(&stack0xffffff34 + iVar10) = &local_70;
      *(undefined4 **)(&stack0xffffff30 + iVar10) = &local_44;
      *(undefined4 **)((int)local_b8 + iVar10 + -0x1c) = &local_30;
      *(int *)((int)local_b8 + iVar10 + -0x20) = (int)this->field_01F5;
      *(undefined4 *)(&stack0xffffff24 + iVar10) = 0x60f64f;

      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      thunk_FUN_00615860(*(int *)((int)local_b8 + iVar10 + -0x20),
                         *(int **)((int)local_b8 + iVar10 + -0x1c),
                         *(int **)(&stack0xffffff30 + iVar10),*(int **)(&stack0xffffff34 + iVar10));
      puVar4 = *ppuVar1;
      *(int *)(&stack0xffffff34 + iVar10) = (int)this->field_01F3 % 200 + (short)puVar4[0x10] * 200;
      *(int *)(&stack0xffffff30 + iVar10) = (short)puVar4[0xf] * 0xc9 + (int)this->field_01F1 % 0xc9
      ;
      *(int *)((int)local_b8 + iVar10 + -0x1c) =
           (short)puVar4[0xe] * 0xc9 + (int)this->field_01EF % 0xc9;
      *(undefined4 *)((int)local_b8 + iVar10 + -0x20) = local_70;
      *(undefined4 *)(&stack0xffffff24 + iVar10) = local_44;
      *(undefined4 *)((int)aiStackY_108 + iVar10 + 0x28) = local_30;
      *(int *)((int)aiStackY_108 + iVar10 + 0x24) = (int)this->field_01ED;
      *(int *)((int)aiStackY_108 + iVar10 + 0x20) = (int)this->field_01EB;
      *(int *)((int)aiStackY_108 + iVar10 + 0x1c) = (int)this->field_01E9;
      *(undefined4 *)((int)aiStackY_108 + iVar10 + 0x18) = 0x60f6d4;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      thunk_FUN_00615e70(this,*(int *)((int)aiStackY_108 + iVar10 + 0x1c),
                         *(int *)((int)aiStackY_108 + iVar10 + 0x20),
                         *(int *)((int)aiStackY_108 + iVar10 + 0x24),
                         *(int *)((int)aiStackY_108 + iVar10 + 0x28),
                         *(int *)(&stack0xffffff24 + iVar10),
                         *(int *)((int)local_b8 + iVar10 + -0x20),
                         *(int *)((int)local_b8 + iVar10 + -0x1c),
                         *(int *)(&stack0xffffff30 + iVar10),*(int *)(&stack0xffffff34 + iVar10));
    }
  }
  if (local_6c != nullptr) {
    *(short ***)(&stack0xffffff34 + iVar10) = &local_6c;
    *(undefined4 *)(&stack0xffffff30 + iVar10) = 0x60f6ee;
    FreeAndNull(*(void **)(&stack0xffffff34 + iVar10));
  }
  ExceptionList = local_14;
  return local_68[0];
}

