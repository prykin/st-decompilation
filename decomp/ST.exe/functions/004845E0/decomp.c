#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004845E0_param_1Enum. Cases:
   CASE_0=0;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_D=13;CASE_E=14;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_18=24;CASE_2B=43;CASE_2C=44;CASE_2D=45;CASE_48=72;CASE_4D=77

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STGameObjC_sub_004845E0_param_1Enum. Cases:
   CASE_0=0;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_D=13;CASE_E=14;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_18=24;CASE_2B=43;CASE_2C=44;CASE_2D=45;CASE_48=72;CASE_4D=77

   [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 007905A0
   Entries: 004057D1
   Slots: 0x28
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=4/2106; unique_owner_for_target

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_vfunc_28_param_1Enum. Cases:
   CASE_0=0;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_D=13;CASE_E=14;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_18=24;CASE_2B=43;CASE_2C=44;CASE_2D=45;CASE_48=72;CASE_4D=77
    */

ushort __thiscall
STBoatC::vfunc_28(STBoatC *this,STBoatC_vfunc_28_param_1Enum param_1,
                 RecoveredRecord_004845E0_7E8F2946 *param_2)

{
  byte bVar1;
  byte bVar2;
  STBoatC_field_06F7State SVar3;
  RecoveredRecord_004845E0_7E8F2946 *this_00;
  int iVar5;
  int local_EAX_1102;
  dword dVar6;
  int local_EAX_2778;
  int iVar4;
  int local_EAX_2933;
  int iVar7;
  int local_EAX_4151;
  int local_EAX_4220;
  int local_EAX_4242;
  int local_EAX_4800;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  bool bVar11;
  byte local_10 [4];
  int local_c;
  uint local_8;
  this_00 = param_2;
  if ((param_2 != nullptr) &&
     (*(int *)&param_2->field_0x20 == 1000)) {
    if (*(int *)&param_2[2].field_0x22 != 0) {
      return 0;
    }
    if (param_2->field_0245 == 6) {
      return 0;
    }
  }
  switch(param_1) {
  case CASE_0:

    iVar7 = thunk_FUN_00493cd0((STGameObjC *)this);
    if (iVar7 != 0) {
      if (this_00 == nullptr) {
        return 0;
      }
      if ((STBoatC *)this_00 == this) {
        return 3;
      }
      if (this->field_0024 != *(int *)&this_00->field_0x24) {
        return 0;
      }
      /* ST_CALLSITE[0048556C]: CALL dword ptr [EDX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STBoatC */
      iVar7 = ((STBoatC *)this_00)->vfunc_EC();
      if (iVar7 != 0) {
        iVar7 = *(int *)&this_00->field_0x20;
        if (iVar7 == 1000) {
          return 4;
        }
        if (iVar7 == 0x3e9) {
          return 4;
        }
        if (iVar7 != 0x14) {
          return 0;
        }
        return 3;
      }
      return 0;
    }
    if ((STBoatC *)this_00 == this) {
      return 3;
    }
    if (this_00 == nullptr) {
      return 5;
    }
    iVar7 = *(int *)&this_00->field_0x20;
    if ((((iVar7 != 0x14) && (iVar7 != 1000)) && (iVar7 != 0x3e9)) && (iVar7 != 0x1ae)) {
      return 5;
    }
    SVar3 = this->field_06F7;
    if ((((SVar3 != CASE_9) && (SVar3 != CASE_15)) &&
        ((this->field_0716 < this->field_0712 &&

         ((local_EAX_4151 = thunk_FUN_004e8030(SVar3), local_EAX_4151 != 3 &&
          /* ST_CALLSITE[00485625]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
          (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 == 0x33))))))
       && (this->field_0024 == *(int *)&this_00->field_0x24)) {
      return 0x18;
    }
    /* ST_CALLSITE[00485648]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
    if ((((iVar7 == 0x62) && (this->field_0024 == *(int *)&this_00->field_0x24)) &&
        /* ST_CALLSITE[0048565C]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
        (local_EAX_4220 = TLOBaseTy::sub_004D6DF0((TLOBaseTy *)this), 0 < local_EAX_4220)) &&

       (local_EAX_4242 = thunk_FUN_004e8030(this->field_06F7), local_EAX_4242 == 3)) {
      return 0x1b;
    }
    /* ST_CALLSITE[0048568D]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
    if (((iVar7 == 0x37) ||
        /* ST_CALLSITE[00485699]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 == 0x6c)) &&

       (iVar7 = thunk_FUN_004e8b10(this_00,this->field_0024), iVar7 == 1)) {
      return 0x1d;
    }
    /* ST_CALLSITE[004856C9]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
    if (((iVar7 == 0x16) ||
        /* ST_CALLSITE[004856D5]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 == 0x25)) &&
       (*(int *)&this_00[3].field_0x57 == 1)) {
      bVar10 = this_00->field_0x24;
      bVar1 = (byte)this->field_0024;
      /* ST_PSEUDO[stack_slot_reuse,packed_or_unaligned_piece]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable; expected named packed member, bit extract/compose, or unaligned load */
      param_2 = (RecoveredRecord_004845E0_7E8F2946 *)CONCAT13(bVar1,STPiece<0,3>(param_2));
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar1));
      if (DAT_00808a8f == '\0') {
        if (bVar10 == bVar1) {
LAB_004857a5:
          iVar7 = 0;
        }
        else {
          bVar2 = g_playerRelationMatrix[bVar10][bVar1];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
            iVar7 = -2;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
            iVar7 = -1;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 1)) {
            iVar7 = 1;
          }
          else {
            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar10] != 1)) goto LAB_004857a5;
            iVar7 = 2;
          }
        }
        bVar11 = iVar7 < 0;
      }
      else {
        bVar11 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                 g_bulkInitializedRecords_008087C7[bVar10].field_0023;
      }
      if (bVar11) goto LAB_0048589a;
      param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar1));
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar10));
      if (DAT_00808a8f == '\0') {
        if (bVar1 == bVar10) {
LAB_0048586d:
          iVar7 = 0;
        }
        else {
          bVar2 = g_playerRelationMatrix[bVar1][bVar10];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar10][bVar1] == 0)) {
            iVar7 = -2;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar10][bVar1] == 0)) {
            iVar7 = -1;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar10][bVar1] == 1)) {
            iVar7 = 1;
          }
          else {
            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar10][bVar1] != 1)) goto LAB_0048586d;
            iVar7 = 2;
          }
        }
        bVar11 = iVar7 < 0;
      }
      else {
        bVar11 = g_bulkInitializedRecords_008087C7[bVar10].field_0023 !=
                 g_bulkInitializedRecords_008087C7[bVar1].field_0023;
      }
      if (!bVar11) {
        /* ST_CALLSITE[00485881]: CALL dword ptr [EAX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STBoatC */
        iVar7 = ((STBoatC *)this_00)->vfunc_EC();
        return (-(ushort)(iVar7 != 1) & 0xfffd) + 3;
      }
LAB_0048589a:
      param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar10));

      local_EAX_4800 = thunk_FUN_0041d350(this_00,this->field_0024);
      return (-(ushort)(local_EAX_4800 != 1) & 0xfff9) + 7;
    }
    SVar3 = this->field_06F7;
    if (((SVar3 == CASE_8) || (SVar3 == CASE_14)) || (SVar3 == CASE_1A)) {
      /* ST_CALLSITE[004860BA]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
      iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
      if (((iVar7 != 0x38) &&
          /* ST_CALLSITE[004860CA]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
          (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 != 0x39)) &&
         /* ST_CALLSITE[004860DA]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
         ((iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 != 0x4f &&
          /* ST_CALLSITE[004860EA]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
          (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 != 0x5e)))) {
        /* ST_CALLSITE[004860FA]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
        if (((iVar7 == 0x3b) ||
            /* ST_CALLSITE[00486106]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
            (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 == 0x60))
           && ((this->field_0024 == *(int *)&this_00->field_0x24 &&
               (0 < this->field_07DA + this->field_07D6 + this->field_07D2)))) {
          return 0x13;
        }
        bVar10 = this_00->field_0x24;
        bVar1 = (byte)this->field_0024;
        param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar10));
        param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
        if (DAT_00808a8f != '\0') {
          iVar7 = (uint)bVar1 * 9;
          goto LAB_00486163;
        }
        if (bVar10 == bVar1) {
LAB_00485d4a:
          iVar7 = 0;
        }
        else {
          uVar8 = (uint)bVar10;
          uVar9 = (uint)bVar1;
          bVar10 = g_playerRelationMatrix[uVar8][uVar9];
          if ((bVar10 == 0) && (g_playerRelationMatrix[uVar9][uVar8] == 0)) {
            iVar7 = -2;
          }
          else if ((bVar10 == 1) && (g_playerRelationMatrix[uVar9][uVar8] == 0)) {
            iVar7 = -1;
          }
          else if ((bVar10 == 0) && (g_playerRelationMatrix[uVar9][uVar8] == 1)) {
            iVar7 = 1;
          }
          else {
LAB_004861ee:
            if ((bVar10 != 1) || (g_playerRelationMatrix[uVar9][uVar8] != 1)) goto LAB_00485d4a;
            iVar7 = 2;
          }
        }
LAB_00485d4c:
        bVar11 = iVar7 < 0;
LAB_00485d55:
        if (bVar11) {
          return 0;
        }
        if (*(int *)&this_00->field_0x20 == 0x14) {
LAB_00485d68:
          /* ST_CALLSITE[00485D6C]: CALL dword ptr [EDX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STBoatC */
          iVar7 = ((STBoatC *)this_00)->vfunc_EC();
          if (iVar7 == 1) {
            return 3;
          }
        }
        goto LAB_00485caa;
      }
      if (this->field_0024 != *(int *)&this_00->field_0x24) {
        return 0;
      }
      /* ST_CALLSITE[00486221]: CALL dword ptr [EDX + 0x88]; [STIndirectCallsiteApplier] exact slot 0x88; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
      iVar7 = STStructuralVirtualCall<undefined4>(this_00, 0x88, local_10);
      if (0 < iVar7) {
        return 0x12;
      }
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
LAB_00485f6a:
      /* ST_CALLSITE[00485F6E]: CALL dword ptr [EDX + 0xec] */
      iVar7 = (**(code **)(*(int *)this_00 + 0xec))();
    }
    else {
      if (((SVar3 == CASE_7) || (SVar3 == CASE_13)) || (SVar3 == CASE_1B)) {
        if (this->field_07CA != nullptr) {
          /* ST_CALLSITE[00485E18]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
          iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
          if ((iVar7 == 0x52) || (iVar7 == 0x5f)) {

            STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,this->field_07CA,&local_c);
            if ((local_c != 0) && (STField<int>(local_c,0x20) == 0x1a4)) {
              return 0x1e;
            }
          }
          else if (iVar7 == 99) {
            return 0x1e;
          }
          bVar10 = this_00->field_0x24;
          bVar1 = (byte)this->field_0024;
          param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar10));
          param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
          if (DAT_00808a8f == '\0') {
            if (bVar10 == bVar1) {
LAB_00485f1f:
              iVar7 = 0;
            }
            else {
              bVar2 = g_playerRelationMatrix[bVar10][bVar1];
              if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
                iVar7 = -2;
              }
              else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
                iVar7 = -1;
              }
              else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 1)) {
                iVar7 = 1;
              }
              else {
                if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar10] != 1)) goto LAB_00485f1f;
                iVar7 = 2;
              }
            }
            bVar11 = iVar7 < 0;
          }
          else {
            bVar11 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                     g_bulkInitializedRecords_008087C7[bVar10].field_0023;
          }
          if (bVar11) {
            return 0;
          }
          if ((*(int *)&this_00->field_0x20 == 0x14) &&
             /* ST_CALLSITE[00485F3D]: CALL dword ptr [EAX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STBoatC */
             (iVar7 = ((STBoatC *)this_00)->vfunc_EC(), iVar7 == 1)) {
            return 3;
          }
          if ((*(int *)&this_00->field_0x20 != 1000) && (*(int *)&this_00->field_0x20 != 0x3e9)) {
            return 0;
          }
          goto LAB_00485f6a;
        }
        bVar10 = this_00->field_0x24;
        bVar1 = (byte)this->field_0024;
        param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar10));
        param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
        if (DAT_00808a8f == '\0') {
          if (bVar10 == bVar1) {
LAB_0048602b:
            iVar7 = 0;
          }
          else {
            bVar2 = g_playerRelationMatrix[bVar10][bVar1];
            if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
              iVar7 = -2;
            }
            else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
              iVar7 = -1;
            }
            else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 1)) {
              iVar7 = 1;
            }
            else {
              if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar10] != 1)) goto LAB_0048602b;
              iVar7 = 2;
            }
          }
          bVar11 = iVar7 < 0;
        }
        else {
          bVar11 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                   g_bulkInitializedRecords_008087C7[bVar10].field_0023;
        }
        if (bVar11) {
          return 0;
        }
        if (*(int *)&this_00->field_0x20 == 0x14) {
          if (SVar3 != CASE_1B) {
            /* ST_CALLSITE[0048608A]: CALL dword ptr [EDX + 0xbc] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            iVar7 = (**(code **)(*(int *)this_00 + 0xbc))();
            if ((iVar7 == 1) &&
               /* ST_CALLSITE[0048609D]: CALL dword ptr [EAX + 0x7c]; [STIndirectCallsiteApplier] exact slot 0x7C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
               (iVar7 = ((STGameObjC *)this_00)->vfunc_7C(), iVar7 < 100))
            {
              return 0x17;
            }
            goto LAB_00485d68;
          }
          /* ST_CALLSITE[00486052]: CALL dword ptr [EDX + 0xbc] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar7 = (**(code **)(*(int *)this_00 + 0xbc))();
          if (iVar7 == 1) {
            return 0x1a;
          }
          /* ST_CALLSITE[0048606E]: CALL dword ptr [EAX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STBoatC */
          iVar7 = ((STBoatC *)this_00)->vfunc_EC();
          if (iVar7 == 1) {
            return 3;
          }
        }
LAB_00485caa:
        iVar7 = *(int *)&this_00->field_0x20;
      }
      else {
        if (((SVar3 == CASE_C) || (SVar3 == CASE_18)) || (SVar3 == CASE_19)) {
          bVar10 = this_00->field_0x24;
          bVar1 = (byte)this->field_0024;
          param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar10));
          param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
          if (DAT_00808a8f == '\0') {
            if (bVar10 == bVar1) goto LAB_00485d4a;
            uVar8 = (uint)bVar10;
            uVar9 = (uint)bVar1;
            bVar10 = g_playerRelationMatrix[uVar8][uVar9];
            if ((bVar10 == 0) && (g_playerRelationMatrix[uVar9][uVar8] == 0)) {
              iVar7 = -2;
            }
            else if ((bVar10 == 1) && (g_playerRelationMatrix[uVar9][uVar8] == 0)) {
              iVar7 = -1;
            }
            else {
LAB_00485d2d:
              if ((bVar10 != 0) || (g_playerRelationMatrix[uVar9][uVar8] != 1)) goto LAB_004861ee;
              iVar7 = 1;
            }
            goto LAB_00485d4c;
          }
          iVar7 = (uint)bVar1 * 9;
LAB_00486163:
          bVar11 = (&g_bulkInitializedRecords_008087C7[0].field_0023)[iVar7 * 9] !=
                   g_bulkInitializedRecords_008087C7[(uint)param_2 & 0xff].field_0023;
          goto LAB_00485d55;
        }
        if (SVar3 == CASE_9) {
          bVar10 = this_00->field_0x24;
          bVar1 = (byte)this->field_0024;
          param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar10));
          param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
          if (DAT_00808a8f != '\0') {
            bVar11 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                     g_bulkInitializedRecords_008087C7[bVar10].field_0023;
            goto LAB_004859d8;
          }
          if (bVar10 == bVar1) {
LAB_004859cd:
            iVar7 = 0;
          }
          else {
            bVar2 = g_playerRelationMatrix[bVar10][bVar1];
            if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
              iVar7 = -2;
            }
            else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
              iVar7 = -1;
            }
            else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 1)) {
              iVar7 = 1;
            }
            else {
              if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar10] != 1)) goto LAB_004859cd;
              iVar7 = 2;
            }
          }
          bVar11 = iVar7 < 0;
LAB_004859d8:
          if (!bVar11) {
            iVar7 = *(int *)&this_00->field_0x20;
            if (iVar7 == 0x14) {
              /* ST_CALLSITE[004859E9]: CALL dword ptr [EAX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STBoatC */
              iVar7 = ((STBoatC *)this_00)->vfunc_EC();
              return (-(ushort)(iVar7 != 1) & 0xfffd) + 3;
            }
            if ((iVar7 == 1000) || (iVar7 == 0x3e9)) {
              /* ST_CALLSITE[00485A14]: CALL dword ptr [EDX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STBoatC */
              iVar7 = ((STBoatC *)this_00)->vfunc_EC();
              return (-(ushort)(iVar7 != 1) & 0xfffc) + 4;
            }
          }
          if ((*(int *)&this_00->field_0x20 != 1000) && (*(int *)&this_00->field_0x20 != 0x3e9)) {
            return 0;
          }
          /* ST_CALLSITE[00485A46]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
          iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
          if ((iVar7 != 0x3b) &&
             /* ST_CALLSITE[00485A52]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
             (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 != 0x60))
          {
            return 0;
          }
          return 7;
        }
        if (SVar3 != CASE_1D) {
          if ((SVar3 != CASE_24) && (SVar3 != CASE_25)) {
            bVar10 = this_00->field_0x24;
            bVar1 = (byte)this->field_0024;
            param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar10));
            param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
            if (DAT_00808a8f == '\0') {
              if (bVar10 == bVar1) {
LAB_00485c58:
                iVar7 = 0;
              }
              else {
                bVar2 = g_playerRelationMatrix[bVar10][bVar1];
                if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
                  iVar7 = -2;
                }
                else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
                  iVar7 = -1;
                }
                else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 1)) {
                  iVar7 = 1;
                }
                else {
                  if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar10] != 1))
                  goto LAB_00485c58;
                  iVar7 = 2;
                }
              }
              bVar11 = iVar7 < 0;
            }
            else {
              bVar11 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                       g_bulkInitializedRecords_008087C7[bVar10].field_0023;
            }
            if (bVar11) {
              if (SVar3 == CASE_15) {
                return 7;
              }
              if (0 < this->field_07A2) {
                return 7;
              }
              return 0;
            }
            if ((*(int *)&this_00->field_0x20 == 0x14) &&
               /* ST_CALLSITE[00485C92]: CALL dword ptr [EDX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STBoatC */
               (iVar7 = ((STBoatC *)this_00)->vfunc_EC(), iVar7 == 1)) {
              return 3;
            }
            goto LAB_00485caa;
          }
          bVar10 = this_00->field_0x24;
          bVar1 = (byte)this->field_0024;
          param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar10));
          param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
          if (DAT_00808a8f == '\0') {
            if (bVar10 == bVar1) goto LAB_00485d4a;
            uVar8 = (uint)bVar10;
            uVar9 = (uint)bVar1;
            bVar10 = g_playerRelationMatrix[uVar8][uVar9];
            if ((bVar10 == 0) && (g_playerRelationMatrix[uVar9][uVar8] == 0)) {
              iVar7 = -2;
            }
            else {
              if ((bVar10 != 1) || (g_playerRelationMatrix[uVar9][uVar8] != 0)) goto LAB_00485d2d;
              iVar7 = -1;
            }
            goto LAB_00485d4c;
          }
          iVar7 = (uint)bVar1 * 9;
          goto LAB_00486163;
        }
        bVar10 = this_00->field_0x24;
        bVar1 = (byte)this->field_0024;
        param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar10));
        param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
        if (DAT_00808a8f == '\0') {
          if (bVar10 == bVar1) {
LAB_00485b29:
            iVar7 = 0;
          }
          else {
            bVar2 = g_playerRelationMatrix[bVar10][bVar1];
            if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
              iVar7 = -2;
            }
            else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
              iVar7 = -1;
            }
            else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 1)) {
              iVar7 = 1;
            }
            else {
              if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar10] != 1)) goto LAB_00485b29;
              iVar7 = 2;
            }
          }
          bVar11 = iVar7 < 0;
        }
        else {
          bVar11 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                   g_bulkInitializedRecords_008087C7[bVar10].field_0023;
        }
        if (bVar11) {
          return 0;
        }
        if ((*(int *)&this_00->field_0x20 == 0x14) &&
           /* ST_CALLSITE[00485B47]: CALL dword ptr [EDX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STBoatC */
           (iVar7 = ((STBoatC *)this_00)->vfunc_EC(), iVar7 == 1)) {
          return 3;
        }
        iVar7 = *(int *)&this_00->field_0x20;
      }
      if ((iVar7 != 1000) && (iVar7 != 0x3e9)) {
        return 0;
      }
      /* ST_CALLSITE[00485B78]: CALL dword ptr [EAX + 0xec]; [STIndirectCallsiteApplier] exact slot 0xEC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STBoatC */
      iVar7 = ((STBoatC *)this_00)->vfunc_EC();
    }
    if (iVar7 == 1) {
      return 4;
    }
    break;
  case CASE_2:

    iVar7 = thunk_FUN_00493cd0((STGameObjC *)this);
    return (-(ushort)(iVar7 != 0) & 0xfffa) + 6;
  case CASE_3:
  case CASE_2B:

    iVar7 = thunk_FUN_00493cd0((STGameObjC *)this);
    if (iVar7 != 0) {
      return 0;
    }
    if (this_00 == nullptr) {
      return 1;
    }
    iVar7 = *(int *)&this_00->field_0x20;
    if (((iVar7 != 0x14) && (iVar7 != 1000)) && ((iVar7 != 0x3e9 && (iVar7 != 0x1ae)))) {
      return 1;
    }
    if ((STBoatC *)this_00 == this) {
      return 0;
    }
    SVar3 = this->field_06F7;
    if (SVar3 == CASE_7) {
      return 1;
    }
    if (SVar3 == CASE_13) {
      return 1;
    }
    if (SVar3 == CASE_8) {
      return 1;
    }
    if (SVar3 == CASE_14) {
      return 1;
    }
    if (SVar3 == CASE_C) {
      return 1;
    }
    if (SVar3 == CASE_18) {
      return 1;
    }
    if (SVar3 == CASE_19) {
      return 1;
    }
    if (SVar3 == CASE_1A) {
      return 1;
    }
    if (SVar3 == CASE_1B) {
      return 1;
    }
    if (SVar3 == CASE_25) {
      return 1;
    }
    if (SVar3 != CASE_9) {
      if ((SVar3 != CASE_15) && (this->field_07A2 < 1)) {
        return 1;
      }
      /* ST_CALLSITE[00484867]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
      iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
      if (((iVar7 != 0x16) &&
          /* ST_CALLSITE[00484873]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
          (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 != 0x25)) ||
         (*(int *)&this_00[3].field_0x57 != 1)) {
        param_2 = (RecoveredRecord_004845E0_7E8F2946 *)(uint)(byte)this_00->field_0x24;
        param_1 = (STBoatC_vfunc_28_param_1Enum)(byte)this->field_0024;
        if (DAT_00808a8f != '\0') {
          bVar11 = g_bulkInitializedRecords_008087C7[param_1].field_0023 !=
                   g_bulkInitializedRecords_008087C7[(int)param_2].field_0023;
          return (((ushort)bVar11 - (ushort)bVar11) - (ushort)bVar11 & 5) + 2;
        }
        if (this_00->field_0x24 != (byte)this->field_0024) {
          bVar10 = g_playerRelationMatrix[(int)param_2][param_1];
          if ((bVar10 == 0) && ((&param_2[0x3840].field_0xf)[param_1 * 8] == '\0')) {
            iVar7 = -2;
            goto cf_common_exit_00484B10;
          }
          if ((bVar10 == 1) && ((&param_2[0x3840].field_0xf)[param_1 * 8] == '\0')) {
            iVar7 = -1;
            goto cf_common_exit_00484B10;
          }
          if ((bVar10 == 0) && ((&param_2[0x3840].field_0xf)[param_1 * 8] == '\x01')) {
            iVar7 = 1;
            goto cf_common_exit_00484B10;
          }
          if ((bVar10 == 1) && ((&param_2[0x3840].field_0xf)[param_1 * 8] == '\x01')) {
            iVar7 = 2;
            goto cf_common_exit_00484B10;
          }
        }
        iVar7 = 0;
cf_common_exit_00484B10:
        bVar11 = iVar7 < 0;
        return (((ushort)bVar11 - (ushort)bVar11) - (ushort)bVar11 & 5) + 2;
      }
      bVar10 = this_00->field_0x24;
      bVar1 = (byte)this->field_0024;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_2 = (RecoveredRecord_004845E0_7E8F2946 *)CONCAT13(bVar1,STPiece<0,3>(param_2));
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar1));
      if (DAT_00808a8f == '\0') {
        if (bVar10 == bVar1) {
LAB_00484943:
          iVar7 = 0;
        }
        else {
          bVar2 = g_playerRelationMatrix[bVar10][bVar1];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
            iVar7 = -2;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
            iVar7 = -1;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 1)) {
            iVar7 = 1;
          }
          else {
            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar10] != 1)) goto LAB_00484943;
            iVar7 = 2;
          }
        }
        bVar11 = iVar7 < 0;
      }
      else {
        bVar11 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                 g_bulkInitializedRecords_008087C7[bVar10].field_0023;
      }
      if (bVar11) goto LAB_00484a28;
      param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar1));
      if (DAT_00808a8f == '\0') {
        if (bVar1 == bVar10) {
LAB_00484a0b:
          iVar7 = 0;
        }
        else {
          bVar2 = g_playerRelationMatrix[bVar1][bVar10];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar10][bVar1] == 0)) {
            iVar7 = -2;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar10][bVar1] == 0)) {
            iVar7 = -1;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar10][bVar1] == 1)) {
            iVar7 = 1;
          }
          else {
            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar10][bVar1] != 1)) goto LAB_00484a0b;
            iVar7 = 2;
          }
        }
        bVar11 = iVar7 < 0;
      }
      else {
        bVar11 = g_bulkInitializedRecords_008087C7[bVar10].field_0023 !=
                 g_bulkInitializedRecords_008087C7[bVar1].field_0023;
      }
      if (!bVar11) {
        return 2;
      }
LAB_00484a28:
      param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar10));

      local_EAX_1102 = thunk_FUN_0041d350(this_00,this->field_0024);
      return (-(ushort)(local_EAX_1102 != 1) & 0xfffa) + 7;
    }
    bVar10 = this_00->field_0x24;
    bVar1 = (byte)this->field_0024;
    param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar10));
    param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
    if (DAT_00808a8f != '\0') {
      bVar11 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
               g_bulkInitializedRecords_008087C7[bVar10].field_0023;
      goto LAB_004847df;
    }
    if (bVar10 == bVar1) {
LAB_004847d4:
      iVar5 = 0;
    }
    else {
      bVar2 = g_playerRelationMatrix[bVar10][bVar1];
      if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
        iVar5 = -2;
      }
      else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
        iVar5 = -1;
      }
      else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 1)) {
        iVar5 = 1;
      }
      else {
        if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar10] != 1)) goto LAB_004847d4;
        iVar5 = 2;
      }
    }
    bVar11 = iVar5 < 0;
LAB_004847df:
    if (!bVar11) {
      if (iVar7 == 0x14) {
        return 3;
      }
      if (iVar7 == 1000) {
        return 4;
      }
      if (iVar7 == 0x3e9) {
        return 4;
      }
    }
    if (iVar7 != 1000) {
      return 1;
    }
    /* ST_CALLSITE[0048481E]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
    if ((iVar7 != 0x3b) &&
       /* ST_CALLSITE[0048482E]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
       (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 != 0x60)) {
      return 1;
    }
    return 7;
  case CASE_4:

    iVar7 = thunk_FUN_00493cd0((STGameObjC *)this);
    if (iVar7 == 0) {
      if (this_00 == nullptr) {
        return 1;
      }
      if ((STBoatC *)this_00 != this) {
        if (this->field_06F7 == CASE_9) {
          return 1;
        }
        if (this->field_06F7 == CASE_15) {
          return 1;
        }
        if (this->field_0712 <= this->field_0716) {
          return 1;
        }
        /* ST_CALLSITE[00484D19]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
        if (iVar7 != 0x33) {
          return 1;
        }
        if (this->field_0024 != *(int *)&this_00->field_0x24) {
          return 1;
        }
        return 0x18;
      }
    }
    break;
  case CASE_5:

    iVar7 = thunk_FUN_00493cd0((STGameObjC *)this);
    if (iVar7 == 0) {
      if (this_00 == nullptr) {
        return 1;
      }
      if ((STBoatC *)this_00 != this) {
        iVar7 = *(int *)&this_00->field_0x20;
        if (((iVar7 != 0x14) && (iVar7 != 1000)) && (iVar7 != 0x3e9)) {
          return 1;
        }
        if (this->field_0024 != *(int *)&this_00->field_0x24) {
          return 1;
        }

        iVar7 = thunk_FUN_00490d90((STGameObjC *)this);
        if (iVar7 != 1) {
          return 1;
        }
        return 0xd;
      }
    }
    break;
  case CASE_6:

    iVar7 = thunk_FUN_00493cd0((STGameObjC *)this);
    return (-(ushort)(iVar7 != 0) & 0xfff1) + 0xf;
  case CASE_7:

    iVar7 = thunk_FUN_00493cd0((STGameObjC *)this);
    if (iVar7 == 0) {
      if (this_00 == nullptr) {
        return 1;
      }
      if ((STBoatC *)this_00 != this) {
        SVar3 = this->field_06F7;
        if (((SVar3 != CASE_6) && (SVar3 != CASE_12)) && (SVar3 != CASE_22)) {
          return 1;
        }
        /* ST_CALLSITE[004850A5]: CALL dword ptr [EAX + 0x108]; [STIndirectCallsiteApplier] exact slot 0x108; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
        iVar7 = STStructuralVirtualCall<undefined4>(this_00, 0x108, this->field_0024);
        if (iVar7 != 1) {
          return 1;
        }

        local_EAX_2778 = thunk_FUN_004cca00(this_00,this->field_0024);
        if (local_EAX_2778 != 1) {
          if (local_EAX_2778 == 2) {
            return 10;
          }
          if (local_EAX_2778 != 3) {
            return 1;
          }
          return 0xb;
        }
        return 9;
      }
    }
    break;
  case CASE_8:

    iVar7 = thunk_FUN_00493cd0((STGameObjC *)this);
    return (-(ushort)(iVar7 != 0) & 0xffef) + 0x11;
  case CASE_9:

    iVar7 = thunk_FUN_00493cd0((STGameObjC *)this);
    return (-(ushort)(iVar7 != 0) & 0xfff8) + 8;
  case CASE_A:

    iVar7 = thunk_FUN_00493cd0((STGameObjC *)this);
    if (iVar7 != 0) {
      return 0;
    }
    if (this_00 == nullptr) {
      return 1;
    }
    if (this->field_06F7 != CASE_17) {
      return 1;
    }
    if (*(int *)&this_00->field_0x20 != 0x14) {
      return 1;
    }
    if ((STBoatC *)this_00 == this) {
      return 0;
    }
    if (this->field_072A < 1) {
      return 1;
    }
    /* ST_CALLSITE[004852EB]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
    if ((iVar7 != 0x16) &&
       /* ST_CALLSITE[004852F7]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
       (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 != 0x25)) {
      return 0xc;
    }
    if (*(int *)&this_00[3].field_0x57 != 1) {
      return 0xc;
    }
    bVar10 = this_00->field_0x24;
    bVar1 = (byte)this->field_0024;
    param_1 = (STBoatC_vfunc_28_param_1Enum)bVar10;
    local_8 = (uint)bVar1;
    if (DAT_00808a8f != '\0') {
      bVar11 = g_bulkInitializedRecords_008087C7[local_8].field_0023 !=
               g_bulkInitializedRecords_008087C7[param_1].field_0023;
      goto LAB_004853d2;
    }
    if (bVar10 == bVar1) {
LAB_004853c7:
      iVar7 = 0;
    }
    else {
      bVar2 = g_playerRelationMatrix[param_1][local_8];
      if ((bVar2 == 0) && (g_playerRelationMatrix[local_8][param_1] == 0)) {
        iVar7 = -2;
      }
      else if ((bVar2 == 1) && (g_playerRelationMatrix[local_8][param_1] == 0)) {
        iVar7 = -1;
      }
      else if ((bVar2 == 0) && (g_playerRelationMatrix[local_8][param_1] == 1)) {
        iVar7 = 1;
      }
      else {
        if ((bVar2 != 1) || (g_playerRelationMatrix[local_8][param_1] != 1)) goto LAB_004853c7;
        iVar7 = 2;
      }
    }
    bVar11 = iVar7 < 0;
LAB_004853d2:
    if (!bVar11) {
      param_1 = (STBoatC_vfunc_28_param_1Enum)bVar10;
      if (DAT_00808a8f != '\0') {
        return 0xc;
      }
      if (bVar1 != bVar10) {
        bVar10 = g_playerRelationMatrix[bVar1][param_1];
        if ((bVar10 == 0) && (g_playerRelationMatrix[param_1][bVar1] == 0)) {
          return 0xc;
        }
        if ((bVar10 == 1) && (g_playerRelationMatrix[param_1][bVar1] == 0)) {
          return 0xc;
        }
        if ((bVar10 == 0) && (g_playerRelationMatrix[param_1][bVar1] == 1)) {
          return 0xc;
        }
        if ((bVar10 == 1) && (g_playerRelationMatrix[param_1][bVar1] == 1)) {
          return 0xc;
        }
      }
    }
    return 0xc;
  case CASE_D:

    iVar7 = thunk_FUN_00493cd0((STGameObjC *)this);
    if (iVar7 != 0) {
      return 0;
    }
    if (this->field_07CA != nullptr) {
      return 0;
    }
    if (this_00 == nullptr) {
      return 1;
    }
    if ((STBoatC *)this_00 == this) {
      return 0;
    }
    if (*(int *)&this_00->field_0x20 != 0x14) {
      return 1;
    }
    /* ST_CALLSITE[00484F36]: CALL dword ptr [EAX + 0x7c]; [STIndirectCallsiteApplier] exact slot 0x7C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar7 = ((STGameObjC *)this_00)->vfunc_7C();
    if (99 < iVar7) {
      return 1;
    }
    bVar10 = this_00->field_0x24;
    bVar1 = (byte)this->field_0024;
    param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar10));
    param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
    if (DAT_00808a8f != '\0') {
      bVar11 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
               g_bulkInitializedRecords_008087C7[bVar10].field_0023;
      goto LAB_00485002;
    }
    if (bVar10 == bVar1) {
LAB_00484ff7:
      iVar7 = 0;
    }
    else {
      bVar2 = g_playerRelationMatrix[bVar10][bVar1];
      if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
        iVar7 = -2;
      }
      else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
        iVar7 = -1;
      }
      else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 1)) {
        iVar7 = 1;
      }
      else {
        if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar10] != 1)) goto LAB_00484ff7;
        iVar7 = 2;
      }
    }
    bVar11 = iVar7 < 0;
LAB_00485002:
    if (bVar11) {
      return 1;
    }
    /* ST_CALLSITE[0048500E]: CALL dword ptr [EDX + 0xbc]; [STIndirectCallsiteApplier] exact slot 0xBC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar7 = ((STGameObjC *)this_00)->vfunc_BC();
    if (iVar7 != 1) {
      return 1;
    }
    return 0x17;
  case CASE_E:

    iVar7 = thunk_FUN_00493cd0((STGameObjC *)this);
    if (iVar7 == 0) {
      if ((g_tLOBldMark_007FB2AC != nullptr) && (g_tLOBldMark_007FB2AC->field_0024 != 0))
      {
        return 0x14;
      }
      return 0x15;
    }
    break;
  case CASE_10:

    iVar7 = thunk_FUN_00493cd0((STGameObjC *)this);
    if (iVar7 != 0) {
      return 0;
    }
    if ((STBoatC *)this_00 == this) {
      return 0;
    }
    if (this_00 == nullptr) {
      return 1;
    }
    if (*(int *)&this_00->field_0x20 != 1000) {
      return 1;
    }
    if (*(int *)&this_00->field_0x24 != this->field_0024) {
      return 1;
    }

    iVar7 = thunk_FUN_004b9d90((RecoveredRecordView_004B9D90_09AED060 *)this_00);
    if (iVar7 == 0) {
      return 1;
    }
    /* ST_CALLSITE[00485252]: CALL 0x00405f0b; direct=00405F0B STFishC::sub_004162F0 */
    STFishC::sub_004162F0
              ((STFishC *)this_00,(short *)((int)&local_8 + 2),(short *)((int)&param_1 + 2),
               (short *)((int)&param_2 + 2));
    return (((int)STPiece<2,2>(param_2) <= g_worldGrid.sizeZ + -2) - 1 & 0xffeb) + 0x16;
  case CASE_11:

    iVar7 = thunk_FUN_00493cd0((STGameObjC *)this);
    if (iVar7 == 0) {
      if (this_00 == nullptr) {
        return 1;
      }
      if ((STBoatC *)this_00 != this) {
        SVar3 = this->field_06F7;
        if (((SVar3 != CASE_8) && (SVar3 != CASE_14)) && (SVar3 != CASE_1A)) {
          return 1;
        }
        /* ST_CALLSITE[00484B7A]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
        if ((((iVar7 != 0x38) &&
             /* ST_CALLSITE[00484B86]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
             (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 != 0x39))
            /* ST_CALLSITE[00484B92]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
            && (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 != 0x4f)
            /* ST_CALLSITE[00484B9E]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
            ) && (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(),
                 iVar7 != 0x5e)) {
          return 1;
        }
        if (this->field_0024 == *(int *)&this_00->field_0x24) {
          /* ST_CALLSITE[00484BD2]: CALL dword ptr [EDX + 0x88]; [STIndirectCallsiteApplier] exact slot 0x88; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
          iVar7 = STStructuralVirtualCall<undefined4>(this_00, 0x88, local_10);
          return ((0 < iVar7) - 1 & 0xffef) + 0x12;
        }
        return 1;
      }
    }
    break;
  case CASE_12:

    iVar7 = thunk_FUN_00493cd0((STGameObjC *)this);
    if (iVar7 == 0) {
      if (this_00 == nullptr) {
        return 1;
      }
      if ((STBoatC *)this_00 != this) {
        SVar3 = this->field_06F7;
        if (((SVar3 != CASE_8) && (SVar3 != CASE_14)) && (SVar3 != CASE_1A)) {
          return 1;
        }
        /* ST_CALLSITE[00484C37]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
        if ((iVar7 != 0x3b) &&
           /* ST_CALLSITE[00484C43]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
           (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 != 0x60)) {
          return 1;
        }
        if (this->field_0024 != *(int *)&this_00->field_0x24) {
          return 1;
        }
        if (this->field_07DA + this->field_07D6 + this->field_07D2 < 1) {
          return 1;
        }
        return 0x13;
      }
    }
    break;
  case CASE_13:

    iVar7 = thunk_FUN_00493cd0((STGameObjC *)this);
    if (iVar7 != 0) {
      return 0;
    }
    if (this->field_07CA != nullptr) {
      return 0;
    }
    if (this_00 == nullptr) {
      return 1;
    }
    if ((STBoatC *)this_00 == this) {
      return 0;
    }
    if (*(int *)&this_00->field_0x20 == 0x14) {
      bVar10 = this_00->field_0x24;
      bVar1 = (byte)this->field_0024;
      param_2 = (RecoveredRecord_004845E0_7E8F2946 *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar10));
      param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
      if (DAT_00808a8f == '\0') {
        if (bVar10 == bVar1) {
LAB_00484e9f:
          iVar7 = 0;
        }
        else {
          bVar2 = g_playerRelationMatrix[bVar10][bVar1];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
            iVar7 = -2;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar10] == 0)) {
            iVar7 = -1;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar10] == 1)) {
            iVar7 = 1;
          }
          else {
            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar10] != 1)) goto LAB_00484e9f;
            iVar7 = 2;
          }
        }
        bVar11 = iVar7 < 0;
      }
      else {
        bVar11 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                 g_bulkInitializedRecords_008087C7[bVar10].field_0023;
      }
      if ((!bVar11) ||
         /* ST_CALLSITE[00484EB2]: CALL dword ptr [EAX + 0x120]; [STIndirectCallsiteApplier] exact slot 0x120; mode=dispatch; signature=__thiscall;/dword;pointer:/STBoatC */
         (dVar6 = ((STBoatC *)this_00)->vfunc_120(), dVar6 == 1))
      goto LAB_00484ed2;
    }
    if ((*(int *)&this_00->field_0x20 != 0x172) && (*(int *)&this_00->field_0x20 != 0x1a4)) {
      return 1;
    }
LAB_00484ed2:
    /* ST_CALLSITE[00484ED6]: CALL dword ptr [EDX + 0xbc]; [STIndirectCallsiteApplier] exact slot 0xBC; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
    iVar7 = ((STGameObjC *)this_00)->vfunc_BC();
    if (iVar7 != 1) {
      return 1;
    }
    return 0x1a;
  case CASE_18:

    iVar7 = thunk_FUN_00493cd0((STGameObjC *)this);
    if (iVar7 == 0) {
      return -(ushort)((STBoatC *)this_00 != this) & 0x1d;
    }
    break;
  case CASE_2C:

    iVar7 = thunk_FUN_00493cd0((STGameObjC *)this);
    return (ushort)(iVar7 == 0);
  case CASE_2D:

    iVar7 = thunk_FUN_00493cd0((STGameObjC *)this);
    return (-(ushort)(iVar7 != 0) & 0xfff0) + 0x10;
  case CASE_48:

    iVar7 = thunk_FUN_00493cd0((STGameObjC *)this);
    if (iVar7 == 0) {
      if (this_00 == nullptr) {
        return 1;
      }
      if ((STBoatC *)this_00 != this) {
        /* ST_CALLSITE[0048511F]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
        if (iVar7 != 0x62) {
          return 1;
        }
        if (this->field_0024 != *(int *)&this_00->field_0x24) {
          return 1;
        }
        /* ST_CALLSITE[0048513B]: CALL 0x00403594; direct=00403594 TLOBaseTy::sub_004D6DF0 */
        iVar4 = TLOBaseTy::sub_004D6DF0((TLOBaseTy *)this);
        if (iVar4 < 1) {
          return 1;
        }

        local_EAX_2933 = thunk_FUN_004e8030(this->field_06F7);
        if (local_EAX_2933 != 3) {
          return 1;
        }
        return 0x1b;
      }
    }
    break;
  case CASE_4D:

    iVar7 = thunk_FUN_00493cd0((STGameObjC *)this);
    if (iVar7 == 0) {
      if (this_00 == nullptr) {
        return 1;
      }
      if ((STBoatC *)this_00 != this) {
        /* ST_CALLSITE[0048519C]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
        iVar7 = ((STGameObjC *)this_00)->vfunc_2C();
        if ((iVar7 != 0x37) &&
           /* ST_CALLSITE[004851A8]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=dispatch; signature=__thiscall;/undefined4;pointer:/STGameObjC */
           (iVar7 = ((STGameObjC *)this_00)->vfunc_2C(), iVar7 != 0x6c)) {
          return 1;
        }

        iVar7 = thunk_FUN_004e8b10(this_00,this->field_0024);
        if (iVar7 != 1) {
          return 1;
        }
        return 0x1d;
      }
    }
  }
  return 0;
}

