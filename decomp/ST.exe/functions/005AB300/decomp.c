
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::InitChooseMap */

void __thiscall ChooseMapTy::InitChooseMap(ChooseMapTy *this,ChooseMapTy param_1,byte param_2)

{
  ChooseMapTy CVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  ChooseMapTy *this_01;
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
  ChooseMapTy *pCVar13;
  void *unaff_EDI;
  char *pcVar14;
  char *pcVar15;
  ChooseMapTy *pCVar16;
  ChooseMapTy *pCVar17;
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
  iVar4 = Library::MSVCRT::__setjmp3(local_250.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_250.previous;
    iVar18 = ReportDebugMessage(s_E____titans_Start_load_obj_cpp_007cc728,0x15a,0,iVar4,
                                &DAT_007a4ccc,s_ChooseMapTy__InitChooseMap_007cc770);
    if (iVar18 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_load_obj_cpp_007cc728,0x15a);
    return;
  }
  local_10[0x1a5f] = param_1;
  if (2 < *(byte *)(DAT_0081176c + 0x2eb)) {
    *(undefined1 *)(DAT_0081176c + 0x2eb) = 2;
  }
  _DAT_0080f32e = 0;
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
    }
  }
  uVar11 = 0xffffffff;
  pCVar13 = this_01 + 0x1ca3;
  pcVar14 = &DAT_00807680;
  do {
    pcVar15 = pcVar14;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar15 = pcVar14 + 1;
    cVar19 = *pcVar14;
    pcVar14 = pcVar15;
  } while (cVar19 != '\0');
  uVar11 = ~uVar11;
  pCVar16 = (ChooseMapTy *)(pcVar15 + -uVar11);
  pCVar17 = pCVar13;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pCVar17 = *(undefined4 *)pCVar16;
    pCVar16 = pCVar16 + 4;
    pCVar17 = pCVar17 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pCVar17 = *pCVar16;
    pCVar16 = pCVar16 + 1;
    pCVar17 = pCVar17 + 1;
  }
  switch(this_01[0x1a5f]) {
  case (ChooseMapTy)0x1:
  case (ChooseMapTy)0x2:
  case (ChooseMapTy)0x4:
  case (ChooseMapTy)0x5:
    local_c = 0xffffffff;
    pcVar14 = PTR_s_CUSTOM__0079c050;
    do {
      pcVar15 = pcVar14;
      if (local_c == 0) break;
      local_c = local_c - 1;
      pcVar15 = pcVar14 + 1;
      cVar19 = *pcVar14;
      pcVar14 = pcVar15;
    } while (cVar19 != '\0');
    local_c = ~local_c;
    pCVar16 = (ChooseMapTy *)(pcVar15 + -local_c);
    iVar4 = -1;
    pCVar17 = pCVar13;
    do {
      pCVar13 = pCVar17;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pCVar13 = pCVar17 + 1;
      CVar1 = *pCVar17;
      pCVar17 = pCVar13;
    } while (CVar1 != (ChooseMapTy)0x0);
    goto LAB_005ab4dc;
  case (ChooseMapTy)0x3:
    uVar11 = 0xffffffff;
    pcVar14 = PTR_s_MISSIONS__0079c054;
    do {
      pcVar15 = pcVar14;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar15 = pcVar14 + 1;
      cVar19 = *pcVar14;
      pcVar14 = pcVar15;
    } while (cVar19 != '\0');
    uVar11 = ~uVar11;
    iVar4 = -1;
    do {
      pCVar17 = pCVar13;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pCVar17 = pCVar13 + 1;
      CVar1 = *pCVar13;
      pCVar13 = pCVar17;
    } while (CVar1 != (ChooseMapTy)0x0);
    pCVar16 = (ChooseMapTy *)(pcVar15 + -uVar11);
    pCVar13 = pCVar17 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pCVar13 = *(undefined4 *)pCVar16;
      pCVar16 = pCVar16 + 4;
      pCVar13 = pCVar13 + 4;
    }
    goto LAB_005ab4e5;
  case (ChooseMapTy)0x9:
  case (ChooseMapTy)0xa:
  case (ChooseMapTy)0xb:
  case (ChooseMapTy)0xc:
switchD_005ab3e3_caseD_9:
    uVar11 = 0xffffffff;
    pcVar14 = PTR_s_SAVEGAME__0079c04c;
    do {
      pcVar15 = pcVar14;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar15 = pcVar14 + 1;
      cVar19 = *pcVar14;
      pcVar14 = pcVar15;
    } while (cVar19 != '\0');
    uVar11 = ~uVar11;
    iVar4 = -1;
    pCVar13 = this_01 + 0x1ca3;
    do {
      pCVar16 = pCVar13;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pCVar16 = pCVar13 + 1;
      CVar1 = *pCVar13;
      pCVar13 = pCVar16;
    } while (CVar1 != (ChooseMapTy)0x0);
    pCVar13 = (ChooseMapTy *)(pcVar15 + -uVar11);
    pCVar16 = pCVar16 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pCVar16 = *(undefined4 *)pCVar13;
      pCVar13 = pCVar13 + 4;
      pCVar16 = pCVar16 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pCVar16 = *pCVar13;
      pCVar13 = pCVar13 + 1;
      pCVar16 = pCVar16 + 1;
    }
    uVar11 = 0xffffffff;
    pcVar14 = (char *)&DAT_00807ddd;
    do {
      pcVar15 = pcVar14;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar15 = pcVar14 + 1;
      cVar19 = *pcVar14;
      pcVar14 = pcVar15;
    } while (cVar19 != '\0');
    uVar11 = ~uVar11;
    iVar4 = -1;
    pCVar13 = this_01 + 0x1ca3;
    do {
      pCVar16 = pCVar13;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pCVar16 = pCVar13 + 1;
      CVar1 = *pCVar13;
      pCVar13 = pCVar16;
    } while (CVar1 != (ChooseMapTy)0x0);
    pCVar13 = (ChooseMapTy *)(pcVar15 + -uVar11);
    pCVar16 = pCVar16 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pCVar16 = *(undefined4 *)pCVar13;
      pCVar13 = pCVar13 + 4;
      pCVar16 = pCVar16 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pCVar16 = *pCVar13;
      pCVar13 = pCVar13 + 1;
      pCVar16 = pCVar16 + 1;
    }
    FUN_006b8280((char *)(this_01 + 0x1ca3),(char *)(this_01 + 0x1ca3));
    break;
  case (ChooseMapTy)0x13:
    if (DAT_00803400 == 0xc) goto switchD_005ab3e3_caseD_9;
    local_c = 0xffffffff;
    pcVar14 = PTR_s_CUSTOM__0079c050;
    do {
      pcVar15 = pcVar14;
      if (local_c == 0) break;
      local_c = local_c - 1;
      pcVar15 = pcVar14 + 1;
      cVar19 = *pcVar14;
      pcVar14 = pcVar15;
    } while (cVar19 != '\0');
    local_c = ~local_c;
    pCVar16 = (ChooseMapTy *)(pcVar15 + -local_c);
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pCVar17 = pCVar13 + 1;
      CVar1 = *pCVar13;
      pCVar13 = pCVar17;
    } while (CVar1 != (ChooseMapTy)0x0);
LAB_005ab4dc:
    pCVar13 = pCVar13 + -1;
    for (uVar12 = local_c >> 2; uVar11 = local_c, uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pCVar13 = *(undefined4 *)pCVar16;
      pCVar16 = pCVar16 + 4;
      pCVar13 = pCVar13 + 4;
    }
LAB_005ab4e5:
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pCVar13 = *pCVar16;
      pCVar16 = pCVar16 + 1;
      pCVar13 = pCVar13 + 1;
    }
  }
  uVar11 = 0xffffffff;
  pCVar13 = this_01 + 0x1da7;
  pCVar16 = this_01 + 0x1ca3;
  do {
    pCVar17 = pCVar16;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pCVar17 = pCVar16 + 1;
    CVar1 = *pCVar16;
    pCVar16 = pCVar17;
  } while (CVar1 != (ChooseMapTy)0x0);
  uVar11 = ~uVar11;
  pCVar16 = pCVar17 + -uVar11;
  pCVar17 = pCVar13;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pCVar17 = *(undefined4 *)pCVar16;
    pCVar16 = pCVar16 + 4;
    pCVar17 = pCVar17 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pCVar17 = *pCVar16;
    pCVar16 = pCVar16 + 1;
    pCVar17 = pCVar17 + 1;
  }
  FUN_006b78c0((char *)pCVar13,(char *)pCVar13);
  pvVar5 = FindFirstChangeNotificationA((LPCSTR)(this_01 + 0x1da7),0,1);
  *(HANDLE *)(this_01 + 0x1c8f) = pvVar5;
  if (pvVar5 == (HANDLE)0xffffffff) {
    *(undefined4 *)(this_01 + 0x1c8f) = 0;
  }
  FUN_006b8280((char *)(this_01 + 0x1ca3),(char *)(this_01 + 0x1ca3));
  FUN_006b8280((char *)(this_01 + 0x1da7),(char *)(this_01 + 0x1da7));
  uVar6 = FUN_0070a9f0(DAT_00806780,s_LOADSINGLE_007cc79c,0,1);
  *(undefined4 *)(DAT_0081176c + 0x2c) = uVar6;
  *(undefined4 *)(this_01 + 0x5d) = *(undefined4 *)(DAT_0081176c + 0x2c);
  FUN_006bc360(*(int *)(DAT_0081176c + 0x2c),local_86c,(int *)0x0);
  *(undefined4 *)(*(int *)(this_01 + 0x1a5b) + 0x140) = 0x1f;
  FUN_00718780((int)local_86c,0,0x100,0x8b,0x15,(undefined4 *)(*(int *)(this_01 + 0x1a5b) + 0x144));
  puVar7 = FUN_00709af0(DAT_00806784,0xb,(byte *)s_FILE_LIST_007cc084,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)(this_01 + 0x1c7f) = puVar7;
  puVar7 = FUN_0070a5a0(DAT_00806780,1,s_MM_MAPB_007cc790,0,1);
  thunk_FUN_00540760(*(undefined4 **)(DAT_0081176c + 0x2f0),0,0,'\x01',(byte *)puVar7);
  *(undefined4 *)(this_01 + 0x20b3) = 0x1010101;
  this_01[0x20b7] = (ChooseMapTy)0x1;
  switch(this_01[0x1a5f]) {
  case (ChooseMapTy)0x1:
  case (ChooseMapTy)0x2:
  case (ChooseMapTy)0x3:
  case (ChooseMapTy)0x9:
  case (ChooseMapTy)0xa:
  case (ChooseMapTy)0xb:
switchD_005ab64d_caseD_1:
    this_01[0x20b7] = (ChooseMapTy)0x0;
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
        this_01[0x20b4] = (ChooseMapTy)0x0;
      case 6:
      case 7:
        this_01[0x20b5] = (ChooseMapTy)0x0;
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
          *(undefined4 *)(this_01 + 0x2d) = 0x28;
          *(undefined2 *)(this_01 + 0x31) = 1;
          *(undefined2 *)(this_01 + 0x33) = *(undefined2 *)(*(int *)(DAT_0081176c + 0x548) + 8);
          FUN_006e6080(this_01,2,*(undefined4 *)(DAT_0081176c + 0x389),
                       (undefined4 *)(this_01 + 0x1d));
          *(undefined4 *)(this_01 + 0x2d) = 0x22;
          *(undefined2 *)(this_01 + 0x31) = 0;
          *(undefined2 *)(this_01 + 0x33) = 0;
          FUN_006e6080(this_01,2,*(undefined4 *)(DAT_0081176c + 0x389),
                       (undefined4 *)(this_01 + 0x1d));
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
        if (*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
          MMsgTy::ShowSprites(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6));
          *(undefined4 *)(*(int *)(*(int *)(this_01 + 0x1a5b) + 0x2e6) + 0x1cab) =
               *(undefined4 *)(this_01 + 8);
        }
        PaintChooseMap(this_01,'\x01');
        SpriteClassTy::InitSprite
                  ((SpriteClassTy *)(this_01 + 0x1a70),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0)
        ;
        (**(code **)(*(int *)(this_01 + 0x1a70) + 4))
                  (DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
        *(undefined4 *)(this_01 + 0x1a8c) = 0x2f8;
        *(undefined4 *)(this_01 + 0x1a90) = 0x3c;
        *(undefined4 *)(this_01 + 0x1a78) = 0;
        SpriteClassTy::InitSprite
                  ((SpriteClassTy *)(this_01 + 0x1b01),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0)
        ;
        (**(code **)(*(int *)(this_01 + 0x1b01) + 4))
                  (DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
        *(undefined4 *)(this_01 + 0x1b1d) = 0x2f8;
        *(undefined4 *)(this_01 + 0x1b21) = 0x1b8;
        *(undefined4 *)(this_01 + 0x1b09) = 0;
        SpriteClassTy::InitSprite
                  ((SpriteClassTy *)(this_01 + 0x1b92),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0)
        ;
        (**(code **)(*(int *)(this_01 + 0x1b92) + 4))
                  (DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
        iVar4 = 1;
        *(undefined4 *)(this_01 + 0x1bae) = 0x2fe;
        *(undefined4 *)(this_01 + 0x1bb2) = 0x5c;
        puVar9 = (undefined4 *)(*(int *)(this_01 + 0x5d) + 0x28);
        *(undefined4 *)(this_01 + 0x1b9a) = 0;
        uVar11 = FUN_006b4fe0(*(int *)(this_01 + 0x5d));
        iVar4 = FUN_006b50c0(0x1e4,399,(uint)*(ushort *)(*(int *)(this_01 + 0x5d) + 0xe),uVar11,
                             puVar9,iVar4);
        *(int *)(this_01 + 0x1c7b) = iVar4;
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
        pCVar13 = this_01 + 0x1c23;
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar9 = 0;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        uVar11 = 0x3f;
        do {
          FUN_006b2330((uint)DAT_008075a8,(uint *)pCVar13,0x31,0x40213a,
                       *(uint *)(*(int *)(this_01 + 0x1c7b) + 4),0x13,(uint)this_01);
          Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*(uint *)pCVar13,0xffffffff,0x114,uVar11);
          uVar11 = uVar11 + 0x13;
          pCVar13 = pCVar13 + 4;
        } while ((int)uVar11 < 0x1e1);
        CreateCtrls(this_01,'\0');
        PrepFiles(this_01,*(uint *)(this_01 + 0x1c93));
        FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0x204,0x19d,
                     *(int *)(this_01 + 0x1a5b) + 0x140);
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
        *(undefined1 **)(this_01 + 0x20b8) = puVar10;
        if (puVar10 != (undefined1 *)0x0) {
          uVar12 = 0;
          cVar19 = '\x01';
          uVar11 = 0x10;
          iVar18 = 1;
          iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x38,0x204,0x19d);
          uVar11 = HoloTy::Init(*(HoloTy **)(this_01 + 0x20b8),2,0x112,0x38,iVar4,iVar18,uVar11,
                                cVar19,uVar12);
          if (uVar11 != 0) {
            iVar4 = *(int *)(this_01 + 0x20b8);
            *(undefined1 *)(iVar4 + 2) = 1;
            *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
            if (-1 < (int)*(uint *)(*(int *)(this_01 + 0x20b8) + 3)) {
              FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_01 + 0x20b8) + 3));
            }
            if (*(uint *)(this_01 + 0x1a74) != 0xffffffff) {
              FUN_006b3af0(*(int **)(this_01 + 0x1ab8),*(uint *)(this_01 + 0x1a74));
            }
            if (*(uint *)(this_01 + 0x1b05) != 0xffffffff) {
              FUN_006b3af0(*(int **)(this_01 + 0x1b49),*(uint *)(this_01 + 0x1b05));
            }
            if (*(uint *)(this_01 + 0x1b96) != 0xffffffff) {
              FUN_006b3af0(*(int **)(this_01 + 0x1bda),*(uint *)(this_01 + 0x1b96));
            }
            pCVar13 = this_01 + 0x1c23;
            iVar4 = 0x16;
            do {
              FUN_006b3af0(DAT_008075a8,*(uint *)pCVar13);
              pCVar13 = pCVar13 + 4;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        if (local_8 != 0xffffffff) {
          FUN_006b3bb0(DAT_008075a8,local_8);
          local_8 = 0xffffffff;
        }
        if (this_01[0x20b4] == (ChooseMapTy)0x0) {
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
                       *(int *)(this_01 + 0x1a5b) + 0x140);
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
          *(undefined1 **)(this_01 + 0x20bc) = puVar10;
          if (puVar10 != (undefined1 *)0x0) {
            uVar12 = 0;
            cVar19 = '\x01';
            uVar11 = 0x10;
            iVar18 = 1;
            iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x121);
            uVar11 = HoloTy::Init(*(HoloTy **)(this_01 + 0x20bc),4,10,0xb4,iVar4,iVar18,uVar11,
                                  cVar19,uVar12);
            if (uVar11 != 0) {
              iVar4 = *(int *)(this_01 + 0x20bc);
              *(undefined1 *)(iVar4 + 2) = 1;
              *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
              if (-1 < (int)*(uint *)(*(int *)(this_01 + 0x20bc) + 3)) {
                FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_01 + 0x20bc) + 3));
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
        if (this_01[0x20b7] == (ChooseMapTy)0x0) {
          CVar1 = this_01[0x1a5f];
          if ((((CVar1 == (ChooseMapTy)0xc) || (CVar1 == (ChooseMapTy)0x4)) ||
              (CVar1 == (ChooseMapTy)0x5)) || (CVar1 == (ChooseMapTy)0x13)) {
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
                       *(int *)(this_01 + 0x1a5b) + 0x140);
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
          *(undefined1 **)(this_01 + 0x20c0) = puVar10;
          if (puVar10 != (undefined1 *)0x0) {
            uVar12 = 0;
            cVar19 = '\x01';
            uVar11 = 0x10;
            iVar18 = 1;
            iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,200,0x1f1,400,0x62);
            uVar11 = HoloTy::Init(*(HoloTy **)(this_01 + 0x20c0),1,200,0x1f1,iVar4,iVar18,uVar11,
                                  cVar19,uVar12);
            if (uVar11 != 0) {
              iVar4 = *(int *)(this_01 + 0x20c0);
              *(undefined1 *)(iVar4 + 2) = 1;
              *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
              if (-1 < (int)*(uint *)(*(int *)(this_01 + 0x20c0) + 3)) {
                FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_01 + 0x20c0) + 3));
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
        puVar9 = (undefined4 *)(*(int *)(this_01 + 0x5d) + 0x28);
        uVar11 = FUN_006b4fe0(*(int *)(this_01 + 0x5d));
        iVar4 = FUN_006b50c0(0x172,0x18,(uint)*(ushort *)(*(int *)(this_01 + 0x5d) + 0xe),uVar11,
                             puVar9,iVar4);
        *(int *)(this_01 + 0x1c8b) = iVar4;
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
        FUN_006b5b10(*(int *)(this_01 + 0x1c8b),0,0,1,*(int *)(*(int *)(this_01 + 0x1c8b) + 4) + -1,
                     1,(byte)*(undefined4 *)(*(int *)(this_01 + 0x1a5b) + 0x140),0xd);
        uVar11 = *(uint *)(this_01 + 0x1c8b);
        pCVar13 = this_01 + 0x1c87;
        FUN_006b2330((uint)DAT_008075a8,(uint *)pCVar13,0x31,0x404acf,*(uint *)(uVar11 + 4),
                     *(uint *)(uVar11 + 8),uVar11);
        Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*(uint *)pCVar13,0xffffffff,0x112,0x1d3);
        FUN_006b3af0(DAT_008075a8,*(uint *)pCVar13);
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
          thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)(this_01 + 0x5d),10,2);
        }
        pcVar14 = *(char **)(this_01 + 0x20b8);
        if (((pcVar14 != (char *)0x0) && (*pcVar14 != '\0')) && (-1 < (int)*(uint *)(pcVar14 + 3)))
        {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(pcVar14 + 3));
        }
        pcVar14 = *(char **)(this_01 + 0x20bc);
        if (((pcVar14 != (char *)0x0) && (*pcVar14 != '\0')) && (-1 < (int)*(uint *)(pcVar14 + 3)))
        {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(pcVar14 + 3));
        }
        pcVar14 = *(char **)(this_01 + 0x20c0);
        if (((pcVar14 != (char *)0x0) && (*pcVar14 != '\0')) && (-1 < (int)*(uint *)(pcVar14 + 3)))
        {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(pcVar14 + 3));
        }
        this_00 = DAT_00802a30;
        if (DAT_00802a30 != (CursorClassTy *)0x0) {
          uVar6 = *(undefined4 *)(DAT_00802a30 + 0xc9);
          uVar2 = *(undefined4 *)(DAT_00802a30 + 0xc5);
          DAT_00802a30[0x493] = (CursorClassTy)0x1;
          *(undefined2 *)(this_00 + 0x494) = 0xffff;
          CursorClassTy::SetGCType(this_00,0,uVar2,uVar6);
          CursorClassTy::DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
          this_00[0xd2] = (CursorClassTy)0x0;
          *(undefined4 *)(this_00 + 0x4df) = 0xffffffff;
        }
        puVar9 = &local_20c;
        for (iVar4 = 0x7e; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        CVar1 = this_01[0x1a5f];
        *(undefined2 *)puVar9 = 0;
        *(undefined1 *)((int)puVar9 + 2) = 0;
        local_13c = *(undefined4 *)(this_01 + 8);
        this_01[0x65] = (ChooseMapTy)0x3;
        local_149 = 0x2340;
        local_138 = 2;
        local_134 = 0x6943;
        local_122 = 0x24bc;
        local_111 = 2;
        switch(CVar1) {
        case (ChooseMapTy)0x4:
        case (ChooseMapTy)0x5:
        case (ChooseMapTy)0xc:
          local_10d = 0x694d;
          break;
        default:
          local_10d = 0x6943;
          local_109 = 1;
          break;
        case (ChooseMapTy)0x13:
          local_10d = 0x6951;
        }
      }
      switch(CVar1) {
      case (ChooseMapTy)0x1:
      case (ChooseMapTy)0x2:
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
      case (ChooseMapTy)0x3:
        this_01[0x20b5] = (ChooseMapTy)0x0;
        local_1e5 = 0x2343;
        local_1d4 = 2;
        local_1d0 = 0x6956;
        local_1d8 = local_13c;
        break;
      case (ChooseMapTy)0x4:
      case (ChooseMapTy)0x5:
        local_1e5 = 0x2357;
        local_1d4 = 2;
        local_1d0 = 0x694e;
        local_1be = 0x2349;
        local_1ad = 2;
        local_1a9 = 0x694c;
        local_1d8 = local_13c;
        local_1b1 = local_13c;
        break;
      case (ChooseMapTy)0x9:
      case (ChooseMapTy)0xa:
      case (ChooseMapTy)0xb:
        local_1e5 = 0x233e;
        local_1d4 = 2;
        local_1d0 = 0x6949;
        local_1d8 = local_13c;
        break;
      case (ChooseMapTy)0x13:
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
      case (ChooseMapTy)0xc:
        local_1e5 = 0x233e;
        local_1d4 = 2;
        local_1d0 = 0x694e;
        local_1d8 = local_13c;
      }
      iVar4 = *(int *)(this_01 + 0x1a5b);
      local_115 = local_13c;
      if (*(int *)(iVar4 + 0x2e6) != 0) {
        puVar9 = local_26c;
        for (iVar18 = 6; iVar18 != 0; iVar18 = iVar18 + -1) {
          *puVar9 = 0xffffffff;
          puVar9 = puVar9 + 1;
        }
        *(undefined2 *)puVar9 = 0xffff;
        MMsgTy::SetPanel(*(MMsgTy **)(iVar4 + 0x2e6),0,(int)&local_20c,0,0);
        MMsgTy::StatePanel(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),(int)local_26c);
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
      thunk_FUN_005b6730(this_01,0xb,'\0',-1);
      g_currentExceptionFrame = local_250.previous;
      return;
    }
  }
}

