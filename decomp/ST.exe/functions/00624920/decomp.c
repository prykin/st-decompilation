
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00624920_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3

   [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=32; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_sub_00624920_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

undefined4 __thiscall
STMineSetC::sub_00624920
          (STMineSetC *this,STMineSetC_sub_00624920_param_1Enum param_1,int *param_2,int *param_3,
          int *param_4)

{
  STMineSetC_field_02ADState SVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  short sVar13;
  undefined4 local_8;
  byte SVar1;

  local_8 = 0;
  switch(param_1) {
  case CASE_0:
    *param_2 = this->field_02C2;
    *param_3 = this->field_02C6;
    *param_4 = this->field_02CA;
    if (g_playSystem_00802A38->field_00E4 < this->field_030F) {
      return 1;
    }
    SVar2 = this->field_02AD;
    if (SVar2 < 4) {
      this->field_02AE = CASE_0;
      if ((SVar2 == CASE_3) || (SVar2 == CASE_2)) {
        this->field_030E = 1;
      }
      this->field_030A = 0;
      return 0;
    }
    this->field_02F2 = this->field_02CA;
    this->field_0302 = 1;
    iVar7 = thunk_FUN_00624570(this,CASE_1,this->field_02C2,this->field_02C6,this->field_02CA);
    if (iVar7 != 0) {
      sVar13 = (short)this->field_02CA;
      this->field_0036 = sVar13;
      this->field_0038 = sVar13;
      this->field_02EE = 1;
      this->field_02AE = CASE_1;
      this->field_0034 = (short)this->field_02C2;
      return 1;
    }
    break;
  case CASE_1:
    if (this->field_0062 == 0) {
      *param_2 = this->field_02C2;
      *param_3 = this->field_02C6;
      iVar7 = this->field_02CA;
    }
    else {
      iVar10 = this->field_02F2;
      iVar7 = (g_playSystem_00802A38->field_00E4 - this->field_030F) * (uint)(byte)this->field_0062
              * this->field_0302;
      iVar7 = ((int)(iVar7 + (iVar7 >> 0x1f & 0xfU)) >> 4) + (int)this->field_0038;
      if (this->field_0302 < 1) {
        if (iVar7 < iVar10 - *(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4)) {
          *param_2 = this->field_02C2;
          *param_3 = this->field_02C6;
          *param_4 = (iVar10 - *(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4)) + 1;
          thunk_FUN_00624570(this,CASE_1,this->field_02C2,this->field_02C6,
                             *(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4) + iVar10);
          this->field_02AE = CASE_1;
          return 1;
        }
      }
      else if (*(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4) + iVar10 < iVar7) {
        *param_2 = this->field_02C2;
        *param_3 = this->field_02C6;
        *param_4 = *(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4) + -1 + iVar10;
        iVar7 = thunk_FUN_00624570(this,CASE_1,this->field_02C2,this->field_02C6,
                                   iVar10 - *(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4));
        if (iVar7 != 0) {
          this->field_02EE = 1;
          this->field_02AE = CASE_1;
        }
        return 1;
      }
      *param_2 = this->field_02C2;
      *param_3 = this->field_02C6;
    }
    *param_4 = iVar7;
    return 1;
  case CASE_2:
    iVar9 = g_playSystem_00802A38->field_00E4 - this->field_030F;
    iVar11 = this->field_0306 * iVar9;
    iVar10 = (this->field_02FA * iVar11) / 10000 + (int)this->field_0034;
    iVar6 = (this->field_02FE * iVar11) / 10000 + (int)this->field_0036;
    iVar8 = (this->field_0302 * iVar11) / 10000 + (int)this->field_0038;
    iVar7 = thunk_FUN_00627670(this);
    if ((1 < iVar9) &&
       (uVar5 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                          ((AnonReceiver_00601500 *)&this->field_0x231,iVar10,iVar6,iVar8,
                           (int)this->field_0054,(int)this->field_0056,(int)this->field_0058,
                           this->field_0262,iVar7,this->field_0018,0xffff,
                           *(int *)(&DAT_007d04d0 + (uint)this->field_02AD * 4),0,1), 0 < (int)uVar5
       )) {
      thunk_FUN_00627390(this);
      return 0;
    }
    *param_2 = iVar10;
    *param_3 = iVar6;
    local_8 = 1;
    *param_4 = iVar8;
    if (this->field_02F6 <= iVar11) {
      sVar13 = this->field_003A;
      sVar3 = this->field_003C;
      sVar4 = this->field_003E;
      *param_2 = (int)sVar13;
      *param_3 = (int)sVar3;
      *param_4 = (int)sVar4;
      iVar7 = thunk_FUN_00624570(this,CASE_0,(int)sVar13,(int)sVar3,(int)sVar4);
      if (iVar7 != 0) {
        this->field_02EE = 0;
        this->field_02AE = CASE_1;
        this->field_030F = g_playSystem_00802A38->field_00E4;
        return 1;
      }
    }
    break;
  case CASE_3:
    iVar7 = (g_playSystem_00802A38->field_00E4 - this->field_030F) * this->field_0306;
    iVar10 = this->field_0302 * iVar7 + (int)this->field_0038;
    sVar13 = (short)(iVar10 >> 0x1f);
    if (iVar10 < 0) {
      puVar12 = (undefined *)
                ((short)(((short)(iVar10 / 200) + sVar13) -
                        (short)((longlong)iVar10 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      puVar12 = (undefined *)
                (int)(short)(((short)(iVar10 / 200) + sVar13) -
                            (short)((longlong)iVar10 * 0x51eb851f >> 0x3f));
    }
    if (puVar12 != (undefined *)(int)this->field_004B) {
      sVar13 = (short)puVar12;
      iVar6 = thunk_FUN_004961b0(this->field_0047,this->field_0049,sVar13);
      if (iVar6 != 0) {
        sVar3 = this->field_0047;
        sVar4 = this->field_0049;
        if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) || (sVar4 < 0)) ||
            ((g_worldGrid.sizeY <= sVar4 || (sVar13 < 0)))) ||
           ((g_worldGrid.sizeZ <= sVar13 ||
            (g_worldGrid.cells
             [(int)g_worldGrid.sizeX * (int)sVar4 + (int)g_worldGrid.planeStride * (int)sVar13 +
              (int)sVar3].objects[(byte)this->field_008E] == (STWorldObject *)0x0)))) {
          iVar6 = thunk_FUN_00495ff0(sVar3,sVar4,this->field_004B,this->field_008E,
                                     (AnonShape_00495FF0_59081BDD *)this);
          if (iVar6 == 0) {
            this->field_0314 = this->field_0314 + -1;
          }
          sVar3 = this->field_0047;
          sVar4 = this->field_0049;
          if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
               ((sVar4 < 0 ||
                (((g_worldGrid.sizeY <= sVar4 || (sVar13 < 0)) || (g_worldGrid.sizeZ <= sVar13))))))
              || (g_worldGrid.cells
                  [(int)sVar4 * (int)g_worldGrid.sizeX + (int)g_worldGrid.planeStride * (int)sVar13
                   + (int)sVar3].objects[(byte)this->field_008E] == (STWorldObject *)0x0)) &&
             (iVar6 = DumpClassC::WritePtr
                                (sVar3,sVar4,sVar13,this->field_008E,
                                 (RecoveredRecord_DumpClassC_00495EC0 *)this), iVar6 == 0)) {
            SVar1 = this->field_02AD;
            this->field_0314 = this->field_0314 + '\x01';
            if (SVar1 < 3) {
              if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
                VisibleClassTy::sub_00559110
                          (g_visibleClass_00802A88,(int)this->field_0047,
                           (undefined *)(int)this->field_0049,(int)this->field_004B,this->field_0024
                           ,*(int *)(&DAT_007d02b4 + (uint)SVar1 * 4),this->field_0018,0xffffffff);
                VisibleClassTy::sub_00558DC0
                          (g_visibleClass_00802A88,(int)this->field_0047,(int)this->field_0049,
                           puVar12,(int *)this->field_0024,
                           *(uint *)(&DAT_007d02b4 + (uint)this->field_02AD * 4),
                           (int *)this->field_0018,0xffffffff);
              }
            }
            else if ((SVar1 == 3) && (g_visibleClass_00802A88 != (VisibleClassTy *)0x0)) {
              VisibleClassTy::sub_00559110
                        (g_visibleClass_00802A88,(int)this->field_0047,
                         (undefined *)(int)this->field_0049,(int)this->field_004B,this->field_0024,
                         DAT_007d02c0,this->field_0018,0xffffffff);
              VisibleClassTy::sub_00559D60
                        (g_visibleClass_00802A88,(int)this->field_0047,(int)this->field_0049,
                         (char)this->field_004B,this->field_0024,
                         *(int *)(&DAT_007d02b4 + (uint)this->field_02AD * 4),this->field_0018);
              VisibleClassTy::sub_00558DC0
                        (g_visibleClass_00802A88,(int)this->field_0047,(int)this->field_0049,puVar12
                         ,(int *)this->field_0024,
                         *(uint *)(&DAT_007d02b4 + (uint)this->field_02AD * 4),
                         (int *)this->field_0018,0xffffffff);
              VisibleClassTy::SetZoneAst
                        (g_visibleClass_00802A88,(int)this->field_0047,(int)this->field_0049,
                         (char)puVar12,this->field_0024,
                         *(int *)(&DAT_007d02b4 + (uint)this->field_02AD * 4),this->field_0018,
                         0xffffffff);
            }
            this->field_004B = sVar13;
            goto LAB_00625067;
          }
        }
      }
      iVar6 = thunk_FUN_00624570(this,CASE_2,(int)this->field_003A,(int)this->field_003C,
                                 (short)(this->field_004B * 200 + 100) + -0x32);
      if (iVar6 != 0) {
        this->field_02EE = 2;
        this->field_02AE = CASE_1;
        this->field_030F = g_playSystem_00802A38->field_00E4;
        *param_2 = (int)this->field_003A;
        *param_3 = (int)this->field_003C;
        *param_4 = iVar10;
        return 1;
      }
    }
LAB_00625067:
    local_8 = 1;
    *param_2 = (int)this->field_003A;
    *param_3 = (int)this->field_003C;
    *param_4 = iVar10;
    if ((this->field_02F6 <= iVar7) &&
       (iVar7 = thunk_FUN_00624570(this,CASE_0,(int)this->field_003A,(int)this->field_003C,iVar10),
       iVar7 != 0)) {
      this->field_02EE = 0;
      this->field_02AE = CASE_1;
      this->field_030F = g_playSystem_00802A38->field_00E4;
    }
  }
  return local_8;
}

