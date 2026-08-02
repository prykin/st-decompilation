
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBaseTy::sub_004C7070(TLOBaseTy *this,int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  undefined4 local_8;

  local_8 = 0;
  uVar3 = 0;
  if (this->field_03DC == 0) {
    if (this->field_05B8 == 0) {
      return 1;
    }
    iVar5 = this->field_05B8 + -1;
    if (-1 < iVar5) {
      sVar1 = *(short *)&this->field_05B4;
      sVar2 = *(short *)&this->field_05B0;
      do {
        if (sVar2 < 0) {
LAB_004c719b:
          sVar4 = -1;
LAB_004c716e:
          local_8 = 1;
LAB_004c7175:
          if (param_1 != 0) {
            return local_8;
          }
          if (sVar4 != 0) {
            return local_8;
          }
          if (iVar5 == 0) {
            return 1;
          }
        }
        else {
          sVar4 = (short)iVar5;
          if ((((g_worldGrid.sizeX <= sVar2) || (sVar1 < 0)) || (g_worldGrid.sizeY <= sVar1)) ||
             (((sVar4 < 0 || (g_worldGrid.sizeZ <= sVar4)) ||
              (g_worldGrid.cells
               [(int)sVar4 * (int)g_worldGrid.planeStride + (int)g_worldGrid.sizeX * (int)sVar1 +
                (int)sVar2].objects[0] == nullptr)))) {
            if (((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) ||
               ((sVar1 < 0 ||
                (((g_worldGrid.sizeY <= sVar1 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4))))))
            goto LAB_004c719b;
            sVar4 = g_pathingGrid.cells
                    [(int)sVar4 * (int)g_pathingGrid.planeStride +
                     (int)g_pathingGrid.sizeX * (int)sVar1 + (int)sVar2];
            if (sVar4 == -1) goto LAB_004c716e;
            goto LAB_004c7175;
          }
        }
        iVar5 = iVar5 + -1;
        uVar3 = local_8;
      } while (-1 < iVar5);
    }
  }
  return uVar3;
}

