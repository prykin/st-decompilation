#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::InitCampaign */

void __thiscall CampaignTy::InitCampaign(CampaignTy *this,undefined4 param_1)

{
  MMsgTy *this_00;
  SpriteClassTyVTable *pSVar1;
  CursorClassTy *this_01;
  CampaignTy *this_02;
  int iVar2;
  LPSTR pCVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  short *psVar7;
  DWORD DVar8;
  int iVar16;
  int iVar9;
  int *piVar10;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  byte bVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 uVar20;
  uint uVar21;
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
  int local_c;
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
    puVar5 = &this_02->field_00BB[0xc].field_01E0;
    do {
      local_c = 0xf;
      iVar9 = local_8;
      do {
        iVar19 = 0;
        bVar16 = 0;
        pCVar3 = FUN_006f2c00("CMPG_FLC",3,iVar9);
        puVar4 = Library::Ourlib::MFANY::mfAnyLoad(g_cMf32_00806780,pCVar3,bVar16,iVar19);
        *puVar5 = puVar4;
        puVar5 = puVar5 + 1;
        iVar9 = iVar9 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
      local_8 = local_8 + 100;
    } while (local_8 < 400);
    iVar9 = 0;
    puVar5 = &this_02->field_1BC7;
    local_c = 0;
    do {
      iVar19 = 0;
      bVar16 = 0;
      pCVar3 = FUN_006f2c00("CMPG_FONFLC",2,iVar9);
      puVar4 = Library::Ourlib::MFANY::mfAnyLoad(g_cMf32_00806780,pCVar3,bVar16,iVar19);
      *puVar5 = puVar4;
      iVar9 = iVar9 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar9 < 4);
  }
  iVar9 = 0;
  do {
    if (this_02->field_1BD7[iVar9 + -4] != 0) {
      puVar5 = Library::DKW::FLC::FUN_006c4a20(this_02->field_1BD7[iVar9 + -4]);
      this_02->field_1BD7[iVar9] = (uint)puVar5;
      if (puVar5 != nullptr) {
        switch(iVar9) {
        case 0:
          uVar20 = 7;
          uVar18 = 0;
          break;
        case 1:
          uVar20 = 0xb5;
          uVar18 = 0x54;
          break;
        case 2:
          uVar20 = 0xb5;
          uVar18 = 0x279;
          break;
        case 3:
          uVar20 = 7;
          uVar18 = 0x2cb;
          break;
        default:
          goto switchD_00590c7b_default;
        }
        FUN_006c4a00(puVar5,g_dDXContext_0080759C,uVar18,uVar20);
      }
    }
switchD_00590c7b_default:
    iVar9 = iVar9 + 1;
    if (3 < iVar9) {
      local_8 = 0;
      do {
        iVar9 = 0;
        local_c = local_8 * 0xf;
        do {
          if (local_8 == 0) {
LAB_00590d2d:
            iVar13 = local_c + iVar9;
            iVar19 = (&this_02->field_00BB[0xc].field_01E0)[iVar13];
            if (iVar19 != 0) {
              puVar5 = Library::DKW::FLC::FUN_006c4a20(iVar19);
              (&this_02->field_1B13)[iVar13] = puVar5;
            }
          }
          else if (local_8 == 1) {
            if (iVar9 < 0) {
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_00590d24:
              iVar19 = *(int *)((int)(this_02->field_00BB + 0xd) + iVar9 * 4 + 0x21);
            }
            else {
              if (1 < iVar9) {
                if (iVar9 == 6) {
                  if (this_02->field_1AA7 != 0) {
                    puVar5 = Library::DKW::FLC::FUN_006c4a20(this_02->field_1AA7);
                    this_02->field_1B67 = puVar5;
                  }
                  goto LAB_00590d4c;
                }
                goto LAB_00590d24;
              }
              iVar19 = (&this_02->field_00BB[0xc].field_01E0)[iVar9];
            }
            if (iVar19 != 0) {
              puVar5 = Library::DKW::FLC::FUN_006c4a20(iVar19);
              *(undefined4 **)(&this_02->field_0x1b4f + iVar9 * 4) = puVar5;
            }
          }
          else if (local_8 == 2) goto LAB_00590d2d;
LAB_00590d4c:
          puVar5 = (undefined4 *)(&this_02->field_1B13)[local_c + iVar9];
          if (puVar5 != nullptr) {
            if (local_8 == 2) {
              switch(iVar9) {
              case 0:
              case 5:
              case 10:
                puVar5 = (undefined4 *)this_02->field_1BD7[iVar9 + -0x13];
                uVar20 = 7;
                uVar18 = 0x54;
                break;
              case 1:
              case 6:
              case 0xb:
                puVar5 = (undefined4 *)this_02->field_1BD7[iVar9 + -0x13];
                uVar20 = 7;
                uVar18 = 0x279;
                break;
              case 2:
              case 7:
              case 0xc:
                puVar5 = (undefined4 *)this_02->field_1BD7[iVar9 + -0x13];
                uVar20 = 0x25;
                uVar18 = 0xa5;
                break;
              case 3:
              case 8:
              case 0xd:
                puVar5 = (undefined4 *)this_02->field_1BD7[iVar9 + -0x13];
                uVar20 = 0x25;
                uVar18 = 0x240;
                break;
              case 4:
              case 9:
              case 0xe:
                puVar5 = (undefined4 *)this_02->field_1BD7[iVar9 + -0x13];
                uVar20 = 0x37;
                uVar18 = 0xe0;
                break;
              default:
                goto switchD_00590d73_default;
              }
            }
            else {
              switch(iVar9) {
              case 0:
              case 8:
                uVar20 = 7;
                uVar18 = 0x54;
                break;
              case 1:
              case 9:
                uVar20 = 7;
                uVar18 = 0x279;
                break;
              case 2:
              case 5:
              case 10:
                uVar20 = 0x25;
                uVar18 = 0xa5;
                break;
              case 3:
              case 6:
              case 0xb:
                uVar20 = 0x25;
                uVar18 = 0x240;
                break;
              case 4:
              case 7:
              case 0xc:
                uVar20 = 0x37;
                uVar18 = 0xe0;
                break;
              default:
                goto switchD_00590d73_default;
              }
            }
            FUN_006c4a00(puVar5,g_dDXContext_0080759C,uVar18,uVar20);
          }
switchD_00590d73_default:
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0xf);
        local_8 = local_8 + 1;
        if (2 < local_8) {
          /* ST_CALLSITE[00590EA0]: CALL 0x00401992; direct=00401992 MMObjTy::InitSprBut */
          MMObjTy::InitSprBut((MMObjTy *)this_02,
                              (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_0x9b,
                              "MM_MBUT00",0xf2,0x13a,7,8,0,0,0x9d,0x38,10,
                              "MM_MABUT00",6,8,9,6,0x28,0,nullptr,0,0,0,-1,-1);
          /* ST_CALLSITE[00590EEB]: CALL 0x00401992; direct=00401992 MMObjTy::InitSprBut */
          MMObjTy::InitSprBut((MMObjTy *)this_02,
                              (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_00BB[0].field_01DB
                              ,"MM_MBUT01",0x191,0x13a,9,8,0,0,0x9d,0x38,10,
                              "MM_MABUT01",8,8,8,6,0x32,0,nullptr,0,0,0,-1,-1);
          /* ST_CALLSITE[00590F36]: CALL 0x00401992; direct=00401992 MMObjTy::InitSprBut */
          MMObjTy::InitSprBut((MMObjTy *)this_02,
                              (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_00BB[1].field_01DB
                              ,"MM_MBUT02",0xf2,0x173,8,6,0,0,0x9d,0x38,10,
                              "MM_MABUT02",8,7,10,5,0x28,0,nullptr,0,0,0,-1,-1);
          /* ST_CALLSITE[00590F81]: CALL 0x00401992; direct=00401992 MMObjTy::InitSprBut */
          MMObjTy::InitSprBut((MMObjTy *)this_02,
                              (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_00BB[2].field_01DB
                              ,"MM_MBUT03",0x191,0x173,8,6,0,0,0x9d,0x38,10,
                              "MM_MABUT03",8,7,8,5,0x32,0,nullptr,0,0,0,-1,-1);
          /* ST_CALLSITE[00590FCC]: CALL 0x00401992; direct=00401992 MMObjTy::InitSprBut */
          MMObjTy::InitSprBut((MMObjTy *)this_02,
                              (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_00BB[3].field_01DB
                              ,"MM_MBUT04",0x143,0x1ac,7,8,0,0,0x9d,0x38,10,
                              "MM_MABUT04",8,9,9,6,0x32,0,nullptr,0,0,0,-1,-1);
          if (DAT_0080874e == 0) {
            DAT_0080874e = 1;
          }
          this_02->field_1BE8 = (uint)DAT_0080874e * 3 - CASE_3;
          puVar4 = FUN_0070a9f0(g_cMf32_00806780,"CMPGN_BKG",0,1);
          g_startSystem_0081176C->field_002C = puVar4;
          /* ST_CALLSITE[00591019]: CALL 0x00401d43; direct=00401D43 DarkScreen */
          DarkScreen(g_dDXContext_0080759C,1,0);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          this_00 = *(MMsgTy **)(this_02->field_00BB[0xc].field_01DC + 0x2e6);
          if (this_00 != nullptr) {
            /* ST_CALLSITE[00591037]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
            MMsgTy::HidePanel(this_00,0,0,1);
            /* ST_CALLSITE[00591048]: CALL 0x00405191; direct=00405191 MMsgTy::ShowSprites */
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            MMsgTy::ShowSprites(*(MMsgTy **)(this_02->field_00BB[0xc].field_01DC + 0x2e6));
            *(undefined4 *)(*(int *)(this_02->field_00BB[0xc].field_01DC + 0x2e6) + 0x1cab) =
                 this_02->field_0008;
          }
          FUN_006bc360(g_startSystem_0081176C->field_002C,(undefined4 *)&this_02->field_0x1bf8,
                       nullptr);
          this_01 = g_cursorClass_00802A30;
          if (g_cursorClass_00802A30 != nullptr) {
            iVar9 = g_cursorClass_00802A30->field_00C9;
            iVar19 = g_cursorClass_00802A30->field_00C5;
            g_cursorClass_00802A30->field_0493 = CASE_1;
            this_01->field_0494 = 0xffff;
            /* ST_CALLSITE[005910A5]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
            CursorClassTy::SetGCType(this_01,CASE_0,iVar19,iVar9);
            /* ST_CALLSITE[005910BA]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
            CursorClassTy::DrawSprite(this_01,this_01->field_00C5,this_01->field_00C9);
            this_01->field_00D2 = 0;
            this_01->field_04DF = -1;
          }
          uVar21 = 0xffffffff;
          uVar17 = 7;
          iVar15 = -1;
          pSVar1 = this_02->field_00BB[2].field_00B9.vtable;
          iVar14 = -1;
          iVar13 = 1;
          uVar12 = 0xffffffff;
          this_02->field_009A = 5;
          this_02->field_00BB[2].field_0001 = 0x23f1;
          cVar11 = CASE_FFFFFFFE;
          iVar19 = 0x28;
          iVar9 = 0x8c;
          puVar6 = (uint *)LoadResourceString(0x23f1,g_hINSTANCE_00807618);
          psVar7 = (short *)ccFntTy::CreateTypeSSpr
                                      (g_startSystem_0081176C->field_0030,puVar6,iVar9,iVar19,cVar11
                                       ,uVar12,iVar13,iVar14,iVar15);
          /* ST_CALLSITE[00591124]: CALL dword ptr [EBX + 0x8] */
          (*pSVar1->SetImagesPtr)(&this_02->field_00BB[2].field_00B9,psVar7,uVar17,uVar21);
          uVar21 = 0xffffffff;
          uVar17 = 7;
          iVar15 = -1;
          pSVar1 = this_02->field_00BB[3].field_00B9.vtable;
          iVar14 = -1;
          iVar13 = 1;
          uVar12 = 0xffffffff;
          this_02->field_00BB[3].field_0001 = 0x23f0;
          cVar11 = CASE_FFFFFFFE;
          iVar19 = 0x28;
          iVar9 = 0x8c;
          puVar6 = (uint *)LoadResourceString(0x23f0,g_hINSTANCE_00807618);
          psVar7 = (short *)ccFntTy::CreateTypeSSpr
                                      (g_startSystem_0081176C->field_0030,puVar6,iVar9,iVar19,cVar11
                                       ,uVar12,iVar13,iVar14,iVar15);
          /* ST_CALLSITE[00591174]: CALL dword ptr [EBX + 0x8] */
          (*pSVar1->SetImagesPtr)(&this_02->field_00BB[3].field_00B9,psVar7,uVar17,uVar21);
          uVar21 = 0xffffffff;
          uVar17 = 7;
          iVar15 = -1;
          pSVar1 = this_02->field_00BB[4].field_00B9.vtable;
          iVar14 = -1;
          iVar13 = 1;
          uVar12 = 0xffffffff;
          this_02->field_00BB[4].field_0001 = 0x23f2;
          cVar11 = CASE_FFFFFFFE;
          iVar19 = 0x28;
          iVar9 = 0x8c;
          puVar6 = (uint *)LoadResourceString(0x23f2,g_hINSTANCE_00807618);
          psVar7 = (short *)ccFntTy::CreateTypeSSpr
                                      (g_startSystem_0081176C->field_0030,puVar6,iVar9,iVar19,cVar11
                                       ,uVar12,iVar13,iVar14,iVar15);
          /* ST_CALLSITE[005911C5]: CALL dword ptr [EBX + 0x8] */
          (*pSVar1->SetImagesPtr)(&this_02->field_00BB[4].field_00B9,psVar7,uVar17,uVar21);
          /* ST_CALLSITE[005911CA]: CALL 0x00401a5f; direct=00401A5F CampaignTy::PaintCampaign */
          PaintCampaign(this_02);
          iVar9 = 0;
          if (this_02->field_009A != '\0') {
            local_c = 0;
            piVar10 = &this_02->field_00BB[0].field_0028.field_0040;
            do {
              /* ST_CALLSITE[005911E4]: CALL dword ptr [0x0085bedc] */
              DVar8 = timeGetTime();
              piVar10[1] = DVar8;
              *piVar10 = local_c;
              local_c = local_c + 0x96;
              iVar9 = iVar9 + 1;
              piVar10 = (int *)((int)piVar10 + 0x1fb);
            } while (iVar9 < (int)(uint)(byte)this_02->field_009A);
          }
          this_02->field_0065 = 3;
          thunk_FUN_005b6730(this_02,1,'\0',-1);
          this_02->field_1BF0 = this_02->field_0061;
          iVar9 = this_02->field_00BB[0xc].field_01DC;
          puVar5 = &local_26c;
          memset(puVar5, 0, 0x1fb); /* compiler bulk-zero initialization */
          puVar5 = (undefined4 *)((byte *)puVar5 + 0x1f8);
          iVar19 = 0;
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
          if (*(int *)(iVar9 + 0x2e6) != 0) {
            puVar5 = local_70;
            for (iVar19 = 6; iVar19 != 0; iVar19 = iVar19 + -1) {
              *puVar5 = 0xffffffff;
              puVar5 = puVar5 + 1;
            }
            *(undefined2 *)puVar5 = 0xffff;
            /* ST_CALLSITE[005912EE]: CALL 0x00401717; direct=00401717 MMsgTy::SetPanel */
            MMsgTy::SetPanel(*(MMsgTy **)(iVar9 + 0x2e6),0,(int)&local_26c,0,0);
            /* ST_CALLSITE[00591303]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            MMsgTy::StatePanel(*(MMsgTy **)(this_02->field_00BB[0xc].field_01DC + 0x2e6),
                               (int)local_70);
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

