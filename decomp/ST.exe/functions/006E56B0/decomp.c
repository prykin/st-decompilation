
/* [STMethodOwnerApplier] Structural method owner recovered as StartSystemTy.
   Evidence: this_call_owners=[StartSystemTy]; agreed_this_calls=4; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5 */

void __thiscall StartSystemTy::sub_006E56B0(StartSystemTy *this,uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined4 *local_8;
  
  uVar2 = param_1;
  local_8 = (undefined4 *)0x0;
  iVar3 = sub_006E5360(this,param_1,(int *)&param_1,&local_8);
  if (iVar3 == 0) {
    local_18 = 3;
    (**(code **)*local_8)(local_28);
  }
  iVar3 = sub_006E5360(this,uVar2,(int *)&param_1,&local_8);
  if (iVar3 == 0) {
    FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)this->field_0010,param_1);
    AppClassTy::DeleteObject(this->field_0018,uVar2);
    for (puVar1 = (undefined4 *)this->field_000C; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      uVar2 = puVar1[1];
      if ((param_1 <= uVar2) && (uVar2 != 0)) {
        puVar1[1] = uVar2 - 1;
      }
    }
  }
  return;
}

