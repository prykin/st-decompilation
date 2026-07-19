
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::GCGameState */

void __thiscall CursorClassTy::GCGameState(CursorClassTy *this,int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  bool bVar4;
  CursorClassTy_SetGCType_param_1Enum CVar5;
  int iVar6;
  undefined3 extraout_var;
  void *this_01;
  UINT UVar7;
  char *pcVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar13;
  char *pcVar14;
  uint *puVar15;
  longlong lVar16;
  undefined4 uVar17;
  HINSTANCE pHVar18;
  undefined4 uVar19;
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
  iVar6 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_18;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x6fc,0,iVar6,
                                &DAT_007a4ccc,s_CursorClassTy__GCGameState_007c7fc4);
    if (iVar10 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x6fe);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = thunk_FUN_00544990((int)local_18);
  if ((CONCAT31(extraout_var,bVar4) != 0) &&
     ((((this_00->field_00DE == '\x02' || (this_00->field_00DE == '\x04')) &&
       (iVar6 = FUN_00405687((int)this_00), iVar6 == 0)) || (this_00->field_0496 == 0)))) {
    thunk_FUN_0054b700(this_00,-1);
    if ((DAT_00801690 == (void *)0x0) || (*(short *)((int)DAT_00801690 + 0x172) == 2))
    goto LAB_0054b372;
LAB_0054b019:
    uVar19 = this_00->field_0038;
    uVar17 = this_00->field_0034;
    CVar5 = (CursorClassTy_SetGCType_param_1Enum)*(byte *)((int)DAT_00801690 + 0x1db);
    goto cf_common_exit_0054B368;
  }
  puVar13 = local_f8;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  if ((DAT_007fa174 == (STAllPlayersC *)0x0) || (DAT_00808784 != 0)) {
LAB_0054b335:
    if ((DAT_00801690 == (void *)0x0) || (*(short *)((int)DAT_00801690 + 0x172) == 2)) {
      uVar19 = this_00->field_0038;
      uVar17 = this_00->field_0034;
LAB_0054b366:
      CVar5 = CASE_0;
    }
    else {
      uVar19 = this_00->field_0038;
      uVar17 = this_00->field_0034;
      CVar5 = (CursorClassTy_SetGCType_param_1Enum)*(byte *)((int)DAT_00801690 + 0x1db);
    }
  }
  else {
    if ((DAT_00808788 == 0) && ((DAT_0080878c == 0 && (DAT_00808790 == 0)))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_0054b335;
    if ((((DAT_008016e4 != 0) && (*(short *)(DAT_008016e4 + 0x172) != 2)) ||
        ((DAT_00801690 != (void *)0x0 && (*(short *)((int)DAT_00801690 + 0x172) != 2)))) ||
       ((DAT_008016dc != 0 && (*(short *)(DAT_008016dc + 0x172) != 2)))) {
      if ((DAT_00801690 != (void *)0x0) && (*(short *)((int)DAT_00801690 + 0x172) != 2))
      goto LAB_0054b019;
      uVar19 = this_00->field_0038;
      uVar17 = this_00->field_0034;
      goto LAB_0054b366;
    }
    this_01 = (void *)thunk_FUN_00435820(this_00->field_00C5 - this_00->field_04B2,
                                         this_00->field_00C9 - this_00->field_04B6);
    this_00->field_049A = this_01;
    if (this_01 == (void *)0x0) {
      FUN_006e1dd0(DAT_00807598,this_00->field_00C5 - this_00->field_04B2,
                   this_00->field_00C9 - this_00->field_04B6,(float *)0x0,(float *)0x0,&local_10);
      lVar16 = Library::MSVCRT::__ftol();
      local_c = (undefined4)lVar16;
    }
    else {
      thunk_FUN_004162b0(this_01,&local_14,&local_12,(undefined2 *)&local_c);
    }
    if (4 < (short)local_c) {
      local_c = 4;
    }
    thunk_FUN_0054b700(this_00,(int)(short)local_c);
    if ((int *)this_00->field_049A == (int *)0x0) {
      if ((this_00->field_049E != 0) && (this_00->field_049E = 0, DAT_00801694 != (void *)0x0)) {
        thunk_FUN_0051fac0(DAT_00801694,(char *)0x0,0,'\x01',0xfffffc18);
      }
      if (this_00->field_04DE == '\0') goto LAB_0054b2a9;
      uVar19 = this_00->field_0038;
      uVar17 = this_00->field_0034;
      CVar5 = CASE_47;
    }
    else {
      (**(code **)(*(int *)this_00->field_049A + 0x68))(&local_30);
      if (this_00->field_049E != local_30) {
        this_00->field_049E = local_30;
        pHVar18 = DAT_00807618;
        UVar7 = thunk_FUN_00523410(local_2c,(char)local_28,0);
        pcVar8 = (char *)FUN_006b0140(UVar7,pHVar18);
        uVar11 = 0xffffffff;
        do {
          pcVar14 = pcVar8;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar14 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar14;
        } while (cVar1 != '\0');
        uVar11 = ~uVar11;
        puVar9 = (uint *)(pcVar14 + -uVar11);
        puVar15 = local_d8;
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar15 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar15 = puVar15 + 1;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(char *)puVar15 = (char)*puVar9;
          puVar9 = (uint *)((int)puVar9 + 1);
          puVar15 = (uint *)((int)puVar15 + 1);
        }
        puVar9 = Library::MSVCRT::FUN_0072e560(local_d8,'\n');
        while (puVar9 != (uint *)0x0) {
          *(undefined1 *)puVar9 = 0x20;
          puVar9 = Library::MSVCRT::FUN_0072e560(puVar9,'\n');
        }
        if (local_28._1_1_ == '\0') {
          wsprintfA((LPSTR)local_d8,&DAT_007a4ccc,local_d8);
        }
        else {
          wsprintfA((LPSTR)local_d8,s__s_____s__007c7fe4,local_d8,(int)&local_28 + 1);
        }
        if (DAT_00801694 != (void *)0x0) {
          thunk_FUN_0051fac0(DAT_00801694,(char *)local_d8,0,'\x01',0xfffffc18);
        }
      }
      if (this_00->field_04DE == '\0') {
LAB_0054b2a9:
        CVar5 = STAllPlayersC::GetCursorType
                          (DAT_007fa174,this_00->field_04A2,this_00->field_049A,
                           this_00->field_00C5 - this_00->field_04B2,
                           (int *)(this_00->field_00C9 - this_00->field_04B6),unaff_EDI,unaff_ESI);
        while (CVar5 == (CASE_40|CASE_18)) {
          thunk_FUN_0054a8d0(this_00);
          CVar5 = STAllPlayersC::GetCursorType
                            (DAT_007fa174,this_00->field_04A2,this_00->field_049A,
                             this_00->field_00C5 - this_00->field_04B2,
                             (int *)(this_00->field_00C9 - this_00->field_04B6),unaff_EDI,unaff_ESI)
          ;
        }
        uVar19 = this_00->field_0038;
        uVar17 = this_00->field_0034;
      }
      else {
        piVar2 = (int *)this_00->field_049A;
        iVar6 = (**(code **)(*piVar2 + 0x2c))();
        if (iVar6 == 0x78) {
          iVar6 = *(int *)(this_00->field_049A + 0x259);
        }
        if (DAT_00801690 != (void *)0x0) {
          iVar10 = (**(code **)(*piVar2 + 0xc))();
          iVar6 = thunk_FUN_005121f0(DAT_00801690,iVar6,iVar10);
          if (iVar6 != 0) {
            uVar19 = this_00->field_0038;
            uVar17 = this_00->field_0034;
            CVar5 = CASE_48;
            goto cf_common_exit_0054B368;
          }
        }
        uVar19 = this_00->field_0038;
        uVar17 = this_00->field_0034;
        CVar5 = CASE_47;
      }
    }
  }
cf_common_exit_0054B368:
  local_8 = SetGCType(this_00,CVar5,uVar17,uVar19);
LAB_0054b372:
  if ((param_1 != 0) && (local_8 != 0)) {
    DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
  }
  g_currentExceptionFrame = local_74.previous;
  return;
}

