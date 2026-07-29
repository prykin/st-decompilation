
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=19; incoming_this_accesses=32;
   incoming_edx_uses=0; incoming_stack_parameter_uses=61; direct_non_thunk_callers=21;
   incoming_ecx_receiver_callers=14; attributed_named_callers=7; owner_evidence_coverage=adequate */

int __thiscall ST3DSMAPContext::sub_006E25D0(ST3DSMAPContext *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;

  uVar1 = *(uint *)&this->field_0xa8;
  if ((uVar1 & 8) == 0) {
    switch(uVar1) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    default:
      param_1[3] = 0;
      return 0;
    }
  }
  else {
    switch(uVar1 & 0xfffffff7) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
    }
  }
  iVar3 = 1;
  lVar4 = Library::MSVCRT::__ftol();
  iVar2 = (int)lVar4 + *(int *)&this->field_0x30 * 0x10000;
  *param_1 = iVar2;
  if ((iVar2 < *(int *)&this->field_0x30 * 0x10000) ||
     (*(int *)&this->field_0x38 * 0x10000 <= iVar2)) {
    iVar3 = 0;
  }
  lVar4 = Library::MSVCRT::__ftol();
  iVar2 = (int)lVar4 + *(int *)&this->field_0x34 * 0x10000;
  param_1[1] = iVar2;
  if ((iVar2 < *(int *)&this->field_0x34 * 0x10000) ||
     (*(int *)&this->field_0x3c * 0x10000 <= iVar2)) {
    iVar3 = 0;
  }
  lVar4 = Library::MSVCRT::__ftol();
  param_1[2] = (int)lVar4;
  param_1[3] = iVar3;
  return iVar3;
}

