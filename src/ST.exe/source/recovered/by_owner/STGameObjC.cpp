#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STGameObjC.cpp

// 004158E0 STGameObjC::STGameObjC
#line 4 "decomp/ST.exe/functions/004158E0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 007900A0 (store 004158EC)
   Evidence: final_vptr=007900A0; returns_this=true; calls_before=1; field_writes_after=67;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

STGameObjC * __thiscall st::fn_004158E0(STGameObjC *this)

{
  int iVar1;
  undefined4 *puVar2;

  st::fn_006E60E0(this);
  this->vtable = (STGameObjCDispatchVTable *)&st_global_007900A0;
  this->field_0020 = 0;
  this->field_0024 = 0xff;
  this->field_0028 = 1;
  this->field_002C = 0;
  this->field_0030 = 0xffff;
  this->field_0032 = 0xffff;
  puVar2 = (undefined4 *)&this->field_0x34;
  memset(puVar2, 0, 0x5f); /* compiler bulk-zero initialization */
  puVar2 = (undefined4 *)((byte *)puVar2 + 0x5c);
  iVar1 = 0;
  this->field_005F = -1;
  this->field_005D = -1;
  this->field_005B = -1;
  this->field_006E = 0x2f;
  this->field_0062 = 1;
  this->field_0061 = 1;
  memset(&this->field_0x93, 0, 0x6e); /* compiler bulk-zero initialization */
  this->field_00FD = 1;
  this->field_00CF = -1;
  this->field_00CB = -1;
  this->field_00C7 = -1;
  this->field_0111 = 0xffffffff;
  this->field_010D = 0xffffffff;
  this->field_0109 = 0xffffffff;
  this->field_0105 = 0xffffffff;
  this->field_0101 = 0xffffffff;
  this->field_0121 = nullptr;
  this->field_011D = nullptr;
  this->field_0129 = nullptr;
  this->field_0125 = nullptr;
  this->field_012D = 0;
  this->field_0131 = 0;
  this->field_0135 = 0;
  this->field_0139 = 0;
  this->field_013D = 0;
  this->field_0141 = 0;
  this->field_0145 = 0;
  this->field_0149 = 0;
  this->field_014D = 0;
  this->field_0151 = 0;
  this->field_0155 = 0;
  this->field_0159 = 0;
  this->field_015D = nullptr;
  this->field_0161 = nullptr;
  this->field_0165 = nullptr;
  this->field_0169 = nullptr;
  this->field_016D = nullptr;
  this->field_0171 = nullptr;
  this->field_0175 = nullptr;
  this->field_0179 = nullptr;
  this->field_017D = nullptr;
  this->field_0181 = nullptr;
  this->field_0189 = nullptr;
  this->field_0185 = nullptr;
  this->field_0191 = nullptr;
  this->field_018D = nullptr;
  this->field_0199 = nullptr;
  this->field_0195 = nullptr;
  this->field_01A1 = 0;
  this->field_019D = 0;
  this->field_01A9 = nullptr;
  this->field_01A5 = nullptr;
  this->field_01B1 = nullptr;
  this->field_01AD = nullptr;
  this->field_01B9 = nullptr;
  this->field_01B5 = nullptr;
  this->field_01C1 = nullptr;
  this->field_01BD = nullptr;
  this->field_01C9 = nullptr;
  this->field_01C5 = nullptr;
  this->field_01CD = 0;
  this->field_01D1 = 0;
  return this;
}

// 004845E0 STGameObjC::FUN_004845e0
#line 4 "decomp/ST.exe/functions/004845E0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004845E0_param_1Enum. Cases:
   CASE_0=0;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_D=13;CASE_E=14;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_18=24;CASE_2B=43;CASE_2C=44;CASE_2D=45;CASE_48=72;CASE_4D=77

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STGameObjC_sub_004845E0_param_1Enum. Cases:
   CASE_0=0;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_D=13;CASE_E=14;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_18=24;CASE_2B=43;CASE_2C=44;CASE_2D=45;CASE_48=72;CASE_4D=77
    */

ushort __thiscall
st::fn_004845E0(STGameObjC *this,STGameObjC_sub_004845E0_param_1Enum param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int *this_00;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  bool bVar8;
  undefined1 local_10 [4];
  int local_c;
  undefined4 local_8;

  this_00 = param_2;
  if ((param_2 != nullptr) && (param_2[8] == 1000)) {
    if (param_2[0x12d] != 0) {
      return 0;
    }
    if (STField<int>(param_2,0x245) == 6) {
      return 0;
    }
  }
  switch(param_1) {
  case CASE_0:
    iVar4 = st::fn_0040226B(this);
    if (iVar4 != 0) {
      if (this_00 == nullptr) {
        return 0;
      }
      if ((STGameObjC *)this_00 == this) {
        return 3;
      }
      if (this->field_0024 != this_00[9]) {
        return 0;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar4 = (**(code **)(*this_00 + 0xec))();
      if (iVar4 != 0) {
        iVar4 = this_00[8];
        if (iVar4 == 1000) {
          return 4;
        }
        if (iVar4 == 0x3e9) {
          return 4;
        }
        if (iVar4 != 0x14) {
          return 0;
        }
        return 3;
      }
      return 0;
    }
    if ((STGameObjC *)this_00 == this) {
      return 3;
    }
    if (this_00 == nullptr) {
      return 5;
    }
    iVar4 = this_00[8];
    if ((((iVar4 != 0x14) && (iVar4 != 1000)) && (iVar4 != 0x3e9)) && (iVar4 != 0x1ae)) {
      return 5;
    }
    iVar4 = this->field_06F7;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if ((((iVar4 != 9) && (iVar4 != 0x15)) &&
        ((this->field_0716 < this->field_0712 &&
         ((iVar4 = st::fn_00401F5A(iVar4), iVar4 != 3 &&
          (iVar4 = (**(code **)(*this_00 + 0x2c))(), iVar4 == 0x33)))))) &&
       (this->field_0024 == this_00[9])) {
      return 0x18;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar4 = (**(code **)(*this_00 + 0x2c))();
    if ((((iVar4 == 0x62) && (this->field_0024 == this_00[9])) &&
        (iVar4 = st::fn_00403594((TLOBaseTy *)this), 0 < iVar4)) &&
       (iVar4 = st::fn_00401F5A(this->field_06F7), iVar4 == 3)) {
      return 0x1b;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar4 = (**(code **)(*this_00 + 0x2c))();
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if (((iVar4 == 0x37) || (iVar4 = (**(code **)(*this_00 + 0x2c))(), iVar4 == 0x6c)) &&
       (iVar4 = st::fn_00401EAB(this_00,this->field_0024), iVar4 == 1)) {
      return 0x1d;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar4 = (**(code **)(*this_00 + 0x2c))();
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if (((iVar4 == 0x16) || (iVar4 = (**(code **)(*this_00 + 0x2c))(), iVar4 == 0x25)) &&
       (STField<int>(this_00,0x732) == 1)) {
      bVar7 = *(byte *)(this_00 + 9);
      bVar1 = *(byte *)&this->field_0024;
      /* ST_PSEUDO[stack_slot_reuse,packed_or_unaligned_piece]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable; expected named packed member, bit extract/compose, or unaligned load */
      param_2 = (int *)CONCAT13(bVar1,STPiece<0,3>(param_2));
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar1));
      if (DAT_00808a8f == '\0') {
        if (bVar7 == bVar1) {
LAB_004857a5:
          iVar4 = 0;
        }
        else {
          bVar2 = g_playerRelationMatrix[bVar7][bVar1];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar7] == 0)) {
            iVar4 = -2;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar7] == 0)) {
            iVar4 = -1;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar7] == 1)) {
            iVar4 = 1;
          }
          else {
            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar7] != 1)) goto LAB_004857a5;
            iVar4 = 2;
          }
        }
        bVar8 = iVar4 < 0;
      }
      else {
        bVar8 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                g_bulkInitializedRecords_008087C7[bVar7].field_0023;
      }
      if (bVar8) goto LAB_0048589a;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = (int *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar1));
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar7));
      if (DAT_00808a8f == '\0') {
        if (bVar1 == bVar7) {
LAB_0048586d:
          iVar4 = 0;
        }
        else {
          bVar2 = g_playerRelationMatrix[bVar1][bVar7];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar7][bVar1] == 0)) {
            iVar4 = -2;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar7][bVar1] == 0)) {
            iVar4 = -1;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar7][bVar1] == 1)) {
            iVar4 = 1;
          }
          else {
            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar7][bVar1] != 1)) goto LAB_0048586d;
            iVar4 = 2;
          }
        }
        bVar8 = iVar4 < 0;
      }
      else {
        bVar8 = g_bulkInitializedRecords_008087C7[bVar7].field_0023 !=
                g_bulkInitializedRecords_008087C7[bVar1].field_0023;
      }
      if (!bVar8) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar4 = (**(code **)(*this_00 + 0xec))();
        return (-(ushort)(iVar4 != 1) & 0xfffd) + 3;
      }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_0048589a:
      param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar7));
      iVar4 = st::fn_00405AE7(this_00,this->field_0024);
      return (-(ushort)(iVar4 != 1) & 0xfff9) + 7;
    }
    iVar4 = this->field_06F7;
    if (((iVar4 == 8) || (iVar4 == 0x14)) || (iVar4 == 0x1a)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar4 = (**(code **)(*this_00 + 0x2c))();
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if (((iVar4 != 0x38) && (iVar4 = (**(code **)(*this_00 + 0x2c))(), iVar4 != 0x39)) &&
         ((iVar4 = (**(code **)(*this_00 + 0x2c))(), iVar4 != 0x4f &&
          (iVar4 = (**(code **)(*this_00 + 0x2c))(), iVar4 != 0x5e)))) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar4 = (**(code **)(*this_00 + 0x2c))();
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if (((iVar4 == 0x3b) || (iVar4 = (**(code **)(*this_00 + 0x2c))(), iVar4 == 0x60)) &&
           ((this->field_0024 == this_00[9] &&
            (0 < this->field_07DA + this->field_07D6 + this->field_07D2)))) {
          return 0x13;
        }
        bVar7 = *(byte *)(this_00 + 9);
        bVar1 = *(byte *)&this->field_0024;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = (int *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar7));
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
        if (DAT_00808a8f != '\0') {
          iVar4 = (uint)bVar1 * 9;
          goto LAB_00486163;
        }
        if (bVar7 == bVar1) {
LAB_00485d4a:
          iVar4 = 0;
        }
        else {
          uVar5 = (uint)bVar7;
          uVar6 = (uint)bVar1;
          bVar7 = g_playerRelationMatrix[uVar5][uVar6];
          if ((bVar7 == 0) && (g_playerRelationMatrix[uVar6][uVar5] == 0)) {
            iVar4 = -2;
          }
          else if ((bVar7 == 1) && (g_playerRelationMatrix[uVar6][uVar5] == 0)) {
            iVar4 = -1;
          }
          else if ((bVar7 == 0) && (g_playerRelationMatrix[uVar6][uVar5] == 1)) {
            iVar4 = 1;
          }
          else {
LAB_004861ee:
            if ((bVar7 != 1) || (g_playerRelationMatrix[uVar6][uVar5] != 1)) goto LAB_00485d4a;
            iVar4 = 2;
          }
        }
LAB_00485d4c:
        bVar8 = iVar4 < 0;
LAB_00485d55:
        if (bVar8) {
          return 0;
        }
        if (this_00[8] == 0x14) {
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_00485d68:
          iVar4 = (**(code **)(*this_00 + 0xec))();
          if (iVar4 == 1) {
            return 3;
          }
        }
        goto LAB_00485caa;
      }
      if (this->field_0024 != this_00[9]) {
        return 0;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar4 = (**(code **)(*this_00 + 0x88))(local_10);
      if (0 < iVar4) {
        return 0x12;
      }
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_00485f6a:
      iVar4 = (**(code **)(*this_00 + 0xec))();
    }
    else {
      if (((iVar4 == 7) || (iVar4 == 0x13)) || (iVar4 == 0x1b)) {
        if (this->field_07CA != 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar4 = (**(code **)(*this_00 + 0x2c))();
          if ((iVar4 == 0x52) || (iVar4 == 0x5f)) {
            st::fn_006E62D0
                      (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)this->field_07CA,
                       &local_c);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if ((local_c != 0) && (*(int *)(local_c + 0x20) == 0x1a4)) {
              return 0x1e;
            }
          }
          else if (iVar4 == 99) {
            return 0x1e;
          }
          bVar7 = *(byte *)(this_00 + 9);
          bVar1 = *(byte *)&this->field_0024;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = (int *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar7));
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
          if (DAT_00808a8f == '\0') {
            if (bVar7 == bVar1) {
LAB_00485f1f:
              iVar4 = 0;
            }
            else {
              bVar2 = g_playerRelationMatrix[bVar7][bVar1];
              if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar7] == 0)) {
                iVar4 = -2;
              }
              else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar7] == 0)) {
                iVar4 = -1;
              }
              else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar7] == 1)) {
                iVar4 = 1;
              }
              else {
                if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar7] != 1)) goto LAB_00485f1f;
                iVar4 = 2;
              }
            }
            bVar8 = iVar4 < 0;
          }
          else {
            bVar8 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                    g_bulkInitializedRecords_008087C7[bVar7].field_0023;
          }
          if (bVar8) {
            return 0;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if ((this_00[8] == 0x14) && (iVar4 = (**(code **)(*this_00 + 0xec))(), iVar4 == 1)) {
            return 3;
          }
          if ((this_00[8] != 1000) && (this_00[8] != 0x3e9)) {
            return 0;
          }
          goto LAB_00485f6a;
        }
        bVar7 = *(byte *)(this_00 + 9);
        bVar1 = *(byte *)&this->field_0024;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = (int *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar7));
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
        if (DAT_00808a8f == '\0') {
          if (bVar7 == bVar1) {
LAB_0048602b:
            iVar3 = 0;
          }
          else {
            bVar2 = g_playerRelationMatrix[bVar7][bVar1];
            if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar7] == 0)) {
              iVar3 = -2;
            }
            else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar7] == 0)) {
              iVar3 = -1;
            }
            else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar7] == 1)) {
              iVar3 = 1;
            }
            else {
              if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar7] != 1)) goto LAB_0048602b;
              iVar3 = 2;
            }
          }
          bVar8 = iVar3 < 0;
        }
        else {
          bVar8 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                  g_bulkInitializedRecords_008087C7[bVar7].field_0023;
        }
        if (bVar8) {
          return 0;
        }
        if (this_00[8] == 0x14) {
          if (iVar4 != 0x1b) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar4 = (**(code **)(*this_00 + 0xbc))();
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            if ((iVar4 == 1) && (iVar4 = (**(code **)(*this_00 + 0x7c))(), iVar4 < 100)) {
              return 0x17;
            }
            goto LAB_00485d68;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar4 = (**(code **)(*this_00 + 0xbc))();
          if (iVar4 == 1) {
            return 0x1a;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar4 = (**(code **)(*this_00 + 0xec))();
          if (iVar4 == 1) {
            return 3;
          }
        }
LAB_00485caa:
        iVar4 = this_00[8];
      }
      else {
        if (((iVar4 == 0xc) || (iVar4 == 0x18)) || (iVar4 == 0x19)) {
          bVar7 = *(byte *)(this_00 + 9);
          bVar1 = *(byte *)&this->field_0024;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = (int *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar7));
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
          if (DAT_00808a8f == '\0') {
            if (bVar7 == bVar1) goto LAB_00485d4a;
            uVar5 = (uint)bVar7;
            uVar6 = (uint)bVar1;
            bVar7 = g_playerRelationMatrix[uVar5][uVar6];
            if ((bVar7 == 0) && (g_playerRelationMatrix[uVar6][uVar5] == 0)) {
              iVar4 = -2;
            }
            else if ((bVar7 == 1) && (g_playerRelationMatrix[uVar6][uVar5] == 0)) {
              iVar4 = -1;
            }
            else {
LAB_00485d2d:
              if ((bVar7 != 0) || (g_playerRelationMatrix[uVar6][uVar5] != 1)) goto LAB_004861ee;
              iVar4 = 1;
            }
            goto LAB_00485d4c;
          }
          iVar4 = (uint)bVar1 * 9;
LAB_00486163:
          bVar8 = (&g_bulkInitializedRecords_008087C7[0].field_0023)[iVar4 * 9] !=
                  g_bulkInitializedRecords_008087C7[(uint)param_2 & 0xff].field_0023;
          goto LAB_00485d55;
        }
        if (iVar4 == 9) {
          bVar7 = *(byte *)(this_00 + 9);
          bVar1 = *(byte *)&this->field_0024;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = (int *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar7));
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
          if (DAT_00808a8f != '\0') {
            bVar8 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                    g_bulkInitializedRecords_008087C7[bVar7].field_0023;
            goto LAB_004859d8;
          }
          if (bVar7 == bVar1) {
LAB_004859cd:
            iVar4 = 0;
          }
          else {
            bVar2 = g_playerRelationMatrix[bVar7][bVar1];
            if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar7] == 0)) {
              iVar4 = -2;
            }
            else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar7] == 0)) {
              iVar4 = -1;
            }
            else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar7] == 1)) {
              iVar4 = 1;
            }
            else {
              if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar7] != 1)) goto LAB_004859cd;
              iVar4 = 2;
            }
          }
          bVar8 = iVar4 < 0;
LAB_004859d8:
          if (!bVar8) {
            iVar4 = this_00[8];
            if (iVar4 == 0x14) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              iVar4 = (**(code **)(*this_00 + 0xec))();
              return (-(ushort)(iVar4 != 1) & 0xfffd) + 3;
            }
            if ((iVar4 == 1000) || (iVar4 == 0x3e9)) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              iVar4 = (**(code **)(*this_00 + 0xec))();
              return (-(ushort)(iVar4 != 1) & 0xfffc) + 4;
            }
          }
          if ((this_00[8] != 1000) && (this_00[8] != 0x3e9)) {
            return 0;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar4 = (**(code **)(*this_00 + 0x2c))();
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if ((iVar4 != 0x3b) && (iVar4 = (**(code **)(*this_00 + 0x2c))(), iVar4 != 0x60)) {
            return 0;
          }
          return 7;
        }
        if (iVar4 != 0x1d) {
          if ((iVar4 != 0x24) && (iVar4 != 0x25)) {
            bVar7 = *(byte *)(this_00 + 9);
            bVar1 = *(byte *)&this->field_0024;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = (int *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar7));
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
            if (DAT_00808a8f == '\0') {
              if (bVar7 == bVar1) {
LAB_00485c58:
                iVar3 = 0;
              }
              else {
                bVar2 = g_playerRelationMatrix[bVar7][bVar1];
                if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar7] == 0)) {
                  iVar3 = -2;
                }
                else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar7] == 0)) {
                  iVar3 = -1;
                }
                else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar7] == 1)) {
                  iVar3 = 1;
                }
                else {
                  if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar7] != 1))
                  goto LAB_00485c58;
                  iVar3 = 2;
                }
              }
              bVar8 = iVar3 < 0;
            }
            else {
              bVar8 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                      g_bulkInitializedRecords_008087C7[bVar7].field_0023;
            }
            if (bVar8) {
              if (iVar4 == 0x15) {
                return 7;
              }
              if (0 < this->field_07A2) {
                return 7;
              }
              return 0;
            }
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            if ((this_00[8] == 0x14) && (iVar4 = (**(code **)(*this_00 + 0xec))(), iVar4 == 1)) {
              return 3;
            }
            goto LAB_00485caa;
          }
          bVar7 = *(byte *)(this_00 + 9);
          bVar1 = *(byte *)&this->field_0024;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = (int *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar7));
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
          if (DAT_00808a8f == '\0') {
            if (bVar7 == bVar1) goto LAB_00485d4a;
            uVar5 = (uint)bVar7;
            uVar6 = (uint)bVar1;
            bVar7 = g_playerRelationMatrix[uVar5][uVar6];
            if ((bVar7 == 0) && (g_playerRelationMatrix[uVar6][uVar5] == 0)) {
              iVar4 = -2;
            }
            else {
              if ((bVar7 != 1) || (g_playerRelationMatrix[uVar6][uVar5] != 0)) goto LAB_00485d2d;
              iVar4 = -1;
            }
            goto LAB_00485d4c;
          }
          iVar4 = (uint)bVar1 * 9;
          goto LAB_00486163;
        }
        bVar7 = *(byte *)(this_00 + 9);
        bVar1 = *(byte *)&this->field_0024;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = (int *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar7));
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
        if (DAT_00808a8f == '\0') {
          if (bVar7 == bVar1) {
LAB_00485b29:
            iVar4 = 0;
          }
          else {
            bVar2 = g_playerRelationMatrix[bVar7][bVar1];
            if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar7] == 0)) {
              iVar4 = -2;
            }
            else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar7] == 0)) {
              iVar4 = -1;
            }
            else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar7] == 1)) {
              iVar4 = 1;
            }
            else {
              if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar7] != 1)) goto LAB_00485b29;
              iVar4 = 2;
            }
          }
          bVar8 = iVar4 < 0;
        }
        else {
          bVar8 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                  g_bulkInitializedRecords_008087C7[bVar7].field_0023;
        }
        if (bVar8) {
          return 0;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if ((this_00[8] == 0x14) && (iVar4 = (**(code **)(*this_00 + 0xec))(), iVar4 == 1)) {
          return 3;
        }
        iVar4 = this_00[8];
      }
      if ((iVar4 != 1000) && (iVar4 != 0x3e9)) {
        return 0;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar4 = (**(code **)(*this_00 + 0xec))();
    }
    if (iVar4 == 1) {
      return 4;
    }
    break;
  case CASE_2:
    iVar4 = st::fn_0040226B(this);
    return (-(ushort)(iVar4 != 0) & 0xfffa) + 6;
  case CASE_3:
  case CASE_2B:
    iVar4 = st::fn_0040226B(this);
    if (iVar4 != 0) {
      return 0;
    }
    if (this_00 == nullptr) {
      return 1;
    }
    iVar4 = this_00[8];
    if (((iVar4 != 0x14) && (iVar4 != 1000)) && ((iVar4 != 0x3e9 && (iVar4 != 0x1ae)))) {
      return 1;
    }
    if ((STGameObjC *)this_00 == this) {
      return 0;
    }
    iVar3 = this->field_06F7;
    if (iVar3 == 7) {
      return 1;
    }
    if (iVar3 == 0x13) {
      return 1;
    }
    if (iVar3 == 8) {
      return 1;
    }
    if (iVar3 == 0x14) {
      return 1;
    }
    if (iVar3 == 0xc) {
      return 1;
    }
    if (iVar3 == 0x18) {
      return 1;
    }
    if (iVar3 == 0x19) {
      return 1;
    }
    if (iVar3 == 0x1a) {
      return 1;
    }
    if (iVar3 == 0x1b) {
      return 1;
    }
    if (iVar3 == 0x25) {
      return 1;
    }
    if (iVar3 != 9) {
      if ((iVar3 != 0x15) && (this->field_07A2 < 1)) {
        return 1;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar4 = (**(code **)(*this_00 + 0x2c))();
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if (((iVar4 != 0x16) && (iVar4 = (**(code **)(*this_00 + 0x2c))(), iVar4 != 0x25)) ||
         (STField<int>(this_00,0x732) != 1)) {
        int scalar_param_2 = uint)*(byte *)(this_00 + 9; /* split integer lifetime from pointer-typed SSA storage */
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (STGameObjC_sub_004845E0_param_1Enum)*(byte *)&this->field_0024;
        if (DAT_00808a8f != '\0') {
          bVar8 = g_bulkInitializedRecords_008087C7[param_1].field_0023 !=
                  g_bulkInitializedRecords_008087C7[scalar_param_2].field_0023;
          return (((ushort)bVar8 - (ushort)bVar8) - (ushort)bVar8 & 5) + 2;
        }
        if (*(byte *)(this_00 + 9) != *(byte *)&this->field_0024) {
          bVar7 = g_playerRelationMatrix[scalar_param_2][param_1];
          if ((bVar7 == 0) &&
             (*(char *)(scalar_param_2 + (int)(g_playerRelationMatrix + param_1)) == '\0')) {
            iVar4 = -2;
            goto cf_common_exit_00484B10;
          }
          if ((bVar7 == 1) &&
             (*(char *)(scalar_param_2 + (int)(g_playerRelationMatrix + param_1)) == '\0')) {
            iVar4 = -1;
            goto cf_common_exit_00484B10;
          }
          if ((bVar7 == 0) &&
             (*(char *)(scalar_param_2 + (int)(g_playerRelationMatrix + param_1)) == '\x01')) {
            iVar4 = 1;
            goto cf_common_exit_00484B10;
          }
          if ((bVar7 == 1) &&
             (*(char *)(scalar_param_2 + (int)(g_playerRelationMatrix + param_1)) == '\x01')) {
            iVar4 = 2;
            goto cf_common_exit_00484B10;
          }
        }
        iVar4 = 0;
cf_common_exit_00484B10:
        bVar8 = iVar4 < 0;
        return (((ushort)bVar8 - (ushort)bVar8) - (ushort)bVar8 & 5) + 2;
      }
      bVar7 = *(byte *)(this_00 + 9);
      bVar1 = *(byte *)&this->field_0024;
      /* ST_PSEUDO[stack_slot_reuse,packed_or_unaligned_piece]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable; expected named packed member, bit extract/compose, or unaligned load */
      param_2 = (int *)CONCAT13(bVar1,STPiece<0,3>(param_2));
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar1));
      if (DAT_00808a8f == '\0') {
        if (bVar7 == bVar1) {
LAB_00484943:
          iVar4 = 0;
        }
        else {
          bVar2 = g_playerRelationMatrix[bVar7][bVar1];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar7] == 0)) {
            iVar4 = -2;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar7] == 0)) {
            iVar4 = -1;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar7] == 1)) {
            iVar4 = 1;
          }
          else {
            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar7] != 1)) goto LAB_00484943;
            iVar4 = 2;
          }
        }
        bVar8 = iVar4 < 0;
      }
      else {
        bVar8 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                g_bulkInitializedRecords_008087C7[bVar7].field_0023;
      }
      if (bVar8) goto LAB_00484a28;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = (int *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar1));
      if (DAT_00808a8f == '\0') {
        if (bVar1 == bVar7) {
LAB_00484a0b:
          iVar4 = 0;
        }
        else {
          bVar2 = g_playerRelationMatrix[bVar1][bVar7];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar7][bVar1] == 0)) {
            iVar4 = -2;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar7][bVar1] == 0)) {
            iVar4 = -1;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar7][bVar1] == 1)) {
            iVar4 = 1;
          }
          else {
            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar7][bVar1] != 1)) goto LAB_00484a0b;
            iVar4 = 2;
          }
        }
        bVar8 = iVar4 < 0;
      }
      else {
        bVar8 = g_bulkInitializedRecords_008087C7[bVar7].field_0023 !=
                g_bulkInitializedRecords_008087C7[bVar1].field_0023;
      }
      if (!bVar8) {
        return 2;
      }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_00484a28:
      param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar7));
      iVar4 = st::fn_00405AE7(this_00,this->field_0024);
      return (-(ushort)(iVar4 != 1) & 0xfffa) + 7;
    }
    bVar7 = *(byte *)(this_00 + 9);
    bVar1 = *(byte *)&this->field_0024;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = (int *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar7));
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
    if (DAT_00808a8f != '\0') {
      bVar8 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
              g_bulkInitializedRecords_008087C7[bVar7].field_0023;
      goto LAB_004847df;
    }
    if (bVar7 == bVar1) {
LAB_004847d4:
      iVar3 = 0;
    }
    else {
      bVar2 = g_playerRelationMatrix[bVar7][bVar1];
      if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar7] == 0)) {
        iVar3 = -2;
      }
      else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar7] == 0)) {
        iVar3 = -1;
      }
      else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar7] == 1)) {
        iVar3 = 1;
      }
      else {
        if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar7] != 1)) goto LAB_004847d4;
        iVar3 = 2;
      }
    }
    bVar8 = iVar3 < 0;
LAB_004847df:
    if (!bVar8) {
      if (iVar4 == 0x14) {
        return 3;
      }
      if (iVar4 == 1000) {
        return 4;
      }
      if (iVar4 == 0x3e9) {
        return 4;
      }
    }
    if (iVar4 != 1000) {
      return 1;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar4 = (**(code **)(*this_00 + 0x2c))();
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if ((iVar4 != 0x3b) && (iVar4 = (**(code **)(*this_00 + 0x2c))(), iVar4 != 0x60)) {
      return 1;
    }
    return 7;
  case CASE_4:
    iVar4 = st::fn_0040226B(this);
    if (iVar4 == 0) {
      if (this_00 == nullptr) {
        return 1;
      }
      if ((STGameObjC *)this_00 != this) {
        if (this->field_06F7 == 9) {
          return 1;
        }
        if (this->field_06F7 == 0x15) {
          return 1;
        }
        if (this->field_0712 <= this->field_0716) {
          return 1;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar4 = (**(code **)(*this_00 + 0x2c))();
        if (iVar4 != 0x33) {
          return 1;
        }
        if (this->field_0024 != this_00[9]) {
          return 1;
        }
        return 0x18;
      }
    }
    break;
  case CASE_5:
    iVar4 = st::fn_0040226B(this);
    if (iVar4 == 0) {
      if (this_00 == nullptr) {
        return 1;
      }
      if ((STGameObjC *)this_00 != this) {
        iVar4 = this_00[8];
        if (((iVar4 != 0x14) && (iVar4 != 1000)) && (iVar4 != 0x3e9)) {
          return 1;
        }
        if (this->field_0024 != this_00[9]) {
          return 1;
        }
        iVar4 = st::fn_00404E58(this);
        if (iVar4 != 1) {
          return 1;
        }
        return 0xd;
      }
    }
    break;
  case CASE_6:
    iVar4 = st::fn_0040226B(this);
    return (-(ushort)(iVar4 != 0) & 0xfff1) + 0xf;
  case CASE_7:
    iVar4 = st::fn_0040226B(this);
    if (iVar4 == 0) {
      if (this_00 == nullptr) {
        return 1;
      }
      if ((STGameObjC *)this_00 != this) {
        iVar4 = this->field_06F7;
        if (((iVar4 != 6) && (iVar4 != 0x12)) && (iVar4 != 0x22)) {
          return 1;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar4 = (**(code **)(*this_00 + 0x108))(this->field_0024);
        if (iVar4 != 1) {
          return 1;
        }
        iVar4 = st::fn_00403CEC(this_00,this->field_0024);
        if (iVar4 != 1) {
          if (iVar4 == 2) {
            return 10;
          }
          if (iVar4 != 3) {
            return 1;
          }
          return 0xb;
        }
        return 9;
      }
    }
    break;
  case CASE_8:
    iVar4 = st::fn_0040226B(this);
    return (-(ushort)(iVar4 != 0) & 0xffef) + 0x11;
  case CASE_9:
    iVar4 = st::fn_0040226B(this);
    return (-(ushort)(iVar4 != 0) & 0xfff8) + 8;
  case CASE_A:
    iVar4 = st::fn_0040226B(this);
    if (iVar4 != 0) {
      return 0;
    }
    if (this_00 == nullptr) {
      return 1;
    }
    if (this->field_06F7 != 0x17) {
      return 1;
    }
    if (this_00[8] != 0x14) {
      return 1;
    }
    if ((STGameObjC *)this_00 == this) {
      return 0;
    }
    if (this->field_072A < 1) {
      return 1;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar4 = (**(code **)(*this_00 + 0x2c))();
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if ((iVar4 != 0x16) && (iVar4 = (**(code **)(*this_00 + 0x2c))(), iVar4 != 0x25)) {
      return 0xc;
    }
    if (STField<int>(this_00,0x732) != 1) {
      return 0xc;
    }
    bVar7 = *(byte *)(this_00 + 9);
    bVar1 = *(byte *)&this->field_0024;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (STGameObjC_sub_004845E0_param_1Enum)bVar7;
    local_8 = (uint)bVar1;
    if (DAT_00808a8f != '\0') {
      bVar8 = g_bulkInitializedRecords_008087C7[local_8].field_0023 !=
              g_bulkInitializedRecords_008087C7[param_1].field_0023;
      goto LAB_004853d2;
    }
    if (bVar7 == bVar1) {
LAB_004853c7:
      iVar4 = 0;
    }
    else {
      bVar2 = g_playerRelationMatrix[param_1][local_8];
      if ((bVar2 == 0) && (g_playerRelationMatrix[local_8][param_1] == 0)) {
        iVar4 = -2;
      }
      else if ((bVar2 == 1) && (g_playerRelationMatrix[local_8][param_1] == 0)) {
        iVar4 = -1;
      }
      else if ((bVar2 == 0) && (g_playerRelationMatrix[local_8][param_1] == 1)) {
        iVar4 = 1;
      }
      else {
        if ((bVar2 != 1) || (g_playerRelationMatrix[local_8][param_1] != 1)) goto LAB_004853c7;
        iVar4 = 2;
      }
    }
    bVar8 = iVar4 < 0;
LAB_004853d2:
    if (!bVar8) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (STGameObjC_sub_004845E0_param_1Enum)bVar7;
      if (DAT_00808a8f != '\0') {
        return 0xc;
      }
      if (bVar1 != bVar7) {
        bVar7 = g_playerRelationMatrix[bVar1][param_1];
        if ((bVar7 == 0) && (g_playerRelationMatrix[param_1][bVar1] == 0)) {
          return 0xc;
        }
        if ((bVar7 == 1) && (g_playerRelationMatrix[param_1][bVar1] == 0)) {
          return 0xc;
        }
        if ((bVar7 == 0) && (g_playerRelationMatrix[param_1][bVar1] == 1)) {
          return 0xc;
        }
        if ((bVar7 == 1) && (g_playerRelationMatrix[param_1][bVar1] == 1)) {
          return 0xc;
        }
      }
    }
    return 0xc;
  case CASE_D:
    iVar4 = st::fn_0040226B(this);
    if (iVar4 != 0) {
      return 0;
    }
    if (this->field_07CA != 0) {
      return 0;
    }
    if (this_00 == nullptr) {
      return 1;
    }
    if ((STGameObjC *)this_00 == this) {
      return 0;
    }
    if (this_00[8] != 0x14) {
      return 1;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar4 = (**(code **)(*this_00 + 0x7c))();
    if (99 < iVar4) {
      return 1;
    }
    bVar7 = *(byte *)(this_00 + 9);
    bVar1 = *(byte *)&this->field_0024;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = (int *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar7));
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
    if (DAT_00808a8f != '\0') {
      bVar8 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
              g_bulkInitializedRecords_008087C7[bVar7].field_0023;
      goto LAB_00485002;
    }
    if (bVar7 == bVar1) {
LAB_00484ff7:
      iVar4 = 0;
    }
    else {
      bVar2 = g_playerRelationMatrix[bVar7][bVar1];
      if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar7] == 0)) {
        iVar4 = -2;
      }
      else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar7] == 0)) {
        iVar4 = -1;
      }
      else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar7] == 1)) {
        iVar4 = 1;
      }
      else {
        if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar7] != 1)) goto LAB_00484ff7;
        iVar4 = 2;
      }
    }
    bVar8 = iVar4 < 0;
LAB_00485002:
    if (bVar8) {
      return 1;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar4 = (**(code **)(*this_00 + 0xbc))();
    if (iVar4 != 1) {
      return 1;
    }
    return 0x17;
  case CASE_E:
    iVar4 = st::fn_0040226B(this);
    if (iVar4 == 0) {
      if ((g_tLOBldMark_007FB2AC != nullptr) && (g_tLOBldMark_007FB2AC->field_0024 != 0))
      {
        return 0x14;
      }
      return 0x15;
    }
    break;
  case CASE_10:
    iVar4 = st::fn_0040226B(this);
    if (iVar4 != 0) {
      return 0;
    }
    if ((STGameObjC *)this_00 == this) {
      return 0;
    }
    if (this_00 == nullptr) {
      return 1;
    }
    if (this_00[8] != 1000) {
      return 1;
    }
    if (this_00[9] != this->field_0024) {
      return 1;
    }
    iVar4 = st::fn_0040141A((AnonShape_004B9D90_4F3151F9 *)this_00);
    if (iVar4 == 0) {
      return 1;
    }
    st::fn_00405F0B
              ((STFishC *)this_00,(undefined2 *)((int)&local_8 + 2),
               (undefined2 *)((int)&param_1 + 2),(undefined2 *)((int)&param_2 + 2));
    return (((int)STPiece<2,2>(param_2) <= g_worldGrid.sizeZ + -2) - 1 & 0xffeb) + 0x16;
  case CASE_11:
    iVar4 = st::fn_0040226B(this);
    if (iVar4 == 0) {
      if (this_00 == nullptr) {
        return 1;
      }
      if ((STGameObjC *)this_00 != this) {
        iVar4 = this->field_06F7;
        if (((iVar4 != 8) && (iVar4 != 0x14)) && (iVar4 != 0x1a)) {
          return 1;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar4 = (**(code **)(*this_00 + 0x2c))();
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if ((((iVar4 != 0x38) && (iVar4 = (**(code **)(*this_00 + 0x2c))(), iVar4 != 0x39)) &&
            (iVar4 = (**(code **)(*this_00 + 0x2c))(), iVar4 != 0x4f)) &&
           (iVar4 = (**(code **)(*this_00 + 0x2c))(), iVar4 != 0x5e)) {
          return 1;
        }
        if (this->field_0024 == this_00[9]) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar4 = (**(code **)(*this_00 + 0x88))(local_10);
          return ((0 < iVar4) - 1 & 0xffef) + 0x12;
        }
        return 1;
      }
    }
    break;
  case CASE_12:
    iVar4 = st::fn_0040226B(this);
    if (iVar4 == 0) {
      if (this_00 == nullptr) {
        return 1;
      }
      if ((STGameObjC *)this_00 != this) {
        iVar4 = this->field_06F7;
        if (((iVar4 != 8) && (iVar4 != 0x14)) && (iVar4 != 0x1a)) {
          return 1;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar4 = (**(code **)(*this_00 + 0x2c))();
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if ((iVar4 != 0x3b) && (iVar4 = (**(code **)(*this_00 + 0x2c))(), iVar4 != 0x60)) {
          return 1;
        }
        if (this->field_0024 != this_00[9]) {
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
    iVar4 = st::fn_0040226B(this);
    if (iVar4 != 0) {
      return 0;
    }
    if (this->field_07CA != 0) {
      return 0;
    }
    if (this_00 == nullptr) {
      return 1;
    }
    if ((STGameObjC *)this_00 == this) {
      return 0;
    }
    if (this_00[8] == 0x14) {
      bVar7 = *(byte *)(this_00 + 9);
      bVar1 = *(byte *)&this->field_0024;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = (int *)STReplaceLowByte((uint32_t)(param_2), (uint8_t)(bVar7));
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = STReplaceLowByte((uint32_t)(param_1), (uint8_t)(bVar1));
      if (DAT_00808a8f == '\0') {
        if (bVar7 == bVar1) {
LAB_00484e9f:
          iVar4 = 0;
        }
        else {
          bVar2 = g_playerRelationMatrix[bVar7][bVar1];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar7] == 0)) {
            iVar4 = -2;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar7] == 0)) {
            iVar4 = -1;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar7] == 1)) {
            iVar4 = 1;
          }
          else {
            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar7] != 1)) goto LAB_00484e9f;
            iVar4 = 2;
          }
        }
        bVar8 = iVar4 < 0;
      }
      else {
        bVar8 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                g_bulkInitializedRecords_008087C7[bVar7].field_0023;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if ((!bVar8) || (iVar4 = (**(code **)(*this_00 + 0x120))(), iVar4 == 1)) goto LAB_00484ed2;
    }
    if ((this_00[8] != 0x172) && (this_00[8] != 0x1a4)) {
      return 1;
    }
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_00484ed2:
    iVar4 = (**(code **)(*this_00 + 0xbc))();
    if (iVar4 != 1) {
      return 1;
    }
    return 0x1a;
  case CASE_18:
    iVar4 = st::fn_0040226B(this);
    if (iVar4 == 0) {
      return -(ushort)((STGameObjC *)this_00 != this) & 0x1d;
    }
    break;
  case CASE_2C:
    iVar4 = st::fn_0040226B(this);
    return (ushort)(iVar4 == 0);
  case CASE_2D:
    iVar4 = st::fn_0040226B(this);
    return (-(ushort)(iVar4 != 0) & 0xfff0) + 0x10;
  case CASE_48:
    iVar4 = st::fn_0040226B(this);
    if (iVar4 == 0) {
      if (this_00 == nullptr) {
        return 1;
      }
      if ((STGameObjC *)this_00 != this) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar4 = (**(code **)(*this_00 + 0x2c))();
        if (iVar4 != 0x62) {
          return 1;
        }
        if (this->field_0024 != this_00[9]) {
          return 1;
        }
        iVar4 = st::fn_00403594((TLOBaseTy *)this);
        if (iVar4 < 1) {
          return 1;
        }
        iVar4 = st::fn_00401F5A(this->field_06F7);
        if (iVar4 != 3) {
          return 1;
        }
        return 0x1b;
      }
    }
    break;
  case CASE_4D:
    iVar4 = st::fn_0040226B(this);
    if (iVar4 == 0) {
      if (this_00 == nullptr) {
        return 1;
      }
      if ((STGameObjC *)this_00 != this) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar4 = (**(code **)(*this_00 + 0x2c))();
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if ((iVar4 != 0x37) && (iVar4 = (**(code **)(*this_00 + 0x2c))(), iVar4 != 0x6c)) {
          return 1;
        }
        iVar4 = st::fn_00401EAB(this_00,this->field_0024);
        if (iVar4 != 1) {
          return 1;
        }
        return 0x1d;
      }
    }
  }
  return 0;
}

