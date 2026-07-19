
LPSTR __cdecl FUN_0067e320(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  LPSTR pCVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  char *pcVar8;
  void *unaff_EDI;
  char *pcVar9;
  char local_88 [64];
  InternalExceptionFrame local_48;
  
  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar3 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_48.previous;
    iVar5 = ReportDebugMessage(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x1c7,0,iVar3,&DAT_007a4ccc,
                               s_GetStrategNameDB_007d3088);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      pCVar4 = (LPSTR)(*pcVar2)();
      return pCVar4;
    }
    RaiseInternalException(iVar3,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x1c8);
    return (LPSTR)0x0;
  }
  if (((param_1 == 0) || (param_2 < 0)) || (7 < param_2)) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x1c3);
  }
  pCVar4 = FUN_006f2c00(PTR_s_STRATEG_0079d72c,1,param_2);
  uVar6 = 0xffffffff;
  do {
    pcVar8 = pCVar4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar8 = pCVar4 + 1;
    cVar1 = *pCVar4;
    pCVar4 = pcVar8;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar8 + -uVar6;
  pcVar9 = local_88;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  iVar3 = 0;
  do {
    pCVar4 = FUN_006f2c00(local_88,3,iVar3);
    iVar5 = cMf32::RecChk((cMf32 *)param_1,0xc,pCVar4);
    if (iVar5 != 0) {
      g_currentExceptionFrame = local_48.previous;
      return pCVar4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x7ffffff0);
  g_currentExceptionFrame = local_48.previous;
  return (LPSTR)0x0;
}

