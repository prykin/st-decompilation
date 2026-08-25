#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790AA0
   Entries: 004020DB
   Slots: 0x38
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:14 calls=3
   caller_families=2 receiver_extent=1456/1571; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=3; caller_families=2;
   owner_type=/TLOBaseTy; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

void __thiscall TLOBaseTy::sub_004E3200(TLOBaseTy *this,int *param_1)

{
  uint index;
  TLOBaseTy_field_05ACState TVar1;
  byte *pbVar2;
  byte uVar3;
  DArrayTy *pDVar6;
  int local_EAX_178;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar7;
  int local_EAX_275;
  bool bVar4;
  byte bVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_01;
  int local_EAX_707;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_02;
  byte *puVar8;
  uint *puVar9;
  int *piVar10;
  uint index_00;
  uint *puVar11;
  uint *puVar12;
  undefined1 local_78 [8];
  char local_70;
  uint local_48 [2];
  char local_40;
  byte local_3f;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_36 [7];
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  puVar8 = nullptr;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (*param_1 == 0) {
    pDVar6 = Library::DKW::TBL::DArrayCreate(nullptr,5,0x30,5);
    *param_1 = (int)pDVar6;
  }
  if (param_1[1] == 0) {
    pDVar6 = Library::DKW::TBL::DArrayCreate(nullptr,5,0x30,5);
    param_1[1] = (int)pDVar6;
  }
  *(undefined4 *)(*param_1 + 0xc) = 0;
  *(undefined4 *)(param_1[1] + 0xc) = 0;
  TVar1 = this->field_05AC;
  if (TVar1 == CASE_35) {
    do {
      if (puVar8[(int)(&PTR_DAT_007bfc04)[this->field_0239]] == '\0') {
        iVar7 = thunk_FUN_004e60d0((int)this->field_0024,(int)puVar8);
        iVar5 = thunk_FUN_004e7f20((int)this->field_0024,(int)puVar8,iVar7 + 1);
      }
      else {
        iVar5 = thunk_FUN_004e5910((int)this->field_0024,(uint)puVar8);
      }
      if (iVar5 != 0) {
        uVar3 = thunk_FUN_004e6140((int)this->field_0024,(int)puVar8);
        iVar7 = thunk_FUN_004e60d0((int)this->field_0024,(int)puVar8);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if ((iVar7 < CONCAT31(extraout_var_01,uVar3)) &&
           (((*(int *)&this->field_0x361 != 2 || (*(undefined1 **)&this->field_0x369 != puVar8)) &&
            (local_EAX_707 = thunk_FUN_004e5f90((int)this->field_0024,(uint)puVar8),
            local_EAX_707 == 0)))) {
          memset(local_48, 0, 0x30); /* compiler bulk-zero initialization */
          iVar7 = thunk_FUN_004e60d0((int)this->field_0024,(int)puVar8);
          local_48[0] = (iVar7 + 1) * 0x10000 | (uint)puVar8 & 0xffff;
          if (puVar8[(int)(&PTR_DAT_007bfc04)[this->field_0239]] == '\0') {
LAB_004e3526:
            local_40 = '\x01';
          }
          else {
            bVar4 = thunk_FUN_004e5c40(this->field_0024,(uint)puVar8);
            local_40 = '\0';
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if (CONCAT31(extraout_var_02,bVar4) != 0) goto LAB_004e3526;
          }
          /* ST_CALLSITE[004E353F]: CALL 0x004035df; direct=004035DF TLOBaseTy::sub_004C7260 */
          sub_004C7260(this,CASE_2,(int)puVar8,&local_8,&local_c,&local_10,&local_14);
          local_3a = (undefined2)local_8;
          local_3e = (undefined2)local_c;
          /* ST_CALLSITE[004E355E]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          bVar5 = LookupRecordByte(*(char *)&this->field_0024);
          if (bVar5 == 3) {
            local_3c = (undefined2)local_14;
          }
          else {
            local_3c = (undefined2)local_10;
          }
          /* ST_CALLSITE[004E3583]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          local_3f = LookupRecordByte(*(char *)&this->field_0024);
          puVar12 = local_36;
          iVar7 = thunk_FUN_004e60d0((int)this->field_0024,(int)puVar8);
          thunk_FUN_004e68a0(this->field_0024,puVar8,iVar7 + 1,puVar12);
          if (puVar8[(int)(&PTR_DAT_007bfc04)[this->field_0239]] == '\0') {
            pDVar6 = (DArrayTy *)param_1[1];
          }
          else {
            pDVar6 = (DArrayTy *)*param_1;
          }
          Library::DKW::TBL::DArrayAppend(pDVar6,local_48);
        }
      }
      puVar8 = puVar8 + 1;
    } while ((int)puVar8 < 0x9b);
  }
  else if (((0x53 < (int)TVar1) && ((int)TVar1 < 0x5b)) &&
          (local_18 = 0, (&DAT_0079a3fc)[(TVar1 * 3 + -0xfc) * 5] != 0)) {
    puVar9 = &DAT_0079a3fc + (TVar1 * 3 + -0xfc) * 5;
    do {
      if (0xe < local_18) break;
      local_EAX_178 = thunk_FUN_004e5910((int)this->field_0024,*puVar9);
      if (local_EAX_178 != 0) {
        uVar3 = thunk_FUN_004e6140((int)this->field_0024,*puVar9);
        iVar7 = thunk_FUN_004e60d0((int)this->field_0024,*puVar9);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (((iVar7 < CONCAT31(extraout_var,uVar3)) &&
            ((*(int *)&this->field_0x361 != 2 || (*(uint *)&this->field_0x369 != *puVar9)))) &&
           (local_EAX_275 = thunk_FUN_004e5f90((int)this->field_0024,*puVar9), local_EAX_275 == 0))
        {
          pbVar2 = this->field_0024;
          memset(local_48, 0, 0x30); /* compiler bulk-zero initialization */
          iVar7 = thunk_FUN_004e60d0((int)pbVar2,*puVar9);
          local_48[0] = (iVar7 + 1) * 0x10000 | (uint)(ushort)*puVar9;
          if (this->field_04D4 == 0) {
LAB_004e336e:
            local_40 = '\0';
          }
          else {
            bVar4 = thunk_FUN_004e5c40(this->field_0024,*puVar9);
            local_40 = '\x01';
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if (CONCAT31(extraout_var_00,bVar4) == 0) goto LAB_004e336e;
          }
          /* ST_CALLSITE[004E3389]: CALL 0x004035df; direct=004035DF TLOBaseTy::sub_004C7260 */
          sub_004C7260(this,CASE_2,*puVar9,&local_8,&local_c,&local_10,&local_14);
          local_3e = (undefined2)local_c;
          local_3a = (undefined2)local_8;
          /* ST_CALLSITE[004E33A8]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          bVar5 = LookupRecordByte(*(char *)&this->field_0024);
          if (bVar5 == 3) {
            local_3c = (undefined2)local_14;
          }
          else {
            local_3c = (undefined2)local_10;
          }
          /* ST_CALLSITE[004E33CD]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          local_3f = LookupRecordByte(*(char *)&this->field_0024);
          puVar12 = local_36;
          iVar7 = thunk_FUN_004e60d0((int)this->field_0024,*puVar9);
          thunk_FUN_004e68a0(this->field_0024,(undefined1 *)*puVar9,iVar7 + 1,puVar12);
          Library::DKW::TBL::DArrayAppend((DArrayTy *)*param_1,local_48);
        }
      }
      puVar11 = puVar9 + 1;
      puVar9 = puVar9 + 1;
      local_18 = local_18 + 1;
    } while (*puVar11 != 0);
  }
  local_18 = 2;
  piVar10 = param_1;
  do {
    auto param_1_after_write = *(int **)(*piVar10 + 0xc); /* compiler stack-slot lifetime split */
    while (param_1_after_write != nullptr) {
      pDVar6 = (DArrayTy *)*piVar10;
      param_1_after_write = nullptr;
      index_00 = 0;
      if ((int)(pDVar6->count - 2) < 0) break;
      do {
        DArrayGetElement(pDVar6,index_00,local_48);
        index = index_00 + 1;
        DArrayGetElement((DArrayTy *)*piVar10,index,local_78);
        if ((local_40 == '\0') && (local_70 != '\0')) {
          FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)*piVar10,index_00,index);
          param_1_after_write = (int *)0x1;
        }
        pDVar6 = (DArrayTy *)*piVar10;
        index_00 = index;
      } while ((int)index <= (int)(pDVar6->count - 2));
    }
    piVar10 = piVar10 + 1;
    local_18 = local_18 + -1;
    if (local_18 == 0) {
      return;
    }
  } while( true );
}

