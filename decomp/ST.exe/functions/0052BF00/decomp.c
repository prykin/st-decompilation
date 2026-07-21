
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\money.cpp
   MoneyTy::GetMessage */

undefined4 __thiscall MoneyTy::GetMessage(MoneyTy *this,AnonShape_0052BF00_2F187CCA *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  AnonShape_0052B990_04D99BFA *this_00;
  ushort uVar5;
  int iVar6;
  undefined4 *puVar7;
  LPSTR text;
  ushort *puVar8;
  undefined4 uVar9;
  int iVar10;
  ccFntTy *this_01;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *this_02;
  char cVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar12;
  byte bVar13;
  char *text_00;
  InternalExceptionFrame local_bc;
  AnonShape_0052B760_30F4E0D5 local_78;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48 [2];
  uint local_40 [2];
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  uint local_18 [2];
  AnonShape_0052B990_04D99BFA *local_10;
  uint local_c;
  char local_5;
  
  local_bc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_bc;
  local_10 = (AnonShape_0052B990_04D99BFA *)this;
  iVar6 = Library::MSVCRT::__setjmp3(local_bc.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar6 == 0) {
    switch(param_1->field_0010) {
    case 0:
      iVar6 = FUN_006e4d40(&DAT_00807620,*(int *)&local_10->field_0xc);
      if (iVar6 == 1) {
        uVar12 = *(uint *)&this_00->field_0x86;
        uVar2 = *(uint *)&this_00->field_0x8a;
        if (uVar12 != uVar2) {
          if (uVar12 < uVar2) {
            if (uVar2 - uVar12 < 0x65) {
              if (uVar2 - uVar12 < 0xb) {
                iVar6 = uVar12 + 1;
              }
              else {
                iVar6 = uVar12 + 10;
              }
            }
            else {
              iVar6 = uVar12 + 100;
            }
          }
          else if (uVar12 - uVar2 < 0x65) {
            if (uVar12 - uVar2 < 0xb) {
              iVar6 = uVar12 - 1;
            }
            else {
              iVar6 = uVar12 - 10;
            }
          }
          else {
            iVar6 = uVar12 - 100;
          }
          *(int *)&this_00->field_0x86 = iVar6;
          if (DAT_0080874e == '\x03') {
            uVar9 = *(undefined4 *)&this_00->field_0x86;
            text_00 = &DAT_007c28fc;
          }
          else {
            uVar9 = *(undefined4 *)&this_00->field_0x86;
            text_00 = &DAT_007c6f44;
          }
          wsprintfA((LPSTR)local_18,text_00,uVar9);
          iVar6 = *(int *)&this_00->field_0x72;
          local_c = *(uint *)(iVar6 + 0x14);
          if (local_c == 0) {
            local_c = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc
                      ) * *(int *)(iVar6 + 8);
          }
          uVar1 = this_00->field_0x69;
          puVar7 = (undefined4 *)FUN_006b4fa0(iVar6);
          for (uVar12 = local_c >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar7 = puVar7 + 1;
          }
          for (uVar12 = local_c & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined1 *)puVar7 = uVar1;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          iVar6 = *(int *)&this_00->field_0x72;
          ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x6a,iVar6,0,0,0,*(int *)(iVar6 + 4),
                           *(int *)(iVar6 + 8));
          ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x6a,local_18,-1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5);
          thunk_FUN_0052b8a0((int)this_00);
        }
        uVar12 = *(uint *)&this_00->field_0x8e;
        uVar2 = *(uint *)&this_00->field_0x92;
        if (uVar12 != uVar2) {
          if (uVar12 < uVar2) {
            if (uVar2 - uVar12 < 0x65) {
              if (uVar2 - uVar12 < 0xb) {
                iVar6 = uVar12 + 1;
              }
              else {
                iVar6 = uVar12 + 10;
              }
            }
            else {
              iVar6 = uVar12 + 100;
            }
          }
          else if (uVar12 - uVar2 < 0x65) {
            if (uVar12 - uVar2 < 0xb) {
              iVar6 = uVar12 - 1;
            }
            else {
              iVar6 = uVar12 - 10;
            }
          }
          else {
            iVar6 = uVar12 - 100;
          }
          *(int *)&this_00->field_0x8e = iVar6;
          wsprintfA((LPSTR)local_40,&DAT_007c28fc,iVar6);
          iVar6 = *(int *)&this_00->field_0x76;
          local_c = *(uint *)(iVar6 + 0x14);
          if (local_c == 0) {
            local_c = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc
                      ) * *(int *)(iVar6 + 8);
          }
          uVar1 = this_00->field_0x69;
          puVar7 = (undefined4 *)FUN_006b4fa0(iVar6);
          for (uVar12 = local_c >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar7 = puVar7 + 1;
          }
          for (uVar12 = local_c & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined1 *)puVar7 = uVar1;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          iVar6 = *(int *)&this_00->field_0x76;
          ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x6a,iVar6,0,0,0,*(int *)(iVar6 + 4),
                           *(int *)(iVar6 + 8));
          ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x6a,local_40,-1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 4);
          thunk_FUN_0052b8f0((int)this_00);
        }
        uVar12 = *(uint *)&this_00->field_0x96;
        uVar2 = *(uint *)&this_00->field_0x9a;
        if (uVar12 != uVar2) {
          if (uVar12 < uVar2) {
            if (uVar2 - uVar12 < 0x65) {
              if (uVar2 - uVar12 < 0xb) {
                iVar6 = uVar12 + 1;
              }
              else {
                iVar6 = uVar12 + 10;
              }
            }
            else {
              iVar6 = uVar12 + 100;
            }
          }
          else if (uVar12 - uVar2 < 0x65) {
            if (uVar12 - uVar2 < 0xb) {
              iVar6 = uVar12 - 1;
            }
            else {
              iVar6 = uVar12 - 10;
            }
          }
          else {
            iVar6 = uVar12 - 100;
          }
          *(int *)&this_00->field_0x96 = iVar6;
          wsprintfA((LPSTR)local_48,&DAT_007c28fc,iVar6);
          iVar6 = *(int *)&this_00->field_0x7a;
          local_c = *(uint *)(iVar6 + 0x14);
          if (local_c == 0) {
            local_c = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc
                      ) * *(int *)(iVar6 + 8);
          }
          uVar1 = this_00->field_0x69;
          puVar7 = (undefined4 *)FUN_006b4fa0(iVar6);
          for (uVar12 = local_c >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar7 = puVar7 + 1;
          }
          for (uVar12 = local_c & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined1 *)puVar7 = uVar1;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          iVar6 = *(int *)&this_00->field_0x7a;
          ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x6a,iVar6,0,0,0,*(int *)(iVar6 + 4),
                           *(int *)(iVar6 + 8));
          ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x6a,local_48,-1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
          thunk_FUN_0052b940((int)this_00);
        }
        if ((this_00->field_00A2 != this_00->field_0xa3) ||
           (this_00->field_00A4 != this_00->field_0xa5)) {
          this_00->field_00A2 = this_00->field_0xa3;
          this_00->field_00A4 = this_00->field_0xa5;
          thunk_FUN_0052b990(this_00);
        }
      }
      break;
    case 2:
      iVar6 = (DAT_0080874e != '\x03') + 0xb;
      *(int *)&local_10->field_0x2c = iVar6;
      *(int *)&local_10->field_0x24 = iVar6;
      *(int *)&local_10->field_0x1c = iVar6;
      local_10->field_0058 = (-(uint)(DAT_0080874e != '\x03') & 0xffffffe5) + 0x50;
      *(uint *)&local_10->field_0x40 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffff9) + 0x24;
      if (DAT_0080874e == '\x03') {
        iVar6 = g_nWidth_00806730 + -0x107;
      }
      else {
        iVar6 = g_nWidth_00806730 + -0xd5;
      }
      *(int *)&local_10->field_0x18 = iVar6;
      if (DAT_0080874e == '\x03') {
        iVar6 = g_nWidth_00806730 + -0x94;
      }
      else {
        iVar6 = g_nWidth_00806730 + -0x9e;
      }
      *(int *)&local_10->field_0x20 = iVar6;
      if (DAT_0080874e == '\x03') {
        iVar6 = g_nWidth_00806730 + -0x44;
      }
      else {
        iVar6 = g_nWidth_00806730 + -0x5d;
      }
      *(int *)&local_10->field_0x28 = iVar6;
      if (DAT_0080874e == '\x03') {
        iVar6 = g_nWidth_00806730 + -0x160;
      }
      else {
        iVar6 = g_nWidth_00806730 + -0x154;
      }
      local_10->field_0030 = iVar6;
      *(int *)&local_10->field_0x38 = g_nWidth_00806730 + -99;
      *(int *)&local_10->field_0x3c = DAT_00806734 + -0x16;
      local_10->field_0x69 = ((DAT_0080874e == '\x03') - 1U & 0xc3) + 0x3d;
      puVar7 = ccFntTy::operator(DAT_00806790,0x19d,(cMf32 *)DAT_00806790,s_MONEY_FONT_007c211c,0);
      *(undefined4 **)&this_00->field_0x6a = puVar7;
      puVar7[0x16] = 1;
      puVar7[0x17] = 0;
      puVar7 = ccFntTy::operator(this_01,0x19d,(cMf32 *)DAT_00806790,s_TIME_FONT_007c212c,0);
      *(undefined4 **)&this_00->field_0x6e = puVar7;
      puVar7[0x16] = 1;
      puVar7[0x17] = 0;
      puVar7 = (undefined4 *)0x0;
      iVar10 = 0;
      iVar6 = 1;
      bVar13 = 0;
      uVar12 = 0xffffffff;
      text = thunk_FUN_00571240(s_IND_PNT_007c2078,0);
      puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806794,CASE_B,text,uVar12,bVar13,iVar6,iVar10,puVar7);
      this_00->field_0082 = (int)puVar8;
      puVar7 = (undefined4 *)(DAT_0080679c + 0x28);
      iVar6 = 1;
      uVar12 = FUN_006b4fe0(DAT_0080679c);
      iVar6 = FUN_006b50c0(*(int *)&this_00->field_0x40,*(int *)&this_00->field_0x44,
                           (uint)*(ushort *)(DAT_0080679c + 0xe),uVar12,puVar7,iVar6);
      *(int *)&this_00->field_0x72 = iVar6;
      local_c = *(uint *)(iVar6 + 0x14);
      if (local_c == 0) {
        local_c = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(iVar6 + 8);
      }
      uVar1 = this_00->field_0x69;
      puVar7 = (undefined4 *)FUN_006b4fa0(iVar6);
      iVar6 = 1;
      for (uVar12 = local_c >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar7 = puVar7 + 1;
      }
      for (uVar12 = local_c & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar7 = uVar1;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      puVar7 = (undefined4 *)(DAT_0080679c + 0x28);
      uVar12 = FUN_006b4fe0(DAT_0080679c);
      iVar6 = FUN_006b50c0(*(int *)&this_00->field_0x48,*(int *)&this_00->field_0x4c,
                           (uint)*(ushort *)(DAT_0080679c + 0xe),uVar12,puVar7,iVar6);
      *(int *)&this_00->field_0x76 = iVar6;
      local_c = *(uint *)(iVar6 + 0x14);
      if (local_c == 0) {
        local_c = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(iVar6 + 8);
      }
      uVar1 = this_00->field_0x69;
      puVar7 = (undefined4 *)FUN_006b4fa0(iVar6);
      iVar6 = 1;
      for (uVar12 = local_c >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar7 = puVar7 + 1;
      }
      for (uVar12 = local_c & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar7 = uVar1;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      puVar7 = (undefined4 *)(DAT_0080679c + 0x28);
      uVar12 = FUN_006b4fe0(DAT_0080679c);
      iVar6 = FUN_006b50c0(*(int *)&this_00->field_0x50,*(int *)&this_00->field_0x54,
                           (uint)*(ushort *)(DAT_0080679c + 0xe),uVar12,puVar7,iVar6);
      *(int *)&this_00->field_0x7a = iVar6;
      local_c = *(uint *)(iVar6 + 0x14);
      if (local_c == 0) {
        local_c = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(iVar6 + 8);
      }
      uVar1 = this_00->field_0x69;
      puVar7 = (undefined4 *)FUN_006b4fa0(iVar6);
      iVar6 = 1;
      for (uVar12 = local_c >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar7 = puVar7 + 1;
      }
      for (uVar12 = local_c & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar7 = uVar1;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      puVar7 = (undefined4 *)(DAT_0080679c + 0x28);
      uVar12 = FUN_006b4fe0(DAT_0080679c);
      iVar6 = FUN_006b50c0(*(int *)&this_00->field_0x60,*(int *)&this_00->field_0x64,
                           (uint)*(ushort *)(DAT_0080679c + 0xe),uVar12,puVar7,iVar6);
      *(int *)&this_00->field_0x7e = iVar6;
      local_c = *(uint *)(iVar6 + 0x14);
      if (local_c == 0) {
        local_c = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(iVar6 + 8);
      }
      uVar1 = this_00->field_0x69;
      puVar7 = (undefined4 *)FUN_006b4fa0(iVar6);
      for (uVar12 = local_c >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar7 = puVar7 + 1;
      }
      for (uVar12 = local_c & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar7 = uVar1;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      puVar7 = local_38;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_24 = *(undefined4 *)&this_00->field_0x8;
      local_28 = 0x13;
      FUN_006e6000(this_00,3,1,local_38);
      *(undefined4 *)&this_00->field_0x86 = 1;
      *(undefined4 *)&this_00->field_0x8e = 1;
      *(undefined4 *)&this_00->field_0x96 = 1;
      this_00->field_0xa3 = 0;
      if (((g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) && (DAT_0080874d < 8)) &&
         ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
          ((byte)(&DAT_008087e9)[(uint)DAT_0080874d * 0x51] < 8)))) {
        uVar5 = thunk_FUN_0044e1f0((uint)DAT_0080874d);
        thunk_FUN_0052bda0(this_00,DAT_0080874d,(uint)uVar5);
      }
      DAT_008016d4 = this_00;
      if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
        thunk_FUN_004d8b70(DAT_0080874d);
      }
      break;
    case 3:
      DAT_008016d4 = (AnonShape_0052B990_04D99BFA *)0x0;
      uVar9 = *(undefined4 *)&local_10->field_0x8;
      puVar7 = local_38;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_28 = 0x14;
      local_24 = uVar9;
      FUN_006e6000(this_00,3,1,local_38);
      if (*(int *)&this_00->field_0x72 != 0) {
        FreeAndNull((void **)&this_00->field_0x72);
      }
      if (*(int *)&this_00->field_0x76 != 0) {
        FreeAndNull((void **)&this_00->field_0x76);
      }
      if (*(int *)&this_00->field_0x7a != 0) {
        FreeAndNull((void **)&this_00->field_0x7a);
      }
      this_02 = (ccFntTy *)0x0;
      if (*(int *)&this_00->field_0x7e != 0) {
        FreeAndNull((void **)&this_00->field_0x7e);
        this_02 = extraout_ECX;
      }
      if (this_00->field_0082 != 0) {
        this_00->field_0082 = 0;
      }
      if (*(uint **)&this_00->field_0x6a != (uint *)0x0) {
        ccFntTy::operator(this_02,*(uint **)&this_00->field_0x6a);
        *(undefined4 *)&this_00->field_0x6a = 0;
        this_02 = extraout_ECX_00;
      }
      if (*(uint **)&this_00->field_0x6e != (uint *)0x0) {
        ccFntTy::operator(this_02,*(uint **)&this_00->field_0x6e);
        *(undefined4 *)&this_00->field_0x6e = 0;
      }
      break;
    case 5:
      thunk_FUN_0052b8a0((int)local_10);
      thunk_FUN_0052b8f0((int)this_00);
      thunk_FUN_0052b940((int)this_00);
      thunk_FUN_0052b990(this_00);
      thunk_FUN_0052bbe0((int)this_00);
      break;
    case 0x60:
      uVar12 = (uint)param_1->field_0018;
      local_c = (uint)param_1->field_001A;
      local_5 = '\0';
      if (DAT_0080874e != '\x03') {
        if (((((int)uVar12 < *(int *)&local_10->field_0x18) ||
             (*(int *)&local_10->field_0x40 + *(int *)&local_10->field_0x18 <= (int)uVar12)) ||
            ((int)local_c < *(int *)&local_10->field_0x1c)) ||
           (*(int *)&local_10->field_0x44 + *(int *)&local_10->field_0x1c <= (int)local_c)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          local_5 = '\x01';
        }
      }
      if ((((int)uVar12 < *(int *)&local_10->field_0x20) ||
          (*(int *)&local_10->field_0x48 + *(int *)&local_10->field_0x20 <= (int)uVar12)) ||
         (((int)local_c < *(int *)&local_10->field_0x24 ||
          (*(int *)&local_10->field_0x4c + *(int *)&local_10->field_0x24 <= (int)local_c)))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_5 = '\x02';
      }
      if ((((int)uVar12 < *(int *)&local_10->field_0x28) ||
          (*(int *)&local_10->field_0x50 + *(int *)&local_10->field_0x28 <= (int)uVar12)) ||
         (((int)local_c < *(int *)&local_10->field_0x2c ||
          (*(int *)&local_10->field_0x54 + *(int *)&local_10->field_0x2c <= (int)local_c)))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_5 = '\x03';
      }
      if (((((int)uVar12 < local_10->field_0030) ||
           (local_10->field_0058 + local_10->field_0030 <= (int)uVar12)) ||
          ((int)local_c < local_10->field_0034)) ||
         (local_10->field_005C + local_10->field_0034 <= (int)local_c)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_5 = '\x04';
      }
      local_58 = *(int *)&local_10->field_0x38 + -0x1e;
      local_50 = *(int *)&local_10->field_0x60 + 0x23;
      local_54 = *(int *)&local_10->field_0x3c + -3;
      local_4c = *(int *)&local_10->field_0x64 + 6;
      if ((((int)uVar12 < local_58) || (local_50 + local_58 <= (int)uVar12)) ||
         (((int)local_c < local_54 || (local_4c + local_54 <= (int)local_c)))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      cVar11 = '\x05';
      if (!bVar4) {
        cVar11 = local_5;
      }
      if (local_10->field_0x68 != cVar11) {
        if (local_10->field_0x68 != '\0') {
          local_78._16_4_ = 0x4202;
          thunk_FUN_0052b760(local_10,&local_78);
          (*(code *)**(undefined4 **)PTR_00802a30)(&local_78);
        }
        this_00->field_0x68 = cVar11;
        if (cVar11 != '\0') {
          local_78._16_4_ = 0x4201;
          thunk_FUN_0052b760(this_00,&local_78);
          (*(code *)**(undefined4 **)PTR_00802a30)(&local_78);
        }
      }
    }
    g_currentExceptionFrame = local_bc.previous;
    uVar9 = FUN_006e5fd0();
    return uVar9;
  }
  g_currentExceptionFrame = local_bc.previous;
  iVar10 = ReportDebugMessage(s_E____titans_Andrey_money_cpp_007c6f48,0x12a,0,iVar6,&DAT_007a4ccc,
                              s_MoneyTy__GetMessage_007c6f6c);
  if (iVar10 != 0) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return uVar9;
  }
  RaiseInternalException(iVar6,0,s_E____titans_Andrey_money_cpp_007c6f48,0x12a);
  return 0xffff;
}

