#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::InitCampaign */

void __thiscall CampaignTy::InitCampaign(CampaignTy *this,undefined4 param_1)

{
  MMsgTy *this_00;
  CursorClassTy *this_01;
  CampaignTy *this_02;
  int iVar2;
  LPSTR pCVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  DWORD DVar6;
  int iVar16;
  int iVar7;
  int iVar8;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  undefined4 uVar15;
  int iVar17;
  undefined4 uVar18;
  undefined4 local_26c;
  undefined4 local_245;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_1a9;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_182;
  undefined4 local_175;
  undefined4 local_171;
  undefined4 local_16d;
  undefined4 local_169;
  undefined4 local_70 [7];
  InternalExceptionFrame local_54;
  CampaignTy *local_10;
  uint local_c;
  int local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_02 = local_10;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar16 = ReportDebugMessage("E:\\__titans\\Start\\camp_obj.cpp",0x7d,0,iVar2,"%s"
                                ,"CampaignTy::InitCampaign");
    if (iVar16 == 0) {
      RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\camp_obj.cpp",0x7d);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_10->field_1FFC = param_1;
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  if (g_startSystem_0081176C->field_0028 != 0) {
    local_8 = 100;
    puVar4 = &this_02->field_1A5F;
    do {
      local_c = 0xf;
      iVar7 = local_8;
      do {
        iVar17 = 0;
        bVar14 = 0;
        pCVar2 = FUN_006f2c00("CMPG_FLC",3,iVar7);
        puVar3 = Library::Ourlib::MFANY::mfAnyLoad(g_cMf32_00806780,pCVar2,bVar14,iVar17);
        *puVar4 = puVar3;
        puVar4 = puVar4 + 1;
        iVar7 = iVar7 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
      local_8 = local_8 + 100;
    } while (local_8 < 400);
    iVar7 = 0;
    puVar4 = &this_02->field_1BC7;
    local_c = 0;
    do {
      iVar17 = 0;
      bVar14 = 0;
      pCVar2 = FUN_006f2c00("CMPG_FONFLC",2,iVar7);
      puVar3 = Library::Ourlib::MFANY::mfAnyLoad(g_cMf32_00806780,pCVar2,bVar14,iVar17);
      *puVar4 = puVar3;
      iVar7 = iVar7 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar7 < 4);
  }
  iVar7 = 0;
  do {
    if (this_02->field_1BD7[iVar7 + -4] != 0) {
      puVar4 = Library::DKW::FLC::FUN_006c4a20(this_02->field_1BD7[iVar7 + -4]);
      this_02->field_1BD7[iVar7] = (uint)puVar4;
      if (puVar4 != nullptr) {
        switch(iVar7) {
        case 0:
          uVar18 = 7;
          uVar15 = 0;
          break;
        case 1:
          uVar18 = 0xb5;
          uVar15 = 0x54;
          break;
        case 2:
          uVar18 = 0xb5;
          uVar15 = 0x279;
          break;
        case 3:
          uVar18 = 7;
          uVar15 = 0x2cb;
          break;
        default:
          goto switchD_00590c7b_default;
        }
        FUN_006c4a00(puVar4,g_dDXContext_0080759C,uVar15,uVar18);
      }
    }
switchD_00590c7b_default:
    iVar7 = iVar7 + 1;
    if (3 < iVar7) {
      local_8 = 0;
      do {
        iVar7 = 0;
        local_c = local_8 * 0xf;
        do {
          if (local_8 == 0) {
LAB_00590d2d:
            iVar17 = local_c + iVar7;
            if ((&this_02->field_1A5F)[iVar17] != 0) {
              puVar4 = Library::DKW::FLC::FUN_006c4a20((&this_02->field_1A5F)[iVar17]);
              (&this_02->field_1B13)[iVar17] = puVar4;
            }
          }
          else if (local_8 == 1) {
            if (iVar7 < 0) {
LAB_00590d24:
              iVar17 = *(int *)(&this_02->field_0x1a9b + iVar7 * 4);
            }
            else {
              if (1 < iVar7) {
                if (iVar7 == 6) {
                  if (this_02->field_1AA7 != 0) {
                    puVar4 = Library::DKW::FLC::FUN_006c4a20(this_02->field_1AA7);
                    this_02->field_1B67 = puVar4;
                  }
                  goto LAB_00590d4c;
                }
                goto LAB_00590d24;
              }
              iVar17 = (&this_02->field_1A5F)[iVar7];
            }
            if (iVar17 != 0) {
              puVar4 = Library::DKW::FLC::FUN_006c4a20(iVar17);
              *(undefined4 **)(&this_02->field_0x1b4f + iVar7 * 4) = puVar4;
            }
          }
          else if (local_8 == 2) goto LAB_00590d2d;
LAB_00590d4c:
          puVar4 = (undefined4 *)(&this_02->field_1B13)[local_c + iVar7];
          if (puVar4 != nullptr) {
            if (local_8 == 2) {
              switch(iVar7) {
              case 0:
              case 5:
              case 10:
                puVar4 = (undefined4 *)this_02->field_1BD7[iVar7 + -0x13];
                uVar18 = 7;
                uVar15 = 0x54;
                break;
              case 1:
              case 6:
              case 0xb:
                puVar4 = (undefined4 *)this_02->field_1BD7[iVar7 + -0x13];
                uVar18 = 7;
                uVar15 = 0x279;
                break;
              case 2:
              case 7:
              case 0xc:
                puVar4 = (undefined4 *)this_02->field_1BD7[iVar7 + -0x13];
                uVar18 = 0x25;
                uVar15 = 0xa5;
                break;
              case 3:
              case 8:
              case 0xd:
                puVar4 = (undefined4 *)this_02->field_1BD7[iVar7 + -0x13];
                uVar18 = 0x25;
                uVar15 = 0x240;
                break;
              case 4:
              case 9:
              case 0xe:
                puVar4 = (undefined4 *)this_02->field_1BD7[iVar7 + -0x13];
                uVar18 = 0x37;
                uVar15 = 0xe0;
                break;
              default:
                goto switchD_00590d73_default;
              }
            }
            else {
              switch(iVar7) {
              case 0:
              case 8:
                uVar18 = 7;
                uVar15 = 0x54;
                break;
              case 1:
              case 9:
                uVar18 = 7;
                uVar15 = 0x279;
                break;
              case 2:
              case 5:
              case 10:
                uVar18 = 0x25;
                uVar15 = 0xa5;
                break;
              case 3:
              case 6:
              case 0xb:
                uVar18 = 0x25;
                uVar15 = 0x240;
                break;
              case 4:
              case 7:
              case 0xc:
                uVar18 = 0x37;
                uVar15 = 0xe0;
                break;
              default:
                goto switchD_00590d73_default;
              }
            }
            FUN_006c4a00(puVar4,g_dDXContext_0080759C,uVar15,uVar18);
          }
switchD_00590d73_default:
          iVar7 = iVar7 + 1;
        } while (iVar7 < 0xf);
        local_8 = local_8 + 1;
        if (2 < local_8) {
          MMObjTy::InitSprBut((MMObjTy *)this_02,
                              (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_0x9b,
                              "MM_MBUT00",0xf2,0x13a,7,8,0,0,0x9d,0x38,10,
                              "MM_MABUT00",6,8,9,6,0x28,0,nullptr,0,0,0,-1,-1);
          MMObjTy::InitSprBut((MMObjTy *)this_02,
                              (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_0x296,
                              "MM_MBUT01",0x191,0x13a,9,8,0,0,0x9d,0x38,10,
                              "MM_MABUT01",8,8,8,6,0x32,0,nullptr,0,0,0,-1,-1);
          MMObjTy::InitSprBut((MMObjTy *)this_02,
                              (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_0x491,
                              "MM_MBUT02",0xf2,0x173,8,6,0,0,0x9d,0x38,10,
                              "MM_MABUT02",8,7,10,5,0x28,0,nullptr,0,0,0,-1,-1);
          MMObjTy::InitSprBut((MMObjTy *)this_02,
                              (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_0x68c,
                              "MM_MBUT03",0x191,0x173,8,6,0,0,0x9d,0x38,10,
                              "MM_MABUT03",8,7,8,5,0x32,0,nullptr,0,0,0,-1,-1);
          MMObjTy::InitSprBut((MMObjTy *)this_02,
                              (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_0x887,
                              "MM_MBUT04",0x143,0x1ac,7,8,0,0,0x9d,0x38,10,
                              "MM_MABUT04",8,9,9,6,0x32,0,nullptr,0,0,0,-1,-1);
          if (DAT_0080874e == 0) {
            DAT_0080874e = 1;
          }
          this_02->field_1BE8 = (uint)DAT_0080874e * 3 - CASE_3;
          puVar3 = FUN_0070a9f0(g_cMf32_00806780,"CMPGN_BKG",0,1);
          g_startSystem_0081176C->field_002C = puVar3;
          DarkScreen(g_dDXContext_0080759C,1,0);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          this_00 = *(MMsgTy **)(this_02->field_1A5B + 0x2e6);
          if (this_00 != nullptr) {
            MMsgTy::HidePanel(this_00,0,0,1);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            MMsgTy::ShowSprites(*(MMsgTy **)(this_02->field_1A5B + 0x2e6));
            *(undefined4 *)(*(int *)(this_02->field_1A5B + 0x2e6) + 0x1cab) = this_02->field_0008;
          }
          FUN_006bc360(g_startSystem_0081176C->field_002C,(undefined4 *)&this_02->field_0x1bf8,
                       nullptr);
          this_01 = g_cursorClass_00802A30;
          if (g_cursorClass_00802A30 != nullptr) {
            iVar7 = g_cursorClass_00802A30->field_00C9;
            iVar17 = g_cursorClass_00802A30->field_00C5;
            g_cursorClass_00802A30->field_0493 = CASE_1;
            this_01->field_0494 = 0xffff;
            CursorClassTy::SetGCType(this_01,CASE_0,iVar17,iVar7);
            CursorClassTy::DrawSprite(this_01,this_01->field_00C5,this_01->field_00C9);
            this_01->field_00D2 = 0;
            this_01->field_04DF = -1;
          }
          uVar18 = 0xffffffff;
          uVar15 = 7;
          iVar13 = -1;
          iVar7 = this_02->field_056A;
          iVar12 = -1;
          iVar11 = 1;
          uVar10 = 0xffffffff;
          this_02->field_009A = 5;
          this_02->field_04B2 = 0x23f1;
          cVar9 = CASE_FFFFFFFE;
          iVar8 = 0x28;
          iVar17 = 0x8c;
          puVar5 = (uint *)LoadResourceString(0x23f1,g_hINSTANCE_00807618);
          puVar4 = ccFntTy::CreateTypeSSpr
                             (g_startSystem_0081176C->field_0030,puVar5,iVar17,iVar8,cVar9,uVar10,
                              iVar11,iVar12,iVar13);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(iVar7 + 8))(puVar4,uVar15,uVar18);
          uVar18 = 0xffffffff;
          uVar15 = 7;
          iVar13 = -1;
          iVar7 = this_02->field_0765;
          iVar12 = -1;
          iVar11 = 1;
          uVar10 = 0xffffffff;
          this_02->field_06AD = 0x23f0;
          cVar9 = CASE_FFFFFFFE;
          iVar8 = 0x28;
          iVar17 = 0x8c;
          puVar5 = (uint *)LoadResourceString(0x23f0,g_hINSTANCE_00807618);
          puVar4 = ccFntTy::CreateTypeSSpr
                             (g_startSystem_0081176C->field_0030,puVar5,iVar17,iVar8,cVar9,uVar10,
                              iVar11,iVar12,iVar13);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(iVar7 + 8))(puVar4,uVar15,uVar18);
          uVar18 = 0xffffffff;
          uVar15 = 7;
          iVar13 = -1;
          iVar7 = this_02->field_0960;
          iVar12 = -1;
          iVar11 = 1;
          uVar10 = 0xffffffff;
          this_02->field_08A8 = 0x23f2;
          cVar9 = CASE_FFFFFFFE;
          iVar8 = 0x28;
          iVar17 = 0x8c;
          puVar5 = (uint *)LoadResourceString(0x23f2,g_hINSTANCE_00807618);
          puVar4 = ccFntTy::CreateTypeSSpr
                             (g_startSystem_0081176C->field_0030,puVar5,iVar17,iVar8,cVar9,uVar10,
                              iVar11,iVar12,iVar13);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(iVar7 + 8))(puVar4,uVar15,uVar18);
          PaintCampaign(this_02);
          iVar7 = 0;
          if (this_02->field_009A != '\0') {
            local_c = 0;
            puVar5 = &this_02->field_0123;
            do {
              DVar6 = timeGetTime();
              puVar5[1] = DVar6;
              *puVar5 = local_c;
              local_c = local_c + 0x96;
              iVar7 = iVar7 + 1;
              puVar5 = (uint *)((int)puVar5 + 0x1fb);
            } while (iVar7 < (int)(uint)(byte)this_02->field_009A);
          }
          this_02->field_0065 = 3;
          thunk_FUN_005b6730(this_02,1,'\0',-1);
          this_02->field_1BF0 = this_02->field_0061;
          iVar7 = this_02->field_1A5B;
          puVar4 = &local_26c;
          memset(puVar4, 0, 0x1fb); /* compiler bulk-zero initialization */
          puVar4 = (undefined4 *)((byte *)puVar4 + 0x1f8);
          iVar17 = 0;
          local_238 = this_02->field_0008;
          this_02->field_1BEC = 1;
          this_02->field_1BF4 = 0;
          local_1a9 = 0x2340;
          local_198 = 2;
          local_194 = 0x6943;
          local_182 = 0x24bc;
          local_171 = 2;
          local_16d = 0x6943;
          local_169 = 1;
          local_245 = 0x2343;
          local_234 = 2;
          local_230 = 0x694a;
          local_19c = local_238;
          local_175 = local_238;
          if (*(int *)(iVar7 + 0x2e6) != 0) {
            puVar4 = local_70;
            for (iVar17 = 6; iVar17 != 0; iVar17 = iVar17 + -1) {
              *puVar4 = 0xffffffff;
              puVar4 = puVar4 + 1;
            }
            *(undefined2 *)puVar4 = 0xffff;
            MMsgTy::SetPanel(*(MMsgTy **)(iVar7 + 0x2e6),0,(int)&local_26c,0,0);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            MMsgTy::StatePanel(*(MMsgTy **)(this_02->field_1A5B + 0x2e6),(int)local_70);
          }
          thunk_FUN_00568bc0(&g_sound,0);
          if ((STPiece<1,1>(DAT_00807300) & 8) != 0) {
            thunk_FUN_0056a130(&g_sound,0x12,'\x02',0,nullptr);
          }
          thunk_FUN_00568bc0(&g_sound,1);
          if (DAT_0080874e == 1) {
            thunk_FUN_005b6730(this_02,0x15,'\0',1);
            thunk_FUN_005b6730(this_02,0x18,'\x02',1);
          }
          else {
            if (DAT_0080874e == 2) {
              thunk_FUN_005b6730(this_02,0x16,'\0',1);
              thunk_FUN_005b6730(this_02,0x19,'\x02',1);
              g_currentExceptionFrame = local_54.previous;
              return;
            }
            if (DAT_0080874e == 3) {
              thunk_FUN_005b6730(this_02,0x17,'\0',1);
              thunk_FUN_005b6730(this_02,0x1a,'\x02',1);
              g_currentExceptionFrame = local_54.previous;
              return;
            }
          }
          g_currentExceptionFrame = local_54.previous;
          return;
        }
      } while( true );
    }
  } while( true );
}

