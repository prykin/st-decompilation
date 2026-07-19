
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::_AddDefenceShots */

void __thiscall STBoatC::_AddDefenceShots(STBoatC *this,char param_1,short param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  STBoatC *pSVar3;
  uint uVar4;
  int errorCode;
  uint *puVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_64;
  int local_20;
  short local_1c;
  int local_1a;
  undefined4 local_16;
  STBoatC *local_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 200;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_10 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar3 = local_10;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_64.previous;
    if (errorCode != -0x5001fff7) {
      iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4b84,0,errorCode,
                                 &DAT_007a4ccc,s_STBoatC___AddDefenceShots_007ab9e0);
      if (iVar6 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      RaiseInternalException(errorCode,0,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4b85);
    }
    return;
  }
  if (*(int *)(local_10 + 0x47b) == 0) {
    puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xe,5);
    *(uint **)(pSVar3 + 0x47b) = puVar5;
  }
  uVar1 = (*(uint **)(pSVar3 + 0x47b))[3];
  uVar4 = uVar1;
  if (uVar1 != 0) {
    while (local_c = uVar4, uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      FUN_006acc70(*(int *)(pSVar3 + 0x47b),uVar1,&local_20);
      uVar4 = uVar1;
      if (((local_1c != -1) && (uVar4 = local_c, local_20 == param_1)) && (local_1c == param_2)) {
        local_1a = local_1a + param_3;
        local_16 = local_8;
        Library::DKW::TBL::FUN_006ae140(*(uint **)(pSVar3 + 0x47b),uVar1,&local_20);
        RaiseInternalException
                  (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4b76);
        uVar4 = local_c;
      }
    }
    local_20 = (int)param_1;
    local_1c = param_2;
    local_1a = param_3;
    local_16 = local_8;
    Library::DKW::TBL::FUN_006ae140(*(uint **)(pSVar3 + 0x47b),local_c,&local_20);
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  local_20 = (int)param_1;
  local_1c = param_2;
  local_1a = param_3;
  local_16 = local_8;
  Library::DKW::TBL::FUN_006ae1c0(*(uint **)(pSVar3 + 0x47b),&local_20);
  g_currentExceptionFrame = local_64.previous;
  return;
}

