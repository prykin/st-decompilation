
undefined4 __cdecl
FUN_004b0d10(uint param_1,int param_2,int *param_3,int *param_4,int *param_5,int param_6,int param_7
            ,undefined4 param_8,int param_9)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  undefined4 local_c;
  int local_8;
  
  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Artem_TLO_ai_cpp_007ac758,0x313,0,iVar3,&DAT_007a4ccc,
                               s_TLOAiChkOrFindBuildingPlace_erro_007ac77c);
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Artem_TLO_ai_cpp_007ac758,0x314);
      return 0;
    }
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  if (((-1 < *param_3) && (local_8 = *param_4, -1 < local_8)) && (-1 < *param_5)) {
    if (param_9 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_9 + 0x18);
    }
    iVar3 = thunk_FUN_004ae0b0(*param_3,local_8,*param_5,param_2,param_1,(undefined4 *)0x0,
                               (int *)0x0,(int *)0x0,iVar3,(int *)0x0);
    if (iVar3 != 0) {
      g_currentExceptionFrame = local_50.previous;
      return 1;
    }
  }
  puVar1 = (&PTR_LAB_0079072c)[param_2];
  if (puVar1 == (undefined *)0x0) {
    uVar4 = thunk_FUN_004af080(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9);
    g_currentExceptionFrame = local_50.previous;
    return uVar4;
  }
  if (puVar1 == (undefined *)0x1) {
    uVar4 = thunk_FUN_004affa0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    g_currentExceptionFrame = local_50.previous;
    return uVar4;
  }
  if (puVar1 != (undefined *)0x2) {
    g_currentExceptionFrame = local_50.previous;
    return local_c;
  }
  uVar4 = thunk_FUN_004b0250(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  g_currentExceptionFrame = local_50.previous;
  return uVar4;
}

