
int __thiscall STPlaySystemC::Save(STPlaySystemC *this,cMf32 *param_1)

{
  code *pcVar1;
  STPlaySystemC *pSVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_74;
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  undefined4 uStack_20;
  STPlaySystemC *pSStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = *(undefined4 *)(this + 0xe4);
  uStack_8 = *(undefined4 *)(this + 0x20);
  IStack_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_74;
  pSStack_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    cMf32::RecPut(param_1,0xc,PTR_DAT_0079ae30,(byte *)&uStack_c,4,(undefined4 *)0x0,'\0',
                  (uint *)0x0);
    cMf32::RecPut(param_1,0xc,PTR_s_LAST_NAME_0079ae2c,(byte *)&uStack_8,4,(undefined4 *)0x0,'\0',
                  (uint *)0x0);
    pSVar2 = pSStack_10;
    *(cMf32 **)(pSStack_10 + 0x24) = param_1;
    uStack_24 = 0xf;
    uStack_20 = 0x10f;
    FUN_006e3db0((int)auStack_30);
    *(undefined4 *)(pSVar2 + 0x24) = 0;
    g_currentExceptionFrame = IStack_74.previous;
    return 0;
  }
  g_currentExceptionFrame = IStack_74.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x1fb,0,iVar3,&DAT_007a4ccc,
                             s_STPlaySystemC__Save_007c84f8);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_tplaysys_cpp_007c8430,0x1fb);
  return iVar3;
}

