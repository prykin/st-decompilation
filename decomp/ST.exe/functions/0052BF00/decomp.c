
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\money.cpp
   MoneyTy::GetMessage */

undefined4 __thiscall MoneyTy::GetMessage(MoneyTy *this,int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  MoneyTy *this_00;
  ushort uVar5;
  int iVar6;
  ccFntTy *pcVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  ushort *puVar10;
  undefined4 uVar11;
  int iVar12;
  ccFntTy *this_01;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  char cVar13;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar14;
  byte bVar15;
  LPCSTR pCVar16;
  InternalExceptionFrame local_bc;
  undefined1 local_78 [16];
  undefined4 local_68;
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
  MoneyTy *local_10;
  uint local_c;
  char local_5;
  
  local_bc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_bc;
  local_10 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_bc.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar6 == 0) {
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0:
      iVar6 = FUN_006e4d40(&DAT_00807620,local_10->field_000C);
      if (iVar6 == 1) {
        uVar14 = this_00->field_0086;
        uVar2 = this_00->field_008A;
        if (uVar14 != uVar2) {
          if (uVar14 < uVar2) {
            if (uVar2 - uVar14 < 0x65) {
              if (uVar2 - uVar14 < 0xb) {
                iVar6 = uVar14 + 1;
              }
              else {
                iVar6 = uVar14 + 10;
              }
            }
            else {
              iVar6 = uVar14 + 100;
            }
          }
          else if (uVar14 - uVar2 < 0x65) {
            if (uVar14 - uVar2 < 0xb) {
              iVar6 = uVar14 - 1;
            }
            else {
              iVar6 = uVar14 - 10;
            }
          }
          else {
            iVar6 = uVar14 - 100;
          }
          this_00->field_0086 = iVar6;
          if (DAT_0080874e == '\x03') {
            uVar11 = this_00->field_0086;
            pCVar16 = &DAT_007c28fc;
          }
          else {
            uVar11 = this_00->field_0086;
            pCVar16 = &DAT_007c6f44;
          }
          wsprintfA((LPSTR)local_18,pCVar16,uVar11);
          iVar6 = this_00->field_0072;
          local_c = *(uint *)(iVar6 + 0x14);
          if (local_c == 0) {
            local_c = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc
                      ) * *(int *)(iVar6 + 8);
          }
          uVar1 = this_00->field_0069;
          puVar8 = (undefined4 *)FUN_006b4fa0(iVar6);
          for (uVar14 = local_c >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar8 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar8 = puVar8 + 1;
          }
          for (uVar14 = local_c & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined1 *)puVar8 = uVar1;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          iVar6 = this_00->field_0072;
          ccFntTy::SetSurf(this_00->field_006A,iVar6,0,0,0,*(int *)(iVar6 + 4),*(int *)(iVar6 + 8));
          ccFntTy::WrStr(this_00->field_006A,local_18,-1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5);
          thunk_FUN_0052b8a0((int)this_00);
        }
        uVar14 = this_00->field_008E;
        uVar2 = this_00->field_0092;
        if (uVar14 != uVar2) {
          if (uVar14 < uVar2) {
            if (uVar2 - uVar14 < 0x65) {
              if (uVar2 - uVar14 < 0xb) {
                iVar6 = uVar14 + 1;
              }
              else {
                iVar6 = uVar14 + 10;
              }
            }
            else {
              iVar6 = uVar14 + 100;
            }
          }
          else if (uVar14 - uVar2 < 0x65) {
            if (uVar14 - uVar2 < 0xb) {
              iVar6 = uVar14 - 1;
            }
            else {
              iVar6 = uVar14 - 10;
            }
          }
          else {
            iVar6 = uVar14 - 100;
          }
          this_00->field_008E = iVar6;
          wsprintfA((LPSTR)local_40,&DAT_007c28fc,iVar6);
          iVar6 = this_00->field_0076;
          local_c = *(uint *)(iVar6 + 0x14);
          if (local_c == 0) {
            local_c = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc
                      ) * *(int *)(iVar6 + 8);
          }
          uVar1 = this_00->field_0069;
          puVar8 = (undefined4 *)FUN_006b4fa0(iVar6);
          for (uVar14 = local_c >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar8 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar8 = puVar8 + 1;
          }
          for (uVar14 = local_c & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined1 *)puVar8 = uVar1;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          iVar6 = this_00->field_0076;
          ccFntTy::SetSurf(this_00->field_006A,iVar6,0,0,0,*(int *)(iVar6 + 4),*(int *)(iVar6 + 8));
          ccFntTy::WrStr(this_00->field_006A,local_40,-1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 4);
          thunk_FUN_0052b8f0((int)this_00);
        }
        uVar14 = this_00->field_0096;
        uVar2 = this_00->field_009A;
        if (uVar14 != uVar2) {
          if (uVar14 < uVar2) {
            if (uVar2 - uVar14 < 0x65) {
              if (uVar2 - uVar14 < 0xb) {
                iVar6 = uVar14 + 1;
              }
              else {
                iVar6 = uVar14 + 10;
              }
            }
            else {
              iVar6 = uVar14 + 100;
            }
          }
          else if (uVar14 - uVar2 < 0x65) {
            if (uVar14 - uVar2 < 0xb) {
              iVar6 = uVar14 - 1;
            }
            else {
              iVar6 = uVar14 - 10;
            }
          }
          else {
            iVar6 = uVar14 - 100;
          }
          this_00->field_0096 = iVar6;
          wsprintfA((LPSTR)local_48,&DAT_007c28fc,iVar6);
          iVar6 = this_00->field_007A;
          local_c = *(uint *)(iVar6 + 0x14);
          if (local_c == 0) {
            local_c = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc
                      ) * *(int *)(iVar6 + 8);
          }
          uVar1 = this_00->field_0069;
          puVar8 = (undefined4 *)FUN_006b4fa0(iVar6);
          for (uVar14 = local_c >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar8 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar8 = puVar8 + 1;
          }
          for (uVar14 = local_c & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined1 *)puVar8 = uVar1;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          iVar6 = this_00->field_007A;
          ccFntTy::SetSurf(this_00->field_006A,iVar6,0,0,0,*(int *)(iVar6 + 4),*(int *)(iVar6 + 8));
          ccFntTy::WrStr(this_00->field_006A,local_48,-1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
          thunk_FUN_0052b940((int)this_00);
        }
        if ((this_00->field_00A2 != this_00->field_00A3) ||
           (this_00->field_00A4 != this_00->field_00A5)) {
          this_00->field_00A2 = this_00->field_00A3;
          this_00->field_00A4 = this_00->field_00A5;
          thunk_FUN_0052b990((int)this_00);
        }
      }
      break;
    case 2:
      iVar6 = (DAT_0080874e != '\x03') + 0xb;
      local_10->field_002C = iVar6;
      local_10->field_0024 = iVar6;
      local_10->field_001C = iVar6;
      local_10->field_0058 = (-(uint)(DAT_0080874e != '\x03') & 0xffffffe5) + 0x50;
      local_10->field_0040 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffff9) + 0x24;
      if (DAT_0080874e == '\x03') {
        iVar6 = DAT_00806730 + -0x107;
      }
      else {
        iVar6 = DAT_00806730 + -0xd5;
      }
      local_10->field_0018 = iVar6;
      if (DAT_0080874e == '\x03') {
        iVar6 = DAT_00806730 + -0x94;
      }
      else {
        iVar6 = DAT_00806730 + -0x9e;
      }
      local_10->field_0020 = iVar6;
      if (DAT_0080874e == '\x03') {
        iVar6 = DAT_00806730 + -0x44;
      }
      else {
        iVar6 = DAT_00806730 + -0x5d;
      }
      local_10->field_0028 = iVar6;
      if (DAT_0080874e == '\x03') {
        iVar6 = DAT_00806730 + -0x160;
      }
      else {
        iVar6 = DAT_00806730 + -0x154;
      }
      local_10->field_0030 = iVar6;
      local_10->field_0038 = DAT_00806730 + -99;
      local_10->field_003C = DAT_00806734 + -0x16;
      local_10->field_0069 = ((DAT_0080874e == '\x03') - 1U & 0xc3) + 0x3d;
      pcVar7 = (ccFntTy *)ccFntTy::operator(DAT_00806790,0x19d,DAT_00806790,s_MONEY_FONT_007c211c,0)
      ;
      this_00->field_006A = pcVar7;
      pcVar7->field_0058 = 1;
      pcVar7->field_005C = 0;
      puVar8 = ccFntTy::operator(this_01,0x19d,DAT_00806790,s_TIME_FONT_007c212c,0);
      this_00->field_006E = puVar8;
      puVar8[0x16] = 1;
      puVar8[0x17] = 0;
      puVar8 = (undefined4 *)0x0;
      iVar12 = 0;
      iVar6 = 1;
      bVar15 = 0;
      uVar14 = 0xffffffff;
      pbVar9 = (byte *)thunk_FUN_00571240(s_IND_PNT_007c2078,0);
      puVar10 = Library::Ourlib::MFRLOAD::mfRLoad
                          (DAT_00806794,CASE_B,pbVar9,uVar14,bVar15,iVar6,iVar12,puVar8);
      this_00->field_0082 = puVar10;
      puVar8 = (undefined4 *)(DAT_0080679c + 0x28);
      iVar6 = 1;
      uVar14 = FUN_006b4fe0(DAT_0080679c);
      iVar6 = FUN_006b50c0(this_00->field_0040,this_00->field_0044,
                           (uint)*(ushort *)(DAT_0080679c + 0xe),uVar14,puVar8,iVar6);
      this_00->field_0072 = iVar6;
      local_c = *(uint *)(iVar6 + 0x14);
      if (local_c == 0) {
        local_c = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(iVar6 + 8);
      }
      uVar1 = this_00->field_0069;
      puVar8 = (undefined4 *)FUN_006b4fa0(iVar6);
      iVar6 = 1;
      for (uVar14 = local_c >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar8 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar8 = puVar8 + 1;
      }
      for (uVar14 = local_c & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined1 *)puVar8 = uVar1;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar8 = (undefined4 *)(DAT_0080679c + 0x28);
      uVar14 = FUN_006b4fe0(DAT_0080679c);
      iVar6 = FUN_006b50c0(this_00->field_0048,this_00->field_004C,
                           (uint)*(ushort *)(DAT_0080679c + 0xe),uVar14,puVar8,iVar6);
      this_00->field_0076 = iVar6;
      local_c = *(uint *)(iVar6 + 0x14);
      if (local_c == 0) {
        local_c = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(iVar6 + 8);
      }
      uVar1 = this_00->field_0069;
      puVar8 = (undefined4 *)FUN_006b4fa0(iVar6);
      iVar6 = 1;
      for (uVar14 = local_c >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar8 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar8 = puVar8 + 1;
      }
      for (uVar14 = local_c & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined1 *)puVar8 = uVar1;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar8 = (undefined4 *)(DAT_0080679c + 0x28);
      uVar14 = FUN_006b4fe0(DAT_0080679c);
      iVar6 = FUN_006b50c0(this_00->field_0050,this_00->field_0054,
                           (uint)*(ushort *)(DAT_0080679c + 0xe),uVar14,puVar8,iVar6);
      this_00->field_007A = iVar6;
      local_c = *(uint *)(iVar6 + 0x14);
      if (local_c == 0) {
        local_c = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(iVar6 + 8);
      }
      uVar1 = this_00->field_0069;
      puVar8 = (undefined4 *)FUN_006b4fa0(iVar6);
      iVar6 = 1;
      for (uVar14 = local_c >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar8 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar8 = puVar8 + 1;
      }
      for (uVar14 = local_c & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined1 *)puVar8 = uVar1;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar8 = (undefined4 *)(DAT_0080679c + 0x28);
      uVar14 = FUN_006b4fe0(DAT_0080679c);
      iVar6 = FUN_006b50c0(this_00->field_0060,this_00->field_0064,
                           (uint)*(ushort *)(DAT_0080679c + 0xe),uVar14,puVar8,iVar6);
      this_00->field_007E = iVar6;
      local_c = *(uint *)(iVar6 + 0x14);
      if (local_c == 0) {
        local_c = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(iVar6 + 8);
      }
      uVar1 = this_00->field_0069;
      puVar8 = (undefined4 *)FUN_006b4fa0(iVar6);
      for (uVar14 = local_c >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar8 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar8 = puVar8 + 1;
      }
      for (uVar14 = local_c & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined1 *)puVar8 = uVar1;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar8 = local_38;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      local_24 = this_00->field_0008;
      local_28 = 0x13;
      FUN_006e6000(this_00,3,1,local_38);
      this_00->field_0086 = 1;
      this_00->field_008E = 1;
      this_00->field_0096 = 1;
      this_00->field_00A3 = 0;
      if (((DAT_007fa174 != 0) && (DAT_0080874d < 8)) &&
         ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[(uint)DAT_0080874d * 0x51] < 8)))) {
        uVar5 = thunk_FUN_0044e1f0((uint)DAT_0080874d);
        thunk_FUN_0052bda0(this_00,DAT_0080874d,(uint)uVar5);
      }
      DAT_008016d4 = this_00;
      if (DAT_007fa174 != 0) {
        thunk_FUN_004d8b70(DAT_0080874d);
      }
      break;
    case 3:
      DAT_008016d4 = (MoneyTy *)0x0;
      uVar11 = local_10->field_0008;
      puVar8 = local_38;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      local_28 = 0x14;
      local_24 = uVar11;
      FUN_006e6000(this_00,3,1,local_38);
      if (this_00->field_0072 != 0) {
        FUN_006ab060(&this_00->field_0072);
      }
      if (this_00->field_0076 != 0) {
        FUN_006ab060(&this_00->field_0076);
      }
      if (this_00->field_007A != 0) {
        FUN_006ab060(&this_00->field_007A);
      }
      pcVar7 = (ccFntTy *)0x0;
      if (this_00->field_007E != 0) {
        FUN_006ab060(&this_00->field_007E);
        pcVar7 = extraout_ECX;
      }
      if (this_00->field_0082 != 0) {
        this_00->field_0082 = 0;
      }
      if (this_00->field_006A != (ccFntTy *)0x0) {
        ccFntTy::operator(pcVar7,(uint *)this_00->field_006A);
        this_00->field_006A = (ccFntTy *)0x0;
        pcVar7 = extraout_ECX_00;
      }
      if ((uint *)this_00->field_006E != (uint *)0x0) {
        ccFntTy::operator(pcVar7,(uint *)this_00->field_006E);
        this_00->field_006E = 0;
      }
      break;
    case 5:
      thunk_FUN_0052b8a0((int)local_10);
      thunk_FUN_0052b8f0((int)this_00);
      thunk_FUN_0052b940((int)this_00);
      thunk_FUN_0052b990((int)this_00);
      thunk_FUN_0052bbe0((int)this_00);
      break;
    case 0x60:
      uVar14 = (uint)*(ushort *)(param_1 + 0x18);
      local_c = (uint)*(ushort *)(param_1 + 0x1a);
      local_5 = '\0';
      if (DAT_0080874e != '\x03') {
        if (((((int)uVar14 < (int)local_10->field_0018) ||
             ((int)(local_10->field_0040 + local_10->field_0018) <= (int)uVar14)) ||
            ((int)local_c < (int)local_10->field_001C)) ||
           ((int)(local_10->field_0044 + local_10->field_001C) <= (int)local_c)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          local_5 = '\x01';
        }
      }
      if ((((int)uVar14 < (int)local_10->field_0020) ||
          ((int)(local_10->field_0048 + local_10->field_0020) <= (int)uVar14)) ||
         (((int)local_c < (int)local_10->field_0024 ||
          ((int)(local_10->field_004C + local_10->field_0024) <= (int)local_c)))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_5 = '\x02';
      }
      if ((((int)uVar14 < (int)local_10->field_0028) ||
          ((int)(local_10->field_0050 + local_10->field_0028) <= (int)uVar14)) ||
         (((int)local_c < (int)local_10->field_002C ||
          ((int)(local_10->field_0054 + local_10->field_002C) <= (int)local_c)))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_5 = '\x03';
      }
      if (((((int)uVar14 < (int)local_10->field_0030) ||
           ((int)(local_10->field_0058 + local_10->field_0030) <= (int)uVar14)) ||
          ((int)local_c < (int)local_10->field_0034)) ||
         ((int)(local_10->field_005C + local_10->field_0034) <= (int)local_c)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_5 = '\x04';
      }
      local_58 = local_10->field_0038 + -0x1e;
      local_50 = local_10->field_0060 + 0x23;
      local_54 = local_10->field_003C + -3;
      local_4c = local_10->field_0064 + 6;
      if ((((int)uVar14 < local_58) || (local_50 + local_58 <= (int)uVar14)) ||
         (((int)local_c < local_54 || (local_4c + local_54 <= (int)local_c)))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      cVar13 = '\x05';
      if (!bVar4) {
        cVar13 = local_5;
      }
      if (local_10->field_0068 != cVar13) {
        if (local_10->field_0068 != '\0') {
          local_68 = 0x4202;
          thunk_FUN_0052b760(local_10,(int)local_78);
          (**(code **)*DAT_00802a30)(local_78);
        }
        this_00->field_0068 = cVar13;
        if (cVar13 != '\0') {
          local_68 = 0x4201;
          thunk_FUN_0052b760(this_00,(int)local_78);
          (**(code **)*DAT_00802a30)(local_78);
        }
      }
    }
    g_currentExceptionFrame = local_bc.previous;
    uVar11 = FUN_006e5fd0();
    return uVar11;
  }
  g_currentExceptionFrame = local_bc.previous;
  iVar12 = ReportDebugMessage(s_E____titans_Andrey_money_cpp_007c6f48,0x12a,0,iVar6,&DAT_007a4ccc,
                              s_MoneyTy__GetMessage_007c6f6c);
  if (iVar12 != 0) {
    pcVar3 = (code *)swi(3);
    uVar11 = (*pcVar3)();
    return uVar11;
  }
  RaiseInternalException(iVar6,0,s_E____titans_Andrey_money_cpp_007c6f48,0x12a);
  return 0xffff;
}

