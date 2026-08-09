#include "st/generated.hpp"
// Generated translation unit: source/original/Igor/To_fish.cpp

// 0057BF60 STFishC::GetMessage
#line 4 "decomp/ST.exe/functions/0057BF60/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_fish.cpp
   STFishC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00402838|0057BF60; family_names=STFishC::GetMessage; ret4=11;
   direct_offsets={10:2,14:3,18:5,1c:0} */

int __thiscall st::fn_0057BF60(STFishC *this,STMessage *message)

{
  undefined1 *puVar1;
  STMessageId SVar2;
  STSprGameObjC *this_00;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  byte *puVar9;
  byte *pbVar10;
  byte *puVar11;
  AnonShape_0057BF60_C1393638 *pAVar12;
  byte *pbVar13;
  InternalExceptionFrame local_80;
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ushort *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  STSprGameObjC *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  AnonShape_0057BF60_C1393638 *local_c;
  uint local_8;

  if ((this->field_023B == 6) && (message->id != MESS_SHARED_0003)) {
    return 0;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_1c = (STSprGameObjC *)this;
  iVar4 = st::fn_0072D7F0(local_80.jumpBuffer,0);
  this_00 = local_1c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar5 = st::fn_006AD4D0("E:\\__titans\\Igor\\To_fish.cpp",0x663,0,iVar4,"%s",
                               "STFishC::GetMessage");
    if (iVar5 == 0) {
      st::fn_006A5E40(iVar4,0,"E:\\__titans\\Igor\\To_fish.cpp",0x664);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00404F07(local_1c,message);
  SVar2 = message->id;
  if (MESS_TORPHIT < SVar2) {
    switch(SVar2) {
    case MESS_STOCTOPUSC_0112:
      st::fn_00402A90((STT3DSprC *)&this_00->field_01D5);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    case MESS_STSPRGAMEOBJC_0113:
      (**(code **)this_00->field_01D5)();
      g_currentExceptionFrame = local_80.previous;
      return 0;
    default:
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case MESS_STOCTOPUSC_0127:
      goto switchD_0057c669_caseD_127;
    case MESS_HITKILL:
      if (*(int *)&this_00->field_0x23b == 3) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      uVar7 = st::fn_004052CC((STT3DSprC *)&this_00->field_01D5);
      st::fn_006EAB60(this_00->field_0211,uVar7);
      st::fn_004032BA((STFishC *)this_00);
      *(undefined4 *)&this_00->field_0x23b = 3;
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
  }
  if (SVar2 == MESS_TORPHIT) {
    if (*(int *)&this_00->field_0x23b == 0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    puVar9 = (byte *)(&this_00->field_01D5);
    *(undefined4 *)&this_00->field_0x23b = 5;
    st::fn_00404264((STT3DSprC *)puVar9,0xe);
    st::fn_00402A90((STT3DSprC *)puVar9);
    st::fn_00404183((STT3DSprC *)puVar9,8,PTR_00806774,"explsna",CASE_1D);
    st::fn_00405240((STT3DSprC *)puVar9,8,g_playSystem_00802A38->field_00E4);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (MESS_SHARED_0003 < SVar2) {
    if (SVar2 != MESS_SHARED_010F) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    local_14 = (byte *)st::fn_004018D4((STT3DSprC *)&this_00->field_01D5,&local_8);
    local_18 = (byte *)st::fn_0040119A((STAllPlayersC *)this_00,(int *)&local_10);
    local_c = st::fn_006AAC70(local_10 + 0x46 + local_8);
    if (local_14 == nullptr) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (local_c == nullptr) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    puVar9 = (byte *)((int)&this_00->field_0242 + 1);
    pAVar12 = local_c;
    memmove(pAVar12, puVar9, 0x28); /* compiler REP MOVS byte copy */
    *(undefined4 *)&local_c->field_0xc = 2;
    local_c->field_0028 = this_00->field_0231;
    local_c->field_002C = *(undefined4 *)&this_00->field_0x23b;
    local_c->field_0036 = *(undefined4 *)((int)&this_00->field_023E + 1);
    *(undefined2 *)&local_c->field_0x30 = *(undefined2 *)&this_00->field_0x235;
    *(undefined2 *)&local_c->field_0x32 = *(undefined2 *)&this_00->field_0x237;
    *(undefined2 *)&local_c->field_0x34 = *(undefined2 *)&this_00->field_0x239;
    *(undefined4 *)&local_c->field_0x3a = 0;
    local_c->field_003E = local_8;
    pbVar10 = local_14;
    pbVar13 = &local_c->field_0x42;
    memmove(pbVar13, pbVar10, local_8); /* compiler REP MOVS byte copy */
    uVar7 = 0;
    *(uint *)(&local_c->field_0x42 + local_8) = local_10;
    pbVar10 = local_18;
    pbVar13 = &local_c[1].field_0x2 + local_8;
    memmove(pbVar13, pbVar10, local_10); /* compiler REP MOVS byte copy */
    st::fn_004025F9
              (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_c,
               (AnonShape_0060EA30_DCEB68AD *)(local_10 + 0x46 + local_8));
    st::fn_006AB060(&local_14);
    st::fn_006AB060(&local_18);
    st::fn_006AB060(&local_c);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (SVar2 == MESS_SHARED_0003) {
    st::fn_00405952(this_00);
    st::fn_00404EC1(*(short *)&this_00->field_0x5b,*(short *)&this_00->field_0x5d,
                       *(short *)&this_00->field_0x5f,this_00->field_0x8e,
                       (AnonShape_00495FF0_59081BDD *)this_00);
    st::fn_00403189(this_00->field_0018);
    st::fn_004021D5((STT3DSprC *)&this_00->field_01D5);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (SVar2 == MESS_ID_NONE) {
    if (*(int *)&this_00->field_0x23b == 3) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    st::fn_00405F06((STFishC *)this_00);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (SVar2 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  local_20 = (message->arg0).ptr;
  if (1 < (uint)local_20[3]) {
    if (local_20[3] == 2) {
      puVar9 = (byte *)(local_20);
      puVar11 = (byte *)((int)&this_00->field_0242 + 1);
      memmove(puVar11, puVar9, 0x28); /* compiler REP MOVS byte copy */
      local_8 = STField<uint>(local_20,0x3e);
      st::fn_0040551F
                ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x46 + (int)local_20));
      puVar9 = (byte *)(local_20);
      *(undefined4 *)&this_00->field_0x23b = local_20[0xb];
      this_00->field_0231 = local_20[10];
      *(undefined4 *)((int)&this_00->field_023E + 1) = STField<undefined4>(local_20,0x36);
      *(undefined2 *)&this_00->field_0x235 = *(undefined2 *)(local_20 + 0xc);
      *(undefined2 *)&this_00->field_0x237 = STField<undefined2>(local_20,0x32);
      *(undefined2 *)&this_00->field_0x239 = *(undefined2 *)(local_20 + 0xd);
      local_3c = st::fn_006AAC70(0x44);
      if (local_3c != nullptr) {
        iVar6 = 0;
        do {
          if (iVar6 == 8) {
            STField<int *>(local_3c,0x20) = PTR_00806774;
          }
          else {
            *(int **)((int)local_3c + iVar6 * 4) = PTR_0080676c;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x11);
        local_38 = 0;
        local_34 = 0;
        local_30 = PTR_008073cc;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        st::fn_00404CA5
                  ((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,
                   (AnonShape_004AD790_77673787 *)((int)puVar9 + 0x42));
        st::fn_006AB060(&local_3c);
        st::fn_00401325
                  (*(short *)&this_00->field_0x5b,*(short *)&this_00->field_0x5d,
                   *(short *)&this_00->field_0x5f,1,(RecoveredRecord_DumpClassC_00495EC0 *)this_00);
        st::fn_00401064((STT3DSprC *)&this_00->field_01D5,'\x0e',0);
      }
    }
    goto cf_common_exit_0057C3E4;
  }
  *(undefined4 *)&this_00->field_0x23b = 6;
  this_00->field_0231 = CASE_0;
  *(undefined4 *)((int)&this_00->field_023E + 1) = 0;
  puVar9 = (byte *)((message->arg0).ptr);
  puVar11 = (byte *)((int)&this_00->field_0242 + 1);
  memmove(puVar11, puVar9, 0x28); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  st::fn_004034B8((AnonShape_0057CB30_71092CE7 *)this_00);
  st::fn_00402B5D(this_00,1);
  *(undefined2 *)&this_00->field_0x5f = 0xffff;
  *(undefined2 *)&this_00->field_0x5d = 0xffff;
  *(undefined2 *)&this_00->field_0x5b = 0xffff;
  if ((((((*(int *)&this_00->field_0x257 < 0) ||
         ((int)g_worldGrid.sizeX <= *(int *)&this_00->field_0x257)) ||
        (iVar6 = *(int *)((int)&this_00->field_0259 + 2), iVar6 < 0)) ||
       ((g_worldGrid.sizeY <= iVar6 || (iVar6 = *(int *)&this_00->field_0x25f, iVar6 < 0)))) ||
      ((g_worldGrid.sizeZ <= iVar6 ||
       ((iVar6 = st::fn_0040295F(this_00,*(short *)&this_00->field_0x257,
                                    *(undefined2 *)((int)&this_00->field_0259 + 2),(short)iVar6,1),
        iVar6 != 0 || (iVar6 = st::fn_00401AAA(this_00,8), iVar6 != 0)))))) ||
     (iVar6 = st::fn_00405DC1(this_00,*(short *)&this_00->field_0x263), iVar6 != 0)) {
    st::fn_004032BA((STFishC *)this_00);
    *(undefined4 *)&this_00->field_0x23b = 3;
    goto cf_common_exit_0057C3E4;
  }
  switch(*(undefined4 *)&this_00->field_0x267) {
  case 0xe7:
    puVar9 = (byte *)(&this_00->field_01D5);
    iVar6 = st::fn_00404183((STT3DSprC *)puVar9,0xe,PTR_0080676c,"fish1",CASE_1D);
    if (iVar6 != 0) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\To_fish.cpp",0xf6);
    }
    st::fn_00405AA6(puVar9,'\x0e');
    st::fn_00401064((STT3DSprC *)puVar9,'\x0e',0);
    goto switchD_0057c210_default;
  case 0xe8:
    iVar6 = st::fn_00404183
                      ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,"fish_b",CASE_1D);
    if (iVar6 != 0) {
      iVar6 = 0xea;
cf_error_exit_0057C332:
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\To_fish.cpp",iVar6);
    }
    break;
  case 0xe9:
    iVar6 = st::fn_00404183
                      ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,"fish_gr",CASE_1D
                      );
    if (iVar6 != 0) {
      iVar6 = 0xf0;
      goto cf_error_exit_0057C332;
    }
    break;
  case 0xea:
    iVar6 = st::fn_00404183
                      ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,&DAT_007cb008,CASE_1D);
    if (iVar6 != 0) {
      iVar6 = 0xfd;
      goto cf_error_exit_0057C332;
    }
    break;
  case 0xeb:
    iVar6 = st::fn_00404183
                      ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,&DAT_007cb010,CASE_1D);
    if (iVar6 != 0) {
      iVar6 = 0x104;
      goto cf_error_exit_0057C332;
    }
    break;
  default:
    goto switchD_0057c210_default;
  }
  st::fn_00405AA6(&this_00->field_01D5,'\x0e');
switchD_0057c210_default:
  st::fn_00405240((STT3DSprC *)&this_00->field_01D5,0xe,g_playSystem_00802A38->field_00E4);
  st::fn_004045D9
            ((STT3DSprC *)&this_00->field_01D5,
             (float)*(int *)&this_00->field_0x257 * _DAT_007904f8 + _DAT_007904f4,
             (float)*(int *)((int)&this_00->field_0259 + 2) * _DAT_007904f8 + _DAT_007904f4,
             (float)*(int *)&this_00->field_0x25f * _DAT_00790504 + _DAT_00790500);
  *(undefined2 *)&this_00->field_0x235 = *(undefined2 *)&this_00->field_0x47;
  *(undefined2 *)&this_00->field_0x237 = *(undefined2 *)&this_00->field_0x49;
  *(undefined2 *)&this_00->field_0x239 = *(undefined2 *)&this_00->field_0x4b;
  *(undefined4 *)&this_00->field_0x23b = 0;
cf_common_exit_0057C3E4:
  if ((*(int *)&this_00->field_0x23b != 6) && (iVar6 = st::fn_004010C3((int)this_00), iVar6 == 0)
     ) {
    st::fn_004032BA((STFishC *)this_00);
    *(undefined4 *)&this_00->field_0x23b = 3;
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
switchD_0057c669_caseD_127:
  puVar1 = &this_00->field_0x235;
  int scalar_local_20 = (int)(short)((message->arg1).words.low * 0xc9 + 100); /* split integer lifetime from pointer-typed SSA storage */
  iVar6 = st::fn_004019E7(0,0,g_worldGrid.sizeX + -1,g_worldGrid.sizeY + -1,(int)this_00,
                             (int)(short)((message->arg0).words.low * 0xc9 + 100),scalar_local_20,
                             (int)(short)((message->arg0).words.high * 0xc9 + 100),
                             (int)(short)((message->arg1).words.high * 0xc9 + 100),
                             (undefined2 *)puVar1,(undefined2 *)puVar1,
                             (short *)&this_00->field_0x239);
  if (iVar6 == 0) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  sVar8 = *(short *)puVar1;
  if (sVar8 < 0) {
    sVar8 = ((sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar8 = (sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f);
  }
  *(short *)puVar1 = sVar8;
  sVar8 = *(short *)&this_00->field_0x237;
  if (sVar8 < 0) {
    sVar8 = ((sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar8 = (sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f);
  }
  *(short *)&this_00->field_0x237 = sVar8;
  sVar8 = *(short *)&this_00->field_0x239;
  if (sVar8 < 0) {
    sVar8 = ((sVar8 / 200 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar8 = (sVar8 / 200 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x51eb851f >> 0x3f);
  }
  *(short *)&this_00->field_0x239 = sVar8;
  *(undefined4 *)&this_00->field_0x23b = 4;
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

// 0057CD70 STFishC::LifeFish
#line 4 "decomp/ST.exe/functions/0057CD70/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_fish.cpp
   STFishC::LifeFish

   [STSwitchEnumApplier] Switch target field_0267 uses
   /SubmarineTitans/Recovered/Enums/STFishC_field_0267State. Cases:
   CASE_E7=231;CASE_E8=232;CASE_E9=233;CASE_EA=234;CASE_EB=235
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall LifeFish(STFishC * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0057CFB3 RET | 0057D2AB RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_0057CD70(STFishC *this)

{
  undefined4 *this_00;
  int iVar3;
  uint uVar4;
  int iVar2;
  int iVar4;
  int local_EAX_271;
  int local_EAX_344;
  undefined4 uVar5;
  int local_EAX_471;
  int iVar6;
  char cVar7;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_EDI;
  uint local_8;

  iVar3 = st::fn_00401A3C((AnonShape_0041C710_C4D46939 *)this);
  this_00 = &this->field_01D5;
  if (iVar3 == 0) {
    iVar3 = 0;
    uVar4 = st::fn_004052CC((STT3DSprC *)this_00);
    st::fn_006EABF0((void *)this->field_0211,uVar4,iVar3);
    iVar2 = st::fn_004050D8((AnonShape_0041CAF0_1630B9E0 *)this);
    if (iVar2 == 1) {
      iVar3 = 1;
    }
    else {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 1;
    uVar4 = st::fn_004052CC((STT3DSprC *)this_00);
    st::fn_006EABF0((void *)this->field_0211,uVar4,iVar3);
    iVar3 = 1;
  }
  iVar4 = st::fn_004052CC((STT3DSprC *)this_00);
  st::fn_006E6870((void *)this->field_0211,iVar4,iVar3);
  iVar3 = this->field_023B;
  if (iVar3 == 4) {
    iVar3 = this->vfunc_20();
    if (iVar3 == -1) {
      local_EAX_271 =
           st::fn_006AD4D0("E:\\__titans\\Igor\\To_fish.cpp",0x709,0,0,"%s",
                              "stop move error");
      if (local_EAX_271 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    else if (iVar3 == 1) {
      cVar7 = '\0';
      if (this->field_0267 == CASE_E7) {
        cVar7 = -2;
      }
      else if (this->field_0267 == CASE_E9) {
        cVar7 = -1;
      }
      st::fn_00405C90(this,cVar7 + 7);
      st::fn_00405105(this,cVar7 + 6);
      st::fn_00404318
                ((AnonReceiver_004167A0 *)this,this->field_0235,this->field_0237,this->field_0239);
      this->field_023B = 1;
    }
  }
  else if (iVar3 == 1) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar3 = (*this->vtable->MoveStep)((STGameObjC *)this,unaff_EDI);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar4 = 0;
      }
      else {
        if (iVar3 != 2) {
          local_EAX_344 =
               st::fn_006AD4D0("E:\\__titans\\Igor\\To_fish.cpp",0x72d,0,0,"%s",
                                  "STFishC::LifeFish Error Move");
          if (local_EAX_344 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (this->field_023F < 0xf) goto LAB_0057cfe0;
        uVar4 = 1;
      }
      uVar5 = st::fn_00402612(this,uVar4);
      this->field_023B = uVar5;
      this->field_023F = 0;
    }
  }
  else if (iVar3 == 2) {
    iVar3 = st::fn_0040314D((AnonShape_00417830_9254190A *)this);
    if (iVar3 == 0) {
      this->field_023B = 0;
      this->field_023F = 7;
    }
    else if ((iVar3 != 2) && (iVar3 != 3)) {
      local_EAX_471 =
           st::fn_006AD4D0("E:\\__titans\\Igor\\To_fish.cpp",0x740,0,0,"%s",
                              "STFishC::LifeFish Error Move");
      if (local_EAX_471 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else if (iVar3 == 5) {
    iVar3 = st::fn_004022AC((STT3DSprC *)this_00,'\b');
    iVar6 = st::fn_004042AF(this_00,'\b');
    if (iVar6 == iVar3 + -1) {
      st::fn_00404264((STT3DSprC *)this_00,8);
      st::fn_004032BA(this);
      this->field_023B = 3;
      return;
    }
  }
  else if ((0xf < this->field_023F) && (iVar3 = this->vfunc_20(), iVar3 == 1)) {
    this->field_023F = 0;
    uVar5 = st::fn_00402612(this,1);
    this->field_023B = uVar5;
  }
LAB_0057cfe0:
  switch(this->field_0267) {
  case CASE_E7:
    st::fn_00401064((STT3DSprC *)this_00,'\x0e',g_playSystem_00802A38->field_00E4 % 0x78 >> 1);
    break;
  case CASE_E8:
    iVar3 = (0x18 - (int)this->field_006C / 0xf) % 0x18;
    uVar4 = g_playSystem_00802A38->field_00E4 % 0x30 >> 2;
    local_8 = uVar4 + (iVar3 / 3) * 0xc;
    uVar4 = uVar4 + (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0xc;
    goto LAB_0057d24b;
  case CASE_E9:
    iVar3 = (0x18 - (int)this->field_006C / 0xf) % 0x18;
    uVar4 = g_playSystem_00802A38->field_00E4 % 0xc >> 1;
    local_8 = uVar4 + (iVar3 / 3) * 6;
    uVar4 = uVar4 + (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 6;
LAB_0057d24b:
    st::fn_00401064((STT3DSprC *)this_00,'\x0e',uVar4);
    st::fn_004052FE((STT3DSprC *)this_00,'\x0e',local_8);
    break;
  case CASE_EA:
    iVar3 = (0x18 - (int)this->field_006C / 0xf) % 0x18;
    st::fn_00401064
              ((STT3DSprC *)this_00,'\x0e',
               (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0xf +
               g_playSystem_00802A38->field_00E4 % 0xf);
    st::fn_004052FE((STT3DSprC *)this_00,'\x0e',iVar3 / 3);
    break;
  case CASE_EB:
    iVar3 = (0x18 - (int)this->field_006C / 0xf) % 0x18;
    uVar4 = g_playSystem_00802A38->field_00E4 % 0x14;
    st::fn_00401064
              ((STT3DSprC *)this_00,'\x0e',
               uVar4 + (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0x14);
    st::fn_004052FE((STT3DSprC *)this_00,'\x0e',uVar4 + (iVar3 / 3) * 0x14);
    break;
  default:
    goto switchD_0057cff4_default;
  }
  st::fn_004030BC((STT3DSprC *)this_00,'\x0e');
switchD_0057cff4_default:
  this->field_023F = this->field_023F + 1;
  this->vfunc_D8();
  return;
}

