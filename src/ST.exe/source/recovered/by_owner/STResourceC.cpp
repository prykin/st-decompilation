#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STResourceC.cpp

// 005802A0 STResourceC::sub_005802A0
#line 1 "decomp/ST.exe/functions/005802A0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STResourceC.
   Evidence: this_call_owners=[STResourceC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0 */

void __thiscall st::fn_005802A0(STResourceC *this,int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  AnonShape_004E0250_5A3B9236 *pAVar4;

  st::fn_00402973(this,param_1,param_2);
  if (this->field_025D == 1) {
    sVar1 = this->field_0245;
    sVar2 = this->field_024D;
    sVar3 = this->field_0249;
    if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
       (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))) {
      pAVar4 = nullptr;
    }
    else {
      pAVar4 = (AnonShape_004E0250_5A3B9236 *)
               STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
    }
    if (pAVar4->field_0018 == this->field_0269) {
      st::fn_00405EE8(pAVar4);
    }
  }
  return;
}

// 00580D30 STResourceC::sub_00580D30
#line 1 "decomp/ST.exe/functions/00580D30/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STResourceC.
   Evidence: this_call_owners=[STResourceC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0 */

void __thiscall st::fn_00580D30(STResourceC *this,int param_1)

{
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  undefined2 uVar1;

  if (param_1 != 0) {
    this->field_025D = 2;
  }
  uVar1 = 0;
  if (this->field_0259 != 0) {
    st::fn_0040492B(this,0,0);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar1 = extraout_var;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  st::fn_00401541(g_allPlayers_007FA174,CONCAT22(uVar1,this->field_0032),this);
  st::fn_00404D04(this);
  this->field_0032 = 0xffff;
  if (param_1 == 0) {
    st::fn_00404449(this);
  }
  return;
}

