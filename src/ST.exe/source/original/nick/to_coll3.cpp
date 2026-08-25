#include "st/generated.hpp"
// Generated translation unit: source/original/nick/to_coll3.cpp

// 005F5F20 STColl3C::GetMessage
#line 4 "decomp/ST.exe/functions/005F5F20/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_coll3.cpp
   STColl3C::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00404917|005F5F20; family_names=STColl3C::GetMessage; ret4=12;
   direct_offsets={10:1,14:2,18:4,1c:0} */

int __thiscall st::fn_005F5F20(STColl3C *this,STMessage *message)

{
  STMessageId SVar1;
  int iVar2;
  int *piVar3;
  short sVar5;
  STColl3C *this_00;
  int local_EAX_16;
  int iVar5;
  int local_EAX_456;
  int local_EAX_529;
  dword dVar6;
  int local_EAX_1026;
  int iVar7;
  int iVar8;
  byte *puVar9;
  byte *puVar10;
  STWorldObject *pSVar11;
  InternalExceptionFrame local_60;
  byte *local_1c;
  uint local_18;
  short local_14 [2];
  short local_10 [2];
  short local_c [2];
  STColl3C *local_8;

  local_8 = this;
  /* ST_CALLSITE[005F5F30]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  local_EAX_16 = st::fn_00404F07((STSprGameObjC *)this,message);
  if (local_EAX_16 == 0xffff) {
    return 0xffff;
  }
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  iVar5 = st::fn_0072D7F0(local_60.jumpBuffer,0);
  this_00 = local_8;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_coll3.cpp"),0xe8,0,iVar5,st::mutable_c_string("%s"),
                               "STColl3C::GetMessage");
    if (iVar7 == 0) {
      st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\nick\\to_coll3.cpp"),0xea);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar1 = message->id;
  if (MESS_SHARED_010F < SVar1) {
    switch(SVar1) {
    case MESS_TORPHIT:
      goto switchD_005f6301_caseD_110;
    default:
      g_currentExceptionFrame = local_60.previous;
      return 0;
    case MESS_STOCTOPUSC_0112:
      st::fn_00402A90((STT3DSprC *)&local_8->vtable_at_1d5);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    case MESS_STSPRGAMEOBJC_0113:
      /* ST_CALLSITE[005F63DC]: CALL dword ptr [EAX] */
      (*local_8->vtable_at_1d5->vfunc_00)((STColl3C *)&local_8->vtable_at_1d5);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    case MESS_HITKILL:
      st::fn_00403D0F((STT3DSprC *)&local_8->vtable_at_1d5);
      this_00->field_02BB = 0;
      /* ST_CALLSITE[005F638B]: CALL 0x0040464c; direct=0040464C sub_0041C5A0 */
      st::fn_0040464C(this_00);
      /* ST_CALLSITE[005F6392]: CALL 0x00401b04; direct=00401B04 STColl3C::sub_005F66B0 */
      st::fn_00401B04(this_00);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
  }
  if (SVar1 == MESS_SHARED_010F) {
    /* ST_CALLSITE[005F62B2]: CALL 0x00403e59; direct=00403E59 STColl3C::sub_005F66F0 */
    local_1c = st::fn_00403E59(local_8,&local_18);
    /* ST_CALLSITE[005F62C9]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
    st::fn_004025F9(g_playSystem_00802A38,this_00->field_0018,local_1c,local_18);
    st::fn_006AB060(&local_1c);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (MESS_SHARED_0003 < SVar1) {
    if (SVar1 != MESS_SHARED_0108) {
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    st::fn_00401AB9(local_8);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (SVar1 == MESS_SHARED_0003) {
    if (g_manRub3_008117A4 != nullptr) {
      /* ST_CALLSITE[005F6241]: CALL 0x00404ae3; direct=00404AE3 STColl3C::sub_005F9450 */
      st::fn_00404AE3(local_8);
      st::fn_004029DC(g_manRub3_008117A4,this_00->field_0235,this_00->field_0018);
    }
    /* ST_CALLSITE[005F625E]: CALL 0x00403c1a; direct=00403C1A STColl3C::sub_005FA070 */
    st::fn_00403C1A(this_00);
    st::fn_004021D5((STT3DSprC *)&this_00->vtable_at_1d5);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (SVar1 == MESS_ID_NONE) {
    /* ST_CALLSITE[005F6210]: CALL 0x00401785; direct=00401785 STColl3C::sub_005F6F60 */
    st::fn_00401785(local_8);
    /* ST_CALLSITE[005F6219]: CALL dword ptr [EDX + 0xd8] */
    this_00->vfunc_D8();
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (SVar1 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  puVar9 = (byte *)((message->arg0).ptr);
  if (puVar9[3] != 2) {
    puVar10 = (byte *)&local_8->field_0x231;
    memmove(puVar10, puVar9, 0x2c); /* compiler REP MOVS byte copy */
    iVar8 = local_8->field_0245;
    iVar8 = STBiasedDiv16(iVar8, 0xc9); /* exact signed 16-bit grid-index division */
    iVar2 = local_8->field_0249;
    local_8->field_025D = iVar8;
    iVar8 = STBiasedDiv16(iVar2, 0xc9); /* exact signed 16-bit grid-index division */
    iVar2 = local_8->field_024D;
    local_8->field_0261 = iVar8;
    iVar8 = STBiasedDiv16(iVar2, 200); /* exact signed 16-bit grid-index division */
    local_8->field_0265 = iVar8;
    /* ST_CALLSITE[005F6073]: CALL 0x0040163b; direct=0040163B STColl3C::sub_005FA8B0 */
    st::fn_0040163B(local_8,&local_8->field_027D,reinterpret_cast<int *>(&local_8->field_0281),(int *)&local_8->field_0285);
    this_00->field_0269 = 600;
    this_00->field_02DD = CASE_1;
    this_00->field_02E1 = g_playSystem_00802A38->field_00E4 + this_00->field_0259;
    if (g_manRub3_008117A4 != nullptr) {
      st::fn_00403EEA(g_manRub3_008117A4,this_00->field_0235,(int)this_00->field_0018,
                         this_00->field_0255);
    }
    this_00->field_02E5 = 1;
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  /* ST_CALLSITE[005F60E8]: CALL 0x00402dfb; direct=00402DFB STColl3C::sub_005F68B0 */
  local_EAX_456 = st::fn_00402DFB(local_8,st::pointer_boundary_cast<undefined4 *>(puVar9));
  if (local_EAX_456 == 0) {
    /* ST_CALLSITE[005F60F3]: CALL 0x00401b04; direct=00401B04 STColl3C::sub_005F66B0 */
    st::fn_00401B04(this_00);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  /* ST_CALLSITE[005F611A]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
  st::fn_004018C5((STFishC *)this_00,local_14,local_10,local_c);
  local_EAX_529 = st::fn_00404D3B(local_14[0],local_10[0],local_c[0]);
  if (local_EAX_529 != 0) {
    if (((((local_14[0] < 0) || (g_worldGrid.sizeX <= local_14[0])) || (local_10[0] < 0)) ||
        ((g_worldGrid.sizeY <= local_10[0] || (local_c[0] < 0)))) ||
       (g_worldGrid.sizeZ <= local_c[0])) {
      pSVar11 = nullptr;
    }
    else {
      pSVar11 = STGridAt3D(g_worldGrid, local_14[0], local_10[0], local_c[0]).objects[0];
    }
    if ((pSVar11 == nullptr) &&
       ((this_00->field_02DD == CASE_1 ||
        /* ST_CALLSITE[005F61CC]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
        (iVar8 = st::fn_00401325
                           (local_14[0],local_10[0],local_c[0],0,
                            (RecoveredRecord_DumpClassC_00495EC0 *)this_00), iVar8 == 0))))
    goto LAB_005f61e2;
  }
  /* ST_CALLSITE[005F61DD]: CALL 0x00401b04; direct=00401B04 STColl3C::sub_005F66B0 */
  st::fn_00401B04(this_00);
LAB_005f61e2:
  if (this_00->field_02B6 == '\0') {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  st::fn_004033C8();
  g_currentExceptionFrame = local_60.previous;
  return 0;
switchD_005f6301_caseD_110:
  piVar3 = static_cast<int *>((message->arg0).ptr);
  /* ST_CALLSITE[005F6312]: CALL dword ptr [EAX + 0x78] */
  dVar6 = local_8->sub_005F6EC0();
  if ((int)dVar6 < 1) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  /* ST_CALLSITE[005F6322]: CALL 0x004059bb; direct=004059BB STColl3C::sub_005F6F20 */
  local_EAX_1026 = st::fn_004059BB(this_00,*piVar3);
  if (local_EAX_1026 == 0) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  /* ST_CALLSITE[005F6333]: CALL 0x00401d8e; direct=00401D8E STColl3C::LoadImagSpr */
  st::fn_00401D8E(this_00,0);
  this_00->field_0275 = (uint)((byte *)piVar3)[2];
  this_00->field_0279 = (uint)STField<ushort>(piVar3,0xe);
  /* ST_CALLSITE[005F6351]: CALL 0x00403c1a; direct=00403C1A STColl3C::sub_005FA070 */
  st::fn_00403C1A(this_00);
  this_00->field_02DD = CASE_D;
  g_currentExceptionFrame = local_60.previous;
  return 0;
}

// 005F6AF0 STColl3C::LoadImagSpr
#line 4 "decomp/ST.exe/functions/005F6AF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_coll3.cpp
   STColl3C::LoadImagSpr */

undefined4 __thiscall st::fn_005F6AF0(STColl3C *this,int param_1)

{
  STColl3CVTable_at_1D5 **this_00;
  STColl3C *this_01;
  int local_EAX_41;
  int iVar4;
  int local_EAX_247;
  int iVar2;
  int iVar3;
  uint uVar5;
  InternalExceptionFrame local_50;
  undefined4 local_c;
  STColl3C *local_8;

  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  local_EAX_41 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_01 = local_8;
  if (local_EAX_41 == 0) {
    this_00 = &local_8->vtable_at_1d5;
    if (param_1 == 0) {
      /* ST_CALLSITE[005F6C42]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      st::fn_00404183
                ((STT3DSprC *)this_00,8,PTR_00806774,st::mutable_c_string("Expb12" + local_8->field_02CD * 0x39),
                 CASE_1D);
      /* ST_CALLSITE[005F6C67]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      st::fn_00404183
                ((STT3DSprC *)this_00,9,PTR_00806764,
                 st::mutable_c_string("expl_bbt0" + this_01->field_02CD * 0x39),CASE_1D);
      /* ST_CALLSITE[005F6C8C]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      st::fn_00404183
                ((STT3DSprC *)this_00,10,PTR_00806774,
                 st::mutable_c_string("expmask3" + this_01->field_02CD * 0x39),CASE_1D);
      st::fn_004022D4(this_00,'\n');
      /* ST_CALLSITE[005F6CAB]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      st::fn_00405240((STT3DSprC *)this_00,10,g_playSystem_00802A38->field_00E4);
      /* ST_CALLSITE[005F6CBA]: CALL 0x004044ee; direct=004044EE STT3DSprC::sub_004ACF20 */
      st::fn_004044EE((STT3DSprC *)this_00,PTR_008032b8,0x10);
      /* ST_CALLSITE[005F6CD0]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      st::fn_00405240((STT3DSprC *)this_00,8,g_playSystem_00802A38->field_00E4);
      /* ST_CALLSITE[005F6CD9]: CALL 0x00403233; direct=00403233 STT3DSprC::sub_004ACFE0 */
      st::fn_00403233((STT3DSprC *)this_00,'\n');
      iVar2 = st::fn_004052CC((STT3DSprC *)this_00);
      this_01->field_02B7 = iVar2;
      g_currentExceptionFrame = local_50.previous;
      return local_c;
    }
    /* ST_CALLSITE[005F6B50]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar4 = st::fn_00404183((STT3DSprC *)this_00,0xe,PTR_00806774,st::mutable_c_string("coll3"),CASE_1D);
    if (iVar4 == 0) {
      st::fn_004023C4(this_00,DAT_007ce78c,DAT_007ce790);
      /* ST_CALLSITE[005F6B82]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      st::fn_00405240((STT3DSprC *)this_00,0xe,g_playSystem_00802A38->field_00E4);
      st::fn_00401AAA(this_01,0x18);
      /* ST_CALLSITE[005F6BAB]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar4 = st::fn_00404183
                        ((STT3DSprC *)this_00,0xc,PTR_00806774,
                         (&PTR_s_col3l0_007ce6e0)[this_01->field_0235],CASE_1D);
      if (iVar4 != 0) {
        return local_c;
      }
      st::fn_00405AA6(this_00,'\f');
      /* ST_CALLSITE[005F6BD9]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      st::fn_00405240((STT3DSprC *)this_00,0xc,g_playSystem_00802A38->field_00E4);
      st::fn_00401AB9(this_01);
      local_EAX_247 = st::fn_004052CC((STT3DSprC *)this_00);
      this_01->field_02B7 = local_EAX_247;
      st::fn_00403D0F((STT3DSprC *)this_00);
      if (this_01->field_02BB != '\0') {
        /* ST_CALLSITE[005F6C05]: CALL 0x0040464c; direct=0040464C sub_0041C5A0 */
        st::fn_0040464C(this_01);
      }
      this_01->field_02BB = 0;
      g_currentExceptionFrame = local_50.previous;
      return local_c;
    }
  }
  else {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_coll3.cpp"),0x1af,0,local_EAX_41,
                               st::mutable_c_string("%s"),"STColl3C::LoadImagSpr");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_41,0,st::mutable_c_string("E:\\__titans\\nick\\to_coll3.cpp"),0x1b1);
  }
  return 0xffff;
}

// 005F94C0 STColl3C::CreateAddSpr
#line 4 "decomp/ST.exe/functions/005F94C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_coll3.cpp
   STColl3C::CreateAddSpr */

int __thiscall st::fn_005F94C0(STColl3C *this)

{
  int iVar2;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_50;
  int local_c;
  STColl3C *local_8;

  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    puVar2 = static_cast<ushort *>(st::fn_006AAC70(0x6c));
    local_8->field_02E6 = puVar2;
    for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2[0] = 0;
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
    }
    puVar2 = local_8->field_02E6;
    puVar2[2] = 0xffff;
    puVar2[3] = 0xffff;
    g_currentExceptionFrame = local_50.previous;
    return local_c + 2;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_coll3.cpp"),0x5d8,0,iVar2,st::mutable_c_string("%s"),
                             "STColl3C::CreateAddSpr");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\nick\\to_coll3.cpp"),0x5da);
  return 0xffff;
}

