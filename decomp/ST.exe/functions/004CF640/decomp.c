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
  int iVar1;
  bool bVar2;
  byte bVar3;
  DArrayTy *pDVar4;
  int uVar3;
  int *piVar5;
  int iVar5;
  int iVar6;
  int *piVar7;
  void *pvVar8;
  uint index;
  void **ppvVar9;
  int local_fc [40];
  void *local_5c;
  int local_58;
  char local_54;
  byte local_53;
  ushort local_52;
  ushort local_50;
  ushort local_4e;
  ushort local_4c;
  uint local_4a [7];
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  uint *local_10;
  uint *local_c;
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
      pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,5,0x30,5);
      *piVar4 = (int)pDVar4;
    }
    iVar6 = *piVar4;
    piVar4 = piVar4 + 1;
    STField<undefined4>(iVar6,0xC) = 0;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if ((this->field_05AC == CASE_32) || (this->field_05AC == CASE_5C)) {
    /* ST_CALLSITE[004CF6A7]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    uVar3 = LookupRecordByte(*(char *)&this->field_0024);
    uVar3 = (int)(byte)uVar3;
    local_10 = (uint *)(uVar3 + -1);
    memset(local_fc, 0, 0xa0); /* compiler bulk-zero initialization */
    if (((this->field_05AC == CASE_5C) &&
        (pDVar4 = g_packedRecords_A62x8[(int)this->field_0024].field1970_0x9de,
        pDVar4 != nullptr)) && (index = 0, 0 < (int)pDVar4->count)) {
      do {

        DArrayGetElement(pDVar4,index,&local_28);
        piVar5 = local_fc;
        piVar7 = (int *)(local_28 + 0x4e0);
        iVar6 = 0x28;
        do {
          iVar1 = *piVar7;
          piVar7 = piVar7 + 1;
          *piVar5 = *piVar5 + iVar1;
          piVar5 = piVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        index = index + 1;
        pDVar4 = g_packedRecords_A62x8[(int)this->field_0024].field1970_0x9de;
      } while ((int)index < (int)pDVar4->count);
    }
    local_2c = (int)local_10 << 4;
    local_8 = 0;
    do {
      local_10 = (uint *)((int)g_bitset_00801330 + local_2c);
      local_c = nullptr;
      switch(local_8) {
      case 0:
        local_c = g_bitset_00801450;
        break;
      case 1:
        local_c = g_bitset_00801480;
        break;
      case 2:
        local_c = g_bitset_00800F10;
        break;
      case 3:
        local_10 = (uint *)((int)g_bitset_008013F0 + local_2c);
        local_c = local_10;
      }
      local_14 = local_fc;
      pvVar8 = (void *)0x1;
      do {

        if ((local_10 == nullptr) || (iVar6 = FUN_006b0fd0((int)local_10), iVar6 != 0)) {

          iVar6 = FUN_006b0fd0((int)local_c);
          if ((iVar6 != 0) &&

             (iVar6 = thunk_FUN_004e6010(this->field_0024,(int)pvVar8 + 0x41), iVar6 != 0)) {
            ppvVar9 = &local_5c;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              *ppvVar9 = nullptr;
              ppvVar9 = ppvVar9 + 1;
            }
            local_5c = pvVar8;
            /* ST_CALLSITE[004CF80A]: CALL 0x00401b59; direct=00401B59 TLOBaseTy::sub_004C9370 */
            local_58 = sub_004C9370(this,1,(int)pvVar8,-1);
            if ((*(int *)&this->field_0x361 == 1) && (*(void **)&this->field_0x369 == pvVar8)) {
              local_58 = local_58 + *(int *)&this->field_0x36d;
            }

            iVar5 = thunk_FUN_004e6a80(this->field_0024,(int)pvVar8);
            if ((iVar5 == 0) || (local_54 = '\x01', g_worldGrid.sizeZ + -1 <= this->field_05B8)) {
              local_54 = '\0';
            }
            /* ST_CALLSITE[004CF871]: CALL 0x004035df; direct=004035DF TLOBaseTy::sub_004C7260 */
            sub_004C7260(this,CASE_1,(int)pvVar8,&local_20,&local_18,&local_1c,&local_24);
            local_4e = (undefined2)local_20;
            local_52 = (undefined2)local_18;
            /* ST_CALLSITE[004CF890]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
            bVar3 = LookupRecordByte(*(char *)&this->field_0024);
            if (bVar3 == 3) {
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
              thunk_FUN_004e6b40(this->field_0024,pvVar8,local_4a);
            }

            Library::DKW::TBL::DArrayAppend((DArrayTy *)param_1[local_8],&local_5c);
          }
        }
        local_14 = local_14 + 1;
        bVar2 = (int)pvVar8 < 0x28;
        pvVar8 = (void *)((int)pvVar8 + 1);
      } while (bVar2);
      local_8 = local_8 + 1;
    } while (local_8 < 4);
  }
  return;
}

