#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/tintersys.cpp

// 005424A0 InterSystemC::CreateInterfObjects
#line 4 "decomp/ST.exe/functions/005424A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tintersys.cpp
   InterSystemC::CreateInterfObjects */

undefined4 __thiscall st::fn_005424A0(InterSystemC *this)

{
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
  ushort *local_60;
  int local_5c;
  InterSystemC *local_8;

  local_1c8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_1c8;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_1c8.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 == 0) {
    if (DAT_0080874e == '\x01') {
      pcVar4 = (ccFntTy *)st::fn_00403D37(DAT_0080679c,nullptr,DAT_00807dd9);
    }
    else if (DAT_0080874e == '\x02') {
      pcVar4 = (ccFntTy *)st::fn_0040474B(DAT_0080679c,nullptr,DAT_00807dd9);
    }
    else {
      pcVar4 = (ccFntTy *)st::fn_0040178A(DAT_0080679c,nullptr,DAT_00807dd9);
    }
    this_00->field_0024 = pcVar4;
    pcVar4->field_0058 = 1;
    pcVar4->field_005C = 0;
    pcVar4 = (ccFntTy *)st::fn_004046F1(DAT_0080679c,nullptr,DAT_00807dd9);
    this_00->field_0028 = pcVar4;
    pcVar4->field_0058 = 0;
    pcVar4->field_005C = 0;
    iVar3 = st::fn_0040267B(DAT_0080679c,nullptr,DAT_00807dd9);
    this_00->field_002C = iVar3;
    *(undefined4 *)(iVar3 + 0x58) = 1;
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    iVar3 = st::fn_004024FF(DAT_0080679c,nullptr,DAT_00807dd9);
    this_00->field_0030 = iVar3;
    *(undefined4 *)(iVar3 + 0x58) = 1;
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    st::fn_004021C6();
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
    pCVar5 = st::fn_0040577C("BUT_FILEOPT",0);
    pCVar5 = st::fn_006F2C00(pCVar5,iVar3,uVar8);
    puVar6 = st::fn_00709AF0
                       (PTR_00806794,CASE_1,pCVar5,uVar9,bVar10,iVar11,iVar12,puVar13);
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
      local_60 = st::fn_0070AA70(g_cMf32_00806790,"BUT_OHELPMSK",0,1);
      local_5c = st::fn_0070A6F0
                           (g_cMf32_00806790,0x12,"BUT_OHELPMSK",1);
    }
    local_d0 = 0x2739;
    local_f4 = 0x2739;
    local_15c = 0xb907;
    local_11c = 0xb908;
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,2,nullptr,nullptr,local_184,1);
    st::fn_004021C6();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x11f,nullptr,nullptr,0,1);
    st::fn_004021C6();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x120,nullptr,nullptr,0,1);
    st::fn_004021C6();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x122,nullptr,nullptr,0,1);
    st::fn_004021C6();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x123,nullptr,nullptr,0,1);
    st::fn_004021C6();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x125,nullptr,nullptr,0,1);
    st::fn_004021C6();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x127,nullptr,nullptr,0,1);
    st::fn_004021C6();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x128,nullptr,nullptr,0,1);
    st::fn_004021C6();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x12a,nullptr,nullptr,0,1);
    st::fn_004021C6();
    if (DAT_0080874e == '\x03') {
      (*this_00->vtable->CreateObject)
                ((SystemClassTy *)this_00,0x151,nullptr,nullptr,0,1);
      (*this_00->vtable->CreateObject)
                ((SystemClassTy *)this_00,0x159,nullptr,nullptr,0,1);
    }
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x149,nullptr,nullptr,0,1);
    st::fn_004021C6();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x148,nullptr,nullptr,0,1);
    st::fn_004021C6();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x14a,nullptr,nullptr,0,1);
    st::fn_004021C6();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x153,nullptr,nullptr,0,1);
    st::fn_004021C6();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x155,nullptr,nullptr,0,1);
    st::fn_004021C6();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x154,nullptr,nullptr,0,1);
    st::fn_004021C6();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x156,nullptr,nullptr,0,1);
    st::fn_004021C6();
    (*this_00->vtable->CreateObject)((SystemClassTy *)this_00,299,nullptr,nullptr,0,1);
    st::fn_004021C6();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x12e,nullptr,nullptr,0,1);
    st::fn_004021C6();
    (*this_00->vtable->CreateObject)
              ((SystemClassTy *)this_00,0x14b,nullptr,nullptr,0,1);
    st::fn_004021C6();
    this_00->vfunc_10(0x201,0);
    st::fn_004021C6();
    if (g_helpPanel_00801690 != nullptr) {
      st::fn_00404322(g_helpPanel_00801690);
    }
    st::fn_004021C6();
    if ((DAT_0080877e == '\0') && (g_popUp_008016D8 != nullptr)) {
      uVar9 = 8;
      text = st::fn_006B0140(0x4275,g_hINSTANCE_00807618);
      st::fn_004014D8(g_popUp_008016D8,text,uVar9);
    }
    g_currentExceptionFrame = local_1c8.previous;
    return 0;
  }
  g_currentExceptionFrame = local_1c8.previous;
  iVar11 = st::fn_006AD4D0("E:\\__titans\\Andrey\\tintersys.cpp",0xb3,0,iVar3,"%s"
                              ,"InterSystemC::CreateInterfObjects");
  if (iVar11 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\tintersys.cpp",0xb3);
  return 0xfffffffc;
}

// 00542D80 CreateInterSystem
#line 4 "decomp/ST.exe/functions/00542D80/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\tintersys.cpp
   Diagnostic line evidence: 202 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void st::fn_00542D80(void)

{
  int errorCode;
  InterSystemC *this;
  int iVar2;
  InternalExceptionFrame local_68;
  undefined1 local_24 [16];
  undefined4 local_14;

  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  errorCode = st::fn_0072D7F0(local_68.jumpBuffer,0);
  if (errorCode == 0) {
    this = (InterSystemC *)st::fn_0072E530(0x34);
    if (this == nullptr) {
      g_interSystem_00802A28 = nullptr;
    }
    else {
      g_interSystem_00802A28 = st::fn_0040475A(this,g_app_00806728);
    }
    g_interSystem_00802A28->field_0020 = 0;
    (*g_interSystem_00802A28->vtable->InitSystem)((SystemClassTy *)g_interSystem_00802A28);
    st::fn_006E4960
              ((AppClassTy *)&DAT_00807620,(SystemClassTy *)g_parentSystem_0081163C,
               (SystemClassTy *)g_interSystem_00802A28,0);
    st::fn_00401D02(g_interSystem_00802A28);
    local_14 = 5;
    g_interSystem_00802A28->GetMessage((int)local_24);
    g_interSystem_00802A28->field_0020 = 1;
    g_currentExceptionFrame = local_68.previous;
    return;
  }
  g_currentExceptionFrame = local_68.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\Andrey\\tintersys.cpp",0xca,0,errorCode,
                             "%s","CreateInterSystem");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\tintersys.cpp",0xca);
  return;
}

// 00542F40 InterSystemC::GetMessage
#line 4 "decomp/ST.exe/functions/00542F40/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tintersys.cpp
   InterSystemC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00402A63|00542F40; family_names=InterSystemC::GetMessage; ret4=9;
   direct_offsets={10:2,14:0,18:3,1c:0} */

int __thiscall st::fn_00542F40(InterSystemC *this,STMessage *message)

{
  STMessageId SVar1;
  int iVar3;
  uint uVar4;
  LPSTR pCVar5;
  undefined4 uVar6;
  BITMAPINFO *pBVar7;
  char *text;
  char cVar8;
  byte bVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  InternalExceptionFrame local_50;
  tagBITMAPINFO *local_c;
  InterSystemC *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar12 = st::fn_006AD4D0("E:\\__titans\\Andrey\\tintersys.cpp",0x11f,0,iVar3,
                                "%s","InterSystemC::GetMessage");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\tintersys.cpp",0x11f);
    return 0xffff;
  }
  st::fn_006E5F00((SystemClassTy *)local_8,message);
  SVar1 = message->id;
  if (SVar1 < MESS_INTERSYSTEMC_B904) {
    if (SVar1 == MESS_INTERSYSTEMC_B903) {
      if (g_cursorClass_00802A30 != nullptr) {
        st::fn_00403058(g_cursorClass_00802A30);
      }
      if (g_helpPanel_00801690 == nullptr) {
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(g_helpPanel_00801690->vtable + 0x18))(1);
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
    if (SVar1 < MESS_INTERSYSTEMC_B901) {
      if (SVar1 != MESS_INTERSYSTEMC_B900) {
        if (SVar1 == MESS_SHARED_0005) {
          if (g_cLoading_00802A58 != nullptr) {
            g_currentExceptionFrame = local_50.previous;
            return 0;
          }
          iVar12 = 1;
          uVar4 = _DAT_00807348 & 0xff;
          piVar10 = nullptr;
          iVar3 = 1;
          pCVar5 = st::fn_0040577C("PANEL_BKGND",0);
          pCVar5 = st::fn_006F2C00(pCVar5,iVar3,uVar4);
          local_c = (tagBITMAPINFO *)st::fn_006F1CE0(g_cMf32_00806790,1,pCVar5,piVar10,iVar12);
          st::fn_00403738(0,0,'\x01',local_c);
          st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_c);
          g_currentExceptionFrame = local_50.previous;
          return 0;
        }
        if (SVar1 != MESS_INTERSYSTEMC_B8FF) {
          g_currentExceptionFrame = local_50.previous;
          return 0;
        }
        if (g_cursorClass_00802A30 != nullptr) {
          st::fn_00403058(g_cursorClass_00802A30);
        }
        if (g_optPanel_008016DC == nullptr) {
          g_currentExceptionFrame = local_50.previous;
          return 0;
        }
        st::fn_00405A42(g_optPanel_008016DC,'\x01');
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
    }
    else {
      if (SVar1 == MESS_INTERSYSTEMC_B901) {
        if (g_cursorClass_00802A30 != nullptr) {
          st::fn_00403058(g_cursorClass_00802A30);
        }
        if (g_playPanel_008016E4 == nullptr) {
          g_currentExceptionFrame = local_50.previous;
          return 0;
        }
        st::fn_0040425F(g_playPanel_008016E4,'\x01');
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      if (SVar1 != MESS_INTERSYSTEMC_B902) {
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
    }
switchD_00543107_caseD_b904:
    if (g_cLoading_00802A58 != nullptr) {
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
    piVar10 = (message->arg1).ptr;
    st::fn_006B5F80((int *)g_ddxContext_008075A8,*piVar10,piVar10[1],piVar10[2],piVar10[3]);
    SVar1 = message->id;
    if (SVar1 == MESS_INTERSYSTEMC_B900) {
      text = "BUT_FILEOPT";
    }
    else if (SVar1 == MESS_INTERSYSTEMC_B902) {
      text = "BUT_SETOPT";
    }
    else if (SVar1 == MESS_INTERSYSTEMC_B904) {
      text = "BUT_HELPOPT";
    }
    else {
      text = "BUT_AIOPT";
    }
    puVar13 = nullptr;
    iVar11 = 0;
    iVar12 = 1;
    bVar9 = 0;
    uVar4 = 0xffffffff;
    uVar6 = st::fn_004025C7((int)message);
    iVar3 = 1;
    pCVar5 = st::fn_0040577C(text,0);
    pCVar5 = st::fn_006F2C00(pCVar5,iVar3,uVar6);
    pBVar7 = (BITMAPINFO *)
             st::fn_00709AF0
                       (PTR_00806794,CASE_1,pCVar5,uVar4,bVar9,iVar12,iVar11,puVar13);
    iVar3 = piVar10[1];
    iVar12 = *piVar10;
    cVar8 = '\x01';
LAB_00543291:
    st::fn_00403738(iVar12,iVar3,cVar8,pBVar7);
  }
  else {
    switch(SVar1) {
    case MESS_INTERSYSTEMC_B904:
    case MESS_INTERSYSTEMC_B904|MESS_ID_CREATE:
      goto switchD_00543107_caseD_b904;
    case 0xb905:
      if (g_cursorClass_00802A30 != nullptr) {
        st::fn_00403058(g_cursorClass_00802A30);
      }
      if (g_optPanel_008016DC != nullptr) {
        st::fn_00405A42(g_optPanel_008016DC,'\x0e');
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      break;
    case MESS_INTERSYSTEMC_B904|MESS_SHARED_0003:
      if (g_cursorClass_00802A30 != nullptr) {
        st::fn_00403058(g_cursorClass_00802A30);
        g_cursorClass_00802A30->field_04DE = 1;
        st::fn_00405E2F(0xae);
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      break;
    case MESS_INTERSYSTEMC_B908:
      if (g_cLoading_00802A58 != nullptr) {
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
      piVar10 = (message->arg1).ptr;
      st::fn_006B5F80((int *)g_ddxContext_008075A8,*piVar10,piVar10[1],piVar10[2],piVar10[3]);
      puVar13 = nullptr;
      iVar11 = 0;
      iVar12 = 1;
      bVar9 = 0;
      uVar4 = 0xffffffff;
      uVar6 = st::fn_004025C7((int)message);
      iVar3 = 1;
      pCVar5 = st::fn_0040577C("BUT_OHELP",0);
      pCVar5 = st::fn_006F2C00(pCVar5,iVar3,uVar6);
      pBVar7 = (BITMAPINFO *)
               st::fn_00709AF0
                         (PTR_00806794,CASE_6,pCVar5,uVar4,bVar9,iVar12,iVar11,puVar13);
      iVar12 = *piVar10;
      iVar3 = piVar10[1];
      cVar8 = '\x06';
      goto LAB_00543291;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

