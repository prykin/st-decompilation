#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\money.cpp
   MoneyTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0052BF00; family_names=MoneyTy::GetMessage; ret4=2;
   direct_offsets={10:1,14:7,18:3,1c:2} */

int __thiscall MoneyTy::GetMessage(MoneyTy *this,STMessage *message)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  MoneyTy *this_00;
  ushort uVar6;
  int iVar7;
  ccFntTy *pcVar8;
  LPSTR text;
  ushort *puVar9;
  int iVar10;
  ccFntTy *this_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_00;
  MoneyTy_field_0068State MVar11;
  uint uVar12;
  byte bVar13;
  char *text_00;
  undefined4 *puVar14;
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
  MoneyTy *local_10;
  uint local_c;
  MoneyTy_field_0068State local_5;

  local_bc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_bc;
  local_10 = this;
  iVar7 = Library::MSVCRT::__setjmp3(local_bc.jumpBuffer,0);
  this_00 = local_10;
  if (iVar7 == 0) {
    switch(message->id) {
    case MESS_ID_NONE:
      iVar7 = FUN_006e4d40(&DAT_00807620,local_10->field_000C);
      if (iVar7 == 1) {
        uVar12 = this_00->field_0086;
        uVar3 = this_00->field_008A;
        if (uVar12 != uVar3) {
          if (uVar12 < uVar3) {
            if (uVar3 - uVar12 < 0x65) {
              if (uVar3 - uVar12 < 0xb) {
                uVar12 = uVar12 + 1;
              }
              else {
                uVar12 = uVar12 + 10;
              }
            }
            else {
              uVar12 = uVar12 + 100;
            }
          }
          else if (uVar12 - uVar3 < 0x65) {
            if (uVar12 - uVar3 < 0xb) {
              uVar12 = uVar12 - 1;
            }
            else {
              uVar12 = uVar12 - 10;
            }
          }
          else {
            uVar12 = uVar12 - 100;
          }
          this_00->field_0086 = uVar12;
          if (DAT_0080874e == '\x03') {
            uVar12 = this_00->field_0086;
            text_00 = "%6d";
          }
          else {
            uVar12 = this_00->field_0086;
            text_00 = "%5d";
          }
          wsprintfA((LPSTR)local_18,text_00,uVar12);
          puVar9 = this_00->field_0072;
          local_c = *(uint *)(puVar9 + 10);
          if (local_c == 0) {
            local_c = ((uint)puVar9[7] * *(int *)(puVar9 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                      *(int *)(puVar9 + 4);
          }
          uVar1 = this_00->field_0069;
          puVar14 = (undefined4 *)FUN_006b4fa0((int)puVar9);
          for (uVar12 = local_c >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *puVar14 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar14 = puVar14 + 1;
          }
          for (uVar12 = local_c & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined1 *)puVar14 = uVar1;
            puVar14 = (undefined4 *)((int)puVar14 + 1);
          }
          puVar9 = this_00->field_0072;
          ccFntTy::SetSurf(this_00->field_006A,(int)puVar9,0,0,0,*(int *)(puVar9 + 2),
                           *(int *)(puVar9 + 4));
          ccFntTy::WrStr(this_00->field_006A,local_18,-1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5);
          sub_0052B8A0(this_00);
        }
        uVar12 = this_00->field_008E;
        uVar3 = this_00->field_0092;
        if (uVar12 != uVar3) {
          if (uVar12 < uVar3) {
            if (uVar3 - uVar12 < 0x65) {
              if (uVar3 - uVar12 < 0xb) {
                iVar7 = uVar12 + 1;
              }
              else {
                iVar7 = uVar12 + 10;
              }
            }
            else {
              iVar7 = uVar12 + 100;
            }
          }
          else if (uVar12 - uVar3 < 0x65) {
            if (uVar12 - uVar3 < 0xb) {
              iVar7 = uVar12 - 1;
            }
            else {
              iVar7 = uVar12 - 10;
            }
          }
          else {
            iVar7 = uVar12 - 100;
          }
          this_00->field_008E = iVar7;
          wsprintfA((LPSTR)local_40,"%6d",iVar7);
          puVar9 = this_00->field_0076;
          local_c = *(uint *)(puVar9 + 10);
          if (local_c == 0) {
            local_c = ((uint)puVar9[7] * *(int *)(puVar9 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                      *(int *)(puVar9 + 4);
          }
          uVar1 = this_00->field_0069;
          puVar14 = (undefined4 *)FUN_006b4fa0((int)puVar9);
          for (uVar12 = local_c >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *puVar14 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar14 = puVar14 + 1;
          }
          for (uVar12 = local_c & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined1 *)puVar14 = uVar1;
            puVar14 = (undefined4 *)((int)puVar14 + 1);
          }
          puVar9 = this_00->field_0076;
          ccFntTy::SetSurf(this_00->field_006A,(int)puVar9,0,0,0,*(int *)(puVar9 + 2),
                           *(int *)(puVar9 + 4));
          ccFntTy::WrStr(this_00->field_006A,local_40,-1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 4);
          sub_0052B8F0(this_00);
        }
        uVar12 = this_00->field_0096;
        uVar3 = this_00->field_009A;
        if (uVar12 != uVar3) {
          if (uVar12 < uVar3) {
            if (uVar3 - uVar12 < 0x65) {
              if (uVar3 - uVar12 < 0xb) {
                iVar7 = uVar12 + 1;
              }
              else {
                iVar7 = uVar12 + 10;
              }
            }
            else {
              iVar7 = uVar12 + 100;
            }
          }
          else if (uVar12 - uVar3 < 0x65) {
            if (uVar12 - uVar3 < 0xb) {
              iVar7 = uVar12 - 1;
            }
            else {
              iVar7 = uVar12 - 10;
            }
          }
          else {
            iVar7 = uVar12 - 100;
          }
          this_00->field_0096 = iVar7;
          wsprintfA((LPSTR)local_48,"%6d",iVar7);
          puVar9 = this_00->field_007A;
          local_c = *(uint *)(puVar9 + 10);
          if (local_c == 0) {
            local_c = ((uint)puVar9[7] * *(int *)(puVar9 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                      *(int *)(puVar9 + 4);
          }
          uVar1 = this_00->field_0069;
          puVar14 = (undefined4 *)FUN_006b4fa0((int)puVar9);
          for (uVar12 = local_c >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *puVar14 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar14 = puVar14 + 1;
          }
          for (uVar12 = local_c & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined1 *)puVar14 = uVar1;
            puVar14 = (undefined4 *)((int)puVar14 + 1);
          }
          puVar9 = this_00->field_007A;
          ccFntTy::SetSurf(this_00->field_006A,(int)puVar9,0,0,0,*(int *)(puVar9 + 2),
                           *(int *)(puVar9 + 4));
          ccFntTy::WrStr(this_00->field_006A,local_48,-1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
          sub_0052B940(this_00);
        }
        if ((this_00->field_00A2 != this_00->field_00A3) ||
           (this_00->field_00A4 != this_00->field_00A5)) {
          this_00->field_00A2 = this_00->field_00A3;
          this_00->field_00A4 = this_00->field_00A5;
          sub_0052B990(this_00);
        }
      }
      break;
    case MESS_ID_CREATE:
      iVar7 = (DAT_0080874e != '\x03') + 0xb;
      local_10->field_002C = iVar7;
      local_10->field_0024 = iVar7;
      local_10->field_001C = iVar7;
      local_10->field_0058 = (-(uint)(DAT_0080874e != '\x03') & 0xffffffe5) + 0x50;
      local_10->field_0040 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffff9) + 0x24;
      if (DAT_0080874e == '\x03') {
        iVar7 = g_nWidth_00806730 + -0x107;
      }
      else {
        iVar7 = g_nWidth_00806730 + -0xd5;
      }
      local_10->field_0018 = iVar7;
      if (DAT_0080874e == '\x03') {
        iVar7 = g_nWidth_00806730 + -0x94;
      }
      else {
        iVar7 = g_nWidth_00806730 + -0x9e;
      }
      local_10->field_0020 = iVar7;
      if (DAT_0080874e == '\x03') {
        iVar7 = g_nWidth_00806730 + -0x44;
      }
      else {
        iVar7 = g_nWidth_00806730 + -0x5d;
      }
      local_10->field_0028 = iVar7;
      if (DAT_0080874e == '\x03') {
        iVar7 = g_nWidth_00806730 + -0x160;
      }
      else {
        iVar7 = g_nWidth_00806730 + -0x154;
      }
      local_10->field_0030 = iVar7;
      local_10->field_0038 = g_nWidth_00806730 + -99;
      local_10->field_003C = DAT_00806734 + -0x16;
      local_10->field_0069 = ((DAT_0080874e == '\x03') - 1U & 0xc3) + 0x3d;
      pcVar8 = (ccFntTy *)
               ccFntTy::operator(DAT_00806790,0x19d,(cMf32 *)DAT_00806790,"MONEY_FONT",0);
      this_00->field_006A = pcVar8;
      pcVar8->field_0058 = 1;
      pcVar8->field_005C = 0;
      pcVar8 = (ccFntTy *)
               ccFntTy::operator(this_01,0x19d,(cMf32 *)DAT_00806790,"TIME_FONT",0);
      this_00->field_006E = pcVar8;
      pcVar8->field_0058 = 1;
      pcVar8->field_005C = 0;
      puVar14 = (undefined4 *)0x0;
      iVar10 = 0;
      iVar7 = 1;
      bVar13 = 0;
      uVar12 = 0xffffffff;
      text = thunk_FUN_00571240("IND_PNT",0);
      puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806794,CASE_B,text,uVar12,bVar13,iVar7,iVar10,puVar14);
      this_00->field_0082 = puVar9;
      puVar14 = (undefined4 *)(DAT_0080679c + 0x28);
      iVar7 = 1;
      uVar12 = FUN_006b4fe0(DAT_0080679c);
      puVar9 = (ushort *)
               FUN_006b50c0(this_00->field_0040,this_00->field_0044,
                            (uint)*(ushort *)(DAT_0080679c + 0xe),uVar12,puVar14,iVar7);
      this_00->field_0072 = puVar9;
      local_c = *(uint *)(puVar9 + 10);
      if (local_c == 0) {
        local_c = ((uint)puVar9[7] * *(int *)(puVar9 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(puVar9 + 4);
      }
      uVar1 = this_00->field_0069;
      puVar14 = (undefined4 *)FUN_006b4fa0((int)puVar9);
      iVar7 = 1;
      for (uVar12 = local_c >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar14 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar14 = puVar14 + 1;
      }
      for (uVar12 = local_c & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar14 = uVar1;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      puVar14 = (undefined4 *)(DAT_0080679c + 0x28);
      uVar12 = FUN_006b4fe0(DAT_0080679c);
      puVar9 = (ushort *)
               FUN_006b50c0(this_00->field_0048,this_00->field_004C,
                            (uint)*(ushort *)(DAT_0080679c + 0xe),uVar12,puVar14,iVar7);
      this_00->field_0076 = puVar9;
      local_c = *(uint *)(puVar9 + 10);
      if (local_c == 0) {
        local_c = ((uint)puVar9[7] * *(int *)(puVar9 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(puVar9 + 4);
      }
      uVar1 = this_00->field_0069;
      puVar14 = (undefined4 *)FUN_006b4fa0((int)puVar9);
      iVar7 = 1;
      for (uVar12 = local_c >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar14 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar14 = puVar14 + 1;
      }
      for (uVar12 = local_c & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar14 = uVar1;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      puVar14 = (undefined4 *)(DAT_0080679c + 0x28);
      uVar12 = FUN_006b4fe0(DAT_0080679c);
      puVar9 = (ushort *)
               FUN_006b50c0(this_00->field_0050,this_00->field_0054,
                            (uint)*(ushort *)(DAT_0080679c + 0xe),uVar12,puVar14,iVar7);
      this_00->field_007A = puVar9;
      local_c = *(uint *)(puVar9 + 10);
      if (local_c == 0) {
        local_c = ((uint)puVar9[7] * *(int *)(puVar9 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(puVar9 + 4);
      }
      uVar1 = this_00->field_0069;
      puVar14 = (undefined4 *)FUN_006b4fa0((int)puVar9);
      iVar7 = 1;
      for (uVar12 = local_c >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar14 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar14 = puVar14 + 1;
      }
      for (uVar12 = local_c & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar14 = uVar1;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      puVar14 = (undefined4 *)(DAT_0080679c + 0x28);
      uVar12 = FUN_006b4fe0(DAT_0080679c);
      puVar9 = (ushort *)
               FUN_006b50c0(this_00->field_0060,this_00->field_0064,
                            (uint)*(ushort *)(DAT_0080679c + 0xe),uVar12,puVar14,iVar7);
      this_00->field_007E = puVar9;
      local_c = *(uint *)(puVar9 + 10);
      if (local_c == 0) {
        local_c = ((uint)puVar9[7] * *(int *)(puVar9 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(puVar9 + 4);
      }
      uVar1 = this_00->field_0069;
      puVar14 = (undefined4 *)FUN_006b4fa0((int)puVar9);
      for (uVar12 = local_c >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar14 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar14 = puVar14 + 1;
      }
      for (uVar12 = local_c & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar14 = uVar1;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      memset(local_38, 0, 0x20); /* compiler bulk-zero initialization */
      iVar7 = 0;
      local_24 = this_00->field_0008;
      local_28 = 0x13;
      FUN_006e6000(this_00,3,1,local_38);
      this_00->field_0086 = 1;
      this_00->field_008E = 1;
      this_00->field_0096 = 1;
      this_00->field_00A3 = 0;
      if (((g_allPlayers_007FA174 != (STAllPlayersC *)0x0) && (DAT_0080874d < 8)) &&
         ((g_playSystem_00802A38 == (STPlaySystemC *)0x0 ||
          ((byte)(&DAT_008087e9)[(uint)DAT_0080874d * 0x51] < 8)))) {
        uVar6 = thunk_FUN_0044e1f0((uint)DAT_0080874d);
        sub_0052BDA0(this_00,DAT_0080874d,(uint)uVar6);
      }
      g_money_008016D4 = this_00;
      if (g_allPlayers_007FA174 != (STAllPlayersC *)0x0) {
        thunk_FUN_004d8b70(DAT_0080874d);
      }
      break;
    case MESS_SHARED_0003:
      g_money_008016D4 = (MoneyTy *)0x0;
      uVar2 = local_10->field_0008;
      memset(local_38, 0, 0x20); /* compiler bulk-zero initialization */
      local_28 = 0x14;
      local_24 = uVar2;
      FUN_006e6000(this_00,3,1,local_38);
      if (this_00->field_0072 != (ushort *)0x0) {
        FreeAndNull(&this_00->field_0072);
      }
      if (this_00->field_0076 != (ushort *)0x0) {
        FreeAndNull(&this_00->field_0076);
      }
      if (this_00->field_007A != (ushort *)0x0) {
        FreeAndNull(&this_00->field_007A);
      }
      pcVar8 = (ccFntTy *)0x0;
      if (this_00->field_007E != (ushort *)0x0) {
        FreeAndNull(&this_00->field_007E);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        pcVar8 = extraout_ECX;
      }
      if (this_00->field_0082 != (ushort *)0x0) {
        this_00->field_0082 = (ushort *)0x0;
      }
      if (this_00->field_006A != (ccFntTy *)0x0) {
        ccFntTy::operator(pcVar8,(uint *)this_00->field_006A);
        this_00->field_006A = (ccFntTy *)0x0;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        pcVar8 = extraout_ECX_00;
      }
      if (this_00->field_006E != (ccFntTy *)0x0) {
        ccFntTy::operator(pcVar8,(uint *)this_00->field_006E);
        this_00->field_006E = (ccFntTy *)0x0;
      }
      break;
    case MESS_SHARED_0005:
      sub_0052B8A0(local_10);
      sub_0052B8F0(this_00);
      sub_0052B940(this_00);
      sub_0052B990(this_00);
      sub_0052BBE0(this_00);
      break;
    case MESS_SHARED_0060:
      uVar12 = (uint)(message->arg1).words.low;
      local_c = (uint)(message->arg1).words.high;
      local_5 = 0;
      if (DAT_0080874e != '\x03') {
        if (((((int)uVar12 < local_10->field_0018) ||
             (local_10->field_0040 + local_10->field_0018 <= (int)uVar12)) ||
            ((int)local_c < local_10->field_001C)) ||
           (local_10->field_0044 + local_10->field_001C <= (int)local_c)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          local_5 = CASE_1;
        }
      }
      if ((((int)uVar12 < local_10->field_0020) ||
          (local_10->field_0048 + local_10->field_0020 <= (int)uVar12)) ||
         (((int)local_c < local_10->field_0024 ||
          (local_10->field_004C + local_10->field_0024 <= (int)local_c)))) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        local_5 = CASE_2;
      }
      if ((((int)uVar12 < local_10->field_0028) ||
          (local_10->field_0050 + local_10->field_0028 <= (int)uVar12)) ||
         (((int)local_c < local_10->field_002C ||
          (local_10->field_0054 + local_10->field_002C <= (int)local_c)))) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        local_5 = CASE_3;
      }
      if (((((int)uVar12 < local_10->field_0030) ||
           (local_10->field_0058 + local_10->field_0030 <= (int)uVar12)) ||
          ((int)local_c < local_10->field_0034)) ||
         (local_10->field_005C + local_10->field_0034 <= (int)local_c)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        local_5 = CASE_4;
      }
      local_58 = local_10->field_0038 + -0x1e;
      local_50 = local_10->field_0060 + 0x23;
      local_54 = local_10->field_003C + -3;
      local_4c = local_10->field_0064 + 6;
      if ((((int)uVar12 < local_58) || (local_50 + local_58 <= (int)uVar12)) ||
         (((int)local_c < local_54 || (local_4c + local_54 <= (int)local_c)))) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      MVar11 = CASE_4|CASE_1;
      if (!bVar5) {
        MVar11 = local_5;
      }
      if (local_10->field_0068 != MVar11) {
        if (local_10->field_0068 != 0) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_78._16_4_ = 0x4202;
          sub_0052B760(local_10,&local_78);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)g_cursorClass_00802A30->field_0000)(&local_78);
        }
        this_00->field_0068 = MVar11;
        if (MVar11 != 0) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_78._16_4_ = 0x4201;
          sub_0052B760(this_00,&local_78);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)g_cursorClass_00802A30->field_0000)(&local_78);
        }
      }
    }
    g_currentExceptionFrame = local_bc.previous;
    iVar7 = FUN_006e5fd0(this_00,message);
    return iVar7;
  }
  g_currentExceptionFrame = local_bc.previous;
  iVar10 = ReportDebugMessage("E:\\__titans\\Andrey\\money.cpp",0x12a,0,iVar7,"%s",
                              "MoneyTy::GetMessage");
  if (iVar10 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar7,0,"E:\\__titans\\Andrey\\money.cpp",0x12a);
  return 0xffff;
}

