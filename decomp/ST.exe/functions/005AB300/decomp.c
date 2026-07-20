
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::InitChooseMap */

void __thiscall
ChooseMapTy::InitChooseMap(ChooseMapTy *this,ChooseMapTy_field_1A5FState param_1,byte param_2)

{
  undefined1 *puVar1;
  ChooseMapTy_field_1A5FState CVar2;
  MMsgTy *this_00;
  undefined4 uVar3;
  StartSystemTy *pSVar4;
  code *pcVar5;
  CursorClassTy *this_01;
  ChooseMapTy *this_02;
  int iVar6;
  HANDLE pvVar7;
  undefined4 uVar8;
  ushort *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  HoloTy *pHVar12;
  uint uVar13;
  uint uVar14;
  undefined4 unaff_ESI;
  char *pcVar15;
  char *pcVar16;
  void *unaff_EDI;
  char *pcVar17;
  int iVar18;
  char cVar19;
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
  iVar6 = Library::MSVCRT::__setjmp3(local_250.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_02 = local_10;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_250.previous;
    iVar18 = ReportDebugMessage(s_E____titans_Start_load_obj_cpp_007cc728,0x15a,0,iVar6,
                                &DAT_007a4ccc,s_ChooseMapTy__InitChooseMap_007cc770);
    if (iVar18 != 0) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Start_load_obj_cpp_007cc728,0x15a);
    return;
  }
  local_10->field_1A5F = param_1;
  if (2 < *(byte *)(DAT_0081176c + 0x2eb)) {
    *(undefined1 *)(DAT_0081176c + 0x2eb) = 2;
  }
  _DAT_0080f32e = 0;
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    if (DAT_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)DAT_00802a30->field_00AD);
    }
    else if (DAT_00802a30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)DAT_00802a30->field_0060,DAT_00802a30->field_001C);
    }
  }
  uVar13 = 0xffffffff;
  pcVar16 = &this_02->field_1CA3;
  pcVar15 = &DAT_00807680;
  do {
    pcVar17 = pcVar15;
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    pcVar17 = pcVar15 + 1;
    cVar19 = *pcVar15;
    pcVar15 = pcVar17;
  } while (cVar19 != '\0');
  uVar13 = ~uVar13;
  pcVar15 = pcVar17 + -uVar13;
  pcVar17 = pcVar16;
  for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pcVar17 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar17 = pcVar17 + 4;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *pcVar17 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar17 = pcVar17 + 1;
  }
  switch(this_02->field_1A5F) {
  case CASE_1:
  case CASE_2:
  case CASE_4:
  case CASE_5:
    local_c = 0xffffffff;
    pcVar15 = PTR_s_CUSTOM__0079c050;
    do {
      pcVar17 = pcVar15;
      if (local_c == 0) break;
      local_c = local_c - 1;
      pcVar17 = pcVar15 + 1;
      cVar19 = *pcVar15;
      pcVar15 = pcVar17;
    } while (cVar19 != '\0');
    local_c = ~local_c;
    pcVar17 = pcVar17 + -local_c;
    iVar6 = -1;
    pcVar15 = pcVar16;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar19 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar19 != '\0');
    goto LAB_005ab4dc;
  case CASE_2|CASE_1:
    uVar13 = 0xffffffff;
    pcVar15 = PTR_s_MISSIONS__0079c054;
    do {
      pcVar17 = pcVar15;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar17 = pcVar15 + 1;
      cVar19 = *pcVar15;
      pcVar15 = pcVar17;
    } while (cVar19 != '\0');
    uVar13 = ~uVar13;
    iVar6 = -1;
    do {
      pcVar15 = pcVar16;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar15 = pcVar16 + 1;
      cVar19 = *pcVar16;
      pcVar16 = pcVar15;
    } while (cVar19 != '\0');
    pcVar17 = pcVar17 + -uVar13;
    pcVar16 = pcVar15 + -1;
    for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pcVar16 = pcVar16 + 4;
    }
    goto LAB_005ab4e5;
  case CASE_9:
  case CASE_A:
  case CASE_B:
  case CASE_C:
switchD_005ab3e3_caseD_9:
    uVar13 = 0xffffffff;
    pcVar16 = PTR_s_SAVEGAME__0079c04c;
    do {
      pcVar15 = pcVar16;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar15 = pcVar16 + 1;
      cVar19 = *pcVar16;
      pcVar16 = pcVar15;
    } while (cVar19 != '\0');
    uVar13 = ~uVar13;
    iVar6 = -1;
    pcVar16 = &this_02->field_1CA3;
    do {
      pcVar17 = pcVar16;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar17 = pcVar16 + 1;
      cVar19 = *pcVar16;
      pcVar16 = pcVar17;
    } while (cVar19 != '\0');
    pcVar16 = pcVar15 + -uVar13;
    pcVar15 = pcVar17 + -1;
    for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar15 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar15 = pcVar15 + 1;
    }
    uVar13 = 0xffffffff;
    pcVar16 = (char *)&DAT_00807ddd;
    do {
      pcVar15 = pcVar16;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar15 = pcVar16 + 1;
      cVar19 = *pcVar16;
      pcVar16 = pcVar15;
    } while (cVar19 != '\0');
    uVar13 = ~uVar13;
    iVar6 = -1;
    pcVar16 = &this_02->field_1CA3;
    do {
      pcVar17 = pcVar16;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar17 = pcVar16 + 1;
      cVar19 = *pcVar16;
      pcVar16 = pcVar17;
    } while (cVar19 != '\0');
    pcVar16 = pcVar15 + -uVar13;
    pcVar15 = pcVar17 + -1;
    for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar15 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar15 = pcVar15 + 1;
    }
    FUN_006b8280(&this_02->field_1CA3,&this_02->field_1CA3);
    break;
  case CASE_13:
    if (DAT_00803400 == 0xc) goto switchD_005ab3e3_caseD_9;
    local_c = 0xffffffff;
    pcVar15 = PTR_s_CUSTOM__0079c050;
    do {
      pcVar17 = pcVar15;
      if (local_c == 0) break;
      local_c = local_c - 1;
      pcVar17 = pcVar15 + 1;
      cVar19 = *pcVar15;
      pcVar15 = pcVar17;
    } while (cVar19 != '\0');
    local_c = ~local_c;
    pcVar17 = pcVar17 + -local_c;
    iVar6 = -1;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar15 = pcVar16 + 1;
      cVar19 = *pcVar16;
      pcVar16 = pcVar15;
    } while (cVar19 != '\0');
LAB_005ab4dc:
    pcVar16 = pcVar16 + -1;
    for (uVar14 = local_c >> 2; uVar13 = local_c, uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pcVar16 = pcVar16 + 4;
    }
LAB_005ab4e5:
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar16 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar16 = pcVar16 + 1;
    }
  }
  uVar13 = 0xffffffff;
  puVar1 = &this_02->field_1DA7;
  pcVar16 = &this_02->field_1CA3;
  do {
    pcVar15 = pcVar16;
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    pcVar15 = pcVar16 + 1;
    cVar19 = *pcVar16;
    pcVar16 = pcVar15;
  } while (cVar19 != '\0');
  uVar13 = ~uVar13;
  pcVar16 = pcVar15 + -uVar13;
  pcVar15 = puVar1;
  for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *pcVar15 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar15 = pcVar15 + 1;
  }
  FUN_006b78c0(puVar1,puVar1);
  pvVar7 = FindFirstChangeNotificationA(&this_02->field_1DA7,0,1);
  this_02->field_1C8F = pvVar7;
  if (pvVar7 == (HANDLE)0xffffffff) {
    this_02->field_1C8F = (HANDLE)0x0;
  }
  FUN_006b8280(&this_02->field_1CA3,&this_02->field_1CA3);
  FUN_006b8280(&this_02->field_1DA7,&this_02->field_1DA7);
  uVar8 = FUN_0070a9f0(g_cMf32_00806780,s_LOADSINGLE_007cc79c,0,1);
  *(undefined4 *)(DAT_0081176c + 0x2c) = uVar8;
  this_02->field_005D = *(undefined4 *)(DAT_0081176c + 0x2c);
  FUN_006bc360(*(ushort **)(DAT_0081176c + 0x2c),local_86c,(int *)0x0);
  *(undefined4 *)&this_02->field_1A5B->field_0x140 = 0x1f;
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_86c,0,0x100,0x8b,0x15,(undefined4 *)&this_02->field_1A5B->field_0x144);
  puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,s_FILE_LIST_007cc084,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_02->field_1C7F = puVar9;
  puVar9 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,1,s_MM_MAPB_007cc790,0,1);
  DibPut(*(undefined4 **)(DAT_0081176c + 0x2f0),0,0,'\x01',(byte *)puVar9);
  *(undefined4 *)&this_02->field_0x20b3 = 0x1010101;
  this_02->field_20B7 = 1;
  switch(this_02->field_1A5F) {
  case CASE_1:
  case CASE_2:
  case CASE_2|CASE_1:
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
        this_02->field_20B4 = 0;
      case 6:
      case 7:
        this_02->field_20B5 = 0;
      default:
        iVar6 = *(int *)(DAT_0081176c + 0x544);
        local_c = param_2 - 1;
        FUN_006b4170(iVar6,0,0,0,*(int *)(iVar6 + 4),*(int *)(iVar6 + 8),0xff);
        if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
          FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
        }
        puVar10 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
        *(uint **)(DAT_0081176c + 0x548) = puVar10;
        uVar13 = param_2 - 1;
        if (*(int *)(DAT_0081176c + 0x389) != 0) {
          this_02->field_002D = 0x28;
          *(undefined2 *)&this_02->field_0x31 = 1;
          this_02->field_0033 = *(undefined2 *)(*(int *)(DAT_0081176c + 0x548) + 8);
          FUN_006e6080(this_02,2,*(undefined4 *)(DAT_0081176c + 0x389),
                       (undefined4 *)&this_02->field_0x1d);
          this_02->field_002D = 0x22;
          *(undefined2 *)&this_02->field_0x31 = 0;
          this_02->field_0033 = 0;
          FUN_006e6080(this_02,2,*(undefined4 *)(DAT_0081176c + 0x389),
                       (undefined4 *)&this_02->field_0x1d);
          uVar13 = local_c;
        }
        switch(uVar13) {
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
        (**(code **)(this_02->field_1A70 + 4))(DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
        this_02->field_1A8C = 0x2f8;
        this_02->field_1A90 = 0x3c;
        this_02->field_1A78 = 0;
        SpriteClassTy::InitSprite
                  ((SpriteClassTy *)&this_02->field_1B01,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,
                   0);
        (**(code **)(this_02->field_1B01 + 4))(DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
        this_02->field_1B1D = 0x2f8;
        this_02->field_1B21 = 0x1b8;
        this_02->field_1B09 = 0;
        SpriteClassTy::InitSprite
                  ((SpriteClassTy *)&this_02->field_1B92,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,
                   0);
        (**(code **)(this_02->field_1B92 + 4))(DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
        iVar6 = 1;
        this_02->field_1BAE = 0x2fe;
        this_02->field_1BB2 = 0x5c;
        puVar11 = (undefined4 *)(this_02->field_005D + 0x28);
        this_02->field_1B9A = 0;
        uVar13 = FUN_006b4fe0(this_02->field_005D);
        iVar6 = FUN_006b50c0(0x1e4,399,(uint)*(ushort *)(this_02->field_005D + 0xe),uVar13,puVar11,
                             iVar6);
        this_02->field_1C7B = iVar6;
        uVar13 = *(uint *)(iVar6 + 0x14);
        if (uVar13 == 0) {
          uVar13 = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                   *(int *)(iVar6 + 8);
        }
        puVar11 = (undefined4 *)FUN_006b4fa0(iVar6);
        for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        puVar10 = &this_02->field_1C23;
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined1 *)puVar11 = 0;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        uVar13 = 0x3f;
        do {
          FUN_006b2330((uint)DAT_008075a8,puVar10,0x31,0x40213a,*(uint *)(this_02->field_1C7B + 4),
                       0x13,(uint)this_02);
          Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar10,0xffffffff,0x114,uVar13);
          uVar13 = uVar13 + 0x13;
          puVar10 = puVar10 + 1;
        } while ((int)uVar13 < 0x1e1);
        CreateCtrls(this_02,'\0');
        PrepFiles(this_02,this_02->field_1C93);
        FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0x204,0x19d,
                     (uint)&this_02->field_1A5B->field_0x140);
        Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x112,0x38);
        pHVar12 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
        if (pHVar12 == (HoloTy *)0x0) {
          pHVar12 = (HoloTy *)0x0;
        }
        else {
          pHVar12->field_0002 = 1;
          pHVar12->field_0000 = 0;
          pHVar12->field_0003 = 0xffffffff;
          pHVar12->field_0001 = 2;
          pHVar12->field_0007 = 0;
          pHVar12->field_000B = 0;
          *(undefined4 *)&pHVar12->field_0xf = 0;
          *(undefined4 *)&pHVar12->field_0x1b = 1;
          pHVar12->field_0013 = 1;
          pHVar12->field_0017 = 0xffffffff;
          pHVar12->field_0027 = 0;
          pHVar12->field_0023 = 0;
          pHVar12->field_002F = 1;
          pHVar12->field_002B = 1;
        }
        this_02->field_20B8 = pHVar12;
        if (pHVar12 != (HoloTy *)0x0) {
          uVar14 = 0;
          cVar19 = '\x01';
          uVar13 = 0x10;
          iVar18 = 1;
          iVar6 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x38,0x204,0x19d);
          uVar13 = HoloTy::Init(this_02->field_20B8,CASE_2,0x112,0x38,iVar6,iVar18,uVar13,cVar19,
                                uVar14);
          if (uVar13 != 0) {
            pHVar12 = this_02->field_20B8;
            pHVar12->field_0002 = 1;
            pHVar12->field_0017 = pHVar12->field_0013;
            uVar13 = this_02->field_20B8->field_0003;
            if (-1 < (int)uVar13) {
              FUN_006b3af0(DAT_008075a8,uVar13);
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
        if (this_02->field_20B4 == '\0') {
          if (*(uint *)(DAT_0081176c + 0x391) != 0xffffffff) {
            Library::DKW::DDX::FUN_006b34d0
                      (*(uint **)(DAT_0081176c + 0x3d5),*(uint *)(DAT_0081176c + 0x391),0xfffffffe,
                       *(uint *)(DAT_0081176c + 0x3a9),*(uint *)(DAT_0081176c + 0x3ad));
          }
          if (*(uint *)(DAT_0081176c + 0x422) != 0xffffffff) {
            Library::DKW::DDX::FUN_006b34d0
                      (*(uint **)(DAT_0081176c + 0x466),*(uint *)(DAT_0081176c + 0x422),0xfffffffe,
                       *(uint *)(DAT_0081176c + 0x43a),*(uint *)(DAT_0081176c + 0x43e));
          }
          if (*(uint *)(DAT_0081176c + 0x4b3) != 0xffffffff) {
            Library::DKW::DDX::FUN_006b34d0
                      (*(uint **)(DAT_0081176c + 0x4f7),*(uint *)(DAT_0081176c + 0x4b3),0xfffffffe,
                       *(uint *)(DAT_0081176c + 0x4cb),*(uint *)(DAT_0081176c + 0x4cf));
          }
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x540));
        }
        else {
          FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0xf9,0x121,
                       (uint)&this_02->field_1A5B->field_0x140);
          Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,10,0xb4);
          pHVar12 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
          if (pHVar12 == (HoloTy *)0x0) {
            pHVar12 = (HoloTy *)0x0;
          }
          else {
            pHVar12->field_0002 = 1;
            pHVar12->field_0000 = 0;
            pHVar12->field_0003 = 0xffffffff;
            pHVar12->field_0001 = 2;
            pHVar12->field_0007 = 0;
            pHVar12->field_000B = 0;
            *(undefined4 *)&pHVar12->field_0xf = 0;
            *(undefined4 *)&pHVar12->field_0x1b = 1;
            pHVar12->field_0013 = 1;
            pHVar12->field_0017 = 0xffffffff;
            pHVar12->field_0027 = 0;
            pHVar12->field_0023 = 0;
            pHVar12->field_002F = 1;
            pHVar12->field_002B = 1;
          }
          this_02->field_20BC = pHVar12;
          if (pHVar12 != (HoloTy *)0x0) {
            uVar14 = 0;
            cVar19 = '\x01';
            uVar13 = 0x10;
            iVar18 = 1;
            iVar6 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x121);
            uVar13 = HoloTy::Init(this_02->field_20BC,CASE_4,10,0xb4,iVar6,iVar18,uVar13,cVar19,
                                  uVar14);
            if (uVar13 != 0) {
              pHVar12 = this_02->field_20BC;
              pHVar12->field_0002 = 1;
              pHVar12->field_0017 = pHVar12->field_0013;
              uVar13 = this_02->field_20BC->field_0003;
              if (-1 < (int)uVar13) {
                FUN_006b3af0(DAT_008075a8,uVar13);
              }
              if (*(uint *)(DAT_0081176c + 0x391) != 0xffffffff) {
                FUN_006b3af0(*(int **)(DAT_0081176c + 0x3d5),*(uint *)(DAT_0081176c + 0x391));
              }
              if (*(uint *)(DAT_0081176c + 0x422) != 0xffffffff) {
                FUN_006b3af0(*(int **)(DAT_0081176c + 0x466),*(uint *)(DAT_0081176c + 0x422));
              }
              if (*(uint *)(DAT_0081176c + 0x4b3) != 0xffffffff) {
                FUN_006b3af0(*(int **)(DAT_0081176c + 0x4f7),*(uint *)(DAT_0081176c + 0x4b3));
              }
              FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x540));
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
            if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
              Library::DKW::DDX::FUN_006b34d0
                        (*(uint **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560),0xfffffffe
                         ,*(uint *)(DAT_0081176c + 0x578),*(uint *)(DAT_0081176c + 0x57c));
            }
            if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
              Library::DKW::DDX::FUN_006b34d0
                        (*(uint **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1),0xfffffffe
                         ,*(uint *)(DAT_0081176c + 0x609),*(uint *)(DAT_0081176c + 0x60d));
            }
            Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
            Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
          }
          else {
            if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
              FUN_006b3af0(*(int **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560));
            }
            if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
              FUN_006b3af0(*(int **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1));
            }
            FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
            FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
          }
        }
        else {
          FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403b61,400,0x62,
                       (uint)&this_02->field_1A5B->field_0x140);
          Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,200,0x1f1);
          if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
            Library::DKW::DDX::FUN_006b34d0
                      (*(uint **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560),0xfffffffe,
                       *(uint *)(DAT_0081176c + 0x578),*(uint *)(DAT_0081176c + 0x57c));
          }
          if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
            Library::DKW::DDX::FUN_006b34d0
                      (*(uint **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1),0xfffffffe,
                       *(uint *)(DAT_0081176c + 0x609),*(uint *)(DAT_0081176c + 0x60d));
          }
          pHVar12 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
          if (pHVar12 == (HoloTy *)0x0) {
            pHVar12 = (HoloTy *)0x0;
          }
          else {
            pHVar12->field_0002 = 1;
            pHVar12->field_0000 = 0;
            pHVar12->field_0003 = 0xffffffff;
            pHVar12->field_0001 = 2;
            pHVar12->field_0007 = 0;
            pHVar12->field_000B = 0;
            *(undefined4 *)&pHVar12->field_0xf = 0;
            *(undefined4 *)&pHVar12->field_0x1b = 1;
            pHVar12->field_0013 = 1;
            pHVar12->field_0017 = 0xffffffff;
            pHVar12->field_0027 = 0;
            pHVar12->field_0023 = 0;
            pHVar12->field_002F = 1;
            pHVar12->field_002B = 1;
          }
          this_02->field_20C0 = pHVar12;
          if (pHVar12 != (HoloTy *)0x0) {
            uVar14 = 0;
            cVar19 = '\x01';
            uVar13 = 0x10;
            iVar18 = 1;
            iVar6 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,200,0x1f1,400,0x62);
            uVar13 = HoloTy::Init(this_02->field_20C0,CASE_1,200,0x1f1,iVar6,iVar18,uVar13,cVar19,
                                  uVar14);
            if (uVar13 != 0) {
              pHVar12 = this_02->field_20C0;
              pHVar12->field_0002 = 1;
              pHVar12->field_0017 = pHVar12->field_0013;
              uVar13 = this_02->field_20C0->field_0003;
              if (-1 < (int)uVar13) {
                FUN_006b3af0(DAT_008075a8,uVar13);
              }
              if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
                FUN_006b3af0(*(int **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560));
              }
              if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
                FUN_006b3af0(*(int **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1));
              }
              FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
              FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
            }
          }
          if (local_8 != 0xffffffff) {
            FUN_006b3bb0(DAT_008075a8,local_8);
            local_8 = 0xffffffff;
          }
        }
        iVar6 = 1;
        puVar11 = (undefined4 *)(this_02->field_005D + 0x28);
        uVar13 = FUN_006b4fe0(this_02->field_005D);
        iVar6 = FUN_006b50c0(0x172,0x18,(uint)*(ushort *)(this_02->field_005D + 0xe),uVar13,puVar11,
                             iVar6);
        this_02->field_1C8B = iVar6;
        uVar13 = *(uint *)(iVar6 + 0x14);
        if (uVar13 == 0) {
          uVar13 = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                   *(int *)(iVar6 + 8);
        }
        puVar11 = (undefined4 *)FUN_006b4fa0(iVar6);
        for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar11 = 0xffffffff;
          puVar11 = puVar11 + 1;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined1 *)puVar11 = 0xff;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        FUN_006b5b10(this_02->field_1C8B,0,0,1,*(int *)(this_02->field_1C8B + 4) + -1,1,
                     (byte)*(undefined4 *)&this_02->field_1A5B->field_0x140,0xd);
        uVar13 = this_02->field_1C8B;
        puVar11 = &this_02->field_1C87;
        FUN_006b2330((uint)DAT_008075a8,puVar11,0x31,0x404acf,*(uint *)(uVar13 + 4),
                     *(uint *)(uVar13 + 8),uVar13);
        Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar11,0xffffffff,0x112,0x1d3);
        FUN_006b3af0(DAT_008075a8,*puVar11);
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
          thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,this_02->field_005D,10,2);
        }
        pHVar12 = this_02->field_20B8;
        if (((pHVar12 != (HoloTy *)0x0) && (pHVar12->field_0000 != '\0')) &&
           (-1 < (int)pHVar12->field_0003)) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pHVar12->field_0003);
        }
        pHVar12 = this_02->field_20BC;
        if (((pHVar12 != (HoloTy *)0x0) && (pHVar12->field_0000 != '\0')) &&
           (-1 < (int)pHVar12->field_0003)) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pHVar12->field_0003);
        }
        pHVar12 = this_02->field_20C0;
        if (((pHVar12 != (HoloTy *)0x0) && (pHVar12->field_0000 != '\0')) &&
           (-1 < (int)pHVar12->field_0003)) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pHVar12->field_0003);
        }
        this_01 = DAT_00802a30;
        if (DAT_00802a30 != (CursorClassTy *)0x0) {
          uVar8 = DAT_00802a30->field_00C9;
          uVar3 = DAT_00802a30->field_00C5;
          DAT_00802a30->field_0493 = 1;
          this_01->field_0494 = 0xffff;
          CursorClassTy::SetGCType(this_01,CASE_0,uVar3,uVar8);
          CursorClassTy::DrawSprite(this_01,this_01->field_00C5,this_01->field_00C9);
          this_01->field_0xd2 = 0;
          *(undefined4 *)&this_01->field_0x4df = 0xffffffff;
        }
        puVar11 = &local_20c;
        for (iVar6 = 0x7e; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        CVar2 = this_02->field_1A5F;
        *(undefined2 *)puVar11 = 0;
        *(undefined1 *)((int)puVar11 + 2) = 0;
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
      case CASE_2|CASE_1:
        this_02->field_20B5 = 0;
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
        puVar11 = local_26c;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar11 = 0xffffffff;
          puVar11 = puVar11 + 1;
        }
        *(undefined2 *)puVar11 = 0xffff;
        MMsgTy::SetPanel(pSVar4->field_02E6,0,(int)&local_20c,0,0);
        MMsgTy::StatePanel(this_02->field_1A5B->field_02E6,(int)local_26c);
      }
      if ((DAT_008067a0 != '\0') && (g_int_00811764 != (int *)0x0)) {
        FUN_006b6160(local_46c,(int)(g_int_00811764 + 6));
        local_44c = 0;
        CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,local_46c);
      }
      thunk_FUN_00568bc0(&g_sound,0);
      if ((DAT_00807300._1_1_ & 8) != 0) {
        thunk_FUN_0056a130(&g_sound,0x14,'\x02',0,(uint *)0x0);
      }
      thunk_FUN_005b6730(this_02,0xb,'\0',-1);
      g_currentExceptionFrame = local_250.previous;
      return;
    }
  }
}

