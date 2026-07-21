#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::GCGameState */

void __thiscall CursorClassTy::GCGameState(CursorClassTy *this,int param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  CursorClassTy *this_00;
  CursorClassTy_SetGCType_param_1Enum CVar4;
  int iVar5;
  STFishC *pSVar6;
  UINT resourceId;
  char *pcVar7;
  uint *puVar8;
  dword dVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_ESI;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_EDI;
  char *pcVar14;
  uint *puVar15;
  longlong lVar16;
  undefined4 uVar17;
  HINSTANCE module;
  undefined4 uVar18;
  undefined4 local_f8 [8];
  uint local_d8 [25];
  InternalExceptionFrame local_74;
  int local_30;
  Global_sub_00523410_param_1Enum local_2c;
  undefined4 local_28;
  CursorClassTy *local_18;
  undefined2 local_14;
  undefined2 local_12;
  float local_10;
  undefined4 local_c;
  int local_8;

  local_8 = 1;
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_18 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0);
  this_00 = local_18;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\Andrey\\to_cursor.cpp",0x6fc,0,iVar5,
                                "%s","CursorClassTy::GCGameState");
    if (iVar10 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\to_cursor.cpp",0x6fe);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar5 = thunk_FUN_00544990((int)local_18);
  if ((iVar5 != 0) &&
     ((((this_00->field_00DE == CASE_2 || (this_00->field_00DE == 4)) &&
       (iVar5 = FUN_00405687((int)this_00), iVar5 == 0)) || (this_00->field_0496 == 0)))) {
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054B700::thunk_FUN_0054b700
              ((AnonReceiver_0054B700 *)this_00,-1);
    if ((g_helpPanel_00801690 == (AnonShape_GLOBAL_00801690_2AA401C1 *)0x0) ||
       (g_helpPanel_00801690->field_0172 == 2)) goto LAB_0054b372;
LAB_0054b019:
    uVar18 = this_00->field_0038;
    uVar17 = this_00->field_0034;
    CVar4 = (CursorClassTy_SetGCType_param_1Enum)g_helpPanel_00801690->field_01DB;
    goto cf_common_exit_0054B368;
  }
  memset(local_f8, 0, 0x20); /* compiler bulk-zero initialization */
  if ((g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) || (DAT_00808784 != 0)) {
LAB_0054b335:
    if ((g_helpPanel_00801690 == (AnonShape_GLOBAL_00801690_2AA401C1 *)0x0) ||
       (g_helpPanel_00801690->field_0172 == 2)) {
      uVar18 = this_00->field_0038;
      uVar17 = this_00->field_0034;
LAB_0054b366:
      CVar4 = CASE_0;
    }
    else {
      uVar18 = this_00->field_0038;
      uVar17 = this_00->field_0034;
      CVar4 = (CursorClassTy_SetGCType_param_1Enum)g_helpPanel_00801690->field_01DB;
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
    if ((((g_playPanel_008016E4 != (PlayPanelTy *)0x0) && (g_playPanel_008016E4->field_0172 != 2))
        || ((g_helpPanel_00801690 != (AnonShape_GLOBAL_00801690_2AA401C1 *)0x0 &&
            (g_helpPanel_00801690->field_0172 != 2)))) ||
       ((g_optPanel_008016DC != (OptPanelTy *)0x0 && (g_optPanel_008016DC->field_0172 != CASE_2))))
    {
      if ((g_helpPanel_00801690 != (AnonShape_GLOBAL_00801690_2AA401C1 *)0x0) &&
         (g_helpPanel_00801690->field_0172 != 2)) goto LAB_0054b019;
      uVar18 = this_00->field_0038;
      uVar17 = this_00->field_0034;
      goto LAB_0054b366;
    }
    pSVar6 = (STFishC *)
             thunk_FUN_00435820(this_00->field_00C5 - this_00->field_04B2,
                                this_00->field_00C9 - this_00->field_04B6);
    this_00->field_049A = pSVar6;
    if (pSVar6 == (STFishC *)0x0) {
      FUN_006e1dd0(PTR_00807598,this_00->field_00C5 - this_00->field_04B2,
                   this_00->field_00C9 - this_00->field_04B6,(float *)0x0,(float *)0x0,&local_10);
      lVar16 = Library::MSVCRT::__ftol();
      local_c = (undefined4)lVar16;
    }
    else {
      STFishC::sub_004162B0(pSVar6,&local_14,&local_12,(undefined2 *)&local_c);
    }
    if (4 < (short)local_c) {
      local_c = 4;
    }
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0054B700::thunk_FUN_0054b700
              ((AnonReceiver_0054B700 *)this_00,(int)(short)local_c);
    if (this_00->field_049A == (STFishC *)0x0) {
      if ((this_00->field_049E != 0) && (this_00->field_049E = 0, DAT_00801694 != (void *)0x0)) {
        thunk_FUN_0051fac0(DAT_00801694,(char *)0x0,0,'\x01',0xfffffc18);
      }
      if (this_00->field_04DE == '\0') goto LAB_0054b2a9;
      uVar18 = this_00->field_0038;
      uVar17 = this_00->field_0034;
      CVar4 = CASE_47;
    }
    else {
      (*this_00->field_049A->vtable->vfunc_68)(&local_30);
      if (this_00->field_049E != local_30) {
        this_00->field_049E = local_30;
        module = HINSTANCE_00807618;
        resourceId = thunk_FUN_00523410(local_2c,(char)local_28,0);
        pcVar7 = LoadResourceString(resourceId,module);
        uVar11 = 0xffffffff;
        do {
          pcVar14 = pcVar7;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar14 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar14;
        } while (cVar1 != '\0');
        uVar11 = ~uVar11;
        puVar8 = (uint *)(pcVar14 + -uVar11);
        puVar15 = local_d8;
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar15 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar15 = puVar15 + 1;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(char *)puVar15 = (char)*puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          puVar15 = (uint *)((int)puVar15 + 1);
        }
        puVar8 = Library::MSVCRT::FUN_0072e560(local_d8,'\n');
        while (puVar8 != (uint *)0x0) {
          *(undefined1 *)puVar8 = 0x20;
          puVar8 = Library::MSVCRT::FUN_0072e560(puVar8,'\n');
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        if (local_28._1_1_ == '\0') {
          wsprintfA((LPSTR)local_d8,"%s",local_d8);
        }
        else {
          wsprintfA((LPSTR)local_d8,"%s - \"%s\"",local_d8,(int)&local_28 + 1);
        }
        if (DAT_00801694 != (void *)0x0) {
          thunk_FUN_0051fac0(DAT_00801694,(char *)local_d8,0,'\x01',0xfffffc18);
        }
      }
      if (this_00->field_04DE == '\0') {
/* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
LAB_0054b2a9:
        CVar4 = STAllPlayersC::GetCursorType
                          (g_sTAllPlayers_007FA174,this_00->field_04A2,this_00->field_049A,
                           this_00->field_00C5 - this_00->field_04B2,
                           (int *)(this_00->field_00C9 - this_00->field_04B6),unaff_EDI,unaff_ESI);
        while (CVar4 == (CASE_40|CASE_18)) {
          thunk_FUN_0054a8d0(this_00);
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          CVar4 = STAllPlayersC::GetCursorType
                            (g_sTAllPlayers_007FA174,this_00->field_04A2,this_00->field_049A,
                             this_00->field_00C5 - this_00->field_04B2,
                             (int *)(this_00->field_00C9 - this_00->field_04B6),unaff_EDI,unaff_ESI)
          ;
        }
        uVar18 = this_00->field_0038;
        uVar17 = this_00->field_0034;
      }
      else {
        pSVar6 = this_00->field_049A;
        dVar9 = (*pSVar6->vtable->slot_2C)(pSVar6);
        if (dVar9 == 0x78) {
          dVar9 = *(dword *)&this_00->field_049A->field_0x259;
        }
        if (g_helpPanel_00801690 != (AnonShape_GLOBAL_00801690_2AA401C1 *)0x0) {
          iVar5 = (*pSVar6->vtable->vfunc_0C)();
          iVar5 = thunk_FUN_005121f0(g_helpPanel_00801690,dVar9,iVar5);
          if (iVar5 != 0) {
            uVar18 = this_00->field_0038;
            uVar17 = this_00->field_0034;
            CVar4 = CASE_48;
            goto cf_common_exit_0054B368;
          }
        }
        uVar18 = this_00->field_0038;
        uVar17 = this_00->field_0034;
        CVar4 = CASE_47;
      }
    }
  }
cf_common_exit_0054B368:
  local_8 = SetGCType(this_00,CVar4,uVar17,uVar18);
LAB_0054b372:
  if ((param_1 != 0) && (local_8 != 0)) {
    DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
  }
  g_currentExceptionFrame = local_74.previous;
  return;
}

