#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::InitMainMenu */

void __thiscall MainMenuTy::InitMainMenu(MainMenuTy *this,char param_1)

{
  code *pcVar1;
  CursorClassTy *this_00;
  MainMenuTy *this_01;
  int iVar2;
  LPSTR pCVar3;
  ushort *puVar4;
  AnonPointee_MainMenuTy_1AA7 *pAVar5;
  ccFntTy *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  InternalExceptionFrame local_4c;
  MainMenuTy *local_8;

  iVar8 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Start\\main_obj.cpp",0x48,0,iVar2,"%s",
                               "MainMenuTy::InitMainMenu");
    if (iVar8 == 0) {
      RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\main_obj.cpp",0x48);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  StartSystemTy::sub_005DAF20(PTR_0081176c);
  DAT_0080877e = 1;
  DAT_0080877f = 0;
  if (DAT_008067a0 != '\0') {
    CFsgsConnection::CloseGame((CFsgsConnection *)&DAT_00802a90);
    CFsgsConnection::CancelConnection((CFsgsConnection *)&DAT_00802a90);
    DAT_00802a99 = 0;
    DAT_008067a0 = '\0';
  }
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
    }
    else if (PTR_00802a30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)PTR_00802a30->field_0060,PTR_00802a30->field_001C);
    }
  }
  this_01 = local_8;
  if (PTR_0081176c->field_0028 != 0) {
    puVar7 = &local_8->field_1A7F;
    do {
      iVar2 = 0;
      bVar9 = 0;
      pCVar3 = FUN_006f2c00("MM_FLC",2,iVar8);
      puVar4 = Library::Ourlib::MFANY::mfAnyLoad(g_cMf32_00806780,pCVar3,bVar9,iVar2);
      *puVar7 = puVar4;
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar8 < 10);
  }
  iVar2 = 0;
  do {
    if ((&this_01->field_1A7F)[iVar2] != 0) {
      pAVar5 = (AnonPointee_MainMenuTy_1AA7 *)
               Library::DKW::FLC::FUN_006c4a20((&this_01->field_1A7F)[iVar2]);
      (&this_01->field_1AA7)[iVar2] = pAVar5;
      if (pAVar5 != (AnonPointee_MainMenuTy_1AA7 *)0x0) {
        switch(iVar2) {
        case 0:
          uVar11 = 0x5d;
          uVar10 = 0;
          break;
        case 1:
          uVar11 = 0x5d;
          uVar10 = 0x20f;
          break;
        case 2:
          uVar11 = 0x65;
          uVar10 = 0x104;
          break;
        case 3:
          uVar11 = 0xab;
          uVar10 = 0x104;
          break;
        case 4:
          uVar11 = 0x23;
          uVar10 = 0x2f5;
          break;
        case 5:
          uVar11 = 0x134;
          uVar10 = 0;
          break;
        case 6:
          uVar11 = 0x131;
          uVar10 = 0x275;
          break;
        case 7:
          uVar11 = 0x32;
          uVar10 = 0x5a;
          break;
        case 8:
          uVar11 = 0x39;
          uVar10 = 0x22c;
          break;
        case 9:
          uVar11 = 0x39;
          uVar10 = 0x2f5;
          break;
        default:
          goto switchD_005b2a8d_default;
        }
        FUN_006c4a00((undefined4 *)pAVar5,DAT_0080759c,uVar10,uVar11);
      }
    }
switchD_005b2a8d_default:
    iVar2 = iVar2 + 1;
    if (9 < iVar2) {
      MMObjTy::InitSprBut((MMObjTy *)this_01,(AnonShape_005B5240_B2C8755B *)&this_01->field_0x9b,
                          "MM_MBUT00",0xf2,0x13a,7,8,0,0,0x9d,0x38,0x33,
                          "MM_MABUT00",6,8,9,6,0x28,0,(ccFntTy *)0x0,0,0,0,-1,-1);
      MMObjTy::InitSprBut((MMObjTy *)this_01,(AnonShape_005B5240_B2C8755B *)&this_01->field_0x296,
                          "MM_MBUT01",0x191,0x13a,9,8,0,0,0x9d,0x38,0x33,
                          "MM_MABUT01",8,8,8,6,0x32,0,(ccFntTy *)0x0,0,0,0,-1,-1);
      MMObjTy::InitSprBut((MMObjTy *)this_01,(AnonShape_005B5240_B2C8755B *)&this_01->field_0x491,
                          "MM_MBUT02",0xf2,0x173,8,6,0,0,0x9d,0x38,0x33,
                          "MM_MABUT02",8,7,10,5,0x28,0,(ccFntTy *)0x0,0,0,0,-1,-1);
      MMObjTy::InitSprBut((MMObjTy *)this_01,(AnonShape_005B5240_B2C8755B *)&this_01->field_0x68c,
                          "MM_MBUT03",0x191,0x173,8,6,0,0,0x9d,0x38,0x33,
                          "MM_MABUT03",8,7,8,5,0x32,0,(ccFntTy *)0x0,0,0,0,-1,-1);
      MMObjTy::InitSprBut((MMObjTy *)this_01,(AnonShape_005B5240_B2C8755B *)&this_01->field_0x887,
                          "MM_MBUT04",0x143,0x1ac,7,8,0,0,0x9d,0x38,0x33,
                          "MM_MABUT04",8,9,9,6,0x32,0,(ccFntTy *)0x0,0,0,0,-1,-1);
      pcVar6 = (ccFntTy *)FUN_0070a9f0(g_cMf32_00806780,"MM_BKG",0,1);
      PTR_0081176c->field_002C = pcVar6;
      DarkScreen(DAT_0080759c,1,0);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(MMsgTy **)(this_01->field_1A5B + 0x2e6) != (MMsgTy *)0x0) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        MMsgTy::HidePanel(*(MMsgTy **)(this_01->field_1A5B + 0x2e6),0,0,1);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        MMsgTy::ShowSprites(*(MMsgTy **)(this_01->field_1A5B + 0x2e6));
        *(undefined4 *)(*(int *)(this_01->field_1A5B + 0x2e6) + 0x1cab) = this_01->field_0008;
      }
      FUN_006bc360((ushort *)PTR_0081176c->field_002C,(undefined4 *)&this_01->field_0x1adf,
                   (int *)0x0);
      this_00 = PTR_00802a30;
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        iVar2 = PTR_00802a30->field_00C9;
        iVar8 = PTR_00802a30->field_00C5;
        PTR_00802a30->field_0493 = 1;
        this_00->field_0494 = 0xffff;
        CursorClassTy::SetGCType(this_00,CASE_0,iVar8,iVar2);
        CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
        this_00->field_00D2 = 0;
        this_00->field_04DF = 0xffffffff;
      }
      SetMode(this_01,param_1,1);
      thunk_FUN_00568bc0(&g_sound,0);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if ((DAT_00807300._1_1_ & 8) != 0) {
        thunk_FUN_0056a130(&g_sound,0x10,'\x02',0,(uint *)0x0);
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

