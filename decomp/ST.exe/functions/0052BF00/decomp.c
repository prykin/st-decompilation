
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\money.cpp
   MoneyTy::GetMessage */

undefined4 __thiscall MoneyTy::GetMessage(MoneyTy *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  MoneyTy *this_00;
  ushort uVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  ushort *puVar8;
  MoneyTy *pMVar9;
  undefined4 uVar10;
  int iVar11;
  MoneyTy MVar12;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar13;
  byte bVar14;
  LPCSTR pCVar15;
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
  MoneyTy local_5;
  
  local_bc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_bc;
  local_10 = this;
  iVar5 = __setjmp3(local_bc.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar5 == 0) {
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0:
      iVar5 = FUN_006e4d40(&DAT_00807620,*(int *)(local_10 + 0xc));
      if (iVar5 == 1) {
        uVar13 = *(uint *)(this_00 + 0x86);
        uVar1 = *(uint *)(this_00 + 0x8a);
        if (uVar13 != uVar1) {
          if (uVar13 < uVar1) {
            if (uVar1 - uVar13 < 0x65) {
              if (uVar1 - uVar13 < 0xb) {
                iVar5 = uVar13 + 1;
              }
              else {
                iVar5 = uVar13 + 10;
              }
            }
            else {
              iVar5 = uVar13 + 100;
            }
          }
          else if (uVar13 - uVar1 < 0x65) {
            if (uVar13 - uVar1 < 0xb) {
              iVar5 = uVar13 - 1;
            }
            else {
              iVar5 = uVar13 - 10;
            }
          }
          else {
            iVar5 = uVar13 - 100;
          }
          *(int *)(this_00 + 0x86) = iVar5;
          if (DAT_0080874e == '\x03') {
            uVar10 = *(undefined4 *)(this_00 + 0x86);
            pCVar15 = &DAT_007c28fc;
          }
          else {
            uVar10 = *(undefined4 *)(this_00 + 0x86);
            pCVar15 = &DAT_007c6f44;
          }
          wsprintfA((LPSTR)local_18,pCVar15,uVar10);
          iVar5 = *(int *)(this_00 + 0x72);
          local_c = *(uint *)(iVar5 + 0x14);
          if (local_c == 0) {
            local_c = ((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f >> 3 & 0x1ffffffc
                      ) * *(int *)(iVar5 + 8);
          }
          MVar12 = this_00[0x69];
          pMVar9 = (MoneyTy *)FUN_006b4fa0(iVar5);
          for (uVar13 = local_c >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(uint *)pMVar9 = CONCAT22(CONCAT11(MVar12,MVar12),CONCAT11(MVar12,MVar12));
            pMVar9 = pMVar9 + 4;
          }
          for (uVar13 = local_c & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pMVar9 = MVar12;
            pMVar9 = pMVar9 + 1;
          }
          iVar5 = *(int *)(this_00 + 0x72);
          ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x6a),iVar5,0,0,0,*(int *)(iVar5 + 4),
                           *(int *)(iVar5 + 8));
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x6a),local_18,-1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5);
          thunk_FUN_0052b8a0((int)this_00);
        }
        uVar13 = *(uint *)(this_00 + 0x8e);
        uVar1 = *(uint *)(this_00 + 0x92);
        if (uVar13 != uVar1) {
          if (uVar13 < uVar1) {
            if (uVar1 - uVar13 < 0x65) {
              if (uVar1 - uVar13 < 0xb) {
                iVar5 = uVar13 + 1;
              }
              else {
                iVar5 = uVar13 + 10;
              }
            }
            else {
              iVar5 = uVar13 + 100;
            }
          }
          else if (uVar13 - uVar1 < 0x65) {
            if (uVar13 - uVar1 < 0xb) {
              iVar5 = uVar13 - 1;
            }
            else {
              iVar5 = uVar13 - 10;
            }
          }
          else {
            iVar5 = uVar13 - 100;
          }
          *(int *)(this_00 + 0x8e) = iVar5;
          wsprintfA((LPSTR)local_40,&DAT_007c28fc,iVar5);
          iVar5 = *(int *)(this_00 + 0x76);
          local_c = *(uint *)(iVar5 + 0x14);
          if (local_c == 0) {
            local_c = ((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f >> 3 & 0x1ffffffc
                      ) * *(int *)(iVar5 + 8);
          }
          MVar12 = this_00[0x69];
          pMVar9 = (MoneyTy *)FUN_006b4fa0(iVar5);
          for (uVar13 = local_c >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(uint *)pMVar9 = CONCAT22(CONCAT11(MVar12,MVar12),CONCAT11(MVar12,MVar12));
            pMVar9 = pMVar9 + 4;
          }
          for (uVar13 = local_c & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pMVar9 = MVar12;
            pMVar9 = pMVar9 + 1;
          }
          iVar5 = *(int *)(this_00 + 0x76);
          ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x6a),iVar5,0,0,0,*(int *)(iVar5 + 4),
                           *(int *)(iVar5 + 8));
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x6a),local_40,-1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 4);
          thunk_FUN_0052b8f0((int)this_00);
        }
        uVar13 = *(uint *)(this_00 + 0x96);
        uVar1 = *(uint *)(this_00 + 0x9a);
        if (uVar13 != uVar1) {
          if (uVar13 < uVar1) {
            if (uVar1 - uVar13 < 0x65) {
              if (uVar1 - uVar13 < 0xb) {
                iVar5 = uVar13 + 1;
              }
              else {
                iVar5 = uVar13 + 10;
              }
            }
            else {
              iVar5 = uVar13 + 100;
            }
          }
          else if (uVar13 - uVar1 < 0x65) {
            if (uVar13 - uVar1 < 0xb) {
              iVar5 = uVar13 - 1;
            }
            else {
              iVar5 = uVar13 - 10;
            }
          }
          else {
            iVar5 = uVar13 - 100;
          }
          *(int *)(this_00 + 0x96) = iVar5;
          wsprintfA((LPSTR)local_48,&DAT_007c28fc,iVar5);
          iVar5 = *(int *)(this_00 + 0x7a);
          local_c = *(uint *)(iVar5 + 0x14);
          if (local_c == 0) {
            local_c = ((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f >> 3 & 0x1ffffffc
                      ) * *(int *)(iVar5 + 8);
          }
          MVar12 = this_00[0x69];
          pMVar9 = (MoneyTy *)FUN_006b4fa0(iVar5);
          for (uVar13 = local_c >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(uint *)pMVar9 = CONCAT22(CONCAT11(MVar12,MVar12),CONCAT11(MVar12,MVar12));
            pMVar9 = pMVar9 + 4;
          }
          for (uVar13 = local_c & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pMVar9 = MVar12;
            pMVar9 = pMVar9 + 1;
          }
          iVar5 = *(int *)(this_00 + 0x7a);
          ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x6a),iVar5,0,0,0,*(int *)(iVar5 + 4),
                           *(int *)(iVar5 + 8));
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x6a),local_48,-1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
          thunk_FUN_0052b940((int)this_00);
        }
        if ((this_00[0xa2] != this_00[0xa3]) || (this_00[0xa4] != this_00[0xa5])) {
          this_00[0xa2] = this_00[0xa3];
          this_00[0xa4] = this_00[0xa5];
          thunk_FUN_0052b990((int)this_00);
        }
      }
      break;
    case 2:
      iVar5 = (DAT_0080874e != '\x03') + 0xb;
      *(int *)(local_10 + 0x2c) = iVar5;
      *(int *)(local_10 + 0x24) = iVar5;
      *(int *)(local_10 + 0x1c) = iVar5;
      *(uint *)(local_10 + 0x58) = (-(uint)(DAT_0080874e != '\x03') & 0xffffffe5) + 0x50;
      *(uint *)(local_10 + 0x40) = (-(uint)(DAT_0080874e != '\x03') & 0xfffffff9) + 0x24;
      if (DAT_0080874e == '\x03') {
        iVar5 = DAT_00806730 + -0x107;
      }
      else {
        iVar5 = DAT_00806730 + -0xd5;
      }
      *(int *)(local_10 + 0x18) = iVar5;
      if (DAT_0080874e == '\x03') {
        iVar5 = DAT_00806730 + -0x94;
      }
      else {
        iVar5 = DAT_00806730 + -0x9e;
      }
      *(int *)(local_10 + 0x20) = iVar5;
      if (DAT_0080874e == '\x03') {
        iVar5 = DAT_00806730 + -0x44;
      }
      else {
        iVar5 = DAT_00806730 + -0x5d;
      }
      *(int *)(local_10 + 0x28) = iVar5;
      if (DAT_0080874e == '\x03') {
        iVar5 = DAT_00806730 + -0x160;
      }
      else {
        iVar5 = DAT_00806730 + -0x154;
      }
      *(int *)(local_10 + 0x30) = iVar5;
      *(int *)(local_10 + 0x38) = DAT_00806730 + -99;
      *(int *)(local_10 + 0x3c) = DAT_00806734 + -0x16;
      local_10[0x69] = (MoneyTy)(((DAT_0080874e == '\x03') - 1U & 0xc3) + 0x3d);
      puVar6 = FUN_0070ceb0(0x19d,DAT_00806790,s_MONEY_FONT_007c211c,0);
      *(undefined4 **)(this_00 + 0x6a) = puVar6;
      puVar6[0x16] = 1;
      puVar6[0x17] = 0;
      puVar6 = FUN_0070ceb0(0x19d,DAT_00806790,s_TIME_FONT_007c212c,0);
      *(undefined4 **)(this_00 + 0x6e) = puVar6;
      puVar6[0x16] = 1;
      puVar6[0x17] = 0;
      puVar6 = (undefined4 *)0x0;
      iVar11 = 0;
      iVar5 = 1;
      bVar14 = 0;
      uVar13 = 0xffffffff;
      pbVar7 = (byte *)thunk_FUN_00571240(s_IND_PNT_007c2078,0);
      puVar8 = FUN_00709af0(DAT_00806794,0xb,pbVar7,uVar13,bVar14,iVar5,iVar11,puVar6);
      *(ushort **)(this_00 + 0x82) = puVar8;
      puVar6 = (undefined4 *)(DAT_0080679c + 0x28);
      iVar5 = 1;
      uVar13 = FUN_006b4fe0(DAT_0080679c);
      iVar5 = FUN_006b50c0(*(int *)(this_00 + 0x40),*(int *)(this_00 + 0x44),
                           (uint)*(ushort *)(DAT_0080679c + 0xe),uVar13,puVar6,iVar5);
      *(int *)(this_00 + 0x72) = iVar5;
      local_c = *(uint *)(iVar5 + 0x14);
      if (local_c == 0) {
        local_c = ((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(iVar5 + 8);
      }
      MVar12 = this_00[0x69];
      pMVar9 = (MoneyTy *)FUN_006b4fa0(iVar5);
      iVar5 = 1;
      for (uVar13 = local_c >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(uint *)pMVar9 = CONCAT22(CONCAT11(MVar12,MVar12),CONCAT11(MVar12,MVar12));
        pMVar9 = pMVar9 + 4;
      }
      for (uVar13 = local_c & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pMVar9 = MVar12;
        pMVar9 = pMVar9 + 1;
      }
      puVar6 = (undefined4 *)(DAT_0080679c + 0x28);
      uVar13 = FUN_006b4fe0(DAT_0080679c);
      iVar5 = FUN_006b50c0(*(int *)(this_00 + 0x48),*(int *)(this_00 + 0x4c),
                           (uint)*(ushort *)(DAT_0080679c + 0xe),uVar13,puVar6,iVar5);
      *(int *)(this_00 + 0x76) = iVar5;
      local_c = *(uint *)(iVar5 + 0x14);
      if (local_c == 0) {
        local_c = ((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(iVar5 + 8);
      }
      MVar12 = this_00[0x69];
      pMVar9 = (MoneyTy *)FUN_006b4fa0(iVar5);
      iVar5 = 1;
      for (uVar13 = local_c >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(uint *)pMVar9 = CONCAT22(CONCAT11(MVar12,MVar12),CONCAT11(MVar12,MVar12));
        pMVar9 = pMVar9 + 4;
      }
      for (uVar13 = local_c & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pMVar9 = MVar12;
        pMVar9 = pMVar9 + 1;
      }
      puVar6 = (undefined4 *)(DAT_0080679c + 0x28);
      uVar13 = FUN_006b4fe0(DAT_0080679c);
      iVar5 = FUN_006b50c0(*(int *)(this_00 + 0x50),*(int *)(this_00 + 0x54),
                           (uint)*(ushort *)(DAT_0080679c + 0xe),uVar13,puVar6,iVar5);
      *(int *)(this_00 + 0x7a) = iVar5;
      local_c = *(uint *)(iVar5 + 0x14);
      if (local_c == 0) {
        local_c = ((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(iVar5 + 8);
      }
      MVar12 = this_00[0x69];
      pMVar9 = (MoneyTy *)FUN_006b4fa0(iVar5);
      iVar5 = 1;
      for (uVar13 = local_c >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(uint *)pMVar9 = CONCAT22(CONCAT11(MVar12,MVar12),CONCAT11(MVar12,MVar12));
        pMVar9 = pMVar9 + 4;
      }
      for (uVar13 = local_c & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pMVar9 = MVar12;
        pMVar9 = pMVar9 + 1;
      }
      puVar6 = (undefined4 *)(DAT_0080679c + 0x28);
      uVar13 = FUN_006b4fe0(DAT_0080679c);
      iVar5 = FUN_006b50c0(*(int *)(this_00 + 0x60),*(int *)(this_00 + 100),
                           (uint)*(ushort *)(DAT_0080679c + 0xe),uVar13,puVar6,iVar5);
      *(int *)(this_00 + 0x7e) = iVar5;
      local_c = *(uint *)(iVar5 + 0x14);
      if (local_c == 0) {
        local_c = ((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(iVar5 + 8);
      }
      MVar12 = this_00[0x69];
      pMVar9 = (MoneyTy *)FUN_006b4fa0(iVar5);
      for (uVar13 = local_c >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(uint *)pMVar9 = CONCAT22(CONCAT11(MVar12,MVar12),CONCAT11(MVar12,MVar12));
        pMVar9 = pMVar9 + 4;
      }
      for (uVar13 = local_c & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pMVar9 = MVar12;
        pMVar9 = pMVar9 + 1;
      }
      puVar6 = local_38;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      local_24 = *(undefined4 *)(this_00 + 8);
      local_28 = 0x13;
      FUN_006e6000(this_00,3,1,local_38);
      *(undefined4 *)(this_00 + 0x86) = 1;
      *(undefined4 *)(this_00 + 0x8e) = 1;
      *(undefined4 *)(this_00 + 0x96) = 1;
      this_00[0xa3] = (MoneyTy)0x0;
      if (((DAT_007fa174 != 0) && (DAT_0080874d < 8)) &&
         ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[(uint)DAT_0080874d * 0x51] < 8)))) {
        uVar4 = thunk_FUN_0044e1f0((uint)DAT_0080874d);
        thunk_FUN_0052bda0(this_00,DAT_0080874d,(uint)uVar4);
      }
      DAT_008016d4 = this_00;
      if (DAT_007fa174 != 0) {
        thunk_FUN_004d8b70(DAT_0080874d);
      }
      break;
    case 3:
      DAT_008016d4 = (MoneyTy *)0x0;
      uVar10 = *(undefined4 *)(local_10 + 8);
      puVar6 = local_38;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      local_28 = 0x14;
      local_24 = uVar10;
      FUN_006e6000(this_00,3,1,local_38);
      if (*(int *)(this_00 + 0x72) != 0) {
        FUN_006ab060((undefined4 *)(this_00 + 0x72));
      }
      if (*(int *)(this_00 + 0x76) != 0) {
        FUN_006ab060((undefined4 *)(this_00 + 0x76));
      }
      if (*(int *)(this_00 + 0x7a) != 0) {
        FUN_006ab060((undefined4 *)(this_00 + 0x7a));
      }
      if (*(int *)(this_00 + 0x7e) != 0) {
        FUN_006ab060((undefined4 *)(this_00 + 0x7e));
      }
      if (*(int *)(this_00 + 0x82) != 0) {
        *(undefined4 *)(this_00 + 0x82) = 0;
      }
      if (*(uint **)(this_00 + 0x6a) != (uint *)0x0) {
        FUN_00710560(*(uint **)(this_00 + 0x6a));
        *(undefined4 *)(this_00 + 0x6a) = 0;
      }
      if (*(uint **)(this_00 + 0x6e) != (uint *)0x0) {
        FUN_00710560(*(uint **)(this_00 + 0x6e));
        *(undefined4 *)(this_00 + 0x6e) = 0;
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
      uVar13 = (uint)*(ushort *)(param_1 + 0x18);
      local_c = (uint)*(ushort *)(param_1 + 0x1a);
      local_5 = (MoneyTy)0x0;
      if (DAT_0080874e != '\x03') {
        if (((((int)uVar13 < *(int *)(local_10 + 0x18)) ||
             (*(int *)(local_10 + 0x40) + *(int *)(local_10 + 0x18) <= (int)uVar13)) ||
            ((int)local_c < *(int *)(local_10 + 0x1c))) ||
           (*(int *)(local_10 + 0x44) + *(int *)(local_10 + 0x1c) <= (int)local_c)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_5 = (MoneyTy)0x1;
        }
      }
      if ((((int)uVar13 < *(int *)(local_10 + 0x20)) ||
          (*(int *)(local_10 + 0x48) + *(int *)(local_10 + 0x20) <= (int)uVar13)) ||
         (((int)local_c < *(int *)(local_10 + 0x24) ||
          (*(int *)(local_10 + 0x4c) + *(int *)(local_10 + 0x24) <= (int)local_c)))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_5 = (MoneyTy)0x2;
      }
      if ((((int)uVar13 < *(int *)(local_10 + 0x28)) ||
          (*(int *)(local_10 + 0x50) + *(int *)(local_10 + 0x28) <= (int)uVar13)) ||
         (((int)local_c < *(int *)(local_10 + 0x2c) ||
          (*(int *)(local_10 + 0x54) + *(int *)(local_10 + 0x2c) <= (int)local_c)))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_5 = (MoneyTy)0x3;
      }
      if (((((int)uVar13 < *(int *)(local_10 + 0x30)) ||
           (*(int *)(local_10 + 0x58) + *(int *)(local_10 + 0x30) <= (int)uVar13)) ||
          ((int)local_c < *(int *)(local_10 + 0x34))) ||
         (*(int *)(local_10 + 0x5c) + *(int *)(local_10 + 0x34) <= (int)local_c)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_5 = (MoneyTy)0x4;
      }
      local_58 = *(int *)(local_10 + 0x38) + -0x1e;
      local_50 = *(int *)(local_10 + 0x60) + 0x23;
      local_54 = *(int *)(local_10 + 0x3c) + -3;
      local_4c = *(int *)(local_10 + 100) + 6;
      if ((((int)uVar13 < local_58) || (local_50 + local_58 <= (int)uVar13)) ||
         (((int)local_c < local_54 || (local_4c + local_54 <= (int)local_c)))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      MVar12 = (MoneyTy)0x5;
      if (!bVar3) {
        MVar12 = local_5;
      }
      if (local_10[0x68] != MVar12) {
        if (local_10[0x68] != (MoneyTy)0x0) {
          local_68 = 0x4202;
          thunk_FUN_0052b760(local_10,(int)local_78);
          (**(code **)*DAT_00802a30)(local_78);
        }
        this_00[0x68] = MVar12;
        if (MVar12 != (MoneyTy)0x0) {
          local_68 = 0x4201;
          thunk_FUN_0052b760(this_00,(int)local_78);
          (**(code **)*DAT_00802a30)(local_78);
        }
      }
    }
    g_currentExceptionFrame = local_bc.previous;
    uVar10 = FUN_006e5fd0();
    return uVar10;
  }
  g_currentExceptionFrame = local_bc.previous;
  iVar11 = ReportDebugMessage(s_E____titans_Andrey_money_cpp_007c6f48,0x12a,0,iVar5,&DAT_007a4ccc,
                              s_MoneyTy__GetMessage_007c6f6c);
  if (iVar11 != 0) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return uVar10;
  }
  RaiseInternalException(iVar5,0,s_E____titans_Andrey_money_cpp_007c6f48,0x12a);
  return 0xffff;
}

