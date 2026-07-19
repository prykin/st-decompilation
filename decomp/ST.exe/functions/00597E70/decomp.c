
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::SetState */

void __thiscall FSGSTy::SetState(FSGSTy *this,FSGSTy param_1)

{
  FSGSTy FVar1;
  code *pcVar2;
  FSGSTy *this_00;
  undefined4 *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 local_270 [7];
  InternalExceptionFrame local_254;
  undefined4 local_210;
  undefined4 local_203;
  undefined4 local_1ff;
  undefined4 local_1fb;
  undefined4 local_1e9;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1c2;
  undefined4 local_1b5;
  undefined4 local_1b1;
  undefined4 local_1ad;
  undefined4 local_14d;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_126;
  FSGSTy local_122;
  undefined4 local_119;
  undefined4 local_115;
  undefined4 local_111;
  FSGSTy *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  puVar3 = &local_210;
  local_14 = this;
  for (iVar6 = 0x7e; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  local_8 = 0xffffffff;
  local_254.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_254;
  iVar6 = __setjmp3(local_254.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_254.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x397,0,iVar6,&DAT_007a4ccc
                               ,s_FSGSTy__SetState_007cc1b8);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x397);
    return;
  }
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
    }
  }
  this_00 = local_14;
  local_14[0x65] = param_1;
  if (*(HoloTy **)(local_14 + 0x1f23) != (HoloTy *)0x0) {
    HoloTy::Done(*(HoloTy **)(local_14 + 0x1f23));
    FUN_0072e2b0(*(undefined4 **)(this_00 + 0x1f23));
    *(undefined4 *)(this_00 + 0x1f23) = 0;
  }
  if (*(HoloTy **)(this_00 + 0x1f27) != (HoloTy *)0x0) {
    HoloTy::Done(*(HoloTy **)(this_00 + 0x1f27));
    FUN_0072e2b0(*(undefined4 **)(this_00 + 0x1f27));
    *(undefined4 *)(this_00 + 0x1f27) = 0;
  }
  if (*(HoloTy **)(this_00 + 0x1f2b) != (HoloTy *)0x0) {
    HoloTy::Done(*(HoloTy **)(this_00 + 0x1f2b));
    FUN_0072e2b0(*(undefined4 **)(this_00 + 0x1f2b));
    *(undefined4 *)(this_00 + 0x1f2b) = 0;
  }
  if (*(HoloTy **)(this_00 + 0x1f2f) != (HoloTy *)0x0) {
    HoloTy::Done(*(HoloTy **)(this_00 + 0x1f2f));
    FUN_0072e2b0(*(undefined4 **)(this_00 + 0x1f2f));
    *(undefined4 *)(this_00 + 0x1f2f) = 0;
  }
  switch(this_00[0x65]) {
  case (FSGSTy)0x6:
    if (this_00[0x1abb] != (FSGSTy)0x0) {
      PrepBkgMess(this_00,'\0');
    }
    iVar6 = *(int *)(this_00 + 0x1ac0);
    uVar9 = *(uint *)(iVar6 + 0x14);
    if (uVar9 == 0) {
      uVar9 = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar6 + 8);
    }
    puVar3 = (undefined4 *)FUN_006b4fa0(iVar6);
    for (uVar14 = uVar9 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar3 = 0xff;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1a73),*(int *)(this_00 + 0x1ac0),0,0,0x16,0x1b8,0xf0)
    ;
    iVar12 = -1;
    iVar11 = -1;
    uVar8 = 2;
    iVar7 = -1;
    iVar6 = -1;
    puVar4 = (uint *)FUN_006b0140(0x254e,DAT_00807618);
    ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1a73),puVar4,iVar6,iVar7,uVar8,iVar11,iVar12);
    FUN_006b3430(DAT_008075a8,*(uint *)(this_00 + 0x1abc));
    FUN_006b35d0(DAT_008075a8,*(uint *)(this_00 + 0x1abc));
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4035e9,0x1b8,0x106,0x2563);
    FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0xb4,0xaa);
    puVar5 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      puVar5[2] = 1;
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 3) = 0xffffffff;
      puVar5[1] = 2;
      *(undefined4 *)(puVar5 + 7) = 0;
      *(undefined4 *)(puVar5 + 0xb) = 0;
      *(undefined4 *)(puVar5 + 0xf) = 0;
      *(undefined4 *)(puVar5 + 0x1b) = 1;
      *(undefined4 *)(puVar5 + 0x13) = 1;
      *(undefined4 *)(puVar5 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar5 + 0x27) = 0;
      *(undefined4 *)(puVar5 + 0x23) = 0;
      *(undefined4 *)(puVar5 + 0x2f) = 1;
      *(undefined4 *)(puVar5 + 0x2b) = 1;
    }
    *(undefined1 **)(this_00 + 0x1f23) = puVar5;
    if (puVar5 != (undefined1 *)0x0) {
      uVar14 = 0;
      cVar10 = '\x01';
      uVar9 = 0x10;
      iVar7 = 1;
      iVar6 = FUN_006bf9f0(DAT_008075a8,0xb4,0xaa,0x1b8,0x106);
      uVar9 = HoloTy::Init(*(HoloTy **)(this_00 + 0x1f23),2,0xb4,0xaa,iVar6,iVar7,uVar9,cVar10,
                           uVar14);
      if (uVar9 != 0) {
        iVar6 = *(int *)(this_00 + 0x1f23);
        *(undefined1 *)(iVar6 + 2) = 1;
        *(undefined4 *)(iVar6 + 0x17) = *(undefined4 *)(iVar6 + 0x13);
        if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x1f23) + 3)) {
          FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x1f23) + 3));
        }
        HoloTy::NextFas(*(HoloTy **)(this_00 + 0x1f23));
        FUN_006b3af0(DAT_008075a8,*(uint *)(this_00 + 0x1abc));
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
    local_119 = *(undefined4 *)(this_00 + 8);
    local_126 = 0x2336;
    local_115 = 2;
    local_111 = 0x6941;
    goto switchD_00597fa6_caseD_9;
  case (FSGSTy)0x7:
    FVar1 = this_00[0x1a5f];
    local_c = 0x2563;
    if (FVar1 == (FSGSTy)0x3) {
      FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0x2e1,0x14c,
                   *(int *)(this_00 + 0x1a5b) + 0x140);
      FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x22,0x72);
      *(undefined4 *)(this_00 + 0x1b48) = 0x77;
      *(int *)(this_00 + 0x1b44) = 0x2fe - *(int *)(this_00 + 0x1b4c);
      if (*(uint *)(this_00 + 0x1b2c) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(this_00 + 0x1b70),*(uint *)(this_00 + 0x1b2c),0xfffffffe,
                     *(uint *)(this_00 + 0x1b44),*(uint *)(this_00 + 0x1b48));
      }
      if (*(uint *)(this_00 + 0x1b2c) != 0xffffffff) {
        FUN_006b35d0(*(int **)(this_00 + 0x1b70),*(uint *)(this_00 + 0x1b2c));
      }
      *(int *)(this_00 + 0x1bd5) = 0x2fe - *(int *)(this_00 + 0x1bdd);
      *(int *)(this_00 + 0x1bd9) = 0x1b9 - *(int *)(this_00 + 0x1be1);
      if (*(uint *)(this_00 + 0x1bbd) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(this_00 + 0x1c01),*(uint *)(this_00 + 0x1bbd),0xfffffffe,
                     *(uint *)(this_00 + 0x1bd5),*(uint *)(this_00 + 0x1bd9));
      }
      if (*(uint *)(this_00 + 0x1bbd) != 0xffffffff) {
        FUN_006b35d0(*(int **)(this_00 + 0x1c01),*(uint *)(this_00 + 0x1bbd));
      }
      *(undefined4 *)(this_00 + 0x1c6a) = 0x98;
      uVar9 = 0x2ee - (*(int *)(this_00 + 0x1c6e) + -7) / 2;
      *(uint *)(this_00 + 0x1c66) = uVar9;
      if (*(uint *)(this_00 + 0x1c4e) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(this_00 + 0x1c92),*(uint *)(this_00 + 0x1c4e),0xfffffffe,uVar9,
                     *(uint *)(this_00 + 0x1c6a));
      }
      if (*(uint *)(this_00 + 0x1c4e) != 0xffffffff) {
        FUN_006b35d0(*(int **)(this_00 + 0x1c92),*(uint *)(this_00 + 0x1c4e));
      }
      puVar5 = (undefined1 *)FUN_0072e530(0x33);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        puVar5[2] = 1;
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 3) = 0xffffffff;
        puVar5[1] = 2;
        *(undefined4 *)(puVar5 + 7) = 0;
        *(undefined4 *)(puVar5 + 0xb) = 0;
        *(undefined4 *)(puVar5 + 0xf) = 0;
        *(undefined4 *)(puVar5 + 0x1b) = 1;
        *(undefined4 *)(puVar5 + 0x13) = 1;
        *(undefined4 *)(puVar5 + 0x17) = 0xffffffff;
        *(undefined4 *)(puVar5 + 0x27) = 0;
        *(undefined4 *)(puVar5 + 0x23) = 0;
        *(undefined4 *)(puVar5 + 0x2f) = 1;
        *(undefined4 *)(puVar5 + 0x2b) = 1;
      }
      *(undefined1 **)(this_00 + 0x1f23) = puVar5;
      if (puVar5 != (undefined1 *)0x0) {
        uVar14 = 0;
        cVar10 = '\x01';
        uVar9 = 0x10;
        iVar7 = 1;
        iVar6 = FUN_006bf9f0(DAT_008075a8,0x22,0x72,0x2e1,0x14c);
        uVar9 = HoloTy::Init(*(HoloTy **)(this_00 + 0x1f23),2,0x22,0x72,iVar6,iVar7,uVar9,cVar10,
                             uVar14);
        if (uVar9 != 0) {
          iVar6 = *(int *)(this_00 + 0x1f23);
          *(undefined1 *)(iVar6 + 2) = 1;
          *(undefined4 *)(iVar6 + 0x17) = *(undefined4 *)(iVar6 + 0x13);
          if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x1f23) + 3)) {
            FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x1f23) + 3));
          }
          HoloTy::NextFas(*(HoloTy **)(this_00 + 0x1f23));
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,local_8);
        local_8 = 0xffffffff;
      }
      FUN_006b3af0(DAT_008075a8,*(uint *)(this_00 + 0x1abc));
      if (*(uint *)(this_00 + 0x1b2c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(this_00 + 0x1b70),*(uint *)(this_00 + 0x1b2c));
      }
      if (*(uint *)(this_00 + 0x1bbd) != 0xffffffff) {
        FUN_006b3af0(*(int **)(this_00 + 0x1c01),*(uint *)(this_00 + 0x1bbd));
      }
      if (*(uint *)(this_00 + 0x1c4e) != 0xffffffff) {
        FUN_006b3af0(*(int **)(this_00 + 0x1c92),*(uint *)(this_00 + 0x1c4e));
      }
    }
    else {
      if (FVar1 == (FSGSTy)0x9) {
        FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x401032,0x2e1,0x175,0);
        FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x22,0x5e);
        puVar5 = (undefined1 *)FUN_0072e530(0x33);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = (undefined1 *)0x0;
        }
        else {
          puVar5[2] = 1;
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 3) = 0xffffffff;
          puVar5[1] = 2;
          *(undefined4 *)(puVar5 + 7) = 0;
          *(undefined4 *)(puVar5 + 0xb) = 0;
          *(undefined4 *)(puVar5 + 0xf) = 0;
          *(undefined4 *)(puVar5 + 0x1b) = 1;
          *(undefined4 *)(puVar5 + 0x13) = 1;
          *(undefined4 *)(puVar5 + 0x17) = 0xffffffff;
          *(undefined4 *)(puVar5 + 0x27) = 0;
          *(undefined4 *)(puVar5 + 0x23) = 0;
          *(undefined4 *)(puVar5 + 0x2f) = 1;
          *(undefined4 *)(puVar5 + 0x2b) = 1;
        }
        *(undefined1 **)(this_00 + 0x1f23) = puVar5;
        if (puVar5 != (undefined1 *)0x0) {
          uVar14 = 0;
          cVar10 = '\x01';
          uVar9 = 0x10;
          iVar7 = 1;
          iVar6 = FUN_006bf9f0(DAT_008075a8,0x22,0x5e,0x2e1,0x175);
          uVar9 = HoloTy::Init(*(HoloTy **)(this_00 + 0x1f23),2,0x22,0x5e,iVar6,iVar7,uVar9,cVar10,
                               uVar14);
          if (uVar9 != 0) {
            iVar6 = *(int *)(this_00 + 0x1f23);
            *(undefined1 *)(iVar6 + 2) = 1;
            *(undefined4 *)(iVar6 + 0x17) = *(undefined4 *)(iVar6 + 0x13);
            if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x1f23) + 3)) {
              FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x1f23) + 3));
            }
            HoloTy::NextFas(*(HoloTy **)(this_00 + 0x1f23));
            FUN_006b3af0(DAT_008075a8,*(uint *)(this_00 + 0x1abc));
          }
        }
      }
      else {
        switch(FVar1) {
        case (FSGSTy)0x2:
        case (FSGSTy)0x4:
        case (FSGSTy)0x5:
        case (FSGSTy)0x7:
          if (this_00[0x1abb] != (FSGSTy)0x0) {
            cVar10 = '\0';
LAB_00598221:
            PrepBkgMess(this_00,cVar10);
          }
          break;
        case (FSGSTy)0xa:
          if (this_00[0x1abb] != (FSGSTy)0x1) {
            cVar10 = '\x01';
            goto LAB_00598221;
          }
        }
        switch(this_00[0x1a5f]) {
        case (FSGSTy)0x2:
          PaintLogLogin(this_00);
          local_c = 0x2553;
          break;
        case (FSGSTy)0x4:
          PaintLogNew(this_00);
          DAT_0080735f = 0;
          local_c = 0x2552;
          break;
        case (FSGSTy)0x5:
          PaintLogPsw(this_00);
          local_c = 0x2562;
          break;
        case (FSGSTy)0x7:
          PaintGameNew(this_00);
          local_c = 0x255b;
          break;
        case (FSGSTy)0xa:
          PaintInfo(this_00);
          local_c = 0x259c;
        }
        uVar9 = (-(uint)(this_00[0x1abb] != (FSGSTy)0x0) & 0xffffffb4) + 0xaa;
        local_10 = (-(uint)(this_00[0x1abb] != (FSGSTy)0x0) & 0x74) + 0x106;
        FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4035e9,0x1b8,local_10,local_c);
        FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0xb4,uVar9);
        puVar5 = (undefined1 *)FUN_0072e530(0x33);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = (undefined1 *)0x0;
        }
        else {
          puVar5[2] = 1;
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 3) = 0xffffffff;
          puVar5[1] = 2;
          *(undefined4 *)(puVar5 + 7) = 0;
          *(undefined4 *)(puVar5 + 0xb) = 0;
          *(undefined4 *)(puVar5 + 0xf) = 0;
          *(undefined4 *)(puVar5 + 0x1b) = 1;
          *(undefined4 *)(puVar5 + 0x13) = 1;
          *(undefined4 *)(puVar5 + 0x17) = 0xffffffff;
          *(undefined4 *)(puVar5 + 0x27) = 0;
          *(undefined4 *)(puVar5 + 0x23) = 0;
          *(undefined4 *)(puVar5 + 0x2f) = 1;
          *(undefined4 *)(puVar5 + 0x2b) = 1;
        }
        *(undefined1 **)(this_00 + 0x1f23) = puVar5;
        if (puVar5 != (undefined1 *)0x0) {
          uVar13 = 0;
          cVar10 = '\x01';
          uVar14 = 0x10;
          iVar7 = 1;
          iVar6 = FUN_006bf9f0(DAT_008075a8,0xb4,uVar9,0x1b8,local_10);
          uVar9 = HoloTy::Init(*(HoloTy **)(this_00 + 0x1f23),2,0xb4,uVar9,iVar6,iVar7,uVar14,cVar10
                               ,uVar13);
          if (uVar9 != 0) {
            iVar6 = *(int *)(this_00 + 0x1f23);
            *(undefined1 *)(iVar6 + 2) = 1;
            *(undefined4 *)(iVar6 + 0x17) = *(undefined4 *)(iVar6 + 0x13);
            if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x1f23) + 3)) {
              FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x1f23) + 3));
            }
            HoloTy::NextFas(*(HoloTy **)(this_00 + 0x1f23));
            FUN_006b3af0(DAT_008075a8,*(uint *)(this_00 + 0x1abc));
          }
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,local_8);
        local_8 = 0xffffffff;
      }
    }
    switch(this_00[0x1a5f]) {
    case (FSGSTy)0x2:
      local_203 = *(undefined4 *)(this_00 + 8);
      local_122 = this_00[0x1ed2];
      local_210 = 0x2552;
      local_1ff = 2;
      local_1fb = 0x6954;
      local_1e9 = 0x2553;
      local_1d8 = 2;
      local_1d4 = 0x6953;
      local_1c2 = 0x2564;
      local_1b1 = 2;
      local_1ad = 0x694b;
      local_126 = 0x2336;
      local_115 = 2;
      local_111 = 0x6941;
      local_1dc = local_203;
      local_1b5 = local_203;
      local_119 = local_203;
      break;
    case (FSGSTy)0x3:
      local_203 = *(undefined4 *)(this_00 + 8);
      local_210 = 0x255f;
      local_1ff = 2;
      local_1fb = 0x63ff;
      local_1e9 = 0x2560;
      local_1d8 = 2;
      local_1d4 = 0x6952;
      local_14d = 0x254c;
      local_13c = 2;
      local_138 = 0x6941;
      local_126 = 0x24bc;
      local_115 = 2;
      local_111 = 0x6952;
      local_1dc = local_203;
      local_140 = local_203;
      local_119 = local_203;
      break;
    case (FSGSTy)0x4:
      local_1dc = *(undefined4 *)(this_00 + 8);
      local_1e9 = 0x2553;
      local_1d4 = 0x6953;
      goto LAB_00599280;
    case (FSGSTy)0x5:
      local_1dc = *(undefined4 *)(this_00 + 8);
      local_1e9 = 0x2561;
      local_1d4 = 0x694b;
      goto LAB_00599280;
    case (FSGSTy)0x7:
      goto switchD_005987a8_caseD_7;
    case (FSGSTy)0x9:
    case (FSGSTy)0xa:
      local_140 = *(undefined4 *)(this_00 + 8);
      goto LAB_00599290;
    }
    goto switchD_00597fa6_caseD_9;
  case (FSGSTy)0x8:
    *(undefined4 *)(this_00 + 0x1b48) = 99;
    *(int *)(this_00 + 0x1b44) = 0x1cd - *(int *)(this_00 + 0x1b4c);
    if (*(uint *)(this_00 + 0x1b2c) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(this_00 + 0x1b70),*(uint *)(this_00 + 0x1b2c),0xfffffffe,
                   *(uint *)(this_00 + 0x1b44),*(uint *)(this_00 + 0x1b48));
    }
    if (*(uint *)(this_00 + 0x1b2c) != 0xffffffff) {
      FUN_006b35d0(*(int **)(this_00 + 0x1b70),*(uint *)(this_00 + 0x1b2c));
    }
    *(int *)(this_00 + 0x1bd5) = 0x1cd - *(int *)(this_00 + 0x1bdd);
    *(int *)(this_00 + 0x1bd9) = 0x1b8 - *(int *)(this_00 + 0x1be1);
    if (*(uint *)(this_00 + 0x1bbd) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(this_00 + 0x1c01),*(uint *)(this_00 + 0x1bbd),0xfffffffe,
                   *(uint *)(this_00 + 0x1bd5),*(uint *)(this_00 + 0x1bd9));
    }
    if (*(uint *)(this_00 + 0x1bbd) != 0xffffffff) {
      FUN_006b35d0(*(int **)(this_00 + 0x1c01),*(uint *)(this_00 + 0x1bbd));
    }
    *(undefined4 *)(this_00 + 0x1c6a) = 0x84;
    uVar9 = 0x1bd - (*(int *)(this_00 + 0x1c6e) + -7) / 2;
    *(uint *)(this_00 + 0x1c66) = uVar9;
    if (*(uint *)(this_00 + 0x1c4e) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(this_00 + 0x1c92),*(uint *)(this_00 + 0x1c4e),0xfffffffe,uVar9,
                   *(uint *)(this_00 + 0x1c6a));
    }
    if (*(uint *)(this_00 + 0x1c4e) != 0xffffffff) {
      FUN_006b35d0(*(int **)(this_00 + 0x1c92),*(uint *)(this_00 + 0x1c4e));
    }
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4023b0,0x1bf,0x175,
                 *(int *)(this_00 + 0x1a5b) + 0x140);
    FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x13,0x5e);
    puVar5 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      puVar5[2] = 1;
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 3) = 0xffffffff;
      puVar5[1] = 2;
      *(undefined4 *)(puVar5 + 7) = 0;
      *(undefined4 *)(puVar5 + 0xb) = 0;
      *(undefined4 *)(puVar5 + 0xf) = 0;
      *(undefined4 *)(puVar5 + 0x1b) = 1;
      *(undefined4 *)(puVar5 + 0x13) = 1;
      *(undefined4 *)(puVar5 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar5 + 0x27) = 0;
      *(undefined4 *)(puVar5 + 0x23) = 0;
      *(undefined4 *)(puVar5 + 0x2f) = 1;
      *(undefined4 *)(puVar5 + 0x2b) = 1;
    }
    *(undefined1 **)(this_00 + 0x1f27) = puVar5;
    if (puVar5 != (undefined1 *)0x0) {
      uVar14 = 0;
      cVar10 = '\x01';
      uVar9 = 0x10;
      iVar7 = 1;
      iVar6 = FUN_006bf9f0(DAT_008075a8,0x13,0x5e,0x1bf,0x175);
      uVar9 = HoloTy::Init(*(HoloTy **)(this_00 + 0x1f27),4,0x13,0x5e,iVar6,iVar7,uVar9,cVar10,
                           uVar14);
      if (uVar9 != 0) {
        iVar6 = *(int *)(this_00 + 0x1f27);
        *(undefined1 *)(iVar6 + 2) = 1;
        *(undefined4 *)(iVar6 + 0x17) = *(undefined4 *)(iVar6 + 0x13);
        if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x1f27) + 3)) {
          FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x1f27) + 3));
        }
        HoloTy::NextFas(*(HoloTy **)(this_00 + 0x1f27));
        if (*(uint *)(this_00 + 0x1b2c) != 0xffffffff) {
          FUN_006b3af0(*(int **)(this_00 + 0x1b70),*(uint *)(this_00 + 0x1b2c));
        }
        if (*(uint *)(this_00 + 0x1bbd) != 0xffffffff) {
          FUN_006b3af0(*(int **)(this_00 + 0x1c01),*(uint *)(this_00 + 0x1bbd));
        }
        if (*(uint *)(this_00 + 0x1c4e) != 0xffffffff) {
          FUN_006b3af0(*(int **)(this_00 + 0x1c92),*(uint *)(this_00 + 0x1c4e));
        }
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
    *(undefined4 *)(this_00 + 0x1cfb) = 99;
    *(uint *)(this_00 + 0x1cf7) = 0x308U - *(int *)(this_00 + 0x1cff);
    if (*(uint *)(this_00 + 0x1cdf) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(this_00 + 0x1d23),*(uint *)(this_00 + 0x1cdf),0xfffffffe,
                   0x308U - *(int *)(this_00 + 0x1cff),*(uint *)(this_00 + 0x1cfb));
    }
    if (*(uint *)(this_00 + 0x1cdf) != 0xffffffff) {
      FUN_006b35d0(*(int **)(this_00 + 0x1d23),*(uint *)(this_00 + 0x1cdf));
    }
    *(int *)(this_00 + 0x1d88) = 0x308 - *(int *)(this_00 + 0x1d90);
    *(int *)(this_00 + 0x1d8c) = 0x16f - *(int *)(this_00 + 0x1d94);
    if (*(uint *)(this_00 + 0x1d70) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(this_00 + 0x1db4),*(uint *)(this_00 + 0x1d70),0xfffffffe,
                   *(uint *)(this_00 + 0x1d88),*(uint *)(this_00 + 0x1d8c));
    }
    if (*(uint *)(this_00 + 0x1d70) != 0xffffffff) {
      FUN_006b35d0(*(int **)(this_00 + 0x1db4),*(uint *)(this_00 + 0x1d70));
    }
    *(undefined4 *)(this_00 + 0x1e1d) = 0x84;
    uVar9 = 0x2f8 - (*(int *)(this_00 + 0x1e21) + -7) / 2;
    *(uint *)(this_00 + 0x1e19) = uVar9;
    if (*(uint *)(this_00 + 0x1e01) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(this_00 + 0x1e45),*(uint *)(this_00 + 0x1e01),0xfffffffe,uVar9,
                   *(uint *)(this_00 + 0x1e1d));
    }
    if (*(uint *)(this_00 + 0x1e01) != 0xffffffff) {
      FUN_006b35d0(*(int **)(this_00 + 0x1e45),*(uint *)(this_00 + 0x1e01));
    }
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x40303f,0x124,0x175,
                 *(int *)(this_00 + 0x1a5b) + 0x140);
    FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x1e9,0x5e);
    puVar5 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      puVar5[2] = 1;
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 3) = 0xffffffff;
      puVar5[1] = 2;
      *(undefined4 *)(puVar5 + 7) = 0;
      *(undefined4 *)(puVar5 + 0xb) = 0;
      *(undefined4 *)(puVar5 + 0xf) = 0;
      *(undefined4 *)(puVar5 + 0x1b) = 1;
      *(undefined4 *)(puVar5 + 0x13) = 1;
      *(undefined4 *)(puVar5 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar5 + 0x27) = 0;
      *(undefined4 *)(puVar5 + 0x23) = 0;
      *(undefined4 *)(puVar5 + 0x2f) = 1;
      *(undefined4 *)(puVar5 + 0x2b) = 1;
    }
    *(undefined1 **)(this_00 + 0x1f2b) = puVar5;
    if (puVar5 != (undefined1 *)0x0) {
      uVar14 = 0;
      cVar10 = '\x01';
      uVar9 = 0x10;
      iVar7 = 1;
      iVar6 = FUN_006bf9f0(DAT_008075a8,0x1e9,0x5e,0x124,0x175);
      uVar9 = HoloTy::Init(*(HoloTy **)(this_00 + 0x1f2b),2,0x1e9,0x5e,iVar6,iVar7,uVar9,cVar10,
                           uVar14);
      if (uVar9 != 0) {
        iVar6 = *(int *)(this_00 + 0x1f2b);
        *(undefined1 *)(iVar6 + 2) = 1;
        *(undefined4 *)(iVar6 + 0x17) = *(undefined4 *)(iVar6 + 0x13);
        if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x1f2b) + 3)) {
          FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x1f2b) + 3));
        }
        HoloTy::NextFas(*(HoloTy **)(this_00 + 0x1f2b));
        if (*(uint *)(this_00 + 0x1cdf) != 0xffffffff) {
          FUN_006b3af0(*(int **)(this_00 + 0x1d23),*(uint *)(this_00 + 0x1cdf));
        }
        if (*(uint *)(this_00 + 0x1d70) != 0xffffffff) {
          FUN_006b3af0(*(int **)(this_00 + 0x1db4),*(uint *)(this_00 + 0x1d70));
        }
        if (*(uint *)(this_00 + 0x1e01) != 0xffffffff) {
          FUN_006b3af0(*(int **)(this_00 + 0x1e45),*(uint *)(this_00 + 0x1e01));
        }
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
    local_203 = *(undefined4 *)(this_00 + 8);
    local_210 = 0x255b;
    local_1ff = 2;
    local_1fb = 0x694a;
    local_1e9 = 0x255c;
    local_1d4 = 0x694e;
    local_1c2 = 0x255d;
    local_1b1 = 2;
    local_1ad = 0x6949;
    local_1dc = local_203;
    local_1b5 = local_203;
    break;
  default:
    goto switchD_00597fa6_caseD_9;
  case (FSGSTy)0xa:
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403981,0x174,0x175,
                 *(int *)(this_00 + 0x1a5b) + 0x140);
    FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x199,0x5e);
    puVar5 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      puVar5[2] = 1;
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 3) = 0xffffffff;
      puVar5[1] = 2;
      *(undefined4 *)(puVar5 + 7) = 0;
      *(undefined4 *)(puVar5 + 0xb) = 0;
      *(undefined4 *)(puVar5 + 0xf) = 0;
      *(undefined4 *)(puVar5 + 0x1b) = 1;
      *(undefined4 *)(puVar5 + 0x13) = 1;
      *(undefined4 *)(puVar5 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar5 + 0x27) = 0;
      *(undefined4 *)(puVar5 + 0x23) = 0;
      *(undefined4 *)(puVar5 + 0x2f) = 1;
      *(undefined4 *)(puVar5 + 0x2b) = 1;
    }
    *(undefined1 **)(this_00 + 0x1f2f) = puVar5;
    if (puVar5 != (undefined1 *)0x0) {
      uVar14 = 0;
      cVar10 = '\x01';
      uVar9 = 0x10;
      iVar7 = 1;
      iVar6 = FUN_006bf9f0(DAT_008075a8,0x199,0x5e,0x174,0x175);
      uVar9 = HoloTy::Init(*(HoloTy **)(this_00 + 0x1f2f),2,0x199,0x5e,iVar6,iVar7,uVar9,cVar10,
                           uVar14);
      if (uVar9 != 0) {
        iVar6 = *(int *)(this_00 + 0x1f2f);
        *(undefined1 *)(iVar6 + 2) = 1;
        *(undefined4 *)(iVar6 + 0x17) = *(undefined4 *)(iVar6 + 0x13);
        if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x1f2f) + 3)) {
          FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x1f2f) + 3));
        }
        HoloTy::NextFas(*(HoloTy **)(this_00 + 0x1f2f));
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
    *(undefined4 *)(this_00 + 0x1cfb) = 99;
    *(uint *)(this_00 + 0x1cf7) = 0x182U - *(int *)(this_00 + 0x1cff);
    if (*(uint *)(this_00 + 0x1cdf) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(this_00 + 0x1d23),*(uint *)(this_00 + 0x1cdf),0xfffffffe,
                   0x182U - *(int *)(this_00 + 0x1cff),*(uint *)(this_00 + 0x1cfb));
    }
    if (*(uint *)(this_00 + 0x1cdf) != 0xffffffff) {
      FUN_006b35d0(*(int **)(this_00 + 0x1d23),*(uint *)(this_00 + 0x1cdf));
    }
    *(int *)(this_00 + 0x1d88) = 0x182 - *(int *)(this_00 + 0x1d90);
    *(int *)(this_00 + 0x1d8c) = 0x1ce - *(int *)(this_00 + 0x1d94);
    if (*(uint *)(this_00 + 0x1d70) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(this_00 + 0x1db4),*(uint *)(this_00 + 0x1d70),0xfffffffe,
                   *(uint *)(this_00 + 0x1d88),*(uint *)(this_00 + 0x1d8c));
    }
    if (*(uint *)(this_00 + 0x1d70) != 0xffffffff) {
      FUN_006b35d0(*(int **)(this_00 + 0x1db4),*(uint *)(this_00 + 0x1d70));
    }
    *(undefined4 *)(this_00 + 0x1e1d) = 0x84;
    uVar9 = 0x172 - (*(int *)(this_00 + 0x1e21) + -7) / 2;
    *(uint *)(this_00 + 0x1e19) = uVar9;
    if (*(uint *)(this_00 + 0x1e01) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(this_00 + 0x1e45),*(uint *)(this_00 + 0x1e01),0xfffffffe,uVar9,
                   *(uint *)(this_00 + 0x1e1d));
    }
    if (*(uint *)(this_00 + 0x1e01) != 0xffffffff) {
      FUN_006b35d0(*(int **)(this_00 + 0x1e45),*(uint *)(this_00 + 0x1e01));
    }
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0x174,0x175,
                 *(int *)(this_00 + 0x1a5b) + 0x140);
    FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x13,0x5e);
    puVar5 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      puVar5[2] = 1;
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 3) = 0xffffffff;
      puVar5[1] = 2;
      *(undefined4 *)(puVar5 + 7) = 0;
      *(undefined4 *)(puVar5 + 0xb) = 0;
      *(undefined4 *)(puVar5 + 0xf) = 0;
      *(undefined4 *)(puVar5 + 0x1b) = 1;
      *(undefined4 *)(puVar5 + 0x13) = 1;
      *(undefined4 *)(puVar5 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar5 + 0x27) = 0;
      *(undefined4 *)(puVar5 + 0x23) = 0;
      *(undefined4 *)(puVar5 + 0x2f) = 1;
      *(undefined4 *)(puVar5 + 0x2b) = 1;
    }
    *(undefined1 **)(this_00 + 0x1f2b) = puVar5;
    if (puVar5 != (undefined1 *)0x0) {
      uVar14 = 0;
      cVar10 = '\x01';
      uVar9 = 0x10;
      iVar7 = 1;
      iVar6 = FUN_006bf9f0(DAT_008075a8,0x13,0x5e,0x174,0x175);
      uVar9 = HoloTy::Init(*(HoloTy **)(this_00 + 0x1f2b),4,0x13,0x5e,iVar6,iVar7,uVar9,cVar10,
                           uVar14);
      if (uVar9 != 0) {
        iVar6 = *(int *)(this_00 + 0x1f2b);
        *(undefined1 *)(iVar6 + 2) = 1;
        *(undefined4 *)(iVar6 + 0x17) = *(undefined4 *)(iVar6 + 0x13);
        if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x1f2b) + 3)) {
          FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x1f2b) + 3));
        }
        HoloTy::NextFas(*(HoloTy **)(this_00 + 0x1f2b));
        if (*(uint *)(this_00 + 0x1cdf) != 0xffffffff) {
          FUN_006b3af0(*(int **)(this_00 + 0x1d23),*(uint *)(this_00 + 0x1cdf));
        }
        if (*(uint *)(this_00 + 0x1d70) != 0xffffffff) {
          FUN_006b3af0(*(int **)(this_00 + 0x1db4),*(uint *)(this_00 + 0x1d70));
        }
        if (*(uint *)(this_00 + 0x1e01) != 0xffffffff) {
          FUN_006b3af0(*(int **)(this_00 + 0x1e45),*(uint *)(this_00 + 0x1e01));
        }
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
switchD_005987a8_caseD_7:
    local_1dc = *(undefined4 *)(this_00 + 8);
    local_1e9 = 0x24b8;
    local_1d4 = 0x63ff;
  }
LAB_00599280:
  local_1d8 = 2;
  local_140 = local_1dc;
LAB_00599290:
  local_14d = 0x254c;
  local_13c = 2;
  local_138 = 0x6941;
  local_126 = 0x24bc;
  local_115 = 2;
  local_111 = 0x6952;
  local_119 = local_140;
switchD_00597fa6_caseD_9:
  iVar6 = *(int *)(this_00 + 0x1a5b);
  if (*(int *)(iVar6 + 0x2e6) != 0) {
    puVar3 = local_270;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = 0xffff;
    MMsgTy::SetPanel(*(MMsgTy **)(iVar6 + 0x2e6),0,(int)&local_210,0,0);
    MMsgTy::StatePanel(*(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),(int)local_270);
  }
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8a60(*(byte **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c),0xfffffffe,
                   *(uint *)(DAT_00802a30 + 0x34),*(uint *)(DAT_00802a30 + 0x38));
      g_currentExceptionFrame = local_254.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_254.previous;
  return;
}

