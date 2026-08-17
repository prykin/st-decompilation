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
   direct_offsets={10:2,14:3,18:5,1c:0}

   [STSwitchEnumApplier] Switch target field_0257 uses
   /SubmarineTitans/Recovered/Enums/STSharkC_field_0257State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8 */

int __thiscall st::fn_0058D7C0(STSharkC *this,STMessage *message)

{
  int scalar_local_1c;

  short *psVar1;
  STMessageId SVar2;
  STSharkC *this_00;
  int local_EAX_68;
  int iVar8;
  int local_EAX_696;
  int local_EAX_939;
  int local_EAX_1180;
  int iVar9;
  int iVar4;
  uint uVar5;
  short sVar6;
  byte *puVar7;
  byte *pbVar8;
  byte *puVar9;
  AnonShape_0058D7C0_99A937C6 *pAVar10;
  byte *pbVar11;
  InternalExceptionFrame local_80;
  void *local_3c;
  uint local_38;
  int local_34;
  ushort *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  STSharkC *local_20;
  undefined4 *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  AnonShape_0058D7C0_99A937C6 *local_c;
  uint local_8;

  if ((this->field_0257 == CASE_8) && (message->id != MESS_SHARED_0003)) {
    return 0;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_20 = this;
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
  /* ST_CALLSITE[0058D81F]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  st::fn_00404F07((STSprGameObjC *)local_20,message);
  SVar2 = message->id;
  if (SVar2 < MESS_ID_ALLCREATE) {
    if (SVar2 == MESS_TORPHIT) {
      if (this_00->field_0257 == CASE_4) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      puVar7 = (byte *)(&this_00->field_01D5);
      this_00->field_023D = 0;
      /* ST_CALLSITE[0058DEE0]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      st::fn_00404264((STT3DSprC *)puVar7,0xe);
      st::fn_00402A90((STT3DSprC *)puVar7);
      /* ST_CALLSITE[0058DEFE]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      st::fn_00404183((STT3DSprC *)puVar7,8,PTR_00806764,st::mutable_c_string("expshark"),CASE_1D);
      /* ST_CALLSITE[0058DF13]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      st::fn_00405240((STT3DSprC *)puVar7,8,g_playSystem_00802A38->field_00E4);
      this_00->field_0257 = CASE_4;
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (MESS_SHARED_0003 < SVar2) {
      if (SVar2 != MESS_SHARED_010F) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      /* ST_CALLSITE[0058DD51]: CALL 0x004018d4; direct=004018D4 STT3DSprC::SaveSpr */
      local_18 = (byte *)st::fn_004018D4((STT3DSprC *)&this_00->field_01D5,&local_8);
      /* ST_CALLSITE[0058DD5F]: CALL 0x0040119a; direct=0040119A STAllPlayersC::SaveGObjData */
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
      puVar7 = (byte *)&this_00->field_0x25b;
      pAVar10 = local_c;
      memmove(pAVar10, puVar7, 0x34); /* compiler REP MOVS byte copy */
      *(undefined4 *)&local_c->field_0xc = 2;
      local_c->field_0034 = this_00->field_0231;
      local_c->field_0036 = this_00->field_0233;
      *(short *)&local_c->field_0x38 = this_00->field_0235;
      *(undefined2 *)&local_c->field_0x3a = this_00->field_0237;
      *(undefined4 *)&local_c->field_0x3c = this_00->field_0249;
      *(undefined2 *)&local_c->field_0x40 = this_00->field_024D;
      local_c->field_0042 = this_00->field_023D;
      *(uint *)&local_c->field_0x46 = this_00->field_024F;
      *(int *)&local_c->field_0x4a = this_00->field_0253;
      local_c->field_004E = this_00->field_0257;
      local_c->field_0052 = this_00->field_0241;
      *(undefined4 *)&local_c->field_0x56 = this_00->field_0245;
      *(undefined4 *)&local_c->field_0x5a = 0;
      local_c->field_005E = local_8;
      pbVar8 = local_18;
      pbVar11 = &local_c->field_0x62;
      memmove(pbVar11, pbVar8, local_8); /* compiler REP MOVS byte copy */
      uVar5 = 0;
      *(uint *)(&local_c->field_0x62 + local_8) = local_10;
      pbVar8 = local_14;
      pbVar11 = &local_c[1].field_0x2 + local_8;
      memmove(pbVar11, pbVar8, local_10); /* compiler REP MOVS byte copy */
      /* ST_CALLSITE[0058DE90]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
      st::fn_004025F9
                (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_c,
                 local_10 + 0x66 + local_8);
      st::fn_006AB060(&local_18);
      st::fn_006AB060(&local_14);
      st::fn_006AB060(&local_c);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (SVar2 == MESS_SHARED_0003) {
      /* ST_CALLSITE[0058DCE7]: CALL 0x00405952; direct=00405952 sub_004167A0 */
      st::fn_00405952(this_00);
      st::fn_00404EC1(this_00->field_005B,this_00->field_005D,this_00->field_005F,
                         this_00->field_008E,(AnonShape_00495FF0_59081BDD *)this_00);
      st::fn_00403189(this_00->field_0018);
      st::fn_004021D5((STT3DSprC *)&this_00->field_01D5);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (SVar2 == MESS_ID_NONE) {
      /* ST_CALLSITE[0058DCCD]: CALL 0x00401efb; direct=00401EFB STSharkC::LifeShark */
      st::fn_00401EFB(this_00);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (SVar2 != MESS_ID_CREATE) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    this_00->field_0257 = CASE_8;
    this_00->field_023D = 0;
    this_00->field_0241 = 0;
    local_1c = (undefined4 *)(message->arg0).u32;
    if ((uint)local_1c[3] < 2) {
      this_00->field_024F = 0;
      this_00->field_0253 = 0;
      this_00->field_0249 = 0xff;
      /* ST_CALLSITE[0058D9E8]: CALL 0x004056fa; direct=004056FA STSharkC::sub_0058FF70 */
      iVar8 = st::fn_004056FA(this_00);
      this_00->field_024F = iVar8;
      puVar7 = (byte *)((message->arg0).ptr);
      puVar9 = (byte *)&this_00->field_0x25b;
      memmove(puVar9, puVar7, 0x34); /* compiler REP MOVS byte copy */
      st::fn_0040548E((AnonShape_0058EEB0_904026FD *)this_00);
      this_00->field_005B = 0xffff;
      this_00->field_005D = 0xffff;
      this_00->field_005F = 0xffff;
      st::fn_00402B5D(this_00,1);
      iVar4 = st::fn_0040295F(this_00,(short)this_00->field_026F,(short)this_00->field_0273,
                                 (short)this_00->field_0277,1);
      if (iVar4 == 0) {
        iVar4 = st::fn_00401AAA(this_00,8);
        if (iVar4 == 0) {
          puVar7 = (byte *)(&this_00->field_01D5);
          /* ST_CALLSITE[0058DAA9]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
          iVar4 = st::fn_00404183
                            ((STT3DSprC *)puVar7,0xe,PTR_0080676c,st::mutable_c_string("shark1"),CASE_1D);
          if (iVar4 != 0) {
            st::fn_006A5E40
                      (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\To_shark.cpp"),0x9f);
          }
          st::fn_00405AA6(puVar7,'\x0e');
          /* ST_CALLSITE[0058DAE2]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
          st::fn_00405240((STT3DSprC *)puVar7,0xe,g_playSystem_00802A38->field_00E4);
          if (local_1c[3] == 0) {
            /* ST_CALLSITE[0058DB39]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
            st::fn_004045D9
                      ((STT3DSprC *)puVar7,
                       (float)this_00->field_026F * _DAT_007904f8 + _DAT_007904f4,
                       (float)this_00->field_0273 * _DAT_007904f8 + _DAT_007904f4,
                       (float)this_00->field_0277 * _DAT_00790504 + _DAT_00790500);
            iVar4 = st::fn_00405DC1(this_00,*(short *)&this_00->field_027B);
            if (iVar4 == 0) {
LAB_0058dc72:
              this_00->field_0245 = (int)PTR_00806724->field_002C;
              this_00->field_0231 = this_00->field_0047;
              this_00->field_0233 = this_00->field_0049;
              this_00->field_0235 = this_00->field_004B;
              this_00->field_0257 = CASE_0;
            }
            else {
              local_EAX_939 =
                   st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_shark.cpp"),0xaa,0,0,
                                      st::mutable_c_string("%s"),"STSharkC::GetMessage Dir Object err");
              if (local_EAX_939 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              /* ST_CALLSITE[0058DB7A]: CALL 0x0040227a; direct=0040227A STSharkC::sub_0058EFE0 */
              st::fn_0040227A(this_00);
            }
          }
          else {
            local_1c = (undefined4 *)this_00->field_026F;
            this_00->field_0241 = (int)PTR_00806724->entryCount;
            if (local_1c == nullptr) {
              this_00->field_027B = 0;
            }
            else if (this_00->field_0273 == 0) {
              this_00->field_027B = 0x10e;
            }
            else if (local_1c == (undefined4 *)(g_worldGrid.sizeX + -1)) {
              this_00->field_027B = 0xb4;
            }
            else if (this_00->field_0273 == g_worldGrid.sizeY + -1) {
              this_00->field_027B = 0x5a;
            }
            /* ST_CALLSITE[0058DC2E]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
            st::fn_004045D9
                      ((STT3DSprC *)puVar7,(float)(int)local_1c * _DAT_007904f8 + _DAT_007904f4,
                       (float)this_00->field_0273 * _DAT_007904f8 + _DAT_007904f4,
                       (float)this_00->field_0277 * _DAT_00790504 + _DAT_00790500);
            iVar4 = st::fn_00405DC1(this_00,*(short *)&this_00->field_027B);
            if (iVar4 == 0) goto LAB_0058dc72;
            local_EAX_1180 =
                 st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_shark.cpp"),200,0,0,st::mutable_c_string("%s"),
                                    "STSharkC::GetMessage Dir Object err");
            if (local_EAX_1180 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            /* ST_CALLSITE[0058DC6B]: CALL 0x0040227a; direct=0040227A STSharkC::sub_0058EFE0 */
            st::fn_0040227A(this_00);
          }
        }
        else {
          local_EAX_696 =
               st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_shark.cpp"),0x99,0,0,st::mutable_c_string("%s"),
                                  "STSharkC::GetMessage Phase Count err");
          if (local_EAX_696 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          /* ST_CALLSITE[0058DA87]: CALL 0x0040227a; direct=0040227A STSharkC::sub_0058EFE0 */
          st::fn_0040227A(this_00);
        }
      }
      else {
        /* ST_CALLSITE[0058DA49]: CALL 0x0040227a; direct=0040227A STSharkC::sub_0058EFE0 */
        st::fn_0040227A(this_00);
      }
    }
    else if (local_1c[3] == 2) {
      puVar7 = (byte *)(local_1c);
      puVar9 = (byte *)&this_00->field_0x25b;
      memmove(puVar9, puVar7, 0x34); /* compiler REP MOVS byte copy */
      local_8 = STField<uint>(local_1c,0x5e);
      /* ST_CALLSITE[0058D8A5]: CALL 0x0040551f; direct=0040551F STAllPlayersC::RestoreGObjData */
      st::fn_0040551F
                ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x66 + (int)local_1c));
      puVar7 = (byte *)(local_1c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      this_00->field_0231 = *(short *)(local_1c + 0xd);
      this_00->field_0233 = STField<short>(local_1c,0x36);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      this_00->field_0235 = *(short *)(local_1c + 0xe);
      this_00->field_0237 = STField<undefined2>(local_1c,0x3a);
      this_00->field_0249 = local_1c[0xf];
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      this_00->field_024D = *(undefined2 *)(local_1c + 0x10);
      this_00->field_023D = STField<undefined4>(local_1c,0x42);
      this_00->field_024F = STField<uint>(local_1c,0x46);
      this_00->field_0253 = STField<int>(local_1c,0x4a);
      this_00->field_0257 = STField<STSharkC_field_0257State>(local_1c,0x4e);
      this_00->field_0241 = STField<int>(local_1c,0x52);
      this_00->field_0245 = STField<undefined4>(local_1c,0x56);
      local_3c = st::fn_006AAC70(0x44);
      if (local_3c != nullptr) {
        iVar4 = 0;
        do {
          *(int **)(iVar4 + (int)local_3c) = PTR_0080676c;
          iVar4 = iVar4 + 4;
        } while (iVar4 < 0x44);
        if (((this_00->field_0241 < 1) ||
            (PTR_00806724 == nullptr)) ||
           (PTR_00806724 == (AnonShape_GLOBAL_00806724_3210464F *)0xffffffd0)) {
          local_38 = 0;
        }
        else {
          local_38 = PTR_00806724->entries[this_00->field_0241 + -1];
        }
        local_34 = (int)PTR_00806724->field_002C;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        local_30 = PTR_008073cc;
        /* ST_CALLSITE[0058D99C]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
        st::fn_00404CA5
                  ((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,
                   (AnonShape_004AD790_77673787 *)((int)puVar7 + 0x62));
        st::fn_006AB060(&local_3c);
        /* ST_CALLSITE[0058D9C6]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
        st::fn_00401325
                  (this_00->field_005B,this_00->field_005D,this_00->field_005F,1,
                   (RecoveredRecord_DumpClassC_00495EC0 *)this_00);
      }
    }
    if (this_00->field_0257 == CASE_8) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    iVar4 = st::fn_004010C3((int)this_00);
    if (iVar4 != 0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
LAB_0058e0f9:
    /* ST_CALLSITE[0058E0FB]: CALL 0x0040227a; direct=0040227A STSharkC::sub_0058EFE0 */
    st::fn_0040227A(this_00);
  }
  else {
    switch(SVar2) {
    case MESS_STOCTOPUSC_0112:
      st::fn_00402A90((STT3DSprC *)&this_00->field_01D5);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    case MESS_STSPRGAMEOBJC_0113:
      /* ST_CALLSITE[0058E0CD]: CALL dword ptr [EDX] */
      (**(code **)this_00->field_01D5)();
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case MESS_STOCTOPUSC_0127:
      psVar1 = &this_00->field_0231;
      scalar_local_1c = (int)(short)((message->arg1).words.low * 0xc9 + 100); /* split integer lifetime from pointer-typed SSA storage */
      iVar4 = st::fn_004019E7((short)this_00->field_027F,(short)this_00->field_0283,
                                 (short)this_00->field_0287,(short)this_00->field_028B,(int)this_00,
                                 (int)(short)((message->arg0).words.low * 0xc9 + 100),scalar_local_1c,
                                 (int)(short)((message->arg0).words.high * 0xc9 + 100),
                                 (int)(short)((message->arg1).words.high * 0xc9 + 100),st::pointer_boundary_cast<undefined2 *>(psVar1),
                                 (undefined2 *)&this_00->field_0233,&this_00->field_0235);
      if (iVar4 != 0) {
        sVar6 = *psVar1;
        sVar6 = STBiasedDiv16(sVar6, 0xc9); /* exact signed 16-bit grid-index division */
        *psVar1 = sVar6;
        sVar6 = this_00->field_0233;
        sVar6 = STBiasedDiv16(sVar6, 0xc9); /* exact signed 16-bit grid-index division */
        this_00->field_0233 = sVar6;
        sVar6 = this_00->field_0235;
        sVar6 = STBiasedDiv16(sVar6, 200); /* exact signed 16-bit grid-index division */
        this_00->field_0235 = sVar6;
        this_00->field_0257 = CASE_5;
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      break;
    case MESS_HITKILL:
      uVar5 = st::fn_004052CC((STT3DSprC *)&this_00->field_01D5);
      st::fn_006EAB60((void *)this_00->field_0211,uVar5);
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
   while changing only function arity; restore Ghidra DefaultDataType

   [STSwitchEnumApplier] Switch target field_0257 uses
   /SubmarineTitans/Recovered/Enums/STSharkC_field_0257State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8 */

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
  undefined4 **ppuVar12;
  undefined4 *local_30 [8];
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
    /* ST_CALLSITE[0058E60D]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
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
    /* ST_CALLSITE[0058EBC5]: CALL dword ptr [EDX + 0x20] */
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
    /* ST_CALLSITE[0058E745]: CALL dword ptr [EAX + 0x1c] */
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
          /* ST_CALLSITE[0058EB87]: CALL dword ptr [EAX + 0x20] */
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
              /* ST_CALLSITE[0058EB17]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
              (st::fn_004018C5
                         ((STFishC *)this_01,&this->field_0231,&this->field_0233,&this->field_0235),
              this->field_0047 == this->field_0231)) && (this->field_0049 == this->field_0233)) &&
            ((this->field_004B == this->field_0235 &&
             /* ST_CALLSITE[0058EB66]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
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
      /* ST_CALLSITE[0058E799]: CALL 0x0040259a; direct=0040259A STSharkC::sub_0058F430 */
      SVar9 = st::fn_0040259A(this);
      if (this->field_023D == 0) {
        /* ST_CALLSITE[0058EA52]: CALL 0x004056fa; direct=004056FA STSharkC::sub_0058FF70 */
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
          /* ST_CALLSITE[0058E862]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          (pSVar8 = st::fn_004028BA
                              (g_allPlayers_007FA174,*(char *)&this->field_0249,this->field_024D,
                               CASE_1), local_8 != pSVar8)))) {
        iVar6 = st::fn_00404318
                          ((AnonReceiver_004167A0 *)this,this->field_0231,this->field_0233,
                           this->field_0235);
        st::fn_00405C90(this,8);
        st::fn_00405105(this,6);
        if (iVar6 != 0) {
          /* ST_CALLSITE[0058EA36]: CALL 0x004056fa; direct=004056FA STSharkC::sub_0058FF70 */
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
      ppuVar12 = local_30;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *ppuVar12 = nullptr;
        ppuVar12 = ppuVar12 + 1;
      }
      _DAT_00811730 = 0xff;
      _DAT_00811734 = 0xffff;
      local_30[2] = (undefined4 *)local_8->field_0008;
      local_30[3] = (undefined4 *)0x2;
      local_30[4] = (undefined4 *)0x110;
      local_30[5] = &DAT_00811728;
      /* ST_CALLSITE[0058E8CB]: CALL dword ptr [EAX] */
      (*local_8->vtable->GetMessage)((STGameObjC *)local_8,(int)local_30);
      this->field_023D = 0;
      /* ST_CALLSITE[0058E8E8]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar6 = st::fn_00404183
                        ((STT3DSprC *)this_00,8,PTR_00806764,st::mutable_c_string("expshark"),CASE_1D);
      if (iVar6 != 0) {
        return;
      }
      /* ST_CALLSITE[0058E906]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      st::fn_00405240((STT3DSprC *)this_00,8,g_playSystem_00802A38->field_00E4);
      this->field_0257 = CASE_4;
      /* ST_CALLSITE[0058E919]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      st::fn_00404264((STT3DSprC *)this_00,0xe);
      st::fn_00402A90((STT3DSprC *)this_00);
    }
    break;
  case CASE_4:
    /* ST_CALLSITE[0058E688]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    iVar6 = st::fn_004022AC((STT3DSprC *)this_00,'\b');
    iVar8 = st::fn_004042AF(this_00,'\b');
    if (iVar8 == iVar6 + -1) {
      this->field_0257 = CASE_7;
      /* ST_CALLSITE[0058E6AF]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      st::fn_00404264((STT3DSprC *)this_00,8);
      /* ST_CALLSITE[0058E6B6]: CALL 0x0040227a; direct=0040227A STSharkC::sub_0058EFE0 */
      st::fn_0040227A(this);
    }
    break;
  case CASE_5:
    /* ST_CALLSITE[0058E6C4]: CALL dword ptr [EDX + 0x20] */
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
      /* ST_CALLSITE[0058EC8F]: CALL 0x004056fa; direct=004056FA STSharkC::sub_0058FF70 */
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
    /* ST_CALLSITE[0058E9CD]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    st::fn_00401064
              ((STT3DSprC *)this_00,'\x0e',
               uVar7 + (((iVar6 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0x1e);
    /* ST_CALLSITE[0058E9DA]: CALL 0x004052fe; direct=004052FE STT3DSprC::SetCurShad */
    st::fn_004052FE((STT3DSprC *)this_00,'\x0e',local_10);
    /* ST_CALLSITE[0058E9E3]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
    st::fn_004030BC((STT3DSprC *)this_00,'\x0e');
  }
  /* ST_CALLSITE[0058E9EC]: CALL dword ptr [EDX + 0xd8] */
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
  /* ST_CALLSITE[005900DA]: CALL dword ptr [EAX + 0x8] */
  g_playSystem_00802A38->vfunc_08(0x129,0,(short)&param_9,(short)local_38,0);
  return param_9;
}

