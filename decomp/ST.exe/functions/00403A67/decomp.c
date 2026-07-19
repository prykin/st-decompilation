
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CursorClassTy::GCGameState(CursorClassTy *this,int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  bool bVar4;
  ushort uVar5;
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
  undefined4 auStack_f8 [8];
  uint auStack_d8 [25];
  InternalExceptionFrame IStack_74;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  CursorClassTy *pCStack_18;
  undefined2 uStack_14;
  undefined2 uStack_12;
  float fStack_10;
  undefined4 uStack_c;
  int iStack_8;
  
  iStack_8 = 1;
  IStack_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_74;
  pCStack_18 = this;
  iVar6 = Library::MSVCRT::__setjmp3(IStack_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pCStack_18;
  if (iVar6 != 0) {
    g_currentExceptionFrame = IStack_74.previous;
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
  bVar4 = thunk_FUN_00544990((int)pCStack_18);
  if ((CONCAT31(extraout_var,bVar4) != 0) &&
     ((((this_00[0xde] == (CursorClassTy)0x2 || (this_00[0xde] == (CursorClassTy)0x4)) &&
       (iVar6 = FUN_00405687((int)this_00), iVar6 == 0)) || (*(int *)(this_00 + 0x496) == 0)))) {
    thunk_FUN_0054b700(this_00,-1);
    if ((DAT_00801690 == (void *)0x0) || (*(short *)((int)DAT_00801690 + 0x172) == 2))
    goto LAB_0054b372;
LAB_0054b019:
    uVar19 = *(undefined4 *)(this_00 + 0x38);
    uVar17 = *(undefined4 *)(this_00 + 0x34);
    uVar5 = (ushort)*(byte *)((int)DAT_00801690 + 0x1db);
    goto LAB_0054b368;
  }
  puVar13 = auStack_f8;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  if ((DAT_007fa174 == (STAllPlayersC *)0x0) || (DAT_00808784 != 0)) {
LAB_0054b335:
    if ((DAT_00801690 == (void *)0x0) || (*(short *)((int)DAT_00801690 + 0x172) == 2)) {
      uVar19 = *(undefined4 *)(this_00 + 0x38);
      uVar17 = *(undefined4 *)(this_00 + 0x34);
LAB_0054b366:
      uVar5 = 0;
    }
    else {
      uVar19 = *(undefined4 *)(this_00 + 0x38);
      uVar17 = *(undefined4 *)(this_00 + 0x34);
      uVar5 = (ushort)*(byte *)((int)DAT_00801690 + 0x1db);
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
      uVar19 = *(undefined4 *)(this_00 + 0x38);
      uVar17 = *(undefined4 *)(this_00 + 0x34);
      goto LAB_0054b366;
    }
    this_01 = (void *)thunk_FUN_00435820(*(int *)(this_00 + 0xc5) - *(int *)(this_00 + 0x4b2),
                                         *(int *)(this_00 + 0xc9) - *(int *)(this_00 + 0x4b6));
    *(void **)(this_00 + 0x49a) = this_01;
    if (this_01 == (void *)0x0) {
      FUN_006e1dd0(DAT_00807598,*(int *)(this_00 + 0xc5) - *(int *)(this_00 + 0x4b2),
                   *(int *)(this_00 + 0xc9) - *(int *)(this_00 + 0x4b6),(float *)0x0,(float *)0x0,
                   &fStack_10);
      lVar16 = Library::MSVCRT::__ftol();
      uStack_c = (undefined4)lVar16;
    }
    else {
      thunk_FUN_004162b0(this_01,&uStack_14,&uStack_12,(undefined2 *)&uStack_c);
    }
    if (4 < (short)uStack_c) {
      uStack_c = 4;
    }
    thunk_FUN_0054b700(this_00,(int)(short)uStack_c);
    if (*(int **)(this_00 + 0x49a) == (int *)0x0) {
      if ((*(int *)(this_00 + 0x49e) != 0) &&
         (*(undefined4 *)(this_00 + 0x49e) = 0, DAT_00801694 != (void *)0x0)) {
        thunk_FUN_0051fac0(DAT_00801694,(char *)0x0,0,'\x01',0xfffffc18);
      }
      if (this_00[0x4de] == (CursorClassTy)0x0) goto LAB_0054b2a9;
      uVar19 = *(undefined4 *)(this_00 + 0x38);
      uVar17 = *(undefined4 *)(this_00 + 0x34);
      uVar5 = 0x47;
    }
    else {
      (**(code **)(**(int **)(this_00 + 0x49a) + 0x68))(&iStack_30);
      if (*(int *)(this_00 + 0x49e) != iStack_30) {
        *(int *)(this_00 + 0x49e) = iStack_30;
        pHVar18 = DAT_00807618;
        UVar7 = thunk_FUN_00523410(uStack_2c,(char)uStack_28,0);
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
        puVar15 = auStack_d8;
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
        puVar9 = Library::MSVCRT::FUN_0072e560(auStack_d8,'\n');
        while (puVar9 != (uint *)0x0) {
          *(undefined1 *)puVar9 = 0x20;
          puVar9 = Library::MSVCRT::FUN_0072e560(puVar9,'\n');
        }
        if (uStack_28._1_1_ == '\0') {
          wsprintfA((LPSTR)auStack_d8,&DAT_007a4ccc,auStack_d8);
        }
        else {
          wsprintfA((LPSTR)auStack_d8,s__s_____s__007c7fe4,auStack_d8,(int)&uStack_28 + 1);
        }
        if (DAT_00801694 != (void *)0x0) {
          thunk_FUN_0051fac0(DAT_00801694,(char *)auStack_d8,0,'\x01',0xfffffc18);
        }
      }
      if (this_00[0x4de] == (CursorClassTy)0x0) {
LAB_0054b2a9:
        uVar5 = STAllPlayersC::GetCursorType
                          (DAT_007fa174,*(undefined4 *)(this_00 + 0x4a2),
                           *(undefined4 *)(this_00 + 0x49a),
                           *(int *)(this_00 + 0xc5) - *(int *)(this_00 + 0x4b2),
                           (int *)(*(int *)(this_00 + 0xc9) - *(int *)(this_00 + 0x4b6)),unaff_EDI,
                           unaff_ESI);
        while (uVar5 == 0x58) {
          thunk_FUN_0054a8d0(this_00);
          uVar5 = STAllPlayersC::GetCursorType
                            (DAT_007fa174,*(undefined4 *)(this_00 + 0x4a2),
                             *(undefined4 *)(this_00 + 0x49a),
                             *(int *)(this_00 + 0xc5) - *(int *)(this_00 + 0x4b2),
                             (int *)(*(int *)(this_00 + 0xc9) - *(int *)(this_00 + 0x4b6)),unaff_EDI
                             ,unaff_ESI);
        }
        uVar19 = *(undefined4 *)(this_00 + 0x38);
        uVar17 = *(undefined4 *)(this_00 + 0x34);
      }
      else {
        piVar2 = *(int **)(this_00 + 0x49a);
        iVar6 = (**(code **)(*piVar2 + 0x2c))();
        if (iVar6 == 0x78) {
          iVar6 = *(int *)(*(int *)(this_00 + 0x49a) + 0x259);
        }
        if (DAT_00801690 != (void *)0x0) {
          iVar10 = (**(code **)(*piVar2 + 0xc))();
          iVar6 = thunk_FUN_005121f0(DAT_00801690,iVar6,iVar10);
          if (iVar6 != 0) {
            uVar19 = *(undefined4 *)(this_00 + 0x38);
            uVar17 = *(undefined4 *)(this_00 + 0x34);
            uVar5 = 0x48;
            goto LAB_0054b368;
          }
        }
        uVar19 = *(undefined4 *)(this_00 + 0x38);
        uVar17 = *(undefined4 *)(this_00 + 0x34);
        uVar5 = 0x47;
      }
    }
  }
LAB_0054b368:
  iStack_8 = SetGCType(this_00,uVar5,uVar17,uVar19);
LAB_0054b372:
  if ((param_1 != 0) && (iStack_8 != 0)) {
    DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
  }
  g_currentExceptionFrame = IStack_74.previous;
  return;
}

