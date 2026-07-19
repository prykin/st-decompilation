
int thunk_FUN_006767d0(void)

{
  int iVar1;
  cMf32 *this;
  cMf32 *this_00;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  byte abStack_150 [260];
  InternalExceptionFrame IStack_4c;
  cMf32 *pcStack_8;
  
  pcStack_8 = (cMf32 *)0x0;
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  iVar1 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    wsprintfA((LPSTR)abStack_150,s__s_s_s__s_007ca1ec,&DAT_00807680,PTR_s_SAVEGAME__0079d6c0,
              &DAT_00807ddd,PTR_s_PL_LOG_0079d6c4);
    this = (cMf32 *)FUN_006f0ec0(0x345,abStack_150,2,0,0);
    pcStack_8 = this;
    wsprintfA((LPSTR)abStack_150,s__s_d_02d_007d2de8,PTR_DAT_0079d6c8,(uint)DAT_0080874e,
              DAT_0080c52a);
    cMf32::RecPut(this,0xc,(char *)abStack_150,(byte *)&DAT_0080c522,0x27f0,(undefined4 *)0x0,'\0',
                  (uint *)0x0);
    cMf32::delete(this_00,(undefined4 *)this);
    g_currentExceptionFrame = IStack_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  cMf32::delete((cMf32 *)IStack_4c.previous,(undefined4 *)pcStack_8);
  if (iVar1 < 0) {
    return iVar1;
  }
  return -1;
}

