#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STSharkC.cpp

// 0058D750 STSharkC::STSharkC
#line 4 "decomp/ST.exe/functions/0058D750/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079BE80 (store 0058D77B)
   Evidence: final_vptr=0079BE80; returns_this=true; calls_before=2; field_writes_after=3;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 0058D750 returns STSharkC::STSharkC this @ 0058D79D */

STSharkC * __thiscall st::fn_0058D750(STSharkC *this)

{

  st::fn_00401933((STGameObjC *)this);
  st::fn_00401316((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = st::machine_word_boundary_cast<undefined4>(&st_global_0079BFE0);
  this->vtable = &st_global_0079BE80;
  this->field_0257 = CASE_0;
  memset(&this->field_0x25b, 0, 0x34); /* compiler bulk-zero initialization */
  this->field_023D = 0;
  this->field_0249 = 0xff;
  return this;
}

// 0058EFE0 STSharkC::sub_0058EFE0
#line 4 "decomp/ST.exe/functions/0058EFE0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STSharkC.
   Evidence: this_call_owners=[STSharkC]; agreed_this_calls=5; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_0058EFE0(STSharkC *this)

{
  undefined4 local_24 [8];

  memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
  local_24[3] = 0;
  local_24[5] = this->field_0008;
  local_24[4] = 10;
  st::fn_006E60A0(this,local_24);
  return;
}

// 0058F430 STSharkC::sub_0058F430
#line 4 "decomp/ST.exe/functions/0058F430/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STSharkC.
   Evidence: this_call_owners=[STSharkC]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0
   [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=0058E570 @ 0058E799
   -> MOV MOV dword ptr [ESI + 0x257],EAX | 0058F680 @ 0058F68F -> MOV MOV dword ptr [EBP +
   -0x18],EAX */

int __thiscall st::fn_0058F430(STSharkC *this)

{
  STWorldObject *this_00;
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int local_14;
  int local_c;

  local_14 = 0x7fff;
  this->field_023D = 0;
  this->field_0249 = 0xff;
  iVar6 = st::machine_word_boundary_cast<int>(this->field_0047 + -4);
  if (iVar6 < this->field_0047 + 4) {
    do {
      if (((iVar6 <= g_worldGrid.sizeX) && (-1 < iVar6)) &&
         (iVar9 = st::machine_word_boundary_cast<int>(this->field_0049 + -4), sVar7 = g_worldGrid.sizeX, iVar9 < this->field_0049 + 4)) {
        do {
          if ((iVar9 <= g_worldGrid.sizeY) && (-1 < iVar9)) {
            local_c = 0;
            do {
              sVar5 = (short)iVar6;
              if ((((-1 < sVar5) && (sVar5 < sVar7)) &&
                  ((sVar8 = (short)iVar9, -1 < sVar8 &&
                   ((((sVar8 < g_worldGrid.sizeY && (sVar1 = (short)local_c, -1 < sVar1)) &&
                     (sVar1 < g_worldGrid.sizeZ)) &&
                    ((this_00 = g_worldGrid.cells
                                [(int)sVar8 * (int)sVar7 + (int)sVar1 * (int)g_worldGrid.planeStride
                                 + (int)sVar5].objects[0], this_00 != nullptr &&
                     (this_00->value_20 == 0x14)))))))) &&
                 (iVar2 = this_00->GetObjectTypeId(), iVar2 == 0x15)) {
                iVar2 = st::machine_word_boundary_cast<int>(this->field_0047 - iVar6);
                if (iVar2 < 0) {
                  iVar2 = -iVar2;
                }
                iVar3 = st::machine_word_boundary_cast<int>(this->field_0049 - iVar9);
                if (iVar3 < 0) {
                  iVar3 = -iVar3;
                }
                iVar4 = st::machine_word_boundary_cast<int>(this->field_004B - local_c);
                if (iVar4 < 0) {
                  iVar4 = -iVar4;
                }
                iVar2 = iVar4 + iVar3 + iVar2;
                if (iVar2 < local_14) {
                  this->field_024D = *(undefined2 *)&this_00[1].field_0xe;
                  this->field_0249 = st::machine_word_boundary_cast<undefined4>(this_00[1].vtable);
                  this->field_0231 = sVar5;
                  this->field_0233 = sVar8;
                  this->field_0235 = sVar1;
                  this->field_023D = 1;
                  local_14 = iVar2;
                }
              }
              local_c = local_c + 1;
              sVar7 = g_worldGrid.sizeX;
            } while (local_c < 5);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < this->field_0049 + 4);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < this->field_0047 + 4);
  }
  return (uint)(this->field_023D != 0);
}

// 0058FF70 STSharkC::sub_0058FF70
#line 4 "decomp/ST.exe/functions/0058FF70/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STSharkC.
   Evidence: this_call_owners=[STSharkC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_0257 uses
   /SubmarineTitans/Recovered/Enums/STSharkC_field_0257State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7 */

int __thiscall st::fn_0058FF70(STSharkC *this)

{
  uint uVar1;
  uint uVar2;

  uVar2 = g_playSystem_00802A38->field_00E4;
  switch(this->field_0257) {
  case CASE_0:
    uVar1 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
    this->field_001C = uVar1;
    return uVar2 + 1 + (uVar1 >> 0x10) % 5;
  case CASE_6:
    uVar1 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
    this->field_001C = uVar1;
    uVar2 = uVar2 + 0xf + (uVar1 >> 0x10 & 0xf);
  }
  return uVar2;
}

