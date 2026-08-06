#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=18;
   incoming_edx_uses=5; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_02AD uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_02ADState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189 */

undefined4 __thiscall STMineSetC::sub_00625730(STMineSetC *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  STWorldObject *this_00;
  short sVar4;
  int local_EAX_289;
  int iVar6;
  int local_EAX_752;
  int iVar7;
  Global_sub_006263B0_param_1Enum GVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar5;
  int iVar13;
  int iVar11;
  short sVar12;
  int iVar14;
  int iVar15;
  STMineSetC *pSVar16;
  bool bVar17;
  bool bVar18;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_stack_00000010;
  short sVar19;
  short sVar20;
  int local_34;
  int local_2c;
  int local_28;
  short *local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  short local_a;
  short local_8;
  short local_6;

  local_18 = 0;
  switch((uint)this->field_02AD) {
  case 0:
  case 2:
  case 3:
    local_20 = (int)this->field_0047;
    iVar11 = (int)this->field_0049;
    local_34 = (int)this->field_004B;
    if ((((-1 < local_20) && (-1 < iVar11)) &&
        ((-1 < local_34 &&
         ((local_20 < g_worldGrid.sizeX && (iVar15 = (int)g_worldGrid.sizeY, iVar11 < iVar15))))))
       && (local_34 < 5)) {
      iVar14 = *(int *)(&DAT_007d03a8 + (uint)this->field_02AD * 4);
      local_1c = iVar11 - iVar14;
      if (local_1c < 0) {
        local_1c = 0;
      }
      local_28 = local_20 - iVar14;
      if (local_28 < 0) {
        local_28 = 0;
      }
      iVar11 = iVar14 + 1 + iVar11;
      if (iVar15 < iVar11) {
        iVar11 = iVar15;
      }
      local_20 = iVar14 + 1 + local_20;
      if (g_worldGrid.sizeX < local_20) {
        local_20 = (int)g_worldGrid.sizeX;
      }
      local_14 = local_34 - iVar14;
      if (local_14 < 0) {
        local_14 = 0;
      }
      local_34 = iVar14 + 1 + local_34;
      if (5 < local_34) {
        local_34 = 5;
      }
      iVar15 = local_1c;
      if (local_14 < local_34) {
        do {
          while (iVar14 = local_28, iVar11 <= iVar15) {
            local_14 = local_14 + 1;
            iVar15 = local_1c;
            if (local_34 <= local_14) {
              return local_18;
            }
          }
          for (; iVar14 < local_20; iVar14 = iVar14 + 1) {
            sVar19 = (short)iVar14;
            sVar20 = (short)iVar15;
            sVar12 = (short)local_14;
            local_EAX_289 = thunk_FUN_004961b0(sVar19,sVar20,sVar12);
            if (local_EAX_289 == 0) goto switchD_00625b9f_caseD_a8;
            if ((((((sVar19 < 0) || (g_worldGrid.sizeX <= sVar19)) || (sVar20 < 0)) ||
                 ((g_worldGrid.sizeY <= sVar20 || (sVar12 < 0)))) || (g_worldGrid.sizeZ <= sVar12))
               || (this_00 = STGridAt3D(g_worldGrid, sVar19, sVar20, sVar12).objects[0],
                  this_00 == nullptr)) goto LAB_00625b06;
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            if (in_stack_00000010 == 0) {
              if ((this_00[1].vtable < (STWorldObjectVTable *)0x8) &&
                 ((g_playSystem_00802A38 == nullptr ||
                  (g_bulkInitializedRecords_008087C7[(int)this_00[1].vtable].field_0022 < 8)))) {
                bVar1 = *(byte *)&this_00[1].vtable;
                bVar2 = (byte)this->field_0262;
                if (DAT_00808a8f == '\0') {
                  if (bVar1 == bVar2) {
LAB_006259bf:
                    iVar6 = 0;
                  }
                  else {
                    bVar3 = g_playerRelationMatrix[bVar1][bVar2];
                    if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                      iVar6 = -2;
                    }
                    else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                      iVar6 = -1;
                    }
                    else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                      iVar6 = 1;
                    }
                    else {
                      if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1))
                      goto LAB_006259bf;
                      iVar6 = 2;
                    }
                  }
                  bVar17 = iVar6 < 0;
                }
                else {
                  bVar17 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
                           g_bulkInitializedRecords_008087C7[bVar1].field_0023;
                }
                if ((bVar17) && (iVar6 = (*this_00->vtable[5].slots_00_28[2])(), iVar6 != 0))
                goto LAB_00625ad5;
              }
            }
            else {
              thunk_FUN_00416270(this_00,(uint *)&local_a,(int *)&local_8,&local_6);
              local_EAX_752 =
                   FUN_006acf0d(this->field_02C2,this->field_02C6,this->field_02CA,(int)local_a,
                                (int)local_8,(int)local_6);
              if (local_EAX_752 < *(int *)(&DAT_007d0294 + (uint)this->field_02AD * 4)) {
                if (local_EAX_752 < 0x15e) {
                  iVar6 = thunk_FUN_00627670(this);
                }
                else if (*(int *)(&DAT_007d0294 + (uint)this->field_02AD * 4) == 0) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = thunk_FUN_00627670(this);
                }
                thunk_FUN_00601d10(this->field_0262,iVar6,(int)this_00,(short)this->field_0018,
                                   0xffff,*(int *)(&DAT_007d04d0 + (uint)this->field_02AD * 4),0x110
                                  );
                if ((this_00->value_20 == 1000) || (this_00->value_20 == 0x14)) {
                  this->field_0241 = *(undefined4 *)&this_00->field_0x18;
                }
                if (DAT_00811798 != nullptr) {
                  iVar6 = this->vfunc_2C();
                  iVar7 = this_00->GetObjectTypeId();
                  thunk_FUN_0061fe80(DAT_00811798,iVar14,iVar15,(uint)this_00[1].vtable,iVar7,iVar6);
                }
              }
LAB_00625ad5:
              if (this->field_02AD == CASE_2) {
                if (this->field_0342 != 0) {
                  GVar8 = this_00->GetObjectTypeId();
                  uVar9 = thunk_FUN_006263b0(GVar8);
                  if ((this->field_0342 & uVar9) != 0) goto LAB_00625aff;
                }
              }
              else {
LAB_00625aff:
                local_18 = 1;
              }
/* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
LAB_00625b06:
              if (((((in_stack_00000010 != 0) && (this->field_02AD != CASE_1)) && (-1 < sVar19)) &&
                  (((sVar19 < g_worldGrid.sizeX && (-1 < sVar20)) &&
                   ((sVar20 < g_worldGrid.sizeY && ((-1 < sVar12 && (sVar12 < g_worldGrid.sizeZ)))))
                   ))) && (pSVar16 = (STMineSetC *)
                                     STGridAt3D(g_worldGrid, sVar19, sVar20, sVar12).objects[1]
                          , pSVar16 != nullptr)) {
                uVar10 = pSVar16->vfunc_2C();
                switch(uVar10) {
                case 0xa6:
                case 0xa7:
                case 0xaf:
                case 0xbd:
                  thunk_FUN_00627390(pSVar16);
                }
              }
            }
switchD_00625b9f_caseD_a8:
          }
          iVar15 = iVar15 + 1;
        } while( true );
      }
    }
    break;
  case 1:
    bVar17 = false;
    local_20 = 0;
    local_24 = &DAT_007d03ba;
    do {
      local_2c = 3;
      do {
        iVar14 = (int)local_24[-1] + (int)this->field_0047;
        iVar15 = (int)*local_24 + (int)this->field_0049;
        iVar11 = (int)local_24[1] + (int)this->field_004B;
        if (((((iVar14 < 0) || (iVar15 < 0)) || (iVar11 < 0)) ||
            ((g_worldGrid.sizeX <= iVar14 || (g_worldGrid.sizeY <= iVar15)))) || (4 < iVar11))
        goto cf_continue_loop_0062607F;
        sVar12 = (short)iVar14;
        sVar20 = (short)iVar15;
        sVar19 = (short)iVar11;
        if (((sVar12 < 0) || (g_worldGrid.sizeX <= sVar12)) ||
           ((sVar20 < 0 ||
            (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))))) {
          pSVar16 = nullptr;
/* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
LAB_00625d60:
          if (in_stack_00000010 != 0) {
            iVar6 = this->field_02C6;
            sVar4 = (short)(iVar6 >> 0x1f);
            if (iVar6 < 0) {
              iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar4) -
                             (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar4) -
                                  (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
            }
            iVar7 = this->field_02C2;
            sVar4 = (short)(iVar7 >> 0x1f);
            if (iVar7 < 0) {
              iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar4) -
                             (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar4) -
                                  (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
            }
            iVar13 = FUN_006acf90(iVar7,iVar6,iVar14,iVar15);
            if (iVar13 < 2) {
              iVar15 = this->field_02C2;
              sVar4 = (short)(iVar15 >> 0x1f);
              if (iVar15 < 0) {
                iVar15 = (short)(((short)(iVar15 / 0xc9) + sVar4) -
                                (short)((longlong)iVar15 * 0x28c1979 >> 0x3f)) + -1;
              }
              else {
                iVar15 = (int)(short)(((short)(iVar15 / 0xc9) + sVar4) -
                                     (short)((longlong)iVar15 * 0x28c1979 >> 0x3f));
              }
              uVar9 = iVar15 - iVar11 >> 0x1f;
              if ((int)((iVar15 - iVar11 ^ uVar9) - uVar9) < 2) {
                if (((sVar12 < 0) || (g_worldGrid.sizeX <= sVar12)) ||
                   ((sVar20 < 0 ||
                    (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)
                     ))))) goto cf_continue_loop_0062607F;
                pSVar16 = (STMineSetC *)
                          STGridAt3D(g_worldGrid, sVar12, sVar20, sVar19).objects[1];
              }
            }
            if (pSVar16 != nullptr) {
              uVar10 = pSVar16->vfunc_2C();
              switch(uVar10) {
              case 0xa6:
              case 0xa7:
              case 0xaf:
              case 0xbd:
                thunk_FUN_00627390(pSVar16);
              }
            }
          }
        }
        else {
          pSVar16 = (STMineSetC *)
                    STGridAt3D(g_worldGrid, sVar12, sVar20, sVar19).objects[0];
          if (pSVar16 == nullptr) goto LAB_00625d60;
          iVar6 = pSVar16->vfunc_F0();
          if (iVar6 != 0) {
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            if (in_stack_00000010 != 0) {
              thunk_FUN_00416270(pSVar16,(uint *)&local_a,(int *)&local_8,&local_6);
              iVar5 = FUN_006acf0d(this->field_02C2,this->field_02C6,this->field_02CA,(int)local_a,
                                   (int)local_8,(int)local_6);
              if (iVar5 < *(int *)(&DAT_007d0294 + (uint)this->field_02AD * 4)) {
                if (iVar5 < 0x15e) {
                  iVar6 = thunk_FUN_00627670(this);
                }
                else if (*(int *)(&DAT_007d0294 + (uint)this->field_02AD * 4) == 0) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = thunk_FUN_00627670(this);
                }
                thunk_FUN_00601d10(this->field_0262,iVar6,(int)pSVar16,(short)this->field_0018,
                                   0xffff,*(int *)(&DAT_007d04d0 + (uint)this->field_02AD * 4),0x110
                                  );
                if ((pSVar16->field_0020 == 1000) || (pSVar16->field_0020 == 0x14)) {
                  this->field_0241 = pSVar16->field_0018;
                }
                if (DAT_00811798 != nullptr) {
                  iVar6 = this->vfunc_2C();
                  uVar10 = pSVar16->vfunc_2C();
                  thunk_FUN_0061fe80(DAT_00811798,iVar14,iVar15,pSVar16->field_0024,uVar10,iVar6);
                }
              }
              goto LAB_00625d60;
            }
            if (((uint)pSVar16->field_0024 < 8) &&
               ((g_playSystem_00802A38 == nullptr ||
                (g_bulkInitializedRecords_008087C7[pSVar16->field_0024].field_0022 < 8)))) {
              bVar1 = *(byte *)&pSVar16->field_0024;
              bVar2 = (byte)this->field_0262;
              if (DAT_00808a8f == '\0') {
                if (bVar1 == bVar2) {
LAB_00625efc:
                  iVar11 = 0;
                }
                else {
                  bVar3 = g_playerRelationMatrix[bVar1][bVar2];
                  if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                    iVar11 = -2;
                  }
                  else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                    iVar11 = -1;
                  }
                  else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                    iVar11 = 1;
                  }
                  else {
                    if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1))
                    goto LAB_00625efc;
                    iVar11 = 2;
                  }
                }
                bVar18 = iVar11 < 0;
              }
              else {
                bVar18 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
                         g_bulkInitializedRecords_008087C7[bVar1].field_0023;
              }
              if (((bVar18) && (iVar11 = pSVar16->vfunc_F8(), iVar11 != 0)) &&
                 (iVar11 = thunk_FUN_006264d0(this,(int *)pSVar16,local_20), iVar11 != 0)) {
                if (DAT_00811798 != nullptr) {
                  iVar11 = this->vfunc_2C();
                  uVar10 = pSVar16->vfunc_2C();
                  thunk_FUN_0061fe80(DAT_00811798,iVar14,iVar15,pSVar16->field_0024,uVar10,iVar11);
                }
                bVar17 = true;
              }
            }
          }
        }
cf_continue_loop_0062607F:
        local_24 = local_24 + 3;
        local_2c = local_2c + -1;
      } while (local_2c != 0);
      local_20 = local_20 + 1;
    } while ((int)local_24 < 0x7d046e);
    if (bVar17) {
      local_18 = 1;
      this->field_0346 = g_playSystem_00802A38->field_00E4;
    }
  }
  return local_18;
}

