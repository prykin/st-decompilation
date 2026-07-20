
/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::InitCampaign */

void __thiscall CampaignTy::InitCampaign(CampaignTy *this,undefined4 param_1)

{
  MMsgTy *this_00;
  code *pcVar1;
  CursorClassTy *this_01;
  CampaignTy *this_02;
  int iVar2;
  LPSTR pCVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  DWORD DVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar9;
  int iVar10;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  byte bVar16;
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
  int local_c;
  int local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_02 = local_10;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar17 = ReportDebugMessage(s_E____titans_Start_camp_obj_cpp_007cbcd4,0x7d,0,iVar2,&DAT_007a4ccc
                                ,s_CampaignTy__InitCampaign_007cbcfc);
    if (iVar17 == 0) {
      RaiseInternalException(iVar2,0,s_E____titans_Start_camp_obj_cpp_007cbcd4,0x7d);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_10->field_1FFC = param_1;
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    if (DAT_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)DAT_00802a30->field_00AD);
    }
    else if (DAT_00802a30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)DAT_00802a30->field_0060,DAT_00802a30->field_001C);
    }
  }
  if (*(int *)(DAT_0081176c + 0x28) != 0) {
    local_8 = 100;
    puVar5 = &this_02->field_1A5F;
    do {
      local_c = 0xf;
      iVar2 = local_8;
      do {
        iVar17 = 0;
        bVar16 = 0;
        pCVar3 = FUN_006f2c00(s_CMPG_FLC_007cbdc4,3,iVar2);
        puVar4 = Library::Ourlib::MFANY::mfAnyLoad(g_cMf32_00806780,pCVar3,bVar16,iVar17);
        *puVar5 = puVar4;
        puVar5 = puVar5 + 1;
        iVar2 = iVar2 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
      local_8 = local_8 + 100;
    } while (local_8 < 400);
    iVar2 = 0;
    puVar5 = &this_02->field_1BC7;
    local_c = 0;
    do {
      iVar17 = 0;
      bVar16 = 0;
      pCVar3 = FUN_006f2c00(s_CMPG_FONFLC_007cbdb4,2,iVar2);
      puVar4 = Library::Ourlib::MFANY::mfAnyLoad(g_cMf32_00806780,pCVar3,bVar16,iVar17);
      *puVar5 = puVar4;
      iVar2 = iVar2 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar2 < 4);
  }
  iVar2 = 0;
  do {
    if ((&this_02->field_1BC7)[iVar2] != 0) {
      puVar5 = Library::DKW::FLC::FUN_006c4a20((&this_02->field_1BC7)[iVar2]);
      (&this_02->field_1BD7)[iVar2] = puVar5;
      if (puVar5 != (undefined4 *)0x0) {
        switch(iVar2) {
        case 0:
          uVar18 = 7;
          uVar6 = 0;
          break;
        case 1:
          uVar18 = 0xb5;
          uVar6 = 0x54;
          break;
        case 2:
          uVar18 = 0xb5;
          uVar6 = 0x279;
          break;
        case 3:
          uVar18 = 7;
          uVar6 = 0x2cb;
          break;
        default:
          goto switchD_00590c7b_default;
        }
        FUN_006c4a00(puVar5,DAT_0080759c,uVar6,uVar18);
      }
    }
switchD_00590c7b_default:
    iVar2 = iVar2 + 1;
    if (3 < iVar2) {
      local_8 = 0;
      do {
        iVar2 = 0;
        local_c = local_8 * 0xf;
        do {
          if (local_8 == 0) {
LAB_00590d2d:
            iVar17 = local_c + iVar2;
            if ((&this_02->field_1A5F)[iVar17] != 0) {
              puVar5 = Library::DKW::FLC::FUN_006c4a20((&this_02->field_1A5F)[iVar17]);
              (&this_02->field_1B13)[iVar17] = puVar5;
            }
          }
          else if (local_8 == 1) {
            if (iVar2 < 0) {
LAB_00590d24:
              iVar17 = *(int *)(&this_02->field_0x1a9b + iVar2 * 4);
            }
            else {
              if (1 < iVar2) {
                if (iVar2 == 6) {
                  if (this_02->field_1AA7 != 0) {
                    puVar5 = Library::DKW::FLC::FUN_006c4a20(this_02->field_1AA7);
                    this_02->field_1B67 = puVar5;
                  }
                  goto LAB_00590d4c;
                }
                goto LAB_00590d24;
              }
              iVar17 = (&this_02->field_1A5F)[iVar2];
            }
            if (iVar17 != 0) {
              puVar5 = Library::DKW::FLC::FUN_006c4a20(iVar17);
              *(undefined4 **)(&this_02->field_0x1b4f + iVar2 * 4) = puVar5;
            }
          }
          else if (local_8 == 2) goto LAB_00590d2d;
LAB_00590d4c:
          puVar5 = (undefined4 *)(&this_02->field_1B13)[local_c + iVar2];
          if (puVar5 != (undefined4 *)0x0) {
            if (local_8 == 2) {
              switch(iVar2) {
              case 0:
              case 5:
              case 10:
                puVar5 = *(undefined4 **)(&this_02->field_0x1b8b + iVar2 * 4);
                uVar18 = 7;
                uVar6 = 0x54;
                break;
              case 1:
              case 6:
              case 0xb:
                puVar5 = *(undefined4 **)(&this_02->field_0x1b8b + iVar2 * 4);
                uVar18 = 7;
                uVar6 = 0x279;
                break;
              case 2:
              case 7:
              case 0xc:
                puVar5 = *(undefined4 **)(&this_02->field_0x1b8b + iVar2 * 4);
                uVar18 = 0x25;
                uVar6 = 0xa5;
                break;
              case 3:
              case 8:
              case 0xd:
                puVar5 = *(undefined4 **)(&this_02->field_0x1b8b + iVar2 * 4);
                uVar18 = 0x25;
                uVar6 = 0x240;
                break;
              case 4:
              case 9:
              case 0xe:
                puVar5 = *(undefined4 **)(&this_02->field_0x1b8b + iVar2 * 4);
                uVar18 = 0x37;
                uVar6 = 0xe0;
                break;
              default:
                goto switchD_00590d73_default;
              }
            }
            else {
              switch(iVar2) {
              case 0:
              case 8:
                uVar18 = 7;
                uVar6 = 0x54;
                break;
              case 1:
              case 9:
                uVar18 = 7;
                uVar6 = 0x279;
                break;
              case 2:
              case 5:
              case 10:
                uVar18 = 0x25;
                uVar6 = 0xa5;
                break;
              case 3:
              case 6:
              case 0xb:
                uVar18 = 0x25;
                uVar6 = 0x240;
                break;
              case 4:
              case 7:
              case 0xc:
                uVar18 = 0x37;
                uVar6 = 0xe0;
                break;
              default:
                goto switchD_00590d73_default;
              }
            }
            FUN_006c4a00(puVar5,DAT_0080759c,uVar6,uVar18);
          }
switchD_00590d73_default:
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0xf);
        local_8 = local_8 + 1;
        if (2 < local_8) {
          MMObjTy::InitSprBut((MMObjTy *)this_02,(undefined4 *)&this_02->field_0x9b,
                              s_MM_MBUT00_007cbd98,0xf2,0x13a,7,8,0,0,0x9d,0x38,10,
                              s_MM_MABUT00_007cbda4,6,8,9,6,0x28,0,(ccFntTy *)0x0,0,0,0,-1,-1);
          MMObjTy::InitSprBut((MMObjTy *)this_02,(undefined4 *)&this_02->field_0x296,
                              s_MM_MBUT01_007cbd7c,0x191,0x13a,9,8,0,0,0x9d,0x38,10,
                              s_MM_MABUT01_007cbd88,8,8,8,6,0x32,0,(ccFntTy *)0x0,0,0,0,-1,-1);
          MMObjTy::InitSprBut((MMObjTy *)this_02,(undefined4 *)&this_02->field_0x491,
                              s_MM_MBUT02_007cbd60,0xf2,0x173,8,6,0,0,0x9d,0x38,10,
                              s_MM_MABUT02_007cbd6c,8,7,10,5,0x28,0,(ccFntTy *)0x0,0,0,0,-1,-1);
          MMObjTy::InitSprBut((MMObjTy *)this_02,(undefined4 *)&this_02->field_0x68c,
                              s_MM_MBUT03_007cbd44,0x191,0x173,8,6,0,0,0x9d,0x38,10,
                              s_MM_MABUT03_007cbd50,8,7,8,5,0x32,0,(ccFntTy *)0x0,0,0,0,-1,-1);
          MMObjTy::InitSprBut((MMObjTy *)this_02,(undefined4 *)&this_02->field_0x887,
                              s_MM_MBUT04_007cbd28,0x143,0x1ac,7,8,0,0,0x9d,0x38,10,
                              s_MM_MABUT04_007cbd34,8,9,9,6,0x32,0,(ccFntTy *)0x0,0,0,0,-1,-1);
          if (DAT_0080874e == 0) {
            DAT_0080874e = 1;
          }
          this_02->field_1BE8 = (uint)DAT_0080874e * 3 + -3;
          uVar6 = FUN_0070a9f0(g_cMf32_00806780,s_CMPGN_BKG_007cbd1c,0,1);
          *(undefined4 *)(DAT_0081176c + 0x2c) = uVar6;
          DarkScreen(DAT_0080759c,1,0);
          this_00 = *(MMsgTy **)(this_02->field_1A5B + 0x2e6);
          if (this_00 != (MMsgTy *)0x0) {
            MMsgTy::HidePanel(this_00,0,0,1);
            MMsgTy::ShowSprites(*(MMsgTy **)(this_02->field_1A5B + 0x2e6));
            *(undefined4 *)(*(int *)(this_02->field_1A5B + 0x2e6) + 0x1cab) = this_02->field_0008;
          }
          FUN_006bc360(*(ushort **)(DAT_0081176c + 0x2c),(undefined4 *)&this_02->field_0x1bf8,
                       (int *)0x0);
          this_01 = DAT_00802a30;
          if (DAT_00802a30 != (CursorClassTy *)0x0) {
            uVar6 = DAT_00802a30->field_00C9;
            uVar18 = DAT_00802a30->field_00C5;
            DAT_00802a30->field_0493 = 1;
            this_01->field_0494 = 0xffff;
            CursorClassTy::SetGCType(this_01,CASE_0,uVar18,uVar6);
            CursorClassTy::DrawSprite(this_01,this_01->field_00C5,this_01->field_00C9);
            this_01->field_0xd2 = 0;
            *(undefined4 *)&this_01->field_0x4df = 0xffffffff;
          }
          uVar18 = 0xffffffff;
          uVar6 = 7;
          iVar15 = -1;
          iVar2 = this_02->field_056A;
          iVar14 = -1;
          iVar13 = 1;
          uVar12 = 0xffffffff;
          this_02->field_009A = 5;
          this_02->field_04B2 = 0x23f1;
          cVar11 = CASE_FFFFFFFE;
          iVar10 = 0x28;
          iVar17 = 0x8c;
          puVar7 = (uint *)FUN_006b0140(0x23f1,HINSTANCE_00807618);
          puVar5 = ccFntTy::CreateTypeSSpr
                             (*(ccFntTy **)(DAT_0081176c + 0x30),puVar7,iVar17,iVar10,cVar11,uVar12,
                              iVar13,iVar14,iVar15);
          (**(code **)(iVar2 + 8))(puVar5,uVar6,uVar18);
          uVar18 = 0xffffffff;
          uVar6 = 7;
          iVar15 = -1;
          iVar2 = this_02->field_0765;
          iVar14 = -1;
          iVar13 = 1;
          uVar12 = 0xffffffff;
          this_02->field_06AD = 0x23f0;
          cVar11 = CASE_FFFFFFFE;
          iVar10 = 0x28;
          iVar17 = 0x8c;
          puVar7 = (uint *)FUN_006b0140(0x23f0,HINSTANCE_00807618);
          puVar5 = ccFntTy::CreateTypeSSpr
                             (*(ccFntTy **)(DAT_0081176c + 0x30),puVar7,iVar17,iVar10,cVar11,uVar12,
                              iVar13,iVar14,iVar15);
          (**(code **)(iVar2 + 8))(puVar5,uVar6,uVar18);
          uVar18 = 0xffffffff;
          uVar6 = 7;
          iVar15 = -1;
          iVar2 = this_02->field_0960;
          iVar14 = -1;
          iVar13 = 1;
          uVar12 = 0xffffffff;
          this_02->field_08A8 = 0x23f2;
          cVar11 = CASE_FFFFFFFE;
          iVar10 = 0x28;
          iVar17 = 0x8c;
          puVar7 = (uint *)FUN_006b0140(0x23f2,HINSTANCE_00807618);
          puVar5 = ccFntTy::CreateTypeSSpr
                             (*(ccFntTy **)(DAT_0081176c + 0x30),puVar7,iVar17,iVar10,cVar11,uVar12,
                              iVar13,iVar14,iVar15);
          (**(code **)(iVar2 + 8))(puVar5,uVar6,uVar18);
          PaintCampaign(this_02);
          iVar2 = 0;
          if (this_02->field_009A != '\0') {
            local_c = 0;
            piVar9 = &this_02->field_0123;
            do {
              DVar8 = timeGetTime();
              piVar9[1] = DVar8;
              *piVar9 = local_c;
              local_c = local_c + 0x96;
              iVar2 = iVar2 + 1;
              piVar9 = (int *)((int)piVar9 + 0x1fb);
            } while (iVar2 < (int)(uint)(byte)this_02->field_009A);
          }
          this_02->field_0065 = 3;
          thunk_FUN_005b6730(this_02,1,'\0',-1);
          this_02->field_1BF0 = this_02->field_0061;
          iVar2 = this_02->field_1A5B;
          puVar5 = &local_26c;
          for (iVar17 = 0x7e; iVar17 != 0; iVar17 = iVar17 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          *(undefined2 *)puVar5 = 0;
          *(undefined1 *)((int)puVar5 + 2) = 0;
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
          if (*(int *)(iVar2 + 0x2e6) != 0) {
            puVar5 = local_70;
            for (iVar17 = 6; iVar17 != 0; iVar17 = iVar17 + -1) {
              *puVar5 = 0xffffffff;
              puVar5 = puVar5 + 1;
            }
            *(undefined2 *)puVar5 = 0xffff;
            MMsgTy::SetPanel(*(MMsgTy **)(iVar2 + 0x2e6),0,(int)&local_26c,0,0);
            MMsgTy::StatePanel(*(MMsgTy **)(this_02->field_1A5B + 0x2e6),(int)local_70);
          }
          thunk_FUN_00568bc0(&g_sound,0);
          if ((DAT_00807300._1_1_ & 8) != 0) {
            thunk_FUN_0056a130(&g_sound,0x12,'\x02',0,(uint *)0x0);
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

