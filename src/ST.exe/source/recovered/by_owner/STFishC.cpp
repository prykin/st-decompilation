#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STFishC.cpp

// 004162B0 STFishC::sub_004162B0
#line 1 "decomp/ST.exe/functions/004162B0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STFishC.
   Evidence: this_call_owners=[STFishC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0043AAF0 -> 004162B0 @ 0043ABD0; address of STAllPlayersC::GetCamPoint parameter
   param_1 | 0043AAF0 -> 004162B0 @ 0043AC52; address of STAllPlayersC::GetCamPoint parameter
   param_1 | 0043AAF0 -> 004162B0 @ 0043AD49; address of STAllPlayersC::GetCamPoint parameter
   param_1 */

void __thiscall
st::fn_004162B0(STFishC *this,short *param_1,undefined2 *param_2,undefined2 *param_3)

{
  *param_1 = this->field_0047;
  *param_2 = this->field_0049;
  *param_3 = this->field_004B;
  return;
}

// 004162F0 STFishC::sub_004162F0
#line 1 "decomp/ST.exe/functions/004162F0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STFishC.
   Evidence: this_call_owners=[STFishC]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
st::fn_004162F0(STFishC *this,undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  *param_1 = this->field_005B;
  *param_2 = this->field_005D;
  *param_3 = this->field_005F;
  return;
}

// 0057BD20 STFishC::STFishC
#line 1 "decomp/ST.exe/functions/0057BD20/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B3C4 (store 0057BD3C)
   Evidence: final_vptr=0079B3C4; returns_this=true; calls_before=2; field_writes_after=1;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 0057BD20 returns STFishC::STFishC this @ 0057BD50 */

STFishC * __thiscall st::fn_0057BD20(STFishC *this)

{
  st::fn_00401933((STGameObjC *)this);
  st::fn_00401316((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &VTable_0079B524;
  this->vtable = &STFishCVTable;
  this->field_023B = 0;
  return this;
}

// 0057BF20 STFishC::sub_0057BF20
#line 1 "decomp/ST.exe/functions/0057BF20/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STFishC.
   Evidence: this_call_owners=[STFishC]; agreed_this_calls=3; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated return.
   Evidence: 0057BF20 returns return of sub_006E60A0 @ 0057BF46 */

int __thiscall st::fn_0057BF20(STFishC *this)

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

// 0057D5F0 STFishC::sub_0057D5F0
#line 1 "decomp/ST.exe/functions/0057D5F0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STFishC.
   Evidence: this_call_owners=[STFishC]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0 */

undefined4 __thiscall st::fn_0057D5F0(STFishC *this,uint param_1)

{
  int iVar1;
  short local_10 [2];
  short local_c [2];
  int local_8;

  local_8 = 0;
  if ((((this->field_0047 == this->field_0235) && (this->field_0049 == this->field_0237)) &&
      (this->field_004B == this->field_0239)) || (param_1 != 0)) {
    iVar1 = st::fn_00402ECD(this,&param_1,(uint *)local_c,(int *)local_10,&local_8);
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0;
      }
      iVar1 = st::fn_004021E9(this,this->field_006C,(short)local_8);
      if (iVar1 != 0) {
        return 0;
      }
      return 2;
    }
    this->field_0235 = (short)param_1;
    this->field_0237 = local_c[0];
    this->field_0239 = local_10[0];
  }
  iVar1 = st::fn_00401B86(this);
  if (iVar1 != 0) {
    return 1;
  }
  return 0;
}

// 0057D700 STFishC::sub_0057D700
#line 1 "decomp/ST.exe/functions/0057D700/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STFishC.
   Evidence: this_call_owners=[STFishC]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0

   [STSwitchEnumApplier] Switch target field_0267 uses
   /SubmarineTitans/Recovered/Enums/STFishC_field_0267State. Cases:
   CASE_E7=231;CASE_E8=232;CASE_E9=233;CASE_EA=234;CASE_EB=235 */

undefined4 __thiscall
st::fn_0057D700(STFishC *this,uint *param_1,uint *param_2,int *param_3,int *param_4)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  short sVar12;
  short sVar13;
  int local_18;
  short local_a;
  undefined2 local_8;
  undefined2 local_6;

  uVar2 = (uint)g_worldGrid.sizeX;
  uVar10 = 0;
  uVar9 = 0;
  uVar3 = uVar2 - 1;
  uVar4 = (uint)g_worldGrid.sizeY;
  uVar5 = uVar4 - 1;
  st::fn_004018C5(this,&local_a,&local_8,&local_6);
  local_18 = (int)this->field_004B - (g_playSystem_00802A38->field_00E4 & 1);
  if (local_18 < 0) {
    local_18 = 1;
  }
  switch(this->field_0267) {
  case CASE_E7:
  case CASE_E9:
    uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar10 = (uVar9 >> 0x10) % uVar2;
    uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar9 = (uVar9 >> 0x10) % uVar4;
    goto switchD_0057d76c_default;
  case CASE_E8:
  case CASE_EA:
  case CASE_EB:
    if ((((this->field_0047 < 1) &&
         (((sVar1 = this->field_006C, sVar1 == 0xe1 || (sVar1 == 0xb4)) || (sVar1 == 0x87)))) ||
        ((iVar6 = (int)this->field_0047, (int)uVar3 <= iVar6 &&
         (((sVar1 = this->field_006C, sVar1 == 0x2d || (sVar1 == 0)) || (sVar1 == 0x13b)))))) ||
       (((this->field_0049 < 1 &&
         (((sVar1 = this->field_006C, sVar1 == 0x87 || (sVar1 == 0x5a)) || (sVar1 == 0x2d)))) ||
        ((iVar7 = (int)this->field_0049, (int)uVar5 <= iVar7 &&
         (((sVar1 = this->field_006C, sVar1 == 0xe1 || (sVar1 == 0x10e)) || (sVar1 == 0x13b))))))))
    {
      iVar6 = (sVar1 + 0x2d) % 0x168;
      *param_4 = iVar6;
      if (-1 < iVar6) {
        return 2;
      }
      do {
        iVar6 = *param_4;
        *param_4 = iVar6 + 0x168;
      } while (iVar6 + 0x168 < 0);
      return 2;
    }
    break;
  default:
    goto switchD_0057d76c_default;
  }
  iVar8 = (int)((ulonglong)((longlong)(int)this->field_006C * -0x49f49f49) >> 0x20) +
          (int)this->field_006C;
  switch((iVar8 >> 5) - (iVar8 >> 0x1f)) {
  case 0:
    if (iVar6 < 0) {
      iVar7 = this->field_001C;
    }
    else {
      iVar7 = this->field_001C;
    }
    uVar9 = iVar7 * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar10 = (uVar9 >> 0x10) % ((uVar3 - iVar6) + 1) + iVar6;
    iVar6 = uVar10 - (int)this->field_0047;
    goto LAB_0057d9ad;
  case 1:
    uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar9 = (uVar9 >> 0x10) % (iVar7 + 1U);
    iVar6 = (int)this->field_0047;
    if (iVar6 < 0) {
LAB_0057db0a:
      uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    }
    else {
      uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    }
    goto LAB_0057db18;
  case 2:
    uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar9 = (uVar9 >> 0x10) % (iVar7 + 1U);
    iVar6 = (int)this->field_0049 - uVar9;
    goto LAB_0057da88;
  case 3:
    uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar10 = (uVar9 >> 0x10) % (iVar6 + 1U);
    uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar9 = (uVar9 >> 0x10) % ((int)this->field_0049 + 1U);
    break;
  case 4:
    uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar10 = (uVar9 >> 0x10) % (iVar6 + 1U);
    iVar6 = (int)this->field_0047 - uVar10;
LAB_0057d9ad:
    iVar7 = this->field_0049 - iVar6;
    if (iVar7 < 0) {
      iVar8 = this->field_001C;
    }
    else {
      iVar8 = this->field_001C;
    }
    uVar9 = iVar8 * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar9 = (uVar9 >> 0x10) % (((this->field_0049 + iVar6) - iVar7) + 1U) + iVar7;
    break;
  case 5:
    if (iVar7 < 0) {
      iVar6 = this->field_001C;
    }
    else {
      iVar6 = this->field_001C;
    }
    uVar9 = iVar6 * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar9 = (uVar9 >> 0x10) % ((uVar5 - iVar7) + 1) + iVar7;
    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar10 = (uVar10 >> 0x10) % ((int)this->field_0047 + 1U);
    break;
  case 6:
    if (iVar7 < 0) {
      iVar6 = this->field_001C;
    }
    else {
      iVar6 = this->field_001C;
    }
    uVar9 = iVar6 * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar9 = (uVar9 >> 0x10) % ((uVar5 - iVar7) + 1) + iVar7;
    iVar6 = uVar9 - (int)this->field_0049;
LAB_0057da88:
    uVar2 = this->field_0047 + iVar6;
    iVar6 = this->field_0047 - iVar6;
    if (iVar6 < 0) {
      uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar10;
    }
    else {
      uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar10;
    }
    goto LAB_0057db1e;
  case 7:
    if (iVar7 < 0) {
      iVar6 = this->field_001C;
    }
    else {
      iVar6 = this->field_001C;
    }
    uVar9 = iVar6 * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar9 = (uVar9 >> 0x10) % ((uVar5 - iVar7) + 1) + iVar7;
    iVar6 = (int)this->field_0047;
    if (-1 < iVar6) goto LAB_0057db0a;
    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
LAB_0057db18:
    this->field_001C = uVar10;
    uVar2 = uVar3;
LAB_0057db1e:
    uVar10 = (uVar10 >> 0x10) % ((uVar2 - iVar6) + 1) + iVar6;
    break;
  default:
    goto switchD_0057d88f_default;
  }
  if ((int)uVar10 < 0) {
    uVar10 = 0;
  }
switchD_0057d88f_default:
  if ((int)uVar3 <= (int)uVar10) {
    uVar10 = uVar3;
  }
  if ((int)uVar9 < 0) {
    uVar9 = 0;
  }
  if ((int)uVar5 <= (int)uVar9) {
    uVar9 = uVar5;
  }
switchD_0057d76c_default:
  if ((uVar10 == (int)this->field_0047) && (uVar9 == (int)this->field_0049)) {
    if ((this->field_0267 == CASE_EB) || (this->field_0267 == CASE_E8)) {
      iVar6 = (this->field_006C + 0x2d) % 0x168;
      *param_4 = iVar6;
      if (-1 < iVar6) {
        return 2;
      }
      do {
        iVar6 = *param_4;
        *param_4 = iVar6 + 0x168;
      } while (iVar6 + 0x168 < 0);
      return 2;
    }
    uVar2 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar2;
    local_18 = (int)this->field_004B - (int)(short)((ulonglong)(uVar2 >> 0x10) % 5);
    if (local_18 < 0) {
      local_18 = -local_18;
    }
    local_18 = local_18 % 5;
  }
cf_continue_loop_0057DBE9:
  do {
    sVar1 = (short)uVar10;
    sVar12 = (short)uVar9;
    sVar13 = (short)local_18;
    iVar6 = st::fn_00404D3B(sVar1,sVar12,sVar13);
    if (((iVar6 != 0) &&
        (((sVar1 < 0 || (g_worldGrid.sizeX <= sVar1)) ||
         ((sVar12 < 0 ||
          ((((g_worldGrid.sizeY <= sVar12 || (sVar13 < 0)) || (g_worldGrid.sizeZ <= sVar13)) ||
           (STGridAt3D(g_worldGrid, sVar1, sVar12, sVar13).objects[0] == nullptr)))))))) &&
       (((sVar1 < 0 || (g_worldGrid.sizeX <= sVar1)) ||
        ((sVar12 < 0 ||
         (((g_worldGrid.sizeY <= sVar12 || (sVar13 < 0)) ||
          ((g_worldGrid.sizeZ <= sVar13 ||
           (STGridAt3D(g_worldGrid, sVar1, sVar12, sVar13).objects[1] == nullptr)))))))))) {
      *param_1 = uVar10;
      *param_2 = uVar9;
      *param_3 = local_18;
      return 1;
    }
    bVar11 = (int)(uVar10 - (int)this->field_0047) < 0;
    if (uVar10 == (int)this->field_0047 || bVar11) {
      if (bVar11) {
        uVar10 = uVar10 + 1;
        goto cf_continue_loop_0057DBE9;
      }
      bVar11 = (int)(uVar9 - (int)this->field_0049) < 0;
      if (uVar9 == (int)this->field_0049 || bVar11) {
        if (!bVar11) goto LAB_0057dd0c;
        uVar9 = uVar9 + 1;
        goto cf_continue_loop_0057DBE9;
      }
      uVar9 = uVar9 - 1;
      uVar2 = uVar9;
    }
    else {
      uVar10 = uVar10 - 1;
      uVar2 = uVar10;
    }
    if ((int)uVar2 < 0) {
LAB_0057dd0c:
      iVar6 = (this->field_006C + 0x2d) % 0x168;
      *param_4 = iVar6;
      while (iVar6 < 0) {
        iVar6 = *param_4 + 0x168;
        *param_4 = iVar6;
      }
      return 2;
    }
  } while( true );
}

// 0057DFB0 STFishC::FUN_0057dfb0
#line 1 "decomp/ST.exe/functions/0057DFB0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079B3C4
   Entries: 00405321
   Slots: 0x2C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_0057DFB0(STFishC *this)

{
  return this->field_0267;
}

