
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
    if (((*(int *)&pCVar3->field_0x4d != 0x6121) && (DAT_00811764 != (undefined4 *)0x0)) &&
       (DAT_0080877e != '\0')) {
      FUN_00715360(DAT_00811764,0,'\x10',(char *)0x0,0,0,0xffffffff);
      thunk_FUN_005dac60();
    }
    if (*(HANDLE *)&pCVar3[1].field_0x22f != (HANDLE)0x0) {
      FindCloseChangeNotification(*(HANDLE *)&pCVar3[1].field_0x22f);
      *(undefined4 *)&pCVar3[1].field_0x22f = 0;
    }
    if (DAT_00802a30 != 0) {
      if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
        Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      }
      else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
      }
    }
    iVar4 = *(int *)&pCVar3->field_0x4d;
    if (((iVar4 != 0x6120) && (iVar4 != 0x6121)) && (iVar4 != 0x6105)) {
      thunk_FUN_0055dbf0(DAT_0080759c,10,2);
    }
    if (*(uint *)(DAT_0081176c + 0x2c) != 0) {
      cMf32::RecMemFree(DAT_00806780,(uint *)(DAT_0081176c + 0x2c));
    }
    if (*(HoloTy **)&pCVar3[1].field_0x658 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pCVar3[1].field_0x658);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&pCVar3[1].field_0x658);
      *(undefined4 *)&pCVar3[1].field_0x658 = 0;
    }
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pCVar3[1].field_0010);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pCVar3[1].field_0xa1);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pCVar3[1].field_0x132);
    puVar6 = (uint *)&pCVar3[1].field_0x1c3;
    iVar4 = 0x16;
    do {
      if (*puVar6 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,*puVar6);
        *puVar6 = 0xffffffff;
      }
      puVar6 = puVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (*(uint *)&pCVar3[1].field_0x227 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)&pCVar3[1].field_0x227);
    }
    *(undefined4 *)&pCVar3[1].field_0x227 = 0xffffffff;
    if (*(HoloTy **)&pCVar3[1].field_0x65c != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pCVar3[1].field_0x65c);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&pCVar3[1].field_0x65c);
      *(undefined4 *)&pCVar3[1].field_0x65c = 0;
    }
    if (pCVar3[1].field_0x654 != '\0') {
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
    if (*(HoloTy **)&pCVar3[1].field_0x660 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pCVar3[1].field_0x660);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&pCVar3[1].field_0x660);
      *(undefined4 *)&pCVar3[1].field_0x660 = 0;
    }
    if ((pCVar3[1].field_0x657 != '\0') &&
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
    if (*(int *)&pCVar3[1].field_0x21b != 0) {
      FUN_006ab060((undefined4 *)&pCVar3[1].field_0x21b);
    }
    *(undefined4 *)&pCVar3[1].field_0x21f = 0;
    if (*(int *)&pCVar3[1].field_0x22b != 0) {
      FUN_006ab060((undefined4 *)&pCVar3[1].field_0x22b);
    }
    if ((pCVar3[1].field_0x656 != '\0') &&
       (this_00 = *(MMsgTy **)(*(int *)&pCVar3->field_0x1a5b + 0x2e6), this_00 != (MMsgTy *)0x0)) {
      MMsgTy::HideSprites(this_00);
      *(undefined4 *)(*(int *)(*(int *)&pCVar3->field_0x1a5b + 0x2e6) + 0x1cab) = 0;
    }
    if (*(byte **)&pCVar3[1].field_0x237 != (byte *)0x0) {
      FUN_006b5570(*(byte **)&pCVar3[1].field_0x237);
      *(undefined4 *)&pCVar3[1].field_0x237 = 0;
    }
    if (*(byte **)&pCVar3[1].field_0x23b != (byte *)0x0) {
      FUN_006ae110(*(byte **)&pCVar3[1].field_0x23b);
      *(undefined4 *)&pCVar3[1].field_0x23b = 0;
    }
    if (*(byte **)&pCVar3[1].field_0x23f != (byte *)0x0) {
      FUN_006b5570(*(byte **)&pCVar3[1].field_0x23f);
      *(undefined4 *)&pCVar3[1].field_0x23f = 0;
    }
    if (*(int *)&pCVar3->field_0x4d != 0) {
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

