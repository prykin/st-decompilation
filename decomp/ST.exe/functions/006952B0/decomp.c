#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 006952B0 -> 006F13F0 @ 0069582E */

int __thiscall
CGenerate::FUN_006952b0
          (CGenerate *this,RecoveredRecordView_006952B0_2D9C9F03 *param_1,byte *param_2)

{
  byte stack_bytes_neg_90[0x20]; /* exact EBP-relative stack object */
  int iVar1;
  CGenerate *this_00;
  int local_EAX_536;
  int local_EAX_1032;
  int iVar2;
  int iVar3;
  RecoveredRecordView_006952B0_2D9C9F03 *pRVar4;
  RecoveredRecordView_006952B0_2D9C9F03 *pRVar5;
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
  RecoveredRecord_00695180_6DC76A4C local_38;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  RecoveredRecordView_0069BDC0_C51A57AA *local_8;

  local_c = 0;
  local_4c = this;
  Library::MSVCRT::FUN_0072e6b0(*(DWORD *)param_1);
  pRVar4 = param_1;
  pRVar5 = &this->aggregate_001C;
  memmove(pRVar5, pRVar4, 0x232); /* compiler REP MOVS byte copy */
  /* ST_CALLSITE[006952E4]: CALL 0x004045ca; direct=004045CA CGenerate::CreateMap */
  iVar3 = CreateMap(this);
  /* ST_CALLSITE[006952ED]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
  sub_0069FF90(this);
  if (iVar3 != 0) {
    local_10 = 1;
    /* ST_CALLSITE[00695307]: CALL ESI */
    local_48 = timeGetTime();
    local_3c = 0;
    /* ST_CALLSITE[00695313]: CALL ESI */
    local_70 = timeGetTime();
    local_38.field_0010 = param_1->field_0214;

    iVar3 = thunk_FUN_00698f90(param_1->field_020C,param_1->field_0210,local_38.field_0010,
                               (uint)(byte)param_1->field_0x22d,(int *)&local_1c,&local_18);
    if (iVar3 == 0) {
      local_1c = local_38.field_0010 * 3;
      local_18 = 1;
    }
    local_38.field_0008 = param_1->field_0225;
    local_38.field_0004 = param_1->field_0221;
    local_44 = param_1->field_0210 * param_1->field_020C;
    local_38.field_0000 = param_1->field_0229;
    local_24 = local_44 / 500;
    local_38.field_000C = 5;
    local_20 = local_44 / 0x640;
    local_44 = local_44 / 3;

    local_8 = Library::DKW::LIB::MemAlloc(local_38.field_0010 * 4);
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
        /* ST_CALLSITE[0069546B]: CALL 0x004012a8; direct=004012A8 CGenerate::sub_006A0150 */
        sub_006A0150(this);
      }
      /* ST_CALLSITE[0069548F]: CALL 0x00402446; direct=00402446 CGenerate::CteateField */
      CteateField(this,*this->field_0008 + -2,this->field_0008[1] + -2,local_38.field_0004,
                  local_38.field_0008,local_38.field_0000,0);
      /* ST_CALLSITE[00695496]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);
      /* ST_CALLSITE[0069549D]: CALL 0x00401fa0; direct=00401FA0 CGenerate::sub_00696790 */
      sub_00696790(this);
      /* ST_CALLSITE[006954A4]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);
      /* ST_CALLSITE[006954AB]: CALL 0x00405597; direct=00405597 CGenerate::sub_00696810 */
      sub_00696810(this);
      /* ST_CALLSITE[006954B2]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);
      /* ST_CALLSITE[006954BA]: CALL 0x00403d5f; direct=00403D5F CGenerate::sub_00696740 */
      sub_00696740(this,0);
      /* ST_CALLSITE[006954C1]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);
      /* ST_CALLSITE[006954C8]: CALL 0x004055d8; direct=004055D8 CGenerate::sub_006971B0 */
      local_EAX_536 = sub_006971B0(this);
      this->field_583F = local_EAX_536;
      /* ST_CALLSITE[006954D5]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);
      /* ST_CALLSITE[006954E7]: CALL 0x00405bc8; direct=00405BC8 CGenerate::sub_00696DC0 */
      sub_00696DC0(this,this->field_583F,local_38.field_000C);
      /* ST_CALLSITE[006954EE]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);
      /* ST_CALLSITE[006954FC]: CALL 0x0040547a; direct=0040547A CGenerate::sub_00696940 */
      sub_00696940(this,this->field_583F);
      /* ST_CALLSITE[00695503]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);
      /* ST_CALLSITE[0069550A]: CALL 0x00401a14; direct=00401A14 CGenerate::sub_00695EB0 */
      sub_00695EB0(this);
      /* ST_CALLSITE[00695511]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);
      /* ST_CALLSITE[00695530]: CALL 0x00402446; direct=00402446 CGenerate::CteateField */
      CteateField(this,*this->field_0008,this->field_0008[1],local_38.field_0004,local_38.field_0008
                  ,local_38.field_0000,1);
      /* ST_CALLSITE[00695537]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);
      /* ST_CALLSITE[0069553E]: CALL 0x00404002; direct=00404002 CGenerate::sub_00697390 */
      sub_00697390(this);
      /* ST_CALLSITE[00695545]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);
      /* ST_CALLSITE[0069554C]: CALL 0x0040496c; direct=0040496C CGenerate::sub_006975F0 */
      sub_006975F0(this);
      /* ST_CALLSITE[00695553]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);
      /* ST_CALLSITE[0069555A]: CALL 0x004041a1; direct=004041A1 CGenerate::sub_00695F20 */
      sub_00695F20(this);
      /* ST_CALLSITE[00695561]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);
      /* ST_CALLSITE[00695568]: CALL 0x00404002; direct=00404002 CGenerate::sub_00697390 */
      sub_00697390(this);
      /* ST_CALLSITE[0069556F]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);
      /* ST_CALLSITE[00695578]: CALL 0x00403d5f; direct=00403D5F CGenerate::sub_00696740 */
      sub_00696740(this,1);
      /* ST_CALLSITE[0069557F]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);
      /* ST_CALLSITE[00695586]: CALL 0x00404df4; direct=00404DF4 CGenerate::sub_006978C0 */
      sub_006978C0(this);
      /* ST_CALLSITE[0069558D]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);
      /* ST_CALLSITE[00695594]: CALL 0x004041a1; direct=004041A1 CGenerate::sub_00695F20 */
      sub_00695F20(this);
      /* ST_CALLSITE[0069559B]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);
      /* ST_CALLSITE[006955A2]: CALL 0x00404002; direct=00404002 CGenerate::sub_00697390 */
      sub_00697390(this);
      /* ST_CALLSITE[006955A9]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);
      /* ST_CALLSITE[006955B2]: CALL 0x00403d5f; direct=00403D5F CGenerate::sub_00696740 */
      sub_00696740(this,1);
      /* ST_CALLSITE[006955B9]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);
      /* ST_CALLSITE[006955C0]: CALL 0x00405975; direct=00405975 CGenerate::sub_006988C0 */
      sub_006988C0(this);
      /* ST_CALLSITE[006955C7]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);
      thunk_FUN_00697cf0(this,local_24,local_20);
      /* ST_CALLSITE[006955DD]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);

      Library::Ourlib::MFSTMAP::AuxTMapRefreshAll((short *)this->field_000C,this->field_0008);
      /* ST_CALLSITE[006955F4]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);
      /* ST_CALLSITE[0069560E]: CALL 0x00402bd5; direct=00402BD5 CGenerate::sub_0069B190 */
      sub_0069B190(this,*this->field_0008 << 1,this->field_0008[1] << 1,local_38.field_0004 - 1);
      /* ST_CALLSITE[00695615]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);

      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      /* ST_CALLSITE[0069563A]: CALL 0x00405335; direct=00405335 CGenerate::sub_0069BDC0 */
      iStack_60 = sub_0069BDC0(this,local_38.field_0010,10,10,4,0x23,local_8,
                               (RecoveredRecord_CGenerate_0069BDC0 *)&local_6c);
      /* ST_CALLSITE[00695644]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);

      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      /* ST_CALLSITE[0069567C]: CALL 0x00403ff3; direct=00403FF3 CGenerate::sub_006991C0 */
      iStack_64 = sub_006991C0(this,*this->field_0008 << 1,this->field_0008[1] << 1,local_1c,
                               local_18,local_38.field_0010,
                               (RecoveredRecordView_006991C0_C51A57AA *)local_8,
                               local_38.field_0004 - 1,
                               (RecoveredRecordView_006991C0_C443ACC2 *)&local_6c);
      /* ST_CALLSITE[00695686]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);

      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      /* ST_CALLSITE[00695697]: CALL 0x00401a14; direct=00401A14 CGenerate::sub_00695EB0 */
      sub_00695EB0(this);
      /* ST_CALLSITE[0069569E]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);

      local_EAX_1032 =
           thunk_FUN_00695180((RecoveredRecordView_0052EFB0_569FB924 *)&local_6c,
                              (RecoveredRecord_CGenerate_00695180 *)stack_bytes_neg_90,&local_38,
                              local_c);
      if (local_EAX_1032 == 0) {
        /* ST_CALLSITE[006956E5]: CALL 0x00402004; direct=00402004 CGenerate::sub_00694B90 */
        sub_00694B90(this);
      }
      else {
        local_c = 1;
        thunk_FUN_00695140(&local_6c,(undefined4 *)stack_bytes_neg_90);
        /* ST_CALLSITE[006956DC]: CALL 0x0040191f; direct=0040191F CGenerate::sub_00694C30 */
        sub_00694C30(this);
      }
      /* ST_CALLSITE[006956EA]: CALL dword ptr [0x0085bedc] */
      local_3c = timeGetTime();
      local_10 = local_10 + -1;
    }
    if (local_c == 1) {
      /* ST_CALLSITE[0069570B]: CALL 0x00403521; direct=00403521 CGenerate::sub_00694C80 */
      sub_00694C80(this);

      PTR_00853dd4 = Library::DKW::LIB::MemAlloc(this->field_0008[1] * *this->field_0008 * 0x28);
      thunk_FUN_00575640((RecoveredRecord_00575640_E6D414E2 *)this->field_000C,
                         (undefined4 *)PTR_00853dd4,(short *)0x1);

      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      /* ST_CALLSITE[0069574C]: CALL 0x00402d88; direct=00402D88 CGenerate::sub_00694CD0 */
      sub_00694CD0(this,(RecoveredRecordView_00694CD0_244EA14D *)stack_bytes_neg_90);

      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      /* ST_CALLSITE[0069575D]: CALL 0x004050f6; direct=004050F6 CGenerate::sub_006A0470 */
      sub_006A0470(this);
      /* ST_CALLSITE[00695764]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);

      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      /* ST_CALLSITE[00695779]: CALL 0x004030da; direct=004030DA CGenerate::sub_0069CB50 */
      sub_0069CB50(this);

      _DAT_00853dd0 = Library::MSVCRT::FUN_0072e6c0();
      iVar3 = *this->field_0008;
      iVar1 = this->field_0008[1];

      thunk_FUN_0069f160(this,iVar3 * 2,iVar1 * 2,local_38.field_0004,(iVar3 * iVar1 * 4) / 100);
      /* ST_CALLSITE[006957BF]: CALL 0x00404417; direct=00404417 CGenerate::SaveMap */
      local_40 = SaveMap(this);
      /* ST_CALLSITE[006957C9]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
      sub_0069FF90(this);
      if (PTR_00853dd4 != nullptr) {
        FreeAndNull(&PTR_00853dd4);
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
          /* ST_CALLSITE[0069584F]: CALL 0x00404a43; direct=00404A43 CGenerate::sub_0069FF90 */
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
    /* ST_CALLSITE[006958A8]: CALL dword ptr [0x0085bedc] */
    timeGetTime();
    return local_40;
  }
  return 0;
}

