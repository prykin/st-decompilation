
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_field.cpp
   STFieldC::CreateField */

uint __thiscall STFieldC::CreateField(STFieldC *this,uint param_1)

{
  code *pcVar1;
  STFieldC *pSVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 local_90 [15];
  undefined4 local_54;
  InternalExceptionFrame local_50;
  STFieldC *local_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    uVar7 = local_8;
    if (0 < (int)local_8) {
      do {
        FUN_006ae110(*(byte **)(pSVar2 + 0x234));
        uVar7 = uVar7 - 1;
        *(undefined4 *)(pSVar2 + 0x234) = 0;
      } while (uVar7 != 0);
    }
    iVar5 = ReportDebugMessage(s_E____titans_nick_to_field_cpp_007cf850,0x1e5,0,iVar3,&DAT_007a4ccc,
                               s_STFieldC__CreateField_007cb2c0);
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_nick_to_field_cpp_007cf850,0x1e7);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return uVar7;
  }
  if (*(int *)(local_c + 0x234) == 0) {
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,param_1,0x40,10);
    *(uint **)(pSVar2 + 0x234) = puVar4;
  }
  if ((*(int *)(pSVar2 + 0x234) != 0) && (param_1 != 0)) {
    puVar6 = local_90;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    local_54 = 0xffffffff;
    if (0 < (int)param_1) {
      do {
        local_8 = Library::DKW::TBL::FUN_006ae1c0(*(uint **)(pSVar2 + 0x234),local_90);
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
    if (-1 < (int)local_8) {
      g_currentExceptionFrame = local_50.previous;
      return local_8 + 1;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

