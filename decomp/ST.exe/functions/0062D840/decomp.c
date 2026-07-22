
/* [STMethodOwnerApplier] Structural method owner recovered as STManRub3C.
   Evidence: this_call_owners=[STManRub3C]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STManRub3C::sub_0062D840(STManRub3C *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;

  puVar1 = param_1;
  if (this == (STManRub3C *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = &this->field_001C;
  }
  param_1 = (undefined4 *)0x98;
  puVar4 = puVar1;
  for (iVar3 = 0x26; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  piVar5 = puVar1 + 0x26;
  this->field_00B4 = this->field_00B0;
  iVar3 = 0;
  do {
    iVar2 = 0;
    switch(iVar3) {
    case 0:
      piVar7 = &this->field_0030;
      break;
    case 1:
      piVar7 = &this->field_0050;
      break;
    case 2:
      piVar7 = &this->field_0070;
      break;
    case 3:
      piVar7 = (int *)&this->field_0x90;
      break;
    default:
      goto switchD_0062d881_default;
    }
    iVar2 = thunk_FUN_0062d7d0(piVar7,piVar5);
switchD_0062d881_default:
    piVar5 = (int *)((int)piVar5 + iVar2);
    param_1 = (undefined4 *)((int)param_1 + iVar2);
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      return (int)param_1;
    }
  } while( true );
}

