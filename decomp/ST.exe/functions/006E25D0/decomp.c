
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=19; incoming_this_accesses=32;
   incoming_edx_uses=0; incoming_stack_parameter_uses=61; direct_non_thunk_callers=21;
   incoming_ecx_receiver_callers=14; attributed_named_callers=7; owner_evidence_coverage=adequate */

int __thiscall ST3DSMAPContext::sub_006E25D0(ST3DSMAPContext *this,int *param_1)

{
  ST3DSMAPContext_field_00A8State SVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;

  SVar1 = this->field_00A8;
  if ((SVar1 & 8) == CASE_0) {
    switch(SVar1) {
    case CASE_0:
      break;
    case CASE_1:
      break;
    case CASE_2:
      break;
    case CASE_3:
      break;
    default:
      param_1[3] = 0;
      return 0;
    }
  }
  else {
    switch(SVar1 & 0xfffffff7) {
    case CASE_0:
      break;
    case CASE_1:
      break;
    case CASE_2:
      break;
    case CASE_3:
    }
  }
  iVar3 = 1;
  lVar4 = Library::MSVCRT::__ftol();
  iVar2 = (int)lVar4 + this->field_0030 * 0x10000;
  *param_1 = iVar2;
  if ((iVar2 < this->field_0030 * 0x10000) || (this->field_0038 * 0x10000 <= iVar2)) {
    iVar3 = 0;
  }
  lVar4 = Library::MSVCRT::__ftol();
  iVar2 = (int)lVar4 + this->field_0034 * 0x10000;
  param_1[1] = iVar2;
  if ((iVar2 < this->field_0034 * 0x10000) || (this->field_003C * 0x10000 <= iVar2)) {
    iVar3 = 0;
  }
  lVar4 = Library::MSVCRT::__ftol();
  param_1[2] = (int)lVar4;
  param_1[3] = iVar3;
  return iVar3;
}

