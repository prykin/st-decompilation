#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00693DC0 -> 00693D00 @ 00693E07 */

undefined4 FUN_00693dc0(cMf32 *param_1,undefined4 param_2)

{
  uint uVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  AnonReceiver_00693D00 *in_ECX;
  int iVar2;
  AnonReceiver_00693D00 *pAVar3;
  AnonShape_00693910_1CC6632C *pAVar4;
  AnonShape_00693910_1CC6632C local_19a8;
  undefined4 uStack_8;

  uStack_8 = 0x693dcd;
  thunk_FUN_00693910(&local_19a8);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  pAVar3 = in_ECX;
  pAVar4 = &local_19a8;
  memmove(pAVar4, pAVar3, 0x1999); /* compiler REP MOVS byte copy */
  iVar2 = 0;
  do {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    thunk_FUN_006940b0(in_ECX,iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uVar1 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00693D00::thunk_FUN_00693d00
                    (in_ECX,param_1,param_2);
  pAVar4 = &local_19a8;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  memmove(in_ECX, pAVar4, 0x1999); /* compiler REP MOVS byte copy */
  thunk_FUN_006939d0();
  return uVar1;
}

