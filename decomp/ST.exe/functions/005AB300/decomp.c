
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::InitChooseMap */

void __thiscall
ChooseMapTy::InitChooseMap(ChooseMapTy *this,ChooseMapTy_field_1A5FState param_1,byte param_2)

{
  ChooseMapTy_field_1A5FState CVar1;
  MMsgTy *this_00;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this_01;
  ChooseMapTy *this_02;
  int iVar4;
  HANDLE pvVar5;
  undefined4 uVar6;
  ushort *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 unaff_ESI;
  char *pcVar13;
  char *pcVar14;
  void *unaff_EDI;
  char *pcVar15;
  char cVar16;
  int iVar17;
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
  iVar4 = Library::MSVCRT::__setjmp3(local_250.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_02 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_250.previous;
    iVar17 = ReportDebugMessage(s_E____titans_Start_load_obj_cpp_007cc728,0x15a,0,iVar4,
                                &DAT_007a4ccc,s_ChooseMapTy__InitChooseMap_007cc770);
    if (iVar17 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_load_obj_cpp_007cc728,0x15a);
    return;
  }
  local_10->field_1A5F = param_1;
  if (2 < *(byte *)(DAT_0081176c + 0x2eb)) {
    *(undefined1 *)(DAT_0081176c + 0x2eb) = 2;
  }
  _DAT_0080f32e = 0;
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    if (*(int *)&DAT_00802a30[1].field_0x45 == 0) {
      Library::DKW::DDX::FUN_006b8b10(*(int **)&DAT_00802a30[1].field_0x49);
    }
    else if (DAT_00802a30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)DAT_00802a30->field_0060,DAT_00802a30->field_001C);
    }
  }
  uVar11 = 0xffffffff;
  pcVar14 = &this_02[1].field_0x243;
  pcVar13 = &DAT_00807680;
  do {
    pcVar15 = pcVar13;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar15 = pcVar13 + 1;
    cVar16 = *pcVar13;
    pcVar13 = pcVar15;
  } while (cVar16 != '\0');
  uVar11 = ~uVar11;
  pcVar13 = pcVar15 + -uVar11;
  pcVar15 = pcVar14;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar15 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar15 = pcVar15 + 1;
  }
  switch(this_02->field_1A5F) {
  case CASE_1:
  case CASE_2:
  case CASE_4:
  case CASE_5:
    local_c = 0xffffffff;
    pcVar13 = PTR_s_CUSTOM__0079c050;
    do {
      pcVar15 = pcVar13;
      if (local_c == 0) break;
      local_c = local_c - 1;
      pcVar15 = pcVar13 + 1;
      cVar16 = *pcVar13;
      pcVar13 = pcVar15;
    } while (cVar16 != '\0');
    local_c = ~local_c;
    pcVar15 = pcVar15 + -local_c;
    iVar4 = -1;
    pcVar13 = pcVar14;
    do {
      pcVar14 = pcVar13;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar14 = pcVar13 + 1;
      cVar16 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar16 != '\0');
    goto LAB_005ab4dc;
  case CASE_2|CASE_1:
    uVar11 = 0xffffffff;
    pcVar13 = PTR_s_MISSIONS__0079c054;
    do {
      pcVar15 = pcVar13;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar15 = pcVar13 + 1;
      cVar16 = *pcVar13;
      pcVar13 = pcVar15;
    } while (cVar16 != '\0');
    uVar11 = ~uVar11;
    iVar4 = -1;
    do {
      pcVar13 = pcVar14;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar13 = pcVar14 + 1;
      cVar16 = *pcVar14;
      pcVar14 = pcVar13;
    } while (cVar16 != '\0');
    pcVar15 = pcVar15 + -uVar11;
    pcVar14 = pcVar13 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar14 = pcVar14 + 4;
    }
    goto LAB_005ab4e5;
  case CASE_9:
  case CASE_A:
  case CASE_B:
  case CASE_C:
switchD_005ab3e3_caseD_9:
    uVar11 = 0xffffffff;
    pcVar14 = PTR_s_SAVEGAME__0079c04c;
    do {
      pcVar13 = pcVar14;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar13 = pcVar14 + 1;
      cVar16 = *pcVar14;
      pcVar14 = pcVar13;
    } while (cVar16 != '\0');
    uVar11 = ~uVar11;
    iVar4 = -1;
    pcVar14 = &this_02[1].field_0x243;
    do {
      pcVar15 = pcVar14;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar15 = pcVar14 + 1;
      cVar16 = *pcVar14;
      pcVar14 = pcVar15;
    } while (cVar16 != '\0');
    pcVar14 = pcVar13 + -uVar11;
    pcVar13 = pcVar15 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar13 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar13 = pcVar13 + 1;
    }
    uVar11 = 0xffffffff;
    pcVar14 = (char *)&DAT_00807ddd;
    do {
      pcVar13 = pcVar14;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar13 = pcVar14 + 1;
      cVar16 = *pcVar14;
      pcVar14 = pcVar13;
    } while (cVar16 != '\0');
    uVar11 = ~uVar11;
    iVar4 = -1;
    pcVar14 = &this_02[1].field_0x243;
    do {
      pcVar15 = pcVar14;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar15 = pcVar14 + 1;
      cVar16 = *pcVar14;
      pcVar14 = pcVar15;
    } while (cVar16 != '\0');
    pcVar14 = pcVar13 + -uVar11;
    pcVar13 = pcVar15 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar13 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar13 = pcVar13 + 1;
    }
    FUN_006b8280(&this_02[1].field_0x243,&this_02[1].field_0x243);
    break;
  case CASE_13:
    if (DAT_00803400 == 0xc) goto switchD_005ab3e3_caseD_9;
    local_c = 0xffffffff;
    pcVar13 = PTR_s_CUSTOM__0079c050;
    do {
      pcVar15 = pcVar13;
      if (local_c == 0) break;
      local_c = local_c - 1;
      pcVar15 = pcVar13 + 1;
      cVar16 = *pcVar13;
      pcVar13 = pcVar15;
    } while (cVar16 != '\0');
    local_c = ~local_c;
    pcVar15 = pcVar15 + -local_c;
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar13 = pcVar14 + 1;
      cVar16 = *pcVar14;
      pcVar14 = pcVar13;
    } while (cVar16 != '\0');
LAB_005ab4dc:
    pcVar14 = pcVar14 + -1;
    for (uVar12 = local_c >> 2; uVar11 = local_c, uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar14 = pcVar14 + 4;
    }
LAB_005ab4e5:
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar14 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar14 = pcVar14 + 1;
    }
  }
  uVar11 = 0xffffffff;
  puVar10 = &this_02[1].field_0x347;
  pcVar14 = &this_02[1].field_0x243;
  do {
    pcVar13 = pcVar14;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar13 = pcVar14 + 1;
    cVar16 = *pcVar14;
    pcVar14 = pcVar13;
  } while (cVar16 != '\0');
  uVar11 = ~uVar11;
  pcVar14 = pcVar13 + -uVar11;
  pcVar13 = puVar10;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar14;
    pcVar14 = pcVar14 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar13 = *pcVar14;
    pcVar14 = pcVar14 + 1;
    pcVar13 = pcVar13 + 1;
  }
  FUN_006b78c0(puVar10,puVar10);
  pvVar5 = FindFirstChangeNotificationA(&this_02[1].field_0x347,0,1);
  *(HANDLE *)&this_02[1].field_0x22f = pvVar5;
  if (pvVar5 == (HANDLE)0xffffffff) {
    *(undefined4 *)&this_02[1].field_0x22f = 0;
  }
  FUN_006b8280(&this_02[1].field_0x243,&this_02[1].field_0x243);
  FUN_006b8280(&this_02[1].field_0x347,&this_02[1].field_0x347);
  uVar6 = FUN_0070a9f0(DAT_00806780,s_LOADSINGLE_007cc79c,0,1);
  *(undefined4 *)(DAT_0081176c + 0x2c) = uVar6;
  *(undefined4 *)&this_02->field_0x5d = *(undefined4 *)(DAT_0081176c + 0x2c);
  FUN_006bc360(*(int *)(DAT_0081176c + 0x2c),local_86c,(int *)0x0);
  *(undefined4 *)(*(int *)&this_02->field_0x1a5b + 0x140) = 0x1f;
  FUN_00718780((int)local_86c,0,0x100,0x8b,0x15,
               (undefined4 *)(*(int *)&this_02->field_0x1a5b + 0x144));
  puVar7 = FUN_00709af0(DAT_00806784,CASE_B,(byte *)s_FILE_LIST_007cc084,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)&this_02[1].field_0x21f = puVar7;
  puVar7 = FUN_0070a5a0(DAT_00806780,1,s_MM_MAPB_007cc790,0,1);
  thunk_FUN_00540760(*(undefined4 **)(DAT_0081176c + 0x2f0),0,0,'\x01',(byte *)puVar7);
  *(undefined4 *)&this_02[1].field_0x653 = 0x1010101;
  this_02[1].field_0x657 = 1;
  switch(this_02->field_1A5F) {
  case CASE_1:
  case CASE_2:
  case CASE_2|CASE_1:
  case CASE_9:
  case CASE_A:
  case CASE_B:
switchD_005ab64d_caseD_1:
    this_02[1].field_0x657 = 0;
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
        this_02[1].field_0x654 = 0;
      case 6:
      case 7:
        this_02[1].field_0x655 = 0;
      default:
        iVar4 = *(int *)(DAT_0081176c + 0x544);
        local_c = param_2 - 1;
        FUN_006b4170(iVar4,0,0,0,*(int *)(iVar4 + 4),*(int *)(iVar4 + 8),0xff);
        if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
          FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
        }
        puVar8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
        *(uint **)(DAT_0081176c + 0x548) = puVar8;
        uVar11 = param_2 - 1;
        if (*(int *)(DAT_0081176c + 0x389) != 0) {
          *(undefined4 *)&this_02->field_0x2d = 0x28;
          *(undefined2 *)&this_02->field_0x31 = 1;
          *(undefined2 *)&this_02->field_0x33 = *(undefined2 *)(*(int *)(DAT_0081176c + 0x548) + 8);
          FUN_006e6080(this_02,2,*(undefined4 *)(DAT_0081176c + 0x389),
                       (undefined4 *)&this_02->field_0x1d);
          *(undefined4 *)&this_02->field_0x2d = 0x22;
          *(undefined2 *)&this_02->field_0x31 = 0;
          *(undefined2 *)&this_02->field_0x33 = 0;
          FUN_006e6080(this_02,2,*(undefined4 *)(DAT_0081176c + 0x389),
                       (undefined4 *)&this_02->field_0x1d);
          uVar11 = local_c;
        }
        switch(uVar11) {
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
          thunk_FUN_0055dbf0(DAT_0080759c,1,0);
        }
        this_00 = *(MMsgTy **)(*(int *)&this_02->field_0x1a5b + 0x2e6);
        if (this_00 != (MMsgTy *)0x0) {
          MMsgTy::ShowSprites(this_00);
          *(undefined4 *)(*(int *)(*(int *)&this_02->field_0x1a5b + 0x2e6) + 0x1cab) =
               *(undefined4 *)&this_02->field_0x8;
        }
        PaintChooseMap(this_02,'\x01');
        SpriteClassTy::InitSprite
                  ((SpriteClassTy *)&this_02[1].field_0010,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,
                   0,0);
        (**(code **)(this_02[1].field_0010 + 4))(DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
        *(undefined4 *)&this_02[1].field_0x2c = 0x2f8;
        *(undefined4 *)&this_02[1].field_0x30 = 0x3c;
        *(undefined4 *)&this_02[1].field_0x18 = 0;
        SpriteClassTy::InitSprite
                  ((SpriteClassTy *)&this_02[1].field_0xa1,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,
                   0,0);
        (**(code **)(*(int *)&this_02[1].field_0xa1 + 4))
                  (DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
        *(undefined4 *)&this_02[1].field_0xbd = 0x2f8;
        *(undefined4 *)&this_02[1].field_0xc1 = 0x1b8;
        *(undefined4 *)&this_02[1].field_0xa9 = 0;
        SpriteClassTy::InitSprite
                  ((SpriteClassTy *)&this_02[1].field_0x132,DAT_008075a8,0x31,'\a',(undefined4 *)0x0
                   ,0,0);
        (**(code **)(*(int *)&this_02[1].field_0x132 + 4))
                  (DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
        iVar4 = *(int *)&this_02->field_0x5d;
        iVar17 = 1;
        *(undefined4 *)&this_02[1].field_0x14e = 0x2fe;
        *(undefined4 *)&this_02[1].field_0x152 = 0x5c;
        puVar9 = (undefined4 *)(iVar4 + 0x28);
        *(undefined4 *)&this_02[1].field_0x13a = 0;
        uVar11 = FUN_006b4fe0(iVar4);
        iVar4 = FUN_006b50c0(0x1e4,399,(uint)*(ushort *)(*(int *)&this_02->field_0x5d + 0xe),uVar11,
                             puVar9,iVar17);
        *(int *)&this_02[1].field_0x21b = iVar4;
        uVar11 = *(uint *)(iVar4 + 0x14);
        if (uVar11 == 0) {
          uVar11 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                   *(int *)(iVar4 + 8);
        }
        puVar9 = (undefined4 *)FUN_006b4fa0(iVar4);
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        puVar8 = (uint *)&this_02[1].field_0x1c3;
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar9 = 0;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        uVar11 = 0x3f;
        do {
          FUN_006b2330((uint)DAT_008075a8,puVar8,0x31,0x40213a,
                       *(uint *)(*(int *)&this_02[1].field_0x21b + 4),0x13,(uint)this_02);
          Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar8,0xffffffff,0x114,uVar11);
          uVar11 = uVar11 + 0x13;
          puVar8 = puVar8 + 1;
        } while ((int)uVar11 < 0x1e1);
        CreateCtrls(this_02,'\0');
        PrepFiles(this_02,*(uint *)&this_02[1].field_0x233);
        FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0x204,0x19d,
                     *(int *)&this_02->field_0x1a5b + 0x140);
        Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x112,0x38);
        puVar10 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = (undefined1 *)0x0;
        }
        else {
          puVar10[2] = 1;
          *puVar10 = 0;
          *(undefined4 *)(puVar10 + 3) = 0xffffffff;
          puVar10[1] = 2;
          *(undefined4 *)(puVar10 + 7) = 0;
          *(undefined4 *)(puVar10 + 0xb) = 0;
          *(undefined4 *)(puVar10 + 0xf) = 0;
          *(undefined4 *)(puVar10 + 0x1b) = 1;
          *(undefined4 *)(puVar10 + 0x13) = 1;
          *(undefined4 *)(puVar10 + 0x17) = 0xffffffff;
          *(undefined4 *)(puVar10 + 0x27) = 0;
          *(undefined4 *)(puVar10 + 0x23) = 0;
          *(undefined4 *)(puVar10 + 0x2f) = 1;
          *(undefined4 *)(puVar10 + 0x2b) = 1;
        }
        *(undefined1 **)&this_02[1].field_0x658 = puVar10;
        if (puVar10 != (undefined1 *)0x0) {
          uVar12 = 0;
          cVar16 = '\x01';
          uVar11 = 0x10;
          iVar17 = 1;
          iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x38,0x204,0x19d);
          uVar11 = HoloTy::Init(*(HoloTy **)&this_02[1].field_0x658,2,0x112,0x38,iVar4,iVar17,uVar11
                                ,cVar16,uVar12);
          if (uVar11 != 0) {
            iVar4 = *(int *)&this_02[1].field_0x658;
            *(undefined1 *)(iVar4 + 2) = 1;
            *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
            uVar11 = *(uint *)(*(int *)&this_02[1].field_0x658 + 3);
            if (-1 < (int)uVar11) {
              FUN_006b3af0(DAT_008075a8,uVar11);
            }
            if (*(uint *)&this_02[1].field_0x14 != 0xffffffff) {
              FUN_006b3af0(*(int **)&this_02[1].field_0x58,*(uint *)&this_02[1].field_0x14);
            }
            if (*(uint *)&this_02[1].field_0xa5 != 0xffffffff) {
              FUN_006b3af0(*(int **)&this_02[1].field_0xe9,*(uint *)&this_02[1].field_0xa5);
            }
            if (*(uint *)&this_02[1].field_0x136 != 0xffffffff) {
              FUN_006b3af0(*(int **)&this_02[1].field_0x17a,*(uint *)&this_02[1].field_0x136);
            }
            puVar8 = (uint *)&this_02[1].field_0x1c3;
            iVar4 = 0x16;
            do {
              FUN_006b3af0(DAT_008075a8,*puVar8);
              puVar8 = puVar8 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        if (local_8 != 0xffffffff) {
          FUN_006b3bb0(DAT_008075a8,local_8);
          local_8 = 0xffffffff;
        }
        if (this_02[1].field_0x654 == '\0') {
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
                       *(int *)&this_02->field_0x1a5b + 0x140);
          Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,10,0xb4);
          puVar10 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
          if (puVar10 == (undefined1 *)0x0) {
            puVar10 = (undefined1 *)0x0;
          }
          else {
            puVar10[2] = 1;
            *puVar10 = 0;
            *(undefined4 *)(puVar10 + 3) = 0xffffffff;
            puVar10[1] = 2;
            *(undefined4 *)(puVar10 + 7) = 0;
            *(undefined4 *)(puVar10 + 0xb) = 0;
            *(undefined4 *)(puVar10 + 0xf) = 0;
            *(undefined4 *)(puVar10 + 0x1b) = 1;
            *(undefined4 *)(puVar10 + 0x13) = 1;
            *(undefined4 *)(puVar10 + 0x17) = 0xffffffff;
            *(undefined4 *)(puVar10 + 0x27) = 0;
            *(undefined4 *)(puVar10 + 0x23) = 0;
            *(undefined4 *)(puVar10 + 0x2f) = 1;
            *(undefined4 *)(puVar10 + 0x2b) = 1;
          }
          *(undefined1 **)&this_02[1].field_0x65c = puVar10;
          if (puVar10 != (undefined1 *)0x0) {
            uVar12 = 0;
            cVar16 = '\x01';
            uVar11 = 0x10;
            iVar17 = 1;
            iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x121);
            uVar11 = HoloTy::Init(*(HoloTy **)&this_02[1].field_0x65c,4,10,0xb4,iVar4,iVar17,uVar11,
                                  cVar16,uVar12);
            if (uVar11 != 0) {
              iVar4 = *(int *)&this_02[1].field_0x65c;
              *(undefined1 *)(iVar4 + 2) = 1;
              *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
              uVar11 = *(uint *)(*(int *)&this_02[1].field_0x65c + 3);
              if (-1 < (int)uVar11) {
                FUN_006b3af0(DAT_008075a8,uVar11);
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
        if (this_02[1].field_0x657 == '\0') {
          CVar1 = this_02->field_1A5F;
          if ((((CVar1 == CASE_C) || (CVar1 == CASE_4)) || (CVar1 == CASE_5)) || (CVar1 == CASE_13))
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
                       *(int *)&this_02->field_0x1a5b + 0x140);
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
          puVar10 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
          if (puVar10 == (undefined1 *)0x0) {
            puVar10 = (undefined1 *)0x0;
          }
          else {
            puVar10[2] = 1;
            *puVar10 = 0;
            *(undefined4 *)(puVar10 + 3) = 0xffffffff;
            puVar10[1] = 2;
            *(undefined4 *)(puVar10 + 7) = 0;
            *(undefined4 *)(puVar10 + 0xb) = 0;
            *(undefined4 *)(puVar10 + 0xf) = 0;
            *(undefined4 *)(puVar10 + 0x1b) = 1;
            *(undefined4 *)(puVar10 + 0x13) = 1;
            *(undefined4 *)(puVar10 + 0x17) = 0xffffffff;
            *(undefined4 *)(puVar10 + 0x27) = 0;
            *(undefined4 *)(puVar10 + 0x23) = 0;
            *(undefined4 *)(puVar10 + 0x2f) = 1;
            *(undefined4 *)(puVar10 + 0x2b) = 1;
          }
          *(undefined1 **)&this_02[1].field_0x660 = puVar10;
          if (puVar10 != (undefined1 *)0x0) {
            uVar12 = 0;
            cVar16 = '\x01';
            uVar11 = 0x10;
            iVar17 = 1;
            iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,200,0x1f1,400,0x62);
            uVar11 = HoloTy::Init(*(HoloTy **)&this_02[1].field_0x660,1,200,0x1f1,iVar4,iVar17,
                                  uVar11,cVar16,uVar12);
            if (uVar11 != 0) {
              iVar4 = *(int *)&this_02[1].field_0x660;
              *(undefined1 *)(iVar4 + 2) = 1;
              *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
              uVar11 = *(uint *)(*(int *)&this_02[1].field_0x660 + 3);
              if (-1 < (int)uVar11) {
                FUN_006b3af0(DAT_008075a8,uVar11);
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
        iVar4 = 1;
        puVar9 = (undefined4 *)(*(int *)&this_02->field_0x5d + 0x28);
        uVar11 = FUN_006b4fe0(*(int *)&this_02->field_0x5d);
        iVar4 = FUN_006b50c0(0x172,0x18,(uint)*(ushort *)(*(int *)&this_02->field_0x5d + 0xe),uVar11
                             ,puVar9,iVar4);
        *(int *)&this_02[1].field_0x22b = iVar4;
        uVar11 = *(uint *)(iVar4 + 0x14);
        if (uVar11 == 0) {
          uVar11 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                   *(int *)(iVar4 + 8);
        }
        puVar9 = (undefined4 *)FUN_006b4fa0(iVar4);
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar9 = 0xffffffff;
          puVar9 = puVar9 + 1;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar9 = 0xff;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        FUN_006b5b10(*(int *)&this_02[1].field_0x22b,0,0,1,
                     *(int *)(*(int *)&this_02[1].field_0x22b + 4) + -1,1,
                     (byte)*(undefined4 *)(*(int *)&this_02->field_0x1a5b + 0x140),0xd);
        uVar11 = *(uint *)&this_02[1].field_0x22b;
        puVar10 = &this_02[1].field_0x227;
        FUN_006b2330((uint)DAT_008075a8,(uint *)puVar10,0x31,0x404acf,*(uint *)(uVar11 + 4),
                     *(uint *)(uVar11 + 8),uVar11);
        Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*(uint *)puVar10,0xffffffff,0x112,0x1d3);
        FUN_006b3af0(DAT_008075a8,*(uint *)puVar10);
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
          thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)&this_02->field_0x5d,10,2);
        }
        pcVar14 = *(char **)&this_02[1].field_0x658;
        if (((pcVar14 != (char *)0x0) && (*pcVar14 != '\0')) && (-1 < (int)*(uint *)(pcVar14 + 3)))
        {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(pcVar14 + 3));
        }
        pcVar14 = *(char **)&this_02[1].field_0x65c;
        if (((pcVar14 != (char *)0x0) && (*pcVar14 != '\0')) && (-1 < (int)*(uint *)(pcVar14 + 3)))
        {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(pcVar14 + 3));
        }
        pcVar14 = *(char **)&this_02[1].field_0x660;
        if (((pcVar14 != (char *)0x0) && (*pcVar14 != '\0')) && (-1 < (int)*(uint *)(pcVar14 + 3)))
        {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(pcVar14 + 3));
        }
        this_01 = DAT_00802a30;
        if (DAT_00802a30 != (CursorClassTy *)0x0) {
          uVar6 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
          uVar2 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
          DAT_00802a30[0xb].field_0x47 = 1;
          *(undefined2 *)&this_01[0xb].field_0x48 = 0xffff;
          CursorClassTy::SetGCType(this_01,CASE_0,uVar2,uVar6);
          CursorClassTy::DrawSprite
                    (this_01,*(int *)((int)&this_01[1].field_0060 + 1),*(int *)&this_01[2].field_0x1
                    );
          this_01[2].field_0xa = 0;
          *(undefined4 *)&this_01[0xc].field_0x2f = 0xffffffff;
        }
        puVar9 = &local_20c;
        for (iVar4 = 0x7e; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        CVar1 = this_02->field_1A5F;
        *(undefined2 *)puVar9 = 0;
        *(undefined1 *)((int)puVar9 + 2) = 0;
        local_13c = *(undefined4 *)&this_02->field_0x8;
        this_02->field_0x65 = 3;
        local_149 = 0x2340;
        local_138 = 2;
        local_134 = 0x6943;
        local_122 = 0x24bc;
        local_111 = 2;
        switch(CVar1) {
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
      switch(CVar1) {
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
        this_02[1].field_0x655 = 0;
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
      iVar4 = *(int *)&this_02->field_0x1a5b;
      local_115 = local_13c;
      if (*(int *)(iVar4 + 0x2e6) != 0) {
        puVar9 = local_26c;
        for (iVar17 = 6; iVar17 != 0; iVar17 = iVar17 + -1) {
          *puVar9 = 0xffffffff;
          puVar9 = puVar9 + 1;
        }
        *(undefined2 *)puVar9 = 0xffff;
        MMsgTy::SetPanel(*(MMsgTy **)(iVar4 + 0x2e6),0,(int)&local_20c,0,0);
        MMsgTy::StatePanel(*(MMsgTy **)(*(int *)&this_02->field_0x1a5b + 0x2e6),(int)local_26c);
      }
      if ((DAT_008067a0 != '\0') && (DAT_00811764 != 0)) {
        FUN_006b6160(local_46c,DAT_00811764 + 0x18);
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

