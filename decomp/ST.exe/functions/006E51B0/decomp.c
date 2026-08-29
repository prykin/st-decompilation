#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 006E51B0 returns stored into /CampaignTy+0x61 @ 00593058 | 006E51B0 returns stored into
   /ChooseMapTy+0x61 @ 005B0BBB | 006E51B0 returns stored into /FSGSTy+0x61 @ 005A436B | 006E51B0
   returns stored into /MainMenuTy+0x61 @ 005B4BC9 | 006E51B0 returns stored into /PrividerTy+0x61 @
   005BC5FB | 006E51B0 returns stored into /SIDTy+0x61 @ 005D9486 | 006E51B0 returns stored into
   /SettMapTy+0x61 @ 005C8A5B | 006E51B0 returns stored into /WaitTy+0x61 @ 005EA69B

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0056A5F0 -> 006E51B0 @ 0056A74B

   [STMethodOwnerApplier] Structural method owner recovered as STAppC.
   Evidence: this_call_owners=[STAppC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=39;
   incoming_ecx_receiver_callers=2; attributed_named_callers=2; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (53), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004C61E0 @ 004C61ED -> read as EAX on
   every CFG path | 004C6210 @ 004C635F -> read as EAX on every CFG path | 004C6440 @ 004C6680 ->
   read as EAX on every CFG path | 004C6440 @ 004C6777 -> read as EAX on every CFG path | 004C9770 @
   004C9CD3 -> read as EAX on every CFG path | 004FB060 @ 004FB074 -> read as EAX on every CFG path
   | 0051FAC0 @ 0051FB2B -> read as EAX on every CFG path | 0051FBA0 @ 0051FCF4 -> read as EAX on
   every CFG path | 0052DD20 @ 0052DEAA -> read as EAX on every CFG path | 0052DD20 @ 0052DFBE ->
   read as EAX on every CFG path | 0052DD20 @ 0052E00A -> read as EAX on every CFG path | 005384A0 @
   005384B0 -> read as EAX on every CFG path | 00543C90 @ 00543CA0 -> read as EAX on every CFG path
   | 005449B0 @ 005449C2 -> read as EAX on every CFG path | 0054D640 @ 0054DF87 -> read as EAX on
   every CFG path | 0054E4F0 @ 0054E7D1 -> read as EAX on every CFG path | 0054F1D0 @ 0054F75C ->
   read as EAX on every CFG path | 0054F1D0 @ 0054F78A -> read as EAX on every CFG path | 0054F1D0 @
   0054F8AB -> read as EAX on every CFG path | 0054F1D0 @ 0054F923 -> read as EAX on every CFG path
   | 0054F1D0 @ 0054FC03 -> read as EAX on every CFG path | 00550430 @ 0055046A -> read as EAX on
   every CFG path | 005505D0 @ 00550655 -> read as EAX on every CFG path | 005505D0 @ 005506BA ->
   read as EAX on every CFG path */

int __thiscall STAppC::sub_006E51B0(STAppC *this)

{
  return this->field_0018;
}

