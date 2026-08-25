#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790AA0
   Entries: 00404C96
   Slots: 0x3C
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:15 calls=3
   caller_families=2 receiver_extent=1468/1571; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=3; caller_families=2;
   owner_type=/TLOBaseTy; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

void __thiscall TLOBaseTy::sub_004CF640(TLOBaseTy *this,int *param_1)

{
  bool bVar1;
  byte bVar2;
  DArrayTy *pDVar3;
  int uVar3;
  int *piVar5;
  int iVar6;
  int iVar5;
  int iVar7;
  int *piVar8;
  uint index;
  int local_fc [40];
  int local_5c [2];
  char local_54;
  byte local_53;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  uint local_4a [7];
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  undefined *local_10;
  undefined *local_c;
  int local_8;
  int *piVar4;

  local_20 = 0;
  local_18 = 0;
  local_1c = 0;
  local_24 = 0;
  local_8 = 4;
  piVar4 = param_1;
  do {
    if (*piVar4 == 0) {
      pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,5,0x30,5);
      *piVar4 = (int)pDVar3;
    }
    iVar7 = *piVar4;
    piVar4 = piVar4 + 1;
    STField<undefined4>(iVar7,0xC) = 0;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if ((this->field_05AC == CASE_32) || (this->field_05AC == CASE_5C)) {
    /* ST_CALLSITE[004CF6A7]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    uVar3 = LookupRecordByte(*(char *)&this->field_0024);
    uVar3 = (int)(byte)uVar3;
    local_10 = (undefined *)(uVar3 + -1);
    memset(local_fc, 0, 0xa0); /* compiler bulk-zero initialization */
    if (((this->field_05AC == CASE_5C) &&
        (pDVar3 = g_packedRecords_A62x8[(int)this->field_0024].field1970_0x9de,
        pDVar3 != nullptr)) && (index = 0, 0 < (int)pDVar3->count)) {
      do {
        DArrayGetElement(pDVar3,index,&local_28);
        piVar5 = local_fc;
        piVar8 = (int *)(local_28 + 0x4e0);
        iVar7 = 0x28;
        do {
          iVar6 = *piVar8;
          piVar8 = piVar8 + 1;
          *piVar5 = *piVar5 + iVar6;
          piVar5 = piVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        index = index + 1;
        pDVar3 = g_packedRecords_A62x8[(int)this->field_0024].field1970_0x9de;
      } while ((int)index < (int)pDVar3->count);
    }
    local_2c = (int)local_10 << 4;
    local_8 = 0;
    do {
      local_10 = &DAT_00801330 + local_2c;
      local_c = nullptr;
      switch(local_8) {
      case 0:
        local_c = &DAT_00801450;
        break;
      case 1:
        local_c = &DAT_00801480;
        break;
      case 2:
        local_c = &DAT_00800f10;
        break;
      case 3:
        local_10 = &DAT_008013f0 + local_2c;
        local_c = local_10;
      }
      local_14 = local_fc;
      iVar7 = 1;
      do {
        if ((local_10 == nullptr) || (iVar6 = FUN_006b0fd0((int)local_10), iVar6 != 0)) {
          iVar6 = FUN_006b0fd0((int)local_c);
          if ((iVar6 != 0) &&
             (iVar6 = thunk_FUN_004e6010((int)this->field_0024,iVar7 + 0x41), iVar6 != 0)) {
            memset(local_5c, 0, 0x30); /* compiler bulk-zero initialization */
            local_5c[0] = iVar7;
            /* ST_CALLSITE[004CF80A]: CALL 0x00401b59; direct=00401B59 TLOBaseTy::sub_004C9370 */
            local_5c[1] = sub_004C9370(this,1,iVar7,-1);
            if ((*(int *)&this->field_0x361 == 1) && (*(int *)&this->field_0x369 == iVar7)) {
              local_5c[1] = local_5c[1] + *(int *)&this->field_0x36d;
            }
            iVar5 = thunk_FUN_004e6a80(this->field_0024,iVar7);
            if ((iVar5 == 0) || (local_54 = '\x01', g_worldGrid.sizeZ + -1 <= this->field_05B8)) {
              local_54 = '\0';
            }
            /* ST_CALLSITE[004CF871]: CALL 0x004035df; direct=004035DF TLOBaseTy::sub_004C7260 */
            sub_004C7260(this,CASE_1,iVar7,&local_20,&local_18,&local_1c,&local_24);
            local_4e = (undefined2)local_20;
            local_52 = (undefined2)local_18;
            /* ST_CALLSITE[004CF890]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
            bVar2 = LookupRecordByte(*(char *)&this->field_0024);
            if (bVar2 == 3) {
              local_50 = (undefined2)local_24;
            }
            else {
              local_50 = (undefined2)local_1c;
            }
            local_4c = 0xffff;
            if (*local_14 != 0) {
              local_4c = (undefined2)*local_14;
            }
            /* ST_CALLSITE[004CF8C8]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
            local_53 = LookupRecordByte(*(char *)&this->field_0024);
            if (local_54 == '\0') {
              thunk_FUN_004e6b40(this->field_0024,iVar7,local_4a);
            }
            Library::DKW::TBL::DArrayAppend((DArrayTy *)param_1[local_8],local_5c);
          }
        }
        local_14 = local_14 + 1;
        bVar1 = iVar7 < 0x28;
        iVar7 = iVar7 + 1;
      } while (bVar1);
      local_8 = local_8 + 1;
    } while (local_8 < 4);
  }
  return;
}

