
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=19; incoming_this_accesses=32;
   incoming_edx_uses=0; incoming_stack_parameter_uses=61; direct_non_thunk_callers=21;
   incoming_ecx_receiver_callers=14; attributed_named_callers=7; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] machine_stack_arity_expansion target=function:-1: prototype=int
   __thiscall sub_006E25D0(ST3DSMAPContext * this, int * param_2, float * param_3, double param_4,
   double param_5, double param_6, undefined4 param_7) previous_return_type=/int Evidence: every
   machine RET purges exactly 36 explicit stack bytes while the current signature describes 4; every
   incoming byte is read before an overlapping listing write; newly exposed x87 double slot(s)=[32,
   16, 24]; inferred=[EBP+0xC=pointer:/float, EBP+0x10=/double, EBP+0x18=/double, EBP+0x20=/double,
   EBP+0x28=/undefined4]; sites=006E25D9 MOV ECX,dword ptr [EBP + 0xc] | 006E25DF FADD double ptr
   [EBP + 0x20] | 006E262A FADD double ptr [EBP + 0x10] | 006E263F FADD double ptr [EBP + 0x18] |
   006E2672 FADD double ptr [EBP + 0x18] | 006E289F MOV EDI,dword ptr [EBP + 0x8] | 006E290C MOV
   EAX,dword ptr [EBP + 0x28] | 006E293B MOV EAX,dword ptr [EBP + 0x8]; ret_sites=006E2938 RET 0x24
   | 006E294B RET 0x24 */

int __thiscall
ST3DSMAPContext::sub_006E25D0
          (ST3DSMAPContext *this,int *param_2,float *param_3,double param_4,double param_5,
          double param_6,int param_7)

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
      param_2[3] = 0;
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
  *param_2 = iVar2;
  if ((iVar2 < this->field_0030 * 0x10000) || (this->field_0038 * 0x10000 <= iVar2)) {
    iVar3 = 0;
  }
  lVar4 = Library::MSVCRT::__ftol();
  iVar2 = (int)lVar4 + this->field_0034 * 0x10000;
  param_2[1] = iVar2;
  if ((iVar2 < this->field_0034 * 0x10000) || (this->field_003C * 0x10000 <= iVar2)) {
    iVar3 = 0;
  }
  lVar4 = Library::MSVCRT::__ftol();
  param_2[2] = (int)lVar4;
  param_2[3] = iVar3;
  return iVar3;
}

