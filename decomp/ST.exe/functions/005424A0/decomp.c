#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tintersys.cpp
   InterSystemC::CreateInterfObjects */

undefined4 __thiscall InterSystemC::CreateInterfObjects(InterSystemC *this)

{
  code *pcVar1;
  bool bVar2;
  InterSystemC *this_00;
  int iVar3;
  ccFntTy *pcVar4;
  LPSTR pCVar5;
  ushort *puVar6;
  char *text;
  undefined4 uVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  InternalExceptionFrame local_1c8;
  uint local_184 [4];
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined2 local_f8;
  undefined2 local_f6;
  undefined4 local_f4;
  undefined4 local_ec;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined2 local_d2;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_60;
  int local_5c;
  InterSystemC *local_8;

  local_1c8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_1c8;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_1c8.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 == 0) {
    if (DAT_0080874e == '\x01') {
      pcVar4 = (ccFntTy *)thunk_FUN_00541cf0(DAT_0080679c,nullptr,DAT_00807dd9);
    }
    else if (DAT_0080874e == '\x02') {
      pcVar4 = (ccFntTy *)thunk_FUN_00541f60(DAT_0080679c,nullptr,DAT_00807dd9);
    }
    else {
      pcVar4 = (ccFntTy *)thunk_FUN_005421d0(DAT_0080679c,nullptr,DAT_00807dd9);
    }
    this_00->field_0024 = pcVar4;
    pcVar4->field_0058 = 1;
    pcVar4->field_005C = 0;
    pcVar4 = (ccFntTy *)thunk_FUN_005412b0(DAT_0080679c,nullptr,DAT_00807dd9);
    this_00->field_0028 = pcVar4;
    pcVar4->field_0058 = 0;
    pcVar4->field_005C = 0;
    iVar3 = thunk_FUN_005416a0(DAT_0080679c,nullptr,DAT_00807dd9);
    this_00->field_002C = iVar3;
    *(undefined4 *)(iVar3 + 0x58) = 1;
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    iVar3 = thunk_FUN_005419e0(DAT_0080679c,nullptr,DAT_00807dd9);
    this_00->field_0030 = iVar3;
    *(undefined4 *)(iVar3 + 0x58) = 1;
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    thunk_FUN_0056a500();
    memset(local_184, 0, 0x17c); /* compiler bulk-zero initialization */
    puVar13 = nullptr;
    iVar12 = 0;
    iVar11 = 1;
    bVar10 = 0;
    uVar9 = 0xffffffff;
    uVar8 = 0;
    iVar3 = 1;
    local_184[1] = 1;
    local_184[0] = 1;
    pCVar5 = thunk_FUN_00571240("BUT_FILEOPT",0);
    pCVar5 = FUN_006f2c00(pCVar5,iVar3,uVar8);
    puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_1,pCVar5,uVar9,bVar10,iVar11,iVar12,puVar13);
    local_184[2] = (-(uint)(DAT_0080874e != '\x03') & 5) + 0x26;
    local_174 = *(undefined4 *)(puVar6 + 2);
    local_164 = this_00->field_0014;
    local_184[3] = (DAT_0080874e != '\x03') + 7;
    local_170 = *(undefined4 *)(puVar6 + 4);
    local_e0 = 0x101;
    local_104 = 0x101;
    local_dc = 3;
    local_100 = 3;
    local_d0 = 0x2717;
    local_f4 = 0x2717;
    local_d2 = 2;
    local_f6 = 2;
    local_120 = 0;
    local_160 = 0;
    local_15c = 0xb8ff;
    local_11c = 0xb900;
    local_fc = 0x4201;
    local_d8 = 0x4202;
    local_d4 = 0;
    local_f8 = 0;
    local_ec = 0;
    local_c8 = 1;
    local_124 = local_164;
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,2,nullptr,nullptr,local_184,1);
    if ((*(char *)(g_bulkInitializedRecords_008087C7 + DAT_0080874d) == '\0') &&
       (DAT_0080874f == '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((!bVar2) || ((DAT_00808783 == '\x03' && (DAT_00808aa9 == '\0')))) {
      local_184[0] = 0;
    }
    local_15c = 0xb905;
    local_184[2] = (-(uint)(DAT_0080874e != '\x03') & 4) + 0x7c;
    local_11c = 0xb906;
    local_d0 = 0x271a;
    local_f4 = 0x271a;
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,2,nullptr,nullptr,local_184,1);
    local_d0 = 0x2718;
    local_f4 = 0x2718;
    local_184[2] = (-(uint)(DAT_0080874e != '\x03') & 3) + 0xd2;
    local_184[0] = 1;
    local_15c = 0xb901;
    local_11c = 0xb902;
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,2,nullptr,nullptr,local_184,1);
    if ((*(char *)(g_bulkInitializedRecords_008087C7 + DAT_0080874d) == '\0') &&
       (DAT_0080874f == '\0')) {
      bVar10 = 1;
    }
    else {
      bVar10 = 0;
    }
    local_184[0] = (uint)bVar10;
    local_d0 = 0x2719;
    local_f4 = 0x2719;
    local_184[2] = (-(uint)(DAT_0080874e != '\x03') & 2) + 0x128;
    local_15c = 0xb903;
    local_11c = 0xb904;
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,2,nullptr,nullptr,local_184,1);
    local_184[3] = DAT_00806734 + -0x1a;
    local_184[2] = g_nWidth_00806730 + -0x32;
    local_184[0] = 1;
    local_174 = 0x28;
    local_170 = 0x12;
    if (DAT_0080874e == '\x03') {
      local_60 = FUN_0070aa70(g_cMf32_00806790,"BUT_OHELPMSK",0,1);
      local_5c = Library::Ourlib::MFIMG::mfImgGetWidth
                           (g_cMf32_00806790,0x12,"BUT_OHELPMSK",1);
    }
    local_d0 = 0x2739;
    local_f4 = 0x2739;
    local_15c = 0xb907;
    local_11c = 0xb908;
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,2,nullptr,nullptr,local_184,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x11f,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x120,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x122,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x123,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x125,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x127,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x128,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x12a,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    if (DAT_0080874e == '\x03') {
      (*this_00->vtable->CreateObject)
                ((SystemClassTy *)this_00,0x151,nullptr,nullptr,0,1);
      (*this_00->vtable->CreateObject)
                ((SystemClassTy *)this_00,0x159,nullptr,nullptr,0,1);
    }
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x149,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x148,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x14a,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x153,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x155,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x154,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x156,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)((SystemClassTy *)this_00,299,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x12e,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x14b,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    this_00->vfunc_10(0x201,0);
    thunk_FUN_0056a500();
    if (g_helpPanel_00801690 != nullptr) {
      HelpPanelTy::sub_0051DA70(g_helpPanel_00801690);
    }
    thunk_FUN_0056a500();
    if ((DAT_0080877e == '\0') && (g_popUp_008016D8 != nullptr)) {
      uVar9 = 8;
      text = LoadResourceString(0x4275,g_module_00807618);
      thunk_FUN_0052d320(g_popUp_008016D8,text,uVar9);
    }
    g_currentExceptionFrame = local_1c8.previous;
    return 0;
  }
  g_currentExceptionFrame = local_1c8.previous;
  iVar11 = ReportDebugMessage("E:\\__titans\\Andrey\\tintersys.cpp",0xb3,0,iVar3,"%s"
                              ,"InterSystemC::CreateInterfObjects");
  if (iVar11 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\tintersys.cpp",0xb3);
  return 0xfffffffc;
}

