
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 319 | 342 | 344 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

uint * __cdecl _CreateStgListByRoot(int param_1,int param_2,char *param_3,uint param_4)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *_Source;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar9;
  char *pcVar10;
  undefined1 local_2ec [516];
  char local_e8 [64];
  char local_a8 [12];
  char local_9c [36];
  char local_78 [32];
  uint local_58;
  int local_54;
  InternalExceptionFrame local_50;
  uint *local_c;
  ushort *local_8;
  
  puVar9 = (undefined4 *)local_2ec;
  for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  *(undefined1 *)puVar9 = 0;
  local_c = (uint *)0x0;
  local_8 = (ushort *)0x0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar6 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x156,0,iVar6,&DAT_007a4ccc,
                               s__CreateStgListByRoot_007d3008);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      puVar5 = (uint *)(*pcVar2)();
      return puVar5;
    }
    if (local_c != (uint *)0x0) {
      FUN_006ae110((byte *)local_c);
    }
    RaiseInternalException(iVar6,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x158);
    return (uint *)0x0;
  }
  if (param_1 == 0) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x13f);
  }
  local_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0x98,5);
  uVar7 = 0xffffffff;
  do {
    pcVar3 = param_3;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar3 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar3;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  local_2ec[0] = 0xc;
  pcVar3 = pcVar3 + -uVar7;
  pcVar10 = local_2ec + 1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar10 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar10 = pcVar10 + 1;
  }
  cMf32::ToBeg((cMf32 *)param_1,FUN_006f2d10,local_2ec);
  pcVar3 = (char *)cMf32::RecNameGetNext((cMf32 *)param_1);
  while (pcVar3 != (char *)0x0) {
    local_8 = mfAObjLoad(param_1,pcVar3,0,1);
    uVar7 = *(uint *)(local_8 + 0x85);
    if (uVar7 == 0) {
      uVar7 = 1;
    }
    if (local_8 != (ushort *)0x0) {
      if (((param_2 == 0) || (param_2 == *(short *)((int)local_8 + 0x19))) &&
         ((param_4 & uVar7) != 0)) {
        _Source = (char *)((int)local_8 + 0x1b);
        pcVar10 = local_e8;
        for (iVar6 = 0x26; iVar6 != 0; iVar6 = iVar6 + -1) {
          pcVar10[0] = '\0';
          pcVar10[1] = '\0';
          pcVar10[2] = '\0';
          pcVar10[3] = '\0';
          pcVar10 = pcVar10 + 4;
        }
        Library::MSVCRT::_strncpy(local_e8,_Source,0x3f);
        Library::MSVCRT::_strncpy(local_a8,(char *)((int)local_8 + 0x5b),0xb);
        Library::MSVCRT::_strncpy(local_9c,pcVar3,0x1f);
        Library::MSVCRT::_strncpy(local_78,PTR_s_OBJECTIVES_0079d718,0x1f);
        local_54 = (int)*(short *)((int)local_8 + 0x19);
        local_58 = uVar7;
        Library::DKW::TBL::FUN_006ae1c0(local_c,(undefined4 *)local_e8);
      }
      cMf32::RecMemFree((cMf32 *)param_1,(uint *)&local_8);
    }
    pcVar3 = (char *)cMf32::RecNameGetNext((cMf32 *)param_1);
  }
  g_currentExceptionFrame = local_50.previous;
  return local_c;
}

