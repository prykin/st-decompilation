
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::DoneSettMap */

void __thiscall SettMapTy::DoneSettMap(SettMapTy *this)

{
  MMsgTy *this_00;
  code *pcVar1;
  SettMapTy *pSVar2;
  int iVar3;
  int iVar4;
  cMf32 *this_01;
  cMf32 *extraout_ECX;
  cMf32 *this_02;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  LPVOID *ppvVar6;
  bool bVar7;
  InternalExceptionFrame local_4c;
  SettMapTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    MMObjTy::DoneMMObj((MMObjTy *)local_8);
    this_02 = this_01;
    if ((cMf32 *)pSVar2->field_1F3F != (cMf32 *)0x0) {
      cMf32::delete(this_01,(cMf32 *)pSVar2->field_1F3F);
      this_02 = extraout_ECX;
    }
    pSVar2->field_1F3F = 0;
    if ((cMf32 *)pSVar2->field_1F43 != (cMf32 *)0x0) {
      cMf32::delete(this_02,(cMf32 *)pSVar2->field_1F43);
    }
    pSVar2->field_1F43 = 0;
    if (DAT_00802a30 != 0) {
      if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
        Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      }
      else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
      }
    }
    iVar3 = pSVar2->field_004D;
    if (((iVar3 != 0x611f) && (iVar3 != 0x6109)) && (iVar3 != 0x6105)) {
      DarkScreen(DAT_0080759c,10,2);
    }
    if (pSVar2->field_21EC != (HoloTy *)0x0) {
      HoloTy::Done(pSVar2->field_21EC);
      Library::MSVCRT::FUN_0072e2b0(pSVar2->field_21EC);
      pSVar2->field_21EC = (HoloTy *)0x0;
    }
    if (pSVar2->field_0x21e2 != '\0') {
      if (*(uint *)(DAT_0081176c + 0x391) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_0081176c + 0x3d5),*(uint *)(DAT_0081176c + 0x391));
      }
      if (*(uint *)(DAT_0081176c + 0x422) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_0081176c + 0x466),*(uint *)(DAT_0081176c + 0x422));
      }
      if (*(uint *)(DAT_0081176c + 0x4b3) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_0081176c + 0x4f7),*(uint *)(DAT_0081176c + 0x4b3));
      }
      if (-1 < (int)*(uint *)(DAT_0081176c + 0x540)) {
        FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x540));
      }
    }
    if (pSVar2->field_21F4 != (HoloTy *)0x0) {
      HoloTy::Done(pSVar2->field_21F4);
      Library::MSVCRT::FUN_0072e2b0(pSVar2->field_21F4);
      pSVar2->field_21F4 = (HoloTy *)0x0;
    }
    if (pSVar2->field_21E8 != (HoloTy *)0x0) {
      HoloTy::Done(pSVar2->field_21E8);
      Library::MSVCRT::FUN_0072e2b0(pSVar2->field_21E8);
      pSVar2->field_21E8 = (HoloTy *)0x0;
    }
    if (pSVar2->field_21F0 != (HoloTy *)0x0) {
      HoloTy::Done(pSVar2->field_21F0);
      Library::MSVCRT::FUN_0072e2b0(pSVar2->field_21F0);
      pSVar2->field_21F0 = (HoloTy *)0x0;
    }
    if (pSVar2->field_21F8 != (HoloTy *)0x0) {
      HoloTy::Done(pSVar2->field_21F8);
      Library::MSVCRT::FUN_0072e2b0(pSVar2->field_21F8);
      pSVar2->field_21F8 = (HoloTy *)0x0;
    }
    if (*(int *)(DAT_0081176c + 0x2c) != 0) {
      cMf32::RecMemFree(g_cMf32_00806780,(uint *)(DAT_0081176c + 0x2c));
    }
    if (pSVar2->field_1E2B != 0) {
      cMf32::RecMemFree(g_cMf32_00806780,&pSVar2->field_1E2B);
    }
    if (pSVar2->field_1C67 != 0) {
      FUN_006ab060((LPVOID *)&pSVar2->field_1C67);
    }
    DAT_0081175c = 0;
    if ((byte *)pSVar2->field_1F7C != (byte *)0x0) {
      FUN_006ae110((byte *)pSVar2->field_1F7C);
    }
    iVar3 = pSVar2->field_1F84;
    pSVar2->field_1F7C = 0;
    if (iVar3 != 0) {
      uVar5 = 0;
      if (0 < *(int *)(iVar3 + 0xc)) {
        bVar7 = *(int *)(iVar3 + 0xc) != 0;
        do {
          if (bVar7) {
            iVar3 = *(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c);
          }
          else {
            iVar3 = 0;
          }
          if ((iVar3 != 0) && (*(byte **)(iVar3 + 0x50) != (byte *)0x0)) {
            FUN_006ae110(*(byte **)(iVar3 + 0x50));
          }
          iVar3 = pSVar2->field_1F84;
          uVar5 = uVar5 + 1;
          bVar7 = uVar5 < *(uint *)(iVar3 + 0xc);
        } while ((int)uVar5 < (int)*(uint *)(iVar3 + 0xc));
      }
      FUN_006ae110((byte *)pSVar2->field_1F84);
      pSVar2->field_1F84 = 0;
    }
    if ((byte *)pSVar2->field_1E2F != (byte *)0x0) {
      FUN_006ae110((byte *)pSVar2->field_1E2F);
    }
    pSVar2->field_1E2F = 0;
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pSVar2->field_0x1c6b);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pSVar2->field_0x1cfc);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pSVar2->field_0x1d8d);
    ppvVar6 = (LPVOID *)&pSVar2->field_20F4;
    iVar3 = 10;
    do {
      FUN_006b3bb0(DAT_008075a8,(uint)ppvVar6[-10]);
      if (*ppvVar6 != (LPVOID)0x0) {
        FUN_006ab060(ppvVar6);
      }
      ppvVar6 = ppvVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (pSVar2->field_1E1E != 0) {
      FUN_006ab060((LPVOID *)&pSVar2->field_1E1E);
    }
    FUN_006b3bb0(DAT_008075a8,pSVar2->field_1E22);
    if ((pSVar2->field_21E7 != '\0') &&
       (this_00 = *(MMsgTy **)(pSVar2->field_1A5B + 0x2e6), this_00 != (MMsgTy *)0x0)) {
      MMsgTy::HideSprites(this_00);
      *(undefined4 *)(*(int *)(pSVar2->field_1A5B + 0x2e6) + 0x1cab) = 0;
    }
    if (pSVar2->field_004D != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pSVar2->field_0x3d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x1ce,0,iVar3,&DAT_007a4ccc,
                             s_SettMapTy__DoneSettMap_007cd170);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_sett_obj_cpp_007cd0e8,0x1ce);
  return;
}

