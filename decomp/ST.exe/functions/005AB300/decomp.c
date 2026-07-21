#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::InitChooseMap

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21
    */

void __thiscall
ChooseMapTy::InitChooseMap(ChooseMapTy *this,ChooseMapTy_field_1A5FState param_1,byte param_2)

{
  undefined1 *puVar1;
  ChooseMapTy_field_1A5FState CVar2;
  AnonShape_006B5B10_E0D06CF1 *pAVar3;
  MMsgTy *this_00;
  StartSystemTy *pSVar4;
  code *pcVar5;
  CursorClassTy *this_01;
  ChooseMapTy *this_02;
  int iVar6;
  HANDLE pvVar7;
  ccFntTy *pcVar8;
  ushort *puVar9;
  uint *puVar10;
  AnonPointee_ChooseMapTy_1C7B *pAVar11;
  undefined4 *puVar12;
  HoloTy *pHVar13;
  AnonPointee_ChooseMapTy_1C8B *pAVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  int iVar20;
  char cVar21;
  undefined4 local_86c [256];
  char local_46c [32];
  undefined1 local_44c;
  undefined4 local_26c [7];
  InternalExceptionFrame local_250;
  undefined4 local_20c;
  undefined4 local_1ff;
  undefined4 local_1fb;
  undefined4 local_1f7;
  undefined4 local_1e5;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1be;
  undefined4 local_1b1;
  undefined4 local_1ad;
  undefined4 local_1a9;
  undefined4 local_149;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_122;
  undefined4 local_115;
  undefined4 local_111;
  undefined4 local_10d;
  undefined4 local_109;
  ChooseMapTy *local_10;
  uint local_c;
  uint local_8;

  local_250.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_250;
  local_10 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_250.jumpBuffer,0);
  this_02 = local_10;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_250.previous;
    iVar20 = ReportDebugMessage("E:\\__titans\\Start\\load_obj.cpp",0x15a,0,iVar6,
                                "%s","ChooseMapTy::InitChooseMap");
    if (iVar20 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Start\\load_obj.cpp",0x15a);
    return;
  }
  local_10->field_1A5F = param_1;
  if (2 < PTR_0081176c->field_02EB) {
    PTR_0081176c->field_02EB = 2;
  }
  _DAT_0080f32e = 0;
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
    }
    else if (PTR_00802a30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)PTR_00802a30->field_0060,PTR_00802a30->field_001C);
    }
  }
  uVar15 = 0xffffffff;
  pcVar18 = &this_02->field_1CA3;
  pcVar17 = &DAT_00807680;
  do {
    pcVar19 = pcVar17;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar19 = pcVar17 + 1;
    cVar21 = *pcVar17;
    pcVar17 = pcVar19;
  } while (cVar21 != '\0');
  uVar15 = ~uVar15;
  pcVar17 = pcVar19 + -uVar15;
  pcVar19 = pcVar18;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar19 = *(undefined4 *)pcVar17;
    pcVar17 = pcVar17 + 4;
    pcVar19 = pcVar19 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pcVar19 = *pcVar17;
    pcVar17 = pcVar17 + 1;
    pcVar19 = pcVar19 + 1;
  }
  switch(this_02->field_1A5F) {
  case CASE_1:
  case CASE_2:
  case CASE_4:
  case CASE_5:
    local_c = 0xffffffff;
    pcVar17 = PTR_s_CUSTOM__0079c050;
    do {
      pcVar19 = pcVar17;
      if (local_c == 0) break;
      local_c = local_c - 1;
      pcVar19 = pcVar17 + 1;
      cVar21 = *pcVar17;
      pcVar17 = pcVar19;
    } while (cVar21 != '\0');
    local_c = ~local_c;
    pcVar19 = pcVar19 + -local_c;
    iVar6 = -1;
    pcVar17 = pcVar18;
    do {
      pcVar18 = pcVar17;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar18 = pcVar17 + 1;
      cVar21 = *pcVar17;
      pcVar17 = pcVar18;
    } while (cVar21 != '\0');
    goto LAB_005ab4dc;
  case CASE_3:
    uVar15 = 0xffffffff;
    pcVar17 = PTR_s_MISSIONS__0079c054;
    do {
      pcVar19 = pcVar17;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar19 = pcVar17 + 1;
      cVar21 = *pcVar17;
      pcVar17 = pcVar19;
    } while (cVar21 != '\0');
    uVar15 = ~uVar15;
    iVar6 = -1;
    do {
      pcVar17 = pcVar18;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar17 = pcVar18 + 1;
      cVar21 = *pcVar18;
      pcVar18 = pcVar17;
    } while (cVar21 != '\0');
    pcVar19 = pcVar19 + -uVar15;
    pcVar18 = pcVar17 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar18 = pcVar18 + 4;
    }
    goto LAB_005ab4e5;
  case CASE_9:
  case CASE_A:
  case CASE_B:
  case CASE_C:
switchD_005ab3e3_caseD_9:
    uVar15 = 0xffffffff;
    pcVar18 = PTR_s_SAVEGAME__0079c04c;
    do {
      pcVar17 = pcVar18;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar17 = pcVar18 + 1;
      cVar21 = *pcVar18;
      pcVar18 = pcVar17;
    } while (cVar21 != '\0');
    uVar15 = ~uVar15;
    iVar6 = -1;
    pcVar18 = &this_02->field_1CA3;
    do {
      pcVar19 = pcVar18;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar19 = pcVar18 + 1;
      cVar21 = *pcVar18;
      pcVar18 = pcVar19;
    } while (cVar21 != '\0');
    pcVar18 = pcVar17 + -uVar15;
    pcVar17 = pcVar19 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar17 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar17 = pcVar17 + 1;
    }
    uVar15 = 0xffffffff;
    pcVar18 = (char *)&DAT_00807ddd;
    do {
      pcVar17 = pcVar18;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar17 = pcVar18 + 1;
      cVar21 = *pcVar18;
      pcVar18 = pcVar17;
    } while (cVar21 != '\0');
    uVar15 = ~uVar15;
    iVar6 = -1;
    pcVar18 = &this_02->field_1CA3;
    do {
      pcVar19 = pcVar18;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar19 = pcVar18 + 1;
      cVar21 = *pcVar18;
      pcVar18 = pcVar19;
    } while (cVar21 != '\0');
    pcVar18 = pcVar17 + -uVar15;
    pcVar17 = pcVar19 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar17 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar17 = pcVar17 + 1;
    }
    FUN_006b8280(&this_02->field_1CA3,&this_02->field_1CA3);
    break;
  case CASE_13:
    if (DAT_00803400 == 0xc) goto switchD_005ab3e3_caseD_9;
    local_c = 0xffffffff;
    pcVar17 = PTR_s_CUSTOM__0079c050;
    do {
      pcVar19 = pcVar17;
      if (local_c == 0) break;
      local_c = local_c - 1;
      pcVar19 = pcVar17 + 1;
      cVar21 = *pcVar17;
      pcVar17 = pcVar19;
    } while (cVar21 != '\0');
    local_c = ~local_c;
    pcVar19 = pcVar19 + -local_c;
    iVar6 = -1;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar17 = pcVar18 + 1;
      cVar21 = *pcVar18;
      pcVar18 = pcVar17;
    } while (cVar21 != '\0');
LAB_005ab4dc:
    pcVar18 = pcVar18 + -1;
    for (uVar16 = local_c >> 2; uVar15 = local_c, uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar18 = pcVar18 + 4;
    }
LAB_005ab4e5:
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar18 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar18 = pcVar18 + 1;
    }
  }
  uVar15 = 0xffffffff;
  puVar1 = &this_02->field_1DA7;
  pcVar18 = &this_02->field_1CA3;
  do {
    pcVar17 = pcVar18;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar17 = pcVar18 + 1;
    cVar21 = *pcVar18;
    pcVar18 = pcVar17;
  } while (cVar21 != '\0');
  uVar15 = ~uVar15;
  pcVar18 = pcVar17 + -uVar15;
  pcVar17 = puVar1;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar17 = *(undefined4 *)pcVar18;
    pcVar18 = pcVar18 + 4;
    pcVar17 = pcVar17 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pcVar17 = *pcVar18;
    pcVar18 = pcVar18 + 1;
    pcVar17 = pcVar17 + 1;
  }
  FUN_006b78c0(puVar1,puVar1);
  pvVar7 = FindFirstChangeNotificationA(&this_02->field_1DA7,0,1);
  this_02->field_1C8F = pvVar7;
  if (pvVar7 == (HANDLE)0xffffffff) {
    this_02->field_1C8F = (HANDLE)0x0;
  }
  FUN_006b8280(&this_02->field_1CA3,&this_02->field_1CA3);
  FUN_006b8280(&this_02->field_1DA7,&this_02->field_1DA7);
  pcVar8 = (ccFntTy *)FUN_0070a9f0(g_cMf32_00806780,"LOADSINGLE",0,1);
  PTR_0081176c->field_002C = pcVar8;
  this_02->field_005D = PTR_0081176c->field_002C;
  FUN_006bc360((ushort *)PTR_0081176c->field_002C,local_86c,(int *)0x0);
  this_02->field_1A5B->field_0140 = 0x1f;
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_86c,0,0x100,0x8b,0x15,(undefined4 *)&this_02->field_1A5B->field_0x144);
  puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,"FILE_LIST",0xffffffff,0,1,0,(undefined4 *)0x0);
  this_02->field_1C7F = puVar9;
  puVar9 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,1,"MM_MAPB",0,1);
  DibPut((AnonShape_006B5B10_E0D06CF1 *)PTR_0081176c->field_02F0,0,0,'\x01',(byte *)puVar9);
  *(undefined4 *)&this_02->field_0x20b3 = 0x1010101;
  this_02->field_20B7 = 1;
  switch(this_02->field_1A5F) {
  case CASE_1:
  case CASE_2:
  case CASE_3:
  case CASE_9:
  case CASE_A:
  case CASE_B:
switchD_005ab64d_caseD_1:
    this_02->field_20B7 = 0;
    goto switchD_005ab66b_caseD_6;
  default:
    switch(param_2) {
    case 4:
    case 5:
    case 7:
    case 0xc:
    case 0x14:
      goto switchD_005ab64d_caseD_1;
    default:
switchD_005ab66b_caseD_6:
      switch(param_2) {
      case 1:
      case 2:
      case 4:
      case 5:
      case 0x14:
        this_02->field_0x20b4 = 0;
      case 6:
      case 7:
        this_02->field_0x20b5 = 0;
      default:
        pAVar3 = (AnonShape_006B5B10_E0D06CF1 *)PTR_0081176c->field_0544;
        local_c = param_2 - 1;
        FUN_006b4170(pAVar3,0,0,0,pAVar3->field_0004,pAVar3->field_0008,0xff);
        if ((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548 !=
            (AnonShape_006B5570_4D68B99C *)0x0) {
          FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548);
        }
        puVar10 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
        PTR_0081176c->field_0548 = puVar10;
        uVar15 = param_2 - 1;
        if (PTR_0081176c->field_0389 != 0) {
          this_02->field_002D = 0x28;
          *(undefined2 *)&this_02->field_0x31 = 1;
          *(undefined2 *)&this_02->field_0x33 = *(undefined2 *)(PTR_0081176c->field_0548 + 8);
          FUN_006e6080(this_02,2,PTR_0081176c->field_0389,(undefined4 *)&this_02->field_0x1d);
          this_02->field_002D = 0x22;
          *(undefined2 *)&this_02->field_0x31 = 0;
          *(undefined2 *)&this_02->field_0x33 = 0;
          FUN_006e6080(this_02,2,PTR_0081176c->field_0389,(undefined4 *)&this_02->field_0x1d);
          uVar15 = local_c;
        }
        switch(uVar15) {
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 0xb:
        case 0x10:
        case 0x13:
          break;
        default:
          DarkScreen(DAT_0080759c,1,0);
        }
        this_00 = this_02->field_1A5B->field_02E6;
        if (this_00 != (MMsgTy *)0x0) {
          MMsgTy::ShowSprites(this_00);
          this_02->field_1A5B->field_02E6->field_1CAB = this_02->field_0008;
        }
        PaintChooseMap(this_02,'\x01');
        SpriteClassTy::InitSprite
                  ((SpriteClassTy *)&this_02->field_1A70,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,
                   0);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(this_02->field_1A70 + 4))(DAT_00806784,7,0,"MM_SLDUP",0xffffffff);
        this_02->field_1A8C = 0x2f8;
        this_02->field_1A90 = 0x3c;
        this_02->field_1A78 = 0;
        SpriteClassTy::InitSprite
                  ((SpriteClassTy *)&this_02->field_1B01,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,
                   0);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(this_02->field_1B01 + 4))(DAT_00806784,7,0,"MM_SLDDN",0xffffffff);
        this_02->field_1B1D = 0x2f8;
        this_02->field_1B21 = 0x1b8;
        this_02->field_1B09 = 0;
        SpriteClassTy::InitSprite
                  ((SpriteClassTy *)&this_02->field_1B92,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,
                   0);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(this_02->field_1B92 + 4))(DAT_00806784,7,0,"MM_SLDT",0xffffffff);
        iVar6 = 1;
        this_02->field_1BAE = 0x2fe;
        this_02->field_1BB2 = 0x5c;
        puVar12 = (undefined4 *)&this_02->field_005D->field_0x28;
        this_02->field_1B9A = 0;
        uVar15 = FUN_006b4fe0((int)this_02->field_005D);
        pAVar11 = (AnonPointee_ChooseMapTy_1C7B *)
                  FUN_006b50c0(0x1e4,399,(uint)*(ushort *)&this_02->field_005D->field_0xe,uVar15,
                               puVar12,iVar6);
        this_02->field_1C7B = pAVar11;
        uVar15 = pAVar11[1].field_0008;
        if (uVar15 == 0) {
          uVar15 = ((uint)*(ushort *)&pAVar11[1].field_0x2 * pAVar11->field_0004 + 0x1f >> 3 &
                   0x1ffffffc) * pAVar11->field_0008;
        }
        puVar12 = (undefined4 *)FUN_006b4fa0((int)pAVar11);
        for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        puVar10 = &this_02->field_1C23;
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined1 *)puVar12 = 0;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
        uVar15 = 0x3f;
        do {
          FUN_006b2330((uint)DAT_008075a8,puVar10,0x31,0x40213a,this_02->field_1C7B->field_0004,0x13
                       ,(uint)this_02);
          Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar10,0xffffffff,0x114,uVar15);
          uVar15 = uVar15 + 0x13;
          puVar10 = puVar10 + 1;
        } while ((int)uVar15 < 0x1e1);
        CreateCtrls(this_02,'\0');
        PrepFiles(this_02,this_02->field_1C93);
        FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0x204,0x19d,
                     (uint)&this_02->field_1A5B->field_0140);
        Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x112,0x38);
        pHVar13 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
        if (pHVar13 == (HoloTy *)0x0) {
          pHVar13 = (HoloTy *)0x0;
        }
        else {
          pHVar13->field_0002 = 1;
          pHVar13->field_0000 = 0;
          pHVar13->field_0003 = -1;
          pHVar13->field_0001 = CASE_2;
          pHVar13->field_0007 = 0;
          pHVar13->field_000B = 0;
          *(undefined4 *)&pHVar13->field_0xf = 0;
          *(undefined4 *)&pHVar13->field_0x1b = 1;
          pHVar13->field_0013 = 1;
          pHVar13->field_0017 = -1;
          pHVar13->field_0027 = 0;
          pHVar13->field_0023 = 0;
          pHVar13->field_002F = 1;
          pHVar13->field_002B = 1;
        }
        this_02->field_20B8 = pHVar13;
        if (pHVar13 != (HoloTy *)0x0) {
          uVar16 = 0;
          cVar21 = '\x01';
          uVar15 = 0x10;
          iVar20 = 1;
          iVar6 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x38,0x204,0x19d);
          uVar15 = HoloTy::Init(this_02->field_20B8,CASE_2,0x112,0x38,iVar6,iVar20,uVar15,cVar21,
                                uVar16);
          if (uVar15 != 0) {
            pHVar13 = this_02->field_20B8;
            pHVar13->field_0002 = 1;
            pHVar13->field_0017 = pHVar13->field_0013;
            uVar15 = this_02->field_20B8->field_0003;
            if (-1 < (int)uVar15) {
              FUN_006b3af0(DAT_008075a8,uVar15);
            }
            if (this_02->field_1A74 != 0xffffffff) {
              FUN_006b3af0((int *)this_02->field_1AB8,this_02->field_1A74);
            }
            if (this_02->field_1B05 != 0xffffffff) {
              FUN_006b3af0((int *)this_02->field_1B49,this_02->field_1B05);
            }
            if (this_02->field_1B96 != 0xffffffff) {
              FUN_006b3af0((int *)this_02->field_1BDA,this_02->field_1B96);
            }
            puVar10 = &this_02->field_1C23;
            iVar6 = 0x16;
            do {
              FUN_006b3af0(DAT_008075a8,*puVar10);
              puVar10 = puVar10 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
        if (local_8 != 0xffffffff) {
          FUN_006b3bb0(DAT_008075a8,local_8);
          local_8 = 0xffffffff;
        }
        if (this_02->field_0x20b4 == '\0') {
          if (PTR_0081176c->field_0391 != 0xffffffff) {
            Library::DKW::DDX::FUN_006b34d0
                      ((uint *)PTR_0081176c->field_03D5,PTR_0081176c->field_0391,0xfffffffe,
                       PTR_0081176c->field_03A9,PTR_0081176c->field_03AD);
          }
          if (PTR_0081176c->field_0422 != 0xffffffff) {
            Library::DKW::DDX::FUN_006b34d0
                      ((uint *)PTR_0081176c->field_0466,PTR_0081176c->field_0422,0xfffffffe,
                       PTR_0081176c->field_043A,PTR_0081176c->field_043E);
          }
          if (PTR_0081176c->field_04B3 != 0xffffffff) {
            Library::DKW::DDX::FUN_006b34d0
                      ((uint *)PTR_0081176c->field_04F7,PTR_0081176c->field_04B3,0xfffffffe,
                       PTR_0081176c->field_04CB,PTR_0081176c->field_04CF);
          }
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_0540);
        }
        else {
          FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0xf9,0x121,
                       (uint)&this_02->field_1A5B->field_0140);
          Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,10,0xb4);
          pHVar13 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
          if (pHVar13 == (HoloTy *)0x0) {
            pHVar13 = (HoloTy *)0x0;
          }
          else {
            pHVar13->field_0002 = 1;
            pHVar13->field_0000 = 0;
            pHVar13->field_0003 = -1;
            pHVar13->field_0001 = CASE_2;
            pHVar13->field_0007 = 0;
            pHVar13->field_000B = 0;
            *(undefined4 *)&pHVar13->field_0xf = 0;
            *(undefined4 *)&pHVar13->field_0x1b = 1;
            pHVar13->field_0013 = 1;
            pHVar13->field_0017 = -1;
            pHVar13->field_0027 = 0;
            pHVar13->field_0023 = 0;
            pHVar13->field_002F = 1;
            pHVar13->field_002B = 1;
          }
          this_02->field_20BC = pHVar13;
          if (pHVar13 != (HoloTy *)0x0) {
            uVar16 = 0;
            cVar21 = '\x01';
            uVar15 = 0x10;
            iVar20 = 1;
            iVar6 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x121);
            uVar15 = HoloTy::Init(this_02->field_20BC,CASE_4,10,0xb4,iVar6,iVar20,uVar15,cVar21,
                                  uVar16);
            if (uVar15 != 0) {
              pHVar13 = this_02->field_20BC;
              pHVar13->field_0002 = 1;
              pHVar13->field_0017 = pHVar13->field_0013;
              uVar15 = this_02->field_20BC->field_0003;
              if (-1 < (int)uVar15) {
                FUN_006b3af0(DAT_008075a8,uVar15);
              }
              if (PTR_0081176c->field_0391 != 0xffffffff) {
                FUN_006b3af0((int *)PTR_0081176c->field_03D5,PTR_0081176c->field_0391);
              }
              if (PTR_0081176c->field_0422 != 0xffffffff) {
                FUN_006b3af0((int *)PTR_0081176c->field_0466,PTR_0081176c->field_0422);
              }
              if (PTR_0081176c->field_04B3 != 0xffffffff) {
                FUN_006b3af0((int *)PTR_0081176c->field_04F7,PTR_0081176c->field_04B3);
              }
              FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_0540);
            }
          }
          if (local_8 != 0xffffffff) {
            FUN_006b3bb0(DAT_008075a8,local_8);
            local_8 = 0xffffffff;
          }
        }
        if (this_02->field_20B7 == '\0') {
          CVar2 = this_02->field_1A5F;
          if ((((CVar2 == CASE_C) || (CVar2 == CASE_4)) || (CVar2 == CASE_5)) || (CVar2 == CASE_13))
          {
            if (PTR_0081176c->field_0560 != 0xffffffff) {
              Library::DKW::DDX::FUN_006b34d0
                        ((uint *)PTR_0081176c->field_05A4,PTR_0081176c->field_0560,0xfffffffe,
                         PTR_0081176c->field_0578,PTR_0081176c->field_057C);
            }
            if (PTR_0081176c->field_05F1 != 0xffffffff) {
              Library::DKW::DDX::FUN_006b34d0
                        ((uint *)PTR_0081176c->field_0635,PTR_0081176c->field_05F1,0xfffffffe,
                         PTR_0081176c->field_0609,PTR_0081176c->field_060D);
            }
            Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_0558);
            Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_0554);
          }
          else {
            if (PTR_0081176c->field_0560 != 0xffffffff) {
              FUN_006b3af0((int *)PTR_0081176c->field_05A4,PTR_0081176c->field_0560);
            }
            if (PTR_0081176c->field_05F1 != 0xffffffff) {
              FUN_006b3af0((int *)PTR_0081176c->field_0635,PTR_0081176c->field_05F1);
            }
            FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_0558);
            FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_0554);
          }
        }
        else {
          FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403b61,400,0x62,
                       (uint)&this_02->field_1A5B->field_0140);
          Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,200,0x1f1);
          if (PTR_0081176c->field_0560 != 0xffffffff) {
            Library::DKW::DDX::FUN_006b34d0
                      ((uint *)PTR_0081176c->field_05A4,PTR_0081176c->field_0560,0xfffffffe,
                       PTR_0081176c->field_0578,PTR_0081176c->field_057C);
          }
          if (PTR_0081176c->field_05F1 != 0xffffffff) {
            Library::DKW::DDX::FUN_006b34d0
                      ((uint *)PTR_0081176c->field_0635,PTR_0081176c->field_05F1,0xfffffffe,
                       PTR_0081176c->field_0609,PTR_0081176c->field_060D);
          }
          pHVar13 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
          if (pHVar13 == (HoloTy *)0x0) {
            pHVar13 = (HoloTy *)0x0;
          }
          else {
            pHVar13->field_0002 = 1;
            pHVar13->field_0000 = 0;
            pHVar13->field_0003 = -1;
            pHVar13->field_0001 = CASE_2;
            pHVar13->field_0007 = 0;
            pHVar13->field_000B = 0;
            *(undefined4 *)&pHVar13->field_0xf = 0;
            *(undefined4 *)&pHVar13->field_0x1b = 1;
            pHVar13->field_0013 = 1;
            pHVar13->field_0017 = -1;
            pHVar13->field_0027 = 0;
            pHVar13->field_0023 = 0;
            pHVar13->field_002F = 1;
            pHVar13->field_002B = 1;
          }
          this_02->field_20C0 = pHVar13;
          if (pHVar13 != (HoloTy *)0x0) {
            uVar16 = 0;
            cVar21 = '\x01';
            uVar15 = 0x10;
            iVar20 = 1;
            iVar6 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,200,0x1f1,400,0x62);
            uVar15 = HoloTy::Init(this_02->field_20C0,CASE_1,200,0x1f1,iVar6,iVar20,uVar15,cVar21,
                                  uVar16);
            if (uVar15 != 0) {
              pHVar13 = this_02->field_20C0;
              pHVar13->field_0002 = 1;
              pHVar13->field_0017 = pHVar13->field_0013;
              uVar15 = this_02->field_20C0->field_0003;
              if (-1 < (int)uVar15) {
                FUN_006b3af0(DAT_008075a8,uVar15);
              }
              if (PTR_0081176c->field_0560 != 0xffffffff) {
                FUN_006b3af0((int *)PTR_0081176c->field_05A4,PTR_0081176c->field_0560);
              }
              if (PTR_0081176c->field_05F1 != 0xffffffff) {
                FUN_006b3af0((int *)PTR_0081176c->field_0635,PTR_0081176c->field_05F1);
              }
              FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_0558);
              FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_0554);
            }
          }
          if (local_8 != 0xffffffff) {
            FUN_006b3bb0(DAT_008075a8,local_8);
            local_8 = 0xffffffff;
          }
        }
        iVar6 = 1;
        puVar12 = (undefined4 *)&this_02->field_005D->field_0x28;
        uVar15 = FUN_006b4fe0((int)this_02->field_005D);
        pAVar14 = (AnonPointee_ChooseMapTy_1C8B *)
                  FUN_006b50c0(0x172,0x18,(uint)*(ushort *)&this_02->field_005D->field_0xe,uVar15,
                               puVar12,iVar6);
        this_02->field_1C8B = pAVar14;
        uVar15 = pAVar14[1].field_0008;
        if (uVar15 == 0) {
          uVar15 = ((uint)*(ushort *)&pAVar14[1].field_0x2 * pAVar14->field_0004 + 0x1f >> 3 &
                   0x1ffffffc) * pAVar14->field_0008;
        }
        puVar12 = (undefined4 *)FUN_006b4fa0((int)pAVar14);
        for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *puVar12 = 0xffffffff;
          puVar12 = puVar12 + 1;
        }
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined1 *)puVar12 = 0xff;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
        FUN_006b5b10((AnonShape_006B5B10_E0D06CF1 *)this_02->field_1C8B,0,0,1,
                     ((AnonShape_006B5B10_E0D06CF1 *)this_02->field_1C8B)->field_0004 + -1,1,
                     (byte)this_02->field_1A5B->field_0140,0xd);
        pAVar14 = this_02->field_1C8B;
        puVar12 = &this_02->field_1C87;
        FUN_006b2330((uint)DAT_008075a8,puVar12,0x31,0x404acf,pAVar14->field_0004,
                     pAVar14->field_0008,(uint)pAVar14);
        Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar12,0xffffffff,0x112,0x1d3);
        FUN_006b3af0(DAT_008075a8,*puVar12);
        switch(local_c) {
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 0xb:
        case 0x10:
        case 0x13:
          break;
        default:
          thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,(int)this_02->field_005D,10,2);
        }
        pHVar13 = this_02->field_20B8;
        if (((pHVar13 != (HoloTy *)0x0) && (pHVar13->field_0000 != '\0')) &&
           (-1 < pHVar13->field_0003)) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pHVar13->field_0003);
        }
        pHVar13 = this_02->field_20BC;
        if (((pHVar13 != (HoloTy *)0x0) && (pHVar13->field_0000 != '\0')) &&
           (-1 < pHVar13->field_0003)) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pHVar13->field_0003);
        }
        pHVar13 = this_02->field_20C0;
        if (((pHVar13 != (HoloTy *)0x0) && (pHVar13->field_0000 != '\0')) &&
           (-1 < pHVar13->field_0003)) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pHVar13->field_0003);
        }
        this_01 = PTR_00802a30;
        if (PTR_00802a30 != (CursorClassTy *)0x0) {
          iVar6 = PTR_00802a30->field_00C9;
          iVar20 = PTR_00802a30->field_00C5;
          PTR_00802a30->field_0493 = 1;
          this_01->field_0494 = 0xffff;
          CursorClassTy::SetGCType(this_01,CASE_0,iVar20,iVar6);
          CursorClassTy::DrawSprite(this_01,this_01->field_00C5,this_01->field_00C9);
          this_01->field_00D2 = 0;
          this_01->field_04DF = 0xffffffff;
        }
        puVar12 = &local_20c;
        for (iVar6 = 0x7e; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        CVar2 = this_02->field_1A5F;
        *(undefined2 *)puVar12 = 0;
        *(undefined1 *)((int)puVar12 + 2) = 0;
        local_13c = this_02->field_0008;
        this_02->field_0065 = 3;
        local_149 = 0x2340;
        local_138 = 2;
        local_134 = 0x6943;
        local_122 = 0x24bc;
        local_111 = 2;
        switch(CVar2) {
        case CASE_4:
        case CASE_5:
        case CASE_C:
          local_10d = 0x694d;
          break;
        default:
          local_10d = 0x6943;
          local_109 = 1;
          break;
        case CASE_13:
          local_10d = 0x6951;
        }
      }
      switch(CVar2) {
      case CASE_1:
      case CASE_2:
        local_20c = 0x2348;
        local_1fb = 2;
        local_1f7 = 0x694b;
        local_1e5 = 0x2343;
        local_1d4 = 2;
        local_1d0 = 0x694a;
        local_1be = 0x2349;
        local_1ad = 2;
        local_1a9 = 0x694c;
        local_1ff = local_13c;
        local_1d8 = local_13c;
        local_1b1 = local_13c;
        break;
      case CASE_3:
        this_02->field_0x20b5 = 0;
        local_1e5 = 0x2343;
        local_1d4 = 2;
        local_1d0 = 0x6956;
        local_1d8 = local_13c;
        break;
      case CASE_4:
      case CASE_5:
        local_1e5 = 0x2357;
        local_1d4 = 2;
        local_1d0 = 0x694e;
        local_1be = 0x2349;
        local_1ad = 2;
        local_1a9 = 0x694c;
        local_1d8 = local_13c;
        local_1b1 = local_13c;
        break;
      case CASE_9:
      case CASE_A:
      case CASE_B:
        local_1e5 = 0x233e;
        local_1d4 = 2;
        local_1d0 = 0x6949;
        local_1d8 = local_13c;
        break;
      case CASE_13:
        if (DAT_00803400 != 0xc) {
          local_1e5 = 0x2357;
          local_1d4 = 2;
          local_1d0 = 0x694e;
          local_1d8 = local_13c;
          if ((3 < DAT_00803400) && (DAT_00803400 < 6)) {
            local_1be = 0x2349;
            local_1ad = 2;
            local_1a9 = 0x694c;
            local_1b1 = local_13c;
          }
          break;
        }
      case CASE_C:
        local_1e5 = 0x233e;
        local_1d4 = 2;
        local_1d0 = 0x694e;
        local_1d8 = local_13c;
      }
      pSVar4 = this_02->field_1A5B;
      local_115 = local_13c;
      if (pSVar4->field_02E6 != (MMsgTy *)0x0) {
        puVar12 = local_26c;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar12 = 0xffffffff;
          puVar12 = puVar12 + 1;
        }
        *(undefined2 *)puVar12 = 0xffff;
        MMsgTy::SetPanel(pSVar4->field_02E6,0,(int)&local_20c,0,0);
        MMsgTy::StatePanel(this_02->field_1A5B->field_02E6,(int)local_26c);
      }
      if ((DAT_008067a0 != '\0') && (g_int_00811764 != (int *)0x0)) {
        FUN_006b6160(local_46c,(int)(g_int_00811764 + 6));
        local_44c = 0;
        CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,local_46c);
      }
      thunk_FUN_00568bc0(&g_sound,0);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if ((DAT_00807300._1_1_ & 8) != 0) {
        thunk_FUN_0056a130(&g_sound,0x14,'\x02',0,(uint *)0x0);
      }
      thunk_FUN_005b6730(this_02,0xb,'\0',-1);
      g_currentExceptionFrame = local_250.previous;
      return;
    }
  }
}

