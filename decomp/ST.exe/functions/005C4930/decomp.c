
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::DoneSettMap */

void __thiscall SettMapTy::DoneSettMap(SettMapTy *this)

{
  code *pcVar1;
  MMObjTy *pMVar2;
  int iVar3;
  int iVar4;
  cMf32 *this_00;
  cMf32 *extraout_ECX;
  cMf32 *this_01;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  MMObjTy *pMVar6;
  bool bVar7;
  InternalExceptionFrame local_4c;
  MMObjTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = (MMObjTy *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    MMObjTy::DoneMMObj(local_8);
    this_01 = this_00;
    if (*(undefined4 **)(pMVar2 + 7999) != (undefined4 *)0x0) {
      cMf32::delete(this_00,*(undefined4 **)(pMVar2 + 7999));
      this_01 = extraout_ECX;
    }
    *(undefined4 *)(pMVar2 + 7999) = 0;
    if (*(undefined4 **)(pMVar2 + 0x1f43) != (undefined4 *)0x0) {
      cMf32::delete(this_01,*(undefined4 **)(pMVar2 + 0x1f43));
    }
    *(undefined4 *)(pMVar2 + 0x1f43) = 0;
    if (DAT_00802a30 != 0) {
      if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
        Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      }
      else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
      }
    }
    iVar3 = *(int *)(pMVar2 + 0x4d);
    if (((iVar3 != 0x611f) && (iVar3 != 0x6109)) && (iVar3 != 0x6105)) {
      thunk_FUN_0055dbf0(DAT_0080759c,10,2);
    }
    if (*(HoloTy **)(pMVar2 + 0x21ec) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pMVar2 + 0x21ec));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(pMVar2 + 0x21ec));
      *(undefined4 *)(pMVar2 + 0x21ec) = 0;
    }
    if (pMVar2[0x21e2] != (MMObjTy)0x0) {
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
    if (*(HoloTy **)(pMVar2 + 0x21f4) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pMVar2 + 0x21f4));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(pMVar2 + 0x21f4));
      *(undefined4 *)(pMVar2 + 0x21f4) = 0;
    }
    if (*(HoloTy **)(pMVar2 + 0x21e8) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pMVar2 + 0x21e8));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(pMVar2 + 0x21e8));
      *(undefined4 *)(pMVar2 + 0x21e8) = 0;
    }
    if (*(HoloTy **)(pMVar2 + 0x21f0) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pMVar2 + 0x21f0));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(pMVar2 + 0x21f0));
      *(undefined4 *)(pMVar2 + 0x21f0) = 0;
    }
    if (*(HoloTy **)(pMVar2 + 0x21f8) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pMVar2 + 0x21f8));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(pMVar2 + 0x21f8));
      *(undefined4 *)(pMVar2 + 0x21f8) = 0;
    }
    if (*(int *)(DAT_0081176c + 0x2c) != 0) {
      cMf32::RecMemFree(DAT_00806780,(uint *)(DAT_0081176c + 0x2c));
    }
    if (*(int *)(pMVar2 + 0x1e2b) != 0) {
      cMf32::RecMemFree(DAT_00806780,(uint *)(pMVar2 + 0x1e2b));
    }
    if (*(int *)(pMVar2 + 0x1c67) != 0) {
      FUN_006ab060((undefined4 *)(pMVar2 + 0x1c67));
    }
    DAT_0081175c = 0;
    if (*(byte **)(pMVar2 + 0x1f7c) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pMVar2 + 0x1f7c));
    }
    iVar3 = *(int *)(pMVar2 + 0x1f84);
    *(undefined4 *)(pMVar2 + 0x1f7c) = 0;
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
          iVar3 = *(int *)(pMVar2 + 0x1f84);
          uVar5 = uVar5 + 1;
          bVar7 = uVar5 < *(uint *)(iVar3 + 0xc);
        } while ((int)uVar5 < (int)*(uint *)(iVar3 + 0xc));
      }
      FUN_006ae110(*(byte **)(pMVar2 + 0x1f84));
      *(undefined4 *)(pMVar2 + 0x1f84) = 0;
    }
    if (*(byte **)(pMVar2 + 0x1e2f) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pMVar2 + 0x1e2f));
    }
    *(undefined4 *)(pMVar2 + 0x1e2f) = 0;
    SpriteClassTy::CloseSprite((SpriteClassTy *)(pMVar2 + 0x1c6b));
    SpriteClassTy::CloseSprite((SpriteClassTy *)(pMVar2 + 0x1cfc));
    SpriteClassTy::CloseSprite((SpriteClassTy *)(pMVar2 + 0x1d8d));
    pMVar6 = pMVar2 + 0x20f4;
    iVar3 = 10;
    do {
      FUN_006b3bb0(DAT_008075a8,*(uint *)(pMVar6 + -0x28));
      if (*(int *)pMVar6 != 0) {
        FUN_006ab060((undefined4 *)pMVar6);
      }
      pMVar6 = pMVar6 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (*(int *)(pMVar2 + 0x1e1e) != 0) {
      FUN_006ab060((undefined4 *)(pMVar2 + 0x1e1e));
    }
    FUN_006b3bb0(DAT_008075a8,*(uint *)(pMVar2 + 0x1e22));
    if ((pMVar2[0x21e7] != (MMObjTy)0x0) &&
       (*(MMsgTy **)(*(int *)(pMVar2 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0)) {
      MMsgTy::HideSprites(*(MMsgTy **)(*(int *)(pMVar2 + 0x1a5b) + 0x2e6));
      *(undefined4 *)(*(int *)(*(int *)(pMVar2 + 0x1a5b) + 0x2e6) + 0x1cab) = 0;
    }
    if (*(int *)(pMVar2 + 0x4d) != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)(pMVar2 + 0x3d));
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

