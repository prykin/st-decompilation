#include "st/generated.hpp"
// Generated translation unit: source/original/Igor/to_oct.cpp

// 00589B50 STOctopusC::SetSprRange
#line 4 "decomp/ST.exe/functions/00589B50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_oct.cpp
   STOctopusC::SetSprRange */

void __thiscall st::fn_00589B50(STOctopusC *this,uint param_1)

{
  int iVar2;
  int iVar3;

  if (7 < param_1) {
    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\to_oct.cpp"),0x71,0,0,st::mutable_c_string("%s"),
                               "STOctopusC::SetSprRange - Bad direction");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    param_1 = 0;
  }
  if ((this->field_02A5 != 0xf8) && (this->field_02A5 != 0xf9)) {
    iVar3 = param_1 * 6;
    this->field_006C = (short)iVar3;
    st::fn_00401EBA(&this->field_01D5,0xe,iVar3,iVar3 + 5,'\0');
    return;
  }
  iVar3 = param_1 * 8;
  this->field_006C = (short)iVar3;
  st::fn_00401EBA(&this->field_01D5,0xe,iVar3,iVar3 + 7,'\0');
  return;
}

// 00589C10 STOctopusC::GetMessage
#line 4 "decomp/ST.exe/functions/00589C10/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_oct.cpp
   STOctopusC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00403B1B|00589C10; family_names=STOctopusC::GetMessage; ret4=11;
   direct_offsets={10:2,14:3,18:3,1c:0} */

int __thiscall st::fn_00589C10(STOctopusC *this,STMessage *message)

{
  STMessageId SVar1;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  STSprGameObjC *this_00;
  short sVar6;
  int local_EAX_45;
  int iVar7;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte *puVar11;
  byte *pbVar12;
  byte *puVar13;
  AnonShape_00589C10_CECA1FB4 *pAVar14;
  byte *pbVar15;
  InternalExceptionFrame local_88;
  void *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ushort *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  STSprGameObjC *local_28;
  short local_24 [2];
  undefined4 local_20;
  undefined4 *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  AnonShape_00589C10_CECA1FB4 *local_c;
  uint local_8;

  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_28 = (STSprGameObjC *)this;
  local_EAX_45 = st::fn_0072D7F0(local_88.jumpBuffer,0);
  this_00 = local_28;
  if (local_EAX_45 != 0) {
    g_currentExceptionFrame = local_88.previous;
    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\to_oct.cpp"),0x1cf,0,local_EAX_45,
                               st::mutable_c_string("%s"),"STOctopusC::GetMessage");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_45,0,st::mutable_c_string("E:\\__titans\\Igor\\to_oct.cpp"),0x1d0);
    return 0xffff;
  }
  st::fn_00404F07(local_28,message);
  SVar1 = message->id;
  if (MESS_STOCTOPUSC_0112 < SVar1) {
    if (MESS_HITKILL < SVar1) {
      if (SVar1 != MESS_SHARED_440F) {
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      puVar11 = (byte *)(&this_00->field_01D5);
      if (DAT_0080732c == 0) {
        st::fn_00402761((STT3DSprC *)puVar11,0xe);
        st::fn_00402761((STT3DSprC *)puVar11,8);
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      st::fn_00404854(puVar11,0xe);
      st::fn_00404854(puVar11,8);
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    if (SVar1 == MESS_HITKILL) {
      if (*(int *)&this_00->field_0x249 == 2) {
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      uVar10 = st::fn_004052CC((STT3DSprC *)&this_00->field_01D5);
      st::fn_006EAB60(this_00->field_0211,uVar10);
      st::fn_00403427(this_00);
      *(undefined4 *)&this_00->field_0x249 = 2;
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    if (SVar1 != MESS_STSPRGAMEOBJC_0113) {
      if (SVar1 != MESS_STOCTOPUSC_0127) {
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      iVar9 = st::fn_004019E7(0,0,g_worldGrid.sizeX + -1,g_worldGrid.sizeY + -1,(int)this_00,
                                 (int)(short)((message->arg0).words.low * 0xc9 + 100),
                                 (int)(short)((message->arg1).words.low * 0xc9 + 100),
                                 (int)(short)((message->arg0).words.high * 0xc9 + 100),
                                 (int)(short)((message->arg1).words.high * 0xc9 + 100),
                                 (undefined2 *)&local_1c,st::pointer_boundary_cast<undefined2 *>(local_24),(short *)&local_20);
      if (iVar9 == 0) {
        g_currentExceptionFrame = local_88.previous;
        return 0;
      }
      st::fn_004024F5((STOctopusC *)this_00,(short)local_1c,local_24[0],(short)local_20);
      sVar6 = (*this_00->vtable->vfunc_10)
                        (*(short *)&this_00->field_0x41,*(short *)&this_00->field_0x43,
                         (int)*(undefined2 *)&this_00->field_0x45,(short)local_1c,local_24[0],
                         local_20);
      *(short *)&this_00->field_0x6c = sVar6 / 0x2d - (short)((int)sVar6 / -0x4c000000);
      iVar9 = *(int *)&this_00->field_0x251 * 0x1850;
      *(int *)&this_00->field_0x251 = (int)(iVar9 + (iVar9 >> 0x1f & 0xfffU)) >> 0xc;
      iVar9 = *(int *)&this_00->field_0x255 * 0x1850;
      *(int *)&this_00->field_0x255 = (int)(iVar9 + (iVar9 >> 0x1f & 0xfffU)) >> 0xc;
      iVar9 = st::machine_word_boundary_cast<int>(this_00->field_0259 * 0x1850);
      this_00->field_0259 = (int)(iVar9 + (iVar9 >> 0x1f & 0xfffU)) >> 0xc;
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)this_00->field_01D5)();
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (SVar1 == MESS_STOCTOPUSC_0112) {
    st::fn_00402A90((STT3DSprC *)&this_00->field_01D5);
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (MESS_SHARED_0003 < SVar1) {
    if (SVar1 != MESS_SHARED_010F) {
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    local_14 = (byte *)st::fn_004018D4((STT3DSprC *)&this_00->field_01D5,&local_8);
    local_18 = (byte *)st::fn_0040119A((STAllPlayersC *)this_00,(int *)&local_10);
    local_c = st::pointer_boundary_cast<AnonShape_00589C10_CECA1FB4 *>(st::fn_006AAC70(local_10 + 0x96 + local_8));
    if (local_14 == nullptr) {
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    if (local_18 == nullptr) {
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    if (local_c == nullptr) {
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    puVar11 = (byte *)&this_00->field_0x285;
    pAVar14 = local_c;
    memmove(pAVar14, puVar11, 0x28); /* compiler REP MOVS byte copy */
    *(undefined4 *)&local_c->field_0xc = 2;
    *(undefined4 *)&local_c->field_0x28 = *(undefined4 *)((int)&this_00->field_0244 + 1);
    *(undefined4 *)&local_c->field_0x2c = *(undefined4 *)&this_00->field_0x249;
    *(undefined2 *)&local_c->field_0x78 = *(undefined2 *)&this_00->field_0x41;
    *(undefined2 *)&local_c->field_0x7a = *(undefined2 *)&this_00->field_0x43;
    *(undefined2 *)&local_c->field_0x7c = *(undefined2 *)&this_00->field_0x45;
    local_c->field_0040 = this_00->field_0231;
    local_c->field_0044 = *(undefined4 *)((int)&this_00->field_023E + 3);
    *(undefined4 *)&local_c->field_0x48 = *(undefined4 *)&this_00->field_0x251;
    *(undefined4 *)&local_c->field_0x4c = *(undefined4 *)&this_00->field_0x255;
    local_c->field_0050 = this_00->field_0259;
    *(undefined4 *)&local_c->field_0x54 = *(undefined4 *)&this_00->field_0x25d;
    *(undefined4 *)&local_c->field_0x58 = *(undefined4 *)&this_00->field_0x261;
    *(undefined4 *)&local_c->field_0x5c = *(undefined4 *)&this_00->field_0x265;
    *(undefined4 *)&local_c->field_0x60 = *(undefined4 *)&this_00->field_0x269;
    *(undefined4 *)&local_c->field_0x64 = *(undefined4 *)&this_00->field_0x26d;
    *(undefined4 *)&local_c->field_0x68 = *(undefined4 *)&this_00->field_0x271;
    *(undefined4 *)&local_c->field_0x6c = *(undefined4 *)&this_00->field_0x275;
    *(undefined4 *)&local_c->field_0x70 = *(undefined4 *)&this_00->field_0x279;
    *(undefined4 *)&local_c->field_0x74 = *(undefined4 *)&this_00->field_0x27d;
    *(undefined4 *)&local_c->field_0x38 = *(undefined4 *)&this_00->field_0x239;
    local_c->field_003C = *(undefined4 *)&this_00->field_0x23d;
    *(undefined4 *)&local_c->field_0x34 = *(undefined4 *)&this_00->field_0x235;
    *(undefined4 *)&local_c->field_0x86 = *(undefined4 *)&this_00->field_0x281;
    *(undefined2 *)&local_c->field_0x7e = *(undefined2 *)&this_00->field_0x4e;
    *(undefined2 *)&local_c->field_0x80 = *(undefined2 *)&this_00->field_0x50;
    *(undefined2 *)&local_c->field_0x82 = *(undefined2 *)&this_00->field_0x52;
    *(undefined2 *)&local_c->field_0x84 = *(undefined2 *)&this_00->field_0x6c;
    uVar3 = this_00->field_024E;
    uVar4 = this_00->field_024F;
    uVar5 = this_00->field_0x250;
    local_c->field_0x30 = this_00->field_0x24d;
    local_c->field_0x31 = uVar3;
    local_c->field_0x32 = uVar4;
    local_c->field_0x33 = uVar5;
    *(undefined4 *)&local_c->field_0x8a = 0;
    local_c->field_008E = local_8;
    pbVar12 = local_14;
    pbVar15 = st::pointer_boundary_cast<byte *>(&local_c->field_0x92);
    memmove(pbVar15, pbVar12, local_8); /* compiler REP MOVS byte copy */
    uVar10 = 0;
    *(uint *)(&local_c->field_0x92 + local_8) = local_10;
    pbVar12 = local_18;
    pbVar15 = st::pointer_boundary_cast<byte *>(&local_c[1].field_0x2 + local_8);
    memmove(pbVar15, pbVar12, local_10); /* compiler REP MOVS byte copy */
    st::fn_004025F9
              (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_c,
               (AnonShape_0060EA30_DCEB68AD *)(local_10 + 0x96 + local_8));
    st::fn_006AB060(&local_14);
    st::fn_006AB060(&local_18);
    st::fn_006AB060(&local_c);
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (SVar1 == MESS_SHARED_0003) {
    st::fn_00403189(this_00->field_0018);
    st::fn_004021D5((STT3DSprC *)&this_00->field_01D5);
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (SVar1 == MESS_ID_NONE) {
    if (*(int *)&this_00->field_0x249 == 2) {
      g_currentExceptionFrame = local_88.previous;
      return 0;
    }
    st::fn_00402261((AnonShape_0058A9E0_DB5690D0 *)this_00);
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  if (SVar1 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
  *(undefined4 *)&this_00->field_0x249 = 3;
  local_1c = (undefined4 *)(message->arg0).u32;
  if ((uint)local_1c[3] < 2) {
    uVar10 = g_playSystem_00802A38->field_00E4;
    *(undefined4 *)&this_00->field_0x24d = 0;
    this_00->field_0231 = CASE_0;
    *(uint *)((int)&this_00->field_0244 + 1) = uVar10 - 3;
    *(undefined4 *)&this_00->field_0x235 = 0;
    *(undefined4 *)&this_00->field_0x271 = 0;
    *(undefined4 *)&this_00->field_0x26d = 0;
    *(undefined4 *)&this_00->field_0x269 = 0;
    *(undefined4 *)&this_00->field_0x281 = 0;
    *(undefined4 *)((int)&this_00->field_023E + 3) = 0;
    puVar11 = (byte *)((message->arg0).ptr);
    puVar13 = (byte *)&this_00->field_0x285;
    memmove(puVar13, puVar11, 0x28); /* compiler REP MOVS byte copy */
    iVar9 = 0;
    st::fn_00404D0E((STOctopusC *)this_00);
    if (((((*(int *)&this_00->field_0x299 < 0) ||
          ((int)g_worldGrid.sizeX <= *(int *)&this_00->field_0x299)) ||
         (*(int *)&this_00->field_0x29d < 0)) ||
        (((int)g_worldGrid.sizeY <= *(int *)&this_00->field_0x29d ||
         (iVar9 = *(int *)&this_00->field_0x2a1, iVar9 < 0)))) ||
       ((g_worldGrid.sizeZ <= iVar9 ||
        (iVar7 = st::fn_00404D3B(*(short *)&this_00->field_0x299,*(short *)&this_00->field_0x29d,
                                    (short)iVar9), iVar7 == 0)))) goto LAB_0058a0d0;
    switch(*(undefined4 *)&this_00->field_0x2a5) {
    case 0xf8:
      iVar9 = st::fn_00404183
                        ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,st::mutable_c_string("octopus2"),
                         CASE_1D);
      if (iVar9 != 0) {
        iVar9 = 0xe9;
cf_error_exit_0058A005:
        st::fn_006A5E40
                  (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\to_oct.cpp"),iVar9);
      }
      break;
    case 0xf9:
      iVar9 = st::fn_00404183
                        ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,st::mutable_c_string("octopus1"),
                         CASE_1D);
      if (iVar9 != 0) {
        iVar9 = 0xe4;
        goto cf_error_exit_0058A005;
      }
      break;
    case 0xfa:
      iVar9 = st::fn_00404183
                        ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,st::mutable_c_string("medusa2"),
                         CASE_1D);
      if (iVar9 != 0) {
        iVar9 = 0xf3;
        goto cf_error_exit_0058A005;
      }
      break;
    case 0xfb:
      iVar9 = st::fn_00404183
                        ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,st::mutable_c_string("medusa1"),
                         CASE_1D);
      if (iVar9 != 0) {
        iVar9 = 0xee;
        goto cf_error_exit_0058A005;
      }
    }
    st::fn_00405AA6(&this_00->field_01D5,'\x0e');
    st::fn_00405240((STT3DSprC *)&this_00->field_01D5,0xe,g_playSystem_00802A38->field_00E4);
    *(short *)&this_00->field_0x41 = *(short *)&this_00->field_0x299 * 0xc9 + 100;
    *(short *)&this_00->field_0x43 = *(short *)&this_00->field_0x29d * 0xc9 + 100;
    *(short *)&this_00->field_0x45 = *(short *)&this_00->field_0x2a1 * 200 + 100;
    *(undefined2 *)&this_00->field_0x6c = *(undefined2 *)&this_00->field_0x2a9;
    *(undefined4 *)&this_00->field_0x251 = 1;
    *(undefined4 *)&this_00->field_0x255 = 1;
    this_00->field_0259 = 1;
    uVar7 = st::fn_00401A05((STOctopusC *)this_00,(short *)&this_00->field_0x4e,
                         (short *)&this_00->field_0x50,(short *)&this_00->field_0x52,
                         (short *)&this_00->field_0x6c);
    *(undefined4 *)&this_00->field_0x249 = uVar7;
    this_00->field_0231 = CASE_0;
  }
  else if (local_1c[3] == 2) {
    puVar11 = (byte *)(local_1c);
    puVar13 = (byte *)&this_00->field_0x285;
    memmove(puVar13, puVar11, 0x28); /* compiler REP MOVS byte copy */
    local_8 = STField<uint>(local_1c,0x8e);
    st::fn_0040551F
              ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x96 + (int)local_1c));
    puVar11 = (byte *)(local_1c);
    *(undefined4 *)&this_00->field_0x249 = local_1c[0xb];
    *(undefined4 *)((int)&this_00->field_0244 + 1) = local_1c[10];
    *(undefined2 *)&this_00->field_0x41 = *(undefined2 *)(local_1c + 0x1e);
    *(undefined2 *)&this_00->field_0x43 = STField<undefined2>(local_1c,0x7a);
    *(undefined2 *)&this_00->field_0x45 = *(undefined2 *)(local_1c + 0x1f);
    *(undefined4 *)&this_00->field_0x281 = STField<undefined4>(local_1c,0x86);
    this_00->field_0231 = local_1c[0x10];
    *(undefined4 *)((int)&this_00->field_023E + 3) = local_1c[0x11];
    *(undefined4 *)&this_00->field_0x251 = local_1c[0x12];
    *(undefined4 *)&this_00->field_0x255 = local_1c[0x13];
    this_00->field_0259 = local_1c[0x14];
    *(undefined4 *)&this_00->field_0x25d = local_1c[0x15];
    *(undefined4 *)&this_00->field_0x261 = local_1c[0x16];
    *(undefined4 *)&this_00->field_0x265 = local_1c[0x17];
    *(undefined4 *)&this_00->field_0x269 = local_1c[0x18];
    *(undefined4 *)&this_00->field_0x26d = local_1c[0x19];
    *(undefined4 *)&this_00->field_0x271 = local_1c[0x1a];
    *(undefined4 *)&this_00->field_0x275 = local_1c[0x1b];
    *(undefined4 *)&this_00->field_0x279 = local_1c[0x1c];
    *(undefined4 *)&this_00->field_0x27d = local_1c[0x1d];
    *(undefined4 *)&this_00->field_0x239 = local_1c[0xe];
    *(undefined4 *)&this_00->field_0x23d = local_1c[0xf];
    *(undefined4 *)&this_00->field_0x235 = local_1c[0xd];
    *(undefined2 *)&this_00->field_0x4e = STField<undefined2>(local_1c,0x7e);
    *(undefined2 *)&this_00->field_0x50 = *(undefined2 *)(local_1c + 0x20);
    *(undefined2 *)&this_00->field_0x52 = STField<undefined2>(local_1c,0x82);
    *(undefined2 *)&this_00->field_0x6c = *(undefined2 *)(local_1c + 0x21);
    *(undefined4 *)&this_00->field_0x24d = local_1c[0xc];
    local_44 = st::fn_006AAC70(0x44);
    if (local_44 != nullptr) {
      iVar9 = 0;
      do {
        if (iVar9 == 8) {
          STField<int *>(local_44,0x20) = PTR_00806774;
        }
        else {
          *(int **)((int)local_44 + iVar9 * 4) = PTR_0080676c;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x11);
      local_40 = 0;
      local_3c = 0;
      local_38 = PTR_008073cc;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      st::fn_00404CA5
                ((STT3DSprC *)&this_00->field_01D5,(int *)&local_44,
                 (AnonShape_004AD790_77673787 *)((int)puVar11 + 0x92));
      st::fn_006AB060(&local_44);
    }
  }
  if ((*(int *)&this_00->field_0x249 == 3) || (iVar9 = st::fn_004010C3((int)this_00), iVar9 != 0)
     ) {
    g_currentExceptionFrame = local_88.previous;
    return 0;
  }
LAB_0058a0d0:
  st::fn_00403427(this_00);
  *(undefined4 *)&this_00->field_0x249 = 2;
  g_currentExceptionFrame = local_88.previous;
  return 0;
}

// 0058A8D0 STOctopusC::Bad
#line 4 "decomp/ST.exe/functions/0058A8D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_oct.cpp
   STOctopusC::Bad
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall Bad(STOctopusC * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0058A94E RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_0058A8D0(STOctopusC *this)

{
  int iVar2;
  int iVar3;
  int iVar4;

  iVar3 = (int)g_worldGrid.sizeY;
  iVar4 = (int)g_worldGrid.sizeX;
  if (7 < this->field_02A9) {
    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\to_oct.cpp"),0x21a,0,0,st::mutable_c_string("%s"),
                               "STOctopusC::Bad direction");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    this->field_02A9 = 0;
  }
  if ((((iVar4 + -1 < this->field_0299) || (this->field_0299 < 0)) ||
      (iVar3 + -1 < this->field_029D)) || (this->field_029D < 0)) {
    this->field_0299 = iVar4 + -1 >> 1;
    this->field_029D = iVar3 + -1 >> 1;
  }
  return;
}

