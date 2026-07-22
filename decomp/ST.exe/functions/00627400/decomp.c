
/* [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=4; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STMineSetC::sub_00627400(STMineSetC *this,undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STFishC *this_00;
  int iVar4;
  dword dVar5;

  sVar1 = this->field_0047;
  sVar2 = this->field_0049;
  sVar3 = this->field_004B;
  if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar2 < 0)) ||
     (((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)) ||
      ((g_worldGrid.sizeZ <= sVar3 ||
       (this_00 = (STFishC *)
                  g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)sVar3 + (int)g_worldGrid.sizeX * (int)sVar2 +
                   (int)sVar1].objects[(byte)this->field_008E], this_00 == (STFishC *)0x0)))))) {
    if ((((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar2 < 0)) ||
         ((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)))) ||
        ((g_worldGrid.sizeZ <= sVar3 ||
         (g_worldGrid.cells
          [(int)g_worldGrid.planeStride * (int)sVar3 + (int)g_worldGrid.sizeX * (int)sVar2 +
           (int)sVar1].objects[(byte)this->field_008E] == (STWorldObject *)0x0)))) &&
       (iVar4 = DumpClassC::WritePtr
                          (sVar1,sVar2,sVar3,(uint)(byte)this->field_008E,
                           (AnonShape_00495EC0_95A268C6 *)this), iVar4 == 0)) {
      this->field_0314 = this->field_0314 + '\x01';
      return param_1;
    }
  }
  else {
    if (this->field_0315 < g_playSystem_00802A38->field_00E4) {
      thunk_FUN_00627390(this);
      return this->field_02AE;
    }
    if ((int)(((ulonglong)(this->field_0315 - g_playSystem_00802A38->field_00E4) % 200) / 3) != 0) {
      dVar5 = (*this_00->vtable->slot_2C)(this_00);
      if (dVar5 == 0xe6) {
        thunk_FUN_0058f1e0(this_00,0);
      }
      else if ((0xe6 < (int)dVar5) && ((int)dVar5 < 0xec)) {
        STFishC::sub_0057D5F0(this_00,0);
        return param_1;
      }
    }
  }
  return param_1;
}

