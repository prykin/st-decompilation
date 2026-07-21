
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::AddObjToTmp */

undefined4 __thiscall
STAllPlayersC::AddObjToTmp
          (STAllPlayersC *this,char param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  code *pcVar1;
  uint index;
  int iVar2;
  DArrayTy *pDVar3;
  STGameObjC *pSVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  STPlayerTempSlot *pSVar7;
  void *unaff_EDI;
  Global_sub_0043FC50_param_1Enum GVar8;
  InternalExceptionFrame local_5c;
  undefined4 local_18;
  uint local_14;
  STPlayerTempSlot *local_10;
  STAllPlayersC *local_c;
  short local_6;
  
  local_18 = 0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    if (iVar2 == -0x5001fff7) {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x21d,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__AddObjToTmp_inval_007a60f4);
      if (iVar2 == 0) {
        return local_18;
      }
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    if (iVar2 == -0x5001ffff) {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x219,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__AddObjToTmp_coinc_007a6130);
      if (iVar2 == 0) {
        return 0xaffe0001;
      }
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x215,0,iVar2,&DAT_007a4ccc,
                               s_STAllPlayersC__AddObjToTmp_007a6164);
    if (iVar6 == 0) {
      RaiseInternalException(iVar2,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x216);
      return 0xffffffff;
    }
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  if (param_2 == 0) {
    local_10 = g_playerRuntime[param_1].tempSlots[0];
    if (param_3 != 0) goto LAB_0042bc00;
    thunk_FUN_0043fc50(CASE_1,0);
    GVar8 = CASE_2;
  }
  else {
    if (param_2 != 1) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0x1f8);
      goto LAB_0042bc00;
    }
    local_10 = g_playerRuntime[param_1].tempSlots[1];
    if (param_3 != 0) goto LAB_0042bc00;
    thunk_FUN_0043fc50(CASE_4,0);
    GVar8 = CASE_5;
  }
  thunk_FUN_0043fc50(GVar8,param_3);
LAB_0042bc00:
  pSVar7 = local_10 + param_3;
  if (pSVar7->objectType == 0) {
    pDVar3 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    pSVar7->objectIds = pDVar3;
    pSVar7->activityCount = 0;
    pSVar7->playerId = (int)(char)param_4;
    if (param_2 == 0) {
      pSVar7->objectType = 0x3c;
    }
    else if (param_2 == 1) {
      pSVar7->objectType = 0x19a;
    }
  }
  if (pSVar7->playerId != (int)(char)param_4) {
    iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x210,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__AddObjToTmp_somet_007a6184);
    if (iVar2 == 0) {
      g_currentExceptionFrame = local_5c.previous;
      return local_18;
    }
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  pDVar3 = pSVar7->objectIds;
  local_14 = pDVar3->count;
  index = local_14;
  while (index = index - 1, -1 < (int)index) {
    DArrayGetElement(pDVar3,index,&local_6);
    if (local_6 == -1) {
      local_14 = index;
    }
    if (local_6 == (short)param_5) {
      RaiseInternalException
                (-0x5001ffff,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0x209);
    }
  }
  Library::DKW::TBL::FUN_006ae140(&pDVar3->flags,local_14,&param_5);
  pSVar7->activityCount = pSVar7->activityCount + 1;
  pSVar4 = GetObjPtr(local_c,param_4,param_5,CASE_1);
  (*pSVar4->vtable[1].vfunc_14)(1);
  g_currentExceptionFrame = local_5c.previous;
  return local_18;
}

