
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=52;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=3;
   incoming_ecx_receiver_callers=2; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004A8920 -> 006E1050 @ 004A89F8; data at 00807598 | 006E1460 -> 006E1050 @ 006E15DE;
   ST3DSMAPContext::sub_006E1460 this; stable alias ESI */

void __fastcall ST3DSMAPContext::sub_006E1050(ST3DSMAPContext *param_1)

{
  uint uVar1;
  ST3DSMAPContext *this;
  double dVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int local_28;
  int local_24;
  float local_18;
  float local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  dVar2 = param_1->field_00D8 * param_1->field_00C8 * _DAT_0079df60 + _DAT_007901c0;
  Library::MSVCRT::FUN_0072e150(SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
  lVar7 = Library::MSVCRT::__ftol();
  param_1->field_02C0 = (int)lVar7;
  dVar2 = (param_1->field_00E0 * param_1->field_00C8 + _DAT_0079cd88) * _DAT_007901c0;
  Library::MSVCRT::FUN_0072e150(SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
  lVar7 = Library::MSVCRT::__ftol();
  iVar3 = (int)lVar7;
  param_1->field_02C4 = iVar3;
  uVar1 = (param_1->field_0028 + -1 + param_1->field_02C0) / param_1->field_02C0 + 1;
  param_1->field_02B8 = uVar1;
  iVar3 = (param_1->field_002C + -1 + iVar3) / iVar3 + 1;
  param_1->field_02BC = iVar3;
  iVar3 = iVar3 * uVar1;
  if (iVar3 - param_1->field_02B4 != 0 && param_1->field_02B4 <= iVar3) {
    param_1->field_02B4 = iVar3;
    puVar4 = Library::DKW::LIB::MemRealloc(param_1->field_02B0,iVar3 * 2);
    param_1->field_02B0 = puVar4;
  }
  dVar2 = param_1->field_0098 / param_1->field_00C8;
  Library::MSVCRT::FUN_0072e150(SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
  lVar7 = Library::MSVCRT::__ftol();
  local_8 = (int)lVar7;
  dVar2 = param_1->field_00A0 / param_1->field_00C8;
  Library::MSVCRT::FUN_0072e150(SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20));
  lVar7 = Library::MSVCRT::__ftol();
  local_c = (int)lVar7;
  local_18 = ((float)local_8 + (float)_DAT_007901c0) * (float)param_1->field_00C8;
  local_10 = 0;
  local_14 = ((float)local_c + (float)_DAT_007901c0) * (float)param_1->field_00C8;
  sub_006E25D0(param_1,&local_28);
  iVar3 = (local_28 >> 0x10) % param_1->field_02C0;
  param_1->field_02C8 = iVar3;
  if (iVar3 != 0) {
    param_1->field_02C8 = iVar3 - param_1->field_02C0;
  }
  iVar3 = (local_24 >> 0x10) % param_1->field_02C4;
  param_1->field_02CC = iVar3;
  if (iVar3 != 0) {
    param_1->field_02CC = iVar3 - param_1->field_02C4;
  }
  FUN_006ce6c0(param_1->field_02B0,param_1->field_02B4,30000);
  sub_006DE9C0(param_1);
  if (param_1->field_0358 != 0) {
    *(AnonPointee_ST3DSMAPContext_0280 **)(param_1->field_0358 + 0x280) = param_1->field_0280;
    iVar3 = param_1->field_0358;
    lVar7 = Library::MSVCRT::__ftol();
    iVar5 = (int)lVar7;
    lVar7 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar7;
    if (((param_1->field_0374 == iVar5) && (param_1->field_0378 == iVar6)) &&
       (*(int *)(iVar3 + 0x134) == 0)) {
      param_1->field_0140 = nullptr;
      param_1->field_013C = 0;
      return;
    }
    param_1->field_0374 = iVar5;
    param_1->field_0378 = iVar6;
    *(int *)(iVar3 + 0x374) = iVar5;
    *(int *)(param_1->field_0358 + 0x378) = iVar6;
    this = (ST3DSMAPContext *)param_1->field_0358;
    sub_006DD610(this,4,param_1->field_0368 * _DAT_0079b168 +
                        ((double)param_1->field_0374 * param_1->field_0368 - this->field_0060),
                 ((double)param_1->field_0378 + _DAT_0079b168) * param_1->field_0368 +
                 this->field_0078);
    sub_006DDBE0((ST3DSMAPContext *)param_1->field_0358);
    sub_006DE9C0((ST3DSMAPContext *)param_1->field_0358);
    *(undefined4 *)(param_1->field_0358 + 0x134) = 0;
    param_1->field_0140 = nullptr;
    param_1->field_013C = 0;
    return;
  }
  param_1->field_0140 = nullptr;
  param_1->field_013C = 0;
  return;
}

