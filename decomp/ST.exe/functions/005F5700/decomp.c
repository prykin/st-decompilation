#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=14;
   incoming_edx_uses=18; incoming_stack_parameter_uses=12; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STBHEShellC::sub_005F5700(STBHEShellC *this,int param_1,int param_2)

{
  int iVar1;
  STWorldObject *this_00;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;
  short local_8;
  short local_6;
  short sVar2;

  iVar2 = param_1;
  local_c = 0;
  iVar1 = this->field_0111;
  sVar3 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    local_14 = (short)(((short)(iVar1 / 0xc9) + sVar3) -
                      (short)((longlong)iVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_14 = (int)(short)(((short)(iVar1 / 0xc9) + sVar3) -
                           (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
  }
  iVar1 = this->field_0115;
  sVar3 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    local_1c = (short)(((short)(iVar1 / 0xc9) + sVar3) -
                      (short)((longlong)iVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_1c = (int)(short)(((short)(iVar1 / 0xc9) + sVar3) -
                           (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
  }
  iVar1 = param_2 / 0xc9;
  iVar5 = local_1c - (iVar1 + 1);
  local_10 = local_14 - (iVar1 + 1);
  local_1c = iVar1 + 2 + local_1c;
  local_14 = iVar1 + 2 + local_14;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  if (local_10 < 0) {
    local_10 = 0;
  }
  if (g_worldGrid.sizeY < local_1c) {
    local_1c = (int)g_worldGrid.sizeY;
  }
  if (g_worldGrid.sizeX < local_14) {
    local_14 = (int)g_worldGrid.sizeX;
  }
  if ((4 < param_1) || (sVar2 = g_worldGrid.sizeX, param_1 < 0)) {
    return 0;
  }
  do {
    iVar1 = local_10;
    if (local_1c <= iVar5) {
      return local_c;
    }
    for (; iVar1 < local_14; iVar1 = iVar1 + 1) {
      sVar3 = (short)iVar1;
      if ((((-1 < sVar3) && (sVar3 < sVar2)) && (sVar6 = (short)iVar5, -1 < sVar6)) &&
         (((sVar6 < g_worldGrid.sizeY && (sVar7 = (short)iVar2, -1 < sVar7)) &&
          ((sVar7 < g_worldGrid.sizeZ &&
           (this_00 = g_worldGrid.cells
                      [(int)sVar6 * (int)sVar2 + (int)g_worldGrid.planeStride * (int)sVar7 +
                       (int)sVar3].objects[0], this_00 != nullptr)))))) {
        thunk_FUN_00416270(this_00,(uint *)&local_6,(int *)((int)&param_1 + 2),&local_8);
        if (*(int *)&this_00[1].field_0x8 == 1) {
          iVar4 = FUN_006aced8((int)local_6,(int)STPiece<2,2>(param_1),this->field_0111,this->field_0115);
          if (param_2 <= iVar4) {
            iVar4 = FUN_006aced8(local_6 + 100,(int)STPiece<2,2>(param_1),this->field_0111,this->field_0115);
            if (param_2 <= iVar4) {
              iVar4 = FUN_006aced8((int)local_6,STPiece<2,2>(param_1) + 100,this->field_0111,
                                   this->field_0115);
              if (param_2 <= iVar4) {
                iVar4 = FUN_006aced8(local_6 + 100,STPiece<2,2>(param_1) + 100,this->field_0111,
                                     this->field_0115);
                if (param_2 <= iVar4) goto cf_continue_loop_005F5985;
              }
            }
          }
        }
        else {
          iVar4 = FUN_006aced8((int)local_6,(int)STPiece<2,2>(param_1),this->field_0111,this->field_0115);
          if (param_2 <= iVar4) goto cf_continue_loop_005F5985;
        }
        local_c = local_c + 1;
        thunk_FUN_00601d10(this->field_0051,(int)(this->field_007D << 2) / (8 - iVar2),(int)this_00,
                           (short)this->field_0081,this->field_0085,0xb5,0x110);
      }
cf_continue_loop_005F5985:
      sVar2 = g_worldGrid.sizeX;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

