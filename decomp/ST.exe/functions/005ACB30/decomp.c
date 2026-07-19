
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::DoneChooseMap */

void __thiscall ChooseMapTy::DoneChooseMap(ChooseMapTy *this)

{
  ChooseMapTy_field_1A5FState CVar1;
  MMsgTy *this_00;
  code *pcVar2;
  ChooseMapTy *pCVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar6;
  InternalExceptionFrame local_4c;
  ChooseMapTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar3 = local_8;
  if (iVar4 == 0) {
    MMObjTy::DoneMMObj((MMObjTy *)local_8);
    if (((pCVar3->field_004D != 0x6121) && (DAT_00811764 != (undefined4 *)0x0)) &&
       (DAT_0080877e != '\0')) {
      FUN_00715360(DAT_00811764,0,'\x10',(char *)0x0,0,0,0xffffffff);
      thunk_FUN_005dac60();
    }
    if ((HANDLE)pCVar3->field_1C8F != (HANDLE)0x0) {
      FindCloseChangeNotification((HANDLE)pCVar3->field_1C8F);
      pCVar3->field_1C8F = 0;
    }
    if (DAT_00802a30 != 0) {
      if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
        Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      }
      else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
      }
    }
    iVar4 = pCVar3->field_004D;
    if (((iVar4 != 0x6120) && (iVar4 != 0x6121)) && (iVar4 != 0x6105)) {
      DarkScreen(DAT_0080759c,10,2);
    }
    if (*(uint *)(DAT_0081176c + 0x2c) != 0) {
      cMf32::RecMemFree(DAT_00806780,(uint *)(DAT_0081176c + 0x2c));
    }
    if (pCVar3->field_20B8 != (HoloTy *)0x0) {
      HoloTy::Done(pCVar3->field_20B8);
      Library::MSVCRT::FUN_0072e2b0((undefined4 *)pCVar3->field_20B8);
      pCVar3->field_20B8 = (HoloTy *)0x0;
    }
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pCVar3->field_1A70);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pCVar3->field_1B01);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pCVar3->field_1B92);
    puVar6 = &pCVar3->field_1C23;
    iVar4 = 0x16;
    do {
      if (*puVar6 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,*puVar6);
        *puVar6 = 0xffffffff;
      }
      puVar6 = puVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (pCVar3->field_1C87 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,pCVar3->field_1C87);
    }
    pCVar3->field_1C87 = 0xffffffff;
    if (pCVar3->field_20BC != (HoloTy *)0x0) {
      HoloTy::Done(pCVar3->field_20BC);
      Library::MSVCRT::FUN_0072e2b0((undefined4 *)pCVar3->field_20BC);
      pCVar3->field_20BC = (HoloTy *)0x0;
    }
    if (pCVar3->field_20B4 != '\0') {
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
    if (pCVar3->field_20C0 != (HoloTy *)0x0) {
      HoloTy::Done(pCVar3->field_20C0);
      Library::MSVCRT::FUN_0072e2b0((undefined4 *)pCVar3->field_20C0);
      pCVar3->field_20C0 = (HoloTy *)0x0;
    }
    if ((pCVar3->field_20B7 != '\0') &&
       (((CVar1 = pCVar3->field_1A5F, CVar1 == CASE_C || (CVar1 == CASE_4)) ||
        ((CVar1 == CASE_5 || (CVar1 == CASE_13)))))) {
      if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560));
      }
      if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1));
      }
      if (-1 < (int)*(uint *)(DAT_0081176c + 0x558)) {
        FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
      }
      if (-1 < (int)*(uint *)(DAT_0081176c + 0x554)) {
        FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
      }
    }
    if (pCVar3->field_1C7B != 0) {
      FUN_006ab060(&pCVar3->field_1C7B);
    }
    pCVar3->field_1C7F = 0;
    if (pCVar3->field_1C8B != 0) {
      FUN_006ab060(&pCVar3->field_1C8B);
    }
    if ((pCVar3->field_20B6 != '\0') &&
       (this_00 = pCVar3->field_1A5B->field_02E6, this_00 != (MMsgTy *)0x0)) {
      MMsgTy::HideSprites(this_00);
      pCVar3->field_1A5B->field_02E6->field_1CAB = 0;
    }
    if ((byte *)pCVar3->field_1C97 != (byte *)0x0) {
      FUN_006b5570((byte *)pCVar3->field_1C97);
      pCVar3->field_1C97 = 0;
    }
    if ((byte *)pCVar3->field_1C9B != (byte *)0x0) {
      FUN_006ae110((byte *)pCVar3->field_1C9B);
      pCVar3->field_1C9B = 0;
    }
    if ((byte *)pCVar3->field_1C9F != (byte *)0x0) {
      FUN_006b5570((byte *)pCVar3->field_1C9F);
      pCVar3->field_1C9F = 0;
    }
    if (pCVar3->field_004D != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pCVar3->field_0x3d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Start_load_obj_cpp_007cc728,0x191,0,iVar4,&DAT_007a4ccc,
                             s_ChooseMapTy__DoneChooseMap_007cc7ac);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Start_load_obj_cpp_007cc728,0x191);
  return;
}

