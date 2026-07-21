
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::_AddDefenceShots */

void __thiscall STBoatC::_AddDefenceShots(STBoatC *this,char param_1,short param_2,int param_3)

{
  uint index;
  code *pcVar1;
  STBoatC *pSVar2;
  uint uVar3;
  int errorCode;
  uint *puVar4;
  int iVar5;
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
  pSVar2 = local_10;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_64.previous;
    if (errorCode != -0x5001fff7) {
      iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4b84,0,errorCode,
                                 &DAT_007a4ccc,s_STBoatC___AddDefenceShots_007ab9e0);
      if (iVar5 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      RaiseInternalException(errorCode,0,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4b85);
    }
    return;
  }
  if (local_10->field_047B == 0) {
    puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xe,5);
    pSVar2->field_047B = puVar4;
  }
  index = ((uint *)pSVar2->field_047B)[3];
  uVar3 = index;
  if (index != 0) {
    while (local_c = uVar3, index = index - 1, -1 < (int)index) {
      DArrayGetElement((DArrayTy *)pSVar2->field_047B,index,&local_20);
      uVar3 = index;
      if (((local_1c != -1) && (uVar3 = local_c, local_20 == param_1)) && (local_1c == param_2)) {
        local_1a = local_1a + param_3;
        local_16 = local_8;
        Library::DKW::TBL::FUN_006ae140((uint *)pSVar2->field_047B,index,&local_20);
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                   0x4b76);
        uVar3 = local_c;
      }
    }
    local_20 = (int)param_1;
    local_1c = param_2;
    local_1a = param_3;
    local_16 = local_8;
    Library::DKW::TBL::FUN_006ae140((uint *)pSVar2->field_047B,local_c,&local_20);
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  local_20 = (int)param_1;
  local_1c = param_2;
  local_1a = param_3;
  local_16 = local_8;
  Library::DKW::TBL::FUN_006ae1c0((uint *)pSVar2->field_047B,&local_20);
  g_currentExceptionFrame = local_64.previous;
  return;
}

