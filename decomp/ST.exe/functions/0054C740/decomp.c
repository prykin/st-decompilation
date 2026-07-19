
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\tplaysys.cpp
   Diagnostic line evidence: 125 | 176 | 177 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void CreatePlaySystem(void)

{
  code *pcVar1;
  int errorCode;
  void *this;
  int iVar2;
  byte bVar3;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  InternalExceptionFrame local_50;
  SystemClassTyVTable **local_c;
  SystemClassTyVTable *local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_ESI,unaff_EBX);
  if (errorCode == 0) {
    this = (void *)Library::MSVCRT::FUN_0072e530(0xf8);
    if (this == (void *)0x0) {
      DAT_00802a38 = (SystemClassTy *)0x0;
    }
    else {
      DAT_00802a38 = (SystemClassTy *)thunk_FUN_0054cb40(this,DAT_00806728);
    }
    if (DAT_00802a38 == (SystemClassTy *)0x0) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Andrey_tplaysys_cpp_007c8430,0x7d);
    }
    DAT_00802a38[7].vtable = (SystemClassTyVTable *)0x0;
    (*DAT_00802a38->vtable->InitSystem)(DAT_00802a38);
    (*DAT_00802a38->vtable->CreateObjectFull)(DAT_00802a38,0x1100,(void *)0x0,&DAT_007fa174,0,0);
    (*DAT_00802a38->vtable->CreateObjectFull)(DAT_00802a38,0x109,(void *)0x0,(void *)0x0,0,0);
    (*DAT_00802a38->vtable->CreateObjectFull)(DAT_00802a38,0x121,(void *)0x0,(void *)0x0,0,0);
    (*DAT_00802a38->vtable->CreateObjectFull)(DAT_00802a38,0x143,&DAT_00811794,(void *)0x0,0,0);
    (*DAT_00802a38->vtable->CreateObjectFull)(DAT_00802a38,0x145,&DAT_008117a0,(void *)0x0,0,0);
    (*DAT_00802a38->vtable->CreateObjectFull)(DAT_00802a38,0x146,&DAT_008117ac,(void *)0x0,0,0);
    (*DAT_00802a38->vtable->CreateObjectFull)(DAT_00802a38,0x15b,&DAT_00811780,(void *)0x0,0,0);
    thunk_FUN_0058d6f0();
    if (DAT_0080879c == 0) {
      bVar3 = 0;
      local_8 = (SystemClassTyVTable *)((uint)local_8 & 0xffffff00);
      do {
        thunk_FUN_00435850((int)local_8,1,(int *)0x0);
        bVar3 = bVar3 + 1;
        local_8 = (SystemClassTyVTable *)CONCAT31(local_8._1_3_,bVar3);
      } while (bVar3 < 8);
    }
    CreateAi();
    if (DAT_00806754 != (cMf32 *)0x0) {
      local_c = &local_8;
      local_8 = (SystemClassTyVTable *)0x32;
      cMf32::RecGet(DAT_00806754,0xc,PTR_s_LAST_NAME_0079ae2c,(int *)&local_c,0);
      if (DAT_00802a38[1].vtable < local_8) {
        DAT_00802a38[1].vtable = local_8;
      }
    }
    AppClassTy::AddChildSystem((AppClassTy *)&DAT_00807620,DAT_0081163c,DAT_00802a38,0);
    DAT_00802a38[7].vtable = (SystemClassTyVTable *)0x1;
    if (DAT_008067a0 != '\0') {
      DAT_00802a99 = 1;
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar2 = ReportDebugMessage(s_E____titans_Andrey_tplaysys_cpp_007c8430,0xb0,0,errorCode,
                             &DAT_007a4ccc,s_CreatePlaySystem_007c841c);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_tplaysys_cpp_007c8430,0xb1);
  return;
}

