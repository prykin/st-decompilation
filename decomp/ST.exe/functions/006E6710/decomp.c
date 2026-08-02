
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
          (ST3DSMAPContext *this,float param_1,float param_2,uint param_3,undefined4 param_4,
          int param_5)

{
  AnonPointee_ST3DSMAPContext_044E *pAVar1;
  longlong lVar2;

  pAVar1 = this->field_044E;
  do {
    if (pAVar1 == nullptr) {
LAB_006e673a:
      pAVar1 = (AnonPointee_ST3DSMAPContext_044E *)Library::DKW::LIB::FUN_006aac10(0x18);
      if (pAVar1 != nullptr) {
        FUN_006b9910(&this->field_044E,(int)pAVar1);
LAB_006e674e:
        pAVar1->field_0004 = param_5;
        lVar2 = Library::MSVCRT::__ftol();
        pAVar1->field_0008 = (int)lVar2;
        pAVar1->field_000C = param_1;
        pAVar1->field_0010 = param_2;
        *(undefined4 *)&pAVar1->field_0014 = param_4;
      }
      return;
    }
    if (pAVar1->field_0004 == param_5) {
      if (pAVar1 != nullptr) goto LAB_006e674e;
      goto LAB_006e673a;
    }
    pAVar1 = (AnonPointee_ST3DSMAPContext_044E *)pAVar1->field_0000;
  } while( true );
}

