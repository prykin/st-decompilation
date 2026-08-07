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
  undefined4 uVar3;
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
    local_c->vfunc_0C(1,(short)&local_8,0,0);
    this_00->vfunc_0C(0x101,0x2a2c,0,0);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\tsystem.cpp",0x2c,0,errorCode,"%s",
                             "BaseSystemC::CreateSystemObjects");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\tsystem.cpp",0x2d);
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
      g_baseSystem_00811638 = st::fn_00401348(this,g_app_00806728);
    }
    if (g_baseSystem_00811638 == nullptr) {
      st::fn_006A5E40(-1,g_overwriteContext_007ED77C,"E:\\__titans\\tsystem.cpp",0x38);
    }
    g_baseSystem_00811638->field_0020 = 0;
    (*g_baseSystem_00811638->vtable->InitSystem)((SystemClassTy *)g_baseSystem_00811638);
    st::fn_006E4650((AppClassTy *)&DAT_00807620,(int *)g_baseSystem_00811638,0);
    g_baseSystem_00811638->field_0020 = 1;
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\tsystem.cpp",0x40,0,errorCode,"%s",
                             "CreateBaseSystem");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\tsystem.cpp",0x41);
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
      g_baseSystem_00811638->vfunc_04();
      st::fn_0072E2B0((HoloTy *)g_baseSystem_00811638);
      g_baseSystem_00811638 = nullptr;
    }
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\tsystem.cpp",0x4f,0,errorCode,"%s",
                             "DestroyBaseSystem");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\tsystem.cpp",0x50);
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
  undefined4 uVar3;
  InternalExceptionFrame local_4c;
  GameSystemC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    local_8->vfunc_0C(0x100,0xb2a4,0,0);
    this_00->vfunc_0C(0x102,0xb288,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\tsystem.cpp",0x65,0,errorCode,"%s",
                             "GameSystemC::CreateSystemObjects");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\tsystem.cpp",0x65);
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
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  InternalExceptionFrame local_90;
  InternalExceptionFrame local_4c;
  GameSystemC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar4 == 0) {
    PTR_00806750 = st::fn_00402112(g_cMf32_00806754,"3D_MAP");
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
                             (PTR_00806770,"scmask",0,0,nullptr,1);
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
  iVar8 = st::fn_006AD4D0("E:\\__titans\\tsystem.cpp",0x86,0,iVar4,"%s",
                             "GameSystemC::InitSystem");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,"E:\\__titans\\tsystem.cpp",0x86);
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
    st::external_00000096(1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\tsystem.cpp",0xa7,0,errorCode,"%s",
                             "GameSystemC::DoneSystem");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\tsystem.cpp",0xa7);
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
      g_parentSystem_0081163C = st::fn_004014EC(this_00,g_app_00806728);
    }
    if (g_parentSystem_0081163C == nullptr) {
      st::fn_006A5E40(-1,g_overwriteContext_007ED77C,"E:\\__titans\\tsystem.cpp",0xb1);
    }
    g_parentSystem_0081163C->field_0428 = 0;
    g_parentSystem_0081163C->InitSystem();
    st::fn_006E4650((AppClassTy *)&DAT_00807620,(int *)g_parentSystem_0081163C,0);
    g_parentSystem_0081163C->field_0428 = 1;
    this = g_cursorClass_00802A30;
    iVar1 = g_cursorClass_00802A30->field_00C9;
    iVar4 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = 2;
    this->field_0494 = 0xffff;
    st::fn_0040507E(this,CASE_0,iVar4,iVar1);
    st::fn_0040241E(this,this->field_00C5,this->field_00C9);
    this->field_00D2 = 0;
    this->field_04DF = -1;
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\tsystem.cpp",0xbb,0,iVar2,"%s",
                             "CreateGameSystem");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\tsystem.cpp",0xbb);
  return;
}

// 005776D0 GameSystemC::GetMessage
#line 4 "decomp/ST.exe/functions/005776D0/decomp.c"
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
  void *pvVar3;
  PlayPanelTy *this_00;
  int local_EAX_51;
  HANDLE pvVar5;
  int iVar6;
  cMf32 *pcVar7;
  ushort *puVar8;
  char *local_EAX_1519;
  int iVar5;
  DArrayTy *array;
  AnonShape_00648C10_30A1BBFD *strategData;
  int iVar19;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  SystemClassTy *extraout_ECX;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  char *pcVar12;
  char *pcVar14;
  bool bVar16;
  undefined1 local_1d90 [8];
  int *local_1d88;
  _WIN32_FIND_DATAA local_3f4;
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
  undefined4 local_48;
  SystemClassTy *this_01;
  int *piVar17;
  undefined1 *puVar18;
  int iVar20;
  char *pcVar13;

  st::fn_0072DA40();
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  this_01 = extraout_ECX;
  local_EAX_51 = st::fn_0072D7F0(local_8c.jumpBuffer,0);
  if (local_EAX_51 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar19 = st::fn_006AD4D0("E:\\__titans\\tsystem.cpp",0x1c6,0,local_EAX_51,
                                "%s");
    if (iVar19 == 0) {
      st::fn_006A5E40(local_EAX_51,0,"E:\\__titans\\tsystem.cpp",0x1c7);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006E5F00(this_01,message);
  if (message->id == MESS_GAMESYSTEMC_43FF) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    piVar17 = *(int **)((message->arg0).u32 + 0x17);
    switch(*piVar17) {
    case 1:
      if (DAT_00808783 == '\x03') {
        if (piVar17[2] != 0) {
          DAT_00808784 = (void *)piVar17[1];
          this_01[0x21].objectLock = DAT_00808784;
          st::fn_00725760
                    (g_sT3DSMAPContext_00807598,(int)DAT_00808784,
                     -(uint)(DAT_00808784 != nullptr) & (uint)PTR_008032b4);
          if (g_pausePanel_008016E0 != nullptr) {
            st::fn_0040504C(g_pausePanel_008016E0,(int)DAT_00808784);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
        }
      }
      else if (piVar17[2] == 0) {
        if (this_01[0x21].objectLock == nullptr) {
          DAT_00808784 = (void *)piVar17[1];
          st::fn_00725760
                    (g_sT3DSMAPContext_00807598,(int)DAT_00808784,
                     -(uint)(DAT_00808784 != nullptr) & (uint)PTR_008032b4);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      else {
        if ((DAT_0080878c == 0) && (DAT_00808790 == 0)) {
          DAT_00808784 = (void *)piVar17[1];
          st::fn_00725760
                    (g_sT3DSMAPContext_00807598,(int)DAT_00808784,
                     -(uint)(DAT_00808784 != nullptr) & (uint)PTR_008032b4);
        }
        pvVar3 = (void *)piVar17[1];
        this_01[0x21].objectLock = pvVar3;
        if (g_pausePanel_008016E0 != nullptr) {
          st::fn_0040504C(g_pausePanel_008016E0,(int)pvVar3);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      break;
    case 4:
      uVar9 = piVar17[1];
      if (DAT_0080733b != uVar9) {
        DAT_0080733b = (byte)uVar9;
        if (DAT_0080877e == '\0') {
          iVar20 = (uVar9 & 0xff) * 0x18;
          DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar20 + 0x14);
        }
        else {
          iVar20 = (uVar9 & 0xff) * 0x18;
          DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar20 + 8);
        }
        if (g_sT3DSMAPContext_00807598 != nullptr) {
          st::fn_006E8640
                    (g_sT3DSMAPContext_00807598,
                     *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar20 + 0x10),
                     *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar20 + 4));
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      break;
    case 6:
    case 7:
      if (*piVar17 == 6) {
        st::fn_00401212(&DAT_00807620,(byte)((uint)piVar17[1] >> 0x10),*(byte *)(piVar17 + 1),
                           (char)piVar17[2]);
      }
      else {
        st::fn_004033A0(&DAT_00807620,(byte)((uint)piVar17[1] >> 0x10),*(byte *)(piVar17 + 1));
      }
      this_00 = g_playPanel_008016E4;
      if (g_playPanel_008016E4 != nullptr) {
        g_playPanel_008016E4->field_0028 = 5;
        piVar11 = &this_00->field_0181;
        puVar18 = (undefined1 *)0x8;
        do {
          if (*piVar11 != 0) {
            puVar18 = &this_00->field_0x18;
            st::fn_006E6080(this_00,2,*piVar11,(undefined4 *)puVar18);
          }
          piVar11 = piVar11 + 1;
          puVar18 = puVar18 + -1;
        } while (puVar18 != nullptr);
      }
      if ((ushort)((uint)piVar17[1] >> 0x10) != (ushort)DAT_0080874d) {
        if (DAT_00808aaf != 0) {
          uVar9 = (uint)DAT_00808aaf;
          do {
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
          if (DAT_00808aaf != 0) {
            uVar9 = (uint)DAT_00808aaf;
            do {
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
        }
        local_EAX_1519 = st::fn_006B0140(0x42c2,g_hINSTANCE_00807618);
        st::external_00000080((LPSTR)&DAT_0080f33a,local_EAX_1519);
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
        st::external_00000080((LPSTR)&DAT_0080f33a,"%s%s%s");
        pcVar7 = (cMf32 *)st::fn_006F0EC0(0x345,(byte *)&DAT_0080f33a,0,0,0);
        local_48 = 0x577d84;
        array = (DArrayTy *)st::fn_00403F44(pcVar7,piVar17[1],DAT_0080995c);
        uVar9 = array->count;
        if (uVar9 != 0) {
          if (uVar9 - 1 < uVar9) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar12 = (char *)((uVar9 - 1) * array->elementSize + (int)array->data);
          }
          else {
            pcVar12 = nullptr;
          }
          if ((pcVar12 + 0x4c != nullptr) &&
             (strategData = (AnonShape_00648C10_30A1BBFD *)
                            st::fn_004012AD((int)pcVar7,pcVar12 + 0x4c,nullptr),
             strategData != nullptr)) {
            uVar9 = 0xffffffff;
            do {
              pcVar14 = pcVar12;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar14 = pcVar12 + 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar14;
            } while (cVar1 != '\0');
            uVar9 = ~uVar9;
            pcVar12 = pcVar14 + -uVar9;
            pcVar14 = local_16c;
            for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar14 = pcVar14 + 4;
            }
            bVar2 = *(byte *)(piVar17 + 2);
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar14 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar14 = pcVar14 + 1;
            }
            local_12c = DAT_0080877f;
            local_127 = 1;
            local_125 = 1;
            local_126 = 0;
            local_128 = bVar2;
            local_124 = st::external_000000DA();
            if (bVar2 < 8) {
              pcVar12 = local_16c;
              pcVar14 = &CHAR_00h_00808ab0 + (uint)DAT_00808aaf * 0x9c;
              memmove(pcVar14, pcVar12, 0x9c); /* compiler REP MOVS byte copy */
              DAT_00808aaf = DAT_00808aaf + 1;
              if (g_playPanel_008016E4 != nullptr) {
                st::fn_00405E07(g_playPanel_008016E4);
              }
            }
            pcVar7 = (cMf32 *)0x577e83;
            st::fn_004018A7(strategData,piVar17[2]);
            *(undefined1 *)(g_bulkInitializedRecords_008087C7 + piVar17[2]) = 1;
            array = (DArrayTy *)0x577e9d;
            st::fn_006AB060(&stack0xffffffdc);
          }
        }
        if (array != nullptr) {
          st::fn_006AE110(array);
        }
        st::fn_006F1170(pcVar7);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case 9:
      if (DAT_008117bc != nullptr) {
        memset(&local_48, 0, 0x20); /* compiler bulk-zero initialization */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)*DAT_008117bc)();
      }
    }
  }
  else if (message->id == MESS_GAMESYSTEMC_4400) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pcVar12 = *(char **)((message->arg0).u32 + 0x17);
    cVar1 = *pcVar12;
    bVar2 = pcVar12[1];
    uVar9 = (uint)bVar2;
    if (cVar1 == '\0') {
      if (bVar2 == 0xff) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      st::fn_004015D2(uVar9);
    }
    else {
      if (cVar1 != '\x01') {
        if (cVar1 != '\x02') {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        _Count = *(size_t *)(pcVar12 + 1);
        DAT_00808750 = *(undefined4 *)(pcVar12 + 9);
        iVar20 = -1;
        st::fn_0072E340((char *)0x88000516,*(char **)(pcVar12 + 5),_Count);
        local_3f4.cAlternateFileName[_Count + 0xf] = '\0';
        do {
          if (iVar20 < 0) {
            st::external_00000080(&CHAR_00h_0080f022,"%s%s%s\\%s%s%s");
          }
          else {
            st::external_00000080(&CHAR_00h_0080f022,"%s%s%s\\%s%s%d%s");
          }
          iVar20 = iVar20 + 1;
          pvVar5 = st::external_00000070(&CHAR_00h_0080f022,&local_3f4);
          bVar16 = pvVar5 != (HANDLE)0xffffffff;
          if (!bVar16) {
            DAT_00808794 = 1;
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          local_d0.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_d0;
          iVar6 = st::fn_0072D7F0(local_d0.jumpBuffer,0);
          if (iVar6 == 0) {
            pcVar7 = (cMf32 *)st::fn_006F0EC0
                                        (0x345,(byte *)&CHAR_00h_0080f022,0,0,0);
            if (pcVar7 == nullptr) {
              bVar16 = false;
            }
            else {
              puVar8 = st::fn_006F1CE0(pcVar7,(byte)local_1d90,PTR_s_DESCRIPTOR_0079b1a4,
                                     (int *)&stack0xffffffe0,0);
              if (puVar8 != nullptr) {
                piVar17 = (int *)&stack0xffffffe0;
                pcVar13 = PTR_s_SAVE_DESC_0079b1a0;
                puVar8 = st::fn_006F1CE0(pcVar7,(byte)&stack0xfffffff0,PTR_s_SAVE_DESC_0079b1a0,
                                       piVar17,0);
                if ((puVar8 != nullptr) &&
                   ((pcVar13 != nullptr || (local_1d88 != piVar17)))) {
                  bVar16 = true;
                  st::fn_006F1170(pcVar7);
                  goto LAB_00577956;
                }
              }
              bVar16 = false;
              st::fn_006F1170(pcVar7);
            }
          }
LAB_00577956:
          g_currentExceptionFrame = local_d0.previous;
          if (!bVar16) {
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
      st::fn_004015D2(uVar9);
      st::fn_004018A7((AnonShape_00648C10_30A1BBFD *)(pcVar12 + 2),uVar9);
    }
    if (g_optPanel_008016DC != nullptr) {
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
  undefined4 uVar3;
  InternalExceptionFrame local_4c;
  DebugSystemC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    local_8->vfunc_0C(0x8100,0xb228,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\tsystem.cpp",0x1df,0,errorCode,"%s",
                             "DebugSystemC::CreateSystemObjects");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\tsystem.cpp",0x1e0);
  return 0xffffffff;
}

