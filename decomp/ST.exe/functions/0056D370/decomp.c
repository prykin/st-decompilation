
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::OpenGameDBs */

void __thiscall STAppC::OpenGameDBs(STAppC *this)

{
  STAppC *pSVar1;
  code *pcVar2;
  int errorCode;
  int iVar3;
  undefined4 unaff_ESI;
  STAppC *pSVar4;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  STAppC *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    pSVar1 = local_8 + 0x470;
    pSVar4 = local_8 + 0x7d1a;
    wsprintfA((LPSTR)pSVar4,&DAT_007c6ee4,pSVar1,s_NATURE_007ca16c);
    DAT_00806768 = FUN_006f0ec0(0x345,(byte *)pSVar4,0,0,0);
    DAT_0080676c = FUN_007097c0((int)DAT_00806768);
    wsprintfA((LPSTR)pSVar4,&DAT_007c6ee4,pSVar1,s_OTHER_007ca164);
    DAT_00806770 = FUN_006f0ec0(0x345,(byte *)pSVar4,0,0,0);
    DAT_00806774 = FUN_007097c0((int)DAT_00806770);
    wsprintfA((LPSTR)pSVar4,&DAT_007c6ee4,pSVar1,&DAT_007ca15c);
    DAT_00806778 = FUN_006f0ec0(0x345,(byte *)pSVar4,0,0,0);
    DAT_0080677c = FUN_007097c0((int)DAT_00806778);
    wsprintfA((LPSTR)pSVar4,&DAT_007c6ee4,pSVar1,s_CONTROLG_007ca150);
    DAT_00806790 = FUN_006f0ec0(0x345,(byte *)pSVar4,0,0,0);
    DAT_00806794 = FUN_007097c0((int)DAT_00806790);
    wsprintfA((LPSTR)pSVar4,&DAT_007c6ee4,pSVar1,s_OBJECT_007ca148);
    DAT_00806788 = FUN_006f0ec0(0x345,(byte *)pSVar4,0,0,0);
    DAT_0080678c = FUN_007097c0((int)DAT_00806788);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_tapp_cpp_007ca0c8,0x400,0,errorCode,&DAT_007a4ccc,
                             s_STAppC__OpenGameDBs_007ca130);
  if (iVar3 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_tapp_cpp_007ca0c8,0x400);
  return;
}

