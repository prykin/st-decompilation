
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=124;
   incoming_edx_uses=0; incoming_stack_parameter_uses=87; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
ST3DSMAPContext::sub_006E1460
          (ST3DSMAPContext *this,uint param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  ushort *puVar9;
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
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((*(int *)&this->field_0x4 == 0) ||
      ((*(uint *)(*(int *)&this->field_0x4 + 0xc) & 0x1100) != 0x100)) &&
     (*(int *)&this->field_0x2dc == 0)) {
    ExceptionList = &local_14;
    this->field_02D8 = 1;
    sub_006E1320(this,(double *)&param_1,(double *)&param_3,(int *)&local_d0,(int *)&local_dc,
                 &local_30);
    if (*(int *)&this->field_0x124 == 1) {
      *(uint *)&this->field_0x374 = *(int *)&this->field_0x374 - local_d0;
      *(uint *)&this->field_0x378 = *(int *)&this->field_0x378 - local_dc;
    }
    sub_006DD610(this,*(uint *)&this->field_0xa8,param_1,param_2,param_3,param_4);
    local_54 = *(int *)&this->field_0x30;
    local_64 = *(int *)&this->field_0x34;
    local_78 = *(int *)&this->field_0x38 - local_54;
    local_cc = *(int *)&this->field_0x3c - local_64;
    local_c8 = *(undefined4 *)&this->field_0x60;
    local_c4 = *(undefined4 *)&this->field_0x64;
    local_2c = *(undefined4 *)&this->field_0x68;
    local_28 = *(undefined4 *)&this->field_0x6c;
    local_8c = *(undefined4 *)&this->field_0x70;
    local_88 = *(undefined4 *)&this->field_0x74;
    local_a4 = *(undefined4 *)&this->field_0x78;
    local_a0 = *(undefined4 *)&this->field_0x7c;
    iVar7 = (local_d0 ^ (int)local_d0 >> 0x1f) - ((int)local_d0 >> 0x1f);
    uVar6 = (int)local_dc >> 0x1f;
    if (((local_78 / 2 < iVar7) || (local_cc / 2 < (int)((local_dc ^ uVar6) - uVar6))) &&
       (*(int *)&this->field_0x124 != 1)) {
      sub_006DDBE0(this);
      sub_006E1050(this);
      *(undefined4 *)&this->field_0x140 = 0;
      *(undefined4 *)&this->field_0x13c = 0;
    }
    else {
      local_24 = *(double *)&this->field_0x60;
      local_3c = *(double *)&this->field_0x68;
      local_74 = *(double *)&this->field_0x70;
      local_84 = *(double *)&this->field_0x78;
      dVar2 = ((*(double *)&this->field_0x68 - *(double *)&this->field_0x60) * (double)iVar7) /
              (double)local_78;
      local_d4 = (local_dc ^ uVar6) - uVar6;
      local_b0 = ((*(double *)&this->field_0x78 - *(double *)&this->field_0x70) * (double)local_d4)
                 / (double)local_cc;
      iVar1 = *(int *)&this->field_0x34;
      local_bc = local_78 - iVar7;
      local_d4 = local_cc - local_d4;
      uVar6 = 0;
      iVar7 = *(int *)&this->field_0x2b0;
      if (iVar7 != 0) {
        *(uint *)&this->field_0x2c8 = *(int *)&this->field_0x2c8 + local_d0;
      }
      if ((int)local_d0 < 0) {
        local_24 = *(double *)&this->field_0x68 - dVar2;
        local_c0 = local_54 - local_d0;
        local_a8 = local_54;
        local_6c = local_54 + local_bc;
        if (iVar7 != 0) {
          iVar3 = *(int *)&this->field_0x2c8;
          while (iVar3 <= -*(int *)&this->field_0x2c0) {
            iVar3 = *(int *)&this->field_0x2c8 + *(int *)&this->field_0x2c0;
            *(int *)&this->field_0x2c8 = iVar3;
            uVar6 = uVar6 + 1;
          }
          local_7c = 0;
          local_94 = uVar6;
        }
      }
      else {
        local_a8 = local_54 + local_d0;
        local_3c = dVar2 + *(double *)&this->field_0x60;
        local_c0 = local_54;
        local_6c = local_54;
        if (iVar7 != 0) {
          if (0 < *(int *)&this->field_0x2c8) {
            do {
              iVar3 = *(int *)&this->field_0x2c8 - *(int *)&this->field_0x2c0;
              *(int *)&this->field_0x2c8 = iVar3;
              uVar6 = uVar6 + 1;
            } while (0 < iVar3);
          }
          local_94 = 0;
          local_7c = uVar6;
        }
      }
      iVar3 = 0;
      local_44 = 0;
      if (iVar7 != 0) {
        *(uint *)&this->field_0x2cc = *(int *)&this->field_0x2cc + local_dc;
      }
      if ((int)local_dc < 0) {
        local_b4 = *(int *)&this->field_0x34 + local_d4;
        local_84 = local_b0 + *(double *)&this->field_0x70;
        local_d8 = iVar1 - local_dc;
        local_b8 = iVar1;
        if (iVar7 != 0) {
          iVar7 = *(int *)&this->field_0x2cc;
          local_68 = iVar3;
          while (iVar7 <= -*(int *)&this->field_0x2c4) {
            iVar7 = *(int *)&this->field_0x2cc + *(int *)&this->field_0x2c4;
            *(int *)&this->field_0x2cc = iVar7;
            local_68 = local_68 + 1;
          }
          local_90 = 0;
          local_44 = local_68;
        }
      }
      else {
        local_b8 = iVar1 + local_dc;
        local_b4 = *(int *)&this->field_0x34;
        local_74 = *(double *)&this->field_0x78 - local_b0;
        local_d8 = iVar1;
        if (iVar7 != 0) {
          iVar7 = *(int *)&this->field_0x2cc;
          if (0 < iVar7) {
            do {
              iVar7 = iVar7 - *(int *)&this->field_0x2c4;
              iVar3 = iVar3 + 1;
            } while (0 < iVar7);
            *(int *)&this->field_0x2cc = iVar7;
            local_44 = iVar3;
          }
          local_68 = 0;
          local_90 = local_44;
        }
      }
      iVar7 = local_44;
      if (*(int *)&this->field_0x124 == 1) {
        Library::Ourlib::STREND::FUN_006e3100
                  (this,local_a8,local_b8,local_c0,local_d8,local_bc,local_d4);
      }
      else {
        Library::Ourlib::STREND::FUN_006e2f90
                  (this,local_a8,local_b8,local_c0,local_d8,local_bc,local_d4,local_30);
        iVar1 = *(int *)&this->field_0x2b0;
        if ((iVar1 != 0) && (((uVar6 != 0 || (iVar7 != 0)) || (local_30 != 0)))) {
          local_8 = 0;
          iVar3 = *(int *)&this->field_0x2b8;
          if (local_30 == 0) {
            FUN_006d1610((undefined8 *)(iVar1 + (iVar3 * local_90 + local_7c) * 2),
                         (undefined8 *)(iVar1 + (iVar3 * local_68 + local_94) * 2),iVar3 * 2,
                         (iVar3 - uVar6) * 2,*(int *)&this->field_0x2bc - iVar7);
            local_8 = 0xffffffff;
            iVar7 = local_44;
          }
          else {
            FUN_006e2d50((int *)(iVar1 + (iVar3 * local_90 + local_7c) * 2),
                         (int *)(iVar1 + (iVar3 * local_68 + local_94) * 2),iVar3 * 2,iVar3 - uVar6,
                         *(int *)&this->field_0x2bc - iVar7,local_30);
            local_8 = 0xffffffff;
            iVar7 = local_44;
          }
        }
      }
      if (local_d0 != 0) {
        *(int *)&this->field_0x30 = local_6c;
        *(undefined4 *)&this->field_0x34 = 0;
        *(uint *)&this->field_0x38 =
             ((local_d0 ^ (int)local_d0 >> 0x1f) - ((int)local_d0 >> 0x1f)) + local_6c;
        *(int *)&this->field_0x3c = local_cc;
        *(undefined4 *)&this->field_0x60 = (undefined4)local_24;
        *(undefined4 *)&this->field_0x64 = local_24._4_4_;
        *(undefined4 *)&this->field_0x68 = (undefined4)local_3c;
        *(undefined4 *)&this->field_0x6c = local_3c._4_4_;
        *(undefined4 *)&this->field_0x70 = local_8c;
        *(undefined4 *)&this->field_0x74 = local_88;
        *(undefined4 *)&this->field_0x78 = local_a4;
        *(undefined4 *)&this->field_0x7c = local_a0;
        if (0 < (int)uVar6) {
          if ((int)local_7c < (int)local_94) {
            puVar5 = (undefined4 *)
                     (*(int *)&this->field_0x2b0 + (*(int *)&this->field_0x2b8 - uVar6) * 2);
          }
          else {
            puVar5 = *(undefined4 **)&this->field_0x2b0;
          }
          local_58 = 0;
          if (0 < *(int *)&this->field_0x2bc) {
            do {
              if (0 < (int)uVar6) {
                puVar8 = puVar5;
                for (uVar4 = uVar6 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *puVar8 = 0x75307530;
                  puVar8 = puVar8 + 1;
                }
                for (uVar4 = (uint)((uVar6 & 1) != 0); iVar7 = local_44, uVar4 != 0;
                    uVar4 = uVar4 - 1) {
                  *(undefined2 *)puVar8 = 30000;
                  puVar8 = (undefined4 *)((int)puVar8 + 2);
                }
              }
              local_58 = local_58 + 1;
              puVar5 = (undefined4 *)((int)puVar5 + *(int *)&this->field_0x2b8 * 2);
            } while (local_58 < *(int *)&this->field_0x2bc);
          }
        }
        sub_006DDBE0(this);
        sub_006DE9C0(this);
        *(undefined4 *)&this->field_0x140 = 0;
        *(undefined4 *)&this->field_0x13c = 0;
      }
      if (local_dc != 0) {
        *(undefined4 *)&this->field_0x30 = 0;
        *(int *)&this->field_0x34 = local_b4;
        *(int *)&this->field_0x38 = local_78;
        *(uint *)&this->field_0x3c =
             ((local_dc ^ (int)local_dc >> 0x1f) - ((int)local_dc >> 0x1f)) + local_b4;
        *(undefined4 *)&this->field_0x60 = local_c8;
        *(undefined4 *)&this->field_0x64 = local_c4;
        *(undefined4 *)&this->field_0x68 = local_2c;
        *(undefined4 *)&this->field_0x6c = local_28;
        *(undefined4 *)&this->field_0x70 = (undefined4)local_74;
        *(undefined4 *)&this->field_0x74 = local_74._4_4_;
        *(undefined4 *)&this->field_0x78 = (undefined4)local_84;
        *(undefined4 *)&this->field_0x7c = local_84._4_4_;
        if (0 < iVar7) {
          if (local_90 < local_68) {
            puVar9 = (ushort *)
                     (*(int *)&this->field_0x2b0 +
                     (*(int *)&this->field_0x2bc - iVar7) * *(int *)&this->field_0x2b8 * 2);
          }
          else {
            puVar9 = *(ushort **)&this->field_0x2b0;
          }
          if (0 < local_44) {
            uVar6 = *(uint *)&this->field_0x2b8;
            iVar7 = local_44;
            do {
              FUN_006ce6c0(puVar9,uVar6,30000);
              uVar6 = *(uint *)&this->field_0x2b8;
              puVar9 = puVar9 + uVar6;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
        sub_006DDBE0(this);
        sub_006DE9C0(this);
        *(undefined4 *)&this->field_0x140 = 0;
        *(undefined4 *)&this->field_0x13c = 0;
      }
      *(int *)&this->field_0x30 = local_54;
      *(int *)&this->field_0x34 = local_64;
      *(int *)&this->field_0x38 = local_78 + local_54;
      *(int *)&this->field_0x3c = local_cc + local_64;
      *(undefined4 *)&this->field_0x60 = local_c8;
      *(undefined4 *)&this->field_0x64 = local_c4;
      *(undefined4 *)&this->field_0x68 = local_2c;
      *(undefined4 *)&this->field_0x6c = local_28;
      *(undefined4 *)&this->field_0x70 = local_8c;
      *(undefined4 *)&this->field_0x74 = local_88;
      *(undefined4 *)&this->field_0x78 = local_a4;
      *(undefined4 *)&this->field_0x7c = local_a0;
      if (*(ST3DSMAPContext **)&this->field_0x358 != (ST3DSMAPContext *)0x0) {
        sub_006E1460(*(ST3DSMAPContext **)&this->field_0x358,*(undefined4 *)&this->field_0098,
                     *(undefined4 *)((int)&this->field_0098 + 4),*(undefined4 *)&this->field_00A0,
                     *(undefined4 *)((int)&this->field_00A0 + 4));
        *(undefined4 *)&this->field_0x374 = *(undefined4 *)(*(int *)&this->field_0x358 + 0x374);
        *(undefined4 *)&this->field_0x378 = *(undefined4 *)(*(int *)&this->field_0x358 + 0x378);
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}

