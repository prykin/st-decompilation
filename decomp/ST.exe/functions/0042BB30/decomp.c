
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::AddObjToTmp */

undefined4 __thiscall
STAllPlayersC::AddObjToTmp
          (STAllPlayersC *this,char param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  AnonShape_006ACC70_C8641025 *pAVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  int *piVar8;
  void *unaff_EDI;
  Global_sub_0043FC50_param_1Enum GVar9;
  InternalExceptionFrame local_5c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  STAllPlayersC *local_c;
  short local_6;
  
  local_18 = 0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    if (iVar4 == -0x5001fff7) {
      iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x21d,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__AddObjToTmp_inval_007a60f4);
      if (iVar4 == 0) {
        return local_18;
      }
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    if (iVar4 == -0x5001ffff) {
      iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x219,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__AddObjToTmp_coinc_007a6130);
      if (iVar4 == 0) {
        return 0xaffe0001;
      }
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    iVar7 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x215,0,iVar4,&DAT_007a4ccc,
                               s_STAllPlayersC__AddObjToTmp_007a6164);
    if (iVar7 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x216);
      return 0xffffffff;
    }
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  if (param_2 == 0) {
    local_10 = param_1 * 0xa62 + 0x7f4f83;
    if (param_3 != 0) goto LAB_0042bc00;
    thunk_FUN_0043fc50(CASE_1,0);
    GVar9 = CASE_2;
  }
  else {
    if (param_2 != 1) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0x1f8);
      goto LAB_0042bc00;
    }
    local_10 = param_1 * 0xa62 + 0x7f4fd3;
    if (param_3 != 0) goto LAB_0042bc00;
    thunk_FUN_0043fc50(CASE_4,0);
    GVar9 = CASE_5;
  }
  thunk_FUN_0043fc50(GVar9,param_3);
LAB_0042bc00:
  piVar8 = (int *)(param_3 * 0x10 + local_10);
  if (*piVar8 == 0) {
    puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    *(uint **)((int)piVar8 + 10) = puVar5;
    *(undefined2 *)((int)piVar8 + 0xe) = 0;
    piVar8[1] = (int)(char)param_4;
    if (param_2 == 0) {
      *piVar8 = 0x3c;
    }
    else if (param_2 == 1) {
      *piVar8 = 0x19a;
    }
  }
  if (piVar8[1] != (int)(char)param_4) {
    iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x210,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__AddObjToTmp_somet_007a6184);
    if (iVar4 == 0) {
      g_currentExceptionFrame = local_5c.previous;
      return local_18;
    }
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  pAVar1 = *(AnonShape_006ACC70_C8641025 **)((int)piVar8 + 10);
  local_14 = pAVar1->field_000C;
  uVar3 = local_14;
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    FUN_006acc70(pAVar1,uVar3,(undefined4 *)&local_6);
    if (local_6 == -1) {
      local_14 = uVar3;
    }
    if (local_6 == (short)param_5) {
      RaiseInternalException
                (-0x5001ffff,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0x209);
    }
  }
  Library::DKW::TBL::FUN_006ae140((uint *)pAVar1,local_14,&param_5);
  *(short *)((int)piVar8 + 0xe) = *(short *)((int)piVar8 + 0xe) + 1;
  piVar8 = (int *)GetObjPtr(local_c,param_4,param_5,CASE_1);
  (**(code **)(*piVar8 + 0xe8))(1);
  g_currentExceptionFrame = local_5c.previous;
  return local_18;
}

