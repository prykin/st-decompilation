#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tintersys.cpp
   InterSystemC::CreateInterfObjects */

undefined4 __thiscall InterSystemC::CreateInterfObjects(InterSystemC *this)

{
  bool bVar2;
  InterSystemC *this_00;
  int iVar3;
  ccFntTy *pcVar3;
  int iVar5;
  LPSTR pCVar6;
  ushort *puVar7;
  char *text;
  int iVar4;
  undefined4 uVar9;
  uint uVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
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
  ushort *local_60;
  int local_5c;
  InterSystemC *local_8;

  local_1c8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_1c8;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_1c8.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 == 0) {
    if (DAT_0080874e == '\x01') {
      pcVar3 = (ccFntTy *)thunk_FUN_00541cf0(PTR_0080679c,nullptr,DAT_00807dd9);
    }
    else if (DAT_0080874e == '\x02') {
      pcVar3 = (ccFntTy *)thunk_FUN_00541f60(PTR_0080679c,nullptr,DAT_00807dd9);
    }
    else {
      pcVar3 = (ccFntTy *)thunk_FUN_005421d0(PTR_0080679c,nullptr,DAT_00807dd9);
    }
    this_00->field_0024 = pcVar3;
    pcVar3->field_0058 = 1;
    pcVar3->field_005C = 0;
    pcVar3 = (ccFntTy *)thunk_FUN_005412b0(PTR_0080679c,nullptr,DAT_00807dd9);
    this_00->field_0028 = pcVar3;
    pcVar3->field_0058 = 0;
    pcVar3->field_005C = 0;
    iVar5 = thunk_FUN_005416a0((int)PTR_0080679c,nullptr,DAT_00807dd9);
    this_00->field_002C = iVar5;
    *(undefined4 *)(iVar5 + 0x58) = 1;
    *(undefined4 *)(iVar5 + 0x5c) = 0;
    iVar5 = thunk_FUN_005419e0((int)PTR_0080679c,nullptr,DAT_00807dd9);
    this_00->field_0030 = iVar5;
    *(undefined4 *)(iVar5 + 0x58) = 1;
    *(undefined4 *)(iVar5 + 0x5c) = 0;
    thunk_FUN_0056a500();
    memset(local_184, 0, 0x17c); /* compiler bulk-zero initialization */
    puVar14 = nullptr;
    iVar13 = 0;
    iVar12 = 1;
    bVar11 = 0;
    uVar10 = 0xffffffff;
    uVar9 = 0;
    iVar5 = 1;
    local_184[1] = 1;
    local_184[0] = 1;
    pCVar6 = thunk_FUN_00571240("BUT_FILEOPT",0);
    pCVar6 = FUN_006f2c00(pCVar6,iVar5,uVar9);
    puVar7 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806794,CASE_1,pCVar6,uVar10,bVar11,iVar12,iVar13,puVar14);
    local_184[2] = (-(uint)(DAT_0080874e != '\x03') & 5) + 0x26;
    local_174 = *(undefined4 *)(puVar7 + 2);
    local_164 = this_00->field_0014;
    local_184[3] = (DAT_0080874e != '\x03') + 7;
    local_170 = *(undefined4 *)(puVar7 + 4);
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
    /* ST_CALLSITE[005426E6]: CALL dword ptr [EAX + 0x8] */
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
    /* ST_CALLSITE[00542771]: CALL dword ptr [EDX + 0x8] */
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,2,nullptr,nullptr,local_184,1);
    local_d0 = 0x2718;
    local_f4 = 0x2718;
    local_184[2] = (-(uint)(DAT_0080874e != '\x03') & 3) + 0xd2;
    local_184[0] = 1;
    local_15c = 0xb901;
    local_11c = 0xb902;
    /* ST_CALLSITE[005427CB]: CALL dword ptr [EDX + 0x8] */
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,2,nullptr,nullptr,local_184,1);
    if ((*(char *)(g_bulkInitializedRecords_008087C7 + DAT_0080874d) == '\0') &&
       (DAT_0080874f == '\0')) {
      bVar11 = 1;
    }
    else {
      bVar11 = 0;
    }
    local_184[0] = (uint)bVar11;
    local_d0 = 0x2719;
    local_f4 = 0x2719;
    local_184[2] = (-(uint)(DAT_0080874e != '\x03') & 2) + 0x128;
    local_15c = 0xb903;
    local_11c = 0xb904;
    /* ST_CALLSITE[0054284D]: CALL dword ptr [EAX + 0x8] */
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
    /* ST_CALLSITE[005428F5]: CALL dword ptr [EAX + 0x8] */
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,2,nullptr,nullptr,local_184,1);
    thunk_FUN_0056a500();
    /* ST_CALLSITE[0054290E]: CALL dword ptr [EDX + 0x8] */
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x11f,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    /* ST_CALLSITE[00542927]: CALL dword ptr [EAX + 0x8] */
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x120,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    /* ST_CALLSITE[00542940]: CALL dword ptr [EDX + 0x8] */
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x122,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    /* ST_CALLSITE[00542959]: CALL dword ptr [EAX + 0x8] */
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x123,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    /* ST_CALLSITE[00542972]: CALL dword ptr [EDX + 0x8] */
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x125,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    /* ST_CALLSITE[0054298B]: CALL dword ptr [EAX + 0x8] */
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x127,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    /* ST_CALLSITE[005429A4]: CALL dword ptr [EDX + 0x8] */
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x128,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    /* ST_CALLSITE[005429BD]: CALL dword ptr [EAX + 0x8] */
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x12a,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    if (DAT_0080874e == '\x03') {
      /* ST_CALLSITE[005429DF]: CALL dword ptr [EDX + 0x8] */
      (*this_00->vtable->CreateObject)
                ((SystemClassTy *)this_00,0x151,nullptr,nullptr,0,1);
      /* ST_CALLSITE[005429EF]: CALL dword ptr [EAX + 0x8] */
      (*this_00->vtable->CreateObject)
                ((SystemClassTy *)this_00,0x159,nullptr,nullptr,0,1);
    }
    /* ST_CALLSITE[005429FF]: CALL dword ptr [EDX + 0x8] */
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x149,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    /* ST_CALLSITE[00542A18]: CALL dword ptr [EAX + 0x8] */
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x148,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    /* ST_CALLSITE[00542A31]: CALL dword ptr [EDX + 0x8] */
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x14a,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    /* ST_CALLSITE[00542A4A]: CALL dword ptr [EAX + 0x8] */
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x153,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    /* ST_CALLSITE[00542A63]: CALL dword ptr [EDX + 0x8] */
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x155,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    /* ST_CALLSITE[00542A7C]: CALL dword ptr [EAX + 0x8] */
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x154,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    /* ST_CALLSITE[00542A95]: CALL dword ptr [EDX + 0x8] */
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x156,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    /* ST_CALLSITE[00542AAE]: CALL dword ptr [EAX + 0x8] */
    (*this_00->vtable->CreateObject)((SystemClassTy *)this_00,299,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    /* ST_CALLSITE[00542AC7]: CALL dword ptr [EDX + 0x8] */
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x12e,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    /* ST_CALLSITE[00542AE0]: CALL dword ptr [EAX + 0x8] */
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x14b,nullptr,nullptr,0,1);
    thunk_FUN_0056a500();
    /* ST_CALLSITE[00542AF6]: CALL dword ptr [EDX + 0x10] */
    this_00->vfunc_10(0x201,0);
    thunk_FUN_0056a500();
    if (g_helpPanel_00801690 != nullptr) {
      /* ST_CALLSITE[00542B0C]: CALL 0x00404322; direct=00404322 HelpPanelTy::sub_0051DA70 */
      HelpPanelTy::sub_0051DA70(g_helpPanel_00801690);
    }
    thunk_FUN_0056a500();
    if ((DAT_0080877e == '\0') && (g_popUp_008016D8 != nullptr)) {
      uVar10 = 8;
      text = LoadResourceString(0x4275,g_hINSTANCE_00807618);
      thunk_FUN_0052d320(g_popUp_008016D8,text,uVar10);
    }
    g_currentExceptionFrame = local_1c8.previous;
    return 0;
  }
  g_currentExceptionFrame = local_1c8.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\tintersys.cpp",0xb3,0,iVar3,"%s",
                             "InterSystemC::CreateInterfObjects");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\tintersys.cpp",0xb3);
  return 0xfffffffc;
}

