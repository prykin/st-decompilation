#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 005FCE70 returns return of Library::MSVCRT::_strncpy @ 005FCE97 */

char * __thiscall FUN_005fce70(void *this,char *param_1)

{
  char *pcVar1;

  pcVar1 = Library::MSVCRT::_strncpy((char *)((int)this + 0x36b),param_1,0x103);
  STField<undefined1>(this,0x46e) = 0;
  return pcVar1;
}

