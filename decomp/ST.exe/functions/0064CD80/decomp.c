#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::InitData */

int __thiscall AiEventClassTy::InitData(AiEventClassTy *this,int *param_1)

{
  AiEventClassTy *this_00;
  int iVar3;
  DArrayTy *local_EAX_96;
  byte *puVar2;
  DArrayTy *pDVar4;
  uint *puVar3;
  DArrayTy *pDVar5;
  DArrayTy *local_EAX_393;
  int iVar6;
  int iVar7;
  int *piVar9;
  uint uVar10;
  byte *puVar11;
  void *pvVar12;
  int *piVar13;
  bool bVar14;
  InternalExceptionFrame local_4c;
  AiEventClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 == 0) {
    if (local_8 == nullptr) {
      piVar13 = nullptr;
    }
    else {
      piVar13 = (int *)&local_8->field_008C;
    }
    piVar9 = param_1;
    memmove(piVar13, piVar9, 0x49f); /* compiler REP MOVS byte copy */
    local_8->field_0091 = 1;
    local_EAX_96 = Library::DKW::TBL::SArrayCreate(nullptr,5,5);
    this_00->field_05B3 = local_EAX_96;
    uVar10 = 0;
    do {
      Library::DKW::TBL::FUN_006b6020(this_00->field_05B3,uVar10,&CHAR_00h_008016a0);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 4);
    if (this_00->field_008C == '\0') {
      this_00->field_0088 = DAT_00808754;
      /* ST_CALLSITE[0064CE1F]: CALL dword ptr [EDX + 0x18] */
      iVar7 = this_00->vfunc_18();
      uVar10 = iVar7 * 2 + 2;
      this_00->field_00D2 = uVar10;
      if (0x18 < uVar10) {
        this_00->field_00D2 = 3;
      }
    }
    else {
      this_00->field_0088 = this_00->field_00DA;
    }
    iVar7 = this_00->field_0506;
    piVar13 = &this_00->field_04FA;
    if (piVar13 == nullptr) {
      uVar10 = 0;
    }
    else {
      uVar10 = *piVar13 * 5;
    }
    puVar2 = (byte *)(Library::DKW::LIB::MemAllocClear(uVar10));
    this_00->field_0502 = puVar2;
    if (piVar13 == nullptr) {
      uVar10 = 0;
    }
    else {
      uVar10 = *piVar13 * 5;
    }
    puVar11 = (byte *)(iVar7 + 0x49e + (int)param_1);
    memmove(puVar2, puVar11, uVar10); /* compiler REP MOVS byte copy */
    pDVar4 = FUN_006b0060(nullptr,(uint *)(this_00->field_04F2 + 0x49e + (int)param_1));
    this_00->field_04EE = pDVar4;
    puVar3 = Library::DKW::TBL::FUN_006c8680
                       (nullptr,(uint *)(this_00->field_04E6 + 0x49e + (int)param_1));
    this_00->field_04E2 = puVar3;
    pDVar5 = this_00->field_04EE;
    uVar10 = 0;
    if (0 < (int)pDVar5->count) {
      bVar14 = pDVar5->count != 0;
      do {
        if (bVar14) {
          pvVar12 = DArrayAt<void>(pDVar5, uVar10);
        }
        else {
          pvVar12 = nullptr;
        }
        if (STField<int>(pvVar12,0xf) != 0) {
          local_EAX_393 =
               FUN_006b0060(nullptr,
                            (uint *)(STField<int>(pvVar12,0x13) + 0x49e + (int)param_1));
          STField<DArrayTy *>(pvVar12,0xf) = local_EAX_393;
        }
        pDVar5 = this_00->field_04EE;
        uVar10 = uVar10 + 1;
        bVar14 = uVar10 < pDVar5->count;
      } while ((int)uVar10 < (int)pDVar5->count);
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  FUN_00402e14(local_8);
  iVar6 = ReportDebugMessage("E:\\__titans\\ai\\ai_event.cpp",0x50,0,iVar3,"%s",
                             "AiEventClassTy::InitData");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_event.cpp",0x51);
  return iVar3;
}

