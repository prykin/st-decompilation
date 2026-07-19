
/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::InitMainMenu */

void __thiscall MainMenuTy::InitMainMenu(MainMenuTy *this,char param_1)

{
  MMsgTy *this_00;
  code *pcVar1;
  CursorClassTy *this_01;
  MainMenuTy *this_02;
  int iVar2;
  LPSTR pCVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar7;
  byte bVar8;
  undefined4 uVar9;
  InternalExceptionFrame local_4c;
  MainMenuTy *local_8;
  
  iVar7 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Start_main_obj_cpp_007cc8e8,0x48,0,iVar2,&DAT_007a4ccc,
                               s_MainMenuTy__InitMainMenu_007cc910);
    if (iVar7 == 0) {
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
    if (DAT_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)DAT_00802a30->field_00AD);
    }
    else if (DAT_00802a30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)DAT_00802a30->field_0060,DAT_00802a30->field_001C);
    }
  }
  this_02 = local_8;
  if (*(int *)(DAT_0081176c + 0x28) != 0) {
    puVar5 = &local_8->field_1A7F;
    do {
      iVar2 = 0;
      bVar8 = 0;
      pCVar3 = FUN_006f2c00(s_MM_FLC_007cc938,2,iVar7);
      puVar4 = Library::Ourlib::MFANY::mfAnyLoad(DAT_00806780,pCVar3,bVar8,iVar2);
      *puVar5 = puVar4;
      iVar7 = iVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar7 < 10);
  }
  iVar2 = 0;
  do {
    if ((&this_02->field_1A7F)[iVar2] != 0) {
      puVar5 = Library::DKW::FLC::FUN_006c4a20((&this_02->field_1A7F)[iVar2]);
      (&this_02->field_1AA7)[iVar2] = puVar5;
      if (puVar5 != (undefined4 *)0x0) {
        switch(iVar2) {
        case 0:
          uVar9 = 0x5d;
          uVar6 = 0;
          break;
        case 1:
          uVar9 = 0x5d;
          uVar6 = 0x20f;
          break;
        case 2:
          uVar9 = 0x65;
          uVar6 = 0x104;
          break;
        case 3:
          uVar9 = 0xab;
          uVar6 = 0x104;
          break;
        case 4:
          uVar9 = 0x23;
          uVar6 = 0x2f5;
          break;
        case 5:
          uVar9 = 0x134;
          uVar6 = 0;
          break;
        case 6:
          uVar9 = 0x131;
          uVar6 = 0x275;
          break;
        case 7:
          uVar9 = 0x32;
          uVar6 = 0x5a;
          break;
        case 8:
          uVar9 = 0x39;
          uVar6 = 0x22c;
          break;
        case 9:
          uVar9 = 0x39;
          uVar6 = 0x2f5;
          break;
        default:
          goto switchD_005b2a8d_default;
        }
        FUN_006c4a00(puVar5,DAT_0080759c,uVar6,uVar9);
      }
    }
switchD_005b2a8d_default:
    iVar2 = iVar2 + 1;
    if (9 < iVar2) {
      MMObjTy::InitSprBut((MMObjTy *)this_02,(undefined4 *)&this_02->field_0x9b,s_MM_MBUT00_007cbd98
                          ,0xf2,0x13a,7,8,0,0,0x9d,0x38,0x33,0x7cbda4,6,8,9,6,0x28,0,0,0,0,0,-1,-1);
      MMObjTy::InitSprBut((MMObjTy *)this_02,(undefined4 *)&this_02->field_0x296,
                          s_MM_MBUT01_007cbd7c,0x191,0x13a,9,8,0,0,0x9d,0x38,0x33,0x7cbd88,8,8,8,6,
                          0x32,0,0,0,0,0,-1,-1);
      MMObjTy::InitSprBut((MMObjTy *)this_02,(undefined4 *)&this_02->field_0x491,
                          s_MM_MBUT02_007cbd60,0xf2,0x173,8,6,0,0,0x9d,0x38,0x33,0x7cbd6c,8,7,10,5,
                          0x28,0,0,0,0,0,-1,-1);
      MMObjTy::InitSprBut((MMObjTy *)this_02,(undefined4 *)&this_02->field_0x68c,
                          s_MM_MBUT03_007cbd44,0x191,0x173,8,6,0,0,0x9d,0x38,0x33,0x7cbd50,8,7,8,5,
                          0x32,0,0,0,0,0,-1,-1);
      MMObjTy::InitSprBut((MMObjTy *)this_02,(undefined4 *)&this_02->field_0x887,
                          s_MM_MBUT04_007cbd28,0x143,0x1ac,7,8,0,0,0x9d,0x38,0x33,0x7cbd34,8,9,9,6,
                          0x32,0,0,0,0,0,-1,-1);
      uVar6 = FUN_0070a9f0(DAT_00806780,s_MM_BKG_007cc930,0,1);
      *(undefined4 *)(DAT_0081176c + 0x2c) = uVar6;
      DarkScreen(DAT_0080759c,1,0);
      this_00 = *(MMsgTy **)(this_02->field_1A5B + 0x2e6);
      if (this_00 != (MMsgTy *)0x0) {
        MMsgTy::HidePanel(this_00,0,0,1);
        MMsgTy::ShowSprites(*(MMsgTy **)(this_02->field_1A5B + 0x2e6));
        *(undefined4 *)(*(int *)(this_02->field_1A5B + 0x2e6) + 0x1cab) = this_02->field_0008;
      }
      FUN_006bc360(*(int *)(DAT_0081176c + 0x2c),(undefined4 *)&this_02->field_0x1adf,(int *)0x0);
      this_01 = DAT_00802a30;
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        uVar6 = DAT_00802a30->field_00C9;
        uVar9 = DAT_00802a30->field_00C5;
        DAT_00802a30->field_0493 = 1;
        this_01->field_0494 = 0xffff;
        CursorClassTy::SetGCType(this_01,CASE_0,uVar9,uVar6);
        CursorClassTy::DrawSprite(this_01,this_01->field_00C5,this_01->field_00C9);
        this_01->field_0xd2 = 0;
        *(undefined4 *)&this_01->field_0x4df = 0xffffffff;
      }
      SetMode(this_02,param_1,1);
      thunk_FUN_00568bc0(&g_sound,0);
      if ((DAT_00807300._1_1_ & 8) != 0) {
        thunk_FUN_0056a130(&g_sound,0x10,'\x02',0,(uint *)0x0);
      }
      if (DAT_00808446 == '\0') {
        this_02->field_1A6B = 2;
        this_02->field_1A67 = this_02->field_0008;
        this_02->field_1A6F = 0x6902;
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  } while( true );
}

