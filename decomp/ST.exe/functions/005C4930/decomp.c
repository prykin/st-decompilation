
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::DoneSettMap */

void __thiscall SettMapTy::DoneSettMap(SettMapTy *this)

{
  HoloTy *this_00;
  MMsgTy *this_01;
  code *pcVar1;
  SettMapTy *pSVar2;
  int iVar3;
  int iVar4;
  cMf32 *this_02;
  cMf32 *extraout_ECX;
  cMf32 *this_03;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  int *piVar6;
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
    this_03 = this_02;
    if (*(undefined4 **)&pSVar2[0x4f].field_0x14 != (undefined4 *)0x0) {
      cMf32::delete(this_02,*(undefined4 **)&pSVar2[0x4f].field_0x14);
      this_03 = extraout_ECX;
    }
    *(undefined4 *)&pSVar2[0x4f].field_0x14 = 0;
    if (*(undefined4 **)&pSVar2[0x4f].field_0x18 != (undefined4 *)0x0) {
      cMf32::delete(this_03,*(undefined4 **)&pSVar2[0x4f].field_0x18);
    }
    *(undefined4 *)&pSVar2[0x4f].field_0x18 = 0;
    if (DAT_00802a30 != 0) {
      if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
        Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      }
      else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
      }
    }
    iVar3 = *(int *)&pSVar2->field_0x4d;
    if (((iVar3 != 0x611f) && (iVar3 != 0x6109)) && (iVar3 != 0x6105)) {
      thunk_FUN_0055dbf0(DAT_0080759c,10,2);
    }
    this_00 = *(HoloTy **)((int)&pSVar2[0x55].field_0061 + 2);
    if (this_00 != (HoloTy *)0x0) {
      HoloTy::Done(this_00);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)((int)&pSVar2[0x55].field_0061 + 2));
      *(undefined4 *)((int)&pSVar2[0x55].field_0061 + 2) = 0;
    }
    if (pSVar2[0x55].field_0x59 != '\0') {
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
    if (*(HoloTy **)&pSVar2[0x56].field_0x6 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pSVar2[0x56].field_0x6);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&pSVar2[0x56].field_0x6);
      *(undefined4 *)&pSVar2[0x56].field_0x6 = 0;
    }
    if (*(HoloTy **)&pSVar2[0x55].field_0x5f != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pSVar2[0x55].field_0x5f);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&pSVar2[0x55].field_0x5f);
      *(undefined4 *)&pSVar2[0x55].field_0x5f = 0;
    }
    if (*(HoloTy **)&pSVar2[0x56].field_0x2 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pSVar2[0x56].field_0x2);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&pSVar2[0x56].field_0x2);
      *(undefined4 *)&pSVar2[0x56].field_0x2 = 0;
    }
    if (*(HoloTy **)&pSVar2[0x56].field_0xa != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pSVar2[0x56].field_0xa);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&pSVar2[0x56].field_0xa);
      *(undefined4 *)&pSVar2[0x56].field_0xa = 0;
    }
    if (*(int *)(DAT_0081176c + 0x2c) != 0) {
      cMf32::RecMemFree(DAT_00806780,(uint *)(DAT_0081176c + 0x2c));
    }
    if (*(int *)&pSVar2[0x4c].field_0x2f != 0) {
      cMf32::RecMemFree(DAT_00806780,(uint *)&pSVar2[0x4c].field_0x2f);
    }
    if (*(int *)((int)&pSVar2[0x47].field_0061 + 3) != 0) {
      FUN_006ab060((undefined4 *)((int)&pSVar2[0x47].field_0061 + 3));
    }
    DAT_0081175c = 0;
    if (*(byte **)&pSVar2[0x4f].field_0x51 != (byte *)0x0) {
      FUN_006ae110(*(byte **)&pSVar2[0x4f].field_0x51);
    }
    iVar3 = *(int *)&pSVar2[0x4f].field_0x59;
    *(undefined4 *)&pSVar2[0x4f].field_0x51 = 0;
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
          iVar3 = *(int *)&pSVar2[0x4f].field_0x59;
          uVar5 = uVar5 + 1;
          bVar7 = uVar5 < *(uint *)(iVar3 + 0xc);
        } while ((int)uVar5 < (int)*(uint *)(iVar3 + 0xc));
      }
      FUN_006ae110(*(byte **)&pSVar2[0x4f].field_0x59);
      *(undefined4 *)&pSVar2[0x4f].field_0x59 = 0;
    }
    if (*(byte **)&pSVar2[0x4c].field_0x33 != (byte *)0x0) {
      FUN_006ae110(*(byte **)&pSVar2[0x4c].field_0x33);
    }
    *(undefined4 *)&pSVar2[0x4c].field_0x33 = 0;
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pSVar2[0x48].field_0x3);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pSVar2[0x49].field_0x2f);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pSVar2[0x4a].field_0x5b);
    piVar6 = (int *)&pSVar2[0x53].field_0x35;
    iVar3 = 10;
    do {
      FUN_006b3bb0(DAT_008075a8,piVar6[-10]);
      if (*piVar6 != 0) {
        FUN_006ab060(piVar6);
      }
      piVar6 = piVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (*(int *)&pSVar2[0x4c].field_0x22 != 0) {
      FUN_006ab060((undefined4 *)&pSVar2[0x4c].field_0x22);
    }
    FUN_006b3bb0(DAT_008075a8,*(uint *)&pSVar2[0x4c].field_0x26);
    if ((pSVar2[0x55].field_0x5e != '\0') &&
       (this_01 = *(MMsgTy **)(*(int *)&pSVar2[0x42].field_0x51 + 0x2e6), this_01 != (MMsgTy *)0x0))
    {
      MMsgTy::HideSprites(this_01);
      *(undefined4 *)(*(int *)(*(int *)&pSVar2[0x42].field_0x51 + 0x2e6) + 0x1cab) = 0;
    }
    if (*(int *)&pSVar2->field_0x4d != 0) {
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

