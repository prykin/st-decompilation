
/* [STMethodOwnerApplier] Structural method owner recovered as STDestC.
   Evidence: this_call_owners=[STDestC]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STDestC::sub_00603120(STDestC *this)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;

  sVar1 = this->field_0259;
  sVar3 = this->field_0255;
  sVar4 = this->field_0257;
  if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) || (sVar4 < 0)) ||
      (((g_worldGrid.sizeY <= sVar4 || (sVar1 < 0)) ||
       ((g_worldGrid.sizeZ <= sVar1 ||
        ((g_worldGrid.cells
          [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar4 +
           (int)sVar3].objects[0] == (STWorldObject *)0x0 ||
         (g_worldGrid.cells
          [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar4 +
           (int)sVar3].objects[0]->value_20 != 1000)))))))) &&
     ((this->field_0245 != 0 ||
      ((((((((short)(sVar3 + 1) < 0 || (g_worldGrid.sizeX <= (short)(sVar3 + 1))) || (sVar4 < 0)) ||
          ((g_worldGrid.sizeY <= sVar4 || (sVar1 < 0)))) || (g_worldGrid.sizeZ <= sVar1)) ||
        ((g_worldGrid.cells
          [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar4 +
           (int)(short)(sVar3 + 1)].objects[0] == (STWorldObject *)0x0 ||
         (g_worldGrid.cells
          [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar4 +
           (int)(short)(sVar3 + 1)].objects[0]->value_20 != 1000)))) &&
       (((((sVar4 = sVar4 + 1, sVar3 < 0 ||
           (((g_worldGrid.sizeX <= sVar3 || (sVar4 < 0)) || (g_worldGrid.sizeY <= sVar4)))) ||
          (((sVar1 < 0 || (g_worldGrid.sizeZ <= sVar1)) ||
           (g_worldGrid.cells
            [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar4 +
             (int)sVar3].objects[0] == (STWorldObject *)0x0)))) ||
         (g_worldGrid.cells
          [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar4 +
           (int)sVar3].objects[0]->value_20 != 1000)) &&
        ((((sVar3 = sVar3 + 1, sVar3 < 0 || (g_worldGrid.sizeX <= sVar3)) ||
          ((sVar4 < 0 ||
           (((g_worldGrid.sizeY <= sVar4 || (sVar1 < 0)) || (g_worldGrid.sizeZ <= sVar1)))))) ||
         ((g_worldGrid.cells
           [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar4 +
            (int)sVar3].objects[0] == (STWorldObject *)0x0 ||
          (g_worldGrid.cells
           [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar4 +
            (int)sVar3].objects[0]->value_20 != 1000)))))))))))) {
    if (this->field_03A6 != '\0') {
      this->field_03A6 = 0;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if (this->field_03A6 == '\0') {
      this->field_03A6 = 1;
      return uVar2;
    }
  }
  return uVar2;
}

