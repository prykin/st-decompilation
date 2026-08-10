#include "st/generated.hpp"
// Generated translation unit: source/original/Igor/To_shark.cpp

// 0058D7C0 STSharkC::GetMessage
#line 4 "decomp/ST.exe/functions/0058D7C0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_shark.cpp
   STSharkC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00404665|0058D7C0; family_names=STSharkC::GetMessage; ret4=10;
   direct_offsets={10:2,14:3,18:5,1c:0} */

int __thiscall st::fn_0058D7C0(STSharkC *this,STMessage *message)

{
  STSprGameObjC_field_0231State *pSVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  STMessageId SVar4;
  undefined1 uVar6;
  undefined3 uVar7;
  STSprGameObjC *this_00;
  int local_EAX_68;
  int iVar8;
  int local_EAX_696;
  int local_EAX_939;
  int local_EAX_1180;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined2 uVar12;
  short sVar13;
  byte *puVar14;
  byte *pbVar15;
  AnonShape_0058D7C0_99A937C6 *pAVar16;
  byte *pbVar17;
  InternalExceptionFrame local_80;
  void *local_3c;
  uint local_38;
  int local_34;
  ushort *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  STSprGameObjC *local_20;
  undefined4 *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  AnonShape_0058D7C0_99A937C6 *local_c;
  uint local_8;

  if ((this->field_0257 == 8) && (message->id != MESS_SHARED_0003)) {
    return 0;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_20 = (STSprGameObjC *)this;
  local_EAX_68 = st::fn_0072D7F0(local_80.jumpBuffer,0);
  this_00 = local_20;
  if (local_EAX_68 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_shark.cpp"),0x15e,0,local_EAX_68,
                               st::mutable_c_string("%s"),"STSharkC::GetMessage");
    if (iVar9 == 0) {
      st::fn_006A5E40(local_EAX_68,0,st::mutable_c_string("E:\\__titans\\Igor\\To_shark.cpp"),0x15f);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00404F07(local_20,message);
  SVar4 = message->id;
  if (SVar4 < MESS_ID_ALLCREATE) {
    if (SVar4 == MESS_TORPHIT) {
      if (*(int *)&this_00->field_0x257 == 4) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      puVar14 = (byte *)(&this_00->field_01D5);
      *(undefined4 *)&this_00->field_0x23d = 0;
      st::fn_00404264((STT3DSprC *)puVar14,0xe);
      st::fn_00402A90((STT3DSprC *)puVar14);
      st::fn_00404183((STT3DSprC *)puVar14,8,PTR_00806764,st::mutable_c_string("expshark"),CASE_1D);
      st::fn_00405240((STT3DSprC *)puVar14,8,g_playSystem_00802A38->field_00E4);
      *(undefined4 *)&this_00->field_0x257 = 4;
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (MESS_SHARED_0003 < SVar4) {
      if (SVar4 != MESS_SHARED_010F) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      local_18 = (byte *)st::fn_004018D4((STT3DSprC *)&this_00->field_01D5,&local_8);
      local_14 = (byte *)st::fn_0040119A((STAllPlayersC *)this_00,(int *)&local_10);
      local_c = st::pointer_boundary_cast<AnonShape_0058D7C0_99A937C6 *>(st::fn_006AAC70(local_10 + 0x66 + local_8));
      if (local_18 == nullptr) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (local_14 == nullptr) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (local_c == nullptr) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      pbVar15 = (byte *)((int)&this_00->field_0259 + 2);
      pAVar16 = local_c;
      memmove(pAVar16, pbVar15, 0x34); /* compiler REP MOVS byte copy */
      *(undefined4 *)&local_c->field_0xc = 2;
      local_c->field_0034 = (short)this_00->field_0231;
      local_c->field_0036 = *(undefined2 *)((int)&this_00->field_0231 + 2);
      *(undefined2 *)&local_c->field_0x38 = *(undefined2 *)&this_00->field_0x235;
      *(undefined2 *)&local_c->field_0x3a = *(undefined2 *)&this_00->field_0x237;
      *(undefined4 *)&local_c->field_0x3c = *(undefined4 *)&this_00->field_0x249;
      uVar6 = this_00->field_024E;
      local_c->field_0x40 = this_00->field_0x24d;
      local_c->field_0x41 = uVar6;
      local_c->field_0042 = *(undefined4 *)&this_00->field_0x23d;
      uVar7 = *(undefined3 *)&this_00->field_0x250;
      local_c->field_0x46 = this_00->field_024F;
      *(undefined3 *)&local_c->field_0x47 = uVar7;
      *(undefined4 *)&local_c->field_0x4a = *(undefined4 *)&this_00->field_0x253;
      local_c->field_004E = *(undefined4 *)&this_00->field_0x257;
      local_c->field_0052 = *(undefined4 *)((int)&this_00->field_023E + 3);
      *(undefined4 *)&local_c->field_0x56 = *(undefined4 *)((int)&this_00->field_0244 + 1);
      *(undefined4 *)&local_c->field_0x5a = 0;
      local_c->field_005E = local_8;
      pbVar15 = local_18;
      pbVar17 = st::pointer_boundary_cast<byte *>(&local_c->field_0x62);
      memmove(pbVar17, pbVar15, local_8); /* compiler REP MOVS byte copy */
      uVar11 = 0;
      *(uint *)(&local_c->field_0x62 + local_8) = local_10;
      pbVar15 = local_14;
      pbVar17 = st::pointer_boundary_cast<byte *>(&local_c[1].field_0x2 + local_8);
      memmove(pbVar17, pbVar15, local_10); /* compiler REP MOVS byte copy */
      st::fn_004025F9
                (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_c,
                 (AnonShape_0060EA30_DCEB68AD *)(local_10 + 0x66 + local_8));
      st::fn_006AB060(&local_18);
      st::fn_006AB060(&local_14);
      st::fn_006AB060(&local_c);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (SVar4 == MESS_SHARED_0003) {
      st::fn_00405952(this_00);
      st::fn_00404EC1(*(short *)&this_00->field_0x5b,*(short *)&this_00->field_0x5d,
                         *(short *)&this_00->field_0x5f,this_00->field_0x8e,
                         (AnonShape_00495FF0_59081BDD *)this_00);
      st::fn_00403189(this_00->field_0018);
      st::fn_004021D5((STT3DSprC *)&this_00->field_01D5);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (SVar4 == MESS_ID_NONE) {
      st::fn_00401EFB((STSharkC *)this_00);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (SVar4 != MESS_ID_CREATE) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    *(undefined4 *)&this_00->field_0x257 = 8;
    *(undefined4 *)&this_00->field_0x23d = 0;
    *(undefined4 *)((int)&this_00->field_023E + 3) = 0;
    local_1c = (undefined4 *)(message->arg0).u32;
    if ((uint)local_1c[3] < 2) {
      *(undefined4 *)&this_00->field_024F = 0;
      *(undefined4 *)&this_00->field_0x253 = 0;
      *(undefined4 *)&this_00->field_0x249 = 0xff;
      iVar8 = st::fn_004056FA((STSharkC *)this_00);
      *(int *)&this_00->field_024F = iVar8;
      puVar14 = (byte *)((message->arg0).ptr);
      pbVar15 = (byte *)((int)&this_00->field_0259 + 2);
      memmove(pbVar15, puVar14, 0x34); /* compiler REP MOVS byte copy */
      st::fn_0040548E((AnonShape_0058EEB0_904026FD *)this_00);
      *(undefined2 *)&this_00->field_0x5b = 0xffff;
      *(undefined2 *)&this_00->field_0x5d = 0xffff;
      *(undefined2 *)&this_00->field_0x5f = 0xffff;
      st::fn_00402B5D(this_00,1);
      iVar10 = st::fn_0040295F(this_00,*(short *)&this_00->field_0x26f,
                                  *(short *)&this_00->field_0x273,*(short *)&this_00->field_0x277,1);
      if (iVar10 == 0) {
        iVar10 = st::fn_00401AAA(this_00,8);
        if (iVar10 == 0) {
          puVar14 = (byte *)(&this_00->field_01D5);
          iVar10 = st::fn_00404183
                             ((STT3DSprC *)puVar14,0xe,PTR_0080676c,st::mutable_c_string("shark1"),CASE_1D);
          if (iVar10 != 0) {
            st::fn_006A5E40
                      (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\To_shark.cpp"),0x9f);
          }
          st::fn_00405AA6(puVar14,'\x0e');
          st::fn_00405240((STT3DSprC *)puVar14,0xe,g_playSystem_00802A38->field_00E4);
          if (local_1c[3] == 0) {
            st::fn_004045D9
                      ((STT3DSprC *)puVar14,
                       (float)*(int *)&this_00->field_0x26f * _DAT_007904f8 + _DAT_007904f4,
                       (float)*(int *)&this_00->field_0x273 * _DAT_007904f8 + _DAT_007904f4,
                       (float)*(int *)&this_00->field_0x277 * _DAT_00790504 + _DAT_00790500);
            iVar10 = st::fn_00405DC1(this_00,*(short *)&this_00->field_0x27b);
            if (iVar10 == 0) {
LAB_0058dc72:
              uVar12 = *(undefined2 *)&this_00->field_0x47;
              uVar2 = *(undefined2 *)&this_00->field_0x49;
              *(int *)((int)&this_00->field_0244 + 1) = (int)PTR_00806724->field_002C;
              uVar3 = *(undefined2 *)&this_00->field_0x4b;
              *(undefined2 *)&this_00->field_0231 = uVar12;
              *(undefined2 *)((int)&this_00->field_0231 + 2) = uVar2;
              *(undefined2 *)&this_00->field_0x235 = uVar3;
              *(undefined4 *)&this_00->field_0x257 = 0;
            }
            else {
              local_EAX_939 =
                   st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_shark.cpp"),0xaa,0,0,
                                      st::mutable_c_string("%s"),"STSharkC::GetMessage Dir Object err");
              if (local_EAX_939 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              st::fn_0040227A((STSharkC *)this_00);
            }
          }
          else {
            local_1c = *(undefined4 **)&this_00->field_0x26f;
            *(int *)((int)&this_00->field_023E + 3) = (int)PTR_00806724->entryCount;
            if (local_1c == nullptr) {
              *(undefined4 *)&this_00->field_0x27b = 0;
            }
            else if (*(int *)&this_00->field_0x273 == 0) {
              *(undefined4 *)&this_00->field_0x27b = 0x10e;
            }
            else if (local_1c == (undefined4 *)(g_worldGrid.sizeX + -1)) {
              *(undefined4 *)&this_00->field_0x27b = 0xb4;
            }
            else if (*(int *)&this_00->field_0x273 == g_worldGrid.sizeY + -1) {
              *(undefined4 *)&this_00->field_0x27b = 0x5a;
            }
            st::fn_004045D9
                      ((STT3DSprC *)puVar14,(float)(int)local_1c * _DAT_007904f8 + _DAT_007904f4,
                       (float)*(int *)&this_00->field_0x273 * _DAT_007904f8 + _DAT_007904f4,
                       (float)*(int *)&this_00->field_0x277 * _DAT_00790504 + _DAT_00790500);
            iVar10 = st::fn_00405DC1(this_00,*(short *)&this_00->field_0x27b);
            if (iVar10 == 0) goto LAB_0058dc72;
            local_EAX_1180 =
                 st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_shark.cpp"),200,0,0,st::mutable_c_string("%s"),
                                    "STSharkC::GetMessage Dir Object err");
            if (local_EAX_1180 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            st::fn_0040227A((STSharkC *)this_00);
          }
        }
        else {
          local_EAX_696 =
               st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_shark.cpp"),0x99,0,0,st::mutable_c_string("%s"),
                                  "STSharkC::GetMessage Phase Count err");
          if (local_EAX_696 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          st::fn_0040227A((STSharkC *)this_00);
        }
      }
      else {
        st::fn_0040227A((STSharkC *)this_00);
      }
    }
    else if (local_1c[3] == 2) {
      puVar14 = (byte *)(local_1c);
      pbVar15 = (byte *)((int)&this_00->field_0259 + 2);
      memmove(pbVar15, puVar14, 0x34); /* compiler REP MOVS byte copy */
      local_8 = STField<uint>(local_1c,0x5e);
      st::fn_0040551F
                ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x66 + (int)local_1c));
      puVar14 = (byte *)(local_1c);
      *(undefined2 *)&this_00->field_0231 = *(undefined2 *)(local_1c + 0xd);
      *(undefined2 *)((int)&this_00->field_0231 + 2) = STField<undefined2>(local_1c,0x36);
      *(undefined2 *)&this_00->field_0x235 = *(undefined2 *)(local_1c + 0xe);
      *(undefined2 *)&this_00->field_0x237 = STField<undefined2>(local_1c,0x3a);
      *(undefined4 *)&this_00->field_0x249 = local_1c[0xf];
      *(undefined2 *)&this_00->field_0x24d = *(undefined2 *)(local_1c + 0x10);
      *(undefined4 *)&this_00->field_0x23d = STField<undefined4>(local_1c,0x42);
      *(undefined4 *)&this_00->field_024F = STField<undefined4>(local_1c,0x46);
      *(undefined4 *)&this_00->field_0x253 = STField<undefined4>(local_1c,0x4a);
      *(undefined4 *)&this_00->field_0x257 = STField<undefined4>(local_1c,0x4e);
      *(undefined4 *)((int)&this_00->field_023E + 3) = STField<undefined4>(local_1c,0x52);
      *(undefined4 *)((int)&this_00->field_0244 + 1) = STField<undefined4>(local_1c,0x56);
      local_3c = st::fn_006AAC70(0x44);
      if (local_3c != nullptr) {
        iVar10 = 0;
        do {
          *(int **)(iVar10 + (int)local_3c) = PTR_0080676c;
          iVar10 = iVar10 + 4;
        } while (iVar10 < 0x44);
        iVar10 = *(int *)((int)&this_00->field_023E + 3);
        if (((iVar10 < 1) || (PTR_00806724 == nullptr)) ||
           (PTR_00806724 == (AnonShape_GLOBAL_00806724_3210464F *)0xffffffd0)) {
          local_38 = 0;
        }
        else {
          local_38 = PTR_00806724->entries[iVar10 + -1];
        }
        local_34 = (int)PTR_00806724->field_002C;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        local_30 = PTR_008073cc;
        st::fn_00404CA5
                  ((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,
                   (AnonShape_004AD790_77673787 *)((int)puVar14 + 0x62));
        st::fn_006AB060(&local_3c);
        st::fn_00401325
                  (*(short *)&this_00->field_0x5b,*(short *)&this_00->field_0x5d,
                   *(short *)&this_00->field_0x5f,1,(RecoveredRecord_DumpClassC_00495EC0 *)this_00);
      }
    }
    if (*(int *)&this_00->field_0x257 == 8) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    iVar10 = st::fn_004010C3((int)this_00);
    if (iVar10 != 0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
LAB_0058e0f9:
    st::fn_0040227A((STSharkC *)this_00);
  }
  else {
    switch(SVar4) {
    case MESS_STOCTOPUSC_0112:
      st::fn_00402A90((STT3DSprC *)&this_00->field_01D5);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    case MESS_STSPRGAMEOBJC_0113:
      (**(code **)this_00->field_01D5)();
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case MESS_STOCTOPUSC_0127:
      pSVar1 = &this_00->field_0231;
      int scalar_local_1c = (int)(short)((message->arg1).words.low * 0xc9 + 100); /* split integer lifetime from pointer-typed SSA storage */
      iVar10 = st::fn_004019E7((short)*(undefined4 *)&this_00->field_0x27f,
                                  (short)*(undefined4 *)&this_00->field_0x283,
                                  (short)*(undefined4 *)&this_00->field_0x287,
                                  (short)*(undefined4 *)&this_00->field_0x28b,(int)this_00,
                                  (int)(short)((message->arg0).words.low * 0xc9 + 100),scalar_local_1c
                                  ,(int)(short)((message->arg0).words.high * 0xc9 + 100),
                                  (int)(short)((message->arg1).words.high * 0xc9 + 100),
                                  (undefined2 *)pSVar1,(undefined2 *)((int)&this_00->field_0231 + 2)
                                  ,(short *)&this_00->field_0x235);
      if (iVar10 != 0) {
        uVar12 = (undefined2)*pSVar1;
        if ((short)uVar12 < 0) {
          uVar12 = (((short)uVar12 / 0xc9 + ((short)uVar12 >> 0xf)) -
                   (short)((longlong)(int)(short)uVar12 * 0x28c1979 >> 0x3f)) - CASE_1;
        }
        else {
          uVar12 = ((short)uVar12 / 0xc9 + ((short)uVar12 >> 0xf)) -
                   (short)((longlong)(int)(short)uVar12 * 0x28c1979 >> 0x3f);
        }
        *(undefined2 *)pSVar1 = uVar12;
        uVar12 = *(undefined2 *)((int)&this_00->field_0231 + 2);
        if ((short)uVar12 < 0) {
          uVar12 = (((short)uVar12 / 0xc9 + ((short)uVar12 >> 0xf)) -
                   (short)((longlong)(int)(short)uVar12 * 0x28c1979 >> 0x3f)) + 0xffff;
        }
        else {
          uVar12 = ((short)uVar12 / 0xc9 + ((short)uVar12 >> 0xf)) -
                   (short)((longlong)(int)(short)uVar12 * 0x28c1979 >> 0x3f);
        }
        *(undefined2 *)((int)&this_00->field_0231 + 2) = uVar12;
        sVar13 = *(short *)&this_00->field_0x235;
        if (sVar13 < 0) {
          sVar13 = ((sVar13 / 200 + (sVar13 >> 0xf)) -
                   (short)((longlong)(int)sVar13 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          sVar13 = (sVar13 / 200 + (sVar13 >> 0xf)) -
                   (short)((longlong)(int)sVar13 * 0x51eb851f >> 0x3f);
        }
        *(short *)&this_00->field_0x235 = sVar13;
        *(undefined4 *)&this_00->field_0x257 = 5;
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      break;
    case MESS_HITKILL:
      uVar11 = st::fn_004052CC((STT3DSprC *)&this_00->field_01D5);
      st::fn_006EAB60(this_00->field_0211,uVar11);
      goto LAB_0058e0f9;
    }
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

// 0058E570 STSharkC::LifeShark
#line 4 "decomp/ST.exe/functions/0058E570/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_shark.cpp
   STSharkC::LifeShark

   [STSwitchEnumApplier] Switch target field_0257 uses
   /SubmarineTitans/Recovered/Enums/STSharkC_field_0257State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6

   [STSwitchEnumApplier] Switch target field_0257 uses
   /SubmarineTitans/Recovered/Enums/STSharkC_field_0257State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall LifeShark(STSharkC * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0058E9F8 RET | 0058ECB0 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_0058E570(STSharkC *this)

{
  undefined4 *this_00;
  short sVar1;
  short sVar2;
  short sVar3;
  STGameObjC *this_01;
  int iVar6;
  uint uVar7;
  int local_EAX_51;
  int iVar5;
  int local_EAX_112;
  int iVar8;
  int local_EAX_443;
  int local_EAX_514;
  int SVar9;
  STGameObjC *pSVar8;
  int local_EAX_1222;
  int local_EAX_1250;
  STGameObjC *pSVar9;
  STSharkC_field_0257State SVar10;
  int local_EAX_1706;
  int local_EAX_1797;
  int uVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_EDI;
  AnonShape_0041AF40_F59F8577 *pAVar12;
  AnonShape_0041AF40_F59F8577 local_30;
  uint local_10;
  undefined4 local_c;
  STGameObjC *local_8;

  iVar6 = st::fn_00401A3C((AnonShape_0041C710_C4D46939 *)this);
  this_00 = &this->field_01D5;
  if (iVar6 == 0) {
    iVar6 = 0;
    uVar7 = st::fn_004052CC((STT3DSprC *)this_00);
    st::fn_006EABF0((void *)this->field_0211,uVar7,iVar6);
    iVar5 = st::fn_004050D8((AnonShape_0041CAF0_1630B9E0 *)this);
    uVar7 = (uint)(iVar5 == 1);
    local_EAX_112 = st::fn_004052CC((STT3DSprC *)this_00);
    st::fn_006E6870((void *)this->field_0211,local_EAX_112,uVar7);
  }
  else {
    iVar6 = 1;
    uVar7 = st::fn_004052CC((STT3DSprC *)this_00);
    st::fn_006EABF0((void *)this->field_0211,uVar7,iVar6);
    iVar6 = 1;
    local_EAX_51 = st::fn_004052CC((STT3DSprC *)this_00);
    st::fn_006E6870((void *)this->field_0211,local_EAX_51,iVar6);
  }
  if (0 < this->field_0241) {
    st::fn_0040116D
              ((STT3DSprC *)this_00,PTR_00806724->entries[this->field_0241 + -1],
               (int)PTR_00806724->field_002C);
    if ((g_playSystem_00802A38->field_00E4 % 3 == 0) &&
       (iVar6 = st::machine_word_boundary_cast<int>(this->field_0241 + -1), this->field_0241 = iVar6, iVar6 < 1)) {
      st::fn_00403FDA(this_00,'\x0e');
    }
    goto cf_common_exit_0058E925;
  }
  if (g_playSystem_00802A38->field_00E4 <= this->field_024F) goto cf_common_exit_0058E925;
  switch(this->field_0257) {
  case CASE_0:
    iVar6 = this->vfunc_20();
    if (iVar6 == -1) {
      local_EAX_1706 =
           st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_shark.cpp"),0x2dc,0,-5,st::mutable_c_string("%s"),
                              "stop move error");
      if (local_EAX_1706 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40
                (0xffff,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\To_shark.cpp"),0x2dd);
    }
    else if (iVar6 == 1) {
      SVar10 = st::fn_00404A4D(this,(uint)(0x1d < this->field_0253));
      this->field_0257 = SVar10;
      this->field_0253 = st::machine_word_boundary_cast<int>(this->field_0253 + 1);
    }
    break;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  case CASE_1:
  case CASE_2:
  case CASE_3:
    iVar6 = (*this->vtable->MoveStep)((STGameObjC *)this,unaff_EDI);
    if (iVar6 == 0) {
LAB_0058ea68:
      if (this->field_023D == 0) {
        if (this->field_0253 < 0x1f) {
          if (iVar6 == 2) {
            this->field_0253 = st::machine_word_boundary_cast<int>(this->field_0253 + 1);
          }
        }
        else {
          iVar6 = this->vfunc_20();
          if (iVar6 == 1) {
            this->field_0253 = 0;
            SVar10 = st::fn_00404A4D(this,1);
            this->field_0257 = SVar10;
          }
        }
      }
      else {
        sVar1 = this->field_0231;
        sVar2 = this->field_0235;
        sVar3 = this->field_0233;
        if (((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) &&
             ((-1 < sVar3 && ((sVar3 < g_worldGrid.sizeY && (-1 < sVar2)))))) &&
            (sVar2 < g_worldGrid.sizeZ)) &&
           ((((this_01 = (STGameObjC *)
                         STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0],
              local_8 = this_01, this_01 != nullptr &&
              (st::fn_004018C5
                         ((STFishC *)this_01,st::pointer_boundary_cast<short *>(&this->field_0231),st::pointer_boundary_cast<short *>(&this->field_0233),st::pointer_boundary_cast<short *>(&this->field_0235)),
              this->field_0047 == this->field_0231)) && (this->field_0049 == this->field_0233)) &&
            ((this->field_004B == this->field_0235 &&
             (pSVar9 = st::fn_004028BA
                                 (g_allPlayers_007FA174,*(char *)&this->field_0249,this->field_024D,
                                  CASE_1), this_01 == pSVar9)))))) goto LAB_0058e87e;
      }
    }
    else {
      if (iVar6 != 1) {
        if (iVar6 != 2) {
          local_EAX_514 =
               st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_shark.cpp"),0x2d3,0,0,st::mutable_c_string("%s"),
                                  "STSharkC::LifeShark Error Move");
          if (local_EAX_514 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        goto LAB_0058ea68;
      }
      if (this->field_0257 == CASE_4) break;
      SVar9 = st::fn_0040259A(this);
      if (this->field_023D == 0) {
        local_EAX_1250 = st::fn_004056FA(this);
        this->field_024F = local_EAX_1250;
        this->field_0257 = CASE_0;
        break;
      }
      sVar1 = this->field_0235;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      local_c = CONCAT22(extraout_var_00,sVar1);
      sVar2 = this->field_0233;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      local_10 = CONCAT22(extraout_var,sVar2);
      this->field_0257 = SVar9;
      sVar3 = this->field_0231;
      if (((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
         ((sVar2 < 0 ||
          (((g_worldGrid.sizeY <= sVar2 || (sVar1 < 0)) || (g_worldGrid.sizeZ <= sVar1)))))) {
        local_8 = nullptr;
      }
      else {
        local_8 = (STGameObjC *)
                  STGridAt3D(g_worldGrid, sVar3, sVar2, sVar1).objects[0];
      }
      if (((this->field_0047 != sVar3) || (this->field_0049 != sVar2)) ||
         ((this->field_004B != sVar1 ||
          (pSVar8 = st::fn_004028BA
                              (g_allPlayers_007FA174,*(char *)&this->field_0249,this->field_024D,
                               CASE_1), local_8 != pSVar8)))) {
        iVar6 = st::fn_00404318
                          ((AnonReceiver_004167A0 *)this,this->field_0231,this->field_0233,
                           this->field_0235);
        st::fn_00405C90(this,8);
        st::fn_00405105(this,6);
        if (iVar6 != 0) {
          local_EAX_1222 = st::fn_004056FA(this);
          this->field_024F = local_EAX_1222;
          this->field_0257 = CASE_0;
        }
        break;
      }
      memset(&DAT_00811728, 0, 0x1c); /* compiler bulk-zero initialization */
      iVar6 = 0;
LAB_0058e87e:
      DAT_00811728 = 1000;
      pAVar12 = &local_30;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined4 *)pAVar12 = 0;
        pAVar12 = (AnonShape_0041AF40_F59F8577 *)&pAVar12->field_0x4;
      }
      _DAT_00811730 = 0xff;
      _DAT_00811734 = 0xffff;
      STPiece<8,4>(local_30) = local_8->field_0008;
      STPiece<12,4>(local_30) = 2;
      local_30.field_0010 = 0x110;
      local_30.field_0014 = &DAT_00811728;
      local_8->GetMessage(&local_30);
      this->field_023D = 0;
      iVar6 = st::fn_00404183
                        ((STT3DSprC *)this_00,8,PTR_00806764,st::mutable_c_string("expshark"),CASE_1D);
      if (iVar6 != 0) {
        return;
      }
      st::fn_00405240((STT3DSprC *)this_00,8,g_playSystem_00802A38->field_00E4);
      this->field_0257 = CASE_4;
      st::fn_00404264((STT3DSprC *)this_00,0xe);
      st::fn_00402A90((STT3DSprC *)this_00);
    }
    break;
  case CASE_4:
    iVar6 = st::fn_004022AC((STT3DSprC *)this_00,'\b');
    iVar8 = st::fn_004042AF(this_00,'\b');
    if (iVar8 == iVar6 + -1) {
      this->field_0257 = CASE_7;
      st::fn_00404264((STT3DSprC *)this_00,8);
      st::fn_0040227A(this);
    }
    break;
  case CASE_5:
    iVar6 = this->vfunc_20();
    if (iVar6 == -1) {
      local_EAX_443 =
           st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_shark.cpp"),0x265,0,0,st::mutable_c_string("%s"),
                              "stop move error");
      if (local_EAX_443 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    else if (iVar6 == 1) {
      st::fn_00405C90(this,10);
      st::fn_00405105(this,8);
      st::fn_00404318
                ((AnonReceiver_004167A0 *)this,this->field_0231,this->field_0233,this->field_0235);
      this->field_0257 = CASE_2;
    }
    break;
  case CASE_6:
    iVar6 = st::fn_0040314D((AnonShape_00417830_9254190A *)this);
    if (iVar6 == 0) {
      uVar6 = st::fn_004056FA(this);
      this->field_0257 = CASE_0;
      this->field_024F = uVar6;
      this->field_0253 = 0xf;
      return;
    }
    if (((iVar6 < 2) || (3 < iVar6)) &&
       (local_EAX_1797 =
             st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_shark.cpp"),0x2f8,0,0,st::mutable_c_string("%s"),
                                "STSharkC::LifeShark Error Move"), local_EAX_1797 != 0)) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  default:
    goto switchD_0058e67d_default;
  }
cf_common_exit_0058E925:
  if ((this->field_0257 != CASE_4) && (this->field_0257 != CASE_7)) {
    iVar6 = (0x18 - (int)this->field_006C / 0xf) % 0x18;
    uVar7 = st::machine_word_boundary_cast<uint>(g_playSystem_00802A38->field_00E4 % 0x1e);
    local_10 = uVar7 + (iVar6 / 3) * 0x1e;
    st::fn_00401064
              ((STT3DSprC *)this_00,'\x0e',
               uVar7 + (((iVar6 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0x1e);
    st::fn_004052FE((STT3DSprC *)this_00,'\x0e',local_10);
    st::fn_004030BC((STT3DSprC *)this_00,'\x0e');
  }
  this->vfunc_D8();
switchD_0058e67d_default:
  return;
}

// 00590010 STSharkC::CreateShark
#line 4 "decomp/ST.exe/functions/00590010/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_shark.cpp
   STSharkC::CreateShark */

undefined4 __thiscall
st::fn_00590010
          (STSharkC *this,int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar3;
  undefined4 uVar2;
  undefined4 local_38 [5];
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  memset(local_38, 0, 0x34); /* compiler bulk-zero initialization */
  local_14 = param_4;
  local_8 = param_7;
  local_38[1] = param_9;
  local_18 = param_8;
  local_38[0] = 0x8c;
  local_38[2] = 0;
  local_38[3] = 1;
  local_10 = param_6;
  local_c = param_5;
  if ((((param_1 < 0) || (param_2 < 0)) || (param_3 < 0)) ||
     (((g_worldGrid.sizeX <= param_1 || (g_worldGrid.sizeY <= param_2)) || (4 < param_3)))) {
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_shark.cpp"),0x4bb,0,0,st::mutable_c_string("%s"),
                               "STSharkC::CreateShark - Bad paramaters");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    param_1 = 0;
    param_2 = 0;
    param_3 = 0;
  }
  local_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  g_playSystem_00802A38->vfunc_08(0x129,0,(short)&param_9,(short)local_38,0);
  return param_9;
}

