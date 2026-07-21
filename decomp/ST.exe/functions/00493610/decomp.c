
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00493610.
   Evidence: incoming_receiver_captures=1; receiver_accesses=9; incoming_edx_uses=0; calls=3;
   ecx_pointer_setup=3; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=1; adopt_untyped_existing_thiscall */

undefined4 __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00493610::FUN_00493610
          (AnonReceiver_00493610 *this,short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  undefined4 local_14;
  int local_c;
  int local_8;
  
  local_8 = (int)*(short *)&this->field_0x621;
  uVar2 = 0;
  iVar5 = local_8 + -1;
  local_c = 1000000;
  local_14 = 0;
  if (local_8 + 1 < iVar5) {
    return 0;
  }
  local_8 = local_8 + -2;
  do {
    if (((-2 < local_8) && (iVar5 <= g_worldGrid.sizeZ + -1)) &&
       (iVar9 = *(short *)&this->field_0x61f + -1, iVar9 <= *(short *)&this->field_0x61f + 2)) {
      do {
        if (((-1 < iVar9) && (iVar9 <= g_worldGrid.sizeY + -1)) &&
           (iVar7 = *(short *)&this->field_0x61d + -1, iVar7 <= *(short *)&this->field_0x61d + 2)) {
          do {
            if (((-1 < iVar7) && (iVar3 = (int)g_worldGrid.sizeX, iVar7 <= iVar3 + -1)) &&
               (g_pathingGrid.cells
                [g_pathingGrid.planeStride * iVar5 + g_pathingGrid.sizeX * iVar9 + iVar7] == 0)) {
              sVar6 = (short)iVar7;
              sVar8 = (short)iVar9;
              sVar4 = (short)iVar5;
              if ((((sVar6 < 0) ||
                   ((((((g_worldGrid.sizeX <= sVar6 || (sVar8 < 0)) || (g_worldGrid.sizeY <= sVar8))
                      || ((sVar4 < 0 || (g_worldGrid.sizeZ <= sVar4)))) ||
                     (g_worldGrid.cells
                      [(int)sVar4 * (int)g_worldGrid.planeStride + sVar8 * iVar3 + (int)sVar6].
                      objects[0] == (STWorldObject *)0x0)) &&
                    (((sVar6 < 0 || (g_worldGrid.sizeX <= sVar6)) ||
                     (((sVar8 < 0 ||
                       (((g_worldGrid.sizeY <= sVar8 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4)
                        ))) || (g_worldGrid.cells
                                [(int)sVar4 * (int)g_worldGrid.planeStride + sVar8 * iVar3 +
                                 (int)sVar6].objects[1] == (STWorldObject *)0x0)))))))) &&
                  ((sVar1 = sVar4 + -1, sVar6 < 0 ||
                   ((((((g_worldGrid.sizeX <= sVar6 || (sVar8 < 0)) ||
                       ((g_worldGrid.sizeY <= sVar8 || ((sVar1 < 0 || (g_worldGrid.sizeZ <= sVar1)))
                        ))) || (g_worldGrid.cells
                                [(int)g_worldGrid.planeStride * (int)sVar1 + sVar8 * iVar3 +
                                 (int)sVar6].objects[0] == (STWorldObject *)0x0)) ||
                     (g_pathingGrid.cells
                      [local_8 * g_pathingGrid.planeStride + g_pathingGrid.sizeX * iVar9 + iVar7] ==
                      0)) && (((((sVar6 < 0 || (g_worldGrid.sizeX <= sVar6)) || (sVar8 < 0)) ||
                               ((g_worldGrid.sizeY <= sVar8 || (sVar1 = sVar4 + -1, sVar1 < 0)))) ||
                              ((g_worldGrid.sizeZ <= sVar1 ||
                               (g_worldGrid.cells
                                [(int)g_worldGrid.planeStride * (int)sVar1 + sVar8 * iVar3 +
                                 (int)sVar6].objects[1] == (STWorldObject *)0x0)))))))))) &&
                 (iVar3 = FUN_006aadd0((int)*(short *)&this->field_0x47,
                                       (int)*(short *)&this->field_0x49,
                                       (int)*(short *)&this->field_0x4b,iVar7,iVar9,iVar5),
                 iVar3 < local_c)) {
                *param_1 = sVar6;
                *param_2 = sVar8;
                local_14 = 1;
                *param_3 = sVar4;
                local_c = iVar3;
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 <= *(short *)&this->field_0x61d + 2);
        }
        iVar9 = iVar9 + 1;
        uVar2 = local_14;
      } while (iVar9 <= *(short *)&this->field_0x61f + 2);
    }
    iVar5 = iVar5 + 1;
    local_8 = local_8 + 1;
  } while (iVar5 <= *(short *)&this->field_0x621 + 1);
  return uVar2;
}

