#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 005A3AB0 -> 005A39A0 @ 005A3D10 | 005A3AB0 -> 005A39A0 @ 005A3D30 | 005A3AB0 ->
   005A39A0 @ 005A3D53 | 005A3AB0 -> 005A39A0 @ 005A3D76 | 005A3AB0 -> 005A39A0 @ 005A3D96 |
   005A3AB0 -> 005A39A0 @ 005A3DB6 | 005A3AB0 -> 005A39A0 @ 005A3ED2 | 005A3AB0 -> 005A39A0 @
   005A3EF2 | 005A3AB0 -> 005A39A0 @ 005A3F15 | 005A3AB0 -> 005A39A0 @ 005A3F38

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005A39A0 parameter used as this of ccFntTy::SetSurf @ 005A3A50 | 005A39A0 parameter
   used as this of ccFntTy::WrStr @ 005A3A61

   [STMethodOwnerApplier] Structural method owner recovered as FSGSTy.
   Evidence: this_call_owners=[FSGSTy]; agreed_this_calls=10; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=10; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=10, used=0), and
   decompilation contains no value return */

void __thiscall
FSGSTy::sub_005A39A0
          (FSGSTy *this,ccFntTy *param_1,char *text,uint param_3,byte *param_4,int param_5,
          int param_6,int param_7,int param_8)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  CHAR local_10 [12];

  pbVar3 = thunk_FUN_0055d590(text,param_3,param_4);
  if (pbVar3 != nullptr) {
    iVar5 = -1;
    pbVar9 = pbVar3;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar1 != 0);
    if (iVar5 != -2) {
      uVar4 = Library::MSVCRT::FUN_0072ff00(pbVar3);
      /* ST_CALLSITE[005A39E5]: CALL dword ptr [0x0085bde8] */
      wsprintfA(local_10,"%6d",uVar4);
      goto LAB_005a3a15;
    }
  }
  uVar6 = 0xffffffff;
  pcVar8 = &CHAR___007cc58c;
  do {
    pcVar10 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar10 + -uVar6;
  pcVar10 = local_10;
  memmove(pcVar10, pcVar8, uVar6); /* compiler REP MOVS byte copy */
LAB_005a3a15:
  FUN_006b4170((RecoveredSourceFamily_dibcopy *)this->field_1AC0,0,param_5,param_6,param_7,param_8,
               0xff);
  ccFntTy::SetSurf(param_1,(int)this->field_1AC0,0,param_5,param_6,param_7,param_8);
  ccFntTy::WrStr(param_1,local_10,-1,-1,0);
  return;
}

