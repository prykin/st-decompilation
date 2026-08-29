#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E6D00 -> 004E5C40 @ 004E6DAA
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:1: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=4,
   pointer_dereferences=3, scalar_uses=0; sites=004E6D54 dereference: MOV CL,byte ptr [EAX + EAX*0x2
   + 0x7c0e4d] | 004E6D92 dereference: MOV AL,byte ptr [ECX + EDI*0x1] | 004E6DB9 dereference: CMP
   byte ptr [EDX + EDI*0x1],0x0
   [STAbiConsistencyApplier] ecx_context_register target=function:-1: prototype=undefined __stdcall
   FUN_004e6d00(STAllPlayersC * context, byte * param_2, void * param_3, uint * param_4)
   previous_return_type=/undefined Evidence: incoming ECX reaches only unadjusted __thiscall
   receivers of /STAllPlayersC; receiver_calls=1; exact RET purge=12 matches declared stack
   bytes=12; sites=004E6D31 -> STAllPlayersC::sub_004E6C20 receiver=/STAllPlayersC */

void FUN_004e6d00(STAllPlayersC *context,byte *param_2,void *param_3,uint *param_4)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar5;
  int iVar4;
  int iVar6;
  int iVar8;

  memset(param_4, 0, 0x1e); /* compiler bulk-zero initialization */
  /* ST_CALLSITE[004E6D1D]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  bVar2 = LookupRecordByte((char)param_2);
  /* ST_CALLSITE[004E6D31]: CALL 0x0040469c; direct=0040469C STAllPlayersC::sub_004E6C20 */
  iVar5 = STAllPlayersC::sub_004E6C20(context,param_2,(int)param_3);
  if (iVar5 == 0) {
    iVar8 = 1;
    iVar6 = (int)param_3 + (bVar2 - 1) * 0x42 + -0x32;
    cVar1 = (&DAT_007c0e4d)[iVar6 * 3];
    while ((cVar1 != '\0' && (iVar8 < 3))) {

      iVar4 = thunk_FUN_004e60d0((int)param_2,(uint)(byte)(&DAT_007c0e4c)[iVar8 + iVar6 * 3]);
      if (iVar4 == 0) {
        *param_4 = (uint)(byte)(&DAT_007c0e4c)[iVar8 + iVar6 * 3];
        /* ST_CALLSITE[004E6D99]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        bVar2 = LookupRecordByte((char)param_2);
        ((byte *)param_4)[1] = bVar2;
        bVar3 = thunk_FUN_004e5c40(param_2,*param_4);
        STField<bool>(param_4,5) = bVar3;
        param_4 = (uint *)((int)param_4 + 6);
      }
      iVar8 = iVar8 + 1;
      cVar1 = (&DAT_007c0e4c)[iVar8 + iVar6 * 3];
    }
  }
  return;
}

