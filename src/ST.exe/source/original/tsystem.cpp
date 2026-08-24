#include "st/generated.hpp"
// Generated translation unit: source/original/tsystem.cpp

// 00576AD0 BaseSystemC::CreateSystemObjects
#line 4 "decomp/ST.exe/functions/00576AD0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   BaseSystemC::CreateSystemObjects */

undefined4 __thiscall st::fn_00576AD0(BaseSystemC *this)

{
  BaseSystemC *this_00;
  int errorCode;
  int iVar2;
  uint uVar3;
  InternalExceptionFrame local_50;
  BaseSystemC *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (errorCode == 0) {
    /* ST_CALLSITE[00576B17]: CALL dword ptr [EAX + 0xc] */
    local_c->vfunc_0C(1,(short)&local_8,0,0);
    /* ST_CALLSITE[00576B2C]: CALL dword ptr [EDX + 0xc] */
    this_00->vfunc_0C(0x101,0x2a2c,0,0);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\tsystem.cpp"),0x2c,0,errorCode,st::mutable_c_string("%s"),
                             "BaseSystemC::CreateSystemObjects");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\tsystem.cpp"),0x2d);
  return 0xffffffff;
}

// 00576BB0 CreateBaseSystem
#line 4 "decomp/ST.exe/functions/00576BB0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tsystem.cpp
   Diagnostic line evidence: 56 | 64 | 65 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void st::fn_00576BB0(void)

{
  int errorCode;
  BaseSystemC *this;
  int iVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    this = (BaseSystemC *)st::fn_0072E530(0x24);
    if (this == nullptr) {
      g_baseSystem_00811638 = nullptr;
    }
    else {
      /* ST_CALLSITE[00576BF7]: CALL 0x00401348; direct=00401348 BaseSystemC::BaseSystemC */
      g_baseSystem_00811638 = st::fn_00401348(this,g_app_00806728);
    }
    if (g_baseSystem_00811638 == nullptr) {
      st::fn_006A5E40(-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\tsystem.cpp"),0x38);
    }
    g_baseSystem_00811638->field_0020 = 0;
    /* ST_CALLSITE[00576C32]: CALL dword ptr [EAX] */
    (*g_baseSystem_00811638->vtable->InitSystem)((SystemClassTy *)g_baseSystem_00811638);
    /* ST_CALLSITE[00576C42]: CALL 0x006e4650; direct=006E4650 AppClassTy::AddSystem */
    st::fn_006E4650((AppClassTy *)&DAT_00807620,(int *)g_baseSystem_00811638,0);
    g_baseSystem_00811638->field_0020 = 1;
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\tsystem.cpp"),0x40,0,errorCode,st::mutable_c_string("%s"),
                             "CreateBaseSystem");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\tsystem.cpp"),0x41);
  return;
}

// 00576CE0 DestroyBaseSystem
#line 4 "decomp/ST.exe/functions/00576CE0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tsystem.cpp
   Diagnostic line evidence: 79 | 80 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void st::fn_00576CE0(void)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    if (g_baseSystem_00811638 != nullptr) {
      if (g_baseSystem_00811638->field_0020 == 1) {
        st::fn_006E4B80(&DAT_00807620,(int)g_baseSystem_00811638);
      }
      /* ST_CALLSITE[00576D2F]: CALL dword ptr [EAX + 0x4] */
      g_baseSystem_00811638->vfunc_04();
      st::fn_0072E2B0((HoloTy *)g_baseSystem_00811638);
      g_baseSystem_00811638 = nullptr;
    }
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\tsystem.cpp"),0x4f,0,errorCode,st::mutable_c_string("%s"),
                             "DestroyBaseSystem");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\tsystem.cpp"),0x50);
  return;
}

// 00576E10 GameSystemC::CreateSystemObjects
#line 4 "decomp/ST.exe/functions/00576E10/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   GameSystemC::CreateSystemObjects */

undefined4 __thiscall st::fn_00576E10(GameSystemC *this)

{
  GameSystemC *this_00;
  int errorCode;
  int iVar2;
  uint uVar3;
  InternalExceptionFrame local_4c;
  GameSystemC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    /* ST_CALLSITE[00576E54]: CALL dword ptr [EAX + 0xc] */
    local_8->vfunc_0C(0x100,0xb2a4,0,0);
    /* ST_CALLSITE[00576E69]: CALL dword ptr [EDX + 0xc] */
    this_00->vfunc_0C(0x102,0xb288,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\tsystem.cpp"),0x65,0,errorCode,st::mutable_c_string("%s"),
                             "GameSystemC::CreateSystemObjects");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\tsystem.cpp"),0x65);
  return 0xfffffffc;
}

// 00576EF0 GameSystemC::InitSystem
#line 4 "decomp/ST.exe/functions/00576EF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   GameSystemC::InitSystem */

undefined4 __thiscall st::fn_00576EF0(GameSystemC *this)

{
  short *psVar2;
  GameSystemC *pGVar3;
  int iVar4;
  AnonShape_006DBCA0_EF06575F *pAVar5;
  ST3DSMAPContext *pSVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  InternalExceptionFrame local_90;
  InternalExceptionFrame local_4c;
  GameSystemC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar4 == 0) {
    /* ST_CALLSITE[00576F31]: CALL 0x00402112; direct=00402112 LoadLand */
    PTR_00806750 = st::fn_00402112(g_cMf32_00806754,st::mutable_c_string("3D_MAP"));
    pAVar5 = (AnonShape_006DBCA0_EF06575F *)st::fn_006B04D0(0x4f2);
    if (pAVar5 == nullptr) {
      pSVar6 = nullptr;
    }
    else {
      pSVar6 = (ST3DSMAPContext *)st::fn_006DBCA0(pAVar5);
    }
    psVar2 = PTR_00806750;
    g_sT3DSMAPContext_00807598 = pSVar6;
    pSVar6->field_0280 = (AnonPointee_ST3DSMAPContext_0280 *)PTR_00806750;
    iVar4 = (int)*psVar2 / 2;
    pSVar6->field_0284 = iVar4;
    pSVar6->field_0288 = iVar4 * iVar4;
    st::fn_006E51F0((SystemClassTy *)local_8);
    st::fn_006E8580(g_sT3DSMAPContext_00807598,(int *)g_ddxContext_008075A8);
    PTR_00806724 = (AnonShape_GLOBAL_00806724_3210464F *)
                   st::fn_0070AE60
                             (PTR_00806770,st::mutable_c_string("scmask"),0,0,nullptr,1);
    local_90.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_90;
    iVar4 = st::fn_0072D7F0(local_90.jumpBuffer,0);
    pGVar3 = local_8;
    if (iVar4 == 0) {
      puVar7 = st::fn_00725550(g_cMf32_00806760,PTR_s_ANIM_PALETTE_0079b1a8,0);
      pGVar3->field_0431 = puVar7;
    }
    pGVar3->field_042C = DAT_00808784;
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\tsystem.cpp"),0x86,0,iVar4,st::mutable_c_string("%s"),
                             "GameSystemC::InitSystem");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\tsystem.cpp"),0x86);
  return 0xfffffffc;
}

// 005770D0 GameSystemC::DoneSystem
#line 4 "decomp/ST.exe/functions/005770D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   GameSystemC::DoneSystem
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall DoneSystem(GameSystemC * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005771CE RET | 00577213 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_005770D0(GameSystemC *this)

{
  ST3DSMAPContext *pSVar2;
  GameSystemC *pGVar3;
  int errorCode;
  int iVar4;
  InternalExceptionFrame local_4c;
  GameSystemC *local_8;

  this->field_0430 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pGVar3 = local_8;
  if (errorCode == 0) {
    if (local_8->field_0431 != nullptr) {
      st::fn_00725680((int *)&local_8->field_0431);
    }
    st::fn_0070B1D0((int *)&PTR_00806724);
    if (g_interSystem_00802A28 != nullptr) {
      st::fn_00401D3E(&DAT_00807620,(int *)&g_interSystem_00802A28);
    }
    if (g_playSystem_00802A38 != nullptr) {
      st::fn_00401D3E(&DAT_00807620,(int *)&g_playSystem_00802A38);
    }
    st::fn_004043BD();
    pSVar2 = g_sT3DSMAPContext_00807598;
    DAT_0080674c = 0;
    if (g_sT3DSMAPContext_00807598 != nullptr) {
      st::fn_006DBCF0(g_sT3DSMAPContext_00807598);
      st::fn_0072E2B0((HoloTy *)pSVar2);
      g_sT3DSMAPContext_00807598 = nullptr;
    }
    st::fn_0040151E();
    if (PTR_00806750 != nullptr) {
      st::fn_00401A50((int *)&PTR_00806750);
    }
    st::fn_006E52D0((AnonShape_006E52D0_AF06BCD2 *)pGVar3);
    /* ST_CALLSITE[005771BB]: CALL dword ptr [0x0085be40] */
    st::external_00000096(1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\tsystem.cpp"),0xa7,0,errorCode,st::mutable_c_string("%s"),
                             "GameSystemC::DoneSystem");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\tsystem.cpp"),0xa7);
  return;
}

// 00577280 CreateGameSystem
#line 4 "decomp/ST.exe/functions/00577280/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tsystem.cpp
   Diagnostic line evidence: 177 | 187 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void st::fn_00577280(void)

{
  int iVar1;
  int iVar4;
  CursorClassTy *this;
  int iVar2;
  GameSystemC *this_00;
  int iVar3;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (iVar2 == 0) {
    this_00 = (GameSystemC *)st::fn_0072E530(0x435);
    if (this_00 == nullptr) {
      g_parentSystem_0081163C = nullptr;
    }
    else {
      /* ST_CALLSITE[005772CA]: CALL 0x004014ec; direct=004014EC GameSystemC::GameSystemC */
      g_parentSystem_0081163C = st::fn_004014EC(this_00,g_app_00806728);
    }
    if (g_parentSystem_0081163C == nullptr) {
      st::fn_006A5E40(-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\tsystem.cpp"),0xb1);
    }
    g_parentSystem_0081163C->field_0428 = 0;
    /* ST_CALLSITE[0057730B]: CALL dword ptr [EAX] */
    g_parentSystem_0081163C->InitSystem();
    /* ST_CALLSITE[0057731B]: CALL 0x006e4650; direct=006E4650 AppClassTy::AddSystem */
    st::fn_006E4650((AppClassTy *)&DAT_00807620,(int *)g_parentSystem_0081163C,0);
    g_parentSystem_0081163C->field_0428 = 1;
    this = g_cursorClass_00802A30;
    iVar1 = g_cursorClass_00802A30->field_00C9;
    iVar4 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = 2;
    this->field_0494 = 0xffff;
    /* ST_CALLSITE[00577358]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
    st::fn_0040507E(this,CASE_0,iVar4,iVar1);
    /* ST_CALLSITE[0057736D]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
    st::fn_0040241E(this,this->field_00C5,this->field_00C9);
    this->field_00D2 = 0;
    this->field_04DF = -1;
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\tsystem.cpp"),0xbb,0,iVar2,st::mutable_c_string("%s"),
                             "CreateGameSystem");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\tsystem.cpp"),0xbb);
  return;
}

// 005776D0 GameSystemC::GetMessage
#line 4 "decomp/ST.exe/functions/005776D0/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   GameSystemC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0040482C|005776D0; family_names=GameSystemC::GetMessage; ret4=10;
   direct_offsets={10:1,14:2,18:1,1c:1}

   [STDiscriminatedPayloadApplier] Case-local payload view: message->id == MESS_GAMESYSTEMC_43FF
   uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/GameSystemC_GetMessage_005776D0_MessagePayload_Case_MESS_GAMESYSTEMC_43FF.
   The carrier ABI remains pointer:/SubmarineTitans/Recovered/STMessage.

   [STDiscriminatedPayloadApplier] Case-local payload view: message->id == MESS_GAMESYSTEMC_4400
   uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/GameSystemC_GetMessage_005776D0_MessagePayload_Case_MESS_GAMESYSTEMC_4400.
   The carrier ABI remains pointer:/SubmarineTitans/Recovered/STMessage. */

int __thiscall st::fn_005776D0(GameSystemC *this,STMessage *message)

{
  char cVar1;
  byte bVar2;
  size_t _Count;
  PlayPanelTy *this_00;
  GameSystemC *pGVar4;
  int local_EAX_51;
  HANDLE pvVar5;
  int iVar6_mg1;
  cMf32 *pcVar6;
  ushort *puVar7;
  char *pcVar8;
  char *local_EAX_1519;
  int iVar5;
  DArrayTy *array;
  int iVar19;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  int *piVar13;
  int *piVar14;
  char *pcVar15;
  STMessage *pSVar16;
  char *local_1d90 [2];
  int local_1d88;
  _WIN32_FIND_DATAA local_3f4;
  char local_2b4 [260];
  InternalExceptionFrame local_1b0;
  char local_16c [64];
  undefined4 local_12c;
  byte local_128;
  undefined1 local_127;
  undefined1 local_126;
  undefined1 local_125;
  DWORD local_124;
  InternalExceptionFrame local_d0;
  InternalExceptionFrame local_8c;
  STMessage local_48;
  GameSystemC *local_28;
  AnonShape_00648C10_30A1BBFD *local_24;
  char **local_20;
  cMf32 *local_1c;
  DArrayTy *local_18;
  int local_14;
  char *local_10;
  char *local_c;
  int *local_8;
  char *pcVar13;

  local_8 = (int *)0x5776dd;
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_28 = this;
  local_EAX_51 = st::fn_0072D7F0(local_8c.jumpBuffer,0);
  pGVar4 = local_28;
  if (local_EAX_51 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar19 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\tsystem.cpp"),0x1c6,0,local_EAX_51,
                                st::mutable_c_string("%s"),"GameSystemC::GetMessage");
    if (iVar19 == 0) {
      st::fn_006A5E40(local_EAX_51,0,st::mutable_c_string("E:\\__titans\\tsystem.cpp"),0x1c7);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006E5F00((SystemClassTy *)local_28,message);
  if (message->id == MESS_GAMESYSTEMC_43FF) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    piVar13 = *(int **)((message->arg0).u32 + 0x17);
    local_8 = piVar13;
    switch(*piVar13) {
    case 1:
      if (DAT_00808783 == '\x03') {
        if (piVar13[2] != 0) {
          DAT_00808784 = piVar13[1];
          pGVar4->field_042C = DAT_00808784;
          st::fn_00725760
                    (g_sT3DSMAPContext_00807598,DAT_00808784,
                     -(uint)(DAT_00808784 != 0) & (uint)PTR_008032b4);
          if (g_pausePanel_008016E0 != nullptr) {
            /* ST_CALLSITE[00577A59]: CALL 0x0040504c; direct=0040504C PausePanelTy::SwitchPausePanel */
            st::fn_0040504C(g_pausePanel_008016E0,DAT_00808784);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
        }
      }
      else if (piVar13[2] == 0) {
        if (pGVar4->field_042C == 0) {
          DAT_00808784 = piVar13[1];
          st::fn_00725760
                    (g_sT3DSMAPContext_00807598,DAT_00808784,
                     -(uint)(DAT_00808784 != 0) & (uint)PTR_008032b4);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      else {
        if ((DAT_0080878c == 0) && (DAT_00808790 == 0)) {
          DAT_00808784 = piVar13[1];
          st::fn_00725760
                    (g_sT3DSMAPContext_00807598,DAT_00808784,
                     -(uint)(DAT_00808784 != 0) & (uint)PTR_008032b4);
        }
        iVar9 = piVar13[1];
        pGVar4->field_042C = iVar9;
        if (g_pausePanel_008016E0 != nullptr) {
          /* ST_CALLSITE[00577AC6]: CALL 0x0040504c; direct=0040504C PausePanelTy::SwitchPausePanel */
          st::fn_0040504C(g_pausePanel_008016E0,iVar9);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      break;
    case 4:
      uVar10 = piVar13[1];
      if (DAT_0080733b != uVar10) {
        DAT_0080733b = (byte)uVar10;
        if (DAT_0080877e == '\0') {
          iVar9 = (uVar10 & 0xff) * 0x18;
          DAT_00807654 = *(undefined4 *)("FrmPanelTy::GetMessage" + iVar9 + 0x14);
        }
        else {
          iVar9 = (uVar10 & 0xff) * 0x18;
          DAT_00807654 = *(undefined4 *)("FrmPanelTy::GetMessage" + iVar9 + 8);
        }
        if (g_sT3DSMAPContext_00807598 != nullptr) {
          st::fn_006E8640
                    (g_sT3DSMAPContext_00807598,
                     *(char **)("FrmPanelTy::GetMessage" + iVar9 + 0x10),
                     *(char **)("FrmPanelTy::GetMessage" + iVar9 + 4));
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      break;
    case 6:
    case 7:
      local_c = &CHAR_00h_008016a0;
      local_10 = &CHAR_00h_008016a0;
      if (*piVar13 == 6) {
        st::fn_00401212(&DAT_00807620,(byte)((uint)piVar13[1] >> 0x10),((byte *)piVar13)[1],
                           (char)piVar13[2]);
      }
      else {
        st::fn_004033A0(&DAT_00807620,(byte)((uint)piVar13[1] >> 0x10),((byte *)piVar13)[1]);
      }
      this_00 = g_playPanel_008016E4;
      if (g_playPanel_008016E4 != nullptr) {
        g_playPanel_008016E4->field_0028 = 5;
        piVar14 = reinterpret_cast<int *>(&this_00->field_0181);
        local_14 = 8;
        do {
          if (*piVar14 != 0) {
            st::fn_006E6080(this_00,2,*piVar14,(undefined4 *)&this_00->field_0x18);
          }
          piVar14 = piVar14 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      uVar12 = (ushort)((uint)piVar13[1] >> 0x10);
      if (uVar12 != DAT_0080874d) {
        pcVar15 = local_10;
        if (DAT_00808aaf != 0) {
          pcVar8 = (char *)&DAT_00808af5;
          uVar10 = (uint)DAT_00808aaf;
          do {
            if (((byte)pcVar8[-1] == uVar12) && (*pcVar8 != '\0')) {
              local_c = pcVar8 + -0x45;
            }
            pcVar8 = pcVar8 + 0x9c;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          if (DAT_00808aaf != 0) {
            uVar10 = (uint)DAT_00808aaf;
            pcVar8 = (char *)&DAT_00808af5;
            do {
              if (((ushort)(byte)pcVar8[-1] == *(ushort *)(piVar13 + 1)) && (*pcVar8 != '\0')) {
                pcVar15 = pcVar8 + -0x45;
              }
              pcVar8 = pcVar8 + 0x9c;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
        }
        pcVar8 = local_c;
        local_EAX_1519 = st::fn_006B0140(0x42c2,g_hINSTANCE_00807618);
        /* ST_CALLSITE[00577CCA]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)&DAT_0080f33a,local_EAX_1519,pcVar8,pcVar15);
        if (g_popUp_008016D8 != nullptr) {
          st::fn_004014D8(g_popUp_008016D8,(char *)&DAT_0080f33a,8);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      break;
    case 8:
      local_1b0.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_1b0;
      iVar5 = st::fn_0072D7F0(local_1b0.jumpBuffer,0);
      if (iVar5 == 0) {
        /* ST_CALLSITE[00577D50]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s%s%s"),&CHAR_00h_00807680,st_global_0079B190,
                  PTR_s_STRATEGS_0079b198);
        pcVar6 = (cMf32 *)st::fn_006F0EC0(0x345,(byte *)&DAT_0080f33a,0,0,0);
        local_1c = pcVar6;
        /* ST_CALLSITE[00577D7F]: CALL 0x00403f44; direct=00403F44 CreateOpponentList */
        array = (DArrayTy *)st::fn_00403F44(pcVar6,local_8[1],DAT_0080995c);
        uVar10 = array->count;
        local_18 = array;
        if (uVar10 != 0) {
          if (uVar10 - 1 < uVar10) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar15 = (char *)((uVar10 - 1) * array->elementSize + (int)array->data);
          }
          else {
            pcVar15 = nullptr;
          }
          if ((pcVar15 + 0x4c != nullptr) &&
             (local_24 = (AnonShape_00648C10_30A1BBFD *)
                         /* ST_CALLSITE[00577DBF]: CALL 0x004012ad; direct=004012AD LoadStrategData */
                         st::fn_004012AD((int)pcVar6,pcVar15 + 0x4c,nullptr), piVar13 = local_8,
             local_24 != nullptr)) {
            uVar10 = 0xffffffff;
            do {
              pcVar8 = pcVar15;
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              pcVar8 = pcVar15 + 1;
              cVar1 = *pcVar15;
              pcVar15 = pcVar8;
            } while (cVar1 != '\0');
            uVar10 = ~uVar10;
            pcVar15 = pcVar8 + -uVar10;
            pcVar8 = local_16c;
            for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined4 *)pcVar8 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              pcVar8 = pcVar8 + 4;
            }
            bVar2 = ((byte *)piVar13)[2];
            for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar8 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar8 = pcVar8 + 1;
            }
            local_12c = DAT_0080877f;
            local_127 = 1;
            local_125 = 1;
            local_126 = 0;
            local_128 = bVar2;
            /* ST_CALLSITE[00577E22]: CALL dword ptr [0x0085bedc] */
            local_124 = st::external_000000DA();
            if (bVar2 < 8) {
              pcVar15 = local_16c;
              pcVar8 = &CHAR_00h_00808ab0 + (uint)DAT_00808aaf * 0x9c;
              memmove(pcVar8, pcVar15, 0x9c); /* compiler REP MOVS byte copy */
              DAT_00808aaf = DAT_00808aaf + 1;
              if (g_playPanel_008016E4 != nullptr) {
                /* ST_CALLSITE[00577E6E]: CALL 0x00405e07; direct=00405E07 PlayPanelTy::sub_0053A540 */
                st::fn_00405E07(g_playPanel_008016E4);
              }
            }
            piVar13 = local_8;
            /* ST_CALLSITE[00577E7E]: CALL 0x004018a7; direct=004018A7 StartStrateg */
            st::fn_004018A7(local_24,local_8[2]);
            *(undefined1 *)(g_bulkInitializedRecords_008087C7 + piVar13[2]) = 1;
            st::fn_006AB060(&local_24);
            pcVar6 = local_1c;
            array = local_18;
          }
        }
        if (array != nullptr) {
          st::fn_006AE110(array);
        }
        st::fn_006F1170(pcVar6);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case 9:
      if (g_aiBossClass_008117BC != nullptr) {
        pSVar16 = &local_48;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          pSVar16->unknown_00 = 0;
          pSVar16 = (STMessage *)&pSVar16->unknown_04;
        }
        local_48.id = MESS_AIBOSSCLASSTY_5DC5;
        local_48.arg0 = *(STMessageArg *)(piVar13 + 1);
        /* ST_CALLSITE[00577EF8]: CALL dword ptr [EAX] */
        g_aiBossClass_008117BC->GetMessage(&local_48);
      }
    }
  }
  else if (message->id == MESS_GAMESYSTEMC_4400) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pcVar15 = *(char **)((message->arg0).u32 + 0x17);
    cVar1 = *pcVar15;
    bVar2 = pcVar15[1];
    local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)(bVar2));
    if (cVar1 == '\0') {
      if (bVar2 == 0xff) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      st::fn_004015D2((uint)bVar2);
    }
    else {
      if (cVar1 != '\x01') {
        if (cVar1 != '\x02') {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        _Count = *(size_t *)(pcVar15 + 1);
        local_18 = *(DArrayTy **)(pcVar15 + 5);
        DAT_00808750 = *(undefined4 *)(pcVar15 + 9);
        local_1c = (cMf32 *)0x88000516;
        local_8 = (int *)0x1;
        local_c = (char *)0xffffffff;
        st::fn_0072E340(local_2b4,pcVar15 + 0xd,_Count);
        local_3f4.cAlternateFileName[_Count + 0xf] = '\0';
        do {
          pcVar15 = local_c;
          if ((int)local_c < 0) {
            /* ST_CALLSITE[005777DE]: CALL EBX */
            st::external_00000080(st::pointer_boundary_cast<LPSTR>(&CHAR_00h_0080f022),st::mutable_c_string("%s%s%s\\%s%s%s"),&CHAR_00h_00807680,
                      st_global_0079B18C,&CHAR_00h_00807ddd,PTR_DAT_0079b19c,local_2b4,
                      st_global_0079B194);
          }
          else {
            /* ST_CALLSITE[00577816]: CALL EBX */
            st::external_00000080(st::pointer_boundary_cast<LPSTR>(&CHAR_00h_0080f022),st::mutable_c_string("%s%s%s\\%s%s%d%s"),&CHAR_00h_00807680,
                      st_global_0079B18C,&CHAR_00h_00807ddd,PTR_DAT_0079b19c,local_2b4,local_c
                      ,st_global_0079B194);
          }
          local_c = (char *)((int)pcVar15 + 1);
          /* ST_CALLSITE[0057782B]: CALL dword ptr [0x0085bcec] */
          pvVar5 = st::external_00000070(st::pointer_boundary_cast<LPCSTR>(&CHAR_00h_0080f022),st::pointer_boundary_cast<LPWIN32_FIND_DATAA>(&local_3f4));
          local_8 = (int *)(uint)(pvVar5 != (HANDLE)0xffffffff);
          if (local_8 == nullptr) {
            DAT_00808794 = 1;
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          local_10 = nullptr;
          local_d0.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_d0;
          iVar6_mg1 = st::fn_0072D7F0(local_d0.jumpBuffer,0);
          piVar13 = local_8;
          if (iVar6_mg1 == 0) {
            pcVar6 = (cMf32 *)st::fn_006F0EC0
                                        (0x345,(byte *)&CHAR_00h_0080f022,0,0,0);
            if (pcVar6 == nullptr) {
              local_8 = nullptr;
              piVar13 = (int *)0;
            }
            else {
              local_20 = local_1d90;
              puVar7 = st::fn_006F1CE0(pcVar6,0,PTR_s_DESCRIPTOR_0079b1a4,(int *)&local_20,0);
              if (puVar7 != nullptr) {
                local_20 = &local_10;
                puVar7 = st::fn_006F1CE0(pcVar6,0x80,PTR_s_SAVE_DESC_0079b1a0,(int *)&local_20,0);
                if ((puVar7 != nullptr) &&
                   ((local_1c != (cMf32 *)local_10 || ((DArrayTy *)local_1d88 != local_18)))) {
                  local_8 = (int *)0x1;
                  st::fn_006F1170(pcVar6);
                  piVar13 = (int *)1;
                  goto LAB_00577956;
                }
              }
              local_8 = nullptr;
              st::fn_006F1170(pcVar6);
              piVar13 = (int *)0;
            }
          }
LAB_00577956:
          g_currentExceptionFrame = local_d0.previous;
          if (piVar13 == nullptr) {
            DAT_00808794 = 1;
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
        } while( true );
      }
      if (bVar2 == 0xff) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      st::fn_004015D2((uint)bVar2);
      /* ST_CALLSITE[0057799C]: CALL 0x004018a7; direct=004018A7 StartStrateg */
      st::fn_004018A7((AnonShape_00648C10_30A1BBFD *)(pcVar15 + 2),(uint)bVar2);
    }
    if (g_optPanel_008016DC != nullptr) {
      /* ST_CALLSITE[005779B2]: CALL 0x00401cbc; direct=00401CBC OptPanelTy::sub_00532CE0 */
      st::fn_00401CBC(g_optPanel_008016DC);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_8c.previous;
  return 0;
}

// 00578200 DebugSystemC::CreateSystemObjects
#line 4 "decomp/ST.exe/functions/00578200/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   DebugSystemC::CreateSystemObjects */

undefined4 __thiscall st::fn_00578200(DebugSystemC *this)

{
  int errorCode;
  int iVar2;
  uint uVar3;
  InternalExceptionFrame local_4c;
  DebugSystemC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    /* ST_CALLSITE[00578240]: CALL dword ptr [EAX + 0xc] */
    local_8->vfunc_0C(0x8100,0xb228,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\tsystem.cpp"),0x1df,0,errorCode,st::mutable_c_string("%s"),
                             "DebugSystemC::CreateSystemObjects");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\tsystem.cpp"),0x1e0);
  return 0xffffffff;
}

