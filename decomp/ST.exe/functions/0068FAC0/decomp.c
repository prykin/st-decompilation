#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0068FAD5 MOV CX,word ptr
   [EBP + 0x8] */

int __thiscall FUN_0068fac0(void *this,ushort param_1,undefined4 param_2)

{
  uint local_38 [2];
  ushort local_2f;
  uint local_2d;
  short local_29;

  memset(local_38, 0, 0x34); /* compiler bulk-zero initialization */
  local_38[1] = STField<undefined4>(this,300);
  local_2f = param_1;
  local_38[0] = 0x76;
  local_2d = param_2;
  /* ST_CALLSITE[0068FAFE]: CALL 0x00403cdd; direct=00403CDD AiTactClassTy::sub_006902B0 */
  AiTactClassTy::sub_006902B0(this,-0x8000,local_38);
  return (int)local_29;
}

