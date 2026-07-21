
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006e1050(AnonShape_006E1050_52F5A113 *param_1)

{
  void *this;
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int local_28;
  int local_24;
  float local_18;
  float local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  dVar1 = param_1->field_00D8 * param_1->field_00C8 * _DAT_0079df60 + _DAT_007901c0;
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar6 = Library::MSVCRT::__ftol();
  param_1->field_02C0 = (int)lVar6;
  dVar1 = (param_1->field_00E0 * param_1->field_00C8 + _DAT_0079cd88) * _DAT_007901c0;
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar6 = Library::MSVCRT::__ftol();
  iVar3 = (int)lVar6;
  param_1->field_02C4 = iVar3;
  iVar4 = (param_1->field_0028 + -1 + param_1->field_02C0) / param_1->field_02C0 + 1;
  param_1->field_02B8 = iVar4;
  iVar3 = (param_1->field_002C + -1 + iVar3) / iVar3 + 1;
  param_1->field_02BC = iVar3;
  iVar3 = iVar3 * iVar4;
  if (iVar3 - param_1->field_02B4 != 0 && (int)param_1->field_02B4 <= iVar3) {
    param_1->field_02B4 = iVar3;
    iVar4 = Library::DKW::LIB::FUN_006acf50(param_1->field_02B0,iVar3 * 2);
    param_1->field_02B0 = iVar4;
  }
  dVar1 = param_1->field_0098 / param_1->field_00C8;
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar6 = Library::MSVCRT::__ftol();
  local_8 = (int)lVar6;
  dVar1 = param_1->field_00A0 / param_1->field_00C8;
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar6 = Library::MSVCRT::__ftol();
  local_c = (int)lVar6;
  local_18 = ((float)local_8 + (float)_DAT_007901c0) * (float)param_1->field_00C8;
  local_10 = 0;
  local_14 = ((float)local_c + (float)_DAT_007901c0) * (float)param_1->field_00C8;
  FUN_006e25d0(param_1,&local_28);
  iVar4 = (local_28 >> 0x10) % param_1->field_02C0;
  param_1->field_02C8 = iVar4;
  if (iVar4 != 0) {
    param_1->field_02C8 = iVar4 - param_1->field_02C0;
  }
  iVar4 = (local_24 >> 0x10) % param_1->field_02C4;
  param_1->field_02CC = iVar4;
  if (iVar4 != 0) {
    param_1->field_02CC = iVar4 - param_1->field_02C4;
  }
  FUN_006ce6c0((ushort *)param_1->field_02B0,param_1->field_02B4,30000);
  FUN_006de9c0((AnonShape_006DE9C0_E5D1D3B8 *)param_1);
  if (param_1->field_0358 != 0) {
    *(undefined4 *)(param_1->field_0358 + 0x280) = param_1->field_0280;
    iVar4 = param_1->field_0358;
    lVar6 = Library::MSVCRT::__ftol();
    iVar3 = (int)lVar6;
    lVar6 = Library::MSVCRT::__ftol();
    iVar5 = (int)lVar6;
    if (((param_1->field_0374 == iVar3) && (param_1->field_0378 == iVar5)) &&
       (*(int *)(iVar4 + 0x134) == 0)) {
      param_1->field_0140 = 0;
      param_1->field_013C = 0;
      return;
    }
    param_1->field_0374 = iVar3;
    param_1->field_0378 = iVar5;
    *(int *)(iVar4 + 0x374) = iVar3;
    *(int *)(param_1->field_0358 + 0x378) = iVar5;
    this = (void *)param_1->field_0358;
    dVar1 = ((double)param_1->field_0378 + _DAT_0079b168) * param_1->field_0368 +
            *(double *)((int)this + 0x78);
    dVar2 = param_1->field_0368 * _DAT_0079b168 +
            ((double)param_1->field_0374 * param_1->field_0368 - *(double *)((int)this + 0x60));
    FUN_006dd610(this,4,SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),SUB84(dVar1,0),
                 (int)((ulonglong)dVar1 >> 0x20));
    FUN_006ddbe0((AnonShape_006DDBE0_9835BAB9 *)param_1->field_0358);
    FUN_006de9c0((AnonShape_006DE9C0_E5D1D3B8 *)param_1->field_0358);
    *(undefined4 *)(param_1->field_0358 + 0x134) = 0;
    param_1->field_0140 = 0;
    param_1->field_013C = 0;
    return;
  }
  param_1->field_0140 = 0;
  param_1->field_013C = 0;
  return;
}

