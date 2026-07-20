
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00571400 -> 0052D320 @ 00571603 | 00571400 -> 0052D320 @ 00571642 | 00571400 ->
   0052D320 @ 00571654 */

void __thiscall FUN_0052d320(void *this,char *text,uint param_2)

{
  if (*(char *)((int)this + 0x9c) == '\0') {
    PopUpTy::AddStr(this,&DAT_007c3b5c,param_2);
    PopUpTy::AddStr(this,&DAT_007c3b5c,param_2);
  }
  PopUpTy::AddStr(this,text,param_2);
  return;
}

