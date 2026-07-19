
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_TmMin.cpp
   STTmMineC::CreatePart */

uint __thiscall STTmMineC::CreatePart(STTmMineC *this,uint param_1)

{
  code *pcVar1;
  STTmMineC *pSVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 unaff_ESI;
  uint uVar6;
  void *unaff_EDI;
  undefined4 *puVar7;
  undefined4 local_8c [15];
  InternalExceptionFrame local_50;
  STTmMineC *local_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage(s_E____titans_nick_to_TmMin_cpp_007d209c,0x4a6,0,iVar3,&DAT_007a4ccc,
                               s_STTmMineC__CreatePart_007d20c0);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    RaiseInternalException(iVar3,0,s_E____titans_nick_to_TmMin_cpp_007d209c,0x4a8);
    return 0xffff;
  }
  if (*(int *)(local_c + 0x336) == 0) {
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,param_1,0x3c,10);
    *(uint **)(pSVar2 + 0x336) = puVar4;
    if (puVar4 == (uint *)0x0) {
      g_currentExceptionFrame = local_50.previous;
      return local_8;
    }
  }
  if (param_1 != 0) {
    uVar6 = 0;
    puVar7 = local_8c;
    for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    if (0 < (int)param_1) {
      do {
        local_8 = Library::DKW::TBL::FUN_006ae1c0(*(uint **)(pSVar2 + 0x336),local_8c);
        iVar3 = *(int *)(pSVar2 + 0x336);
        if (uVar6 < *(uint *)(iVar3 + 0xc)) {
          iVar3 = *(int *)(iVar3 + 8) * uVar6 + *(int *)(iVar3 + 0x1c);
        }
        else {
          iVar3 = 0;
        }
        if (iVar3 != 0) {
          *(undefined4 *)(iVar3 + 0x38) = 0xffffffff;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)param_1);
    }
    if (-1 < (int)local_8) {
      g_currentExceptionFrame = local_50.previous;
      return local_8 + 1;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

