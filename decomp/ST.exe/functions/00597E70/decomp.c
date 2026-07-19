
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::SetState */

void __thiscall FSGSTy::SetState(FSGSTy *this,undefined1 param_1)

{
  code *pcVar1;
  FSGSTy *this_00;
  undefined4 *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
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
  undefined1 local_122;
  undefined4 local_119;
  undefined4 local_115;
  undefined4 local_111;
  FSGSTy *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  puVar2 = &local_210;
  local_14 = this;
  for (iVar5 = 0x7e; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  local_8 = 0xffffffff;
  local_254.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_254;
  iVar5 = Library::MSVCRT::__setjmp3(local_254.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_254.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x397,0,iVar5,&DAT_007a4ccc
                               ,s_FSGSTy__SetState_007cc1b8);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x397);
    return;
  }
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
    }
  }
  this_00 = local_14;
  local_14->field_0065 = param_1;
  if (*(HoloTy **)&local_14[1].field_0x44 != (HoloTy *)0x0) {
    HoloTy::Done(*(HoloTy **)&local_14[1].field_0x44);
    Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_00[1].field_0x44);
    *(undefined4 *)&this_00[1].field_0x44 = 0;
  }
  if (*(HoloTy **)&this_00[1].field_0x48 != (HoloTy *)0x0) {
    HoloTy::Done(*(HoloTy **)&this_00[1].field_0x48);
    Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_00[1].field_0x48);
    *(undefined4 *)&this_00[1].field_0x48 = 0;
  }
  if (*(HoloTy **)&this_00[1].field_0x4c != (HoloTy *)0x0) {
    HoloTy::Done(*(HoloTy **)&this_00[1].field_0x4c);
    Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_00[1].field_0x4c);
    *(undefined4 *)&this_00[1].field_0x4c = 0;
  }
  if (*(HoloTy **)&this_00[1].field_0x50 != (HoloTy *)0x0) {
    HoloTy::Done(*(HoloTy **)&this_00[1].field_0x50);
    Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_00[1].field_0x50);
    *(undefined4 *)&this_00[1].field_0x50 = 0;
  }
  switch(this_00->field_0065) {
  case 6:
    if (this_00->field_0x1abb != '\0') {
      PrepBkgMess(this_00,'\0');
    }
    iVar5 = this_00->field_1AC0;
    uVar8 = *(uint *)(iVar5 + 0x14);
    if (uVar8 == 0) {
      uVar8 = ((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar5 + 8);
    }
    puVar2 = (undefined4 *)FUN_006b4fa0(iVar5);
    for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar2 = 0xff;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1a73,this_00->field_1AC0,0,0,0x16,0x1b8,0xf0);
    iVar11 = -1;
    iVar10 = -1;
    uVar7 = 2;
    iVar6 = -1;
    iVar5 = -1;
    puVar3 = (uint *)FUN_006b0140(0x254e,DAT_00807618);
    ccFntTy::WrTxt(*(ccFntTy **)&this_00->field_0x1a73,puVar3,iVar5,iVar6,uVar7,iVar10,iVar11);
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,this_00->field_1ABC);
    FUN_006b35d0(DAT_008075a8,this_00->field_1ABC);
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4035e9,0x1b8,0x106,0x2563);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0xb4,0xaa);
    puVar4 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puVar4[2] = 1;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 3) = 0xffffffff;
      puVar4[1] = 2;
      *(undefined4 *)(puVar4 + 7) = 0;
      *(undefined4 *)(puVar4 + 0xb) = 0;
      *(undefined4 *)(puVar4 + 0xf) = 0;
      *(undefined4 *)(puVar4 + 0x1b) = 1;
      *(undefined4 *)(puVar4 + 0x13) = 1;
      *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar4 + 0x27) = 0;
      *(undefined4 *)(puVar4 + 0x23) = 0;
      *(undefined4 *)(puVar4 + 0x2f) = 1;
      *(undefined4 *)(puVar4 + 0x2b) = 1;
    }
    *(undefined1 **)&this_00[1].field_0x44 = puVar4;
    if (puVar4 != (undefined1 *)0x0) {
      uVar13 = 0;
      cVar9 = '\x01';
      uVar8 = 0x10;
      iVar6 = 1;
      iVar5 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0xb4,0xaa,0x1b8,0x106);
      uVar8 = HoloTy::Init(*(HoloTy **)&this_00[1].field_0x44,2,0xb4,0xaa,iVar5,iVar6,uVar8,cVar9,
                           uVar13);
      if (uVar8 != 0) {
        iVar5 = *(int *)&this_00[1].field_0x44;
        *(undefined1 *)(iVar5 + 2) = 1;
        *(undefined4 *)(iVar5 + 0x17) = *(undefined4 *)(iVar5 + 0x13);
        uVar8 = *(uint *)(*(int *)&this_00[1].field_0x44 + 3);
        if (-1 < (int)uVar8) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar8);
        }
        HoloTy::NextFas(*(HoloTy **)&this_00[1].field_0x44);
        FUN_006b3af0(DAT_008075a8,this_00->field_1ABC);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
    local_119 = *(undefined4 *)&this_00->field_0x8;
    local_126 = 0x2336;
    local_115 = 2;
    local_111 = 0x6941;
    goto switchD_00597fa6_caseD_9;
  case 7:
    cVar9 = this_00->field_1A5F;
    local_c = 0x2563;
    if (cVar9 == '\x03') {
      FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0x2e1,0x14c,
                   *(int *)&this_00->field_0x1a5b + 0x140);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x22,0x72);
      *(undefined4 *)&this_00->field_0x1b48 = 0x77;
      *(int *)&this_00->field_0x1b44 = 0x2fe - *(int *)&this_00->field_0x1b4c;
      if (*(uint *)&this_00->field_0x1b2c != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)&this_00->field_0x1b70,*(uint *)&this_00->field_0x1b2c,0xfffffffe,
                   *(uint *)&this_00->field_0x1b44,*(uint *)&this_00->field_0x1b48);
      }
      if (*(uint *)&this_00->field_0x1b2c != 0xffffffff) {
        FUN_006b35d0(*(int **)&this_00->field_0x1b70,*(uint *)&this_00->field_0x1b2c);
      }
      *(int *)&this_00->field_0x1bd5 = 0x2fe - *(int *)&this_00->field_0x1bdd;
      *(int *)&this_00->field_0x1bd9 = 0x1b9 - *(int *)&this_00->field_0x1be1;
      if (*(uint *)&this_00->field_0x1bbd != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)&this_00->field_0x1c01,*(uint *)&this_00->field_0x1bbd,0xfffffffe,
                   *(uint *)&this_00->field_0x1bd5,*(uint *)&this_00->field_0x1bd9);
      }
      if (*(uint *)&this_00->field_0x1bbd != 0xffffffff) {
        FUN_006b35d0(*(int **)&this_00->field_0x1c01,*(uint *)&this_00->field_0x1bbd);
      }
      *(undefined4 *)&this_00->field_0x1c6a = 0x98;
      uVar8 = 0x2ee - (*(int *)&this_00->field_0x1c6e + -7) / 2;
      *(uint *)&this_00->field_0x1c66 = uVar8;
      if (*(uint *)&this_00->field_0x1c4e != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)&this_00->field_0x1c92,*(uint *)&this_00->field_0x1c4e,0xfffffffe,uVar8
                   ,*(uint *)&this_00->field_0x1c6a);
      }
      if (*(uint *)&this_00->field_0x1c4e != 0xffffffff) {
        FUN_006b35d0(*(int **)&this_00->field_0x1c92,*(uint *)&this_00->field_0x1c4e);
      }
      puVar4 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4[2] = 1;
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 3) = 0xffffffff;
        puVar4[1] = 2;
        *(undefined4 *)(puVar4 + 7) = 0;
        *(undefined4 *)(puVar4 + 0xb) = 0;
        *(undefined4 *)(puVar4 + 0xf) = 0;
        *(undefined4 *)(puVar4 + 0x1b) = 1;
        *(undefined4 *)(puVar4 + 0x13) = 1;
        *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
        *(undefined4 *)(puVar4 + 0x27) = 0;
        *(undefined4 *)(puVar4 + 0x23) = 0;
        *(undefined4 *)(puVar4 + 0x2f) = 1;
        *(undefined4 *)(puVar4 + 0x2b) = 1;
      }
      *(undefined1 **)&this_00[1].field_0x44 = puVar4;
      if (puVar4 != (undefined1 *)0x0) {
        uVar13 = 0;
        cVar9 = '\x01';
        uVar8 = 0x10;
        iVar6 = 1;
        iVar5 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x22,0x72,0x2e1,0x14c);
        uVar8 = HoloTy::Init(*(HoloTy **)&this_00[1].field_0x44,2,0x22,0x72,iVar5,iVar6,uVar8,cVar9,
                             uVar13);
        if (uVar8 != 0) {
          iVar5 = *(int *)&this_00[1].field_0x44;
          *(undefined1 *)(iVar5 + 2) = 1;
          *(undefined4 *)(iVar5 + 0x17) = *(undefined4 *)(iVar5 + 0x13);
          uVar8 = *(uint *)(*(int *)&this_00[1].field_0x44 + 3);
          if (-1 < (int)uVar8) {
            Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar8);
          }
          HoloTy::NextFas(*(HoloTy **)&this_00[1].field_0x44);
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,local_8);
        local_8 = 0xffffffff;
      }
      FUN_006b3af0(DAT_008075a8,this_00->field_1ABC);
      if (*(uint *)&this_00->field_0x1b2c != 0xffffffff) {
        FUN_006b3af0(*(int **)&this_00->field_0x1b70,*(uint *)&this_00->field_0x1b2c);
      }
      if (*(uint *)&this_00->field_0x1bbd != 0xffffffff) {
        FUN_006b3af0(*(int **)&this_00->field_0x1c01,*(uint *)&this_00->field_0x1bbd);
      }
      if (*(uint *)&this_00->field_0x1c4e != 0xffffffff) {
        FUN_006b3af0(*(int **)&this_00->field_0x1c92,*(uint *)&this_00->field_0x1c4e);
      }
    }
    else {
      if (cVar9 == '\t') {
        FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x401032,0x2e1,0x175,0);
        Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x22,0x5e);
        puVar4 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = (undefined1 *)0x0;
        }
        else {
          puVar4[2] = 1;
          *puVar4 = 0;
          *(undefined4 *)(puVar4 + 3) = 0xffffffff;
          puVar4[1] = 2;
          *(undefined4 *)(puVar4 + 7) = 0;
          *(undefined4 *)(puVar4 + 0xb) = 0;
          *(undefined4 *)(puVar4 + 0xf) = 0;
          *(undefined4 *)(puVar4 + 0x1b) = 1;
          *(undefined4 *)(puVar4 + 0x13) = 1;
          *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
          *(undefined4 *)(puVar4 + 0x27) = 0;
          *(undefined4 *)(puVar4 + 0x23) = 0;
          *(undefined4 *)(puVar4 + 0x2f) = 1;
          *(undefined4 *)(puVar4 + 0x2b) = 1;
        }
        *(undefined1 **)&this_00[1].field_0x44 = puVar4;
        if (puVar4 != (undefined1 *)0x0) {
          uVar13 = 0;
          cVar9 = '\x01';
          uVar8 = 0x10;
          iVar6 = 1;
          iVar5 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x22,0x5e,0x2e1,0x175);
          uVar8 = HoloTy::Init(*(HoloTy **)&this_00[1].field_0x44,2,0x22,0x5e,iVar5,iVar6,uVar8,
                               cVar9,uVar13);
          if (uVar8 != 0) {
            iVar5 = *(int *)&this_00[1].field_0x44;
            *(undefined1 *)(iVar5 + 2) = 1;
            *(undefined4 *)(iVar5 + 0x17) = *(undefined4 *)(iVar5 + 0x13);
            uVar8 = *(uint *)(*(int *)&this_00[1].field_0x44 + 3);
            if (-1 < (int)uVar8) {
              Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar8);
            }
            HoloTy::NextFas(*(HoloTy **)&this_00[1].field_0x44);
            FUN_006b3af0(DAT_008075a8,this_00->field_1ABC);
          }
        }
      }
      else {
        switch(cVar9) {
        case '\x02':
        case '\x04':
        case '\x05':
        case '\a':
          if (this_00->field_0x1abb != '\0') {
            cVar9 = '\0';
LAB_00598221:
            PrepBkgMess(this_00,cVar9);
          }
          break;
        case '\n':
          if (this_00->field_0x1abb != '\x01') {
            cVar9 = '\x01';
            goto LAB_00598221;
          }
        }
        switch(this_00->field_1A5F) {
        case 2:
          PaintLogLogin(this_00);
          local_c = 0x2553;
          break;
        case 4:
          PaintLogNew(this_00);
          DAT_0080735f = 0;
          local_c = 0x2552;
          break;
        case 5:
          PaintLogPsw(this_00);
          local_c = 0x2562;
          break;
        case 7:
          PaintGameNew(this_00);
          local_c = 0x255b;
          break;
        case 10:
          PaintInfo(this_00);
          local_c = 0x259c;
        }
        uVar8 = (-(uint)(this_00->field_0x1abb != '\0') & 0xffffffb4) + 0xaa;
        local_10 = (-(uint)(this_00->field_0x1abb != '\0') & 0x74) + 0x106;
        FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4035e9,0x1b8,local_10,local_c);
        Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0xb4,uVar8);
        puVar4 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = (undefined1 *)0x0;
        }
        else {
          puVar4[2] = 1;
          *puVar4 = 0;
          *(undefined4 *)(puVar4 + 3) = 0xffffffff;
          puVar4[1] = 2;
          *(undefined4 *)(puVar4 + 7) = 0;
          *(undefined4 *)(puVar4 + 0xb) = 0;
          *(undefined4 *)(puVar4 + 0xf) = 0;
          *(undefined4 *)(puVar4 + 0x1b) = 1;
          *(undefined4 *)(puVar4 + 0x13) = 1;
          *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
          *(undefined4 *)(puVar4 + 0x27) = 0;
          *(undefined4 *)(puVar4 + 0x23) = 0;
          *(undefined4 *)(puVar4 + 0x2f) = 1;
          *(undefined4 *)(puVar4 + 0x2b) = 1;
        }
        *(undefined1 **)&this_00[1].field_0x44 = puVar4;
        if (puVar4 != (undefined1 *)0x0) {
          uVar12 = 0;
          cVar9 = '\x01';
          uVar13 = 0x10;
          iVar6 = 1;
          iVar5 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0xb4,uVar8,0x1b8,local_10);
          uVar8 = HoloTy::Init(*(HoloTy **)&this_00[1].field_0x44,2,0xb4,uVar8,iVar5,iVar6,uVar13,
                               cVar9,uVar12);
          if (uVar8 != 0) {
            iVar5 = *(int *)&this_00[1].field_0x44;
            *(undefined1 *)(iVar5 + 2) = 1;
            *(undefined4 *)(iVar5 + 0x17) = *(undefined4 *)(iVar5 + 0x13);
            uVar8 = *(uint *)(*(int *)&this_00[1].field_0x44 + 3);
            if (-1 < (int)uVar8) {
              Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar8);
            }
            HoloTy::NextFas(*(HoloTy **)&this_00[1].field_0x44);
            FUN_006b3af0(DAT_008075a8,this_00->field_1ABC);
          }
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,local_8);
        local_8 = 0xffffffff;
      }
    }
    switch(this_00->field_1A5F) {
    case 2:
      local_203 = *(undefined4 *)&this_00->field_0x8;
      local_122 = this_00->field_0x1ed2;
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
    case 3:
      local_203 = *(undefined4 *)&this_00->field_0x8;
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
    case 4:
      local_1dc = *(undefined4 *)&this_00->field_0x8;
      local_1e9 = 0x2553;
      local_1d4 = 0x6953;
      goto LAB_00599280;
    case 5:
      local_1dc = *(undefined4 *)&this_00->field_0x8;
      local_1e9 = 0x2561;
      local_1d4 = 0x694b;
      goto LAB_00599280;
    case 7:
      goto switchD_005987a8_caseD_7;
    case 9:
    case 10:
      local_140 = *(undefined4 *)&this_00->field_0x8;
      goto LAB_00599290;
    }
    goto switchD_00597fa6_caseD_9;
  case 8:
    *(undefined4 *)&this_00->field_0x1b48 = 99;
    *(int *)&this_00->field_0x1b44 = 0x1cd - *(int *)&this_00->field_0x1b4c;
    if (*(uint *)&this_00->field_0x1b2c != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)&this_00->field_0x1b70,*(uint *)&this_00->field_0x1b2c,0xfffffffe,
                 *(uint *)&this_00->field_0x1b44,*(uint *)&this_00->field_0x1b48);
    }
    if (*(uint *)&this_00->field_0x1b2c != 0xffffffff) {
      FUN_006b35d0(*(int **)&this_00->field_0x1b70,*(uint *)&this_00->field_0x1b2c);
    }
    *(int *)&this_00->field_0x1bd5 = 0x1cd - *(int *)&this_00->field_0x1bdd;
    *(int *)&this_00->field_0x1bd9 = 0x1b8 - *(int *)&this_00->field_0x1be1;
    if (*(uint *)&this_00->field_0x1bbd != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)&this_00->field_0x1c01,*(uint *)&this_00->field_0x1bbd,0xfffffffe,
                 *(uint *)&this_00->field_0x1bd5,*(uint *)&this_00->field_0x1bd9);
    }
    if (*(uint *)&this_00->field_0x1bbd != 0xffffffff) {
      FUN_006b35d0(*(int **)&this_00->field_0x1c01,*(uint *)&this_00->field_0x1bbd);
    }
    *(undefined4 *)&this_00->field_0x1c6a = 0x84;
    uVar8 = 0x1bd - (*(int *)&this_00->field_0x1c6e + -7) / 2;
    *(uint *)&this_00->field_0x1c66 = uVar8;
    if (*(uint *)&this_00->field_0x1c4e != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)&this_00->field_0x1c92,*(uint *)&this_00->field_0x1c4e,0xfffffffe,uVar8,
                 *(uint *)&this_00->field_0x1c6a);
    }
    if (*(uint *)&this_00->field_0x1c4e != 0xffffffff) {
      FUN_006b35d0(*(int **)&this_00->field_0x1c92,*(uint *)&this_00->field_0x1c4e);
    }
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4023b0,0x1bf,0x175,
                 *(int *)&this_00->field_0x1a5b + 0x140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x13,0x5e);
    puVar4 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puVar4[2] = 1;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 3) = 0xffffffff;
      puVar4[1] = 2;
      *(undefined4 *)(puVar4 + 7) = 0;
      *(undefined4 *)(puVar4 + 0xb) = 0;
      *(undefined4 *)(puVar4 + 0xf) = 0;
      *(undefined4 *)(puVar4 + 0x1b) = 1;
      *(undefined4 *)(puVar4 + 0x13) = 1;
      *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar4 + 0x27) = 0;
      *(undefined4 *)(puVar4 + 0x23) = 0;
      *(undefined4 *)(puVar4 + 0x2f) = 1;
      *(undefined4 *)(puVar4 + 0x2b) = 1;
    }
    *(undefined1 **)&this_00[1].field_0x48 = puVar4;
    if (puVar4 != (undefined1 *)0x0) {
      uVar13 = 0;
      cVar9 = '\x01';
      uVar8 = 0x10;
      iVar6 = 1;
      iVar5 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x13,0x5e,0x1bf,0x175);
      uVar8 = HoloTy::Init(*(HoloTy **)&this_00[1].field_0x48,4,0x13,0x5e,iVar5,iVar6,uVar8,cVar9,
                           uVar13);
      if (uVar8 != 0) {
        iVar5 = *(int *)&this_00[1].field_0x48;
        *(undefined1 *)(iVar5 + 2) = 1;
        *(undefined4 *)(iVar5 + 0x17) = *(undefined4 *)(iVar5 + 0x13);
        uVar8 = *(uint *)(*(int *)&this_00[1].field_0x48 + 3);
        if (-1 < (int)uVar8) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar8);
        }
        HoloTy::NextFas(*(HoloTy **)&this_00[1].field_0x48);
        if (*(uint *)&this_00->field_0x1b2c != 0xffffffff) {
          FUN_006b3af0(*(int **)&this_00->field_0x1b70,*(uint *)&this_00->field_0x1b2c);
        }
        if (*(uint *)&this_00->field_0x1bbd != 0xffffffff) {
          FUN_006b3af0(*(int **)&this_00->field_0x1c01,*(uint *)&this_00->field_0x1bbd);
        }
        if (*(uint *)&this_00->field_0x1c4e != 0xffffffff) {
          FUN_006b3af0(*(int **)&this_00->field_0x1c92,*(uint *)&this_00->field_0x1c4e);
        }
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
    uVar8 = 0x308 - *(int *)&this_00->field_0x1cff;
    *(undefined4 *)&this_00->field_0x1cfb = 99;
    *(uint *)&this_00->field_0x1cf7 = uVar8;
    if (*(uint *)&this_00->field_0x1cdf != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)&this_00->field_0x1d23,*(uint *)&this_00->field_0x1cdf,0xfffffffe,uVar8,
                 *(uint *)&this_00->field_0x1cfb);
    }
    if (*(uint *)&this_00->field_0x1cdf != 0xffffffff) {
      FUN_006b35d0(*(int **)&this_00->field_0x1d23,*(uint *)&this_00->field_0x1cdf);
    }
    *(int *)&this_00->field_0x1d88 = 0x308 - *(int *)&this_00->field_0x1d90;
    *(int *)&this_00->field_0x1d8c = 0x16f - *(int *)&this_00->field_0x1d94;
    if (*(uint *)&this_00->field_0x1d70 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)&this_00->field_0x1db4,*(uint *)&this_00->field_0x1d70,0xfffffffe,
                 *(uint *)&this_00->field_0x1d88,*(uint *)&this_00->field_0x1d8c);
    }
    if (*(uint *)&this_00->field_0x1d70 != 0xffffffff) {
      FUN_006b35d0(*(int **)&this_00->field_0x1db4,*(uint *)&this_00->field_0x1d70);
    }
    *(undefined4 *)&this_00->field_0x1e1d = 0x84;
    uVar8 = 0x2f8 - (*(int *)&this_00->field_0x1e21 + -7) / 2;
    *(uint *)&this_00->field_0x1e19 = uVar8;
    if (*(uint *)&this_00->field_0x1e01 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)&this_00->field_0x1e45,*(uint *)&this_00->field_0x1e01,0xfffffffe,uVar8,
                 *(uint *)&this_00->field_0x1e1d);
    }
    if (*(uint *)&this_00->field_0x1e01 != 0xffffffff) {
      FUN_006b35d0(*(int **)&this_00->field_0x1e45,*(uint *)&this_00->field_0x1e01);
    }
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x40303f,0x124,0x175,
                 *(int *)&this_00->field_0x1a5b + 0x140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x1e9,0x5e);
    puVar4 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puVar4[2] = 1;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 3) = 0xffffffff;
      puVar4[1] = 2;
      *(undefined4 *)(puVar4 + 7) = 0;
      *(undefined4 *)(puVar4 + 0xb) = 0;
      *(undefined4 *)(puVar4 + 0xf) = 0;
      *(undefined4 *)(puVar4 + 0x1b) = 1;
      *(undefined4 *)(puVar4 + 0x13) = 1;
      *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar4 + 0x27) = 0;
      *(undefined4 *)(puVar4 + 0x23) = 0;
      *(undefined4 *)(puVar4 + 0x2f) = 1;
      *(undefined4 *)(puVar4 + 0x2b) = 1;
    }
    *(undefined1 **)&this_00[1].field_0x4c = puVar4;
    if (puVar4 != (undefined1 *)0x0) {
      uVar13 = 0;
      cVar9 = '\x01';
      uVar8 = 0x10;
      iVar6 = 1;
      iVar5 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x1e9,0x5e,0x124,0x175);
      uVar8 = HoloTy::Init(*(HoloTy **)&this_00[1].field_0x4c,2,0x1e9,0x5e,iVar5,iVar6,uVar8,cVar9,
                           uVar13);
      if (uVar8 != 0) {
        iVar5 = *(int *)&this_00[1].field_0x4c;
        *(undefined1 *)(iVar5 + 2) = 1;
        *(undefined4 *)(iVar5 + 0x17) = *(undefined4 *)(iVar5 + 0x13);
        uVar8 = *(uint *)(*(int *)&this_00[1].field_0x4c + 3);
        if (-1 < (int)uVar8) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar8);
        }
        HoloTy::NextFas(*(HoloTy **)&this_00[1].field_0x4c);
        if (*(uint *)&this_00->field_0x1cdf != 0xffffffff) {
          FUN_006b3af0(*(int **)&this_00->field_0x1d23,*(uint *)&this_00->field_0x1cdf);
        }
        if (*(uint *)&this_00->field_0x1d70 != 0xffffffff) {
          FUN_006b3af0(*(int **)&this_00->field_0x1db4,*(uint *)&this_00->field_0x1d70);
        }
        if (*(uint *)&this_00->field_0x1e01 != 0xffffffff) {
          FUN_006b3af0(*(int **)&this_00->field_0x1e45,*(uint *)&this_00->field_0x1e01);
        }
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
    local_203 = *(undefined4 *)&this_00->field_0x8;
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
  case 10:
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403981,0x174,0x175,
                 *(int *)&this_00->field_0x1a5b + 0x140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x199,0x5e);
    puVar4 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puVar4[2] = 1;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 3) = 0xffffffff;
      puVar4[1] = 2;
      *(undefined4 *)(puVar4 + 7) = 0;
      *(undefined4 *)(puVar4 + 0xb) = 0;
      *(undefined4 *)(puVar4 + 0xf) = 0;
      *(undefined4 *)(puVar4 + 0x1b) = 1;
      *(undefined4 *)(puVar4 + 0x13) = 1;
      *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar4 + 0x27) = 0;
      *(undefined4 *)(puVar4 + 0x23) = 0;
      *(undefined4 *)(puVar4 + 0x2f) = 1;
      *(undefined4 *)(puVar4 + 0x2b) = 1;
    }
    *(undefined1 **)&this_00[1].field_0x50 = puVar4;
    if (puVar4 != (undefined1 *)0x0) {
      uVar13 = 0;
      cVar9 = '\x01';
      uVar8 = 0x10;
      iVar6 = 1;
      iVar5 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x199,0x5e,0x174,0x175);
      uVar8 = HoloTy::Init(*(HoloTy **)&this_00[1].field_0x50,2,0x199,0x5e,iVar5,iVar6,uVar8,cVar9,
                           uVar13);
      if (uVar8 != 0) {
        iVar5 = *(int *)&this_00[1].field_0x50;
        *(undefined1 *)(iVar5 + 2) = 1;
        *(undefined4 *)(iVar5 + 0x17) = *(undefined4 *)(iVar5 + 0x13);
        uVar8 = *(uint *)(*(int *)&this_00[1].field_0x50 + 3);
        if (-1 < (int)uVar8) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar8);
        }
        HoloTy::NextFas(*(HoloTy **)&this_00[1].field_0x50);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
    uVar8 = 0x182 - *(int *)&this_00->field_0x1cff;
    *(undefined4 *)&this_00->field_0x1cfb = 99;
    *(uint *)&this_00->field_0x1cf7 = uVar8;
    if (*(uint *)&this_00->field_0x1cdf != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)&this_00->field_0x1d23,*(uint *)&this_00->field_0x1cdf,0xfffffffe,uVar8,
                 *(uint *)&this_00->field_0x1cfb);
    }
    if (*(uint *)&this_00->field_0x1cdf != 0xffffffff) {
      FUN_006b35d0(*(int **)&this_00->field_0x1d23,*(uint *)&this_00->field_0x1cdf);
    }
    *(int *)&this_00->field_0x1d88 = 0x182 - *(int *)&this_00->field_0x1d90;
    *(int *)&this_00->field_0x1d8c = 0x1ce - *(int *)&this_00->field_0x1d94;
    if (*(uint *)&this_00->field_0x1d70 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)&this_00->field_0x1db4,*(uint *)&this_00->field_0x1d70,0xfffffffe,
                 *(uint *)&this_00->field_0x1d88,*(uint *)&this_00->field_0x1d8c);
    }
    if (*(uint *)&this_00->field_0x1d70 != 0xffffffff) {
      FUN_006b35d0(*(int **)&this_00->field_0x1db4,*(uint *)&this_00->field_0x1d70);
    }
    *(undefined4 *)&this_00->field_0x1e1d = 0x84;
    uVar8 = 0x172 - (*(int *)&this_00->field_0x1e21 + -7) / 2;
    *(uint *)&this_00->field_0x1e19 = uVar8;
    if (*(uint *)&this_00->field_0x1e01 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)&this_00->field_0x1e45,*(uint *)&this_00->field_0x1e01,0xfffffffe,uVar8,
                 *(uint *)&this_00->field_0x1e1d);
    }
    if (*(uint *)&this_00->field_0x1e01 != 0xffffffff) {
      FUN_006b35d0(*(int **)&this_00->field_0x1e45,*(uint *)&this_00->field_0x1e01);
    }
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0x174,0x175,
                 *(int *)&this_00->field_0x1a5b + 0x140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x13,0x5e);
    puVar4 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puVar4[2] = 1;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 3) = 0xffffffff;
      puVar4[1] = 2;
      *(undefined4 *)(puVar4 + 7) = 0;
      *(undefined4 *)(puVar4 + 0xb) = 0;
      *(undefined4 *)(puVar4 + 0xf) = 0;
      *(undefined4 *)(puVar4 + 0x1b) = 1;
      *(undefined4 *)(puVar4 + 0x13) = 1;
      *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar4 + 0x27) = 0;
      *(undefined4 *)(puVar4 + 0x23) = 0;
      *(undefined4 *)(puVar4 + 0x2f) = 1;
      *(undefined4 *)(puVar4 + 0x2b) = 1;
    }
    *(undefined1 **)&this_00[1].field_0x4c = puVar4;
    if (puVar4 != (undefined1 *)0x0) {
      uVar13 = 0;
      cVar9 = '\x01';
      uVar8 = 0x10;
      iVar6 = 1;
      iVar5 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x13,0x5e,0x174,0x175);
      uVar8 = HoloTy::Init(*(HoloTy **)&this_00[1].field_0x4c,4,0x13,0x5e,iVar5,iVar6,uVar8,cVar9,
                           uVar13);
      if (uVar8 != 0) {
        iVar5 = *(int *)&this_00[1].field_0x4c;
        *(undefined1 *)(iVar5 + 2) = 1;
        *(undefined4 *)(iVar5 + 0x17) = *(undefined4 *)(iVar5 + 0x13);
        uVar8 = *(uint *)(*(int *)&this_00[1].field_0x4c + 3);
        if (-1 < (int)uVar8) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar8);
        }
        HoloTy::NextFas(*(HoloTy **)&this_00[1].field_0x4c);
        if (*(uint *)&this_00->field_0x1cdf != 0xffffffff) {
          FUN_006b3af0(*(int **)&this_00->field_0x1d23,*(uint *)&this_00->field_0x1cdf);
        }
        if (*(uint *)&this_00->field_0x1d70 != 0xffffffff) {
          FUN_006b3af0(*(int **)&this_00->field_0x1db4,*(uint *)&this_00->field_0x1d70);
        }
        if (*(uint *)&this_00->field_0x1e01 != 0xffffffff) {
          FUN_006b3af0(*(int **)&this_00->field_0x1e45,*(uint *)&this_00->field_0x1e01);
        }
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
switchD_005987a8_caseD_7:
    local_1dc = *(undefined4 *)&this_00->field_0x8;
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
  iVar5 = *(int *)&this_00->field_0x1a5b;
  if (*(int *)(iVar5 + 0x2e6) != 0) {
    puVar2 = local_270;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
    }
    *(undefined2 *)puVar2 = 0xffff;
    MMsgTy::SetPanel(*(MMsgTy **)(iVar5 + 0x2e6),0,(int)&local_210,0,0);
    MMsgTy::StatePanel(*(MMsgTy **)(*(int *)&this_00->field_0x1a5b + 0x2e6),(int)local_270);
  }
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      Library::DKW::DDX::FUN_006b8a60(*(byte **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c),0xfffffffe,
                 *(uint *)(DAT_00802a30 + 0x34),*(uint *)(DAT_00802a30 + 0x38));
      g_currentExceptionFrame = local_254.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_254.previous;
  return;
}

