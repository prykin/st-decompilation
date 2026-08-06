#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STJellyGunC.cpp

// 00415ED0 STJellyGunC::sub_00415ED0
#line 4 "decomp/ST.exe/functions/00415ED0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004653B0 -> 00415ED0 @ 00465529 | 004653B0 -> 00415ED0 @ 0046570D | 0046C980 ->
   00415ED0 @ 0046CB8D | 0046C980 -> 00415ED0 @ 0046CD4F | 004714D0 -> 00415ED0 @ 004716C6 |
   004714D0 -> 00415ED0 @ 004718EB

   [STMethodOwnerApplier] Structural method owner recovered as STJellyGunC.
   Evidence: this_call_owners=[STJellyGunC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5 */

undefined4 __thiscall st::fn_00415ED0(STJellyGunC *this,undefined4 *param_1,int *param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_007901b0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_8 = 0;
  if ((this->field_0068 == this->field_0064) && (0 < this->field_0068)) {
    return 0;
  }
  if (10 < this->field_008F) {
    ExceptionList = &local_14;
    st::fn_0040338C((int *)this);
  }
  this->field_008F = -1;
  if (this->field_007A == 1) {
    *param_1 = 1;
    this->field_007A = 0;
    ExceptionList = local_14;
    return 1;
  }
  this->field_0040 = this->field_004D;
  this->field_0041 = this->field_004E;
  this->field_0043 = this->field_0050;
  this->field_0045 = this->field_0052;
  this->field_0047 = this->field_0054;
  this->field_0049 = this->field_0056;
  this->field_004B = this->field_0058;
  this->field_004D = this->field_005A;
  iVar4 = this->field_0068;
  this->field_0068 = iVar4 + 1;
  iVar4 = iVar4 + 2;
  iVar5 = this->field_0064;
  sVar6 = this->field_0034 +
          (short)((((int)this->field_003A - (int)this->field_0034) * iVar4) / iVar5);
  this->field_004E = sVar6;
  sVar1 = (short)((((int)this->field_003C - (int)this->field_0036) * iVar4) / iVar5) +
          this->field_0036;
  this->field_0050 = sVar1;
  sVar2 = (short)((((int)this->field_003E - (int)this->field_0038) * iVar4) / iVar5) +
          this->field_0038;
  this->field_0052 = sVar2;
  iVar7 = (int)sVar6;
  this->field_0054 = (short)(iVar7 / 0xc9);
  iVar4 = (int)sVar1;
  this->field_0056 = (short)(iVar4 / 0xc9);
  iVar5 = (int)sVar2;
  this->field_0058 = (short)(iVar5 / 200);
  uVar3 = (iVar7 / 0xc9) * 0xc9 + 100U & 0xffff;
  if (((int)(uVar3 - 0x1e) < iVar7) && (iVar7 < (int)(uVar3 + 0x1e))) {
    uVar3 = (iVar4 / 0xc9) * 0xc9 + 100U & 0xffff;
    if (((int)(uVar3 - 0x1e) < iVar4) && (iVar4 < (int)(uVar3 + 0x1e))) {
      uVar3 = (iVar5 / 200) * 200 + 100U & 0xffff;
      if (((int)(uVar3 - 0x1d) < iVar5) && (iVar5 < (int)(uVar3 + 0x1d))) {
        this->field_005A = 0;
        goto LAB_004160cd;
      }
    }
  }
  this->field_005A = 1;
LAB_004160cd:
  if ((this->field_004D == '\0') && (this->field_005A == '\x01')) {
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
  if (((this->field_0047 == this->field_0054) && (this->field_0049 == this->field_0056)) &&
     (this->field_004B == this->field_0058)) {
    *param_2 = 0;
  }
  else {
    *param_2 = 1;
  }
  if (this->field_0068 == this->field_0064) {
    this->field_008F = this->field_008F + 1;
    ExceptionList = local_14;
    return 0;
  }
  ExceptionList = local_14;
  return 1;
}

// 005823D0 STJellyGunC::STJellyGunC
#line 4 "decomp/ST.exe/functions/005823D0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B78C (store 005823F9)
   Evidence: final_vptr=0079B78C; returns_this=true; calls_before=2; field_writes_after=8;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005823D0 returns STJellyGunC::STJellyGunC this @ 0058243D */

STJellyGunC * __thiscall st::fn_005823D0(STJellyGunC *this)

{

  st::fn_00401933((STGameObjC *)this);
  st::fn_00401316((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &st_global_0079B8EC;
  this->vtable = &st_global_0079B78C;
  memset(&this->field_0x256, 0, 0x3e); /* compiler bulk-zero initialization */
  this->field_0241 = 0xff;
  this->field_0231 = 0;
  this->field_0235 = 0;
  this->field_0239 = 0;
  this->field_023D = 0;
  *(undefined4 *)&this->field_0x247 = 0;
  *(undefined4 *)&this->field_0x24b = 0;
  *(undefined4 *)&this->field_0x252 = 0;
  return this;
}

// 00582530 STJellyGunC::sub_00582530
#line 4 "decomp/ST.exe/functions/00582530/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STJellyGunC.
   Evidence: this_call_owners=[STJellyGunC]; agreed_this_calls=3; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00582530(STJellyGunC *this)

{
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined4 local_10;

  memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
  local_10 = this->field_0008;
  local_14 = 0x124;
  st::fn_006E6080(this,4,this->field_0286,local_24);
  return;
}

// 00582580 STJellyGunC::sub_00582580
#line 4 "decomp/ST.exe/functions/00582580/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STJellyGunC.
   Evidence: this_call_owners=[STJellyGunC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0

   [STPrototypeApplier] Propagated return.
   Evidence: 00582580 returns return of sub_006E60A0 @ 005825A6 */

int __thiscall st::fn_00582580(STJellyGunC *this)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = this->field_0008;
  local_18 = 0;
  local_14 = 10;
  iVar1 = st::fn_006E60A0(this,local_24);
  return iVar1;
}

// 00583E30 STJellyGunC::sub_00583E30
#line 4 "decomp/ST.exe/functions/00583E30/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STJellyGunC.
   Evidence: this_call_owners=[STJellyGunC]; agreed_this_calls=2; incoming_this_accesses=6;
   incoming_edx_uses=0

   [STPrototypeApplier] Propagated return.
   Evidence: 00583E30 returns stored into /STJellyGunC+0x235 @ 005827C2 | 00583E30 returns stored
   into /STJellyGunC+0x235 @ 005829FB */

STJellyGunC_field_0235State __thiscall st::fn_00583E30(STJellyGunC *this)

{
  STJellyGunC_field_0235State SVar1;
  int iVar2;
  int uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  short local_20 [2];
  short local_1c [2];
  short local_18 [2];
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  SVar1 = CASE_2;
  if (this->field_0235 != CASE_2) {
    local_14 = st::fn_004020FE(this,&local_10,&local_c,&local_8);
    if (local_14 == 1) {
      if (this->field_023D != 0) {
        iVar2 = local_10 - this->field_0047;
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        if (iVar2 < 2) {
          iVar2 = local_c - this->field_0049;
          if (iVar2 < 0) {
            iVar2 = -iVar2;
          }
          if (iVar2 < 2) {
            iVar2 = local_8 - this->field_004B;
            if (iVar2 < 0) {
              iVar2 = -iVar2;
            }
            if (iVar2 < 2) {
              iVar2 = st::fn_00402455(this,this->field_0041,this->field_0043,this->field_0045,
                                   (short)local_10 * 0xc9 + 100,(short)local_c * 0xc9 + 100,
                                   (short)local_8 * 200 + 100,6);
              return (-(uint)(iVar2 != 0) & 0xfffffffd) + CASE_3;
            }
          }
        }
      }
      this->field_0239 = -1;
      this->field_0231 = 1;
      if (*(int *)&this->field_0x247 == 10) {
        *(undefined4 *)&this->field_0x24b = 0;
      }
      uVar3 = st::fn_006DB910((int)this->field_0047,(int)this->field_0049,local_10,local_c);
      uVar4 = st::fn_006DB990(uVar3,8);
      uVar5 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar5;
      uVar5 = uVar5 >> 0x10;
      piVar11 = (int *)local_18;
      iVar7 = (int)this->field_0049;
      piVar10 = (int *)local_1c;
      iVar8 = (int)this->field_0047;
      piVar9 = (int *)local_20;
      iVar2 = (int)this->field_004B;
      iVar6 = st::fn_006ACF90(iVar8,iVar7,local_10,local_c);
      iVar2 = st::fn_0040244B(uVar4,local_8 - this->field_004B,iVar6,iVar8,iVar7,iVar2,piVar9,
                                 piVar10,piVar11,uVar5);
      if (iVar2 != 0) {
        st::fn_00405C90(this,6);
        st::fn_00405105(this,5);
        iVar2 = st::fn_00404318
                          ((AnonReceiver_004167A0 *)this,local_20[0],local_1c[0],local_18[0]);
        if (iVar2 == 0) {
          return CASE_1;
        }
        iVar2 = st::fn_00404318
                          ((AnonReceiver_004167A0 *)this,(short)local_10,(short)local_c,
                           (short)local_8);
        if (iVar2 == 0) {
          return CASE_1;
        }
      }
    }
    SVar1 = 0;
  }
  return SVar1;
}

// 00584060 STJellyGunC::sub_00584060
#line 4 "decomp/ST.exe/functions/00584060/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STJellyGunC.
   Evidence: this_call_owners=[STJellyGunC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0 */

undefined4 __thiscall
st::fn_00584060(STJellyGunC *this,int *param_1,int *param_2,int *param_3)

{
  STGameObjC *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_1c;
  int local_18;
  int local_14;
  short local_10;
  undefined2 local_e;
  undefined2 local_c;
  short local_a;
  short local_8;
  short local_6;

  if (this->field_023D != 0) {
    this_00 = st::fn_004028BA
                        (g_allPlayers_007FA174,*(char *)&this->field_0241,
                         *(ushort *)&this->field_0x245,CASE_1);
    if ((this_00 != nullptr) &&
       (iVar1 = this_00->vfunc_F8(), iVar1 != 0)) {
      st::fn_00405F0B((STFishC *)this_00,&local_6,&local_8,&local_a);
      *param_1 = (int)local_6;
      *param_2 = (int)local_8;
      *param_3 = (int)local_a;
      return 1;
    }
    this->field_023D = 0;
  }
  st::fn_004018C5((STFishC *)this,&local_10,&local_e,&local_c);
  iVar1 = this->field_001C * 0x41c64e6d + 0x3039;
  this->field_001C = iVar1;
  local_14 = (int)(short)(((ushort)((uint)iVar1 >> 0x10) & 1) + 1);
  uVar2 = this->field_001C * 0x41c64e6d + 0x3039;
  this->field_001C = uVar2;
  if ((uVar2 >> 0x10) % 3 == 0) {
    local_14 = -local_14;
  }
  local_14 = this->field_004B - local_14;
  if (local_14 < 0) {
    local_14 = -local_14;
  }
  local_18 = this->field_0276;
  local_14 = local_14 % 5;
  if (local_18 < 0) {
    iVar1 = this->field_001C;
  }
  else {
    iVar1 = this->field_001C;
  }
  uVar2 = iVar1 * 0x41c64e6d + 0x3039;
  this->field_001C = uVar2;
  iVar1 = this->field_027A;
  local_18 = (uVar2 >> 0x10) % (uint)(this->field_027E - local_18) + local_18;
  if (iVar1 < 0) {
    iVar3 = this->field_001C;
  }
  else {
    iVar3 = this->field_001C;
  }
  uVar2 = iVar3 * 0x41c64e6d + 0x3039;
  this->field_001C = uVar2;
  local_1c = 0;
  iVar1 = (uVar2 >> 0x10) % (uint)(this->field_0282 - iVar1) + iVar1;
LAB_005841dc:
  do {
    while( true ) {
      while (iVar3 = st::fn_00404D3B((short)local_18,(short)iVar1,(short)local_14), iVar3 != 0) {
        if (((local_18 != this->field_0047) || (iVar1 != this->field_0049)) ||
           (local_14 != this->field_004B)) {
          *param_1 = local_18;
          *param_2 = iVar1;
          *param_3 = local_14;
          return 1;
        }
        uVar2 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar2;
        if ((uVar2 >> 0x10) % 3 == 0) {
          local_14 = local_14 + 1;
          if (4 < local_14) {
            local_14 = 3;
          }
        }
        else {
          local_14 = local_14 + -1;
          if (local_14 < 0) {
            local_14 = 1;
          }
        }
        local_1c = local_1c + 1;
        if (local_1c == 5) {
          return 0;
        }
      }
      iVar3 = local_18 - this->field_0047;
      if (iVar3 < 1) break;
      local_18 = local_18 + -1;
      iVar3 = local_18;
joined_r0x00584297:
      if (iVar3 < 0) {
        return 0;
      }
    }
    if (-1 < iVar3) {
      iVar3 = iVar1 - this->field_0049;
      if (0 < iVar3) {
        iVar1 = iVar1 + -1;
        iVar3 = iVar1;
        goto joined_r0x00584297;
      }
      if (-1 < iVar3) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      goto LAB_005841dc;
    }
    local_18 = local_18 + 1;
  } while( true );
}

// 00584380 STJellyGunC::sub_00584380
#line 4 "decomp/ST.exe/functions/00584380/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STJellyGunC.
   Evidence: this_call_owners=[STJellyGunC]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0 */

undefined4 __thiscall st::fn_00584380(STJellyGunC *this)

{
  undefined4 *this_00;
  int iVar1;
  undefined4 uVar2;

  this_00 = &this->field_01D5;
  iVar1 = st::fn_00404183((STT3DSprC *)this_00,8,PTR_00806774,"Expb11",0x1d);
  if (iVar1 == 0) {
    st::fn_00405240((STT3DSprC *)this_00,8,g_playSystem_00802A38->field_00E4);
    st::fn_00404183((STT3DSprC *)this_00,10,PTR_00806774,"expmask3",0x1d);
    st::fn_00403233((STT3DSprC *)this_00,'\n');
    st::fn_004044EE((STT3DSprC *)this_00,PTR_008032b8,0x10);
    st::fn_00405240((STT3DSprC *)this_00,10,g_playSystem_00802A38->field_00E4);
    this->vfunc_D8();
    iVar1 = st::fn_00404183((STT3DSprC *)this_00,9,PTR_00806764,"bulb_n5",0x1d);
    if (iVar1 == 0) {
      st::fn_00402761((STT3DSprC *)this_00,9);
      uVar2 = st::fn_004022AC((STT3DSprC *)this_00,'\t');
      this->field_0x24f = (char)uVar2;
      this->field_0x250 = DAT_007cb414;
      this->field_0251 = 0;
    }
    this->field_0239 = 100;
    return 0;
  }
  return 0xffffffff;
}

// 005844E0 STJellyGunC::sub_005844E0
#line 4 "decomp/ST.exe/functions/005844E0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STJellyGunC.
   Evidence: this_call_owners=[STJellyGunC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 005844E0 -> 00568DD0 @ 00584566

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005844E0(STJellyGunC *this,int param_1,int param_2,int soundId)

{
  short sVar1;
  SoundPosition local_10;

  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    local_10.x = (short)(((short)(param_1 / 0xc9) + sVar1) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.x = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                             (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    local_10.y = (short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.y = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                             (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  local_10.unknown = this->field_0018;
  st::fn_00404BD8((SoundClassTy *)&g_sound,SOUND_MODE_2,nullptr,soundId,&local_10,0);
  return;
}

