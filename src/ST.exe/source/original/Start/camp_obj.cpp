#include "st/generated.hpp"
// Generated translation unit: source/original/Start/camp_obj.cpp

// 00590B40 CampaignTy::InitCampaign
#line 4 "decomp/ST.exe/functions/00590B40/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::InitCampaign */

void __thiscall st::fn_00590B40(CampaignTy *this,undefined4 param_1)

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
  iVar2 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_02 = local_10;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar16 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\camp_obj.cpp"),0x7d,0,iVar2,st::mutable_c_string("%s")
                                ,"CampaignTy::InitCampaign");
    if (iVar16 == 0) {
      st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Start\\camp_obj.cpp"),0x7d);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_10->field_1FFC = param_1;
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
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
        pCVar3 = st::fn_006F2C00(st::mutable_c_string("CMPG_FLC"),3,iVar9);
        puVar4 = st::fn_0071AD00(g_cMf32_00806780,pCVar3,bVar16,iVar19);
        *puVar5 = st::machine_word_boundary_cast<undefined4>(puVar4);
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
      pCVar3 = st::fn_006F2C00(st::mutable_c_string("CMPG_FONFLC"),2,iVar9);
      puVar4 = st::fn_0071AD00(g_cMf32_00806780,pCVar3,bVar16,iVar19);
      *puVar5 = st::machine_word_boundary_cast<undefined4>(puVar4);
      iVar9 = iVar9 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar9 < 4);
  }
  iVar9 = 0;
  do {
    if (this_02->field_1BD7[iVar9 + -4] != 0) {
      puVar5 = st::fn_006C4A20(this_02->field_1BD7[iVar9 + -4]);
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
        st::fn_006C4A00(puVar5,st::machine_word_boundary_cast<undefined4>(g_dDXContext_0080759C),uVar18,uVar20);
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
              puVar5 = st::fn_006C4A20(iVar19);
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
                    puVar5 = st::fn_006C4A20(this_02->field_1AA7);
                    this_02->field_1B67 = puVar5;
                  }
                  goto LAB_00590d4c;
                }
                goto LAB_00590d24;
              }
              iVar19 = (&this_02->field_00BB[0xc].field_01E0)[iVar9];
            }
            if (iVar19 != 0) {
              puVar5 = st::fn_006C4A20(iVar19);
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
            st::fn_006C4A00(puVar5,st::machine_word_boundary_cast<undefined4>(g_dDXContext_0080759C),uVar18,uVar20);
          }
switchD_00590d73_default:
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0xf);
        local_8 = local_8 + 1;
        if (2 < local_8) {
          st::fn_00401992((MMObjTy *)this_02,
                              (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_0x9b,
                              st::mutable_c_string("MM_MBUT00"),0xf2,0x13a,7,8,0,0,0x9d,0x38,10,
                              st::mutable_c_string("MM_MABUT00"),6,8,9,6,0x28,0,nullptr,0,0,0,-1,-1);
          st::fn_00401992((MMObjTy *)this_02,
                              (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_00BB[0].field_01DB
                              ,st::mutable_c_string("MM_MBUT01"),0x191,0x13a,9,8,0,0,0x9d,0x38,10,
                              st::mutable_c_string("MM_MABUT01"),8,8,8,6,0x32,0,nullptr,0,0,0,-1,-1);
          st::fn_00401992((MMObjTy *)this_02,
                              (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_00BB[1].field_01DB
                              ,st::mutable_c_string("MM_MBUT02"),0xf2,0x173,8,6,0,0,0x9d,0x38,10,
                              st::mutable_c_string("MM_MABUT02"),8,7,10,5,0x28,0,nullptr,0,0,0,-1,-1);
          st::fn_00401992((MMObjTy *)this_02,
                              (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_00BB[2].field_01DB
                              ,st::mutable_c_string("MM_MBUT03"),0x191,0x173,8,6,0,0,0x9d,0x38,10,
                              st::mutable_c_string("MM_MABUT03"),8,7,8,5,0x32,0,nullptr,0,0,0,-1,-1);
          st::fn_00401992((MMObjTy *)this_02,
                              (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_00BB[3].field_01DB
                              ,st::mutable_c_string("MM_MBUT04"),0x143,0x1ac,7,8,0,0,0x9d,0x38,10,
                              st::mutable_c_string("MM_MABUT04"),8,9,9,6,0x32,0,nullptr,0,0,0,-1,-1);
          if (DAT_0080874e == 0) {
            DAT_0080874e = 1;
          }
          this_02->field_1BE8 = (uint)DAT_0080874e * 3 - CASE_3;
          puVar4 = st::fn_0070A9F0(g_cMf32_00806780,st::mutable_c_string("CMPGN_BKG"),0,1);
          g_startSystem_0081176C->field_002C = puVar4;
          st::fn_00401D43(g_dDXContext_0080759C,1,0);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          this_00 = *(MMsgTy **)(this_02->field_00BB[0xc].field_01DC + 0x2e6);
          if (this_00 != nullptr) {
            st::fn_00401FA5(this_00,0,0,1);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            st::fn_00405191(*(MMsgTy **)(this_02->field_00BB[0xc].field_01DC + 0x2e6));
            *(undefined4 *)(*(int *)(this_02->field_00BB[0xc].field_01DC + 0x2e6) + 0x1cab) =
                 this_02->field_0008;
          }
          st::fn_006BC360(g_startSystem_0081176C->field_002C,(undefined4 *)&this_02->field_0x1bf8,
                       nullptr);
          this_01 = g_cursorClass_00802A30;
          if (g_cursorClass_00802A30 != nullptr) {
            iVar9 = g_cursorClass_00802A30->field_00C9;
            iVar19 = g_cursorClass_00802A30->field_00C5;
            g_cursorClass_00802A30->field_0493 = CASE_1;
            this_01->field_0494 = 0xffff;
            st::fn_0040507E(this_01,CASE_0,iVar19,iVar9);
            st::fn_0040241E(this_01,this_01->field_00C5,this_01->field_00C9);
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
          puVar6 = (uint *)st::fn_006B0140(0x23f1,g_hINSTANCE_00807618);
          psVar7 = (short *)st::fn_00713480
                                      (g_startSystem_0081176C->field_0030,puVar6,iVar9,iVar19,cVar11
                                       ,uVar12,iVar13,iVar14,iVar15);
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
          puVar6 = (uint *)st::fn_006B0140(0x23f0,g_hINSTANCE_00807618);
          psVar7 = (short *)st::fn_00713480
                                      (g_startSystem_0081176C->field_0030,puVar6,iVar9,iVar19,cVar11
                                       ,uVar12,iVar13,iVar14,iVar15);
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
          puVar6 = (uint *)st::fn_006B0140(0x23f2,g_hINSTANCE_00807618);
          psVar7 = (short *)st::fn_00713480
                                      (g_startSystem_0081176C->field_0030,puVar6,iVar9,iVar19,cVar11
                                       ,uVar12,iVar13,iVar14,iVar15);
          (*pSVar1->SetImagesPtr)(&this_02->field_00BB[4].field_00B9,psVar7,uVar17,uVar21);
          st::fn_00401A5F(this_02);
          iVar9 = 0;
          if (this_02->field_009A != '\0') {
            local_c = 0;
            piVar10 = st::pointer_boundary_cast<int *>(&this_02->field_00BB[0].field_0028.field_0040);
            do {
              DVar8 = st::external_000000DA();
              piVar10[1] = DVar8;
              *piVar10 = local_c;
              local_c = local_c + 0x96;
              iVar9 = iVar9 + 1;
              piVar10 = (int *)((int)piVar10 + 0x1fb);
            } while (iVar9 < (int)(uint)(byte)this_02->field_009A);
          }
          this_02->field_0065 = 3;
          st::fn_00404BF1(this_02,1,'\0',-1);
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
            st::fn_00401717(*(MMsgTy **)(iVar9 + 0x2e6),0,(int)&local_26c,0,0);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            st::fn_00404B51(*(MMsgTy **)(this_02->field_00BB[0xc].field_01DC + 0x2e6),
                               (int)local_70);
          }
          st::fn_0040329C(&g_sound,0);
          if ((STPiece<1,1>(DAT_00807300) & 8) != 0) {
            st::fn_00402FD1(&g_sound,0x12,'\x02',0,nullptr);
          }
          st::fn_0040329C(&g_sound,1);
          if (DAT_0080874e == 1) {
            st::fn_00404BF1(this_02,0x15,'\0',1);
            st::fn_00404BF1(this_02,0x18,'\x02',1);
          }
          else {
            if (DAT_0080874e == 2) {
              st::fn_00404BF1(this_02,0x16,'\0',1);
              st::fn_00404BF1(this_02,0x19,'\x02',1);
              g_currentExceptionFrame = local_54.previous;
              return;
            }
            if (DAT_0080874e == 3) {
              st::fn_00404BF1(this_02,0x17,'\0',1);
              st::fn_00404BF1(this_02,0x1a,'\x02',1);
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

// 005916F0 CampaignTy::DoneCampaign
#line 4 "decomp/ST.exe/functions/005916F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::DoneCampaign */

void __thiscall st::fn_005916F0(CampaignTy *this)

{
  MMsgTy *this_00;
  CampaignTy *pCVar2;
  int iVar3;
  int iVar6;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  InternalExceptionFrame local_4c;
  CampaignTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (iVar3 == 0) {
    st::fn_0040458E((MMObjTy *)local_8);
    if (g_cursorClass_00802A30 != nullptr) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    st::fn_00401D43(g_dDXContext_0080759C,10,2);
    st::fn_0040329C(&g_sound,1);
    if (g_startSystem_0081176C->field_002C != nullptr) {
      st::fn_006F20E0(g_cMf32_00806780,(uint *)&g_startSystem_0081176C->field_002C);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00 = *(MMsgTy **)(pCVar2->field_00BB[0xc].field_01DC + 0x2e6);
    if (this_00 != nullptr) {
      st::fn_0040462E(this_00);
      *(undefined4 *)(*(int *)(pCVar2->field_00BB[0xc].field_01DC + 0x2e6) + 0x1cab) = 0;
    }
    puVar5 = &pCVar2->field_1B13;
    iVar4 = 3;
    do {
      iVar7 = 0xf;
      do {
        if ((undefined4 *)*puVar5 != nullptr) {
          st::fn_006C4A70((undefined4 *)*puVar5);
          *puVar5 = 0;
        }
        if (puVar5[-0x2d] != 0) {
          st::fn_006F20E0(g_cMf32_00806780,st::pointer_boundary_cast<uint *>(puVar5 + -0x2d));
        }
        pCVar2 = local_8;
        puVar5 = puVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 4;
    puVar6 = local_8->field_1BD7;
    do {
      if ((undefined4 *)*puVar6 != nullptr) {
        st::fn_006C4A70((undefined4 *)*puVar6);
        *puVar6 = 0;
      }
      if (puVar6[-4] != 0) {
        st::fn_006F20E0(g_cMf32_00806780,puVar6 + -4);
      }
      puVar6 = puVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (pCVar2->field_004D != 0) {
      st::fn_006E3B50((AppClassTy *)&DAT_00807620,(undefined4 *)&pCVar2->field_0x3d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\camp_obj.cpp"),0x9d,0,iVar3,st::mutable_c_string("%s"),
                             "CampaignTy::DoneCampaign");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\camp_obj.cpp"),0x9d);
  return;
}

// 00591940 CampaignTy::PaintCampaign
#line 4 "decomp/ST.exe/functions/00591940/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::PaintCampaign

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00591940(CampaignTy *this)

{
  CampaignTy *pCVar2;
  uint errorCode;
  char *resourceString;
  LPSTR text;
  BITMAPINFO *pBVar3;
  int iVar5;
  StartServTy *this_00;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  ccFntTy *pcVar11;
  InternalExceptionFrame local_4c;
  CampaignTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\camp_obj.cpp"),0xb5,0,errorCode,
                               st::mutable_c_string("%s"),"CampaignTy::PaintCampaign");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\camp_obj.cpp"),0xb5);
    return;
  }
  st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
  st::fn_00403738(0,0,'\x01',(BITMAPINFO *)g_startSystem_0081176C->field_002C);
  pCVar2 = local_8;
  pcVar11 = g_startSystem_0081176C->field_0030;
  uVar9 = 0xffffffff;
  uVar8 = 0xfffffffe;
  resourceString =
       st::fn_006B0140((-(uint)(local_8->field_1FFC != 0) & 0xfffffca8) + 0x26b1,
                          g_hINSTANCE_00807618);
  st::fn_00404C2D
            (this_00,0,0xe9,0x14,0x14c,0x18,resourceString,uVar8,uVar9,pcVar11,errorCode);
  if (g_startSystem_0081176C->field_0028 == 0) {
    iVar4 = 0;
    bVar10 = 0;
    text = st::fn_006F2C00(st::mutable_c_string("CMPG_BKG"),1,(uint)DAT_0080874e);
    pBVar3 = (BITMAPINFO *)st::fn_0070A9F0(g_cMf32_00806780,text,bVar10,iVar4);
    st::fn_00403738(0xa5,0x37,'\x01',pBVar3);
  }
  else {
    puVar5 = &pCVar2->field_1B13;
    iVar4 = 3;
    do {
      iVar7 = 0xf;
      do {
        if ((AnonShape_006C4AA0_6E9A3AA4 *)*puVar5 != nullptr) {
          st::fn_006C4AA0((AnonShape_006C4AA0_6E9A3AA4 *)*puVar5);
        }
        pCVar2 = local_8;
        puVar5 = puVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 4;
    puVar6 = local_8->field_1BD7;
    do {
      if ((AnonShape_006C4AA0_6E9A3AA4 *)*puVar6 != nullptr) {
        st::fn_006C4AA0((AnonShape_006C4AA0_6E9A3AA4 *)*puVar6);
      }
      puVar6 = puVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 0;
    if (pCVar2->field_009A != '\0') {
      puVar6 = st::pointer_boundary_cast<uint *>(&pCVar2->field_00BB[0].field_0028.field_001C);
      do {
        if (puVar6[-6] != 0xffffffff) {
          st::fn_006B3730
                    ((uint *)puVar6[0xb],puVar6[-6],puVar6[-5],*puVar6,puVar6[1]);
        }
        if ((pCVar2->field_0065 == '\x01') && (STField<uint>(puVar6,0x79) != 0xffffffff)) {
          st::fn_006B3730
                    (STField<uint *>(puVar6,0xbd),STField<uint>(puVar6,0x79),
                     STField<uint>(puVar6,0x7d),STField<uint>(puVar6,0x91),
                     STField<uint>(puVar6,0x95));
        }
        iVar4 = iVar4 + 1;
        puVar6 = (uint *)((int)puVar6 + 0x1fb);
      } while (iVar4 < (int)(uint)(byte)pCVar2->field_009A);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 00591BF0 CampaignTy::NoneCampaign
#line 4 "decomp/ST.exe/functions/00591BF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::NoneCampaign
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall NoneCampaign(CampaignTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=00591DCE RET | 005920E0 RET | 00592174 RET | 005921BC RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_00591BF0(CampaignTy *this)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  CampaignTy *this_00;
  DWORD DVar6;
  int iVar6;
  uint uVar7;
  DWORD *pDVar8;
  int *piVar9;
  int iVar11;
  undefined4 *puVar10;
  int iVar12;
  uint *puVar13;
  int iVar14;
  undefined4 local_284 [112];
  InternalExceptionFrame local_c4;
  undefined4 local_80 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_38;
  uint local_34;
  undefined4 local_28;
  undefined2 local_1e;
  undefined2 local_1c;
  CampaignTy *local_c;
  int local_8;

  local_8 = 1;
  local_c = this;
  DVar6 = st::external_000000DA();
  this->field_0061 = DVar6;
  local_c4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c4;
  iVar6 = st::fn_0072D7F0(local_c4.jumpBuffer,0);
  this_00 = local_c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_c4.previous;
    iVar11 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\camp_obj.cpp"),0x117,0,iVar6,
                                st::mutable_c_string("%s"),"CampaignTy::NoneCampaign");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\Start\\camp_obj.cpp"),0x117);
    return;
  }
  st::fn_0040261C(local_c);
  st::fn_00404F4D(this_00);
  cVar1 = this_00->field_0065;
  if (cVar1 == '\x01') {
    iVar14 = 0;
    if (this_00->field_009A != '\0') {
      puVar13 = st::pointer_boundary_cast<uint *>(&this_00->field_00BB[0].field_014A.field_001C);
      do {
        if (((*(int *)((int)puVar13 + -0x165) != 0) && (*(char *)((int)puVar13 + -0x13f) != '\0'))
           && (puVar13[9] <= this_00->field_0061 - puVar13[10])) {
          puVar13[10] = this_00->field_0061;
          uVar7 = puVar13[-5];
          puVar13[-5] = uVar7 + 1;
          if ((int)puVar13[-4] <= (int)(uVar7 + 1)) {
            puVar13[-5] = 0;
          }
          if (puVar13[-6] != 0xffffffff) {
            st::fn_006B3730
                      ((uint *)puVar13[0xb],puVar13[-6],puVar13[-5],*puVar13,puVar13[1]);
          }
        }
        iVar14 = iVar14 + 1;
        puVar13 = (uint *)((int)puVar13 + 0x1fb);
      } while (iVar14 < (int)(uint)(byte)this_00->field_009A);
    }
  }
  else if (cVar1 == '\x03') {
    iVar14 = 0;
    uVar7 = (uint)(byte)this_00->field_009A;
    if (uVar7 != 0) {
      do {
        if (this_00->field_00BB[iVar14].field_0001 != 0) {
          if (this_00->field_0061 - this_00->field_00BB[iVar14].field_0028.field_0044 <
              (uint)this_00->field_00BB[iVar14].field_0028.field_0040) {
            iVar14 = 0;
            local_8 = 0;
            if (uVar7 != 0) {
              pDVar8 = st::pointer_boundary_cast<DWORD *>(&this_00->field_00BB[0].field_014A.field_0044);
              do {
                if (*(char *)((int)pDVar8 + -0x167) != '\0') {
                  *pDVar8 = this_00->field_0061;
                }
                iVar14 = iVar14 + 1;
                pDVar8 = (DWORD *)((int)pDVar8 + 0x1fb);
              } while (iVar14 < (int)(uint)(byte)this_00->field_009A);
            }
          }
          else {
            iVar12 = this_00->field_00BB[iVar14].field_0028.field_0008;
            if (iVar12 < this_00->field_00BB[iVar14].field_0028.field_000C + -1) {
              if ((iVar12 == 0) &&
                 (uVar7 = this_00->field_00BB[iVar14].field_0028.field_0004, uVar7 != 0xffffffff)) {
                st::fn_006B34D0
                          ((uint *)this_00->field_00BB[iVar14].field_0028.field_0048,uVar7,
                           0xfffffffe,this_00->field_00BB[iVar14].field_0028.field_001C,
                           this_00->field_00BB[iVar14].field_0028.field_0020);
              }
              this_00->field_00BB[iVar14].field_0028.field_0008 =st::machine_word_boundary_cast<int>(
                   this_00->field_00BB[iVar14].field_0028.field_0008 + 1);
              uVar7 = this_00->field_00BB[iVar14].field_0028.field_0004;
              if (uVar7 != 0xffffffff) {
                st::fn_006B3730
                          ((uint *)this_00->field_00BB[iVar14].field_0028.field_0048,uVar7,
                           this_00->field_00BB[iVar14].field_0028.field_0008,
                           this_00->field_00BB[iVar14].field_0028.field_001C,
                           this_00->field_00BB[iVar14].field_0028.field_0020);
              }
              local_8 = 0;
            }
            else {
              iVar12 = this_00->field_00BB[iVar14].field_00B9.field_0008;
              if (iVar12 < this_00->field_00BB[iVar14].field_00B9.field_000C + -3) {
                if (iVar12 == 0) {
                  uVar7 = this_00->field_00BB[iVar14].field_00B9.field_0004;
                  if (uVar7 != 0xffffffff) {
                    st::fn_006B34D0
                              ((uint *)this_00->field_00BB[iVar14].field_00B9.field_0048,uVar7,
                               0xfffffffe,this_00->field_00BB[iVar14].field_00B9.field_001C,
                               this_00->field_00BB[iVar14].field_00B9.field_0020);
                  }
                  if ((this_00->field_00BB[iVar14].field_0027 != '\0') &&
                     (uVar7 = this_00->field_00BB[iVar14].field_014A.field_0004, uVar7 != 0xffffffff
                     )) {
                    st::fn_006B34D0
                              ((uint *)this_00->field_00BB[iVar14].field_014A.field_0048,uVar7,
                               0xfffffffe,this_00->field_00BB[iVar14].field_014A.field_001C,
                               this_00->field_00BB[iVar14].field_014A.field_0020);
                  }
                }
                this_00->field_00BB[iVar14].field_00B9.field_0008 =st::machine_word_boundary_cast<int>(
                     this_00->field_00BB[iVar14].field_00B9.field_0008 + 1);
                uVar7 = this_00->field_00BB[iVar14].field_00B9.field_0004;
                if (uVar7 != 0xffffffff) {
                  st::fn_006B3730
                            ((uint *)this_00->field_00BB[iVar14].field_00B9.field_0048,uVar7,
                             this_00->field_00BB[iVar14].field_00B9.field_0008,
                             this_00->field_00BB[iVar14].field_00B9.field_001C,
                             this_00->field_00BB[iVar14].field_00B9.field_0020);
                }
                st::fn_00404BF1(this_00,0x1e,'\x01',-1);
                local_8 = 0;
              }
            }
          }
        }
        iVar14 = iVar14 + 1;
        uVar7 = (uint)(byte)this_00->field_009A;
      } while (iVar14 < (int)uVar7);
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      iVar12 = 1;
      memset(local_80, 0, 0x58); /* compiler bulk-zero initialization */
      iVar14 = 0;
      memset(local_284, 0, 0x1c0); /* compiler bulk-zero initialization */
      puVar10 = local_284 + 1;
      iVar14 = 3;
      piVar9 = (int *)&this_00->field_00BB[1].field_01DB;
      do {
        iVar3 = piVar9[0x19];
        puVar10[-1] = iVar12;
        iVar4 = *piVar9;
        *puVar10 = 0;
        puVar10[2] = iVar3 + iVar4;
        puVar10[4] = piVar9[2];
        iVar12 = iVar12 + 1;
        puVar10[3] = st::machine_word_boundary_cast<undefined4>(piVar9[0x1a] + piVar9[1]);
        puVar10[5] = piVar9[3];
        puVar10 = puVar10 + 0x1c;
        iVar14 = iVar14 + -1;
        piVar9 = (int *)((int)piVar9 + 0x1fb);
      } while (iVar14 != 0);
      local_70 = this_00->field_0008;
      local_34 = (uint)DAT_0080874e;
      local_38 = local_284;
      local_6c = 2;
      local_4c = 2;
      local_80[0] = 1;
      local_68 = 0x68ff;
      local_48 = 0x697f;
      local_50 = local_70;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this_00->field_000C + 8))(5,this_00->field_0066,0,local_80,0);
      iVar14 = this_00->field_00BB[0xc].field_01DC;
      if (*(int *)(iVar14 + 0x2e6) != 0) {
        memset(&local_28, 0, 0x1a); /* compiler bulk-zero initialization */
        local_1c = 1;
        local_1e = 1;
        STPiece<2,2>(local_28) = 1;
        st::fn_00404B51(*(MMsgTy **)(iVar14 + 0x2e6),(int)&local_28);
      }
      this_00->field_0065 = 1;
      g_currentExceptionFrame = local_c4.previous;
      return;
    }
  }
  else if (cVar1 == '\x04') {
    iVar14 = 0;
    if (this_00->field_009A != '\0') {
      puVar13 = st::pointer_boundary_cast<uint *>(&this_00->field_00BB[0].field_00B9.field_0004);
      do {
        if (this_00->field_0061 - *(int *)((int)puVar13 + -0x51) < *(uint *)((int)puVar13 + -0x55))
        {
LAB_00591d08:
          local_8 = 0;
        }
        else {
          if (*(char *)((int)puVar13 + -0xbd) != '\0') {
            if (*puVar13 != 0xffffffff) {
              st::fn_006B3AF0((int *)puVar13[0x11],*puVar13);
            }
            if ((*(char *)((int)puVar13 + -0x96) != '\0') &&
               (STField<uint>(puVar13,0x91) != 0xffffffff)) {
              st::fn_006B3AF0(STField<int *>(puVar13,0xd5),STField<uint>(puVar13,0x91));
            }
            *(undefined1 *)((int)puVar13 + -0xbd) = 0;
          }
          if (0 < *(int *)((int)puVar13 + -0x8d)) {
            uVar7 = *(int *)((int)puVar13 + -0x8d) - 1;
            *(uint *)((int)puVar13 + -0x8d) = uVar7;
            if (*(uint *)((int)puVar13 + -0x91) != 0xffffffff) {
              st::fn_006B3730
                        (*(uint **)((int)puVar13 + -0x4d),*(uint *)((int)puVar13 + -0x91),uVar7,
                         *(uint *)((int)puVar13 + -0x79),*(uint *)((int)puVar13 + -0x75));
            }
            goto LAB_00591d08;
          }
        }
        iVar14 = iVar14 + 1;
        puVar13 = (uint *)((int)puVar13 + 0x1fb);
      } while (iVar14 < (int)(uint)(byte)this_00->field_009A);
    }
    iVar14 = 0;
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      this_00->field_0065 = 2;
      if (this_00->field_009A != '\0') {
        puVar13 = st::pointer_boundary_cast<uint *>(&this_00->field_00BB[0].field_0028.field_0004);
        do {
          if (*puVar13 != 0xffffffff) {
            st::fn_006B3AF0((int *)puVar13[0x11],*puVar13);
          }
          iVar14 = iVar14 + 1;
          puVar13 = (uint *)((int)puVar13 + 0x1fb);
        } while (iVar14 < (int)(uint)(byte)this_00->field_009A);
      }
      bVar2 = this_00->field_00BB[0xc].field_01DB;
      if (*(int *)&this_00->field_00BB[bVar2].field_0x16 != 0) {
        st::fn_006E3B50
                  ((AppClassTy *)&DAT_00807620,(undefined4 *)&this_00->field_00BB[bVar2].field_0x6);
        g_currentExceptionFrame = local_c4.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_c4.previous;
  return;
}

// 00592340 CampaignTy::LightPalette
#line 4 "decomp/ST.exe/functions/00592340/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::LightPalette */

void __thiscall st::fn_00592340(CampaignTy *this)

{
  undefined1 *puVar1;
  CampaignTy *pCVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_4c;
  CampaignTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pCVar3 = local_8;
  if (iVar4 == 0) {
    if (local_8->field_1BEC != 0) {
      puVar1 = st::pointer_boundary_cast<undefined1 *>(&local_8->field_0x1bf8);
      iVar4 = st::fn_00718F40
                        (g_dDXContext_0080759C,(undefined4 *)puVar1,0,0x100,10,&local_8->field_1BF4,
                         2,local_8->field_0061,&local_8->field_1BF0);
      if (iVar4 == -4) {
        st::fn_006B0A20((AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,(int)puVar1,0,0x100
                     ,0);
        pCVar3->field_1BEC = 0;
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\camp_obj.cpp"),0x12d,0,iVar4,st::mutable_c_string("%s"),
                             "CampaignTy::LightPalette");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\camp_obj.cpp"),0x12d);
  return;
}

// 00592470 CampaignTy::CloseButtons
#line 4 "decomp/ST.exe/functions/00592470/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::CloseButtons */

void __thiscall st::fn_00592470(CampaignTy *this)

{
  int iVar2;
  DWORD DVar3;
  int iVar5_mg1;
  int *piVar4;
  CampaignTy *this_00;
  int iVar5;
  InternalExceptionFrame local_4c;
  CampaignTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    st::fn_00403459((MMObjTy *)local_8);
    iVar2 = 0;
    if (this_00->field_009A != '\0') {
      iVar5 = 0x96;
      piVar4 = st::pointer_boundary_cast<int *>(&this_00->field_00BB[0].field_0028.field_0040);
      do {
        DVar3 = st::external_000000DA();
        piVar4[1] = DVar3;
        *piVar4 = iVar5;
        *(undefined1 *)(piVar4 + -0x1a) = 1;
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + 0x96;
        piVar4 = (int *)((int)piVar4 + 0x1fb);
        this_00 = local_8;
      } while (iVar2 < (int)(uint)(byte)local_8->field_009A);
    }
    this_00->field_0065 = 4;
    st::fn_00404BF1(this_00,2,'\x01',-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5_mg1 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\camp_obj.cpp"),0x13c,0,iVar2,
                                 st::mutable_c_string("%s"),"CampaignTy::CloseButtons");
  if (iVar5_mg1 == 0) {
    st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Start\\camp_obj.cpp"),0x13c);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 005926E0 CampaignTy::AnimationCampaign
#line 4 "decomp/ST.exe/functions/005926E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::AnimationCampaign

   [STSwitchEnumApplier] Switch target field_1BE8 uses
   /SubmarineTitans/Recovered/Enums/CampaignTy_field_1BE8State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8 */

void __thiscall st::fn_005926E0(CampaignTy *this)

{
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar1;
  CampaignTy *this_00;
  int iVar3;
  BITMAPINFO *pBVar3;
  int iVar5;
  int iVar4;
  CampaignTy_field_1BE8State CVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  char cVar11;
  InternalExceptionFrame local_68;
  int local_24 [7];
  CampaignTy *local_8;

  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_68.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\camp_obj.cpp"),0x1b3,0,iVar3,st::mutable_c_string("%s")
                               ,"CampaignTy::AnimationCampaign");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\camp_obj.cpp"),0x1b3);
    return;
  }
  if (g_startSystem_0081176C->field_0028 == 0) goto LAB_00592b82;
  if (local_8->field_1BE7 != '\0') goto LAB_00592b7c;
  local_24[5] = local_8->field_1BE8;
  puVar7 = local_8->field_1BD7;
  iVar6 = 4;
  do {
    if ((int *)*puVar7 != nullptr) {
      st::fn_00403409((int *)*puVar7);
    }
    puVar7 = puVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  CVar5 = this_00->field_1BE8;
  switch(CVar5) {
  case CASE_0:
  case CASE_3:
  case CASE_6:
    local_24[0] = 0;
    local_24[1] = 2;
    local_24[2] = 4;
    local_24[3] = 3;
    local_24[4] = 1;
    break;
  case CASE_1:
  case CASE_4:
    local_24[0] = 0;
    local_24[1] = 5;
    local_24[2] = 7;
    local_24[3] = 6;
    local_24[4] = 1;
    break;
  case CASE_2:
  case CASE_5:
    local_24[1] = 10;
    local_24[0] = 8;
    local_24[2] = 0xc;
    local_24[3] = 0xb;
    local_24[4] = 9;
    break;
  case CASE_7:
    local_24[0] = 5;
    local_24[1] = 7;
    local_24[2] = 9;
    local_24[3] = 8;
    local_24[4] = 6;
    break;
  case CASE_8:
    local_24[0] = 10;
    local_24[1] = 0xc;
    local_24[2] = 0xe;
    local_24[3] = 0xd;
    local_24[4] = 0xb;
  }
  switch(CVar5) {
  default:
    iVar6 = 0;
    break;
  case CASE_3:
  case CASE_4:
  case CASE_5:
    iVar6 = 1;
    break;
  case CASE_6:
  case CASE_7:
  case CASE_8:
    iVar6 = 2;
  }
  if ((&this_00->field_1B13)[local_24[2] + iVar6 * 0xf] == 0) goto switchD_00592962_caseD_1;
  switch(CVar5) {
  default:
    iVar6 = 0;
    break;
  case CASE_3:
  case CASE_4:
  case CASE_5:
    iVar6 = 1;
    break;
  case CASE_6:
  case CASE_7:
  case CASE_8:
    iVar6 = 2;
  }
  switch(CVar5) {
  default:
    iVar4 = 0;
    break;
  case CASE_3:
  case CASE_4:
  case CASE_5:
    iVar4 = 1;
    break;
  case CASE_6:
  case CASE_7:
  case CASE_8:
    iVar4 = 2;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)((&this_00->field_1B13)[local_24[2] + iVar6 * 0xf] + 0x14) -
      *(int *)((&this_00->field_1B13)[local_24[2] + iVar4 * 0xf] + 0x18) != 1)
  goto switchD_00592962_caseD_1;
  switch(CVar5) {
  case CASE_0:
  case CASE_1:
    CVar5 = (DAT_0080874e != 1) + CASE_1;
    goto LAB_00592933;
  case CASE_2:
  case CASE_5:
  case CASE_8:
    CVar5 = (uint)DAT_0080874e * 3 - CASE_3;
LAB_00592933:
    this_00->field_1BE8 = CVar5;
    break;
  case CASE_3:
  case CASE_4:
    this_00->field_1BE8 = (DAT_0080874e != 2) + CASE_4;
    break;
  case CASE_6:
  case CASE_7:
    this_00->field_1BE8 = (DAT_0080874e != 3) + CASE_7;
  }
  switch(this_00->field_1BE8) {
  case CASE_0:
  case CASE_2:
  case CASE_3:
  case CASE_5:
  case CASE_6:
  case CASE_8:
    st::fn_0040329C(&g_sound,1);
  }
  switch(this_00->field_1BE8) {
  case CASE_0:
    st::fn_00404BF1(this_00,0x15,'\0',1);
    iVar6 = 1;
    cVar11 = '\x02';
    uVar10 = 0x18;
    break;
  default:
    goto switchD_00592962_caseD_1;
  case CASE_2:
    iVar6 = -1;
    cVar11 = '\x01';
    uVar10 = 0x1b;
    break;
  case CASE_3:
    st::fn_00404BF1(this_00,0x16,'\0',1);
    iVar6 = 1;
    cVar11 = '\x02';
    uVar10 = 0x19;
    break;
  case CASE_5:
    iVar6 = -1;
    cVar11 = '\x01';
    uVar10 = 0x1c;
    break;
  case CASE_6:
    st::fn_00404BF1(this_00,0x17,'\0',1);
    iVar6 = 1;
    cVar11 = '\x02';
    uVar10 = 0x1a;
    break;
  case CASE_8:
    iVar6 = -1;
    cVar11 = '\x01';
    uVar10 = 0x1d;
  }
  st::fn_00404BF1(this_00,uVar10,cVar11,iVar6);
switchD_00592962_caseD_1:
  if (local_24[5] != this_00->field_1BE8) {
    puVar8 = &this_00->field_1B13;
    local_24[5] = 3;
    do {
      iVar6 = 0xf;
      do {
        if ((AnonShape_006C4AA0_6E9A3AA4 *)*puVar8 != nullptr) {
          st::fn_006C4AA0((AnonShape_006C4AA0_6E9A3AA4 *)*puVar8);
        }
        puVar8 = puVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      local_24[5] = st::machine_word_boundary_cast<int>(local_24[5] + -1);
    } while (local_24[5] != 0);
    switch(this_00->field_1BE8) {
    case CASE_0:
    case CASE_3:
    case CASE_6:
      local_24[0] = 0;
      local_24[1] = 2;
      local_24[2] = 4;
      local_24[3] = 3;
      local_24[4] = 1;
      break;
    case CASE_1:
    case CASE_4:
      local_24[0] = 0;
      local_24[1] = 5;
      local_24[2] = 7;
      local_24[3] = 6;
      local_24[4] = 1;
      break;
    case CASE_2:
    case CASE_5:
      local_24[0] = 8;
      local_24[1] = 10;
      local_24[2] = 0xc;
      local_24[3] = 0xb;
      local_24[4] = 9;
      break;
    case CASE_7:
      local_24[0] = 5;
      local_24[1] = 7;
      local_24[2] = 9;
      local_24[3] = 8;
      local_24[4] = 6;
      break;
    case CASE_8:
      local_24[0] = 10;
      local_24[1] = 0xc;
      local_24[2] = 0xe;
      local_24[3] = 0xd;
      local_24[4] = 0xb;
    }
  }
  piVar9 = local_24;
  local_24[5] = 5;
  do {
    switch(this_00->field_1BE8) {
    default:
      iVar6 = 0;
      break;
    case CASE_3:
    case CASE_4:
    case CASE_5:
      iVar6 = 1;
      break;
    case CASE_6:
    case CASE_7:
    case CASE_8:
      iVar6 = 2;
    }
    if ((&this_00->field_1B13)[*piVar9 + iVar6 * 0xf] != 0) {
      switch(this_00->field_1BE8) {
      default:
        iVar6 = 0;
        break;
      case CASE_3:
      case CASE_4:
      case CASE_5:
        iVar6 = 1;
        break;
      case CASE_6:
      case CASE_7:
      case CASE_8:
        iVar6 = 2;
      }
      st::fn_00403409((int *)(&this_00->field_1B13)[*piVar9 + iVar6 * 0xf]);
    }
    piVar9 = piVar9 + 1;
    local_24[5] = st::machine_word_boundary_cast<int>(local_24[5] + -1);
  } while (local_24[5] != 0);
  if (this_00->field_1BE8 == CASE_1) {
    this_00->field_1BE7 = 4;
  }
  else {
    this_00->field_1BE7 = 3;
  }
LAB_00592b7c:
  this_00->field_1BE7 = this_00->field_1BE7 + -1;
LAB_00592b82:
  local_24[5] = 0x2e;
  local_24[6] = 0x24c;
  do {
    pAVar1 = *(AnonShape_GLOBAL_0081175C_57F682DD **)
              ((int)&g_startSystem_0081176C->vtable + local_24[6]);
    if (pAVar1 != nullptr) {
      piVar9 = (int *)((int)g_startSystem_0081176C->array_0244 + local_24[5] + 0x18);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(char *)((int)g_startSystem_0081176C->array_0244 + local_24[5] + 0x2c) == '\0') {
        uVar10 = piVar9[2];
      }
      else {
        uVar10 = piVar9[3];
      }
      if (uVar10 <= local_8->field_0061 - piVar9[4]) {
        pBVar3 = st::fn_0070B3A0(pAVar1,(int)(short)pAVar1->field_0029);
        st::fn_006B5F80((int *)g_ddxContext_008075A8,*piVar9,piVar9[1],(int)*(short *)(pAVar1 + 1),
                     (int)*(short *)&pAVar1[1].field_0x2);
        st::fn_00403738(*piVar9,piVar9[1],'\x01',pBVar3);
        if ((char)piVar9[5] != '\0') {
          *(undefined1 *)(piVar9 + 5) = 0;
        }
        piVar9[4] = local_8->field_0061;
        switch(STField<undefined2>(piVar9,0x15)) {
        case 0:
          pAVar1->field_0029 = pAVar1->field_0029 + 1;
          if (pAVar1->field_0023 <= (short)pAVar1->field_0029) {
            pAVar1->field_0029 = 0;
            *(undefined1 *)(piVar9 + 5) = 1;
          }
          break;
        case 1:
          pAVar1->field_0029 = pAVar1->field_0029 + -1;
          if ((short)pAVar1->field_0029 < 0) {
            pAVar1->field_0029 = pAVar1->field_0023 + -1;
            *(undefined1 *)(piVar9 + 5) = 1;
          }
          break;
        case 2:
          pAVar1->field_0029 = pAVar1->field_0029 + 1;
          if (pAVar1->field_0023 <= (short)pAVar1->field_0029) {
            pAVar1->field_0029 = pAVar1->field_0023 + -1;
            *(undefined1 *)(piVar9 + 5) = 1;
            STField<undefined2>(piVar9,0x15) = 3;
          }
          break;
        case 3:
          pAVar1->field_0029 = pAVar1->field_0029 + -1;
          if ((short)pAVar1->field_0029 < 0) {
            pAVar1->field_0029 = 0;
            *(undefined1 *)(piVar9 + 5) = 1;
            STField<undefined2>(piVar9,0x15) = 2;
          }
        }
      }
    }
    local_24[6] = st::machine_word_boundary_cast<int>(local_24[6] + 4);
    local_24[5] = st::machine_word_boundary_cast<int>(local_24[5] + 0x17);
  } while (local_24[6] < 0x25c);
  g_currentExceptionFrame = local_68.previous;
  return;
}

// 00593040 CampaignTy::GetMessage
#line 4 "decomp/ST.exe/functions/00593040/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00593040; family_names=CampaignTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:6,18:0,1c:0} */

int __thiscall st::fn_00593040(CampaignTy *this,STMessage *message)

{
  char cVar1;
  STMessageId SVar2;
  int *piVar3;
  MMsgTy *pMVar4;
  CampaignTy *this_00;
  DWORD DVar6;
  int local_EAX_49;
  LPSTR text;
  BITMAPINFO *pBVar7;
  int iVar8;
  int iVar7;
  char *pcVar9_mg1;
  int iVar11;
  int iVar9;
  int iVar10;
  uint uVar11;
  char *pcVar13;
  char *pcVar14;
  byte bVar16;
  int iVar17;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  int *local_c;
  CampaignTy *local_8;
  char *pcVar9_mg0;

  local_8 = this;
  DVar6 = st::fn_006E51B0(this->field_0010);
  this->field_0061 = DVar6;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_EAX_49 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_8;
  if (local_EAX_49 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar11 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\camp_obj.cpp"),0x24f,0,local_EAX_49,
                                st::mutable_c_string("%s"),"CampaignTy::GetMessage");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_49,0,st::mutable_c_string("E:\\__titans\\Start\\camp_obj.cpp"),0x24f);
    return 0xffff;
  }
  st::fn_00402563(local_8,message);
  SVar2 = message->id;
  if (SVar2 < MESS_FSGSTY_6941) {
    if (SVar2 == MESS_SHARED_6940) {
      st::fn_004059C0(this_00);
    }
    else if (SVar2 < 6) {
      if (SVar2 == MESS_SHARED_0005) {
        st::fn_00401A5F(this_00);
      }
      else if (SVar2 == MESS_ID_NONE) {
        st::fn_00404539(this_00);
      }
      else if (SVar2 == MESS_ID_CREATE) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        st::fn_004013D9(this_00,*(undefined4 *)((message->arg0).u32 + 0x14));
      }
      else if (SVar2 == MESS_SHARED_0003) {
        st::fn_0040452A(this_00);
      }
    }
    else if (SVar2 == MESS_MMSGTY_68FF) {
      DAT_0080874e = *(byte *)(message->arg0).ptr;
      if (g_startSystem_0081176C->field_0028 == 0) {
        st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
        iVar17 = 0;
        bVar16 = 0;
        text = st::fn_006F2C00(st::mutable_c_string("CMPG_BKG"),1,(uint)DAT_0080874e);
        pBVar7 = (BITMAPINFO *)st::fn_0070A9F0(g_cMf32_00806780,text,bVar16,iVar17);
        st::fn_00403738(0xa5,0x37,'\x01',pBVar7);
      }
      st::fn_00404BF1(this_00,4,'\x01',-1);
    }
    else if (SVar2 == MESS_PRIVIDERTY_693F) {
      st::fn_00404CE1(this_00);
    }
    goto switchD_005931ad_caseD_6944;
  }
  switch(SVar2) {
  case MESS_CHOOSEMAPTY_6942:
    this_00->field_0045 = 0x200;
    this_00->field_0049 = 0;
    this_00->field_004D = 0x6102;
    this_00->field_0051 = static_cast<undefined4>((message->arg0).u32);
    st::fn_00404DB8((MTaskTy *)this_00);
    break;
  case MESS_WAITTY_6943:
    st::fn_004036C0(this_00,0x6942,(message->arg0).u32,0);
    this_00->CloseButtons();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pMVar4 = *(MMsgTy **)(this_00->field_00BB[0xc].field_01DC + 0x2e6);
    if (pMVar4 != nullptr) {
      st::fn_00401FA5(pMVar4,1,0,1);
    }
    break;
  case MESS_SHARED_6940|MESS_SHARED_0008:
    st::external_00000080(st::pointer_boundary_cast<LPSTR>(&CHAR_00h_0080f22a),st::mutable_c_string("%sMISS%d00.AVI"),&CHAR_00h_00807784,(uint)DAT_0080874e);
    this_00->field_0049 = 1;
    this_00->field_004D = 0x7101;
    this_00->field_0051 = 3;
    this_00->field_0055 = 1;
    st::fn_00404DB8((MTaskTy *)this_00);
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case MESS_FSGSTY_694A:
    if ((((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) && (DAT_0080874e == 3)) &&
       (pMVar4 = *(MMsgTy **)(this_00->field_00BB[0xc].field_01DC + 0x2e6), pMVar4 != nullptr)
       ) {
      st::fn_00403FA8(pMVar4,0x2530,'\0',nullptr,nullptr,nullptr,0,
                         0);
    }
    else {
      pcVar9_mg0 = PTR_s_TUTOR_0079bff0;
      if (this_00->field_1FFC == 0) {
        pcVar9_mg0 = st::pointer_boundary_cast<char *>(PTR_DAT_0079bfec);
      }
      st::external_00000080(st::pointer_boundary_cast<LPSTR>(&CHAR_00h_0080ed16),st::mutable_c_string("%s%s%s%d01"),&CHAR_00h_00807680,st_global_0079BFE8
                ,pcVar9_mg0,(uint)DAT_0080874e);
      pcVar9_mg1 = PTR_s_TUTOR_0079bff0;
      if (this_00->field_1FFC == 0) {
        pcVar9_mg1 = st::pointer_boundary_cast<char *>(PTR_DAT_0079bfec);
      }
      st::external_00000080(st::pointer_boundary_cast<LPSTR>(&CHAR_00h_0080ef1e),st::mutable_c_string("%s%s%d01"),st_global_0079BFE8,pcVar9_mg1,
                (uint)DAT_0080874e);
      uVar11 = 0xffffffff;
      pcVar13 = &CHAR_00h_0080ed16;
      do {
        pcVar14 = pcVar13;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar14 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11;
      pcVar13 = pcVar14 + -uVar11;
      pcVar14 = (char *)&DAT_0080ee1a;
      memmove(pcVar14, pcVar13, uVar11); /* compiler REP MOVS byte copy */
      STPiece<0,1>(DAT_008087a0) = 8;
      iVar17 = st::fn_00404B4C((STAppC *)&DAT_00807620,1);
      if (iVar17 != 0) {
        memset(&DAT_0080c522, 0, 0x27f0); /* compiler bulk-zero initialization */
        st::fn_004036C0(this_00,(-(uint)(this_00->field_1FFC != 0) & 8) + 0x6948,0,0);
        this_00->CloseButtons();
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pMVar4 = *(MMsgTy **)(this_00->field_00BB[0xc].field_01DC + 0x2e6);
        if (pMVar4 != nullptr) {
          st::fn_00401FA5(pMVar4,1,0,1);
        }
      }
    }
    break;
  case 0x6950:
    this_00->field_0049 = 1;
    this_00->field_004D = 0x6104;
    this_00->field_0051 = 0;
    this_00->field_0055 = 1;
    st::fn_00404DB8((MTaskTy *)this_00);
    break;
  case MESS_SHARED_697F:
    piVar3 = st::pointer_boundary_cast<int *>((message->arg0).ptr);
    if (*piVar3 == 1) {
      iVar17 = 2;
    }
    else {
      iVar17 = (*piVar3 != 2) + 3;
    }
    switch(piVar3[1]) {
    case 0:
    case 2:
    case 3:
      iVar9 = (int)this_00->field_0066 + iVar17 * 0x1fb + -0x66;
      iVar8 = *(int *)(iVar9 + 0xef) + -1;
      break;
    case 1:
      iVar9 = (int)this_00->field_0066 + iVar17 * 0x1fb + -0x66;
      iVar8 = *(int *)(iVar9 + 0xef) + -2;
      break;
    default:
      goto switchD_005931dd_default;
    }
    *(int *)(iVar9 + 0xeb) = iVar8;
switchD_005931dd_default:
    uVar11 = this_00->field_00BB[iVar17].field_0028.field_0004;
    local_c = piVar3;
    if (uVar11 != 0xffffffff) {
      st::fn_006B3730
                ((uint *)this_00->field_00BB[iVar17].field_0028.field_0048,uVar11,
                 this_00->field_00BB[iVar17].field_0028.field_0008,
                 this_00->field_00BB[iVar17].field_0028.field_001C,
                 this_00->field_00BB[iVar17].field_0028.field_0020);
    }
    if (this_00->field_00BB[iVar17].field_0027 != '\0') {
      switch(piVar3[1]) {
      case 0:
      case 2:
      case 3:
        this_00->field_00BB[iVar17].field_014A.field_001C =st::machine_word_boundary_cast<undefined4>(
             this_00->field_00BB[iVar17].field_0028.field_001C +
             *(int *)&this_00->field_00BB[iVar17 + -1].field_0x1eb);
        this_00->field_00BB[iVar17].field_014A.field_0020 =st::machine_word_boundary_cast<undefined4>(
             this_00->field_00BB[iVar17].field_0028.field_0020 +
             *(int *)&this_00->field_00BB[iVar17 + -1].field_0x1ef);
        break;
      case 1:
        this_00->field_00BB[iVar17].field_014A.field_001C =st::machine_word_boundary_cast<undefined4>(
             this_00->field_00BB[iVar17].field_0028.field_001C +
             *(int *)&this_00->field_00BB[iVar17 + -1].field_0x1f3);
        this_00->field_00BB[iVar17].field_014A.field_0020 =st::machine_word_boundary_cast<undefined4>(
             this_00->field_00BB[iVar17].field_0028.field_0020 +
             *(int *)&this_00->field_00BB[iVar17 + -1].field_0x1f7);
      }
      uVar11 = this_00->field_00BB[iVar17].field_014A.field_0004;
      if (uVar11 != 0xffffffff) {
        st::fn_006B3730
                  ((uint *)this_00->field_00BB[iVar17].field_014A.field_0048,uVar11,
                   this_00->field_00BB[iVar17].field_014A.field_0008,
                   this_00->field_00BB[iVar17].field_014A.field_001C,
                   this_00->field_00BB[iVar17].field_014A.field_0020);
      }
    }
    local_10 = this_00->field_00BB[iVar17].field_00B9.field_0020;
    iVar9 = this_00->field_00BB[iVar17].field_00B9.field_001C;
    if (*local_c == 2) {
      iVar8 = 0;
LAB_0059332b:
      iVar10 = -2;
    }
    else {
      if (*local_c != 3) {
        iVar8 = 2;
        goto LAB_0059332b;
      }
      iVar8 = 0;
      iVar10 = -3;
    }
    switch(local_c[1]) {
    case 0:
      this_00->field_00BB[iVar17].field_00B9.field_0008 =st::machine_word_boundary_cast<int>(
           this_00->field_00BB[iVar17].field_00B9.field_000C + -3);
      break;
    case 1:
      this_00->field_00BB[iVar17].field_00B9.field_001C = iVar8 + iVar9;
      this_00->field_00BB[iVar17].field_00B9.field_0020 =st::machine_word_boundary_cast<undefined4>(
           this_00->field_00BB[iVar17].field_00B9.field_0020 + iVar10);
    case 3:
      iVar8 = st::machine_word_boundary_cast<int>(this_00->field_00BB[iVar17].field_00B9.field_000C + -2);
LAB_00593378:
      this_00->field_00BB[iVar17].field_00B9.field_0008 = iVar8;
      break;
    case 2:
      iVar8 = st::machine_word_boundary_cast<int>(this_00->field_00BB[iVar17].field_00B9.field_000C + -1);
      goto LAB_00593378;
    }
    uVar11 = this_00->field_00BB[iVar17].field_00B9.field_0004;
    if (uVar11 != 0xffffffff) {
      st::fn_006B3730
                ((uint *)this_00->field_00BB[iVar17].field_00B9.field_0048,uVar11,
                 this_00->field_00BB[iVar17].field_00B9.field_0008,
                 this_00->field_00BB[iVar17].field_00B9.field_001C,
                 this_00->field_00BB[iVar17].field_00B9.field_0020);
    }
    this_00->field_00BB[iVar17].field_00B9.field_001C = iVar9;
    this_00->field_00BB[iVar17].field_00B9.field_0020 = local_10;
  }
switchD_005931ad_caseD_6944:
  g_currentExceptionFrame = local_54.previous;
  iVar7 = st::fn_00401280((MMObjTy *)this_00,message);
  return iVar7;
}

