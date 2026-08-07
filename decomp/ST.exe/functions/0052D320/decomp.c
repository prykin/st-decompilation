#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00571400 -> 0052D320 @ 00571603 | 00571400 -> 0052D320 @ 00571642 | 00571400 ->
   0052D320 @ 00571654 */

void __thiscall FUN_0052d320(void *this,char *text,uint param_2)

{
  byte bVar1;

  bVar1 = (byte)param_2;
  if (STField<char>(this,0x9c) == '\0') {
    PopUpTy::AddStr(this,&CHAR___007c3b5c,bVar1);
    PopUpTy::AddStr(this,&CHAR___007c3b5c,bVar1);
  }
  PopUpTy::AddStr(this,text,bVar1);
  return;
}

