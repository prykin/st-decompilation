#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::InitMainMenu */

void __thiscall MainMenuTy::InitMainMenu(MainMenuTy *this,char param_1)

{
  CursorClassTy *this_00;
  MainMenuTy *this_01;
  int iVar2;
  LPSTR pCVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  int iVar6;
  int iVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  InternalExceptionFrame local_4c;
  MainMenuTy *local_8;

  iVar5 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Start\\main_obj.cpp",0x48,0,iVar2,"%s",
                               "MainMenuTy::InitMainMenu");
    if (iVar6 == 0) {
      RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\main_obj.cpp",0x48);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  StartSystemTy::sub_005DAF20(g_startSystem_0081176C);
  DAT_0080877e = 1;
  DAT_0080877f = 0;
  if (DAT_008067a0 != '\0') {
    CFsgsConnection::CloseGame((CFsgsConnection *)&DAT_00802a90);
    CFsgsConnection::CancelConnection((CFsgsConnection *)&DAT_00802a90);
    DAT_00802a99 = 0;
    DAT_008067a0 = '\0';
  }
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  this_01 = local_8;
  if (g_startSystem_0081176C->field_0028 != 0) {
    puVar4 = &local_8->field_1A7F;
    do {
      iVar8 = 0;
      bVar6 = 0;
      pCVar2 = FUN_006f2c00("MM_FLC",2,iVar5);
      puVar3 = Library::Ourlib::MFANY::mfAnyLoad(g_cMf32_00806780,pCVar2,bVar6,iVar8);
      *puVar4 = puVar3;
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar5 < 10);
  }
  iVar5 = 0;
  do {
    if (this_01->field_1AA7[iVar5 + -10] != 0) {
      puVar4 = Library::DKW::FLC::FUN_006c4a20(this_01->field_1AA7[iVar5 + -10]);
      this_01->field_1AA7[iVar5] = (uint)puVar4;
      if (puVar4 != nullptr) {
        switch(iVar5) {
        case 0:
          uVar9 = 0x5d;
          uVar7 = 0;
          break;
        case 1:
          uVar9 = 0x5d;
          uVar7 = 0x20f;
          break;
        case 2:
          uVar9 = 0x65;
          uVar7 = 0x104;
          break;
        case 3:
          uVar9 = 0xab;
          uVar7 = 0x104;
          break;
        case 4:
          uVar9 = 0x23;
          uVar7 = 0x2f5;
          break;
        case 5:
          uVar9 = 0x134;
          uVar7 = 0;
          break;
        case 6:
          uVar9 = 0x131;
          uVar7 = 0x275;
          break;
        case 7:
          uVar9 = 0x32;
          uVar7 = 0x5a;
          break;
        case 8:
          uVar9 = 0x39;
          uVar7 = 0x22c;
          break;
        case 9:
          uVar9 = 0x39;
          uVar7 = 0x2f5;
          break;
        default:
          goto switchD_005b2a8d_default;
        }
        FUN_006c4a00(puVar4,g_dDXContext_0080759C,uVar7,uVar9);
      }
    }
switchD_005b2a8d_default:
    iVar5 = iVar5 + 1;
    if (9 < iVar5) {
      MMObjTy::InitSprBut((MMObjTy *)this_01,
                          (RecoveredRecord_MMObjTy_005B5240 *)&this_01->field_0x9b,
                          "MM_MBUT00",0xf2,0x13a,7,8,0,0,0x9d,0x38,0x33,
                          "MM_MABUT00",6,8,9,6,0x28,0,nullptr,0,0,0,-1,-1);
      MMObjTy::InitSprBut((MMObjTy *)this_01,
                          (RecoveredRecord_MMObjTy_005B5240 *)&this_01->field_0x296,
                          "MM_MBUT01",0x191,0x13a,9,8,0,0,0x9d,0x38,0x33,
                          "MM_MABUT01",8,8,8,6,0x32,0,nullptr,0,0,0,-1,-1);
      MMObjTy::InitSprBut((MMObjTy *)this_01,
                          (RecoveredRecord_MMObjTy_005B5240 *)&this_01->field_0x491,
                          "MM_MBUT02",0xf2,0x173,8,6,0,0,0x9d,0x38,0x33,
                          "MM_MABUT02",8,7,10,5,0x28,0,nullptr,0,0,0,-1,-1);
      MMObjTy::InitSprBut((MMObjTy *)this_01,
                          (RecoveredRecord_MMObjTy_005B5240 *)&this_01->field_0x68c,
                          "MM_MBUT03",0x191,0x173,8,6,0,0,0x9d,0x38,0x33,
                          "MM_MABUT03",8,7,8,5,0x32,0,nullptr,0,0,0,-1,-1);
      MMObjTy::InitSprBut((MMObjTy *)this_01,
                          (RecoveredRecord_MMObjTy_005B5240 *)&this_01->field_0x887,
                          "MM_MBUT04",0x143,0x1ac,7,8,0,0,0x9d,0x38,0x33,
                          "MM_MABUT04",8,9,9,6,0x32,0,nullptr,0,0,0,-1,-1);
      puVar3 = FUN_0070a9f0(g_cMf32_00806780,"MM_BKG",0,1);
      g_startSystem_0081176C->field_002C = puVar3;
      DarkScreen(g_dDXContext_0080759C,1,0);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(MMsgTy **)(this_01->field_1A5B + 0x2e6) != nullptr) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        MMsgTy::HidePanel(*(MMsgTy **)(this_01->field_1A5B + 0x2e6),0,0,1);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        MMsgTy::ShowSprites(*(MMsgTy **)(this_01->field_1A5B + 0x2e6));
        *(undefined4 *)(*(int *)(this_01->field_1A5B + 0x2e6) + 0x1cab) = this_01->field_0008;
      }
      FUN_006bc360(g_startSystem_0081176C->field_002C,(undefined4 *)&this_01->field_0x1adf,
                   nullptr);
      this_00 = g_cursorClass_00802A30;
      if (g_cursorClass_00802A30 != nullptr) {
        iVar5 = g_cursorClass_00802A30->field_00C9;
        iVar8 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_1;
        this_00->field_0494 = 0xffff;
        CursorClassTy::SetGCType(this_00,CASE_0,iVar8,iVar5);
        CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
        this_00->field_00D2 = 0;
        this_00->field_04DF = -1;
      }
      SetMode(this_01,param_1,1);
      thunk_FUN_00568bc0(&g_sound,0);
      if ((STPiece<1,1>(DAT_00807300) & 8) != 0) {
        thunk_FUN_0056a130(&g_sound,0x10,'\x02',0,nullptr);
      }
      if (DAT_00808446 == '\0') {
        this_01->field_1A6B = 2;
        this_01->field_1A67 = this_01->field_0008;
        this_01->field_1A6F = 0x6902;
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  } while( true );
}

