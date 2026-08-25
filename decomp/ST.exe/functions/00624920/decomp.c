#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00624920_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3

   [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=32; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_sub_00624920_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3

   [STSwitchEnumApplier] Switch target field_02AE uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_02AEState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5 */

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
  int iVar12;
  undefined *puVar13;
  short sVar14;
  undefined4 local_8;
  byte SVar1;

  local_8 = 0;
  switch(param_1) {
  case CASE_0:
    *param_2 = this->field_02C2;
    *param_3 = this->field_02C6;
    *param_4 = this->field_02CA;
    if (g_playSystem_00802A38->field_00E4 < (uint)this->field_030F) {
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
    iVar8 = thunk_FUN_00624570(this,CASE_1,this->field_02C2,this->field_02C6,this->field_02CA);
    if (iVar8 != 0) {
      sVar14 = (short)this->field_02CA;
      this->field_0036 = sVar14;
      this->field_0038 = sVar14;
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
      iVar8 = this->field_02CA;
    }
    else {
      iVar11 = this->field_02F2;
      iVar8 = (g_playSystem_00802A38->field_00E4 - this->field_030F) * (uint)(byte)this->field_0062
              * this->field_0302;
      iVar8 = ((int)(iVar8 + (iVar8 >> 0x1f & 0xfU)) >> 4) + (int)this->field_0038;
      if (this->field_0302 < 1) {
        if (iVar8 < iVar11 - *(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4)) {
          *param_2 = this->field_02C2;
          *param_3 = this->field_02C6;
          *param_4 = (iVar11 - *(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4)) + 1;
          thunk_FUN_00624570(this,CASE_1,this->field_02C2,this->field_02C6,
                             *(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4) + iVar11);
          this->field_02AE = CASE_1;
          return 1;
        }
      }
      else if (*(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4) + iVar11 < iVar8) {
        *param_2 = this->field_02C2;
        *param_3 = this->field_02C6;
        *param_4 = *(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4) + -1 + iVar11;
        iVar8 = thunk_FUN_00624570(this,CASE_1,this->field_02C2,this->field_02C6,
                                   iVar11 - *(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4));
        if (iVar8 != 0) {
          this->field_02EE = 1;
          this->field_02AE = CASE_1;
        }
        return 1;
      }
      *param_2 = this->field_02C2;
      *param_3 = this->field_02C6;
    }
    *param_4 = iVar8;
    return 1;
  case CASE_2:
    iVar10 = g_playSystem_00802A38->field_00E4 - this->field_030F;
    iVar12 = this->field_0306 * iVar10;
    iVar11 = (this->field_02FA * iVar12) / 10000 + (int)this->field_0034;
    iVar7 = (this->field_02FE * iVar12) / 10000 + (int)this->field_0036;
    iVar9 = (this->field_0302 * iVar12) / 10000 + (int)this->field_0038;
    iVar8 = thunk_FUN_00627670(this);
    if ((1 < iVar10) &&
       (uVar5 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                          ((AnonReceiver_00601500 *)&this->field_0x231,iVar11,iVar7,iVar9,
                           (int)this->field_0054,(int)this->field_0056,(int)this->field_0058,
                           this->field_0262,iVar8,this->field_0018,0xffff,
                           *(int *)(&DAT_007d04d0 + (uint)this->field_02AD * 4),0,1), 0 < (int)uVar5
       )) {
      thunk_FUN_00627390(this);
      return 0;
    }
    *param_2 = iVar11;
    *param_3 = iVar7;
    local_8 = 1;
    *param_4 = iVar9;
    if (this->field_02F6 <= iVar12) {
      sVar14 = this->field_003A;
      sVar3 = this->field_003C;
      sVar4 = this->field_003E;
      *param_2 = (int)sVar14;
      *param_3 = (int)sVar3;
      *param_4 = (int)sVar4;
      iVar8 = thunk_FUN_00624570(this,CASE_0,(int)sVar14,(int)sVar3,(int)sVar4);
      if (iVar8 != 0) {
        this->field_02EE = 0;
        this->field_02AE = CASE_1;
        this->field_030F = g_playSystem_00802A38->field_00E4;
        return 1;
      }
    }
    break;
  case CASE_3:
    iVar8 = (g_playSystem_00802A38->field_00E4 - this->field_030F) * this->field_0306;
    iVar11 = this->field_0302 * iVar8 + (int)this->field_0038;
    sVar14 = (short)(iVar11 >> 0x1f);
    if (iVar11 < 0) {
      puVar13 = (undefined *)
                ((short)(((short)(iVar11 / 200) + sVar14) -
                        (short)((longlong)iVar11 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      puVar13 = (undefined *)
                (short)(((short)(iVar11 / 200) + sVar14) -
                            (short)((longlong)iVar11 * 0x51eb851f >> 0x3f));
    }
    if (puVar13 != (undefined *)(int)this->field_004B) {
      sVar14 = (short)puVar13;
      iVar6 = thunk_FUN_004961b0(this->field_0047,this->field_0049,sVar14);
      if (iVar6 != 0) {
        sVar3 = this->field_0047;
        sVar4 = this->field_0049;
        if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) || (sVar4 < 0)) ||
            ((g_worldGrid.sizeY <= sVar4 || (sVar14 < 0)))) ||
           ((g_worldGrid.sizeZ <= sVar14 ||
            (STGridAt3D(g_worldGrid, sVar3, sVar4, sVar14).objects[(byte)this->field_008E] == nullptr)))) {
          iVar7 = thunk_FUN_00495ff0(sVar3,sVar4,this->field_004B,this->field_008E,
                                     (AnonShape_00495FF0_59081BDD *)this);
          if (iVar7 == 0) {
            this->field_0314 = this->field_0314 + -1;
          }
          sVar3 = this->field_0047;
          sVar4 = this->field_0049;
          if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
               ((sVar4 < 0 ||
                (((g_worldGrid.sizeY <= sVar4 || (sVar14 < 0)) || (g_worldGrid.sizeZ <= sVar14))))))
              || (STGridAt3D(g_worldGrid, sVar3, sVar4, sVar14).objects[(byte)this->field_008E] == nullptr)) &&
             /* ST_CALLSITE[00624F03]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
             (iVar7 = DumpClassC::WritePtr
                                (sVar3,sVar4,sVar14,this->field_008E,
                                 (RecoveredRecord_DumpClassC_00495EC0 *)this), iVar7 == 0)) {
            SVar1 = this->field_02AD;
            this->field_0314 = this->field_0314 + '\x01';
            if (SVar1 < 3) {
              if (g_visibleClass_00802A88 != nullptr) {
                /* ST_CALLSITE[0062502B]: CALL 0x004018f2; direct=004018F2 VisibleClassTy::sub_00559110 */
                VisibleClassTy::sub_00559110
                          (g_visibleClass_00802A88,(int)this->field_0047,
                           (undefined *)(int)this->field_0049,(int)this->field_004B,this->field_0024
                           ,*(int *)(&DAT_007d02b4 + (uint)SVar1 * 4),this->field_0018,0xffffffff);
                /* ST_CALLSITE[0062505B]: CALL 0x0040388c; direct=0040388C VisibleClassTy::sub_00558DC0 */
                VisibleClassTy::sub_00558DC0
                          (g_visibleClass_00802A88,(int)this->field_0047,(int)this->field_0049,
                           puVar13,(int *)this->field_0024,
                           *(uint *)(&DAT_007d02b4 + (uint)this->field_02AD * 4),
                           (int *)this->field_0018,0xffffffff);
              }
            }
            else if ((SVar1 == 3) && (g_visibleClass_00802A88 != nullptr)) {
              /* ST_CALLSITE[00624F62]: CALL 0x004018f2; direct=004018F2 VisibleClassTy::sub_00559110 */
              VisibleClassTy::sub_00559110
                        (g_visibleClass_00802A88,(int)this->field_0047,
                         (undefined *)(int)this->field_0049,(int)this->field_004B,this->field_0024,
                         DAT_007d02c0,this->field_0018,0xffffffff);
              /* ST_CALLSITE[00624F94]: CALL 0x00404291; direct=00404291 VisibleClassTy::sub_00559D60 */
              VisibleClassTy::sub_00559D60
                        (g_visibleClass_00802A88,(int)this->field_0047,(int)this->field_0049,
                         (char)this->field_004B,this->field_0024,
                         *(int *)(&DAT_007d02b4 + (uint)this->field_02AD * 4),this->field_0018);
              /* ST_CALLSITE[00624FC4]: CALL 0x0040388c; direct=0040388C VisibleClassTy::sub_00558DC0 */
              VisibleClassTy::sub_00558DC0
                        (g_visibleClass_00802A88,(int)this->field_0047,(int)this->field_0049,puVar13
                         ,(int *)this->field_0024,
                         *(uint *)(&DAT_007d02b4 + (uint)this->field_02AD * 4),
                         (int *)this->field_0018,0xffffffff);
              /* ST_CALLSITE[00624FF4]: CALL 0x0040141f; direct=0040141F VisibleClassTy::SetZoneAst */
              VisibleClassTy::SetZoneAst
                        (g_visibleClass_00802A88,(int)this->field_0047,(int)this->field_0049,
                         (char)puVar13,this->field_0024,
                         *(int *)(&DAT_007d02b4 + (uint)this->field_02AD * 4),this->field_0018,
                         0xffffffff);
            }
            this->field_004B = sVar14;
            goto LAB_00625067;
          }
        }
      }
      iVar7 = thunk_FUN_00624570(this,CASE_2,(int)this->field_003A,(int)this->field_003C,
                                 (short)(this->field_004B * 200 + 100) + -0x32);
      if (iVar7 != 0) {
        this->field_02EE = 2;
        this->field_02AE = CASE_1;
        this->field_030F = g_playSystem_00802A38->field_00E4;
        *param_2 = (int)this->field_003A;
        *param_3 = (int)this->field_003C;
        *param_4 = iVar11;
        return 1;
      }
    }
LAB_00625067:
    local_8 = 1;
    *param_2 = (int)this->field_003A;
    *param_3 = (int)this->field_003C;
    *param_4 = iVar11;
    if ((this->field_02F6 <= iVar8) &&
       (iVar8 = thunk_FUN_00624570(this,CASE_0,(int)this->field_003A,(int)this->field_003C,iVar11),
       iVar8 != 0)) {
      this->field_02EE = 0;
      this->field_02AE = CASE_1;
      this->field_030F = g_playSystem_00802A38->field_00E4;
    }
  }
  return local_8;
}

