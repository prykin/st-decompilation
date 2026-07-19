
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::DonePrivider */

void __thiscall PrividerTy::DonePrivider(PrividerTy *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  MMObjTy *pMVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  MMObjTy *pMVar7;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  MMObjTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = (MMObjTy *)this;
  iVar5 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar4 = local_8;
  if (iVar5 == 0) {
    MMObjTy::DoneMMObj(local_8);
    this_00 = DAT_00802a30;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      uVar1 = *(undefined4 *)(DAT_00802a30 + 0xc9);
      uVar2 = *(undefined4 *)(DAT_00802a30 + 0xc5);
      DAT_00802a30[0x493] = (CursorClassTy)0x1;
      *(undefined2 *)(this_00 + 0x494) = 0xffff;
      CursorClassTy::SetGCType(this_00,0,uVar2,uVar1);
      CursorClassTy::DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
      this_00[0xd2] = (CursorClassTy)0x0;
      *(undefined4 *)(this_00 + 0x4df) = 0xffffffff;
      if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
        Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      }
      else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
      }
    }
    if (*(int *)(pMVar4 + 0x4d) == 0x6102) {
      thunk_FUN_0055dbf0(DAT_0080759c,10,2);
    }
    if (*(int *)(DAT_0081176c + 0x2c) != 0) {
      cMf32::RecMemFree(DAT_00806780,(uint *)(DAT_0081176c + 0x2c));
    }
    SpriteClassTy::CloseSprite((SpriteClassTy *)(pMVar4 + 0x1a77));
    SpriteClassTy::CloseSprite((SpriteClassTy *)(pMVar4 + 0x1b08));
    SpriteClassTy::CloseSprite((SpriteClassTy *)(pMVar4 + 0x1b99));
    pMVar7 = pMVar4 + 0x1c2a;
    iVar5 = 0x16;
    do {
      if (*(uint *)pMVar7 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,*(uint *)pMVar7);
        *(uint *)pMVar7 = 0xffffffff;
      }
      pMVar7 = pMVar7 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (*(uint *)(pMVar4 + 0x1c8a) != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)(pMVar4 + 0x1c8a));
    }
    *(undefined4 *)(pMVar4 + 0x1c8a) = 0xffffffff;
    if (*(int *)(pMVar4 + 0x1c82) != 0) {
      FUN_006ab060((undefined4 *)(pMVar4 + 0x1c82));
    }
    if (*(int *)(pMVar4 + 0x1c8e) != 0) {
      FUN_006ab060((undefined4 *)(pMVar4 + 0x1c8e));
    }
    if (*(HoloTy **)(pMVar4 + 0x1c96) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pMVar4 + 0x1c96));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(pMVar4 + 0x1c96));
      *(undefined4 *)(pMVar4 + 0x1c96) = 0;
    }
    if (*(HoloTy **)(pMVar4 + 0x1c9a) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pMVar4 + 0x1c9a));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(pMVar4 + 0x1c9a));
      *(undefined4 *)(pMVar4 + 0x1c9a) = 0;
    }
    if ((*(int *)(pMVar4 + 0x4d) == 0x6102) &&
       (*(MMsgTy **)(*(int *)(pMVar4 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0)) {
      MMsgTy::HideSprites(*(MMsgTy **)(*(int *)(pMVar4 + 0x1a5b) + 0x2e6));
      *(undefined4 *)(*(int *)(*(int *)(pMVar4 + 0x1a5b) + 0x2e6) + 0x1cab) = 0;
    }
    if (*(int *)(pMVar4 + 0x4d) != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)(pMVar4 + 0x3d));
    }
    thunk_FUN_005dab30(DAT_0081176c);
    if (*(byte **)(pMVar4 + 0x1c92) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(pMVar4 + 0x1c92));
    }
    *(undefined4 *)(pMVar4 + 0x1c92) = 0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Start_prov_obj_cpp_007ccd28,0xd3,0,iVar5,&DAT_007a4ccc,
                             s_PrividerTy__DonePrivider_007ccdc0);
  if (iVar6 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  RaiseInternalException(iVar5,0,s_E____titans_Start_prov_obj_cpp_007ccd28,0xd3);
  return;
}

