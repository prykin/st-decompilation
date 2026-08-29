#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SubmarineTitans__Recovered__HiddenThis__RecoveredReceiver_00693B20.cpp

// 00693D00 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00693B20::FUN_00693d00
#line 4 "decomp/ST.exe/functions/00693D00/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00693D00 parameter used as this of cMf32::RecPut @ 00693D63

   [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00693D00.
   Evidence: incoming_receiver_captures=1; receiver_accesses=4; incoming_edx_uses=0; calls=2;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[8];
   expected_stack=8; receiver_family_members=1; adopt_untyped_existing_thiscall
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00693DC0 @ 00693E07 -> read as EAX on
   every CFG path | 006A0740 @ 006A0797 -> read as EAX on every CFG path */

int __thiscall
st::fn_00693D00
          (RecoveredReceiver_00693B20 *this,cMf32 *param_1,undefined4 param_2)

{
  int iVar1;
  InternalExceptionFrame local_50;
  int local_c;
  RecoveredReceiver_00693B20 *local_8;

  this->field_0000 = 1;
  this->field_0004 = this->field_0004 & 0xffffff05 | 5;
  this->field_0008 = param_2;
  local_c = 1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;

  iVar1 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar1 == 0) {

    st::fn_006F13F0(param_1,0,PTR_s_DESCRIPTOR_0079d770,reinterpret_cast<byte *>(local_8),0x1999,nullptr,'\0',
                  nullptr);
    g_currentExceptionFrame = local_50.previous;
    return local_c;
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

// 00693DC0 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00693B20::FUN_00693dc0
#line 4 "decomp/ST.exe/functions/00693DC0/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00693DC0 -> 00693D00 @ 00693E07

   [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_00693B20.
   Evidence: incoming_receiver_captures=0; entry_receiver_register_captures=1; receiver_accesses=1;
   receiver_bulk_copies=1; incoming_edx_uses=0; calls=0; ecx_pointer_setup=0; ecx_scalar_setup=0;
   caller_cleanup_calls=0; callee_ret_pop=[8]; expected_stack=8; receiver_family_members=13;
   same_this_callees=3; closed_callee_receiver_chain */

int __thiscall
st::fn_00693DC0
          (RecoveredReceiver_00693B20 *this,cMf32 *param_1,undefined4 param_2)

{
  int iVar1;
  RecoveredReceiver_00693B20 *pRVar3;
  RecoveredRecordView_00693910_0CDC4AE1 *pRVar4;
  RecoveredRecordView_00693910_0CDC4AE1 local_19a8;
  uint uStack_8;
  uStack_8 = 0x693dcd;
  st::fn_004038AA(&local_19a8);
  pRVar3 = this;
  pRVar4 = &local_19a8;
  memmove(pRVar4, pRVar3, 0x1998); /* compiler REP MOVS byte copy */
  pRVar4 = reinterpret_cast<RecoveredRecordView_00693910_0CDC4AE1 *>(((byte *)pRVar4 + 0x1998));
  pRVar3 = pRVar3 + 0x222;
  *(undefined1 *)pRVar4 = *(undefined1 *)&pRVar3->field_0000;
  iVar1 = 0;
  do {
    st::fn_00401F05(this,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);

  iVar1 = st::fn_00402103(this,param_1,param_2);
  pRVar4 = &local_19a8;
  memmove(this, pRVar4, 0x1998); /* compiler REP MOVS byte copy */
  this = this + 0x222;
  pRVar4 = reinterpret_cast<RecoveredRecordView_00693910_0CDC4AE1 *>(((byte *)pRVar4 + 0x1998));
  *(undefined1 *)&this->field_0000 = *(undefined1 *)pRVar4;
  st::fn_00403783();
  return iVar1;
}

// 00693EB0 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00693B20::FUN_00693eb0
#line 4 "decomp/ST.exe/functions/00693EB0/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_00693B20.
   Evidence: incoming_receiver_captures=0; entry_receiver_register_captures=1; receiver_accesses=1;
   receiver_bulk_copies=1; incoming_edx_uses=0; calls=0; ecx_pointer_setup=0; ecx_scalar_setup=0;
   caller_cleanup_calls=0; callee_ret_pop=[8]; expected_stack=8; receiver_family_members=13;
   same_this_callees=2; closed_callee_receiver_chain */

undefined4 __thiscall
st::fn_00693EB0
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
  puVar9 = reinterpret_cast<byte *>((local_19ac));
  memmove(puVar9, pRVar8, 0x1998); /* compiler REP MOVS byte copy */
  puVar9 = reinterpret_cast<byte *>((puVar9 + 0x666));
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
  st::fn_004026D5(this,param_1);
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
