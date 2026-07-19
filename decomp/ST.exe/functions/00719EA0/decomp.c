
int * __cdecl FUN_00719ea0(LPCSTR param_1,int *param_2)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar6;
  undefined4 *puVar7;
  InternalExceptionFrame local_90;
  int local_4c [4];
  uint local_3a;
  undefined4 *local_36;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  local_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_90;
  errorCode = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    local_c = FUN_0071ae80(param_1,(DWORD *)0x0);
    Library::DKW::SND::FUN_00752e40(local_4c,local_c);
    local_8 = Library::DKW::LIB::FUN_006aac10
                        ((-(uint)((short)local_4c[0] != 1) & 0x24) + 0x1a + local_3a);
    uVar4 = (-(uint)((short)local_4c[0] != 1) & 0x24) + 0x1a;
    piVar3 = local_4c;
    piVar6 = local_8;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *piVar6 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar6 = piVar6 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)piVar6 = (char)*piVar3;
      piVar3 = (int *)((int)piVar3 + 1);
      piVar6 = (int *)((int)piVar6 + 1);
    }
    *(undefined4 *)((int)local_8 + 0x16) = 0;
    puVar7 = (undefined4 *)((-(uint)((short)local_4c[0] != 1) & 0x24) + 0x1a + (int)local_8);
    for (uVar5 = local_3a >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *local_36;
      local_36 = local_36 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = local_3a & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)local_36;
      local_36 = (undefined4 *)((int)local_36 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    if (local_c != (int *)0x0) {
      FUN_006ab060(&local_c);
    }
    g_currentExceptionFrame = local_90.previous;
    if (param_2 != (int *)0x0) {
      *param_2 = (-(uint)((short)local_4c[0] != 1) & 0x24) + 0x1a + local_3a;
    }
    return local_8;
  }
  g_currentExceptionFrame = local_90.previous;
  iVar2 = ReportDebugMessage(s_E__Ourlib_mfwav_cpp_007f0800,0x61,0,errorCode,&DAT_007a4ccc,
                             s_GetPcmFromWavFile_007f0830);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    piVar3 = (int *)(*pcVar1)();
    return piVar3;
  }
  if (local_c != (int *)0x0) {
    FUN_006ab060(&local_c);
  }
  if (local_8 != (int *)0x0) {
    FUN_006ab060(&local_8);
  }
  RaiseInternalException(errorCode,0,s_E__Ourlib_mfwav_cpp_007f0800,0x66);
  return (int *)0x0;
}

