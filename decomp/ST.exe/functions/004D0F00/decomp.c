#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   /int; every later accumulator definition is an exact full-width integer transform of that value;
   at least two resolved callers confirm that the entry is an externally observed ABI boundary;
   machine CFG audit: used=1, ignored=3, unknown=0 */

int FUN_004d0f00(void)

{
  undefined4 local_20 [7];

  memset(local_20, 0, 0x1c); /* compiler bulk-zero initialization */
  local_20[4] = 0;
  local_20[3] = 1;
  local_20[2] = 2;
  local_20[1] = 0xff;
  local_20[0] = 0x3ea;
  /* ST_CALLSITE[004D0F46]: CALL 0x00401bc2; direct=00401BC2 STPlaySystemC::CreateGameObject */
  STPlaySystemC::CreateGameObject(g_playSystem_00802A38,0x3ea,0,0,local_20,0);
  return 0;
}

