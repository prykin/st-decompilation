#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790AA0
   Entries: 004013A2
   Slots: 0x50
   Anchor:
   Evidence: slot_family_has_no_named_method; physical_slot_call_family=007900A0:20 calls=3
   caller_families=2 receiver_extent=1456/1571; unique_owner_for_target;
   receiver_aware_physical_slot_signature; exact_call_family_sites=3; caller_families=2;
   owner_type=/TLOBaseTy; current target parameter and return types retained when arity agrees;
   physical-slot geometry proves receiver/stack ABI only */

void __thiscall TLOBaseTy::sub_004CE0F0(TLOBaseTy *this,int *param_1)

{
  DArrayTy *pDVar1;
  int iVar2;
  int local_EAX_132;
  int uVar3;
  int local_EAX_200;
  int iVar3;
  int local_38 [2];
  undefined1 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  int local_8;

  if (*param_1 == 0) {
    pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,5,0x30,5);
    *param_1 = (int)pDVar1;
  }
  *(undefined4 *)(*param_1 + 0xc) = 0;
  if (this->field_05AC == CASE_53) {
    local_8 = 0x54;
    iVar3 = 0xfc;
    do {
      iVar2 = thunk_FUN_004e6010((int)this->field_0024,local_8 + -0x32);
      if (iVar2 != 0) {
        memset(local_38, 0, 0x30); /* compiler bulk-zero initialization */
        local_38[0] = local_8;
        local_30 = 1;
        /* ST_CALLSITE[004CE174]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_EAX_132 = LookupRecordByte(*(char *)&this->field_0024);
        local_EAX_132 = (int)(byte)local_EAX_132;
        local_2a = *(undefined2 *)(&DAT_00854350 + (local_EAX_132 + iVar3) * 4);
        /* ST_CALLSITE[004CE196]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        uVar3 = LookupRecordByte(*(char *)&this->field_0024);
        uVar3 = (int)(byte)uVar3;
        local_2e = *(undefined2 *)(&DAT_007e19f4 + (uVar3 + iVar3) * 4);
        /* ST_CALLSITE[004CE1B8]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_EAX_200 = LookupRecordByte(*(char *)&this->field_0024);
        local_EAX_200 = (int)(byte)local_EAX_200;
        local_2c = *(undefined2 *)(&DAT_007e2f04 + (local_EAX_200 + iVar3) * 4);
        Library::DKW::TBL::DArrayAppend((DArrayTy *)*param_1,local_38);
      }
      iVar3 = iVar3 + 3;
      local_8 = local_8 + 1;
    } while (iVar3 < 0x10f);
  }
  return;
}

