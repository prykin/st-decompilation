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
   direct_offsets={10:2,14:2,18:2,1c:0} */

int __thiscall st::fn_00578630(STCrabC *this,STMessage *message)

{
  undefined4 *puVar1;
  STMessageId SVar2;
  byte bVar4;
  STSprGameObjC *this_00;
  undefined1 uVar5;
  short sVar6;
  int local_EAX_70;
  int iVar7;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  STSprGameObjC_field_0259State SVar11;
  STSprGameObjC_field_0259State *pSVar12;
  byte *pbVar13;
  STSprGameObjC_field_0259State *pSVar14;
  byte *pbVar15;
  InternalExceptionFrame local_80;
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ushort *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  STSprGameObjC_field_0259State *local_20;
  STSprGameObjC *local_1c;
  byte *local_18;
  STSprGameObjC_field_0259State *local_14;
  uint local_10;
  STSprGameObjC_field_0259State *local_c;
  STSprGameObjC_field_0259State local_8;

  if ((this->field_0239 == 3) && (message->id != MESS_SHARED_0003)) {
    return 0;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_1c = (STSprGameObjC *)this;
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
  st::fn_00404F07(local_1c,message);
  SVar2 = message->id;
  if (MESS_SHARED_010F < SVar2) {
    if (SVar2 != MESS_HITKILL) {
      if (SVar2 != MESS_SHARED_440F) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      puVar1 = &this_00->field_01D5;
      if (DAT_0080732c != 0) {
        st::fn_00404854(puVar1,0xe);
        st::fn_00404854(puVar1,0xd);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      st::fn_00402761((STT3DSprC *)puVar1,0xe);
      st::fn_00402761((STT3DSprC *)puVar1,0xd);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    uVar10 = st::fn_004052CC((STT3DSprC *)&this_00->field_01D5);
    st::fn_006EAB60(this_00->field_0211,uVar10);
    goto LAB_00578ea2;
  }
  if (SVar2 == MESS_SHARED_010F) {
    local_14 = st::pointer_boundary_cast<STSprGameObjC_field_0259State *>(st::fn_004018D4((STT3DSprC *)&this_00->field_01D5,st::pointer_boundary_cast<uint *>(&local_8)));
    local_18 = (byte *)st::fn_0040119A((STAllPlayersC *)this_00,(int *)&local_10);
    local_c = st::pointer_boundary_cast<STSprGameObjC_field_0259State *>(st::fn_006AAC70(local_10 + 0x68 + local_8));
    if (local_14 == nullptr) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (local_c == nullptr) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    pSVar12 = &this_00->field_0259;
    pSVar14 = local_c;
    memmove(pSVar14, pSVar12, 0x28); /* compiler REP MOVS byte copy */
    local_c[3] = 2;
    local_c[10] = *(STSprGameObjC_field_0259State *)&this_00->field_0x235;
    local_c[0xb] = *(STSprGameObjC_field_0259State *)&this_00->field_0x239;
    *(undefined2 *)(local_c + 0x14) = *(undefined2 *)&this_00->field_0x41;
    uVar5 = this_00->field_0x44;
    ((byte *)((int)local_c + 0x52))[0] = this_00->field_0x43;
    ((byte *)((int)local_c + 0x52))[1] = uVar5;
    *(undefined2 *)(local_c + 0x15) = *(undefined2 *)&this_00->field_0x45;
    local_c[0xd] = this_00->field_0231;
    local_c[0x12] = *(STSprGameObjC_field_0259State *)((int)&this_00->field_0244 + 1);
    local_c[0x13] = *(STSprGameObjC_field_0259State *)&this_00->field_0x24d;
    local_c[0xe] = *(STSprGameObjC_field_0259State *)((int)&this_00->field_023E + 3);
    local_c[0xf] = *(STSprGameObjC_field_0259State *)&this_00->field_0x249;
    local_c[0x10] = *(STSprGameObjC_field_0259State *)&this_00->field_0x251;
    local_c[0x11] = *(STSprGameObjC_field_0259State *)&this_00->field_0x255;
    uVar5 = this_00->field_0x4f;
    ((byte *)((int)local_c + 0x56))[0] = this_00->field_0x4e;
    ((byte *)((int)local_c + 0x56))[1] = uVar5;
    *(undefined2 *)(local_c + 0x16) = *(undefined2 *)&this_00->field_0x50;
    uVar5 = this_00->field_0x6d;
    ((byte *)((int)local_c + 0x5a))[0] = this_00->field_0x6c;
    ((byte *)((int)local_c + 0x5a))[1] = uVar5;
    local_c[0xc] = *(STSprGameObjC_field_0259State *)&this_00->field_0x23d;
    local_c[0x17] = 0;
    local_c[0x18] = local_8;
    pSVar12 = local_14;
    pSVar14 = local_c + 0x19;
    memmove(pSVar14, pSVar12, local_8); /* compiler REP MOVS byte copy */
    uVar10 = 0;
    *(uint *)((int)local_c + local_8 + 100) = local_10;
    pbVar13 = local_18;
    pbVar15 = (byte *)((int)local_c + local_8 + 0x68);
    memmove(pbVar15, pbVar13, local_10); /* compiler REP MOVS byte copy */
    st::fn_004025F9
              (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_c,
               (AnonShape_0060EA30_DCEB68AD *)(local_10 + 0x68 + local_8));
    st::fn_006AB060(&local_14);
    st::fn_006AB060(&local_18);
    st::fn_006AB060(&local_c);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (SVar2 == MESS_ID_NONE) {
    if (*(int *)&this_00->field_0x239 == 2) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    st::fn_00405BD2((AnonShape_00579350_2E014C47 *)this_00);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (SVar2 != MESS_ID_CREATE) {
    if (SVar2 != MESS_SHARED_0003) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    st::fn_00403189(this_00->field_0018);
    st::fn_004021D5((STT3DSprC *)&this_00->field_01D5);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  local_20 = (STSprGameObjC_field_0259State *)(message->arg0).u32;
  if (local_20[3] < 2) {
    *(undefined4 *)&this_00->field_0x239 = 3;
    uVar10 = g_playSystem_00802A38->field_00E4;
    *(undefined4 *)&this_00->field_0x23d = 0;
    this_00->field_0231 = CASE_0;
    *(uint *)&this_00->field_0x235 = uVar10 - 3;
    pSVar12 = st::pointer_boundary_cast<STSprGameObjC_field_0259State *>((message->arg0).ptr);
    pSVar14 = &this_00->field_0259;
    memmove(pSVar14, pSVar12, 0x28); /* compiler REP MOVS byte copy */
    iVar9 = 0;
    st::fn_00405A01((STCrabC *)this_00);
    if (((((*(int *)&this_00->field_0x26d < 0) ||
          ((int)g_worldGrid.sizeX <= *(int *)&this_00->field_0x26d)) ||
         (*(int *)&this_00->field_0x271 < 0)) ||
        (((int)g_worldGrid.sizeY <= *(int *)&this_00->field_0x271 ||
         (iVar9 = *(int *)&this_00->field_0x275, iVar9 < 0)))) ||
       ((g_worldGrid.sizeZ <= iVar9 ||
        (iVar7 = st::fn_00404D3B(*(short *)&this_00->field_0x26d,*(short *)&this_00->field_0x271,
                                    (short)iVar9), iVar7 == 0)))) {
      st::fn_00404CB9(this_00);
      *(undefined4 *)&this_00->field_0x239 = 2;
    }
    else {
      switch(*(undefined4 *)&this_00->field_0x279) {
      case 0xf2:
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,st::mutable_c_string("crab1l"),
                           CASE_1D);
        if (iVar9 != 0) {
          st::fn_006A5E40
                    (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\to_crab.cpp"),0xd2);
        }
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
      case 0xf3:
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,st::mutable_c_string("crab2l"),
                           CASE_1D);
        if (iVar9 != 0) {
          st::fn_006A5E40
                    (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\to_crab.cpp"),0xda);
        }
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xd,PTR_0080676c,st::mutable_c_string("crab2l_m"),
                           CASE_1D);
        if (iVar9 != 0) {
          iVar9 = 0xdd;
          goto cf_error_exit_00578B5D;
        }
        break;
      case 0xf4:
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,st::mutable_c_string("crab1b"),
                           CASE_1D);
        if (iVar9 != 0) {
          st::fn_006A5E40
                    (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\to_crab.cpp"),0xe2);
        }
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xd,PTR_0080676c,st::mutable_c_string("crab1b_m"),
                           CASE_1D);
        if (iVar9 != 0) {
          iVar9 = 0xe5;
          goto cf_error_exit_00578B5D;
        }
        break;
      case 0xf5:
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,st::mutable_c_string("crab2b"),
                           CASE_1D);
        if (iVar9 != 0) {
          st::fn_006A5E40
                    (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\to_crab.cpp"),0xea);
        }
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xd,PTR_0080676c,st::mutable_c_string("crab2b_m"),
                           CASE_1D);
        if (iVar9 != 0) {
          iVar9 = 0xed;
          goto cf_error_exit_00578B5D;
        }
        break;
      case 0xf6:
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,st::mutable_c_string("langus2"),
                           CASE_1D);
        if (iVar9 != 0) {
          st::fn_006A5E40
                    (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\to_crab.cpp"),0xfa);
        }
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xd,PTR_0080676c,st::mutable_c_string("langus2m"),
                           CASE_1D);
        if (iVar9 != 0) {
          iVar9 = 0xfd;
          goto cf_error_exit_00578B5D;
        }
        break;
      case 0xf7:
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,st::mutable_c_string("langus1"),
                           CASE_1D);
        if (iVar9 != 0) {
          st::fn_006A5E40
                    (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\to_crab.cpp"),0xf2);
        }
        iVar9 = st::fn_00404183
                          ((STT3DSprC *)&this_00->field_01D5,0xd,PTR_0080676c,st::mutable_c_string("langus1m"),
                           CASE_1D);
        if (iVar9 != 0) {
          iVar9 = 0xf5;
          goto cf_error_exit_00578B5D;
        }
      }
      puVar1 = &this_00->field_01D5;
      st::fn_00403AFD((STT3DSprC *)puVar1,'\r');
      st::fn_00405AA6(puVar1,'\x0e');
      st::fn_00405AA6(puVar1,'\r');
      st::fn_00405240((STT3DSprC *)puVar1,0xe,g_playSystem_00802A38->field_00E4);
      st::fn_00405240((STT3DSprC *)puVar1,0xd,g_playSystem_00802A38->field_00E4);
      sVar6 = *(short *)&this_00->field_0x275 * 200;
      *(short *)&this_00->field_0x41 = *(short *)&this_00->field_0x26d * 0xc9 + 100;
      *(short *)&this_00->field_0x43 = *(short *)&this_00->field_0x271 * 0xc9 + 100;
      *(short *)&this_00->field_0x45 = sVar6 + 100;
      if ((*(int *)&this_00->field_0x279 < 0xf6) || (0xf7 < *(int *)&this_00->field_0x279)) {
        sVar6 = sVar6 + 0x28;
      }
      else {
        sVar6 = sVar6 + 0x82;
      }
      *(short *)&this_00->field_0x45 = sVar6;
      *(short *)&this_00->field_0x6c =
           (short)(*(int *)&this_00->field_0x27d / 0x2d) -
           (short)(*(int *)&this_00->field_0x27d / -0x4c000000);
      uVar7 = st::fn_0040104B(this_00,(short *)&this_00->field_0x4e,(short *)&this_00->field_0x50
                                 ,(undefined2 *)&this_00->field_0x6c);
      *(undefined4 *)&this_00->field_0x239 = uVar7;
    }
  }
  else if (local_20[3] == 2) {
    pSVar12 = local_20;
    pSVar14 = &this_00->field_0259;
    memmove(pSVar14, pSVar12, 0x28); /* compiler REP MOVS byte copy */
    local_8 = local_20[0x18];
    st::fn_0040551F
              ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x68 + (int)local_20));
    pSVar12 = local_20;
    *(STSprGameObjC_field_0259State *)&this_00->field_0x239 = local_20[0xb];
    *(STSprGameObjC_field_0259State *)&this_00->field_0x235 = local_20[10];
    *(short *)&this_00->field_0x41 = (short)local_20[0x14];
    bVar4 = ((byte *)((int)local_20 + 0x52))[1];
    this_00->field_0x43 = ((byte *)((int)local_20 + 0x52))[0];
    this_00->field_0x44 = bVar4;
    *(short *)&this_00->field_0x45 = (short)local_20[0x15];
    this_00->field_0231 = local_20[0xd];
    *(STSprGameObjC_field_0259State *)((int)&this_00->field_0244 + 1) = local_20[0x12];
    *(STSprGameObjC_field_0259State *)&this_00->field_0x24d = local_20[0x13];
    *(STSprGameObjC_field_0259State *)((int)&this_00->field_023E + 3) = local_20[0xe];
    *(STSprGameObjC_field_0259State *)&this_00->field_0x249 = local_20[0xf];
    *(STSprGameObjC_field_0259State *)&this_00->field_0x251 = local_20[0x10];
    *(STSprGameObjC_field_0259State *)&this_00->field_0x255 = local_20[0x11];
    bVar4 = ((byte *)((int)local_20 + 0x56))[1];
    this_00->field_0x4e = ((byte *)((int)local_20 + 0x56))[0];
    this_00->field_0x4f = bVar4;
    *(short *)&this_00->field_0x50 = (short)local_20[0x16];
    bVar4 = ((byte *)((int)local_20 + 0x5a))[1];
    this_00->field_0x6c = ((byte *)((int)local_20 + 0x5a))[0];
    this_00->field_0x6d = bVar4;
    *(STSprGameObjC_field_0259State *)&this_00->field_0x23d = local_20[0xc];
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
      st::fn_00404CA5
                ((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,
                 (AnonShape_004AD790_77673787 *)(pSVar12 + 0x19));
      st::fn_006AB060(&local_3c);
    }
  }
  if (*(int *)&this_00->field_0x239 == 3) {
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
  *(undefined4 *)&this_00->field_0x239 = 2;
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
  undefined1 uVar2;
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

