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
  byte uVar1;
  uint uVar2;
  bool bVar4;
  MoneyTy *this_00;
  ushort uVar5;
  int local_EAX_48;
  ccFntTy *pcVar6;
  LPSTR text;
  ushort *puVar9;
  int uVar12;
  ushort *puVar7;
  int local_EAX_597;
  int local_EAX_719;
  int local_EAX_841;
  uint uVar13;
  int iVar7;
  int iVar9;
  int iVar8;
  MoneyTy_field_0068State MVar9;
  uint uVar10;
  byte bVar11;
  int iVar12;
  char *text_00;
  uint *puVar13;
  uint uVar14;
  InternalExceptionFrame local_bc;
  STMessage local_78;
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
        uVar10 = this_00->field_0086;
        uVar2 = this_00->field_008A;
        if (uVar10 != uVar2) {
          if (uVar10 < uVar2) {
            if (uVar2 - uVar10 < 0x65) {
              if (uVar2 - uVar10 < 0xb) {
                iVar8 = uVar10 + 1;
              }
              else {
                iVar8 = uVar10 + 10;
              }
            }
            else {
              iVar8 = uVar10 + 100;
            }
          }
          else if (uVar10 - uVar2 < 0x65) {
            if (uVar10 - uVar2 < 0xb) {
              iVar8 = uVar10 - 1;
            }
            else {
              iVar8 = uVar10 - 10;
            }
          }
          else {
            iVar8 = uVar10 - 100;
          }
          this_00->field_0086 = iVar8;
          if (DAT_0080874e == '\x03') {
            uVar14 = this_00->field_0086;
            text_00 = "%6d";
          }
          else {
            uVar14 = this_00->field_0086;
            text_00 = "%5d";
          }
          /* ST_CALLSITE[0052C666]: CALL EDI */
          st::external_00000080(local_18,text_00,uVar14);
          puVar7 = this_00->field_0072;
          local_c = *(uint *)(puVar7 + 10);
          if (local_c == 0) {
            local_c = ((uint)puVar7[7] * *(int *)(puVar7 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                      *(int *)(puVar7 + 4);
          }
          uVar1 = this_00->field_0069;
          puVar13 = (undefined4 *)st::fn_006B4FA0((int *)puVar7);
          for (uVar10 = local_c >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar13 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar13 = puVar13 + 1;
          }
          for (uVar10 = local_c & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined1 *)puVar13 = uVar1;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
          }
          puVar7 = this_00->field_0072;
          st::fn_00710A90(this_00->field_006A,(int)puVar7,0,0,0,*(int *)(puVar7 + 2),
                           *(int *)(puVar7 + 4));
          st::fn_007119C0(this_00->field_006A,local_18,-1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5);
          /* ST_CALLSITE[0052C6F7]: CALL 0x00403666; direct=00403666 MoneyTy::sub_0052B8A0 */
          st::fn_00403666(this_00);
        }
        uVar10 = this_00->field_008E;
        uVar2 = this_00->field_0092;
        if (uVar10 != uVar2) {
          if (uVar10 < uVar2) {
            if (uVar2 - uVar10 < 0x65) {
              if (uVar2 - uVar10 < 0xb) {
                iVar8 = uVar10 + 1;
              }
              else {
                iVar8 = uVar10 + 10;
              }
            }
            else {
              iVar8 = uVar10 + 100;
            }
          }
          else if (uVar10 - uVar2 < 0x65) {
            if (uVar10 - uVar2 < 0xb) {
              iVar8 = uVar10 - 1;
            }
            else {
              iVar8 = uVar10 - 10;
            }
          }
          else {
            iVar8 = uVar10 - 100;
          }
          this_00->field_008E = iVar8;
          /* ST_CALLSITE[0052C75C]: CALL EDI */
          st::external_00000080(local_40,st::mutable_c_string("%6d"),iVar8);
          puVar7 = this_00->field_0076;
          local_c = *(uint *)(puVar7 + 10);
          if (local_c == 0) {
            local_c = ((uint)puVar7[7] * *(int *)(puVar7 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                      *(int *)(puVar7 + 4);
          }
          uVar1 = this_00->field_0069;
          puVar13 = (undefined4 *)st::fn_006B4FA0((int *)puVar7);
          for (uVar10 = local_c >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar13 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar13 = puVar13 + 1;
          }
          for (uVar10 = local_c & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined1 *)puVar13 = uVar1;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
          }
          puVar7 = this_00->field_0076;
          st::fn_00710A90(this_00->field_006A,(int)puVar7,0,0,0,*(int *)(puVar7 + 2),
                           *(int *)(puVar7 + 4));
          st::fn_007119C0(this_00->field_006A,local_40,-1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 4);
          /* ST_CALLSITE[0052C7ED]: CALL 0x00404949; direct=00404949 MoneyTy::sub_0052B8F0 */
          st::fn_00404949(this_00);
        }
        uVar10 = this_00->field_0096;
        uVar2 = this_00->field_009A;
        if (uVar10 != uVar2) {
          if (uVar10 < uVar2) {
            if (uVar2 - uVar10 < 0x65) {
              if (uVar2 - uVar10 < 0xb) {
                iVar8 = uVar10 + 1;
              }
              else {
                iVar8 = uVar10 + 10;
              }
            }
            else {
              iVar8 = uVar10 + 100;
            }
          }
          else if (uVar10 - uVar2 < 0x65) {
            if (uVar10 - uVar2 < 0xb) {
              iVar8 = uVar10 - 1;
            }
            else {
              iVar8 = uVar10 - 10;
            }
          }
          else {
            iVar8 = uVar10 - 100;
          }
          this_00->field_0096 = iVar8;
          /* ST_CALLSITE[0052C852]: CALL EDI */
          st::external_00000080(local_48,st::mutable_c_string("%6d"),iVar8);
          puVar7 = this_00->field_007A;
          local_c = *(uint *)(puVar7 + 10);
          if (local_c == 0) {
            local_c = ((uint)puVar7[7] * *(int *)(puVar7 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                      *(int *)(puVar7 + 4);
          }
          uVar1 = this_00->field_0069;
          puVar13 = (undefined4 *)st::fn_006B4FA0((int *)puVar7);
          for (uVar10 = local_c >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar13 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar13 = puVar13 + 1;
          }
          for (uVar10 = local_c & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined1 *)puVar13 = uVar1;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
          }
          puVar7 = this_00->field_007A;
          st::fn_00710A90(this_00->field_006A,(int)puVar7,0,0,0,*(int *)(puVar7 + 2),
                           *(int *)(puVar7 + 4));
          st::fn_007119C0(this_00->field_006A,local_48,-1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
          /* ST_CALLSITE[0052C8E4]: CALL 0x0040146f; direct=0040146F MoneyTy::sub_0052B940 */
          st::fn_0040146F(this_00);
        }
        if ((this_00->field_00A2 != this_00->field_00A3) ||
           (this_00->field_00A4 != this_00->field_00A5)) {
          this_00->field_00A2 = this_00->field_00A3;
          this_00->field_00A4 = this_00->field_00A5;
          /* ST_CALLSITE[0052C91D]: CALL 0x00403a62; direct=00403A62 MoneyTy::sub_0052B990 */
          st::fn_00403A62(this_00);
        }
      }
      break;
    case MESS_ID_CREATE:
      iVar8 = (DAT_0080874e != '\x03') + 0xb;
      local_10->field_002C = iVar8;
      local_10->field_0024 = iVar8;
      local_10->field_001C = iVar8;
      local_10->field_0058 = (-(uint)(DAT_0080874e != '\x03') & 0xffffffe5) + 0x50;
      local_10->field_0040 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffff9) + 0x24;
      if (DAT_0080874e == '\x03') {
        iVar8 = g_nWidth_00806730 + -0x107;
      }
      else {
        iVar8 = g_nWidth_00806730 + -0xd5;
      }
      local_10->field_0018 = iVar8;
      if (DAT_0080874e == '\x03') {
        iVar8 = g_nWidth_00806730 + -0x94;
      }
      else {
        iVar8 = g_nWidth_00806730 + -0x9e;
      }
      local_10->field_0020 = iVar8;
      if (DAT_0080874e == '\x03') {
        iVar8 = g_nWidth_00806730 + -0x44;
      }
      else {
        iVar8 = g_nWidth_00806730 + -0x5d;
      }
      local_10->field_0028 = iVar8;
      if (DAT_0080874e == '\x03') {
        iVar8 = g_nWidth_00806730 + -0x160;
      }
      else {
        iVar8 = g_nWidth_00806730 + -0x154;
      }
      local_10->field_0030 = iVar8;
      local_10->field_0038 = g_nWidth_00806730 + -99;
      local_10->field_003C = DAT_00806734 + -0x16;
      local_10->field_0069 = ((DAT_0080874e == '\x03') - 1U & 0xc3) + 0x3d;
      /* ST_CALLSITE[0052C06D]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new */
      pcVar6 = (ccFntTy *)st::fn_0070CEB0(0x19d,g_cMf32_00806790,st::mutable_c_string("MONEY_FONT"),0);
      this_00->field_006A = pcVar6;
      pcVar6->field_0058 = 1;
      pcVar6->field_005C = 0;
      /* ST_CALLSITE[0052C092]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new */
      pcVar6 = (ccFntTy *)st::fn_0070CEB0(0x19d,g_cMf32_00806790,st::mutable_c_string("TIME_FONT"),0);
      this_00->field_006E = pcVar6;
      pcVar6->field_0058 = 1;
      pcVar6->field_005C = 0;
      puVar13 = nullptr;
      iVar12 = 0;
      iVar8 = 1;
      bVar11 = 0;
      uVar10 = 0xffffffff;
      text = st::fn_0040577C(st::mutable_c_string("IND_PNT"),0);
      puVar9 = st::fn_00709AF0
                         (PTR_00806794,CASE_B,text,uVar10,bVar11,iVar8,iVar12,puVar13);
      this_00->field_0082 = puVar9;
      puVar7 = PTR_0080679c + 0x14;
      iVar8 = 1;
      uVar12 = st::fn_006B4FE0(PTR_0080679c);
      puVar7 = (ushort *)
               st::fn_006B50C0(this_00->field_0040,this_00->field_0044,(uint)PTR_0080679c[7],uVar12,
                            (undefined4 *)puVar7,iVar8);
      this_00->field_0072 = puVar7;
      local_c = *(uint *)(puVar7 + 10);
      if (local_c == 0) {
        local_c = ((uint)puVar7[7] * *(int *)(puVar7 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(puVar7 + 4);
      }
      uVar1 = this_00->field_0069;
      puVar13 = (undefined4 *)st::fn_006B4FA0((int *)puVar7);
      iVar8 = 1;
      for (uVar10 = local_c >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar13 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar13 = puVar13 + 1;
      }
      for (uVar10 = local_c & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar13 = uVar1;
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      puVar7 = PTR_0080679c + 0x14;
      local_EAX_597 = st::fn_006B4FE0(PTR_0080679c);
      puVar7 = (ushort *)
               st::fn_006B50C0(this_00->field_0048,this_00->field_004C,(uint)PTR_0080679c[7],
                            local_EAX_597,(undefined4 *)puVar7,iVar8);
      this_00->field_0076 = puVar7;
      local_c = *(uint *)(puVar7 + 10);
      if (local_c == 0) {
        local_c = ((uint)puVar7[7] * *(int *)(puVar7 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(puVar7 + 4);
      }
      uVar1 = this_00->field_0069;
      puVar13 = (undefined4 *)st::fn_006B4FA0((int *)puVar7);
      iVar8 = 1;
      for (uVar10 = local_c >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar13 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar13 = puVar13 + 1;
      }
      for (uVar10 = local_c & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar13 = uVar1;
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      puVar7 = PTR_0080679c + 0x14;
      local_EAX_719 = st::fn_006B4FE0(PTR_0080679c);
      puVar7 = (ushort *)
               st::fn_006B50C0(this_00->field_0050,this_00->field_0054,(uint)PTR_0080679c[7],
                            local_EAX_719,(undefined4 *)puVar7,iVar8);
      this_00->field_007A = puVar7;
      local_c = *(uint *)(puVar7 + 10);
      if (local_c == 0) {
        local_c = ((uint)puVar7[7] * *(int *)(puVar7 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(puVar7 + 4);
      }
      uVar1 = this_00->field_0069;
      puVar13 = (undefined4 *)st::fn_006B4FA0((int *)puVar7);
      iVar8 = 1;
      for (uVar10 = local_c >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar13 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar13 = puVar13 + 1;
      }
      for (uVar10 = local_c & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar13 = uVar1;
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      puVar7 = PTR_0080679c + 0x14;
      local_EAX_841 = st::fn_006B4FE0(PTR_0080679c);
      puVar7 = (ushort *)
               st::fn_006B50C0(this_00->field_0060,this_00->field_0064,(uint)PTR_0080679c[7],
                            local_EAX_841,(undefined4 *)puVar7,iVar8);
      this_00->field_007E = puVar7;
      local_c = *(uint *)(puVar7 + 10);
      if (local_c == 0) {
        local_c = ((uint)puVar7[7] * *(int *)(puVar7 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                  *(int *)(puVar7 + 4);
      }
      uVar1 = this_00->field_0069;
      puVar13 = (undefined4 *)st::fn_006B4FA0((int *)puVar7);
      for (uVar10 = local_c >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar13 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        puVar13 = puVar13 + 1;
      }
      for (uVar10 = local_c & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar13 = uVar1;
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      memset(local_38, 0, 0x20); /* compiler bulk-zero initialization */
      iVar8 = 0;
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
        uVar5 = st::fn_004041CE((uint)DAT_0080874d);
        /* ST_CALLSITE[0052C344]: CALL 0x0040161d; direct=0040161D MoneyTy::sub_0052BDA0 */
        st::fn_0040161D(this_00,DAT_0080874d,(uint)uVar5);
      }
      g_money_008016D4 = this_00;
      if (g_allPlayers_007FA174 != nullptr) {
        st::fn_00404B8D(DAT_0080874d);
      }
      break;
    case MESS_SHARED_0003:
      g_money_008016D4 = nullptr;
      uVar14 = local_10->field_0008;
      memset(local_38, 0, 0x20); /* compiler bulk-zero initialization */
      local_28 = 0x14;
      local_24 = uVar14;
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
      /* ST_CALLSITE[0052C5A8]: CALL 0x00403666; direct=00403666 MoneyTy::sub_0052B8A0 */
      st::fn_00403666(local_10);
      /* ST_CALLSITE[0052C5AF]: CALL 0x00404949; direct=00404949 MoneyTy::sub_0052B8F0 */
      st::fn_00404949(this_00);
      /* ST_CALLSITE[0052C5B6]: CALL 0x0040146f; direct=0040146F MoneyTy::sub_0052B940 */
      st::fn_0040146F(this_00);
      /* ST_CALLSITE[0052C5BD]: CALL 0x00403a62; direct=00403A62 MoneyTy::sub_0052B990 */
      st::fn_00403A62(this_00);
      /* ST_CALLSITE[0052C5C4]: CALL 0x004033cd; direct=004033CD MoneyTy::sub_0052BBE0 */
      st::fn_004033CD(this_00);
      break;
    case MESS_SHARED_0060:
      uVar10 = (uint)(message->arg1).words.low;
      local_c = (uint)(message->arg1).words.high;
      local_5 = 0;
      if (DAT_0080874e != '\x03') {
        if (((((int)uVar10 < local_10->field_0018) ||
             (local_10->field_0040 + local_10->field_0018 <= (int)uVar10)) ||
            ((int)local_c < local_10->field_001C)) ||
           (local_10->field_0044 + local_10->field_001C <= (int)local_c)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          local_5 = CASE_1;
        }
      }
      if ((((int)uVar10 < local_10->field_0020) ||
          (local_10->field_0048 + local_10->field_0020 <= (int)uVar10)) ||
         (((int)local_c < local_10->field_0024 ||
          (local_10->field_004C + local_10->field_0024 <= (int)local_c)))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_5 = CASE_2;
      }
      if ((((int)uVar10 < local_10->field_0028) ||
          (local_10->field_0050 + local_10->field_0028 <= (int)uVar10)) ||
         (((int)local_c < local_10->field_002C ||
          (local_10->field_0054 + local_10->field_002C <= (int)local_c)))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_5 = CASE_3;
      }
      if (((((int)uVar10 < local_10->field_0030) ||
           (local_10->field_0058 + local_10->field_0030 <= (int)uVar10)) ||
          ((int)local_c < local_10->field_0034)) ||
         (local_10->field_005C + local_10->field_0034 <= (int)local_c)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_5 = CASE_4;
      }
      local_58 = st::machine_word_boundary_cast<int>(local_10->field_0038 + -0x1e);
      local_50 = st::machine_word_boundary_cast<int>(local_10->field_0060 + 0x23);
      local_54 = st::machine_word_boundary_cast<int>(local_10->field_003C + -3);
      local_4c = st::machine_word_boundary_cast<int>(local_10->field_0064 + 6);
      if ((((int)uVar10 < local_58) || (local_50 + local_58 <= (int)uVar10)) ||
         (((int)local_c < local_54 || (local_4c + local_54 <= (int)local_c)))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      MVar9 = CASE_5;
      if (!bVar4) {
        MVar9 = local_5;
      }
      if (local_10->field_0068 != MVar9) {
        if (local_10->field_0068 != 0) {
          local_78.id = MESS_CURSORCLASSTY_4202;
          /* ST_CALLSITE[0052C563]: CALL 0x00403af3; direct=00403AF3 MoneyTy::sub_0052B760 */
          st::fn_00403AF3(local_10,(AnonShape_0052B760_30F4E0D5 *)&local_78);
          /* ST_CALLSITE[0052C574]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
          g_cursorClass_00802A30->GetMessage(&local_78);
        }
        this_00->field_0068 = MVar9;
        if (MVar9 != 0) {
          local_78.id = MESS_CURSORCLASSTY_4201;
          /* ST_CALLSITE[0052C58E]: CALL 0x00403af3; direct=00403AF3 MoneyTy::sub_0052B760 */
          st::fn_00403AF3(this_00,(AnonShape_0052B760_30F4E0D5 *)&local_78);
          /* ST_CALLSITE[0052C59F]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
          g_cursorClass_00802A30->GetMessage(&local_78);
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

