#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_00693B20.
   Evidence: incoming_receiver_captures=0; entry_receiver_register_captures=1; receiver_accesses=1;
   receiver_bulk_copies=1; incoming_edx_uses=0; calls=0; ecx_pointer_setup=0; ecx_scalar_setup=0;
   caller_cleanup_calls=0; callee_ret_pop=[8]; expected_stack=8; receiver_family_members=13;
   same_this_callees=2; closed_callee_receiver_chain */

undefined4 __thiscall
SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00693B20::FUN_00693eb0
          (RecoveredReceiver_00693B20 *this,int param_1,int param_2)

{
  int iVar1;
  byte uVar2;
  byte uVar3;
  uint uVar4;
  byte *puVar5;
  byte *puVar6;
  int iVar7;
  RecoveredReceiver_00693B20 *pRVar8;
  byte *puVar9;
  byte *puVar10;
  int iVar11;
  uint local_19ac [4];
  undefined4 auStack_199b [8];
  char acStack_1979 [614];
  undefined4 auStack_1713 [1473];
  int local_c;
  int local_8;

  iVar11 = param_2;
  pRVar8 = this;
  puVar9 = (byte *)(local_19ac);
  memmove(puVar9, pRVar8, 0x1998); /* compiler REP MOVS byte copy */
  puVar9 = (byte *)(puVar9 + 0x666);
  pRVar8 = pRVar8 + 0x222;
  iVar7 = 0;
  *(undefined1 *)puVar9 = *(undefined1 *)&pRVar8->field_0000;
  local_8 = (int)this + param_1 * 0x51;
  local_c = param_2 * 0x51;
  puVar9 = (byte *)(local_8 + 0x11);
  puVar10 = (byte *)(local_c + 0x11 + (int)this);
  memmove(puVar10, puVar9, 0x51); /* compiler REP MOVS byte copy */
  iVar7 = 0;
  *(char *)(local_c + 0x33 + (int)this) = (char)param_2;
  thunk_FUN_00693cb0(this,param_1);
  if (acStack_1979[local_c] != -1) {
    puVar9 = (byte *)((int)auStack_199b + local_c);
    puVar10 = (byte *)(local_8 + 0x11);
    memmove(puVar10, puVar9, 0x51); /* compiler REP MOVS byte copy */
    STField<char>(local_8,0x33) = (char)param_1;
  }
  puVar9 = (byte *)((int)&this[0x37].field_0004 + param_1 * 8 + 1);
  iVar7 = 0;
  do {
    *(undefined1 *)((int)&this[0x37].field_0004 + iVar7 + param_2 * 8 + 1) =
         *(undefined1 *)((int)puVar9 + iVar7);
    *(undefined1 *)((int)puVar9 + iVar7) = 0;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  iVar7 = param_2 + param_1 * 8;
  iVar1 = param_1 + param_2 * 8;
  auto param_2_after_write = 8; /* compiler stack-slot lifetime split */
  uVar2 = *(undefined1 *)((int)auStack_1713 + iVar7);
  *(undefined1 *)((int)&this[0x37].field_0004 + iVar1 + 1) = uVar2;
  puVar6 = (undefined1 *)((int)&this[0x37].field_0004 + param_1 + 1);
  puVar5 = puVar6;
  do {
    puVar5[iVar11 - param_1] = *puVar5;
    *puVar5 = 0;
    puVar5 = puVar5 + 8;
    param_2_after_write = param_2_after_write + -1;
  } while (param_2_after_write != 0);
  uVar3 = *(undefined1 *)((int)auStack_1713 + iVar1);
  uVar4 = auStack_1713[iVar11 * 2];
  *(undefined1 *)((int)&this[0x37].field_0004 + iVar7 + 1) = uVar3;
  *puVar9 = uVar4;
  puVar5 = (undefined1 *)((int)auStack_1713 + iVar11);
  puVar9[1] = auStack_1713[iVar11 * 2 + 1];
  *(undefined1 *)((int)&this[0x37].field_0004 + iVar7 + 1) = uVar3;
  iVar11 = 8;
  do {
    uVar3 = *puVar5;
    puVar5 = puVar5 + 8;
    *puVar6 = uVar3;
    puVar6 = puVar6 + 8;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  *(undefined1 *)((int)&this[0x37].field_0004 + iVar1 + 1) = uVar2;
  return 1;
}

