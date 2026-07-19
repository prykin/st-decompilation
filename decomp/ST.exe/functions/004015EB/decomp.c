
uint * __cdecl thunk_FUN_0067dc20(int param_1,int param_2,char *param_3,uint param_4)

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
  undefined1 auStack_2ec [516];
  char acStack_e8 [64];
  char acStack_a8 [12];
  char acStack_9c [36];
  char acStack_78 [32];
  uint uStack_58;
  int iStack_54;
  InternalExceptionFrame IStack_50;
  uint *puStack_c;
  ushort *puStack_8;
  
  puVar9 = (undefined4 *)auStack_2ec;
  for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  *(undefined1 *)puVar9 = 0;
  puStack_c = (uint *)0x0;
  puStack_8 = (ushort *)0x0;
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  iVar6 = Library::MSVCRT::__setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar6 != 0) {
    g_currentExceptionFrame = IStack_50.previous;
    iVar4 = ReportDebugMessage(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x156,0,iVar6,&DAT_007a4ccc,
                               s__CreateStgListByRoot_007d3008);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      puVar5 = (uint *)(*pcVar2)();
      return puVar5;
    }
    if (puStack_c != (uint *)0x0) {
      FUN_006ae110((byte *)puStack_c);
    }
    RaiseInternalException(iVar6,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x158);
    return (uint *)0x0;
  }
  if (param_1 == 0) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x13f);
  }
  puStack_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0x98,5);
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
  auStack_2ec[0] = 0xc;
  pcVar3 = pcVar3 + -uVar7;
  pcVar10 = auStack_2ec + 1;
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
  cMf32::ToBeg((cMf32 *)param_1,FUN_006f2d10,auStack_2ec);
  pcVar3 = (char *)cMf32::RecNameGetNext((cMf32 *)param_1);
  while (pcVar3 != (char *)0x0) {
    puStack_8 = FUN_006f2d90(param_1,pcVar3,0,1);
    uVar7 = *(uint *)(puStack_8 + 0x85);
    if (uVar7 == 0) {
      uVar7 = 1;
    }
    if (puStack_8 != (ushort *)0x0) {
      if (((param_2 == 0) || (param_2 == *(short *)((int)puStack_8 + 0x19))) &&
         ((param_4 & uVar7) != 0)) {
        _Source = (char *)((int)puStack_8 + 0x1b);
        pcVar10 = acStack_e8;
        for (iVar6 = 0x26; iVar6 != 0; iVar6 = iVar6 + -1) {
          pcVar10[0] = '\0';
          pcVar10[1] = '\0';
          pcVar10[2] = '\0';
          pcVar10[3] = '\0';
          pcVar10 = pcVar10 + 4;
        }
        Library::MSVCRT::_strncpy(acStack_e8,_Source,0x3f);
        Library::MSVCRT::_strncpy(acStack_a8,(char *)((int)puStack_8 + 0x5b),0xb);
        Library::MSVCRT::_strncpy(acStack_9c,pcVar3,0x1f);
        Library::MSVCRT::_strncpy(acStack_78,PTR_s_OBJECTIVES_0079d718,0x1f);
        iStack_54 = (int)*(short *)((int)puStack_8 + 0x19);
        uStack_58 = uVar7;
        Library::DKW::TBL::FUN_006ae1c0(puStack_c,(undefined4 *)acStack_e8);
      }
      cMf32::RecMemFree((cMf32 *)param_1,(uint *)&puStack_8);
    }
    pcVar3 = (char *)cMf32::RecNameGetNext((cMf32 *)param_1);
  }
  g_currentExceptionFrame = IStack_50.previous;
  return puStack_c;
}

