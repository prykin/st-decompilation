#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::ReadCmdPlay */

void __thiscall STAppC::ReadCmdPlay(STAppC *this,int param_1)

{
  uint newSize;
  STAppC *pSVar2;
  int iVar3;
  HANDLE hFile;
  DWORD DVar3;
  BOOL BVar4;
  int iVar6;
  void *pvVar7;
  int iVar5;
  InternalExceptionFrame local_70;
  undefined1 local_2c [14];
  uint local_1e;
  STAppC *local_10;
  uint local_c;
  int local_8;

  local_8 = 0;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
  pSVar2 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\tapp.cpp",0x914,0,iVar3,"%s",
                               "STAppC::ReadCmdPlay");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\tapp.cpp",0x914);
    return;
  }
  hFile = CreateFileA(&local_10->field_7B06,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                      (HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    local_8 = 1;
    goto cf_common_exit_00571620;
  }
  if ((param_1 != 0) &&
     (((DVar3 = SetFilePointer(hFile,0,(PLONG)0x0,0), DVar3 == 0xffffffff ||
       (BVar4 = ReadFile(hFile,&pSVar2->field_1134,4,&local_c,(LPOVERLAPPED)0x0), BVar4 == 0)) ||
      (local_c != 4)))) {
    local_8 = 1;
  }
  if ((local_8 == 0) &&
     (DVar3 = SetFilePointer(hFile,pSVar2->field_1191,(PLONG)0x0,0), DVar3 != 0xffffffff)) {
    BVar4 = ReadFile(hFile,local_2c,0x1b,&local_c,(LPOVERLAPPED)0x0);
    if ((BVar4 != 0) && (local_c == 0x1b)) {
      iVar6 = 0;
      switch(local_1e & 0xff) {
      case 5:
      case 0x14:
      case 0x19:
        iVar6 = 0xc;
        break;
      case 8:
      case 9:
      case 0x15:
      case 0x22:
      case 0x28:
      case 0x29:
      case 0x2a:
        iVar6 = 1;
        break;
      case 0x16:
        iVar6 = 0x18;
        break;
      case 0x17:
        iVar6 = 0x21;
        break;
      case 0x18:
        iVar6 = 0x12;
        break;
      case 0x1a:
        iVar6 = 0xd;
        break;
      case 0x1e:
        iVar6 = 0xb;
        break;
      case 0x1f:
        iVar6 = 7;
        break;
      case 0x20:
        iVar6 = 9;
        break;
      case 0x21:
        iVar6 = 5;
        break;
      case 0x23:
        iVar6 = 0x10;
        break;
      case 0x27:
        iVar6 = 2;
      }
      newSize = iVar6 + 0x1b;
      if (pSVar2->field_118D < newSize) {
        pSVar2->field_118D = newSize;
        pvVar7 = Library::DKW::LIB::MemRealloc(pSVar2->field_1189,newSize);
        pSVar2->field_1189 = pvVar7;
      }
      DVar3 = SetFilePointer(hFile,pSVar2->field_1191,(PLONG)0x0,0);
      if (((DVar3 == 0xffffffff) ||
          (BVar4 = ReadFile(hFile,pSVar2->field_1189,newSize,&local_c,(LPOVERLAPPED)0x0), BVar4 == 0
          )) || (local_c != newSize)) {
        local_8 = 1;
        CloseHandle(hFile);
      }
      else {
        pSVar2->field_1191 = pSVar2->field_1191 + newSize;
        CloseHandle(hFile);
      }
      goto cf_common_exit_00571620;
    }
    pSVar2->field_1185 = 0;
    if (g_popUp_008016D8 != nullptr) {
      thunk_FUN_0052d320(g_popUp_008016D8,"Playing of commands has finished!",8);
      CloseHandle(hFile);
      goto cf_common_exit_00571620;
    }
  }
  else {
    local_8 = 1;
  }
  CloseHandle(hFile);
cf_common_exit_00571620:
  if ((local_8 != 0) && (pSVar2->field_1185 = 0, g_popUp_008016D8 != nullptr)) {
    thunk_FUN_0052d320(g_popUp_008016D8,"Error playing command!",9);
    thunk_FUN_0052d320(g_popUp_008016D8,"Playing of command has turned off.",8);
  }
  g_currentExceptionFrame = local_70.previous;
  return;
}

