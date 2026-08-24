#include "st/generated.hpp"
// Generated translation unit: source/original/Igor/to_crab.cpp

// 00578560 STCrabC::SetSprRange
#line 4 "decomp/ST.exe/functions/00578560/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_crab.cpp
   STCrabC::SetSprRange */

void __thiscall st::fn_00578560(STCrabC *this,uint param_1)

{
  int iVar2;
  int iVar3;

  if (7 < param_1) {
    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\to_crab.cpp"),0x7a,0,0,st::mutable_c_string("%s"),
                               "STCrabC::SetSprRange - Bad direction");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    param_1 = 0;
  }
  iVar3 = param_1 * 6;
  this->field_006C = (short)iVar3;
  st::fn_00401EBA(&this->field_01D5,0xe,iVar3,iVar3 + 5,'\0');
  return;
}

// 00578630 STCrabC::GetMessage
#line 4 "decomp/ST.exe/functions/00578630/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_crab.cpp
   STCrabC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00405871|00578630; family_names=STCrabC::GetMessage; ret4=8;
   direct_offsets={10:2,14:2,18:2,1c:0}

   [STSwitchEnumApplier] Switch target field_0279 uses
   /SubmarineTitans/Recovered/Enums/STCrabC_field_0279State. Cases:
   CASE_F2=242;CASE_F3=243;CASE_F4=244;CASE_F5=245;CASE_F6=246;CASE_F7=247

   [STSwitchEnumApplier] Switch target field_0239 uses
   /SubmarineTitans/Recovered/Enums/STCrabC_field_0239State. Cases: CASE_0=0;CASE_2=2;CASE_3=3 */

int __thiscall st::fn_00578630(STCrabC *this,STMessage *message)

{
  STMessageId SVar1;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  STCrabC *this_00;
  short sVar6;
  int local_EAX_70;
  int iVar7;
  STCrabC_field_0239State SVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte *puVar11;
  byte *pbVar12;
  byte *puVar13;
  AnonShape_00578630_C5BC66E1 *pAVar14;
  byte *pbVar15;
  InternalExceptionFrame local_80;
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ushort *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  STCrabC *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  AnonShape_00578630_C5BC66E1 *local_c;
  uint local_8;

  if ((this->field_0239 == CASE_3) && (message->id != MESS_SHARED_0003)) {
    return 0;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_1c = this;
  local_EAX_70 = st::fn_0072D7F0(local_80.jumpBuffer,0);
  this_00 = local_1c;
  if (local_EAX_70 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\to_crab.cpp"),0x1b7,0,local_EAX_70,
                               st::mutable_c_string("%s"),"STCrabC::GetMessage");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_70,0,st::mutable_c_string("E:\\__titans\\Igor\\to_crab.cpp"),0x1b8);
    return 0xffff;
  }
  /* ST_CALLSITE[00578691]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  st::fn_00404F07((STSprGameObjC *)local_1c,message);
  SVar1 = message->id;
  if (MESS_SHARED_010F < SVar1) {
    if (SVar1 != MESS_HITKILL) {
      if (SVar1 != MESS_SHARED_440F) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      puVar11 = (byte *)(&this_00->field_01D5);
      if (DAT_0080732c != 0) {
        st::fn_00404854(puVar11,0xe);
        st::fn_00404854(puVar11,0xd);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      /* ST_CALLSITE[00578E69]: CALL 0x00402761; direct=00402761 STT3DSprC::sub_004AD070 */
      st::fn_00402761((STT3DSprC *)puVar11,0xe);
      /* ST_CALLSITE[00578E72]: CALL 0x00402761; direct=00402761 STT3DSprC::sub_004AD070 */
      st::fn_00402761((STT3DSprC *)puVar11,0xd);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    uVar10 = st::fn_004052CC((STT3DSprC *)&this_00->field_01D5);
    st::fn_006EAB60((void *)this_00->field_0211,uVar10);
    goto LAB_00578ea2;
  }
  if (SVar1 == MESS_SHARED_010F) {
    /* ST_CALLSITE[00578CA8]: CALL 0x004018d4; direct=004018D4 STT3DSprC::SaveSpr */
    local_14 = (byte *)st::fn_004018D4((STT3DSprC *)&this_00->field_01D5,&local_8);
    /* ST_CALLSITE[00578CB6]: CALL 0x0040119a; direct=0040119A STAllPlayersC::SaveGObjData */
    local_18 = (byte *)st::fn_0040119A((STAllPlayersC *)this_00,(int *)&local_10);
    local_c = static_cast<AnonShape_00578630_C5BC66E1 *>(st::fn_006AAC70(local_10 + 0x68 + local_8));
    if (local_14 == nullptr) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (local_c == nullptr) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    puVar11 = (byte *)&this_00->field_0x259;
    pAVar14 = local_c;
    memmove(pAVar14, puVar11, 0x28); /* compiler REP MOVS byte copy */
    *(undefined4 *)&local_c->field_0xc = 2;
    local_c->field_0028 = this_00->field_0235;
    local_c->field_002C = this_00->field_0239;
    local_c->field_0050 = this_00->field_0041;
    local_c->field_0052 = this_00->field_0043;
    local_c->field_0054 = this_00->field_0045;
    local_c->field_0034 = this_00->field_0231;
    local_c->field_0048 = this_00->field_0245;
    local_c->field_004C = this_00->field_024D;
    local_c->field_0038 = this_00->field_0241;
    local_c->field_003C = this_00->field_0249;
    local_c->field_0040 = this_00->field_0251;
    local_c->field_0044 = this_00->field_0255;
    local_c->field_0056 = this_00->field_004E;
    local_c->field_0058 = this_00->field_0050;
    local_c->field_005A = this_00->field_006C;
    local_c->field_0030 = this_00->field_023D;
    *(undefined4 *)&local_c->field_0x5c = 0;
    local_c->field_0060 = local_8;
    pbVar12 = local_14;
    pAVar14 = local_c + 1;
    for (uVar10 = local_8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      bVar3 = pbVar12[1];
      bVar4 = pbVar12[2];
      bVar5 = pbVar12[3];
      pAVar14->field_0x0 = pbVar12[0];
      pAVar14->field_0x1 = bVar3;
      pAVar14->field_0x2 = bVar4;
      pAVar14->field_0x3 = bVar5;
      pbVar12 = pbVar12 + 4;
      pAVar14 = (AnonShape_00578630_C5BC66E1 *)&pAVar14->field_0x4;
    }
    for (uVar10 = local_8 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(byte *)pAVar14 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      pAVar14 = (AnonShape_00578630_C5BC66E1 *)&pAVar14->field_0x1;
    }
    *(uint *)(&local_c[1].field_0x0 + local_8) = local_10;
    pbVar12 = local_18;
    pbVar15 = &local_c[1].field_0x4 + local_8;
    memmove(pbVar15, pbVar12, local_10); /* compiler REP MOVS byte copy */
    /* ST_CALLSITE[00578DF2]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
    st::fn_004025F9
              (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_c,
               local_10 + 0x68 + local_8);
    st::fn_006AB060(&local_14);
    st::fn_006AB060(&local_18);
    st::fn_006AB060(&local_c);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (SVar1 == MESS_ID_NONE) {
    if (this_00->field_0239 == CASE_2) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    st::fn_00405BD2((AnonShape_00579350_2E014C47 *)this_00);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (SVar1 != MESS_ID_CREATE) {
    if (SVar1 != MESS_SHARED_0003) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    st::fn_00403189(this_00->field_0018);
    st::fn_004021D5((STT3DSprC *)&this_00->field_01D5);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  local_20 = (undefined4 *)(message->arg0).u32;
  if ((uint)local_20[3] < 2) {
    this_00->field_0239 = CASE_3;
    uVar10 = g_playSystem_00802A38->field_00E4;
    this_00->field_023D = 0;
    this_00->field_0231 = 0;
    this_00->field_0235 = uVar10 - 3;
    puVar11 = (byte *)((message->arg0).ptr);
    puVar13 = (byte *)&this_00->field_0x259;
    memmove(puVar13, puVar11, 0x28); /* compiler REP MOVS byte copy */
    iVar9 = 0;
    /* ST_CALLSITE[00578852]: CALL 0x00405a01; direct=00405A01 STCrabC::Bad */
    st::fn_00405A01(this_00);
    if (((((this_00->field_026D < 0) || ((int)g_worldGrid.sizeX <= this_00->field_026D)) ||
         (this_00->field_0271 < 0)) ||
        (((int)g_worldGrid.sizeY <= this_00->field_0271 || (iVar9 = this_00->field_0275, iVar9 < 0))
        )) || ((g_worldGrid.sizeZ <= iVar9 ||
               (iVar7 = st::fn_00404D3B((short)this_00->field_026D,(short)this_00->field_0271,
                                           (short)iVar9), iVar7 == 0)))) {
      st::fn_00404CB9(this_00);
      this_00->field_0239 = CASE_2;
    }
    else {
      switch(this_00->field_0279) {
      case CASE_F2:
        /* ST_CALLSITE[00578904]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,st::mutable_c_string("crab1l"),
                           CASE_1D);
        if (iVar9 != 0) {
          st::fn_006A5E40
                    (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\to_crab.cpp"),0xd2);
        }
        /* ST_CALLSITE[00578937]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xd,PTR_0080676c,st::mutable_c_string("crab1l_m"),
                           CASE_1D);
        if (iVar9 != 0) {
          iVar9 = 0xd5;
cf_error_exit_00578B5D:
          st::fn_006A5E40
                    (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\to_crab.cpp"),iVar9);
        }
        break;
      case CASE_F3:
        /* ST_CALLSITE[00578971]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,st::mutable_c_string("crab2l"),
                           CASE_1D);
        if (iVar9 != 0) {
          st::fn_006A5E40
                    (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\to_crab.cpp"),0xda);
        }
        /* ST_CALLSITE[005789A3]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xd,PTR_0080676c,st::mutable_c_string("crab2l_m"),
                           CASE_1D);
        if (iVar9 != 0) {
          iVar9 = 0xdd;
          goto cf_error_exit_00578B5D;
        }
        break;
      case CASE_F4:
        /* ST_CALLSITE[005789DE]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,st::mutable_c_string("crab1b"),
                           CASE_1D);
        if (iVar9 != 0) {
          st::fn_006A5E40
                    (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\to_crab.cpp"),0xe2);
        }
        /* ST_CALLSITE[00578A10]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xd,PTR_0080676c,st::mutable_c_string("crab1b_m"),
                           CASE_1D);
        if (iVar9 != 0) {
          iVar9 = 0xe5;
          goto cf_error_exit_00578B5D;
        }
        break;
      case CASE_F5:
        /* ST_CALLSITE[00578A3E]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,st::mutable_c_string("crab2b"),
                           CASE_1D);
        if (iVar9 != 0) {
          st::fn_006A5E40
                    (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\to_crab.cpp"),0xea);
        }
        /* ST_CALLSITE[00578A71]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xd,PTR_0080676c,st::mutable_c_string("crab2b_m"),
                           CASE_1D);
        if (iVar9 != 0) {
          iVar9 = 0xed;
          goto cf_error_exit_00578B5D;
        }
        break;
      case CASE_F6:
        /* ST_CALLSITE[00578B11]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,st::mutable_c_string("langus2"),
                           CASE_1D);
        if (iVar9 != 0) {
          st::fn_006A5E40
                    (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\to_crab.cpp"),0xfa);
        }
        /* ST_CALLSITE[00578B43]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xd,PTR_0080676c,st::mutable_c_string("langus2m"),
                           CASE_1D);
        if (iVar9 != 0) {
          iVar9 = 0xfd;
          goto cf_error_exit_00578B5D;
        }
        break;
      case CASE_F7:
        /* ST_CALLSITE[00578AAB]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,st::mutable_c_string("langus1"),
                           CASE_1D);
        if (iVar9 != 0) {
          st::fn_006A5E40
                    (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\to_crab.cpp"),0xf2);
        }
        /* ST_CALLSITE[00578ADD]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xd,PTR_0080676c,st::mutable_c_string("langus1m"),
                           CASE_1D);
        if (iVar9 != 0) {
          iVar9 = 0xf5;
          goto cf_error_exit_00578B5D;
        }
      }
      puVar11 = (byte *)(&this_00->field_01D5);
      /* ST_CALLSITE[00578B6E]: CALL 0x00403afd; direct=00403AFD STT3DSprC::sub_004ACF50 */
      st::fn_00403AFD((STT3DSprC *)puVar11,'\r');
      st::fn_00405AA6(puVar11,'\x0e');
      st::fn_00405AA6(puVar11,'\r');
      /* ST_CALLSITE[00578B95]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      st::fn_00405240((STT3DSprC *)puVar11,0xe,g_playSystem_00802A38->field_00E4);
      /* ST_CALLSITE[00578BAB]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      st::fn_00405240((STT3DSprC *)puVar11,0xd,g_playSystem_00802A38->field_00E4);
      sVar6 = (short)this_00->field_0275 * 200;
      this_00->field_0041 = (short)this_00->field_026D * 0xc9 + 100;
      this_00->field_0043 = (short)this_00->field_0271 * 0xc9 + 100;
      this_00->field_0045 = sVar6 + 100;
      if (((int)this_00->field_0279 < 0xf6) || (0xf7 < (int)this_00->field_0279)) {
        sVar6 = sVar6 + 0x28;
      }
      else {
        sVar6 = sVar6 + 0x82;
      }
      this_00->field_0045 = sVar6;
      this_00->field_006C =
           (short)(this_00->field_027D / 0x2d) - (short)(this_00->field_027D / -0x4c000000);
      SVar7 = st::fn_0040104B(this_00,st::pointer_boundary_cast<short *>(&this_00->field_004E),st::pointer_boundary_cast<short *>(&this_00->field_0050),
                                 &this_00->field_006C);
      this_00->field_0239 = SVar7;
    }
  }
  else if (local_20[3] == 2) {
    puVar11 = (byte *)(local_20);
    puVar13 = (byte *)&this_00->field_0x259;
    memmove(puVar13, puVar11, 0x28); /* compiler REP MOVS byte copy */
    local_8 = local_20[0x18];
    /* ST_CALLSITE[00578720]: CALL 0x0040551f; direct=0040551F STAllPlayersC::RestoreGObjData */
    st::fn_0040551F
              ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x68 + (int)local_20));
    puVar11 = (byte *)(local_20);
    this_00->field_0239 = local_20[0xb];
    this_00->field_0235 = local_20[10];
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_0041 = *(undefined2 *)(local_20 + 0x14);
    this_00->field_0043 = STField<undefined2>(local_20,0x52);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_0045 = *(undefined2 *)(local_20 + 0x15);
    this_00->field_0231 = local_20[0xd];
    this_00->field_0245 = local_20[0x12];
    this_00->field_024D = local_20[0x13];
    this_00->field_0241 = local_20[0xe];
    this_00->field_0249 = local_20[0xf];
    this_00->field_0251 = local_20[0x10];
    this_00->field_0255 = local_20[0x11];
    this_00->field_004E = STField<undefined2>(local_20,0x56);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_0050 = *(undefined2 *)(local_20 + 0x16);
    this_00->field_006C = STField<undefined2>(local_20,0x5a);
    this_00->field_023D = local_20[0xc];
    local_3c = st::fn_006AAC70(0x44);
    if (local_3c != nullptr) {
      iVar9 = 0;
      do {
        *(int **)(iVar9 + (int)local_3c) = PTR_0080676c;
        iVar9 = iVar9 + 4;
      } while (iVar9 < 0x44);
      local_38 = 0;
      local_34 = 0;
      local_30 = PTR_008073cc;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      /* ST_CALLSITE[00578803]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
      st::fn_00404CA5
                ((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,
                 (AnonShape_004AD790_77673787 *)(puVar11 + 0x19));
      st::fn_006AB060(&local_3c);
    }
  }
  if (this_00->field_0239 == CASE_3) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  iVar9 = st::fn_004010C3((int)this_00);
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
LAB_00578ea2:
  st::fn_00404CB9(this_00);
  this_00->field_0239 = CASE_2;
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

// 00579170 STCrabC::Bad
#line 4 "decomp/ST.exe/functions/00579170/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_crab.cpp
   STCrabC::Bad

   [STPrototypeApplier] Propagated return.
   Evidence: 00579170 returns return of FUN_004961b0 @ 0057927A | 00579170 returns return of
   FUN_004961b0 @ 00579284
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=bool __thiscall
   Bad(STCrabC * this) Evidence: every machine RET purges exactly 0 explicit stack bytes; current
   signature describes 4; removed trailing parameter slots have no listing references;
   ret_sites=0057927A RET | 00579284 RET */

bool __thiscall st::fn_00579170(STCrabC *this)

{
  byte uVar2;
  int iVar3;
  int iVar4;
  int local_EAX_200;
  int iVar5;
  int iVar6;
  int iVar7;

  iVar7 = (int)g_worldGrid.sizeX;
  iVar6 = (int)g_worldGrid.sizeY;
  if ((((iVar7 + -1 < this->field_026D) || (this->field_026D < 0)) ||
      (iVar6 + -1 < this->field_0271)) || (this->field_0271 < 0)) {
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\to_crab.cpp"),0x202,0,0,st::mutable_c_string("%s"),
                               "STCrabC::Bad birth coordinate - adjusting");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
      return (bool)uVar2;
    }
    this->field_026D = iVar7 + -1 >> 1;
    this->field_0271 = iVar6 + -1 >> 1;
  }
  if ((this->field_0275 < 0) || (4 < this->field_0275)) {
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\to_crab.cpp"),0x207,0,0,st::mutable_c_string("%s"),
                               "STCrabC::Bad birth coordinate - adjusting");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
      return (bool)uVar2;
    }
    this->field_0275 = 0;
  }
  if (0x167 < this->field_027D) {
    local_EAX_200 =
         st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\to_crab.cpp"),0x20c,0,0,st::mutable_c_string("%s"),
                            "STCrabC::Bad coordinates - adjusting ");
    if (local_EAX_200 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
      return (bool)uVar2;
    }
    this->field_027D = 0;
  }
  iVar6 = 0;
  do {
    iVar5 = st::fn_00404D3B((short)this->field_026D,(short)this->field_0271,(short)iVar6);
    if (iVar5 != 0) {
      this->field_0275 = iVar6;
      return SUB41(iVar5,0);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 5);
  return false;
}

