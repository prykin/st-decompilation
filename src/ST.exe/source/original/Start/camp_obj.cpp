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
  iVar2 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_02 = local_10;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar16 = st::fn_006AD4D0("E:\\__titans\\Start\\camp_obj.cpp",0x7d,0,iVar2,"%s"
                                ,"CampaignTy::InitCampaign");
    if (iVar16 == 0) {
      st::fn_006A5E40(iVar2,0,"E:\\__titans\\Start\\camp_obj.cpp",0x7d);
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
    puVar4 = &this_02->field_1A5F;
    do {
      local_c = 0xf;
      iVar7 = local_8;
      do {
        iVar17 = 0;
        bVar14 = 0;
        pCVar2 = st::fn_006F2C00("CMPG_FLC",3,iVar7);
        puVar3 = st::fn_0071AD00(g_cMf32_00806780,pCVar2,bVar14,iVar17);
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
      pCVar2 = st::fn_006F2C00("CMPG_FONFLC",2,iVar7);
      puVar3 = st::fn_0071AD00(g_cMf32_00806780,pCVar2,bVar14,iVar17);
      *puVar4 = puVar3;
      iVar7 = iVar7 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar7 < 4);
  }
  iVar7 = 0;
  do {
    if (this_02->field_1BD7[iVar7 + -4] != 0) {
      puVar4 = st::fn_006C4A20(this_02->field_1BD7[iVar7 + -4]);
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
        st::fn_006C4A00(puVar4,g_dDXContext_0080759C,uVar15,uVar18);
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
              puVar4 = st::fn_006C4A20((&this_02->field_1A5F)[iVar17]);
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
                    puVar4 = st::fn_006C4A20(this_02->field_1AA7);
                    this_02->field_1B67 = puVar4;
                  }
                  goto LAB_00590d4c;
                }
                goto LAB_00590d24;
              }
              iVar17 = (&this_02->field_1A5F)[iVar7];
            }
            if (iVar17 != 0) {
              puVar4 = st::fn_006C4A20(iVar17);
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
            st::fn_006C4A00(puVar4,g_dDXContext_0080759C,uVar15,uVar18);
          }
switchD_00590d73_default:
          iVar7 = iVar7 + 1;
        } while (iVar7 < 0xf);
        local_8 = local_8 + 1;
        if (2 < local_8) {
          st::fn_00401992((MMObjTy *)this_02,
                              (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_0x9b,
                              "MM_MBUT00",0xf2,0x13a,7,8,0,0,0x9d,0x38,10,
                              "MM_MABUT00",6,8,9,6,0x28,0,nullptr,0,0,0,-1,-1);
          st::fn_00401992((MMObjTy *)this_02,
                              (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_0x296,
                              "MM_MBUT01",0x191,0x13a,9,8,0,0,0x9d,0x38,10,
                              "MM_MABUT01",8,8,8,6,0x32,0,nullptr,0,0,0,-1,-1);
          st::fn_00401992((MMObjTy *)this_02,
                              (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_0x491,
                              "MM_MBUT02",0xf2,0x173,8,6,0,0,0x9d,0x38,10,
                              "MM_MABUT02",8,7,10,5,0x28,0,nullptr,0,0,0,-1,-1);
          st::fn_00401992((MMObjTy *)this_02,
                              (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_0x68c,
                              "MM_MBUT03",0x191,0x173,8,6,0,0,0x9d,0x38,10,
                              "MM_MABUT03",8,7,8,5,0x32,0,nullptr,0,0,0,-1,-1);
          st::fn_00401992((MMObjTy *)this_02,
                              (RecoveredRecord_MMObjTy_005B5240 *)&this_02->field_0x887,
                              "MM_MBUT04",0x143,0x1ac,7,8,0,0,0x9d,0x38,10,
                              "MM_MABUT04",8,9,9,6,0x32,0,nullptr,0,0,0,-1,-1);
          if (DAT_0080874e == 0) {
            DAT_0080874e = 1;
          }
          this_02->field_1BE8 = (uint)DAT_0080874e * 3 - CASE_3;
          puVar3 = st::fn_0070A9F0(g_cMf32_00806780,"CMPGN_BKG",0,1);
          g_startSystem_0081176C->field_002C = puVar3;
          st::fn_00401D43(g_dDXContext_0080759C,1,0);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          this_00 = *(MMsgTy **)(this_02->field_1A5B + 0x2e6);
          if (this_00 != nullptr) {
            st::fn_00401FA5(this_00,0,0,1);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            st::fn_00405191(*(MMsgTy **)(this_02->field_1A5B + 0x2e6));
            *(undefined4 *)(*(int *)(this_02->field_1A5B + 0x2e6) + 0x1cab) = this_02->field_0008;
          }
          st::fn_006BC360(g_startSystem_0081176C->field_002C,(undefined4 *)&this_02->field_0x1bf8,
                       nullptr);
          this_01 = g_cursorClass_00802A30;
          if (g_cursorClass_00802A30 != nullptr) {
            iVar7 = g_cursorClass_00802A30->field_00C9;
            iVar17 = g_cursorClass_00802A30->field_00C5;
            g_cursorClass_00802A30->field_0493 = CASE_1;
            this_01->field_0494 = 0xffff;
            st::fn_0040507E(this_01,CASE_0,iVar17,iVar7);
            st::fn_0040241E(this_01,this_01->field_00C5,this_01->field_00C9);
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
          puVar5 = (uint *)st::fn_006B0140(0x23f1,g_hINSTANCE_00807618);
          puVar4 = st::fn_00713480
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
          puVar5 = (uint *)st::fn_006B0140(0x23f0,g_hINSTANCE_00807618);
          puVar4 = st::fn_00713480
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
          puVar5 = (uint *)st::fn_006B0140(0x23f2,g_hINSTANCE_00807618);
          puVar4 = st::fn_00713480
                             (g_startSystem_0081176C->field_0030,puVar5,iVar17,iVar8,cVar9,uVar10,
                              iVar11,iVar12,iVar13);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(iVar7 + 8))(puVar4,uVar15,uVar18);
          st::fn_00401A5F(this_02);
          iVar7 = 0;
          if (this_02->field_009A != '\0') {
            local_c = 0;
            puVar5 = &this_02->field_0123;
            do {
              DVar6 = st::external_000000DA();
              puVar5[1] = DVar6;
              *puVar5 = local_c;
              local_c = local_c + 0x96;
              iVar7 = iVar7 + 1;
              puVar5 = (uint *)((int)puVar5 + 0x1fb);
            } while (iVar7 < (int)(uint)(byte)this_02->field_009A);
          }
          this_02->field_0065 = 3;
          st::fn_00404BF1(this_02,1,'\0',-1);
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
            st::fn_00401717(*(MMsgTy **)(iVar7 + 0x2e6),0,(int)&local_26c,0,0);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            st::fn_00404B51(*(MMsgTy **)(this_02->field_1A5B + 0x2e6),(int)local_70);
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
    this_00 = *(MMsgTy **)(pCVar2->field_1A5B + 0x2e6);
    if (this_00 != nullptr) {
      st::fn_0040462E(this_00);
      *(undefined4 *)(*(int *)(pCVar2->field_1A5B + 0x2e6) + 0x1cab) = 0;
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
          st::fn_006F20E0(g_cMf32_00806780,puVar5 + -0x2d);
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
  iVar6 = st::fn_006AD4D0("E:\\__titans\\Start\\camp_obj.cpp",0x9d,0,iVar3,"%s",
                             "CampaignTy::DoneCampaign");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\camp_obj.cpp",0x9d);
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
    iVar5 = st::fn_006AD4D0("E:\\__titans\\Start\\camp_obj.cpp",0xb5,0,errorCode,
                               "%s","CampaignTy::PaintCampaign");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\camp_obj.cpp",0xb5);
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
    text = st::fn_006F2C00("CMPG_BKG",1,(uint)DAT_0080874e);
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
      puVar6 = &pCVar2->field_00FF;
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
  int iVar2;
  int iVar3;
  CampaignTy *this_00;
  DWORD DVar5;
  int iVar6;
  uint uVar6;
  DWORD *pDVar7;
  int *piVar8;
  int iVar11;
  undefined4 *puVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
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
  DVar5 = st::external_000000DA();
  this->field_0061 = DVar5;
  local_c4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c4;
  iVar6 = st::fn_0072D7F0(local_c4.jumpBuffer,0);
  this_00 = local_c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_c4.previous;
    iVar11 = st::fn_006AD4D0("E:\\__titans\\Start\\camp_obj.cpp",0x117,0,iVar6,
                                "%s","CampaignTy::NoneCampaign");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,"E:\\__titans\\Start\\camp_obj.cpp",0x117);
    return;
  }
  st::fn_0040261C(local_c);
  st::fn_00404F4D(this_00);
  cVar1 = this_00->field_0065;
  if (cVar1 == '\x01') {
    iVar12 = 0;
    if (this_00->field_009A != '\0') {
      puVar11 = (uint *)&this_00->field_0x221;
      do {
        if (((*(int *)((int)puVar11 + -0x165) != 0) && (*(char *)((int)puVar11 + -0x13f) != '\0'))
           && (puVar11[9] <= this_00->field_0061 - puVar11[10])) {
          puVar11[10] = this_00->field_0061;
          uVar6 = puVar11[-5];
          puVar11[-5] = uVar6 + 1;
          if ((int)puVar11[-4] <= (int)(uVar6 + 1)) {
            puVar11[-5] = 0;
          }
          if (puVar11[-6] != 0xffffffff) {
            st::fn_006B3730
                      ((uint *)puVar11[0xb],puVar11[-6],puVar11[-5],*puVar11,puVar11[1]);
          }
        }
        iVar12 = iVar12 + 1;
        puVar11 = (uint *)((int)puVar11 + 0x1fb);
      } while (iVar12 < (int)(uint)(byte)this_00->field_009A);
    }
  }
  else if (cVar1 == '\x03') {
    iVar12 = 0;
    uVar6 = (uint)(byte)this_00->field_009A;
    if (uVar6 != 0) {
      do {
        if (*(int *)(&this_00->field_0xbc + iVar12 * 0x1fb) != 0) {
          if (this_00->field_0061 - *(int *)((int)&this_00->field_0127 + iVar12 * 0x1fb) <
              *(uint *)((int)&this_00->field_0123 + iVar12 * 0x1fb)) {
            iVar12 = 0;
            local_8 = 0;
            if (uVar6 != 0) {
              pDVar7 = (DWORD *)&this_00->field_0x249;
              do {
                if (*(char *)((int)pDVar7 + -0x167) != '\0') {
                  *pDVar7 = this_00->field_0061;
                }
                iVar12 = iVar12 + 1;
                pDVar7 = (DWORD *)((int)pDVar7 + 0x1fb);
              } while (iVar12 < (int)(uint)(byte)this_00->field_009A);
            }
          }
          else {
            iVar10 = *(int *)((int)&this_00->field_00EB + iVar12 * 0x1fb);
            if (iVar10 < *(int *)(&this_00->field_0xef + iVar12 * 0x1fb) + -1) {
              if ((iVar10 == 0) &&
                 (uVar6 = *(uint *)((int)&this_00->field_00E7 + iVar12 * 0x1fb), uVar6 != 0xffffffff
                 )) {
                st::fn_006B34D0
                          (*(uint **)((int)&this_00->field_012B + iVar12 * 0x1fb),uVar6,0xfffffffe,
                           *(uint *)((int)&this_00->field_00FF + iVar12 * 0x1fb),
                           *(uint *)((int)&this_00->field_0103 + iVar12 * 0x1fb));
              }
              *(int *)((int)&this_00->field_00EB + iVar12 * 0x1fb) =
                   *(int *)((int)&this_00->field_00EB + iVar12 * 0x1fb) + 1;
              uVar6 = *(uint *)((int)&this_00->field_00E7 + iVar12 * 0x1fb);
              if (uVar6 != 0xffffffff) {
                st::fn_006B3730
                          (*(uint **)((int)&this_00->field_012B + iVar12 * 0x1fb),uVar6,
                           *(uint *)((int)&this_00->field_00EB + iVar12 * 0x1fb),
                           *(uint *)((int)&this_00->field_00FF + iVar12 * 0x1fb),
                           *(uint *)((int)&this_00->field_0103 + iVar12 * 0x1fb));
              }
              local_8 = 0;
            }
            else {
              iVar10 = *(int *)((int)&this_00->field_017C + iVar12 * 0x1fb);
              if (iVar10 < *(int *)(&this_00->field_0x180 + iVar12 * 0x1fb) + -3) {
                if (iVar10 == 0) {
                  uVar6 = *(uint *)((int)&this_00->field_0178 + iVar12 * 0x1fb);
                  if (uVar6 != 0xffffffff) {
                    st::fn_006B34D0
                              (*(uint **)((int)&this_00->field_01BC + iVar12 * 0x1fb),uVar6,
                               0xfffffffe,*(uint *)((int)&this_00->field_0190 + iVar12 * 0x1fb),
                               *(uint *)((int)&this_00->field_0194 + iVar12 * 0x1fb));
                  }
                  if (((&this_00->field_00E2)[iVar12 * 0x1fb] != '\0') &&
                     (uVar6 = *(uint *)((int)&this_00->field_0209 + iVar12 * 0x1fb),
                     uVar6 != 0xffffffff)) {
                    st::fn_006B34D0
                              (*(uint **)((int)&this_00->field_024D + iVar12 * 0x1fb),uVar6,
                               0xfffffffe,*(uint *)(&this_00->field_0x221 + iVar12 * 0x1fb),
                               *(uint *)(&this_00->field_0x225 + iVar12 * 0x1fb));
                  }
                }
                *(int *)((int)&this_00->field_017C + iVar12 * 0x1fb) =
                     *(int *)((int)&this_00->field_017C + iVar12 * 0x1fb) + 1;
                uVar6 = *(uint *)((int)&this_00->field_0178 + iVar12 * 0x1fb);
                if (uVar6 != 0xffffffff) {
                  st::fn_006B3730
                            (*(uint **)((int)&this_00->field_01BC + iVar12 * 0x1fb),uVar6,
                             *(uint *)((int)&this_00->field_017C + iVar12 * 0x1fb),
                             *(uint *)((int)&this_00->field_0190 + iVar12 * 0x1fb),
                             *(uint *)((int)&this_00->field_0194 + iVar12 * 0x1fb));
                }
                st::fn_00404BF1(this_00,0x1e,'\x01',-1);
                local_8 = 0;
              }
            }
          }
        }
        iVar12 = iVar12 + 1;
        uVar6 = (uint)(byte)this_00->field_009A;
      } while (iVar12 < (int)uVar6);
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      iVar10 = 1;
      memset(local_80, 0, 0x58); /* compiler bulk-zero initialization */
      iVar12 = 0;
      memset(local_284, 0, 0x1c0); /* compiler bulk-zero initialization */
      puVar9 = local_284 + 1;
      iVar12 = 3;
      piVar8 = (int *)&this_00->field_0x491;
      do {
        iVar2 = piVar8[0x19];
        puVar9[-1] = iVar10;
        iVar3 = *piVar8;
        *puVar9 = 0;
        puVar9[2] = iVar2 + iVar3;
        puVar9[4] = piVar8[2];
        iVar10 = iVar10 + 1;
        puVar9[3] = piVar8[0x1a] + piVar8[1];
        puVar9[5] = piVar8[3];
        puVar9 = puVar9 + 0x1c;
        iVar12 = iVar12 + -1;
        piVar8 = (int *)((int)piVar8 + 0x1fb);
      } while (iVar12 != 0);
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
      (**(code **)(*(int *)this_00->field_000C + 8))(5,&this_00->field_0066,0,local_80,0);
      iVar12 = this_00->field_1A5B;
      if (*(int *)(iVar12 + 0x2e6) != 0) {
        memset(&local_28, 0, 0x1a); /* compiler bulk-zero initialization */
        local_1c = 1;
        local_1e = 1;
        STPiece<2,2>(local_28) = 1;
        st::fn_00404B51(*(MMsgTy **)(iVar12 + 0x2e6),(int)&local_28);
      }
      this_00->field_0065 = 1;
      g_currentExceptionFrame = local_c4.previous;
      return;
    }
  }
  else if (cVar1 == '\x04') {
    iVar12 = 0;
    if (this_00->field_009A != '\0') {
      puVar11 = &this_00->field_0178;
      do {
        if (this_00->field_0061 - *(int *)((int)puVar11 + -0x51) < *(uint *)((int)puVar11 + -0x55))
        {
LAB_00591d08:
          local_8 = 0;
        }
        else {
          if (*(char *)((int)puVar11 + -0xbd) != '\0') {
            if (*puVar11 != 0xffffffff) {
              st::fn_006B3AF0((int *)puVar11[0x11],*puVar11);
            }
            if ((*(char *)((int)puVar11 + -0x96) != '\0') &&
               (STField<uint>(puVar11,0x91) != 0xffffffff)) {
              st::fn_006B3AF0(STField<int *>(puVar11,0xd5),STField<uint>(puVar11,0x91));
            }
            *(undefined1 *)((int)puVar11 + -0xbd) = 0;
          }
          if (0 < *(int *)((int)puVar11 + -0x8d)) {
            uVar6 = *(int *)((int)puVar11 + -0x8d) - 1;
            *(uint *)((int)puVar11 + -0x8d) = uVar6;
            if (*(uint *)((int)puVar11 + -0x91) != 0xffffffff) {
              st::fn_006B3730
                        (*(uint **)((int)puVar11 + -0x4d),*(uint *)((int)puVar11 + -0x91),uVar6,
                         *(uint *)((int)puVar11 + -0x79),*(uint *)((int)puVar11 + -0x75));
            }
            goto LAB_00591d08;
          }
        }
        iVar12 = iVar12 + 1;
        puVar11 = (uint *)((int)puVar11 + 0x1fb);
      } while (iVar12 < (int)(uint)(byte)this_00->field_009A);
    }
    iVar12 = 0;
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      this_00->field_0065 = 2;
      if (this_00->field_009A != '\0') {
        puVar11 = &this_00->field_00E7;
        do {
          if (*puVar11 != 0xffffffff) {
            st::fn_006B3AF0((int *)puVar11[0x11],*puVar11);
          }
          iVar12 = iVar12 + 1;
          puVar11 = (uint *)((int)puVar11 + 0x1fb);
        } while (iVar12 < (int)(uint)(byte)this_00->field_009A);
      }
      if (*(int *)(&this_00->field_0xd1 + (uint)(byte)this_00->field_1A5A * 0x1fb) != 0) {
        st::fn_006E3B50
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(&this_00->field_0xc1 + (uint)(byte)this_00->field_1A5A * 0x1fb));
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
      puVar1 = &local_8->field_0x1bf8;
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
  iVar5 = st::fn_006AD4D0("E:\\__titans\\Start\\camp_obj.cpp",0x12d,0,iVar4,"%s",
                             "CampaignTy::LightPalette");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\camp_obj.cpp",0x12d);
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
  int iVar4;
  uint *puVar5;
  CampaignTy *this_00;
  uint uVar6;
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
      uVar6 = 0x96;
      puVar5 = &this_00->field_0123;
      do {
        DVar3 = st::external_000000DA();
        puVar5[1] = DVar3;
        *puVar5 = uVar6;
        *(undefined1 *)(puVar5 + -0x1a) = 1;
        iVar2 = iVar2 + 1;
        uVar6 = uVar6 + 0x96;
        puVar5 = (uint *)((int)puVar5 + 0x1fb);
        this_00 = local_8;
      } while (iVar2 < (int)(uint)(byte)local_8->field_009A);
    }
    this_00->field_0065 = 4;
    st::fn_00404BF1(this_00,2,'\x01',-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\camp_obj.cpp",0x13c,0,iVar2,"%s",
                             "CampaignTy::CloseButtons");
  if (iVar4 == 0) {
    st::fn_006A5E40(iVar2,0,"E:\\__titans\\Start\\camp_obj.cpp",0x13c);
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
    iVar5 = st::fn_006AD4D0("E:\\__titans\\Start\\camp_obj.cpp",0x1b3,0,iVar3,"%s"
                               ,"CampaignTy::AnimationCampaign");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\camp_obj.cpp",0x1b3);
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
      local_24[5] = local_24[5] + -1;
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
    local_24[5] = local_24[5] + -1;
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
    local_24[6] = local_24[6] + 4;
    local_24[5] = local_24[5] + 0x17;
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
    iVar11 = st::fn_006AD4D0("E:\\__titans\\Start\\camp_obj.cpp",0x24f,0,local_EAX_49,
                                "%s","CampaignTy::GetMessage");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_49,0,"E:\\__titans\\Start\\camp_obj.cpp",0x24f);
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
        text = st::fn_006F2C00("CMPG_BKG",1,(uint)DAT_0080874e);
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
    this_00->field_0051 = message->arg0;
    st::fn_00404DB8((MTaskTy *)this_00);
    break;
  case MESS_WAITTY_6943:
    st::fn_004036C0(this_00,0x6942,(message->arg0).u32,0);
    this_00->CloseButtons();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pMVar4 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
    if (pMVar4 != nullptr) {
      st::fn_00401FA5(pMVar4,1,0,1);
    }
    break;
  case MESS_SHARED_6940|MESS_SHARED_0008:
    st::external_00000080(&CHAR_00h_0080f22a,"%sMISS%d00.AVI",&CHAR_00h_00807784,(uint)DAT_0080874e);
    this_00->field_0049 = 1;
    this_00->field_004D = 0x7101;
    this_00->field_0051 = 3;
    this_00->field_0055 = 1;
    st::fn_00404DB8((MTaskTy *)this_00);
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case MESS_FSGSTY_694A:
    if ((((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) && (DAT_0080874e == 3)) &&
       (pMVar4 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6), pMVar4 != nullptr)) {
      st::fn_00403FA8(pMVar4,0x2530,'\0',nullptr,nullptr,nullptr,0,
                         0);
    }
    else {
      pcVar9_mg0 = PTR_s_TUTOR_0079bff0;
      if (this_00->field_1FFC == 0) {
        pcVar9_mg0 = PTR_DAT_0079bfec;
      }
      st::external_00000080(&CHAR_00h_0080ed16,"%s%s%s%d01",&CHAR_00h_00807680,st_global_0079BFE8
                ,pcVar9_mg0,(uint)DAT_0080874e);
      pcVar9_mg1 = PTR_s_TUTOR_0079bff0;
      if (this_00->field_1FFC == 0) {
        pcVar9_mg1 = PTR_DAT_0079bfec;
      }
      st::external_00000080(&CHAR_00h_0080ef1e,"%s%s%d01",st_global_0079BFE8,pcVar9_mg1,
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
      DAT_008087a0 = 8;
      iVar17 = st::fn_00404B4C((STAppC *)&DAT_00807620,1);
      if (iVar17 != 0) {
        memset(&DAT_0080c522, 0, 0x27f0); /* compiler bulk-zero initialization */
        st::fn_004036C0(this_00,(-(uint)(this_00->field_1FFC != 0) & 8) + 0x6948,0,0);
        this_00->CloseButtons();
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pMVar4 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
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
    piVar3 = (message->arg0).ptr;
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
      iVar9 = (int)&this_00->vtable + iVar17 * 0x1fb;
      iVar8 = *(int *)(iVar9 + 0xef) + -1;
      break;
    case 1:
      iVar9 = (int)&this_00->vtable + iVar17 * 0x1fb;
      iVar8 = *(int *)(iVar9 + 0xef) + -2;
      break;
    default:
      goto switchD_005931dd_default;
    }
    *(int *)(iVar9 + 0xeb) = iVar8;
switchD_005931dd_default:
    uVar11 = *(uint *)((int)&this_00->field_00E7 + iVar17 * 0x1fb);
    local_c = piVar3;
    if (uVar11 != 0xffffffff) {
      st::fn_006B3730
                (*(uint **)((int)&this_00->field_012B + iVar17 * 0x1fb),uVar11,
                 *(uint *)((int)&this_00->field_00EB + iVar17 * 0x1fb),
                 *(uint *)((int)&this_00->field_00FF + iVar17 * 0x1fb),
                 *(uint *)((int)&this_00->field_0103 + iVar17 * 0x1fb));
    }
    if ((&this_00->field_00E2)[iVar17 * 0x1fb] != '\0') {
      switch(piVar3[1]) {
      case 0:
      case 2:
      case 3:
        *(int *)(&this_00->field_0x221 + iVar17 * 0x1fb) =
             *(int *)((int)&this_00->field_00FF + iVar17 * 0x1fb) +
             *(int *)(&this_00->field_0xab + iVar17 * 0x1fb);
        *(int *)(&this_00->field_0x225 + iVar17 * 0x1fb) =
             *(int *)((int)&this_00->field_0103 + iVar17 * 0x1fb) +
             *(int *)(&this_00->field_0xaf + iVar17 * 0x1fb);
        break;
      case 1:
        *(int *)(&this_00->field_0x221 + iVar17 * 0x1fb) =
             *(int *)((int)&this_00->field_00FF + iVar17 * 0x1fb) +
             *(int *)(&this_00->field_0xb3 + iVar17 * 0x1fb);
        *(int *)(&this_00->field_0x225 + iVar17 * 0x1fb) =
             *(int *)((int)&this_00->field_0103 + iVar17 * 0x1fb) +
             *(int *)(&this_00->field_0xb7 + iVar17 * 0x1fb);
      }
      uVar11 = *(uint *)((int)&this_00->field_0209 + iVar17 * 0x1fb);
      if (uVar11 != 0xffffffff) {
        st::fn_006B3730
                  (*(uint **)((int)&this_00->field_024D + iVar17 * 0x1fb),uVar11,
                   *(uint *)(&this_00->field_0x20d + iVar17 * 0x1fb),
                   *(uint *)(&this_00->field_0x221 + iVar17 * 0x1fb),
                   *(uint *)(&this_00->field_0x225 + iVar17 * 0x1fb));
      }
    }
    local_10 = *(undefined4 *)((int)&this_00->field_0194 + iVar17 * 0x1fb);
    iVar9 = *(int *)((int)&this_00->field_0190 + iVar17 * 0x1fb);
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
      *(int *)((int)&this_00->field_017C + iVar17 * 0x1fb) =
           *(int *)(&this_00->field_0x180 + iVar17 * 0x1fb) + -3;
      break;
    case 1:
      *(int *)((int)&this_00->field_0190 + iVar17 * 0x1fb) = iVar8 + iVar9;
      *(int *)((int)&this_00->field_0194 + iVar17 * 0x1fb) =
           *(int *)((int)&this_00->field_0194 + iVar17 * 0x1fb) + iVar10;
    case 3:
      iVar8 = *(int *)(&this_00->field_0x180 + iVar17 * 0x1fb) + -2;
LAB_00593378:
      *(int *)((int)&this_00->field_017C + iVar17 * 0x1fb) = iVar8;
      break;
    case 2:
      iVar8 = *(int *)(&this_00->field_0x180 + iVar17 * 0x1fb) + -1;
      goto LAB_00593378;
    }
    uVar11 = *(uint *)((int)&this_00->field_0178 + iVar17 * 0x1fb);
    if (uVar11 != 0xffffffff) {
      st::fn_006B3730
                (*(uint **)((int)&this_00->field_01BC + iVar17 * 0x1fb),uVar11,
                 *(uint *)((int)&this_00->field_017C + iVar17 * 0x1fb),
                 *(uint *)((int)&this_00->field_0190 + iVar17 * 0x1fb),
                 *(uint *)((int)&this_00->field_0194 + iVar17 * 0x1fb));
    }
    *(int *)((int)&this_00->field_0190 + iVar17 * 0x1fb) = iVar9;
    *(undefined4 *)((int)&this_00->field_0194 + iVar17 * 0x1fb) = local_10;
  }
switchD_005931ad_caseD_6944:
  g_currentExceptionFrame = local_54.previous;
  iVar7 = st::fn_00401280((MMObjTy *)this_00,message);
  return iVar7;
}

