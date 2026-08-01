
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
  ST3DSMAPContext *this;
  double dVar1;
  double dVar2;
  int iVar3;
  void *pvVar4;
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

  dVar1 = *(double *)&param_1->field_0xd8 * *(double *)&param_1->field_0xc8 * _DAT_0079df60 +
          _DAT_007901c0;
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar7 = Library::MSVCRT::__ftol();
  *(int *)&param_1->field_0x2c0 = (int)lVar7;
  dVar1 = (*(double *)&param_1->field_0xe0 * *(double *)&param_1->field_0xc8 + _DAT_0079cd88) *
          _DAT_007901c0;
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar7 = Library::MSVCRT::__ftol();
  iVar3 = (int)lVar7;
  *(int *)&param_1->field_0x2c4 = iVar3;
  iVar6 = (param_1->field_0028 + -1 + *(int *)&param_1->field_0x2c0) / *(int *)&param_1->field_0x2c0
          + 1;
  *(int *)&param_1->field_0x2b8 = iVar6;
  iVar3 = (*(int *)&param_1->field_0x2c + -1 + iVar3) / iVar3 + 1;
  *(int *)&param_1->field_0x2bc = iVar3;
  iVar3 = iVar3 * iVar6;
  if (iVar3 - *(int *)&param_1->field_0x2b4 != 0 && *(int *)&param_1->field_0x2b4 <= iVar3) {
    *(int *)&param_1->field_0x2b4 = iVar3;
    pvVar4 = Library::DKW::LIB::MemRealloc
                       (*(AnonPointee_TLOBaseTy_0607 **)&param_1->field_0x2b0,iVar3 * 2);
    *(void **)&param_1->field_0x2b0 = pvVar4;
  }
  dVar1 = param_1->field_0098 / *(double *)&param_1->field_0xc8;
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar7 = Library::MSVCRT::__ftol();
  local_8 = (int)lVar7;
  dVar1 = param_1->field_00A0 / *(double *)&param_1->field_0xc8;
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar7 = Library::MSVCRT::__ftol();
  local_c = (int)lVar7;
  local_18 = ((float)local_8 + (float)_DAT_007901c0) * (float)*(double *)&param_1->field_0xc8;
  local_10 = 0;
  local_14 = ((float)local_c + (float)_DAT_007901c0) * (float)*(double *)&param_1->field_0xc8;
  sub_006E25D0(param_1,&local_28);
  iVar6 = (local_28 >> 0x10) % *(int *)&param_1->field_0x2c0;
  *(int *)&param_1->field_0x2c8 = iVar6;
  if (iVar6 != 0) {
    *(int *)&param_1->field_0x2c8 = iVar6 - *(int *)&param_1->field_0x2c0;
  }
  iVar6 = (local_24 >> 0x10) % *(int *)&param_1->field_0x2c4;
  *(int *)&param_1->field_0x2cc = iVar6;
  if (iVar6 != 0) {
    *(int *)&param_1->field_0x2cc = iVar6 - *(int *)&param_1->field_0x2c4;
  }
  FUN_006ce6c0(*(ushort **)&param_1->field_0x2b0,*(uint *)&param_1->field_0x2b4,30000);
  sub_006DE9C0(param_1);
  if (*(int *)&param_1->field_0x358 != 0) {
    *(undefined4 *)(*(int *)&param_1->field_0x358 + 0x280) = *(undefined4 *)&param_1->field_0x280;
    iVar6 = *(int *)&param_1->field_0x358;
    lVar7 = Library::MSVCRT::__ftol();
    iVar3 = (int)lVar7;
    lVar7 = Library::MSVCRT::__ftol();
    iVar5 = (int)lVar7;
    if (((*(int *)&param_1->field_0x374 == iVar3) && (*(int *)&param_1->field_0x378 == iVar5)) &&
       (*(int *)(iVar6 + 0x134) == 0)) {
      *(undefined4 *)&param_1->field_0x140 = 0;
      *(undefined4 *)&param_1->field_0x13c = 0;
      return;
    }
    *(int *)&param_1->field_0x374 = iVar3;
    *(int *)&param_1->field_0x378 = iVar5;
    *(int *)(iVar6 + 0x374) = iVar3;
    *(int *)(*(int *)&param_1->field_0x358 + 0x378) = iVar5;
    this = *(ST3DSMAPContext **)&param_1->field_0x358;
    dVar1 = ((double)*(int *)&param_1->field_0x378 + _DAT_0079b168) *
            *(double *)&param_1->field_0x368 + *(double *)&this->field_0x78;
    dVar2 = *(double *)&param_1->field_0x368 * _DAT_0079b168 +
            ((double)*(int *)&param_1->field_0x374 * *(double *)&param_1->field_0x368 -
            *(double *)&this->field_0x60);
    sub_006DD610(this,4,SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),SUB84(dVar1,0),
                 (int)((ulonglong)dVar1 >> 0x20));
    sub_006DDBE0(*(ST3DSMAPContext **)&param_1->field_0x358);
    sub_006DE9C0(*(ST3DSMAPContext **)&param_1->field_0x358);
    *(undefined4 *)(*(int *)&param_1->field_0x358 + 0x134) = 0;
    *(undefined4 *)&param_1->field_0x140 = 0;
    *(undefined4 *)&param_1->field_0x13c = 0;
    return;
  }
  *(undefined4 *)&param_1->field_0x140 = 0;
  *(undefined4 *)&param_1->field_0x13c = 0;
  return;
}

