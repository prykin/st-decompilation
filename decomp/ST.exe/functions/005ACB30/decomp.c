
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::DoneChooseMap */

void __thiscall ChooseMapTy::DoneChooseMap(ChooseMapTy *this)

{
  char cVar1;
  HoloTy *this_00;
  MMsgTy *this_01;
  code *pcVar2;
  MMObjTy *pMVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar6;
  InternalExceptionFrame local_4c;
  MMObjTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = (MMObjTy *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar3 = local_8;
  if (iVar4 == 0) {
    MMObjTy::DoneMMObj(local_8);
    if (((*(int *)&pMVar3->field_0x4d != 0x6121) && (g_int_00811764 != (int *)0x0)) &&
       (DAT_0080877e != '\0')) {
      FUN_00715360(g_int_00811764,0,'\x10',(char *)0x0,0,0,0xffffffff);
      thunk_FUN_005dac60();
    }
    if (*(HANDLE *)&pMVar3[0x20].field_0x2f != (HANDLE)0x0) {
      FindCloseChangeNotification(*(HANDLE *)&pMVar3[0x20].field_0x2f);
      *(undefined4 *)&pMVar3[0x20].field_0x2f = 0;
    }
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      if (PTR_00802a30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
      }
      else if (PTR_00802a30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)PTR_00802a30->field_0060,PTR_00802a30->field_001C);
      }
    }
    iVar4 = *(int *)&pMVar3->field_0x4d;
    if (((iVar4 != 0x6120) && (iVar4 != 0x6121)) && (iVar4 != 0x6105)) {
      DarkScreen(DAT_0080759c,10,2);
    }
    if (PTR_0081176c->field_002C != 0) {
      cMf32::RecMemFree(g_cMf32_00806780,&PTR_0081176c->field_002C);
    }
    if (*(HoloTy **)&pMVar3[0x24].field_0xcc != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pMVar3[0x24].field_0xcc);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&pMVar3[0x24].field_0xcc);
      *(undefined4 *)&pMVar3[0x24].field_0xcc = 0;
    }
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pMVar3[0x1d].field_0xb9);
    SpriteClassTy::CloseSprite((SpriteClassTy *)((int)&pMVar3[0x1e].field_0066 + 1));
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pMVar3[0x1f].field_0x15);
    puVar6 = (uint *)&pMVar3[0x1f].field_0xa6;
    iVar4 = 0x16;
    do {
      if (*puVar6 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,*puVar6);
        *puVar6 = 0xffffffff;
      }
      puVar6 = puVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (*(uint *)&pMVar3[0x20].field_0x27 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)&pMVar3[0x20].field_0x27);
    }
    this_00 = *(HoloTy **)&pMVar3[0x24].field_0xd0;
    *(undefined4 *)&pMVar3[0x20].field_0x27 = 0xffffffff;
    if (this_00 != (HoloTy *)0x0) {
      HoloTy::Done(this_00);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&pMVar3[0x24].field_0xd0);
      *(undefined4 *)&pMVar3[0x24].field_0xd0 = 0;
    }
    if (pMVar3[0x24].field_0xc8 != '\0') {
      if (PTR_0081176c->field_0391 != 0xffffffff) {
        FUN_006b3af0((int *)PTR_0081176c->field_03D5,PTR_0081176c->field_0391);
      }
      if (PTR_0081176c->field_0422 != 0xffffffff) {
        FUN_006b3af0((int *)PTR_0081176c->field_0466,PTR_0081176c->field_0422);
      }
      if (PTR_0081176c->field_04B3 != 0xffffffff) {
        FUN_006b3af0((int *)PTR_0081176c->field_04F7,PTR_0081176c->field_04B3);
      }
      if (-1 < (int)PTR_0081176c->field_0540) {
        FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_0540);
      }
    }
    if (*(HoloTy **)&pMVar3[0x24].field_0xd4 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pMVar3[0x24].field_0xd4);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&pMVar3[0x24].field_0xd4);
      *(undefined4 *)&pMVar3[0x24].field_0xd4 = 0;
    }
    if ((pMVar3[0x24].field_0xcb != '\0') &&
       (((cVar1 = pMVar3[0x1d].field_0xa8, cVar1 == '\f' || (cVar1 == '\x04')) ||
        ((cVar1 == '\x05' || (cVar1 == '\x13')))))) {
      if (PTR_0081176c->field_0560 != 0xffffffff) {
        FUN_006b3af0((int *)PTR_0081176c->field_05A4,PTR_0081176c->field_0560);
      }
      if (PTR_0081176c->field_05F1 != 0xffffffff) {
        FUN_006b3af0((int *)PTR_0081176c->field_0635,PTR_0081176c->field_05F1);
      }
      if (-1 < (int)PTR_0081176c->field_0558) {
        FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_0558);
      }
      if (-1 < (int)PTR_0081176c->field_0554) {
        FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_0554);
      }
    }
    if (*(int *)&pMVar3[0x20].field_0x1b != 0) {
      FreeAndNull((void **)&pMVar3[0x20].field_0x1b);
    }
    *(undefined4 *)&pMVar3[0x20].field_0x1f = 0;
    if (*(int *)&pMVar3[0x20].field_0x2b != 0) {
      FreeAndNull((void **)&pMVar3[0x20].field_0x2b);
    }
    if ((pMVar3[0x24].field_0xca != '\0') &&
       (this_01 = *(MMsgTy **)(*(int *)&pMVar3[0x1d].field_0xa4 + 0x2e6), this_01 != (MMsgTy *)0x0))
    {
      MMsgTy::HideSprites(this_01);
      *(undefined4 *)(*(int *)(*(int *)&pMVar3[0x1d].field_0xa4 + 0x2e6) + 0x1cab) = 0;
    }
    if (*(AnonShape_006B5570_4D68B99C **)&pMVar3[0x20].field_0x37 !=
        (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570(*(AnonShape_006B5570_4D68B99C **)&pMVar3[0x20].field_0x37);
      *(undefined4 *)&pMVar3[0x20].field_0x37 = 0;
    }
    if (*(DArrayTy **)&pMVar3[0x20].field_0x3b != (DArrayTy *)0x0) {
      DArrayDestroy(*(DArrayTy **)&pMVar3[0x20].field_0x3b);
      *(undefined4 *)&pMVar3[0x20].field_0x3b = 0;
    }
    if (*(AnonShape_006B5570_4D68B99C **)&pMVar3[0x20].field_0x3f !=
        (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570(*(AnonShape_006B5570_4D68B99C **)&pMVar3[0x20].field_0x3f);
      *(undefined4 *)&pMVar3[0x20].field_0x3f = 0;
    }
    if (*(int *)&pMVar3->field_0x4d != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pMVar3->field_0x3d);
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

