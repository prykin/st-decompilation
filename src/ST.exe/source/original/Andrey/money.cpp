#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/money.cpp

// 0052BF00 MoneyTy::GetMessage
#line 4 "decomp/ST.exe/functions/0052BF00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\money.cpp
   MoneyTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0052BF00; family_names=MoneyTy::GetMessage; ret4=2;
   direct_offsets={10:1,14:7,18:3,1c:2}

   [STSwitchEnumApplier] Switch target field_0068 uses
   /SubmarineTitans/Recovered/Enums/MoneyTy_field_0068State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5 */

int __thiscall st::fn_0052BF00(MoneyTy *this,STMessage *message)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar5;
  MoneyTy *this_00;
  ushort uVar6;
  int local_EAX_48;
  ccFntTy *pcVar7;
  LPSTR text;
  ushort *puVar9;
  int uVar12;
  ushort *puVar8;
  int local_EAX_597;
  int local_EAX_719;
  int local_EAX_841;
  uint uVar13;
  int iVar7;
  int iVar9;
  int iVar10;
  MoneyTy_field_0068State MVar11;
  uint uVar14;
  byte bVar15;
  int iVar16;
  char *text_00;
  undefined4 *puVar17;
  InternalExceptionFrame local_bc;
  AnonShape_0052B760_30F4E0D5 local_78;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  CHAR local_48 [8];
  CHAR local_40 [8];
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  CHAR local_18 [8];
  MoneyTy *local_10;
  uint local_c;
  MoneyTy_field_0068State local_5;

  local_bc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_bc;
  local_10 = this;
  local_EAX_48 = st::fn_0072D7F0(local_bc.jumpBuffer,0);
  this_00 = local_10;
  if (local_EAX_48 == 0) {
    switch(message->id) {
    case MESS_ID_NONE:
      uVar13 = st::fn_006E4D40(&DAT_00807620,local_10->field_000C);
      if (uVar13 == 1) {
        uVar14 = this_00->field_0086;
        uVar3 = this_00->field_008A;
        if (uVar14 != uVar3) {
          if (uVar14 < uVar3) {
            if (uVar3 - uVar14 < 0x65) {
              if (uVar3 - uVar14 < 0xb) {
                uVar14 = uVar14 + 1;
              }
              else {
                uVar14 = uVar14 + 10;
              }
            }
            else {
              uVar14 = uVar14 + 100;
            }
          }
          else if (uVar14 - uVar3 < 0x65) {
            if (uVar14 - uVar3 < 0xb) {
              uVar14 = uVar14 - 1;
            }
            else {
              uVar14 = uVar14 - 10;
            }
          }
          else {
            uVar14 = uVar14 - 100;
          }
          this_00->field_0086 = uVar14;
          if (DAT_0080874e == '\x03') {
            uVar14 = this_00->field_0086;
            text_00 = "%6d";
          }
          else {
            uVar14 = this_00->field_0086;
            text_00 = "%5d";
          }
          st::external_00000080(local_18,text_00,uVar14);
          puVar8 = this_00->field_0072;
          local_c = *(uint *)(puVar8 + 10);
          if (local_c == 0) {
            local_c = ((uint)puVar8[7] * *(int *)(puVar8 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                      *(int *)(puVar8 + 4);
          }
          uVar1 = this_00->field_0069;
          puVar17 = (undefined4 *)st::fn_006B4FA0((int *)puVar8);
          for (uVar14 = local_c >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar17 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar17 = puVar17 + 1;
          }
          for (uVar14 = local_c & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined1 *)puVar17 = uVar1;
            puVar17 = (undefined4 *)((int)puVar17 + 1);
          }
          puVar8 = this_00->field_0072;
          st::fn_00710A90(this_00->field_006A,(int)puVar8,0,0,0,*(int *)(puVar8 + 2),
                           *(int *)(puVar8 + 4));
          st::fn_007119C0(this_00->field_006A,local_18,-1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5);
          st::fn_00403666(this_00);
        }
        uVar14 = this_00->field_008E;
        uVar3 = this_00->field_0092;
        if (uVar14 != uVar3) {
          if (uVar14 < uVar3) {
            if (uVar3 - uVar14 < 0x65) {
              if (uVar3 - uVar14 < 0xb) {
                iVar10 = uVar14 + 1;
              }
              else {
                iVar10 = uVar14 + 10;
              }
            }
            else {
              iVar10 = uVar14 + 100;
            }
          }
          else if (uVar14 - uVar3 < 0x65) {
            if (uVar14 - uVar3 < 0xb) {
              iVar10 = uVar14 - 1;
            }
            else {
              iVar10 = uVar14 - 10;
            }
          }
          else {
            iVar10 = uVar14 - 100;
          }
          this_00->field_008E = iVar10;
          st::external_00000080(local_40,st::mutable_c_string("%6d"),iVar10);
          puVar8 = this_00->field_0076;
          local_c = *(uint *)(puVar8 + 10);
          if (local_c == 0) {
            local_c = ((uint)puVar8[7] * *(int *)(puVar8 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                      *(int *)(puVar8 + 4);
          }
          uVar1 = this_00->field_0069;
          puVar17 = (undefined4 *)st::fn_006B4FA0((int *)puVar8);
          for (uVar14 = local_c >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar17 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar17 = puVar17 + 1;
          }
          for (uVar14 = local_c & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined1 *)puVar17 = uVar1;
            puVar17 = (undefined4 *)((int)puVar17 + 1);
          }
          puVar8 = this_00->field_0076;
          st::fn_00710A90(this_00->field_006A,(int)puVar8,0,0,0,*(int *)(puVar8 + 2),
                           *(int *)(puVar8 + 4));
          st::fn_007119C0(this_00->field_006A,local_40,-1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 4);
          st::fn_00404949(this_00);
        }
        uVar14 = this_00->field_0096;
        uVar3 = this_00->field_009A;
        if (uVar14 != uVar3) {
          if (uVar14 < uVar3) {
            if (uVar3 - uVar14 < 0x65) {
              if (uVar3 - uVar14 < 0xb) {
                iVar10 = uVar14 + 1;
              }
              else {
                iVar10 = uVar14 + 10;
              }
            }
            else {
              iVar10 = uVar14 + 100;
            }
          }
          else if (uVar14 - uVar3 < 0x65) {
            if (uVar14 - uVar3 < 0xb) {
              iVar10 = uVar14 - 1;
            }
            else {
              iVar10 = uVar14 - 10;
            }
          }
          else {
            iVar10 = uVar14 - 100;
          }
          this_00->field_0096 = iVar10;
          st::external_00000080(local_48,st::mutable_c_string("%6d"),iVar10);
          puVar8 = this_00->field_007A;
          local_c = *(uint *)(puVar8 + 10);
          if (local_c == 0) {
            local_c = ((uint)puVar8[7] * *(int *)(puVar8 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                      *(int *)(puVar8 + 4);
          }
          uVar1 = this_00->field_0069;
          puVar17 = (undefined4 *)st::fn_006B4FA0((int *)puVar8);
          for (uVar14 = local_c >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar17 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar17 = puVar17 + 1;
          }
          for (uVar14 = local_c & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined1 *)puVar17 = uVar1;
            puVar17 = (undefined4 *)((int)puVar17 + 1);
          }
          puVar8 = this_00->field_007A;
          st::fn_00710A90(this_00->field_006A,(int)puVar8,0,0,0,*(int *)(puVar8 + 2),
                           *(int *)(puVar8 + 4));
          st::fn_007119C0(this_00->field_006A,local_48,-1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
          st::fn_0040146F(this_00);
        }
        if ((this_00->field_00A2 != this_00->field_00A3) ||
           (this_00->field_00A4 != this_00->field_00A5)) {
          this_00->field_00A2 = this_00->field_00A3;
          this_00->field_00A4 = this_00->field_00A5;
          st::fn_00403A62(this_00);
        }
      }
      break;
    case MESS_ID_CREATE:
      iVar10 = (DAT_0080874e != '\x03') + 0xb;
      local_10->field_002C = iVar10;
      local_10->field_0024 = iVar10;
      local_10->field_001C = iVar10;
      local_10->field_0058 = (-(uint)(DAT_0080874e != '\x03') & 0xffffffe5) + 0x50;
      local_10->field_0040 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffff9) + 0x24;
      if (DAT_0080874e == '\x03') {
        iVar10 = g_nWidth_00806730 + -0x107;
      }
      else {
        iVar10 = g_nWidth_00806730 + -0xd5;
      }
      local_10->field_0018 = iVar10;
      if (DAT_0080874e == '\x03') {
        iVar10 = g_nWidth_00806730 + -0x94;
      }
      else {
        iVar10 = g_nWidth_00806730 + -0x9e;
      }
      local_10->field_0020 = iVar10;
      if (DAT_0080874e == '\x03') {
        iVar10 = g_nWidth_00806730 + -0x44;
      }
      else {
        iVar10 = g_nWidth_00806730 + -0x5d;
      }
      local_10->field_0028 = iVar10;
      if (DAT_0080874e == '\x03') {
        iVar10 = g_nWidth_00806730 + -0x160;
      }
      else {
        iVar10 = g_nWidth_00806730 + -0x154;
      }
      local_10->field_0030 = iVar10;
      local_10->field_0038 = g_nWidth_00806730 + -99;
      local_10->field_003C = DAT_00806734 + -0x16;
      local_10->field_0069 = ((DAT_0080874e == '\x03') - 1U & 0xc3) + 0x3d;
      pcVar7 = (ccFntTy *)st::fn_0070CEB0(0x19d,g_cMf32_00806790,st::mutable_c_string("MONEY_FONT"),0);
      this_00->field_006A = pcVar7;
      pcVar7->field_0058 = 1;
      pcVar7->field_005C = 0;
      pcVar7 = (ccFntTy *)st::fn_0070CEB0(0x19d,g_cMf32_00806790,st::mutable_c_string("TIME_FONT"),0);
      this_00->field_006E = pcVar7;
      pcVar7->field_0058 = 1;
      pcVar7->field_005C = 0;
      puVar17 = nullptr;
      iVar16 = 0;
      iVar10 = 1;
      bVar15 = 0;
      uVar14 = 0xffffffff;
      text = st::fn_0040577C(st::mutable_c_string("IND_PNT"),0);
      puVar9 = st::fn_00709AF0
                         (PTR_00806794,CASE_B,text,uVar14,bVar15,iVar10,iVar16,puVar17);
      this_00->field_0082 = puVar9;
      puVar8 = PTR_0080679c + 0x14;
      iVar10 = 1;
      uVar12 = st::fn_006B4FE0((int)PTR_0080679c);
      puVar8 = (ushort *)
               st::fn_006B50C0(this_00->field_0040,this_00->field_0044,(uint)PTR_0080679c[7],uVar12,
                            (undefined4 *)puVar8,iVar10);
      this_00->field_0072 = puVar8;
      local_c = *(uint *)(puVar8 + 10);
      if (local_c == 0) {
        local_c = ((uint)puVar8[7] * *(int *)(puVar8 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(puVar8 + 4);
      }
      uVar1 = this_00->field_0069;
      puVar17 = (undefined4 *)st::fn_006B4FA0((int *)puVar8);
      iVar10 = 1;
      for (uVar14 = local_c >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar17 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar17 = puVar17 + 1;
      }
      for (uVar14 = local_c & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined1 *)puVar17 = uVar1;
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      }
      puVar8 = PTR_0080679c + 0x14;
      local_EAX_597 = st::fn_006B4FE0((int)PTR_0080679c);
      puVar8 = (ushort *)
               st::fn_006B50C0(this_00->field_0048,this_00->field_004C,(uint)PTR_0080679c[7],
                            local_EAX_597,(undefined4 *)puVar8,iVar10);
      this_00->field_0076 = puVar8;
      local_c = *(uint *)(puVar8 + 10);
      if (local_c == 0) {
        local_c = ((uint)puVar8[7] * *(int *)(puVar8 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(puVar8 + 4);
      }
      uVar1 = this_00->field_0069;
      puVar17 = (undefined4 *)st::fn_006B4FA0((int *)puVar8);
      iVar10 = 1;
      for (uVar14 = local_c >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar17 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar17 = puVar17 + 1;
      }
      for (uVar14 = local_c & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined1 *)puVar17 = uVar1;
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      }
      puVar8 = PTR_0080679c + 0x14;
      local_EAX_719 = st::fn_006B4FE0((int)PTR_0080679c);
      puVar8 = (ushort *)
               st::fn_006B50C0(this_00->field_0050,this_00->field_0054,(uint)PTR_0080679c[7],
                            local_EAX_719,(undefined4 *)puVar8,iVar10);
      this_00->field_007A = puVar8;
      local_c = *(uint *)(puVar8 + 10);
      if (local_c == 0) {
        local_c = ((uint)puVar8[7] * *(int *)(puVar8 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(puVar8 + 4);
      }
      uVar1 = this_00->field_0069;
      puVar17 = (undefined4 *)st::fn_006B4FA0((int *)puVar8);
      iVar10 = 1;
      for (uVar14 = local_c >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar17 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar17 = puVar17 + 1;
      }
      for (uVar14 = local_c & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined1 *)puVar17 = uVar1;
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      }
      puVar8 = PTR_0080679c + 0x14;
      local_EAX_841 = st::fn_006B4FE0((int)PTR_0080679c);
      puVar8 = (ushort *)
               st::fn_006B50C0(this_00->field_0060,this_00->field_0064,(uint)PTR_0080679c[7],
                            local_EAX_841,(undefined4 *)puVar8,iVar10);
      this_00->field_007E = puVar8;
      local_c = *(uint *)(puVar8 + 10);
      if (local_c == 0) {
        local_c = ((uint)puVar8[7] * *(int *)(puVar8 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(puVar8 + 4);
      }
      uVar1 = this_00->field_0069;
      puVar17 = (undefined4 *)st::fn_006B4FA0((int *)puVar8);
      for (uVar14 = local_c >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar17 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar17 = puVar17 + 1;
      }
      for (uVar14 = local_c & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined1 *)puVar17 = uVar1;
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      }
      memset(local_38, 0, 0x20); /* compiler bulk-zero initialization */
      iVar10 = 0;
      local_24 = this_00->field_0008;
      local_28 = 0x13;
      st::fn_006E6000(this_00,3,1,local_38);
      this_00->field_0086 = 1;
      this_00->field_008E = 1;
      this_00->field_0096 = 1;
      this_00->field_00A3 = 0;
      if (((g_allPlayers_007FA174 != nullptr) && (DAT_0080874d < 8)) &&
         ((g_playSystem_00802A38 == nullptr ||
          (g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0022 < 8)))) {
        uVar6 = st::fn_004041CE((uint)DAT_0080874d);
        st::fn_0040161D(this_00,DAT_0080874d,(uint)uVar6);
      }
      g_money_008016D4 = this_00;
      if (g_allPlayers_007FA174 != nullptr) {
        st::fn_00404B8D(DAT_0080874d);
      }
      break;
    case MESS_SHARED_0003:
      g_money_008016D4 = nullptr;
      uVar2 = local_10->field_0008;
      memset(local_38, 0, 0x20); /* compiler bulk-zero initialization */
      local_28 = 0x14;
      local_24 = uVar2;
      st::fn_006E6000(this_00,3,1,local_38);
      if (this_00->field_0072 != nullptr) {
        st::fn_006AB060(&this_00->field_0072);
      }
      if (this_00->field_0076 != nullptr) {
        st::fn_006AB060(&this_00->field_0076);
      }
      if (this_00->field_007A != nullptr) {
        st::fn_006AB060(&this_00->field_007A);
      }
      if (this_00->field_007E != nullptr) {
        st::fn_006AB060(&this_00->field_007E);
      }
      if (this_00->field_0082 != nullptr) {
        this_00->field_0082 = nullptr;
      }
      if (this_00->field_006A != nullptr) {
        st::fn_00710560((uint *)this_00->field_006A);
        this_00->field_006A = nullptr;
      }
      if (this_00->field_006E != nullptr) {
        st::fn_00710560((uint *)this_00->field_006E);
        this_00->field_006E = nullptr;
      }
      break;
    case MESS_SHARED_0005:
      st::fn_00403666(local_10);
      st::fn_00404949(this_00);
      st::fn_0040146F(this_00);
      st::fn_00403A62(this_00);
      st::fn_004033CD(this_00);
      break;
    case MESS_SHARED_0060:
      uVar14 = (uint)(message->arg1).words.low;
      local_c = (uint)(message->arg1).words.high;
      local_5 = 0;
      if (DAT_0080874e != '\x03') {
        if (((((int)uVar14 < local_10->field_0018) ||
             (local_10->field_0040 + local_10->field_0018 <= (int)uVar14)) ||
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
      if ((((int)uVar14 < local_10->field_0020) ||
          (local_10->field_0048 + local_10->field_0020 <= (int)uVar14)) ||
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
      if ((((int)uVar14 < local_10->field_0028) ||
          (local_10->field_0050 + local_10->field_0028 <= (int)uVar14)) ||
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
      if (((((int)uVar14 < local_10->field_0030) ||
           (local_10->field_0058 + local_10->field_0030 <= (int)uVar14)) ||
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
      local_58 = st::machine_word_boundary_cast<int>(local_10->field_0038 + -0x1e);
      local_50 = st::machine_word_boundary_cast<int>(local_10->field_0060 + 0x23);
      local_54 = st::machine_word_boundary_cast<int>(local_10->field_003C + -3);
      local_4c = st::machine_word_boundary_cast<int>(local_10->field_0064 + 6);
      if ((((int)uVar14 < local_58) || (local_50 + local_58 <= (int)uVar14)) ||
         (((int)local_c < local_54 || (local_4c + local_54 <= (int)local_c)))) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      MVar11 = CASE_5;
      if (!bVar5) {
        MVar11 = local_5;
      }
      if (local_10->field_0068 != MVar11) {
        if (local_10->field_0068 != 0) {
          STPiece<16,4>(local_78) = 0x4202;
          st::fn_00403AF3(local_10,&local_78);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)g_cursorClass_00802A30->field_0000)(&local_78);
        }
        this_00->field_0068 = MVar11;
        if (MVar11 != 0) {
          STPiece<16,4>(local_78) = 0x4201;
          st::fn_00403AF3(this_00,&local_78);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)g_cursorClass_00802A30->field_0000)(&local_78);
        }
      }
    }
    g_currentExceptionFrame = local_bc.previous;
    iVar7 = st::fn_006E5FD0(this_00,message);
    return iVar7;
  }
  g_currentExceptionFrame = local_bc.previous;
  iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\money.cpp"),0x12a,0,local_EAX_48,
                             st::mutable_c_string("%s"),"MoneyTy::GetMessage");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(local_EAX_48,0,st::mutable_c_string("E:\\__titans\\Andrey\\money.cpp"),0x12a);
  return 0xffff;
}

