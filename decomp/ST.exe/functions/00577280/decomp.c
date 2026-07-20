
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tsystem.cpp
   Diagnostic line evidence: 177 | 187 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void CreateGameSystem(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this;
  int errorCode;
  GameSystemC *this_00;
  int iVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_44 [16];
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb8;
  errorCode = Library::MSVCRT::__setjmp3(local_44,0,unaff_ESI,pIVar5);
  if (errorCode == 0) {
    this_00 = (GameSystemC *)Library::MSVCRT::FUN_0072e530(0x435);
    if (this_00 == (GameSystemC *)0x0) {
      PTR_0081163c = (AnonShape_00577690_10255A81 *)0x0;
    }
    else {
      PTR_0081163c = (AnonShape_00577690_10255A81 *)
                     GameSystemC::GameSystemC(this_00,g_appClass_00806728);
    }
    if ((GameSystemC *)PTR_0081163c == (GameSystemC *)0x0) {
      RaiseInternalException(-1,g_overwriteContext_007ED77C,s_E____titans_tsystem_cpp_007cab5c,0xb1)
      ;
    }
    *(undefined4 *)&PTR_0081163c->field_0x428 = 0;
    (*(code *)**(undefined4 **)PTR_0081163c)();
    AppClassTy::AddSystem((AppClassTy *)&DAT_00807620,(int *)PTR_0081163c,0);
    *(undefined4 *)&PTR_0081163c->field_0x428 = 1;
    this = PTR_00802a30;
    uVar1 = PTR_00802a30->field_00C9;
    uVar2 = PTR_00802a30->field_00C5;
    PTR_00802a30->field_0493 = 2;
    this->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this,CASE_0,uVar2,uVar1);
    CursorClassTy::DrawSprite(this,this->field_00C5,this->field_00C9);
    this->field_0xd2 = 0;
    *(undefined4 *)&this->field_0x4df = 0xffffffff;
    g_currentExceptionFrame = pIVar5;
    return;
  }
  g_currentExceptionFrame = pIVar5;
  iVar4 = ReportDebugMessage(s_E____titans_tsystem_cpp_007cab5c,0xbb,0,errorCode,&DAT_007a4ccc,
                             s_CreateGameSystem_007cac34);
  if (iVar4 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_tsystem_cpp_007cab5c,0xbb);
  return;
}

