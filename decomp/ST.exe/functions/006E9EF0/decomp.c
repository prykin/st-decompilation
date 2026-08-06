#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 00575CB0 -> 006E9EF0 @ 0057644C; literal 30000 at 00576436 | 00575CB0 -> 006E9EF0 @
   0057649F; literal 30000 at 0057648C | 005F6F60 -> 006E9EF0 @ 005F7D6A; literal 30000 at 005F7D51
   | 005FAA10 -> 006E9EF0 @ 005FAB6C; literal 30000 at 005FAB58 | 006029C0 -> 006E9EF0 @ 00602B0F;
   literal 30000 at 00602B01

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=4;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
ST3DSMAPContext::sub_006E9EF0
          (ST3DSMAPContext *this,uint param_1,uint param_2,int param_3,int param_4,uint param_5,
          ushort param_6)

{
  uint *puVar1;
  ushort *puVar2;
  uint uVar3;
  void *pvVar4;
  byte *pbVar5;
  int iVar6;

  if (param_1 < (uint)this->field_0310) {
    puVar1 = (uint *)(this->field_031C + param_1 * 0x114);
    uVar3 = *(uint *)(this->field_031C + param_1 * 0x114);
    if ((uVar3 & 0x8000) != 0) {
      if (puVar1[0x25] <= param_2) {
        FUN_006e91a0();
        return;
      }
      if (param_3 != 0) {
        if ((uVar3 & 0x200) != 0) {
          return;
        }
        if (puVar1[0x2a] == 0) {
          pvVar4 = Library::DKW::LIB::MemAllocClear(puVar1[0x25] * 8);
          puVar1[0x2a] = (uint)pvVar4;
          if (pvVar4 == nullptr) {
            return;
          }
        }
        *(short *)(puVar1[0x2a] + param_2 * 8) = (short)param_5;
        *(ushort *)(puVar1[0x2a] + 2 + param_2 * 8) = param_6;
        if (param_4 == 0) {
          param_4 = 1;
        }
        *(short *)(puVar1[0x2a] + 4 + param_2 * 8) = (short)param_4;
        pbVar5 = (byte *)(puVar1[0x29] + 2 + param_2 * 4);
        *pbVar5 = *pbVar5 | 0x20;
        *puVar1 = *puVar1 | 0x100;
        FUN_006e9a10(puVar1,param_2,param_5);
        return;
      }
      puVar2 = (ushort *)(puVar1[0x29] + 2 + param_2 * 4);
      *puVar2 = *puVar2 & 0xffdf;
      iVar6 = 0;
      if (0 < (int)puVar1[0x25]) {
        pbVar5 = (byte *)(puVar1[0x29] + 2);
        do {
          if ((*pbVar5 & 0x20) != 0) break;
          iVar6 = iVar6 + 1;
          pbVar5 = pbVar5 + 4;
        } while (iVar6 < (int)puVar1[0x25]);
      }
      if ((*puVar1 & 0x100) != 0) {
        FreeAndNull(puVar1 + 0x2a);
      }
      if (iVar6 < (int)puVar1[0x25]) {
        return;
      }
      *puVar1 = *puVar1 & 0xfffffeff;
      return;
    }
  }
  if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}

