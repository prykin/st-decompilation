
int __cdecl
FUN_00719190(undefined4 *param_1,undefined4 *param_2,uint param_3,UINT param_4,int param_5,
            int *param_6,int param_7,uint param_8,uint *param_9)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  longlong lVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_44c [256];
  InternalExceptionFrame local_4c;
  int local_8;
  
  local_8 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage(s_E__Ourlib_Palette_cpp_007f0718,0x17c,0,iVar2,&DAT_007a4ccc,
                               s_DarkPalette_Error__007f07b0);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    RaiseInternalException(iVar2,0,s_E__Ourlib_Palette_cpp_007f0718,0x17d);
    return iVar2;
  }
  Library::MSVCRT::FUN_0072da70(local_44c,param_2,0x400);
  if (*param_6 < param_5) {
    if (*param_9 + param_7 <= param_8) {
      *param_9 = param_8;
      puVar6 = local_44c;
      uVar5 = 100;
      lVar4 = Library::MSVCRT::__ftol();
      FUN_00718d50((int)param_2,param_3,param_4,100,100 - (char)lVar4,uVar5,puVar6);
      FUN_006b0a20(param_1,(int)local_44c,param_3,param_4,1);
      *param_6 = *param_6 + 1;
      g_currentExceptionFrame = local_4c.previous;
      return local_8;
    }
  }
  else {
    local_8 = -4;
  }
  g_currentExceptionFrame = local_4c.previous;
  return local_8;
}

