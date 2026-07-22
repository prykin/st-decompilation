
/* [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STColl3C::sub_005FA8B0(STColl3C *this,int *param_1,int *param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  dword dVar4;
  int iVar5;
  STFishC *this_00;
  undefined4 uVar6;
  STFishC *local_14;
  undefined4 local_10;
  short local_a;
  short local_8;
  short local_6;

  sVar1 = *(short *)&this->field_025D;
  sVar2 = *(short *)&this->field_0265;
  sVar3 = *(short *)&this->field_0261;
  local_10 = 0;
  if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
      ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) ||
     ((g_worldGrid.sizeZ <= sVar2 ||
      (this_00 = (STFishC *)
                 g_worldGrid.cells
                 [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar3 +
                  (int)sVar1].objects[0], this_00 == (STFishC *)0x0)))) {
    if ((this->field_0255 == 0) ||
       (iVar5 = FUN_006e62d0(g_playSystem_00802A38,this->field_0255,(int *)&local_14), iVar5 == -4))
    {
      return 0;
    }
    this_00 = local_14;
    uVar6 = 1;
  }
  else {
    uVar6 = local_10;
    if ((*(int *)&this_00->field_0x20 == 1000) &&
       (dVar4 = (*this_00->vtable->slot_2C)(this_00), uVar6 = local_10, dVar4 == 0x6e)) {
      uVar6 = 1;
    }
  }
  if (this_00 != (STFishC *)0x0) {
    STFishC::sub_004162B0(this_00,&local_6,&local_8,&local_a);
    *param_1 = (int)local_6;
    *param_2 = (int)local_8;
    *param_3 = local_a + 1;
  }
  return uVar6;
}

