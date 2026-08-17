#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: complete mutable byte-buffer machine proof: direct_calls=4, byte_reads=3,
   byte_writes=3, rep_movs_transports=0, wide_dereferences=2, escapes=0; byte_read_sites=006CE72D
   MOV AL,byte ptr [ESI] | 006CE73E MOV AL,byte ptr [ESI] | 006CE74F MOV AL,byte ptr [ESI];
   byte_write_sites=006CE733 MOV byte ptr [ESI + -0x1],DL | 006CE744 MOV byte ptr [ESI + -0x1],DL |
   006CE755 MOV byte ptr [ESI + -0x1],DL; wide_sites=006CE713 MOV EAX,dword ptr [ESI] operand=DWORD
   PTR [ESI] width=4 | 006CE71D MOV dword ptr [ESI + -0x4],EDX operand=DWORD PTR [ESI + -0X4]
   width=4

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: complete mutable byte-buffer machine proof: direct_calls=4, byte_reads=3,
   byte_writes=3, rep_movs_transports=0, wide_dereferences=2, escapes=0; byte_read_sites=006CE730
   MOV DL,byte ptr [EDI] | 006CE741 MOV DL,byte ptr [EDI] | 006CE752 MOV DL,byte ptr [EDI];
   byte_write_sites=006CE739 MOV byte ptr [EDI + -0x1],AL | 006CE74A MOV byte ptr [EDI + -0x1],AL |
   006CE758 MOV byte ptr [EDI + -0x1],AL; wide_sites=006CE718 MOV EDX,dword ptr [EDI] operand=DWORD
   PTR [EDI] width=4 | 006CE723 MOV dword ptr [EDI + -0x4],EAX operand=DWORD PTR [EDI + -0X4]
   width=4 */

void FUN_006ce700(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;

  while (bVar3 = 3 < param_3, param_3 = param_3 + -4, bVar3) {
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)param_2 = uVar2;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
  }
  cVar4 = (char)param_3;
  if (-4 < cVar4) {
    bVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = bVar1;
    if (-3 < cVar4) {
      bVar1 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = bVar1;
      if (-2 < cVar4) {
        bVar1 = param_1[2];
        param_1[2] = param_2[2];
        param_2[2] = bVar1;
      }
    }
  }
  return;
}

