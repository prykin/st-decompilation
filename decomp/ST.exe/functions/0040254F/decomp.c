
void __thiscall MainMenuTy::InitMainMenu(MainMenuTy *this,char param_1)

{
  code *pcVar1;
  CursorClassTy *this_00;
  MainMenuTy *this_01;
  int iVar2;
  LPSTR pCVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  MMObjTy *pMVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar8;
  byte bVar9;
  undefined4 uVar10;
  InternalExceptionFrame IStack_4c;
  MainMenuTy *pMStack_8;
  
  iVar8 = 0;
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pMStack_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = IStack_4c.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Start_main_obj_cpp_007cc8e8,0x48,0,iVar2,&DAT_007a4ccc,
                               s_MainMenuTy__InitMainMenu_007cc910);
    if (iVar8 == 0) {
      RaiseInternalException(iVar2,0,s_E____titans_Start_main_obj_cpp_007cc8e8,0x48);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  thunk_FUN_005daf20(DAT_0081176c);
  DAT_0080877e = 1;
  DAT_0080877f = 0;
  if (DAT_008067a0 != '\0') {
    CFsgsConnection::CloseGame((CFsgsConnection *)&DAT_00802a90);
    CFsgsConnection::CancelConnection((CFsgsConnection *)&DAT_00802a90);
    DAT_00802a99 = 0;
    DAT_008067a0 = '\0';
  }
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
    }
  }
  this_01 = pMStack_8;
  if (*(int *)(DAT_0081176c + 0x28) != 0) {
    pMVar7 = (MMObjTy *)(pMStack_8 + 0x1a7f);
    do {
      iVar2 = 0;
      bVar9 = 0;
      pCVar3 = FUN_006f2c00(s_MM_FLC_007cc938,2,iVar8);
      puVar4 = FUN_0071ad00(DAT_00806780,pCVar3,bVar9,iVar2);
      *(ushort **)pMVar7 = puVar4;
      iVar8 = iVar8 + 1;
      pMVar7 = pMVar7 + 4;
    } while (iVar8 < 10);
  }
  iVar2 = 0;
  do {
    if (*(int *)(this_01 + iVar2 * 4 + 0x1a7f) != 0) {
      puVar5 = Library::DKW::FLC::FUN_006c4a20(*(int *)(this_01 + iVar2 * 4 + 0x1a7f));
      *(undefined4 **)(this_01 + iVar2 * 4 + 0x1aa7) = puVar5;
      if (puVar5 != (undefined4 *)0x0) {
        switch(iVar2) {
        case 0:
          uVar10 = 0x5d;
          uVar6 = 0;
          break;
        case 1:
          uVar10 = 0x5d;
          uVar6 = 0x20f;
          break;
        case 2:
          uVar10 = 0x65;
          uVar6 = 0x104;
          break;
        case 3:
          uVar10 = 0xab;
          uVar6 = 0x104;
          break;
        case 4:
          uVar10 = 0x23;
          uVar6 = 0x2f5;
          break;
        case 5:
          uVar10 = 0x134;
          uVar6 = 0;
          break;
        case 6:
          uVar10 = 0x131;
          uVar6 = 0x275;
          break;
        case 7:
          uVar10 = 0x32;
          uVar6 = 0x5a;
          break;
        case 8:
          uVar10 = 0x39;
          uVar6 = 0x22c;
          break;
        case 9:
          uVar10 = 0x39;
          uVar6 = 0x2f5;
          break;
        default:
          goto switchD_005b2a8d_default;
        }
        FUN_006c4a00(puVar5,DAT_0080759c,uVar6,uVar10);
      }
    }
switchD_005b2a8d_default:
    iVar2 = iVar2 + 1;
    if (9 < iVar2) {
      MMObjTy::InitSprBut((MMObjTy *)this_01,(undefined4 *)(this_01 + 0x9b),s_MM_MBUT00_007cbd98,
                          0xf2,0x13a,7,8,0,0,0x9d,0x38,0x33,0x7cbda4,6,8,9,6,0x28,0,0,0,0,0,-1,-1);
      MMObjTy::InitSprBut((MMObjTy *)this_01,(undefined4 *)(this_01 + 0x296),s_MM_MBUT01_007cbd7c,
                          0x191,0x13a,9,8,0,0,0x9d,0x38,0x33,0x7cbd88,8,8,8,6,0x32,0,0,0,0,0,-1,-1);
      MMObjTy::InitSprBut((MMObjTy *)this_01,(undefined4 *)(this_01 + 0x491),s_MM_MBUT02_007cbd60,
                          0xf2,0x173,8,6,0,0,0x9d,0x38,0x33,0x7cbd6c,8,7,10,5,0x28,0,0,0,0,0,-1,-1);
      MMObjTy::InitSprBut((MMObjTy *)this_01,(undefined4 *)(this_01 + 0x68c),s_MM_MBUT03_007cbd44,
                          0x191,0x173,8,6,0,0,0x9d,0x38,0x33,0x7cbd50,8,7,8,5,0x32,0,0,0,0,0,-1,-1);
      MMObjTy::InitSprBut((MMObjTy *)this_01,(undefined4 *)(this_01 + 0x887),s_MM_MBUT04_007cbd28,
                          0x143,0x1ac,7,8,0,0,0x9d,0x38,0x33,0x7cbd34,8,9,9,6,0x32,0,0,0,0,0,-1,-1);
      uVar6 = FUN_0070a9f0(DAT_00806780,s_MM_BKG_007cc930,0,1);
      *(undefined4 *)(DAT_0081176c + 0x2c) = uVar6;
      thunk_FUN_0055dbf0(DAT_0080759c,1,0);
      if (*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
        MMsgTy::HidePanel(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),0,0,1);
        MMsgTy::ShowSprites(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6));
        *(undefined4 *)(*(int *)(*(int *)(this_01 + 0x1a5b) + 0x2e6) + 0x1cab) =
             *(undefined4 *)(this_01 + 8);
      }
      FUN_006bc360(*(int *)(DAT_0081176c + 0x2c),(undefined4 *)(this_01 + 0x1adf),(int *)0x0);
      this_00 = DAT_00802a30;
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        uVar6 = *(undefined4 *)(DAT_00802a30 + 0xc9);
        uVar10 = *(undefined4 *)(DAT_00802a30 + 0xc5);
        DAT_00802a30[0x493] = (CursorClassTy)0x1;
        *(undefined2 *)(this_00 + 0x494) = 0xffff;
        CursorClassTy::SetGCType(this_00,0,uVar10,uVar6);
        CursorClassTy::DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
        this_00[0xd2] = (CursorClassTy)0x0;
        *(undefined4 *)(this_00 + 0x4df) = 0xffffffff;
      }
      SetMode(this_01,param_1,1);
      thunk_FUN_00568bc0(&g_sound,0);
      if ((DAT_00807300._1_1_ & 8) != 0) {
        thunk_FUN_0056a130(&g_sound,0x10,'\x02',0,(uint *)0x0);
      }
      if (DAT_00808446 == '\0') {
        *(undefined4 *)(this_01 + 0x1a6b) = 2;
        *(undefined4 *)(this_01 + 0x1a67) = *(undefined4 *)(this_01 + 8);
        *(undefined4 *)(this_01 + 0x1a6f) = 0x6902;
      }
      g_currentExceptionFrame = IStack_4c.previous;
      return;
    }
  } while( true );
}

