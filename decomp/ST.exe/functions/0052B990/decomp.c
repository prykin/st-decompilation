#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as MoneyTy.
   Evidence: this_call_owners=[MoneyTy]; agreed_this_calls=2; incoming_this_accesses=14;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall MoneyTy::sub_0052B990(MoneyTy *this)

{
  uint uVar1;
  byte bVar2;
  BITMAPINFO *pBVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint local_8;

  bVar2 = ((DAT_0080874e == '\x03') - 1U & 0xf9) + 0x14;
  FUN_006b5f80((int *)g_ddxContext_008075A8,this->field_0030,this->field_0034,this->field_0058,
               this->field_005C);
  if (this->field_00A4 == '\0') {
    uVar1 = (uint)bVar2;
    STPiece<0,1>(local_8) = 1;
    if (0 < (int)(uVar1 - (byte)this->field_00A2)) {
      uVar7 = 1;
      do {
        pBVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0082,0);
        /* ST_CALLSITE[0052BAD7]: CALL 0x00403738; direct=00403738 PutDDX */
        PutDDX(this->field_0030 + -4 + uVar7 * 4,this->field_0034,'\x01',pBVar3);
        STPiece<0,1>(local_8) = (byte)local_8 + 1;
        uVar7 = (uint)(byte)local_8;
      } while ((int)uVar7 <= (int)(uVar1 - (byte)this->field_00A2));
    }
    bVar4 = (bVar2 - this->field_00A2) + 1;
    if (bVar4 <= bVar2) {
      iVar5 = (uint)bVar4 * 4;
      iVar6 = (uVar1 - bVar4) + 1;
      do {
        pBVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0082,4);
        /* ST_CALLSITE[0052BB45]: CALL 0x00403738; direct=00403738 PutDDX */
        PutDDX(this->field_0030 + -4 + iVar5,this->field_0034,'\x01',pBVar3);
        iVar5 = iVar5 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else {
    bVar4 = 1;
    local_8 = 1;
    if (this->field_00A2 != '\0') {
      do {
        pBVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0082,
                              (-(uint)(DAT_0080874e != '\x03') & 2) + 1);
        /* ST_CALLSITE[0052BA1D]: CALL 0x00403738; direct=00403738 PutDDX */
        PutDDX(this->field_0030 + -4 + local_8 * 4,this->field_0034,'\x01',pBVar3);
        bVar4 = bVar4 + 1;
        local_8 = (uint)bVar4;
      } while (bVar4 <= (byte)this->field_00A2);
    }
    bVar4 = this->field_00A2 + 1;
    if (bVar4 <= bVar2) {
      iVar5 = (uint)bVar4 * 4;
      iVar6 = ((uint)bVar2 - (uint)bVar4) + 1;
      do {
        pBVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0082,0);
        /* ST_CALLSITE[0052BA82]: CALL 0x00403738; direct=00403738 PutDDX */
        PutDDX(this->field_0030 + -4 + iVar5,this->field_0034,'\x01',pBVar3);
        iVar5 = iVar5 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return;
    }
  }
  return;
}

