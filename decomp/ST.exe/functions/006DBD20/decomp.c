
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_006dbd20(AnonShape_006DBD20_CC24D445 *param_1,undefined4 param_2,uint param_3,undefined4 param_4
            ,int param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,double param_11,double param_12)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  float10 extraout_ST0;
  float10 fVar5;
  longlong lVar6;
  int local_40;
  int local_3c;
  int local_30;
  int local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  double local_14;
  double local_c;
  
  param_1->field_0004 = param_2;
  param_1->field_0020 = param_3;
  param_1->field_0024 = param_4;
  param_1->field_0028 = param_5;
  iVar4 = param_5 * param_6;
  param_1->field_002C = param_6;
  iVar3 = Library::DKW::LIB::FUN_006acf50(param_1->field_0008,iVar4 + 0x18);
  param_1->field_0008 = iVar3;
  param_1->field_000C = (iVar3 - 1U ^ param_3) & 7 ^ iVar3 + 7U;
  if (param_1->field_0124 == 1) {
    iVar3 = Library::DKW::LIB::FUN_006acf50(param_1->field_0010,iVar4 + 0x10);
    param_1->field_0010 = iVar3;
  }
  else {
    iVar3 = Library::DKW::LIB::FUN_006acf50(param_1->field_0010,iVar4 * 2 + 0x10);
    param_1->field_0010 = iVar3;
    if (((param_1->field_0144 != 0) && (iVar3 = param_1->field_0174, 0 < iVar3)) &&
       (iVar3 < param_1->field_002C)) {
      iVar3 = Library::DKW::LIB::FUN_006acf50(param_1->field_001C,param_1->field_0028 * iVar3);
      param_1->field_001C = iVar3;
    }
  }
  local_14 = (double)CONCAT44(param_10,param_9) - (double)CONCAT44(param_8,param_7);
  param_1->field_02F0 = 100;
  param_1->field_0014 = param_1->field_0010 + 8;
  param_1->field_02F4 = 100;
  param_1->field_00F8 = local_14 / (double)param_5;
  local_c = param_12 - param_11;
  param_1->field_0100 = local_c / (double)param_6;
  param_1->field_00E8 = local_14 / (double)param_5;
  param_1->field_00F0 = local_c / (double)param_6;
  param_1->field_010C = _DAT_0079df78 / (param_1->field_011C - param_1->field_0114);
  lVar6 = Library::MSVCRT::__ftol();
  param_1->field_02E4 = (int)lVar6;
  Library::Ourlib::STREND::FUN_006dd660(param_1,0,0,param_5,param_6);
  Library::Ourlib::STREND::FUN_006dd6e0
            (param_1,param_7,param_8,param_9,param_10,param_11._0_4_,param_11._4_4_,param_12._0_4_,
             param_12._4_4_);
  FUN_006dd610(param_1,(-(uint)(param_1->field_0124 != 1) & 0xfffffffc) + 4,param_1->field_0098,
               param_1->field_009C,param_1->field_00A0,param_1->field_00A4);
  if ((param_1->field_0124 == 0) || (param_1->field_0124 == 10)) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    FUN_006e25d0(param_1,&local_40);
    FUN_006e25d0(param_1,&local_30);
    param_1->field_0108 = local_2c - local_3c;
  }
  param_1->field_02D8 = 1;
  param_1->field_02DC = 0;
  param_1->field_0140 = 0;
  param_1->field_013C = 0;
  if (param_1->field_0358 != 0) {
    *(undefined4 *)(param_1->field_0358 + 0x280) = param_1->field_0280;
    param_1->field_0368 = param_1->field_00C8 / (double)param_1->field_0380;
    lVar6 = Library::MSVCRT::__ftol();
    iVar3 = (int)lVar6;
    param_1->field_0370 = iVar3;
    fVar5 = (float10)iVar3 * extraout_ST0;
    param_1->field_0360 = (double)fVar5;
    dVar1 = (double)(fVar5 * (float10)_DAT_007901c0);
    param_12._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
    param_12._0_4_ = SUB84(dVar1,0);
    dVar2 = (double)(fVar5 * (float10)_DAT_0079df58);
    param_11._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
    param_11._0_4_ = SUB84(dVar2,0);
    FUN_006dbd20((AnonShape_006DBD20_CC24D445 *)param_1->field_0358,0,0,0,iVar3,iVar3,param_11._0_4_
                 ,param_11._4_4_,param_12._0_4_,param_12._4_4_,dVar2,dVar1);
    iVar3 = param_1->field_0358;
    param_1->field_038C = *(undefined4 *)(iVar3 + 0xc);
    param_1->field_0390 = *(undefined4 *)(iVar3 + 0x14);
    param_1->field_037C = *(undefined4 *)(iVar3 + 0x28);
    param_1->field_0374 = 0xffff8ad0;
    param_1->field_0378 = 0xffff8ad0;
    *(undefined4 *)(iVar3 + 0x370) = param_1->field_0370;
    *(undefined4 *)(param_1->field_0358 + 0x134) = 1;
  }
  return;
}

