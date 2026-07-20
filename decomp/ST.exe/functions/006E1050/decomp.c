
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006e1050(void *param_1)

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
  
  dVar1 = *(double *)((int)param_1 + 0xd8) * *(double *)((int)param_1 + 200) * _DAT_0079df60 +
          _DAT_007901c0;
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar6 = Library::MSVCRT::__ftol();
  *(int *)((int)param_1 + 0x2c0) = (int)lVar6;
  dVar1 = (*(double *)((int)param_1 + 0xe0) * *(double *)((int)param_1 + 200) + _DAT_0079cd88) *
          _DAT_007901c0;
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar6 = Library::MSVCRT::__ftol();
  iVar3 = (int)lVar6;
  *(int *)((int)param_1 + 0x2c4) = iVar3;
  iVar4 = (*(int *)((int)param_1 + 0x28) + -1 + *(int *)((int)param_1 + 0x2c0)) /
          *(int *)((int)param_1 + 0x2c0) + 1;
  *(int *)((int)param_1 + 0x2b8) = iVar4;
  iVar3 = (*(int *)((int)param_1 + 0x2c) + -1 + iVar3) / iVar3 + 1;
  *(int *)((int)param_1 + 700) = iVar3;
  iVar3 = iVar3 * iVar4;
  if (iVar3 - *(int *)((int)param_1 + 0x2b4) != 0 && *(int *)((int)param_1 + 0x2b4) <= iVar3) {
    *(int *)((int)param_1 + 0x2b4) = iVar3;
    iVar4 = Library::DKW::LIB::FUN_006acf50(*(int *)((int)param_1 + 0x2b0),iVar3 * 2);
    *(int *)((int)param_1 + 0x2b0) = iVar4;
  }
  dVar1 = *(double *)((int)param_1 + 0x98) / *(double *)((int)param_1 + 200);
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar6 = Library::MSVCRT::__ftol();
  local_8 = (int)lVar6;
  dVar1 = *(double *)((int)param_1 + 0xa0) / *(double *)((int)param_1 + 200);
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar6 = Library::MSVCRT::__ftol();
  local_c = (int)lVar6;
  local_18 = ((float)local_8 + (float)_DAT_007901c0) * (float)*(double *)((int)param_1 + 200);
  local_10 = 0;
  local_14 = ((float)local_c + (float)_DAT_007901c0) * (float)*(double *)((int)param_1 + 200);
  FUN_006e25d0(param_1,&local_28);
  iVar4 = (local_28 >> 0x10) % *(int *)((int)param_1 + 0x2c0);
  *(int *)((int)param_1 + 0x2c8) = iVar4;
  if (iVar4 != 0) {
    *(int *)((int)param_1 + 0x2c8) = iVar4 - *(int *)((int)param_1 + 0x2c0);
  }
  iVar4 = (local_24 >> 0x10) % *(int *)((int)param_1 + 0x2c4);
  *(int *)((int)param_1 + 0x2cc) = iVar4;
  if (iVar4 != 0) {
    *(int *)((int)param_1 + 0x2cc) = iVar4 - *(int *)((int)param_1 + 0x2c4);
  }
  FUN_006ce6c0(*(ushort **)((int)param_1 + 0x2b0),*(uint *)((int)param_1 + 0x2b4),30000);
  FUN_006de9c0(param_1);
  if (*(int *)((int)param_1 + 0x358) != 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 0x358) + 0x280) = *(undefined4 *)((int)param_1 + 0x280);
    iVar4 = *(int *)((int)param_1 + 0x358);
    lVar6 = Library::MSVCRT::__ftol();
    iVar3 = (int)lVar6;
    lVar6 = Library::MSVCRT::__ftol();
    iVar5 = (int)lVar6;
    if (((*(int *)((int)param_1 + 0x374) == iVar3) && (*(int *)((int)param_1 + 0x378) == iVar5)) &&
       (*(int *)(iVar4 + 0x134) == 0)) {
      *(undefined4 *)((int)param_1 + 0x140) = 0;
      *(undefined4 *)((int)param_1 + 0x13c) = 0;
      return;
    }
    *(int *)((int)param_1 + 0x374) = iVar3;
    *(int *)((int)param_1 + 0x378) = iVar5;
    *(int *)(iVar4 + 0x374) = iVar3;
    *(int *)(*(int *)((int)param_1 + 0x358) + 0x378) = iVar5;
    this = *(void **)((int)param_1 + 0x358);
    dVar1 = ((double)*(int *)((int)param_1 + 0x378) + _DAT_0079b168) *
            *(double *)((int)param_1 + 0x368) + *(double *)((int)this + 0x78);
    dVar2 = *(double *)((int)param_1 + 0x368) * _DAT_0079b168 +
            ((double)*(int *)((int)param_1 + 0x374) * *(double *)((int)param_1 + 0x368) -
            *(double *)((int)this + 0x60));
    FUN_006dd610(this,4,SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),SUB84(dVar1,0),
                 (int)((ulonglong)dVar1 >> 0x20));
    FUN_006ddbe0(*(int *)((int)param_1 + 0x358));
    FUN_006de9c0(*(void **)((int)param_1 + 0x358));
    *(undefined4 *)(*(int *)((int)param_1 + 0x358) + 0x134) = 0;
    *(undefined4 *)((int)param_1 + 0x140) = 0;
    *(undefined4 *)((int)param_1 + 0x13c) = 0;
    return;
  }
  *(undefined4 *)((int)param_1 + 0x140) = 0;
  *(undefined4 *)((int)param_1 + 0x13c) = 0;
  return;
}

