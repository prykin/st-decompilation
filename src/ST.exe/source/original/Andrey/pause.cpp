#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/pause.cpp

// 00539280 PausePanelTy::InitPausePanel
#line 4 "decomp/ST.exe/functions/00539280/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\pause.cpp
   PausePanelTy::InitPausePanel */

void __thiscall st::fn_00539280(PausePanelTy *this)

{
  PausePanelTy *this_00;
  int iVar2;
  int iVar4;
  ccFntTy *pcVar5;
  LPSTR pCVar6;
  ushort *puVar7;
  char *resourceString;
  uint uVar8;
  int iVar3;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  InternalExceptionFrame local_4c;
  PausePanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    g_pausePanel_008016E0 = local_8;
    iVar4 = g_nWidth_00806730 + -0x1c;
    local_8->field_003C = iVar4;
    local_8->field_0174 = (local_8->field_0040 - iVar4) + g_nWidth_00806730;
    /* ST_CALLSITE[005392E9]: CALL 0x0070df00; direct=0070DF00 ccFntTy::operator_new */
    pcVar5 = (ccFntTy *)st::fn_0070DF00(0x19d,(ccFntTy *)g_interSystem_00802A28->field_0028);
    this_00->field_017C = pcVar5;
    pcVar5->field_0058 = 0;
    pcVar5->field_005C = 0;
    iVar4 = 1;
    piVar11 = nullptr;
    pCVar6 = st::fn_0040577C(st::mutable_c_string("BKG_PAUSE"),0);
    puVar7 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar6,piVar11,iVar4);
    this_00->field_0180 = puVar7;
    /* ST_CALLSITE[00539337]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0,'\x01',(byte *)puVar7);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x52,2,0xd1,0xc);
    iVar13 = -1;
    iVar12 = -1;
    uVar10 = 0;
    iVar9 = -1;
    iVar4 = -2;
    resourceString = st::fn_006B0140(0x2716,g_hINSTANCE_00807618);
    st::fn_00711B70(this_00->field_017C,resourceString,iVar4,iVar9,uVar10,iVar12,iVar13);
    pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_MEDIUM"),0);
    /* ST_CALLSITE[005393BB]: CALL 0x0040300d; direct=0040300D PanelTy::CreateBut */
    uVar8 = st::fn_0040300D((PanelTy *)this_00,0,1,0x115,0x8b,1,0,1,pCVar6,0xbfff,0xc000,0,0,0,
                               nullptr,1);
    this_00->field_0184 = uVar8;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\pause.cpp"),0x28,0,iVar2,st::mutable_c_string("%s"),
                             "PausePanelTy::InitPausePanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\pause.cpp"),0x28);
  return;
}

// 00539490 PausePanelTy::DonePausePanel
#line 4 "decomp/ST.exe/functions/00539490/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\pause.cpp
   PausePanelTy::DonePausePanel */

void __thiscall st::fn_00539490(PausePanelTy *this)

{
  PausePanelTy *pPVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  PausePanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pPVar2 = local_8;
  if (errorCode == 0) {
    if (local_8->field_0184 != 0) {
      st::fn_006E56B0(local_8->field_000C,local_8->field_0184);
    }
    pPVar2->field_0184 = 0;
    g_pausePanel_008016E0 = nullptr;
    if (pPVar2->field_017C != nullptr) {
      st::fn_00710560((uint *)pPVar2->field_017C);
      pPVar2->field_017C = nullptr;
    }
    if (pPVar2->field_0180 != nullptr) {
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&pPVar2->field_0180);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\pause.cpp"),0x3b,0,errorCode,st::mutable_c_string("%s"),
                             "PausePanelTy::DonePausePanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\pause.cpp"),0x3b);
  return;
}

// 005395B0 PausePanelTy::SwitchPausePanel
#line 4 "decomp/ST.exe/functions/005395B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\pause.cpp
   PausePanelTy::SwitchPausePanel

   [STSwitchEnumApplier] Switch target field_0172 uses
   /SubmarineTitans/Recovered/Enums/PausePanelTy_field_0172State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005395B0(PausePanelTy *this,int param_1)

{
  PausePanelTy *pPVar2;
  int errorCode;
  int iVar3;
  Global_sub_005252C0_param_1Enum GVar4;
  InternalExceptionFrame local_4c;
  PausePanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pPVar2 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\pause.cpp"),0x54,0,errorCode,
                               st::mutable_c_string("%s"),"PausePanelTy::SwitchPausePanel");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\pause.cpp"),0x54);
    return;
  }
  switch(local_8->field_0172) {
  case CASE_1:
    if (param_1 != 0) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    /* ST_CALLSITE[00539601]: CALL 0x00404ea3; direct=00404EA3 PausePanelTy::ShiftControls */
    st::fn_00404EA3(local_8,0);
switchD_005395f3_caseD_3:
    if (param_1 == 0) {
      pPVar2->field_0172 = CASE_4;
      GVar4 = CASE_B0;
LAB_0053962f:
      st::fn_00405E2F(GVar4);
    }
switchD_005395f3_default:
    g_currentExceptionFrame = local_4c.previous;
    return;
  case CASE_2:
  case CASE_4:
    if (param_1 == 0) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    local_8->field_0172 = CASE_3;
    GVar4 = CASE_AF;
    goto LAB_0053962f;
  case CASE_3:
    goto switchD_005395f3_caseD_3;
  default:
    goto switchD_005395f3_default;
  }
}

// 005396E0 PausePanelTy::ShiftControls
#line 4 "decomp/ST.exe/functions/005396E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\pause.cpp
   PausePanelTy::ShiftControls

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005396E0(PausePanelTy *this,int param_1)

{
  short sVar2;
  int iVar4;
  int iVar3;
  InternalExceptionFrame local_4c;
  PausePanelTy *local_8;

  if (param_1 != this->field_005C) {
    this->field_005C = param_1;
    memset(&this->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
    sVar2 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 != 0) {
      sVar2 = -sVar2;
    }
    this->field_002C = sVar2;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    if (iVar4 == 0) {
      if (local_8->field_0184 != 0) {
        st::fn_006E6080(local_8,2,local_8->field_0184,(undefined4 *)&local_8->field_0x18);
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\pause.cpp"),0x68,0,iVar4,st::mutable_c_string("%s"),
                               "PausePanelTy::ShiftControls");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\pause.cpp"),0x68);
  }
  return;
}

// 005397F0 PausePanelTy::GetMessage
#line 4 "decomp/ST.exe/functions/005397F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\pause.cpp
   PausePanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005397F0; family_names=PausePanelTy::GetMessage; ret4=7;
   direct_offsets={10:1,14:0,18:0,1c:0} */

int __thiscall st::fn_005397F0(PausePanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  PausePanelTy *this_00;
  int iVar3;
  int iVar5;
  LPSTR pCVar6;
  int iVar4;
  InternalExceptionFrame local_4c;
  PausePanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\pause.cpp"),0x9f,0,iVar3,st::mutable_c_string("%s"),
                               "PausePanelTy::GetMessage");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\pause.cpp"),0x9f);
    return 0xffff;
  }
  /* ST_CALLSITE[0053982D]: CALL 0x004017f8; direct=004017F8 PanelTy::GetMessage */
  st::fn_004017F8((PanelTy *)local_8,message);
  SVar1 = message->id;
  if (SVar1 < 4) {
    if (SVar1 == MESS_SHARED_0003) {
      /* ST_CALLSITE[00539937]: CALL 0x0040466f; direct=0040466F PausePanelTy::DonePausePanel */
      st::fn_0040466F(this_00);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_NONE) {
      if (this_00->field_0172 == CASE_3) {
        iVar5 = this_00->field_0054 + -0x174 + this_00->field_004C;
        if (iVar5 < this_00->field_003C) {
          this_00->field_003C = st::machine_word_boundary_cast<int>(this_00->field_003C + -0x1e);
        }
        if (this_00->field_003C <= iVar5) {
          this_00->field_003C = iVar5;
          this_00->field_0172 = CASE_1;
          /* ST_CALLSITE[00539903]: CALL 0x00404ea3; direct=00404EA3 PausePanelTy::ShiftControls */
          st::fn_00404EA3(this_00,1);
        }
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (this_00->field_0172 == CASE_4) {
        iVar5 = this_00->field_0054 + this_00->field_004C;
        if (this_00->field_003C < iVar5) {
          this_00->field_003C = st::machine_word_boundary_cast<int>(this_00->field_003C + 0x1e);
        }
        if (iVar5 <= this_00->field_003C) {
          this_00->field_003C = iVar5;
          this_00->field_0172 = CASE_2;
        }
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
    }
    else if (SVar1 == MESS_ID_CREATE) {
      /* ST_CALLSITE[00539854]: CALL 0x0040434f; direct=0040434F PausePanelTy::InitPausePanel */
      st::fn_0040434F(this_00);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
  }
  else if (SVar1 == MESS_SHARED_BFFF) {
    this_00->field_0028 = 0xa100;
    /* ST_CALLSITE[005399A0]: CALL dword ptr [EAX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)g_cursorClass_00802A30->field_0000)(&this_00->field_0x18);
  }
  else if (SVar1 == MESS_SHARED_C000) {
    pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_MEDIUM"),0);
    /* ST_CALLSITE[00539975]: CALL 0x00402121; direct=00402121 PanelTy::PaintIBut */
    st::fn_00402121((PanelTy *)this_00,(AnonShape_00538DB0_574DDCD0 *)message,pCVar6,0x274d,1,0);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

