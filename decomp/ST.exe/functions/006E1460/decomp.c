#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=124;
   incoming_edx_uses=0; incoming_stack_parameter_uses=87; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] x87_double_parameter_slots target=function:-1: prototype=undefined4
   __thiscall sub_006E1460(ST3DSMAPContext * this, double param_2, double param_3) Evidence: x87
   double-width accesses or exact split stores into an owner field independently typed or consumed
   as double prove physical EBP slot boundaries; merged_slots={0=2, 2=2}; sites=006E152A forwards
   adjacent incoming dwords to ST3DSMAPContext::sub_006DD610 parameter stack slot +0x4 typed /double
   | 006E152A forwards adjacent incoming dwords to ST3DSMAPContext::sub_006DD610 parameter stack
   slot +0xc typed /double */

undefined4 __thiscall
ST3DSMAPContext::sub_006E1460(ST3DSMAPContext *this,double param_2,double param_3)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  uint local_dc;
  int local_d8;
  int local_d4;
  uint local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  uint local_bc;
  int local_b8;
  int local_b4;
  double local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  uint local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  uint local_7c;
  int local_78;
  undefined8 local_74;
  int local_6c;
  int local_68;
  int local_64;
  int local_58;
  int local_54;
  int local_44;
  undefined8 local_3c;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079e138;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff0c;
  local_94 = 0;
  local_68 = 0;
  local_7c = 0;
  local_90 = 0;
  if (((this->field_0004 == nullptr) || ((this->field_0004->field_000C & 0x1100) != 0x100)
      ) && (this->field_02DC == 0)) {
    ExceptionList = &local_14;
    this->field_02D8 = 1;
    sub_006E1320(this,&param_2,&param_3,(int *)&local_d0,(int *)&local_dc,&local_30);
    if (this->field_0124 == 1) {
      this->field_0374 = this->field_0374 - local_d0;
      this->field_0378 = this->field_0378 - local_dc;
    }
    sub_006DD610(this,this->field_00A8,param_2,param_3);
    local_54 = this->field_0030;
    local_64 = this->field_0034;
    local_78 = this->field_0038 - local_54;
    local_cc = this->field_003C - local_64;
    local_c8 = *(undefined4 *)&this->field_0060;
    local_c4 = *(undefined4 *)((int)&this->field_0060 + 4);
    local_2c = *(undefined4 *)&this->field_0068;
    local_28 = *(undefined4 *)((int)&this->field_0068 + 4);
    local_8c = *(undefined4 *)&this->field_0070;
    local_88 = *(undefined4 *)((int)&this->field_0070 + 4);
    local_a4 = *(undefined4 *)&this->field_0078;
    local_a0 = *(undefined4 *)((int)&this->field_0078 + 4);
    iVar6 = (local_d0 ^ (int)local_d0 >> 0x1f) - ((int)local_d0 >> 0x1f);
    uVar5 = (int)local_dc >> 0x1f;
    if (((local_78 / 2 < iVar6) || (local_cc / 2 < (int)((local_dc ^ uVar5) - uVar5))) &&
       (this->field_0124 != 1)) {
      sub_006DDBE0(this);
      sub_006E1050(this);
      this->field_0140 = nullptr;
      this->field_013C = 0;
    }
    else {
      local_24 = this->field_0060;
      local_3c = this->field_0068;
      local_74 = this->field_0070;
      local_84 = this->field_0078;
      dVar1 = ((this->field_0068 - this->field_0060) * (double)iVar6) / (double)local_78;
      local_d4 = (local_dc ^ uVar5) - uVar5;
      local_b0 = ((this->field_0078 - this->field_0070) * (double)local_d4) / (double)local_cc;
      iVar2 = this->field_0034;
      local_bc = local_78 - iVar6;
      local_d4 = local_cc - local_d4;
      uVar5 = 0;
      puVar4 = this->field_02B0;
      if (puVar4 != nullptr) {
        this->field_02C8 = this->field_02C8 + local_d0;
      }
      if ((int)local_d0 < 0) {
        local_24 = this->field_0068 - dVar1;
        local_c0 = local_54 - local_d0;
        local_a8 = local_54;
        local_6c = local_54 + local_bc;
        if (puVar4 != nullptr) {
          iVar6 = this->field_02C8;
          while (iVar6 <= -this->field_02C0) {
            iVar6 = this->field_02C8 + this->field_02C0;
            this->field_02C8 = iVar6;
            uVar5 = uVar5 + 1;
          }
          local_7c = 0;
          local_94 = uVar5;
        }
      }
      else {
        local_a8 = local_54 + local_d0;
        local_3c = dVar1 + this->field_0060;
        local_c0 = local_54;
        local_6c = local_54;
        if (puVar4 != nullptr) {
          if (0 < this->field_02C8) {
            do {
              iVar6 = this->field_02C8 - this->field_02C0;
              this->field_02C8 = iVar6;
              uVar5 = uVar5 + 1;
            } while (0 < iVar6);
          }
          local_94 = 0;
          local_7c = uVar5;
        }
      }
      iVar6 = 0;
      local_44 = 0;
      if (puVar4 != nullptr) {
        this->field_02CC = this->field_02CC + local_dc;
      }
      if ((int)local_dc < 0) {
        local_b4 = this->field_0034 + local_d4;
        local_84 = local_b0 + this->field_0070;
        local_d8 = iVar2 - local_dc;
        local_b8 = iVar2;
        if (puVar4 != nullptr) {
          iVar2 = this->field_02CC;
          local_68 = iVar6;
          while (iVar2 <= -this->field_02C4) {
            iVar2 = this->field_02CC + this->field_02C4;
            this->field_02CC = iVar2;
            local_68 = local_68 + 1;
          }
          local_90 = 0;
          local_44 = local_68;
        }
      }
      else {
        local_b8 = iVar2 + local_dc;
        local_b4 = this->field_0034;
        local_74 = this->field_0078 - local_b0;
        local_d8 = iVar2;
        if (puVar4 != nullptr) {
          iVar2 = this->field_02CC;
          if (0 < iVar2) {
            do {
              iVar2 = iVar2 - this->field_02C4;
              iVar6 = iVar6 + 1;
            } while (0 < iVar2);
            this->field_02CC = iVar2;
            local_44 = iVar6;
          }
          local_68 = 0;
          local_90 = local_44;
        }
      }
      iVar6 = local_44;
      if (this->field_0124 == 1) {
        Library::Ourlib::STREND::FUN_006e3100
                  (this,local_a8,local_b8,local_c0,local_d8,local_bc,local_d4);
      }
      else {
        Library::Ourlib::STREND::FUN_006e2f90
                  (this,local_a8,local_b8,local_c0,local_d8,local_bc,local_d4,local_30);
        puVar4 = this->field_02B0;
        if ((puVar4 != nullptr) && (((uVar5 != 0 || (iVar6 != 0)) || (local_30 != 0)))) {
          local_8 = 0;
          uVar3 = this->field_02B8;
          if (local_30 == 0) {
            FUN_006d1610((undefined8 *)(puVar4 + uVar3 * local_90 + local_7c),
                         (undefined8 *)(puVar4 + uVar3 * local_68 + local_94),uVar3 * 2,
                         (uVar3 - uVar5) * 2,this->field_02BC - iVar6);
            local_8 = 0xffffffff;
            iVar6 = local_44;
          }
          else {
            FUN_006e2d50((int *)(puVar4 + uVar3 * local_90 + local_7c),
                         (int *)(puVar4 + uVar3 * local_68 + local_94),uVar3 * 2,uVar3 - uVar5,
                         this->field_02BC - iVar6,local_30);
            local_8 = 0xffffffff;
            iVar6 = local_44;
          }
        }
      }
      if (local_d0 != 0) {
        this->field_0030 = local_6c;
        this->field_0034 = 0;
        this->field_0038 = ((local_d0 ^ (int)local_d0 >> 0x1f) - ((int)local_d0 >> 0x1f)) + local_6c
        ;
        this->field_003C = local_cc;
        *(undefined4 *)&this->field_0060 = (undefined4)local_24;
        *(undefined4 *)((int)&this->field_0060 + 4) = STPiece<4,4>(local_24);
        *(undefined4 *)&this->field_0068 = (undefined4)local_3c;
        *(undefined4 *)((int)&this->field_0068 + 4) = STPiece<4,4>(local_3c);
        *(undefined4 *)&this->field_0070 = local_8c;
        *(undefined4 *)((int)&this->field_0070 + 4) = local_88;
        *(undefined4 *)&this->field_0078 = local_a4;
        *(undefined4 *)((int)&this->field_0078 + 4) = local_a0;
        if (0 < (int)uVar5) {
          if ((int)local_7c < (int)local_94) {
            puVar4 = this->field_02B0 + (this->field_02B8 - uVar5);
          }
          else {
            puVar4 = this->field_02B0;
          }
          local_58 = 0;
          if (0 < this->field_02BC) {
            do {
              if (0 < (int)uVar5) {
                puVar7 = puVar4;
                for (uVar3 = uVar5 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
                  puVar7[0] = 30000;
                  puVar7[1] = 30000;
                  puVar7 = puVar7 + 2;
                }
                for (uVar3 = (uint)((uVar5 & 1) != 0); iVar6 = local_44, uVar3 != 0;
                    uVar3 = uVar3 - 1) {
                  *puVar7 = 30000;
                  puVar7 = puVar7 + 1;
                }
              }
              local_58 = local_58 + 1;
              puVar4 = puVar4 + this->field_02B8;
            } while (local_58 < this->field_02BC);
          }
        }
        sub_006DDBE0(this);
        sub_006DE9C0(this);
        this->field_0140 = nullptr;
        this->field_013C = 0;
      }
      if (local_dc != 0) {
        this->field_0030 = 0;
        this->field_0034 = local_b4;
        this->field_0038 = local_78;
        this->field_003C = ((local_dc ^ (int)local_dc >> 0x1f) - ((int)local_dc >> 0x1f)) + local_b4
        ;
        *(undefined4 *)&this->field_0060 = local_c8;
        *(undefined4 *)((int)&this->field_0060 + 4) = local_c4;
        *(undefined4 *)&this->field_0068 = local_2c;
        *(undefined4 *)((int)&this->field_0068 + 4) = local_28;
        *(undefined4 *)&this->field_0070 = (undefined4)local_74;
        *(undefined4 *)((int)&this->field_0070 + 4) = STPiece<4,4>(local_74);
        *(undefined4 *)&this->field_0078 = (undefined4)local_84;
        *(undefined4 *)((int)&this->field_0078 + 4) = STPiece<4,4>(local_84);
        if (0 < iVar6) {
          if (local_90 < local_68) {
            puVar4 = this->field_02B0 + (this->field_02BC - iVar6) * this->field_02B8;
          }
          else {
            puVar4 = this->field_02B0;
          }
          if (0 < local_44) {
            uVar5 = this->field_02B8;
            iVar6 = local_44;
            do {
              FUN_006ce6c0(puVar4,uVar5,30000);
              uVar5 = this->field_02B8;
              puVar4 = puVar4 + uVar5;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
        sub_006DDBE0(this);
        sub_006DE9C0(this);
        this->field_0140 = nullptr;
        this->field_013C = 0;
      }
      this->field_0030 = local_54;
      this->field_0034 = local_64;
      this->field_0038 = local_78 + local_54;
      this->field_003C = local_cc + local_64;
      *(undefined4 *)&this->field_0060 = local_c8;
      *(undefined4 *)((int)&this->field_0060 + 4) = local_c4;
      *(undefined4 *)&this->field_0068 = local_2c;
      *(undefined4 *)((int)&this->field_0068 + 4) = local_28;
      *(undefined4 *)&this->field_0070 = local_8c;
      *(undefined4 *)((int)&this->field_0070 + 4) = local_88;
      *(undefined4 *)&this->field_0078 = local_a4;
      *(undefined4 *)((int)&this->field_0078 + 4) = local_a0;
      if ((ST3DSMAPContext *)this->field_0358 != nullptr) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        sub_006E1460((ST3DSMAPContext *)this->field_0358,this->field_0098,
                     (double)CONCAT26((short)((uint)*(undefined4 *)((int)&this->field_00A0 + 4) >>
                                             0x10),*(undefined6 *)&this->field_00A0));
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        this->field_0374 = *(int *)(this->field_0358 + 0x374);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        this->field_0378 = *(int *)(this->field_0358 + 0x378);
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}

