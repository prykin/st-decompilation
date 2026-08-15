#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 006952B0 -> 006F13F0 @ 0069582E */

int __thiscall
CGenerate::FUN_006952b0(CGenerate *this,AnonShape_006952B0_7A982E30 *param_1,byte *param_2)

{
  byte stack_bytes_neg_90[0x20]; /* exact EBP-relative stack object */
  int iVar1;
  CGenerate *this_00;
  int local_EAX_536;
  int local_EAX_1032;
  int iVar2;
  int iVar3;
  AnonShape_006952B0_7A982E30 *pAVar4;
  AnonShape_006952B0_7A982E30 *pAVar5;
  InternalExceptionFrame local_d4;
  DArrayTy *local_78;
  DArrayTy *local_74;
  DWORD local_70;
  int local_6c;
  int iStack_64;
  int iStack_60;
  DArrayTy *local_54;
  DArrayTy *local_50;
  CGenerate *local_4c;
  DWORD local_48;
  int local_44;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  void *local_8;

  local_c = 0;
  local_4c = this;
  Library::MSVCRT::FUN_0072e6b0(*(DWORD *)param_1);
  pAVar4 = param_1;
  pAVar5 = &this->aggregate_001C;
  memmove(pAVar5, pAVar4, 0x232); /* compiler REP MOVS byte copy */
  iVar3 = CreateMap(this);
  sub_0069FF90(this);
  if (iVar3 != 0) {
    local_10 = 1;
    local_48 = timeGetTime();
    local_3c = 0;
    local_70 = timeGetTime();
    local_28 = param_1->field_0214;
    iVar3 = thunk_FUN_00698f90(param_1->field_020C,param_1->field_0210,local_28,
                               (uint)(byte)param_1->field_0x22d,(int *)&local_1c,&local_18);
    if (iVar3 == 0) {
      local_1c = local_28 * 3;
      local_18 = 1;
    }
    local_30 = param_1->field_0225;
    local_34 = param_1->field_0221;
    local_44 = param_1->field_0210 * param_1->field_020C;
    local_38 = param_1->field_0229;
    local_24 = local_44 / 500;
    local_2c = 5;
    local_20 = local_44 / 0x640;
    local_44 = local_44 / 3;
    local_8 = Library::DKW::LIB::MemAlloc(local_28 * 4);
    memset(stack_bytes_neg_90, 0, 0x20); /* compiler bulk-zero initialization */
    iVar3 = 0;
    local_54 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x40,10);
    local_78 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x40,10);
    local_50 = Library::DKW::TBL::DArrayCreate(nullptr,local_1c,0xf,10);
    local_74 = Library::DKW::TBL::DArrayCreate(nullptr,local_1c,0xf,10);
    local_14 = 0x32;
    while ((0 < local_10 || (local_3c < local_14 + local_48))) {
      local_54->count = 0;
      local_50->count = 0;
      memset(&local_6c, 0, 0x18); /* compiler bulk-zero initialization */
      if ((this->field_0008 == nullptr) && (this->field_000C == nullptr)) {
        sub_006A0150(this);
      }
      CteateField(this,*this->field_0008 + -2,this->field_0008[1] + -2,local_34,local_30,local_38,0);
      sub_0069FF90(this);
      sub_00696790(this);
      sub_0069FF90(this);
      sub_00696810(this);
      sub_0069FF90(this);
      sub_00696740(this,0);
      sub_0069FF90(this);
      local_EAX_536 = sub_006971B0(this);
      this->field_583F = local_EAX_536;
      sub_0069FF90(this);
      sub_00696DC0(this,this->field_583F,local_2c);
      sub_0069FF90(this);
      sub_00696940(this,this->field_583F);
      sub_0069FF90(this);
      sub_00695EB0(this);
      sub_0069FF90(this);
      CteateField(this,*this->field_0008,this->field_0008[1],local_34,local_30,local_38,1);
      sub_0069FF90(this);
      sub_00697390(this);
      sub_0069FF90(this);
      sub_006975F0(this);
      sub_0069FF90(this);
      sub_00695F20(this);
      sub_0069FF90(this);
      sub_00697390(this);
      sub_0069FF90(this);
      sub_00696740(this,1);
      sub_0069FF90(this);
      sub_006978C0(this);
      sub_0069FF90(this);
      sub_00695F20(this);
      sub_0069FF90(this);
      sub_00697390(this);
      sub_0069FF90(this);
      sub_00696740(this,1);
      sub_0069FF90(this);
      sub_006988C0(this);
      sub_0069FF90(this);
      thunk_FUN_00697cf0(this,local_24,local_20);
      sub_0069FF90(this);
      Library::Ourlib::MFSTMAP::AuxTMapRefreshAll((short *)this->field_000C,this->field_0008);
      sub_0069FF90(this);
      sub_0069B190(this,*this->field_0008 << 1,this->field_0008[1] << 1,local_34 + -1);
      sub_0069FF90(this);
      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      iStack_60 = sub_0069BDC0(this,local_28,10,10,4,0x23,(int)local_8,
                               (RecoveredRecord_CGenerate_0069BDC0 *)&local_6c);
      sub_0069FF90(this);
      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      iStack_64 = sub_006991C0(this,*this->field_0008 << 1,this->field_0008[1] << 1,local_1c,
                               local_18,local_28,(int)local_8,local_34 + -1,
                               (AnonShape_006991C0_D95B9E4A *)&local_6c);
      sub_0069FF90(this);
      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      sub_00695EB0(this);
      sub_0069FF90(this);
      local_EAX_1032 =
           thunk_FUN_00695180((AnonShape_0052EFB0_8161B92D *)&local_6c,
                              (RecoveredRecord_CGenerate_00695180 *)stack_bytes_neg_90,(int)&local_38,
                              local_c);
      if (local_EAX_1032 == 0) {
        sub_00694B90(this);
      }
      else {
        local_c = 1;
        thunk_FUN_00695140(&local_6c,(undefined4 *)stack_bytes_neg_90);
        sub_00694C30(this);
      }
      local_3c = timeGetTime();
      local_10 = local_10 + -1;
    }
    if (local_c == 1) {
      sub_00694C80(this);
      DAT_00853dd4 = Library::DKW::LIB::MemAlloc(this->field_0008[1] * *this->field_0008 * 0x28);
      thunk_FUN_00575640((short *)this->field_000C,DAT_00853dd4,(short *)0x1);
      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      sub_00694CD0(this,(AnonShape_00694CD0_AC50FDB9 *)stack_bytes_neg_90);
      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      sub_006A0470(this);
      sub_0069FF90(this);
      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      sub_0069CB50((int *)this);
      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      iVar3 = *this->field_0008;
      iVar1 = this->field_0008[1];
      thunk_FUN_0069f160(this,iVar3 * 2,iVar1 * 2,local_34,(iVar3 * iVar1 * 4) / 100);
      local_40 = SaveMap(this);
      sub_0069FF90(this);
      if (DAT_00853dd4 != nullptr) {
        FreeAndNull(&DAT_00853dd4);
      }
      local_d4.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_d4;
      iVar2 = Library::MSVCRT::__setjmp3(local_d4.jumpBuffer,0);
      this_00 = local_4c;
      if (iVar2 == 0) {
        if (param_2 != nullptr) {
          cMf32::RecPut(local_4c->field_0018,0xc,PTR_s_GENERATE_RND_0079d774,(byte *)param_1,0x232,
                        nullptr,'\0',nullptr);
          cMf32::RecPut(this_00->field_0018,0xc,PTR_s_INTERFACE_RND_0079d778,param_2,0xd,
                        nullptr,'\0',nullptr);
          sub_0069FF90(this_00);
        }
        g_currentExceptionFrame = local_d4.previous;
      }
      else {
        g_currentExceptionFrame = local_d4.previous;
      }
    }
    else {
      local_40 = 0;
    }
    if (local_8 != nullptr) {
      FreeAndNull(&local_8);
    }
    DArrayDestroy(local_54);
    DArrayDestroy(local_78);
    DArrayDestroy(local_50);
    DArrayDestroy(local_74);
    timeGetTime();
    return local_40;
  }
  return 0;
}

