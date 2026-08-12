#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::GCGameState

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=11, used=0), and
   decompilation contains no value return */

void __thiscall CursorClassTy::GCGameState(CursorClassTy *this,int param_1)

{
  char cVar1;
  bool bVar3;
  CursorClassTy *this_00;
  CursorClassTy_SetGCType_param_1Enum CVar4;
  int local_EAX_45;
  int iVar5;
  int iVar6;
  STFishC *pSVar7;
  UINT resourceId;
  char *pcVar8;
  uint *puVar9_mg1;
  Global_sub_005121F0_param_1Enum GVar9;
  int iVar10;
  uint uVar10;
  uint *puVar12;
  char *pcVar14;
  uint *puVar15;
  longlong lVar16;
  int iVar17;
  HINSTANCE module;
  undefined4 local_f8 [8];
  uint local_d8 [25];
  InternalExceptionFrame local_74;
  int local_30;
  Global_sub_00523410_param_1Enum local_2c;
  undefined4 local_28;
  CursorClassTy *local_18;
  short local_14;
  short local_12;
  float local_10;
  undefined4 local_c;
  int local_8;

  local_8 = 1;
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_18 = this;
  local_EAX_45 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0);
  this_00 = local_18;
  if (local_EAX_45 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\Andrey\\to_cursor.cpp",0x6fc,0,local_EAX_45,
                                "%s","CursorClassTy::GCGameState");
    if (iVar10 == 0) {
      RaiseInternalException(local_EAX_45,0,"E:\\__titans\\Andrey\\to_cursor.cpp",0x6fe);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar5 = thunk_FUN_00544990(local_18);
  if ((iVar5 != 0) &&
     ((((this_00->field_00DE == CASE_2 || (this_00->field_00DE == CASE_4)) &&
       (iVar6 = FUN_00405687((int)this_00), iVar6 == 0)) || (this_00->field_0496 == 0)))) {
    sub_0054B700(this_00,-1);
    if ((g_helpPanel_00801690 == nullptr) || (g_helpPanel_00801690->field_0172 == CASE_2)
       ) goto LAB_0054b372;
LAB_0054b019:
    iVar6 = this_00->field_0038;
    iVar17 = this_00->field_0034;
    CVar4 = (CursorClassTy_SetGCType_param_1Enum)(byte)g_helpPanel_00801690->field_01DB;
    goto cf_common_exit_0054B368;
  }
  memset(local_f8, 0, 0x20); /* compiler bulk-zero initialization */
  if ((g_allPlayers_007FA174 == nullptr) || (DAT_00808784 != 0)) {
LAB_0054b335:
    if ((g_helpPanel_00801690 == nullptr) || (g_helpPanel_00801690->field_0172 == CASE_2)
       ) {
      iVar6 = this_00->field_0038;
      iVar17 = this_00->field_0034;
LAB_0054b366:
      CVar4 = CASE_0;
    }
    else {
      iVar6 = this_00->field_0038;
      iVar17 = this_00->field_0034;
      CVar4 = (CursorClassTy_SetGCType_param_1Enum)(byte)g_helpPanel_00801690->field_01DB;
    }
  }
  else {
    if ((DAT_00808788 == 0) && ((DAT_0080878c == 0 && (DAT_00808790 == 0)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_0054b335;
    if ((((g_playPanel_008016E4 != nullptr) &&
         (g_playPanel_008016E4->field_0172 != CASE_2)) ||
        ((g_helpPanel_00801690 != nullptr && (g_helpPanel_00801690->field_0172 != CASE_2)
         ))) || ((g_optPanel_008016DC != nullptr &&
                 (g_optPanel_008016DC->field_0172 != CASE_2)))) {
      if ((g_helpPanel_00801690 != nullptr) &&
         (g_helpPanel_00801690->field_0172 != CASE_2)) goto LAB_0054b019;
      iVar6 = this_00->field_0038;
      iVar17 = this_00->field_0034;
      goto LAB_0054b366;
    }
    pSVar7 = (STFishC *)
             thunk_FUN_00435820(this_00->field_00C5 - this_00->field_04B2,
                                this_00->field_00C9 - this_00->field_04B6);
    this_00->field_049A = pSVar7;
    if (pSVar7 == nullptr) {
      FUN_006e1dd0(g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                   this_00->field_00C9 - this_00->field_04B6,nullptr,nullptr,&local_10);
      lVar16 = Library::MSVCRT::__ftol();
      local_c = (undefined4)lVar16;
    }
    else {
      STFishC::sub_004162B0(pSVar7,&local_14,&local_12,(short *)&local_c);
    }
    if (4 < (short)local_c) {
      local_c = 4;
    }
    sub_0054B700(this_00,(int)(short)local_c);
    pSVar7 = this_00->field_049A;
    if (pSVar7 == nullptr) {
      if ((this_00->field_049E != 0) && (this_00->field_049E = 0, DAT_00801694 != nullptr)) {
        thunk_FUN_0051fac0(DAT_00801694,nullptr,0,'\x01',0xfffffc18);
      }
      if (this_00->field_04DE == '\0') goto LAB_0054b2a9;
      iVar6 = this_00->field_0038;
      iVar17 = this_00->field_0034;
      CVar4 = CASE_47;
    }
    else {
      pSVar7->vfunc_68((short)&local_30);
      if (this_00->field_049E != local_30) {
        this_00->field_049E = local_30;
        module = g_hINSTANCE_00807618;
        resourceId = thunk_FUN_00523410(local_2c,(char)local_28,0);
        pcVar8 = LoadResourceString(resourceId,module);
        uVar10 = 0xffffffff;
        do {
          pcVar14 = pcVar8;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar14 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar14;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        puVar12 = (uint *)(pcVar14 + -uVar10);
        puVar15 = local_d8;
        memmove(puVar15, puVar12, uVar10); /* compiler REP MOVS byte copy */
        puVar9_mg1 = Library::MSVCRT::FUN_0072e560(local_d8,'\n');
        while (puVar9_mg1 != nullptr) {
          *(undefined1 *)puVar9_mg1 = 0x20;
          puVar9_mg1 = Library::MSVCRT::FUN_0072e560(puVar9_mg1,'\n');
        }
        if (STPiece<1,1>(local_28) == '\0') {
          wsprintfA((LPSTR)local_d8,"%s",local_d8);
        }
        else {
          wsprintfA((LPSTR)local_d8,"%s - \"%s\"",local_d8,(int)&local_28 + 1);
        }
        if (DAT_00801694 != nullptr) {
          thunk_FUN_0051fac0(DAT_00801694,(char *)local_d8,0,'\x01',0xfffffc18);
        }
      }
      if (this_00->field_04DE == '\0') {
LAB_0054b2a9:
        CVar4 = STAllPlayersC::GetCursorType
                          (g_allPlayers_007FA174,this_00->field_04A2,
                           (AnonShape_00435930_AC276C8C *)this_00->field_049A,
                           this_00->field_00C5 - this_00->field_04B2,
                           (int *)(this_00->field_00C9 - this_00->field_04B6));
        while (CVar4 == CASE_58) {
          sub_0054A8D0(this_00);
          CVar4 = STAllPlayersC::GetCursorType
                            (g_allPlayers_007FA174,this_00->field_04A2,
                             (AnonShape_00435930_AC276C8C *)this_00->field_049A,
                             this_00->field_00C5 - this_00->field_04B2,
                             (int *)(this_00->field_00C9 - this_00->field_04B6));
        }
        iVar6 = this_00->field_0038;
        iVar17 = this_00->field_0034;
      }
      else {
        pSVar7 = this_00->field_049A;
        GVar9 = pSVar7->slot_2C();
        if (GVar9 == 0x78) {
          GVar9 = *(Global_sub_005121F0_param_1Enum *)&this_00->field_049A->field_0x259;
        }
        if (g_helpPanel_00801690 != nullptr) {
          iVar6 = (*pSVar7->vtable->vfunc_0C)();
          iVar6 = thunk_FUN_005121f0(g_helpPanel_00801690,GVar9,iVar6);
          if (iVar6 != 0) {
            iVar6 = this_00->field_0038;
            iVar17 = this_00->field_0034;
            CVar4 = CASE_48;
            goto cf_common_exit_0054B368;
          }
        }
        iVar6 = this_00->field_0038;
        iVar17 = this_00->field_0034;
        CVar4 = CASE_47;
      }
    }
  }
cf_common_exit_0054B368:
  local_8 = SetGCType(this_00,CVar4,iVar17,iVar6);
LAB_0054b372:
  if ((param_1 != 0) && (local_8 != 0)) {
    DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
  }
  g_currentExceptionFrame = local_74.previous;
  return;
}

