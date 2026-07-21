#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::OpenGameDBs */

void __thiscall STAppC::OpenGameDBs(STAppC *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  int errorCode;
  int iVar3;
  undefined1 *puVar4;
  InternalExceptionFrame local_4c;
  STAppC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    puVar1 = &local_8->field_0x470;
    puVar4 = &local_8->field_7D1A;
    wsprintfA(puVar4,"%s%s",puVar1,"NATURE");
    DAT_00806768 = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,puVar4,0,0,0);
    DAT_0080676c = Library::Ourlib::MFRLOAD::mfRLoadCreate((int)DAT_00806768);
    wsprintfA(puVar4,"%s%s",puVar1,"OTHER");
    PTR_00806770 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,puVar4,0,0,0);
    DAT_00806774 = Library::Ourlib::MFRLOAD::mfRLoadCreate((int)PTR_00806770);
    wsprintfA(puVar4,"%s%s",puVar1,&DAT_007ca15c);
    DAT_00806778 = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,puVar4,0,0,0);
    DAT_0080677c = Library::Ourlib::MFRLOAD::mfRLoadCreate((int)DAT_00806778);
    wsprintfA(puVar4,"%s%s",puVar1,"CONTROLG");
    DAT_00806790 = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,puVar4,0,0,0);
    DAT_00806794 = Library::Ourlib::MFRLOAD::mfRLoadCreate((int)DAT_00806790);
    wsprintfA(puVar4,"%s%s",puVar1,"OBJECT");
    DAT_00806788 = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,puVar4,0,0,0);
    DAT_0080678c = Library::Ourlib::MFRLOAD::mfRLoadCreate((int)DAT_00806788);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\tapp.cpp",0x400,0,errorCode,"%s",
                             "STAppC::OpenGameDBs");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\tapp.cpp",0x400);
  return;
}

