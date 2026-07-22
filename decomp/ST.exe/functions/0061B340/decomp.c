
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=0061B89C MOVSX EAX,word ptr [EBP + 0x8]

   [STMethodOwnerApplier] Structural method owner recovered as STJumpMineC.
   Evidence: this_call_owners=[STJumpMineC]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=4; incoming_stack_parameter_uses=56; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
STJumpMineC::sub_0061B340
          (STJumpMineC *this,short param_1,short param_2,int param_3,int param_4,int param_5,
          int param_6,int *param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  STWorldObject *pSVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  STJumpMineC_field_0093State SVar8;
  int iVar9;
  bool bVar10;
  longlong lVar11;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_00000006;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_0000000a;
  short sVar12;
  int local_14;
  int local_10;
  byte local_c;
  undefined3 uStack_b;
  undefined4 local_8;

  local_8 = 0;
  *param_7 = param_6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if ((-1 < in_stack_00000006) && (-1 < in_stack_0000000a)) {
    if (param_3 < 0) goto LAB_0061bb57;
    if (((_param_1 < g_worldGrid.sizeX) && (_param_2 < g_worldGrid.sizeY)) && (param_3 < 5)) {
      sVar12 = (short)param_3;
      iVar6 = thunk_FUN_004961b0(param_1,param_2,sVar12);
      if (iVar6 == 0) {
        local_10 = this->field_00A7 - this->field_00E3;
        if (((((param_1 < 0) || (g_worldGrid.sizeX <= param_1)) || (param_2 < 0)) ||
            ((g_worldGrid.sizeY <= param_2 || (sVar12 < 0)))) ||
           ((g_worldGrid.sizeZ <= sVar12 ||
            (pSVar4 = g_worldGrid.cells
                      [(int)g_worldGrid.planeStride * (int)sVar12 +
                       (int)g_worldGrid.sizeX * (int)param_2 + (int)param_1].objects[0],
            pSVar4 == (STWorldObject *)0x0)))) {
          FUN_006e3310(PTR_00807598,(PTR_00807598->field_0380 * param_4) / 0xc9,
                       (int *)((PTR_00807598->field_0380 * param_5) / 0xc9),param_3,&local_14);
          lVar11 = Library::MSVCRT::__ftol();
          iVar9 = (int)(short)lVar11;
          iVar6 = param_3 + 1;
          iVar5 = local_14;
          if (local_14 <= iVar6) {
            iVar5 = iVar6;
          }
          if (local_10 < 0) {
            if (iVar9 < param_6) {
              return local_8;
            }
            if (((local_14 <= iVar6) && (iVar6 < 5)) &&
               (iVar6 = thunk_FUN_004961b0(param_1,param_2,sVar12 + 1), iVar6 == 0)) {
              return 3;
            }
            if (iVar5 * 200 < iVar9) {
              return 3;
            }
          }
          else {
            if (iVar9 <= param_6) {
              return local_8;
            }
            if ((iVar6 < 5) && (iVar6 = thunk_FUN_004961b0(param_1,param_2,sVar12 + -1), iVar6 != 0)
               ) {
              *param_7 = param_3 * 200;
              return 1;
            }
          }
          *param_7 = iVar9;
          return 2;
        }
        if (0 < local_10) {
          iVar6 = this->field_00CF;
          sVar12 = (short)(iVar6 >> 0x1f);
          if (iVar6 < 0) {
            iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar12) -
                           (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar12) -
                                (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
          }
          if (iVar6 == _param_1) {
            iVar6 = this->field_00D3;
            sVar12 = (short)(iVar6 >> 0x1f);
            if (iVar6 < 0) {
              iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar12) -
                             (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar12) -
                                  (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
            }
            if (iVar6 == _param_2) {
              iVar6 = this->field_00D7;
              sVar12 = (short)(iVar6 >> 0x1f);
              if (iVar6 < 0) {
                iVar6 = (short)(((short)(iVar6 / 200) + sVar12) -
                               (short)((longlong)iVar6 * 0x51eb851f >> 0x3f)) + -1;
              }
              else {
                iVar6 = (int)(short)(((short)(iVar6 / 200) + sVar12) -
                                    (short)((longlong)iVar6 * 0x51eb851f >> 0x3f));
              }
              if (iVar6 == param_3) {
                return local_8;
              }
            }
          }
          iVar6 = param_3 * 0xc9 + 0x97;
          if (param_6 < iVar6) {
            return local_8;
          }
          *param_7 = iVar6;
          return 2;
        }
        if ((((pSVar4[1].vtable < (STWorldObjectVTable *)0x8) &&
             ((g_playSystem_00802A38 == (STPlaySystemC *)0x0 ||
              ((byte)(&DAT_008087e9)[(int)pSVar4[1].vtable * 0x51] < 8)))) &&
            (pSVar4->value_20 == 1000)) &&
           ((iVar6 = (*pSVar4->vtable[5].slots_00_28[0])(), iVar6 != 0 &&
            (iVar6 = (*pSVar4->vtable[5].slots_00_28[2])(), iVar6 != 0)))) {
          bVar1 = *(byte *)&pSVar4[1].vtable;
          bVar2 = *(byte *)&this->field_0051;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          _local_c = CONCAT31(uStack_b,bVar1);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_10 = CONCAT31(local_10._1_3_,bVar2);
          if (DAT_00808a8f == '\0') {
            if (bVar1 == bVar2) {
LAB_0061b627:
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
                if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1)) goto LAB_0061b627;
                iVar6 = 2;
              }
            }
            bVar10 = iVar6 < 0;
          }
          else {
            bVar10 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
          }
          if (bVar10) {
            uVar7 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::
                    thunk_FUN_00601500((AnonReceiver_00601500 *)&this->field_0x20,param_4,param_5,
                                       param_6,this->field_00DB,this->field_00DF,this->field_00E3,
                                       this->field_0051,DAT_007e66ac,this->field_0085,
                                       this->field_0089,0xb3,0,0);
            if ((uVar7 != 2) && (uVar7 != 3)) {
              return local_8;
            }
            SVar8 = this->field_0093;
            goto LAB_0061b6ac;
          }
        }
        iVar6 = param_3 * 0xc9 + 0x96;
        goto LAB_0061ba9b;
      }
      if (param_1 < 0) {
        return local_8;
      }
      if (g_worldGrid.sizeX <= param_1) {
        return local_8;
      }
      if (param_2 < 0) {
        return local_8;
      }
      if (g_worldGrid.sizeY <= param_2) {
        return local_8;
      }
      if (sVar12 < 0) {
        return local_8;
      }
      if (g_worldGrid.sizeZ <= sVar12) {
        return local_8;
      }
      pSVar4 = g_worldGrid.cells
               [(int)g_worldGrid.planeStride * (int)sVar12 + (int)g_worldGrid.sizeX * (int)param_2 +
                (int)param_1].objects[0];
      if (pSVar4 == (STWorldObject *)0x0) {
        return local_8;
      }
      if ((STWorldObjectVTable *)0x7 < pSVar4[1].vtable) {
        return local_8;
      }
      if ((g_playSystem_00802A38 != (STPlaySystemC *)0x0) &&
         (7 < (byte)(&DAT_008087e9)[(int)pSVar4[1].vtable * 0x51])) {
        return local_8;
      }
      if (pSVar4->value_20 != 1000) {
        return local_8;
      }
      bVar1 = *(byte *)&pSVar4[1].vtable;
      bVar2 = *(byte *)&this->field_0051;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_10 = CONCAT31(local_10._1_3_,bVar1);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_c = CONCAT31(uStack_b,bVar2);
      if (DAT_00808a8f == '\0') {
        if (bVar1 == bVar2) {
LAB_0061b993:
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
            if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1)) goto LAB_0061b993;
            iVar6 = 2;
          }
        }
        bVar10 = iVar6 < 0;
      }
      else {
        bVar10 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
      }
      if (bVar10) {
        iVar6 = (*pSVar4->vtable[5].slots_00_28[0])();
        if (iVar6 == 0) {
          return local_8;
        }
        iVar6 = (*pSVar4->vtable[5].slots_00_28[2])();
        if (iVar6 == 0) {
          return local_8;
        }
        uVar7 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                          ((AnonReceiver_00601500 *)&this->field_0x20,param_4,param_5,param_6,
                           this->field_00DB,this->field_00DF,this->field_00E3,this->field_0051,
                           DAT_007e66ac,this->field_0085,this->field_0089,0xb3,0,0);
        if ((uVar7 != 2) && (uVar7 != 3)) {
          return local_8;
        }
        SVar8 = this->field_0093;
LAB_0061b6ac:
        SVar8 = thunk_FUN_0061c910(this,uVar7,SVar8,_param_1,_param_2,param_3,param_4,param_5,
                                   param_6);
        this->field_0093 = SVar8;
        if (SVar8 != CASE_5) {
          return local_8;
        }
        this->field_00AF = 0x19;
        this->field_00C0 = 0xb;
        this->field_00B3 = 0x14;
        this->field_00BC = 0;
        this->field_00B7 = 0;
        this->field_00AB = 0;
        return 3;
      }
      if (this->field_00A7 != this->field_00E3 && -1 < this->field_00A7 - this->field_00E3) {
        iVar6 = this->field_00CF;
        sVar12 = (short)(iVar6 >> 0x1f);
        if (iVar6 < 0) {
          iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar12) -
                         (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar12) -
                              (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
        }
        if (iVar6 == _param_1) {
          iVar6 = this->field_00D3;
          sVar12 = (short)(iVar6 >> 0x1f);
          if (iVar6 < 0) {
            iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar12) -
                           (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar12) -
                                (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
          }
          if (iVar6 == _param_2) {
            iVar6 = this->field_00D7;
            sVar12 = (short)(iVar6 >> 0x1f);
            if (iVar6 < 0) {
              iVar6 = (short)(((short)(iVar6 / 200) + sVar12) -
                             (short)((longlong)iVar6 * 0x51eb851f >> 0x3f)) + -1;
            }
            else {
              iVar6 = (int)(short)(((short)(iVar6 / 200) + sVar12) -
                                  (short)((longlong)iVar6 * 0x51eb851f >> 0x3f));
            }
            if (iVar6 == param_3) {
              return local_8;
            }
          }
        }
        iVar6 = param_3 * 0xc9 + 0x97;
        if (param_6 < iVar6) {
          return local_8;
        }
        *param_7 = iVar6;
        return 2;
      }
      iVar6 = param_3 * 0xc9 + 0x32;
LAB_0061ba9b:
      if (iVar6 < param_6) {
        return local_8;
      }
      *param_7 = iVar6;
      return 2;
    }
  }
  if (-1 < param_3) {
    if (param_3 < 5) {
      local_8 = 4;
    }
    return local_8;
  }
LAB_0061bb57:
  *param_7 = 0;
  return 2;
}

