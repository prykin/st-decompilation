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
   direct_offsets={10:2,14:3,18:5,1c:0}

   [STSwitchEnumApplier] Switch target field_0267 uses
   /SubmarineTitans/Recovered/Enums/STFishC_field_0267State. Cases:
   CASE_E7=231;CASE_E8=232;CASE_E9=233;CASE_EA=234;CASE_EB=235

   [STSwitchEnumApplier] Switch target field_023B uses
   /SubmarineTitans/Recovered/Enums/STFishC_field_023BState. Cases:
   CASE_0=0;CASE_1=1;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

int __thiscall st::fn_0057BF60(STFishC *this,STMessage *message)

{
  int scalar_local_20;

  short *psVar1;
  STMessageId SVar2;
  STFishC *this_00;
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
  STFishC *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  AnonShape_0057BF60_C1393638 *local_c;
  uint local_8;

  if ((this->field_023B == CASE_6) && (message->id != MESS_SHARED_0003)) {
    return 0;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_1c = this;
  iVar4 = st::fn_0072D7F0(local_80.jumpBuffer,0);
  this_00 = local_1c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_fish.cpp"),0x663,0,iVar4,st::mutable_c_string("%s"),
                               "STFishC::GetMessage");
    if (iVar5 == 0) {
      st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Igor\\To_fish.cpp"),0x664);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[0057BFBF]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  st::fn_00404F07((STSprGameObjC *)local_1c,message);
  SVar2 = message->id;
  if (MESS_TORPHIT < SVar2) {
    switch(SVar2) {
    case MESS_STOCTOPUSC_0112:
      st::fn_00402A90((STT3DSprC *)&this_00->field_01D5);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    case MESS_STSPRGAMEOBJC_0113:
      /* ST_CALLSITE[0057C825]: CALL dword ptr [EDX] */
      (**(code **)this_00->field_01D5)();
      g_currentExceptionFrame = local_80.previous;
      return 0;
    default:
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case MESS_STOCTOPUSC_0127:
      goto switchD_0057c669_caseD_127;
    case MESS_HITKILL:
      if (this_00->field_023B == CASE_3) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      uVar7 = st::fn_004052CC((STT3DSprC *)&this_00->field_01D5);
      st::fn_006EAB60((void *)this_00->field_0211,uVar7);
      /* ST_CALLSITE[0057C7DD]: CALL 0x004032ba; direct=004032BA STFishC::sub_0057BF20 */
      st::fn_004032BA(this_00);
      this_00->field_023B = CASE_3;
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
  }
  if (SVar2 == MESS_TORPHIT) {
    if (this_00->field_023B == CASE_0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    puVar9 = (byte *)(&this_00->field_01D5);
    this_00->field_023B = CASE_5;
    /* ST_CALLSITE[0057C608]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
    st::fn_00404264((STT3DSprC *)puVar9,0xe);
    st::fn_00402A90((STT3DSprC *)puVar9);
    /* ST_CALLSITE[0057C626]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    st::fn_00404183((STT3DSprC *)puVar9,8,PTR_00806774,st::mutable_c_string("explsna"),CASE_1D);
    /* ST_CALLSITE[0057C63B]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    st::fn_00405240((STT3DSprC *)puVar9,8,g_playSystem_00802A38->field_00E4);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (MESS_SHARED_0003 < SVar2) {
    if (SVar2 != MESS_SHARED_010F) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    /* ST_CALLSITE[0057C4B9]: CALL 0x004018d4; direct=004018D4 STT3DSprC::SaveSpr */
    local_14 = (byte *)st::fn_004018D4((STT3DSprC *)&this_00->field_01D5,&local_8);
    /* ST_CALLSITE[0057C4C7]: CALL 0x0040119a; direct=0040119A STAllPlayersC::SaveGObjData */
    local_18 = (byte *)st::fn_0040119A((STAllPlayersC *)this_00,(int *)&local_10);
    local_c = st::pointer_boundary_cast<AnonShape_0057BF60_C1393638 *>(st::fn_006AAC70(local_10 + 0x46 + local_8));
    if (local_14 == nullptr) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (local_c == nullptr) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    puVar9 = (byte *)&this_00->field_0x243;
    pAVar12 = local_c;
    memmove(pAVar12, puVar9, 0x28); /* compiler REP MOVS byte copy */
    *(undefined4 *)&local_c->field_0xc = 2;
    local_c->field_0028 = this_00->field_0231;
    local_c->field_002C = this_00->field_023B;
    local_c->field_0036 = this_00->field_023F;
    *(short *)&local_c->field_0x30 = this_00->field_0235;
    *(short *)&local_c->field_0x32 = this_00->field_0237;
    *(short *)&local_c->field_0x34 = this_00->field_0239;
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
    /* ST_CALLSITE[0057C5B5]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
    st::fn_004025F9
              (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_c,
               local_10 + 0x46 + local_8);
    st::fn_006AB060(&local_14);
    st::fn_006AB060(&local_18);
    st::fn_006AB060(&local_c);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (SVar2 == MESS_SHARED_0003) {
    /* ST_CALLSITE[0057C44F]: CALL 0x00405952; direct=00405952 sub_004167A0 */
    st::fn_00405952(this_00);
    st::fn_00404EC1(this_00->field_005B,this_00->field_005D,this_00->field_005F,
                       this_00->field_008E,(AnonShape_00495FF0_59081BDD *)this_00);
    st::fn_00403189(this_00->field_0018);
    st::fn_004021D5((STT3DSprC *)&this_00->field_01D5);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (SVar2 == MESS_ID_NONE) {
    if (this_00->field_023B == CASE_3) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    /* ST_CALLSITE[0057C435]: CALL 0x00405f06; direct=00405F06 STFishC::LifeFish */
    st::fn_00405F06(this_00);
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  if (SVar2 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  local_20 = st::pointer_boundary_cast<undefined4 *>((message->arg0).ptr);
  if (1 < (uint)local_20[3]) {
    if (local_20[3] == 2) {
      puVar9 = (byte *)(local_20);
      puVar11 = (byte *)&this_00->field_0x243;
      memmove(puVar11, puVar9, 0x28); /* compiler REP MOVS byte copy */
      local_8 = STField<uint>(local_20,0x3e);
      /* ST_CALLSITE[0057C02F]: CALL 0x0040551f; direct=0040551F STAllPlayersC::RestoreGObjData */
      st::fn_0040551F
                ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x46 + (int)local_20));
      puVar9 = (byte *)(local_20);
      this_00->field_023B = local_20[0xb];
      this_00->field_0231 = local_20[10];
      this_00->field_023F = STField<uint>(local_20,0x36);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      this_00->field_0235 = *(short *)(local_20 + 0xc);
      this_00->field_0237 = STField<short>(local_20,0x32);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      this_00->field_0239 = *(short *)(local_20 + 0xd);
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
        /* ST_CALLSITE[0057C0D4]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
        st::fn_00404CA5
                  ((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,
                   (AnonShape_004AD790_77673787 *)((int)puVar9 + 0x42));
        st::fn_006AB060(&local_3c);
        /* ST_CALLSITE[0057C0FE]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
        st::fn_00401325
                  (this_00->field_005B,this_00->field_005D,this_00->field_005F,1,
                   (RecoveredRecord_DumpClassC_00495EC0 *)this_00);
        /* ST_CALLSITE[0057C109]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
        st::fn_00401064((STT3DSprC *)&this_00->field_01D5,'\x0e',0);
      }
    }
    goto cf_common_exit_0057C3E4;
  }
  this_00->field_023B = CASE_6;
  this_00->field_0231 = 0;
  this_00->field_023F = 0;
  puVar9 = (byte *)((message->arg0).ptr);
  puVar11 = (byte *)&this_00->field_0x243;
  memmove(puVar11, puVar9, 0x28); /* compiler REP MOVS byte copy */
  iVar6 = 0;
  st::fn_004034B8((AnonShape_0057CB30_71092CE7 *)this_00);
  st::fn_00402B5D(this_00,1);
  this_00->field_005F = 0xffff;
  this_00->field_005D = 0xffff;
  this_00->field_005B = 0xffff;
  if ((((((*(int *)&this_00->field_0x257 < 0) ||
         ((int)g_worldGrid.sizeX <= *(int *)&this_00->field_0x257)) || (this_00->field_025B < 0)) ||
       (((int)g_worldGrid.sizeY <= this_00->field_025B || (iVar6 = this_00->field_025F, iVar6 < 0)))
       ) || ((g_worldGrid.sizeZ <= iVar6 ||
             ((iVar6 = st::fn_0040295F(this_00,*(short *)&this_00->field_0x257,
                                          (short)this_00->field_025B,(short)iVar6,1), iVar6 != 0 ||
              (iVar6 = st::fn_00401AAA(this_00,8), iVar6 != 0)))))) ||
     (iVar6 = st::fn_00405DC1(this_00,this_00->field_0263), iVar6 != 0)) {
    /* ST_CALLSITE[0057C3D5]: CALL 0x004032ba; direct=004032BA STFishC::sub_0057BF20 */
    st::fn_004032BA(this_00);
    this_00->field_023B = CASE_3;
    goto cf_common_exit_0057C3E4;
  }
  switch(this_00->field_0267) {
  case CASE_E7:
    puVar9 = (byte *)(&this_00->field_01D5);
    /* ST_CALLSITE[0057C298]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar6 = st::fn_00404183((STT3DSprC *)puVar9,0xe,PTR_0080676c,st::mutable_c_string("fish1"),CASE_1D);
    if (iVar6 != 0) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\To_fish.cpp"),0xf6);
    }
    st::fn_00405AA6(puVar9,'\x0e');
    /* ST_CALLSITE[0057C2C7]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    st::fn_00401064((STT3DSprC *)puVar9,'\x0e',0);
    goto switchD_0057c210_default;
  case CASE_E8:
    /* ST_CALLSITE[0057C22E]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar6 = st::fn_00404183
                      ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,st::mutable_c_string("fish_b"),CASE_1D);
    if (iVar6 != 0) {
      iVar6 = 0xea;
cf_error_exit_0057C332:
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\To_fish.cpp"),iVar6);
    }
    break;
  case CASE_E9:
    /* ST_CALLSITE[0057C269]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar6 = st::fn_00404183
                      ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,st::mutable_c_string("fish_gr"),CASE_1D
                      );
    if (iVar6 != 0) {
      iVar6 = 0xf0;
      goto cf_error_exit_0057C332;
    }
    break;
  case CASE_EA:
    /* ST_CALLSITE[0057C2E5]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar6 = st::fn_00404183
                      ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,st::pointer_boundary_cast<char *>(&DAT_007cb008),CASE_1D);
    if (iVar6 != 0) {
      iVar6 = 0xfd;
      goto cf_error_exit_0057C332;
    }
    break;
  case CASE_EB:
    /* ST_CALLSITE[0057C319]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar6 = st::fn_00404183
                      ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_0080676c,st::pointer_boundary_cast<char *>(&DAT_007cb010),CASE_1D);
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
  /* ST_CALLSITE[0057C358]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
  st::fn_00405240((STT3DSprC *)&this_00->field_01D5,0xe,g_playSystem_00802A38->field_00E4);
  /* ST_CALLSITE[0057C3A1]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
  st::fn_004045D9
            ((STT3DSprC *)&this_00->field_01D5,
             (float)*(int *)&this_00->field_0x257 * _DAT_007904f8 + _DAT_007904f4,
             (float)this_00->field_025B * _DAT_007904f8 + _DAT_007904f4,
             (float)this_00->field_025F * _DAT_00790504 + _DAT_00790500);
  this_00->field_0235 = this_00->field_0047;
  this_00->field_0237 = this_00->field_0049;
  this_00->field_0239 = this_00->field_004B;
  this_00->field_023B = CASE_0;
cf_common_exit_0057C3E4:
  if ((this_00->field_023B != CASE_6) && (iVar6 = st::fn_004010C3((int)this_00), iVar6 == 0)) {
    /* ST_CALLSITE[0057C404]: CALL 0x004032ba; direct=004032BA STFishC::sub_0057BF20 */
    st::fn_004032BA(this_00);
    this_00->field_023B = CASE_3;
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
switchD_0057c669_caseD_127:
  psVar1 = &this_00->field_0235;
  scalar_local_20 = (int)(short)((message->arg1).words.low * 0xc9 + 100); /* split integer lifetime from pointer-typed SSA storage */
  iVar6 = st::fn_004019E7(0,0,g_worldGrid.sizeX + -1,g_worldGrid.sizeY + -1,(int)this_00,
                             (int)(short)((message->arg0).words.low * 0xc9 + 100),scalar_local_20,
                             (int)(short)((message->arg0).words.high * 0xc9 + 100),
                             (int)(short)((message->arg1).words.high * 0xc9 + 100),st::pointer_boundary_cast<undefined2 *>(psVar1),st::pointer_boundary_cast<undefined2 *>(psVar1),
                             &this_00->field_0239);
  if (iVar6 == 0) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  sVar8 = *psVar1;
  sVar8 = STBiasedDiv16(sVar8, 0xc9); /* exact signed 16-bit grid-index division */
  *psVar1 = sVar8;
  sVar8 = this_00->field_0237;
  sVar8 = STBiasedDiv16(sVar8, 0xc9); /* exact signed 16-bit grid-index division */
  this_00->field_0237 = sVar8;
  sVar8 = this_00->field_0239;
  sVar8 = STBiasedDiv16(sVar8, 200); /* exact signed 16-bit grid-index division */
  this_00->field_0239 = sVar8;
  this_00->field_023B = CASE_4;
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
   while changing only function arity; restore Ghidra DefaultDataType

   [STSwitchEnumApplier] Switch target field_023B uses
   /SubmarineTitans/Recovered/Enums/STFishC_field_023BState. Cases:
   CASE_0=0;CASE_1=1;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

void __thiscall st::fn_0057CD70(STFishC *this)

{
  undefined4 *this_00;
  STFishC_field_023BState SVar1;
  int iVar3;
  uint uVar4;
  int iVar2;
  int iVar4;
  int local_EAX_271;
  int local_EAX_344;
  STFishC_field_023BState SVar5_mg2;
  int local_EAX_471;
  int iVar5;
  STFishC_field_023BState SVar5_mg1;
  char cVar6;
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
  SVar1 = this->field_023B;
  if (SVar1 == CASE_4) {
    /* ST_CALLSITE[0057CDF2]: CALL dword ptr [EAX + 0x20] */
    iVar3 = this->vfunc_20();
    if (iVar3 == -1) {
      local_EAX_271 =
           st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_fish.cpp"),0x709,0,0,st::mutable_c_string("%s"),
                              "stop move error");
      if (local_EAX_271 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    else if (iVar3 == 1) {
      cVar6 = '\0';
      if (this->field_0267 == CASE_E7) {
        cVar6 = -2;
      }
      else if (this->field_0267 == CASE_E9) {
        cVar6 = -1;
      }
      st::fn_00405C90(this,cVar6 + 7);
      st::fn_00405105(this,cVar6 + 6);
      st::fn_00404318
                ((AnonReceiver_004167A0 *)this,this->field_0235,this->field_0237,this->field_0239);
      this->field_023B = CASE_1;
    }
  }
  else if (SVar1 == CASE_1) {
    /* ST_CALLSITE[0057CE9E]: CALL dword ptr [EDX + 0x1c] */
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar3 = (*this->vtable->MoveStep)((STGameObjC *)this,unaff_EDI);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar4 = 0;
      }
      else {
        if (iVar3 != 2) {
          local_EAX_344 =
               st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_fish.cpp"),0x72d,0,0,st::mutable_c_string("%s"),
                                  "STFishC::LifeFish Error Move");
          if (local_EAX_344 == 0) {
            return;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (this->field_023F < 0xf) goto LAB_0057cfe0;
        uVar4 = 1;
      }
      /* ST_CALLSITE[0057CEF0]: CALL 0x00402612; direct=00402612 STFishC::sub_0057D5F0 */
      SVar5_mg2 = st::fn_00402612(this,uVar4);
      this->field_023B = SVar5_mg2;
      this->field_023F = 0;
    }
  }
  else if (SVar1 == 2) {
    iVar3 = st::fn_0040314D((AnonShape_00417830_9254190A *)this);
    if (iVar3 == 0) {
      this->field_023B = CASE_0;
      this->field_023F = 7;
    }
    else if ((iVar3 != 2) && (iVar3 != 3)) {
      local_EAX_471 =
           st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_fish.cpp"),0x740,0,0,st::mutable_c_string("%s"),
                              "STFishC::LifeFish Error Move");
      if (local_EAX_471 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else if (SVar1 == CASE_5) {
    /* ST_CALLSITE[0057CF7E]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    iVar3 = st::fn_004022AC((STT3DSprC *)this_00,'\b');
    iVar5 = st::fn_004042AF(this_00,'\b');
    if (iVar5 == iVar3 + -1) {
      /* ST_CALLSITE[0057CF97]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      st::fn_00404264((STT3DSprC *)this_00,8);
      /* ST_CALLSITE[0057CF9E]: CALL 0x004032ba; direct=004032BA STFishC::sub_0057BF20 */
      st::fn_004032BA(this);
      this->field_023B = CASE_3;
      return;
    }
  }
  /* ST_CALLSITE[0057CFC0]: CALL dword ptr [EAX + 0x20] */
  else if ((0xf < this->field_023F) && (iVar3 = this->vfunc_20(), iVar3 == 1)) {
    this->field_023F = 0;
    /* ST_CALLSITE[0057CFD5]: CALL 0x00402612; direct=00402612 STFishC::sub_0057D5F0 */
    SVar5_mg1 = st::fn_00402612(this,1);
    this->field_023B = SVar5_mg1;
  }
LAB_0057cfe0:
  switch(this->field_0267) {
  case CASE_E7:
    /* ST_CALLSITE[0057D280]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    st::fn_00401064((STT3DSprC *)this_00,'\x0e',st::machine_word_boundary_cast<uint>(g_playSystem_00802A38->field_00E4 % 0x78 >> 1));
    break;
  case CASE_E8:
    iVar3 = (0x18 - (int)this->field_006C / 0xf) % 0x18;
    uVar4 = st::machine_word_boundary_cast<uint>(g_playSystem_00802A38->field_00E4 % 0x30 >> 2);
    local_8 = uVar4 + (iVar3 / 3) * 0xc;
    uVar4 = uVar4 + (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0xc;
    goto LAB_0057d24b;
  case CASE_E9:
    iVar3 = (0x18 - (int)this->field_006C / 0xf) % 0x18;
    uVar4 = st::machine_word_boundary_cast<uint>(g_playSystem_00802A38->field_00E4 % 0xc >> 1);
    local_8 = uVar4 + (iVar3 / 3) * 6;
    uVar4 = uVar4 + (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 6;
LAB_0057d24b:
    /* ST_CALLSITE[0057D250]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    st::fn_00401064((STT3DSprC *)this_00,'\x0e',uVar4);
    /* ST_CALLSITE[0057D25D]: CALL 0x004052fe; direct=004052FE STT3DSprC::SetCurShad */
    st::fn_004052FE((STT3DSprC *)this_00,'\x0e',local_8);
    break;
  case CASE_EA:
    iVar3 = (0x18 - (int)this->field_006C / 0xf) % 0x18;
    /* ST_CALLSITE[0057D07F]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    st::fn_00401064
              ((STT3DSprC *)this_00,'\x0e',
               (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0xf +
               g_playSystem_00802A38->field_00E4 % 0xf);
    /* ST_CALLSITE[0057D08C]: CALL 0x004052fe; direct=004052FE STT3DSprC::SetCurShad */
    st::fn_004052FE((STT3DSprC *)this_00,'\x0e',iVar3 / 3);
    break;
  case CASE_EB:
    iVar3 = (0x18 - (int)this->field_006C / 0xf) % 0x18;
    uVar4 = st::machine_word_boundary_cast<uint>(g_playSystem_00802A38->field_00E4 % 0x14);
    /* ST_CALLSITE[0057D120]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    st::fn_00401064
              ((STT3DSprC *)this_00,'\x0e',
               uVar4 + (((iVar3 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * 0x14);
    /* ST_CALLSITE[0057D12D]: CALL 0x004052fe; direct=004052FE STT3DSprC::SetCurShad */
    st::fn_004052FE((STT3DSprC *)this_00,'\x0e',uVar4 + (iVar3 / 3) * 0x14);
    break;
  default:
    goto switchD_0057cff4_default;
  }
  /* ST_CALLSITE[0057D289]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
  st::fn_004030BC((STT3DSprC *)this_00,'\x0e');
switchD_0057cff4_default:
  this->field_023F = st::machine_word_boundary_cast<uint>(this->field_023F + 1);
  /* ST_CALLSITE[0057D29F]: CALL dword ptr [EDX + 0xd8] */
  this->vfunc_D8();
  return;
}

