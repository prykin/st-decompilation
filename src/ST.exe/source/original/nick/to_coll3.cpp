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
  int *piVar2;
  short sVar4;
  STColl3C *this_00;
  int iVar5;
  dword dVar6;
  int iVar7;
  byte *puVar8;
  byte *puVar9;
  STWorldObject *pSVar10;
  InternalExceptionFrame local_60;
  byte *local_1c;
  AnonShape_0060EA30_DCEB68AD *local_18;
  short local_14 [2];
  short local_10 [2];
  short local_c [2];
  STColl3C *local_8;

  local_8 = this;
  iVar5 = st::fn_00404F07((STSprGameObjC *)this,message);
  if (iVar5 == 0xffff) {
    return 0xffff;
  }
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  iVar5 = st::fn_0072D7F0(local_60.jumpBuffer,0);
  this_00 = local_8;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar7 = st::fn_006AD4D0("E:\\__titans\\nick\\to_coll3.cpp",0xe8,0,iVar5,"%s",
                               "STColl3C::GetMessage");
    if (iVar7 == 0) {
      st::fn_006A5E40(iVar5,0,"E:\\__titans\\nick\\to_coll3.cpp",0xea);
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
      (*local_8->vtable_at_1d5->vfunc_00)();
      g_currentExceptionFrame = local_60.previous;
      return 0;
    case MESS_HITKILL:
      st::fn_00403D0F((STT3DSprC *)&local_8->vtable_at_1d5);
      this_00->field_02BB = 0;
      st::fn_0040464C(this_00);
      st::fn_00401B04(this_00);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
  }
  if (SVar1 == MESS_SHARED_010F) {
    local_1c = st::fn_00403E59(local_8,(uint *)&local_18);
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
      st::fn_00404AE3(local_8);
      st::fn_004029DC(g_manRub3_008117A4,this_00->field_0235,this_00->field_0018);
    }
    st::fn_00403C1A(this_00);
    st::fn_004021D5((STT3DSprC *)&this_00->vtable_at_1d5);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (SVar1 == MESS_ID_NONE) {
    st::fn_00401785(local_8);
    this_00->vfunc_D8();
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (SVar1 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  puVar8 = (byte *)((message->arg0).ptr);
  if (puVar8[3] != 2) {
    puVar9 = (byte *)&local_8->field_0x231;
    memmove(puVar9, puVar8, 0x2c); /* compiler REP MOVS byte copy */
    iVar5 = local_8->field_0245;
    sVar4 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar4) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar4) -
                          (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
    }
    iVar7 = local_8->field_0249;
    local_8->field_025D = iVar5;
    sVar4 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar5 = (short)(((short)(iVar7 / 0xc9) + sVar4) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar7 / 0xc9) + sVar4) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    iVar7 = local_8->field_024D;
    local_8->field_0261 = iVar5;
    sVar4 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar5 = (short)(((short)(iVar7 / 200) + sVar4) - (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar7 / 200) + sVar4) -
                          (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
    }
    local_8->field_0265 = iVar5;
    st::fn_0040163B(local_8,&local_8->field_027D,&local_8->field_0281,&local_8->field_0285);
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
  iVar5 = st::fn_00402DFB(local_8,puVar8);
  if (iVar5 == 0) {
    st::fn_00401B04(this_00);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  st::fn_004018C5((STFishC *)this_00,local_14,local_10,local_c);
  iVar5 = st::fn_00404D3B(local_14[0],local_10[0],local_c[0]);
  if (iVar5 != 0) {
    if (((((local_14[0] < 0) || (g_worldGrid.sizeX <= local_14[0])) || (local_10[0] < 0)) ||
        ((g_worldGrid.sizeY <= local_10[0] || (local_c[0] < 0)))) ||
       (g_worldGrid.sizeZ <= local_c[0])) {
      pSVar10 = nullptr;
    }
    else {
      pSVar10 = STGridAt3D(g_worldGrid, local_14[0], local_10[0], local_c[0]).objects[0];
    }
    if ((pSVar10 == nullptr) &&
       ((this_00->field_02DD == CASE_1 ||
        (iVar5 = st::fn_00401325
                           (local_14[0],local_10[0],local_c[0],0,
                            (RecoveredRecord_DumpClassC_00495EC0 *)this_00), iVar5 == 0))))
    goto LAB_005f61e2;
  }
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
  piVar2 = (message->arg0).ptr;
  dVar6 = local_8->slot_78();
  if ((int)dVar6 < 1) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  iVar5 = st::fn_004059BB(this_00,*piVar2);
  if (iVar5 == 0) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  st::fn_00401D8E(this_00,0);
  this_00->field_0275 = (uint)*(byte *)(piVar2 + 2);
  this_00->field_0279 = (uint)STField<ushort>(piVar2,0xe);
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
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_50;
  undefined4 local_c;
  STColl3C *local_8;

  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_01 = local_8;
  if (iVar2 == 0) {
    this_00 = &local_8->vtable_at_1d5;
    if (param_1 == 0) {
      st::fn_00404183
                ((STT3DSprC *)this_00,8,PTR_00806774,"Expb12" + local_8->field_02CD * 0x39,
                 0x1d);
      st::fn_00404183
                ((STT3DSprC *)this_00,9,PTR_00806764,
                 "expl_bbt0" + this_01->field_02CD * 0x39,0x1d);
      st::fn_00404183
                ((STT3DSprC *)this_00,10,PTR_00806774,
                 "expmask3" + this_01->field_02CD * 0x39,0x1d);
      st::fn_004022D4(this_00,'\n');
      st::fn_00405240((STT3DSprC *)this_00,10,g_playSystem_00802A38->field_00E4);
      st::fn_004044EE((STT3DSprC *)this_00,PTR_008032b8,0x10);
      st::fn_00405240((STT3DSprC *)this_00,8,g_playSystem_00802A38->field_00E4);
      st::fn_00403233((STT3DSprC *)this_00,'\n');
      iVar2 = st::fn_004052CC((STT3DSprC *)this_00);
      this_01->field_02B7 = iVar2;
      g_currentExceptionFrame = local_50.previous;
      return local_c;
    }
    iVar2 = st::fn_00404183((STT3DSprC *)this_00,0xe,PTR_00806774,"coll3",0x1d);
    if (iVar2 == 0) {
      st::fn_004023C4(this_00,DAT_007ce78c,DAT_007ce790);
      st::fn_00405240((STT3DSprC *)this_00,0xe,g_playSystem_00802A38->field_00E4);
      st::fn_00401AAA(this_01,0x18);
      iVar2 = st::fn_00404183
                        ((STT3DSprC *)this_00,0xc,PTR_00806774,
                         (&PTR_s_col3l0_007ce6e0)[this_01->field_0235],0x1d);
      if (iVar2 != 0) {
        return local_c;
      }
      st::fn_00405AA6(this_00,'\f');
      st::fn_00405240((STT3DSprC *)this_00,0xc,g_playSystem_00802A38->field_00E4);
      st::fn_00401AB9(this_01);
      iVar2 = st::fn_004052CC((STT3DSprC *)this_00);
      this_01->field_02B7 = iVar2;
      st::fn_00403D0F((STT3DSprC *)this_00);
      if (this_01->field_02BB != '\0') {
        st::fn_0040464C(this_01);
      }
      this_01->field_02BB = 0;
      g_currentExceptionFrame = local_50.previous;
      return local_c;
    }
  }
  else {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\nick\\to_coll3.cpp",0x1af,0,iVar2,"%s",
                               "STColl3C::LoadImagSpr");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,"E:\\__titans\\nick\\to_coll3.cpp",0x1b1);
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
  ushort *puVar3;
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
    puVar3 = st::fn_006AAC70(0x6c);
    local_8->field_02E6 = puVar3;
    for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
    }
    puVar3 = local_8->field_02E6;
    puVar3[2] = 0xffff;
    puVar3[3] = 0xffff;
    g_currentExceptionFrame = local_50.previous;
    return local_c + 2;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\nick\\to_coll3.cpp",0x5d8,0,iVar2,"%s",
                             "STColl3C::CreateAddSpr");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\nick\\to_coll3.cpp",0x5da);
  return 0xffff;
}

