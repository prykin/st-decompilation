
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0041CE40 -> 006E6710 @ 0041CEFD | 0041CFF0 -> 006E6710 @ 0041D0B4 | 0041D1A0 ->
   006E6710 @ 0041D264 | 0041D3E0 -> 006E6710 @ 0041D4A4 | 0041DD00 -> 006E6710 @ 0041DE41 |
   0041DD00 -> 006E6710 @ 0041DECC | 00479600 -> 006E6710 @ 0047A8AF

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=5; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=8;
   incoming_ecx_receiver_callers=0; attributed_named_callers=5; owner_evidence_coverage=adequate */

void __thiscall
ST3DSMAPContext::sub_006E6710
          (ST3DSMAPContext *this,undefined4 param_1,undefined4 param_2,uint param_3,
          undefined4 param_4,int param_5)

{
  undefined4 *puVar1;
  longlong lVar2;

  puVar1 = *(undefined4 **)&this->field_0x44e;
  do {
    if (puVar1 == (undefined4 *)0x0) {
LAB_006e673a:
      puVar1 = Library::DKW::LIB::FUN_006aac10(0x18);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_006b9910((undefined4 *)&this->field_0x44e,(int)puVar1);
LAB_006e674e:
        puVar1[1] = param_5;
        lVar2 = Library::MSVCRT::__ftol();
        puVar1[2] = (int)lVar2;
        puVar1[3] = param_1;
        puVar1[4] = param_2;
        puVar1[5] = param_4;
      }
      return;
    }
    if (puVar1[1] == param_5) {
      if (puVar1 != (undefined4 *)0x0) goto LAB_006e674e;
      goto LAB_006e673a;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

