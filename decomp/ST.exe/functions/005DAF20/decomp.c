
/* [STMethodOwnerApplier] Structural method owner recovered as StartSystemTy.
   Evidence: this_call_owners=[StartSystemTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0 */

void __thiscall StartSystemTy::sub_005DAF20(StartSystemTy *this)

{
  char cVar1;

  if (g_int_00811764 == (int *)0x0) goto LAB_005dafab;
  FUN_006b6500(g_int_00811764,1);
  if (DAT_0080877e == '\0') {
    if (DAT_0080c50e != 0) {
      FUN_00715360(g_int_00811764,0,'\x13',(char *)0x0,0,0,0xffffffff);
    }
    if (DAT_0080c50a != 0) {
      cVar1 = '\x11';
      goto LAB_005daf91;
    }
  }
  else {
    cVar1 = '\x10';
LAB_005daf91:
    FUN_00715360(g_int_00811764,0,cVar1,(char *)0x0,0,0,0xffffffff);
  }
  FUN_006b6500(g_int_00811764,DAT_0080733c);
LAB_005dafab:
  sub_005DAB30(this);
  thunk_FUN_005dac60();
  thunk_FUN_005daa60();
  if ((AnonShape_006B5570_4D68B99C *)this->field_0696 != (AnonShape_006B5570_4D68B99C *)0x0) {
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)this->field_0696);
  }
  this->field_0696 = (AnonPointee_StartSystemTy_0696 *)0x0;
  return;
}

