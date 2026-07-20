
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_006dbd20(void *param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
            int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10
            ,double param_11,double param_12)

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
  
  *(undefined4 *)((int)param_1 + 4) = param_2;
  *(uint *)((int)param_1 + 0x20) = param_3;
  *(undefined4 *)((int)param_1 + 0x24) = param_4;
  *(int *)((int)param_1 + 0x28) = param_5;
  iVar4 = param_5 * param_6;
  *(int *)((int)param_1 + 0x2c) = param_6;
  iVar3 = Library::DKW::LIB::FUN_006acf50(*(int *)((int)param_1 + 8),iVar4 + 0x18);
  *(int *)((int)param_1 + 8) = iVar3;
  *(uint *)((int)param_1 + 0xc) = (iVar3 - 1U ^ param_3) & 7 ^ iVar3 + 7U;
  if (*(int *)((int)param_1 + 0x124) == 1) {
    iVar3 = Library::DKW::LIB::FUN_006acf50(*(int *)((int)param_1 + 0x10),iVar4 + 0x10);
    *(int *)((int)param_1 + 0x10) = iVar3;
  }
  else {
    iVar3 = Library::DKW::LIB::FUN_006acf50(*(int *)((int)param_1 + 0x10),iVar4 * 2 + 0x10);
    *(int *)((int)param_1 + 0x10) = iVar3;
    if (((*(int *)((int)param_1 + 0x144) != 0) &&
        (iVar3 = *(int *)((int)param_1 + 0x174), 0 < iVar3)) &&
       (iVar3 < *(int *)((int)param_1 + 0x2c))) {
      iVar3 = Library::DKW::LIB::FUN_006acf50
                        (*(int *)((int)param_1 + 0x1c),*(int *)((int)param_1 + 0x28) * iVar3);
      *(int *)((int)param_1 + 0x1c) = iVar3;
    }
  }
  local_14 = (double)CONCAT44(param_10,param_9) - (double)CONCAT44(param_8,param_7);
  *(undefined4 *)((int)param_1 + 0x2f0) = 100;
  *(int *)((int)param_1 + 0x14) = *(int *)((int)param_1 + 0x10) + 8;
  *(undefined4 *)((int)param_1 + 0x2f4) = 100;
  *(double *)((int)param_1 + 0xf8) = local_14 / (double)param_5;
  local_c = param_12 - param_11;
  *(double *)((int)param_1 + 0x100) = local_c / (double)param_6;
  *(double *)((int)param_1 + 0xe8) = local_14 / (double)param_5;
  *(double *)((int)param_1 + 0xf0) = local_c / (double)param_6;
  *(double *)((int)param_1 + 0x10c) =
       _DAT_0079df78 / (*(double *)((int)param_1 + 0x11c) - *(double *)((int)param_1 + 0x114));
  lVar6 = Library::MSVCRT::__ftol();
  *(int *)((int)param_1 + 0x2e4) = (int)lVar6;
  Library::Ourlib::STREND::FUN_006dd660(param_1,0,0,param_5,param_6);
  Library::Ourlib::STREND::FUN_006dd6e0
            (param_1,param_7,param_8,param_9,param_10,param_11._0_4_,param_11._4_4_,param_12._0_4_,
             param_12._4_4_);
  FUN_006dd610(param_1,(-(uint)(*(int *)((int)param_1 + 0x124) != 1) & 0xfffffffc) + 4,
               *(undefined4 *)((int)param_1 + 0x98),*(undefined4 *)((int)param_1 + 0x9c),
               *(undefined4 *)((int)param_1 + 0xa0),*(undefined4 *)((int)param_1 + 0xa4));
  if ((*(int *)((int)param_1 + 0x124) == 0) || (*(int *)((int)param_1 + 0x124) == 10)) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    FUN_006e25d0(param_1,&local_40);
    FUN_006e25d0(param_1,&local_30);
    *(int *)((int)param_1 + 0x108) = local_2c - local_3c;
  }
  *(undefined4 *)((int)param_1 + 0x2d8) = 1;
  *(undefined4 *)((int)param_1 + 0x2dc) = 0;
  *(undefined4 *)((int)param_1 + 0x140) = 0;
  *(undefined4 *)((int)param_1 + 0x13c) = 0;
  if (*(int *)((int)param_1 + 0x358) != 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 0x358) + 0x280) = *(undefined4 *)((int)param_1 + 0x280);
    *(double *)((int)param_1 + 0x368) =
         *(double *)((int)param_1 + 200) / (double)*(int *)((int)param_1 + 0x380);
    lVar6 = Library::MSVCRT::__ftol();
    iVar3 = (int)lVar6;
    *(int *)((int)param_1 + 0x370) = iVar3;
    fVar5 = (float10)iVar3 * extraout_ST0;
    *(double *)((int)param_1 + 0x360) = (double)fVar5;
    dVar1 = (double)(fVar5 * (float10)_DAT_007901c0);
    param_12._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
    param_12._0_4_ = SUB84(dVar1,0);
    dVar2 = (double)(fVar5 * (float10)_DAT_0079df58);
    param_11._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
    param_11._0_4_ = SUB84(dVar2,0);
    FUN_006dbd20(*(void **)((int)param_1 + 0x358),0,0,0,iVar3,iVar3,param_11._0_4_,param_11._4_4_,
                 param_12._0_4_,param_12._4_4_,dVar2,dVar1);
    iVar3 = *(int *)((int)param_1 + 0x358);
    *(undefined4 *)((int)param_1 + 0x38c) = *(undefined4 *)(iVar3 + 0xc);
    *(undefined4 *)((int)param_1 + 0x390) = *(undefined4 *)(iVar3 + 0x14);
    *(undefined4 *)((int)param_1 + 0x37c) = *(undefined4 *)(iVar3 + 0x28);
    *(undefined4 *)((int)param_1 + 0x374) = 0xffff8ad0;
    *(undefined4 *)((int)param_1 + 0x378) = 0xffff8ad0;
    *(undefined4 *)(iVar3 + 0x370) = *(undefined4 *)((int)param_1 + 0x370);
    *(undefined4 *)(*(int *)((int)param_1 + 0x358) + 0x134) = 1;
  }
  return;
}

