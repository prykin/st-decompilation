
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
  STMineSetC_field_02ADState SVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  short sVar12;
  undefined4 local_8;

  local_8 = 0;
  switch(param_1) {
  case CASE_0:
    *param_2 = this->field_02C2;
    *param_3 = this->field_02C6;
    *param_4 = this->field_02CA;
    if (g_playSystem_00802A38->field_00E4 < this->field_030F) {
      return 1;
    }
    SVar1 = this->field_02AD;
    if (SVar1 < 4) {
      this->field_02AE = CASE_0;
      if ((SVar1 == CASE_3) || (SVar1 == CASE_2)) {
        this->field_030E = 1;
      }
      this->field_030A = 0;
      return 0;
    }
    this->field_02F2 = this->field_02CA;
    this->field_0302 = 1;
    iVar6 = thunk_FUN_00624570(this,CASE_1,this->field_02C2,this->field_02C6,this->field_02CA);
    if (iVar6 != 0) {
      sVar12 = (short)this->field_02CA;
      this->field_0036 = sVar12;
      this->field_0038 = sVar12;
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
      iVar6 = this->field_02CA;
    }
    else {
      iVar9 = this->field_02F2;
      iVar6 = (g_playSystem_00802A38->field_00E4 - this->field_030F) * (uint)(byte)this->field_0062
              * this->field_0302;
      iVar6 = ((int)(iVar6 + (iVar6 >> 0x1f & 0xfU)) >> 4) + (int)this->field_0038;
      if (this->field_0302 < 1) {
        if (iVar6 < iVar9 - *(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4)) {
          *param_2 = this->field_02C2;
          *param_3 = this->field_02C6;
          *param_4 = (iVar9 - *(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4)) + 1;
          thunk_FUN_00624570(this,CASE_1,this->field_02C2,this->field_02C6,
                             *(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4) + iVar9);
          this->field_02AE = CASE_1;
          return 1;
        }
      }
      else if (*(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4) + iVar9 < iVar6) {
        *param_2 = this->field_02C2;
        *param_3 = this->field_02C6;
        *param_4 = *(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4) + -1 + iVar9;
        iVar6 = thunk_FUN_00624570(this,CASE_1,this->field_02C2,this->field_02C6,
                                   iVar9 - *(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4));
        if (iVar6 != 0) {
          this->field_02EE = 1;
          this->field_02AE = CASE_1;
        }
        return 1;
      }
      *param_2 = this->field_02C2;
      *param_3 = this->field_02C6;
    }
    *param_4 = iVar6;
    return 1;
  case CASE_2:
    iVar8 = g_playSystem_00802A38->field_00E4 - this->field_030F;
    iVar10 = this->field_0306 * iVar8;
    iVar9 = (this->field_02FA * iVar10) / 10000 + (int)this->field_0034;
    iVar5 = (this->field_02FE * iVar10) / 10000 + (int)this->field_0036;
    iVar7 = (this->field_0302 * iVar10) / 10000 + (int)this->field_0038;
    iVar6 = thunk_FUN_00627670((int)this);
    if ((1 < iVar8) &&
       (uVar4 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                          ((AnonReceiver_00601500 *)&this->field_0x231,iVar9,iVar5,iVar7,
                           (int)this->field_0054,(int)this->field_0056,(int)this->field_0058,
                           this->field_0262,iVar6,this->field_0018,0xffff,
                           *(int *)(&DAT_007d04d0 + (uint)this->field_02AD * 4),0,1), 0 < (int)uVar4
       )) {
      thunk_FUN_00627390(this);
      return 0;
    }
    *param_2 = iVar9;
    *param_3 = iVar5;
    local_8 = 1;
    *param_4 = iVar7;
    if (this->field_02F6 <= iVar10) {
      sVar12 = this->field_003A;
      sVar2 = this->field_003C;
      sVar3 = this->field_003E;
      *param_2 = (int)sVar12;
      *param_3 = (int)sVar2;
      *param_4 = (int)sVar3;
      iVar6 = thunk_FUN_00624570(this,CASE_0,(int)sVar12,(int)sVar2,(int)sVar3);
      if (iVar6 != 0) {
        this->field_02EE = 0;
        this->field_02AE = CASE_1;
        this->field_030F = g_playSystem_00802A38->field_00E4;
        return 1;
      }
    }
    break;
  case CASE_3:
    iVar6 = (g_playSystem_00802A38->field_00E4 - this->field_030F) * this->field_0306;
    iVar9 = this->field_0302 * iVar6 + (int)this->field_0038;
    sVar12 = (short)(iVar9 >> 0x1f);
    if (iVar9 < 0) {
      puVar11 = (undefined *)
                ((short)(((short)(iVar9 / 200) + sVar12) -
                        (short)((longlong)iVar9 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      puVar11 = (undefined *)
                (int)(short)(((short)(iVar9 / 200) + sVar12) -
                            (short)((longlong)iVar9 * 0x51eb851f >> 0x3f));
    }
    if (puVar11 != (undefined *)(int)this->field_004B) {
      sVar12 = (short)puVar11;
      iVar5 = thunk_FUN_004961b0(this->field_0047,this->field_0049,sVar12);
      if (iVar5 != 0) {
        sVar2 = this->field_0047;
        sVar3 = this->field_0049;
        if (((((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) || (sVar3 < 0)) ||
            ((g_worldGrid.sizeY <= sVar3 || (sVar12 < 0)))) ||
           ((g_worldGrid.sizeZ <= sVar12 ||
            (g_worldGrid.cells
             [(int)g_worldGrid.sizeX * (int)sVar3 + (int)g_worldGrid.planeStride * (int)sVar12 +
              (int)sVar2].objects[(byte)this->field_008E] == (STWorldObject *)0x0)))) {
          iVar5 = thunk_FUN_00495ff0(sVar2,sVar3,this->field_004B,(uint)(byte)this->field_008E,
                                     (AnonShape_00495FF0_59081BDD *)this);
          if (iVar5 == 0) {
            this->field_0314 = this->field_0314 + -1;
          }
          sVar2 = this->field_0047;
          sVar3 = this->field_0049;
          if (((((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) ||
               ((sVar3 < 0 ||
                (((g_worldGrid.sizeY <= sVar3 || (sVar12 < 0)) || (g_worldGrid.sizeZ <= sVar12))))))
              || (g_worldGrid.cells
                  [(int)sVar3 * (int)g_worldGrid.sizeX + (int)g_worldGrid.planeStride * (int)sVar12
                   + (int)sVar2].objects[(byte)this->field_008E] == (STWorldObject *)0x0)) &&
             (iVar5 = DumpClassC::WritePtr
                                (sVar2,sVar3,sVar12,(uint)(byte)this->field_008E,
                                 (AnonShape_00495EC0_95A268C6 *)this), iVar5 == 0)) {
            SVar1 = this->field_02AD;
            this->field_0314 = this->field_0314 + '\x01';
            if (SVar1 < CASE_3) {
              if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
                VisibleClassTy::sub_00559110
                          (g_visibleClass_00802A88,(int)this->field_0047,
                           (undefined *)(int)this->field_0049,(int)this->field_004B,this->field_0024
                           ,*(int *)(&DAT_007d02b4 + (uint)SVar1 * 4),this->field_0018,0xffffffff);
                VisibleClassTy::sub_00558DC0
                          (g_visibleClass_00802A88,(int)this->field_0047,(int)this->field_0049,
                           puVar11,(int *)this->field_0024,
                           *(uint *)(&DAT_007d02b4 + (uint)this->field_02AD * 4),
                           (int *)this->field_0018,0xffffffff);
              }
            }
            else if ((SVar1 == CASE_3) && (g_visibleClass_00802A88 != (VisibleClassTy *)0x0)) {
              VisibleClassTy::sub_00559110
                        (g_visibleClass_00802A88,(int)this->field_0047,
                         (undefined *)(int)this->field_0049,(int)this->field_004B,this->field_0024,
                         DAT_007d02c0,this->field_0018,0xffffffff);
              SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00559D60::thunk_FUN_00559d60
                        ((AnonReceiver_00559D60 *)g_visibleClass_00802A88,(int)this->field_0047,
                         (int)this->field_0049,(char)this->field_004B,this->field_0024,
                         *(undefined **)(&DAT_007d02b4 + (uint)this->field_02AD * 4),
                         this->field_0018);
              VisibleClassTy::sub_00558DC0
                        (g_visibleClass_00802A88,(int)this->field_0047,(int)this->field_0049,puVar11
                         ,(int *)this->field_0024,
                         *(uint *)(&DAT_007d02b4 + (uint)this->field_02AD * 4),
                         (int *)this->field_0018,0xffffffff);
              VisibleClassTy::SetZoneAst
                        (g_visibleClass_00802A88,(int)this->field_0047,(int)this->field_0049,
                         (char)puVar11,this->field_0024,
                         *(int *)(&DAT_007d02b4 + (uint)this->field_02AD * 4),this->field_0018,
                         0xffffffff);
            }
            this->field_004B = sVar12;
            goto LAB_00625067;
          }
        }
      }
      iVar5 = thunk_FUN_00624570(this,CASE_2,(int)this->field_003A,(int)this->field_003C,
                                 (short)(this->field_004B * 200 + 100) + -0x32);
      if (iVar5 != 0) {
        this->field_02EE = 2;
        this->field_02AE = CASE_1;
        this->field_030F = g_playSystem_00802A38->field_00E4;
        *param_2 = (int)this->field_003A;
        *param_3 = (int)this->field_003C;
        *param_4 = iVar9;
        return 1;
      }
    }
LAB_00625067:
    local_8 = 1;
    *param_2 = (int)this->field_003A;
    *param_3 = (int)this->field_003C;
    *param_4 = iVar9;
    if ((this->field_02F6 <= iVar6) &&
       (iVar6 = thunk_FUN_00624570(this,CASE_0,(int)this->field_003A,(int)this->field_003C,iVar9),
       iVar6 != 0)) {
      this->field_02EE = 0;
      this->field_02AE = CASE_1;
      this->field_030F = g_playSystem_00802A38->field_00E4;
    }
  }
  return local_8;
}

