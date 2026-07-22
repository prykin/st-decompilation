
/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00558DC0 -> 00558C00 @ 00558F0B | 00558DC0 -> 00558C00 @ 00558F93

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 00558DC0 -> 00558C00 @ 00558F0B | 00558DC0 -> 00558C00 @ 00558F93

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 00557C90 -> 00558DC0 @ 00557E59 | 00558840 -> 00558DC0 @ 00558A11 | 0055B7F0 ->
   00558DC0 @ 0055B921

   [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=4; incoming_this_accesses=18;
   incoming_edx_uses=0; incoming_stack_parameter_uses=50; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=4; owner_evidence_coverage=adequate */

void __thiscall
VisibleClassTy::sub_00558DC0
          (VisibleClassTy *this,int param_1,int param_2,undefined *param_3,int *param_4,uint param_5
          ,int *param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  Global_sub_00558C00_param_1Enum GVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined *local_c;

  uVar9 = param_5;
  piVar8 = param_4;
  if ((((this->field_0114 != 0) && (-1 < (int)param_5)) && (param_4 < (int *)0x8)) &&
     ((g_playSystem_00802A38 == (STPlaySystemC *)0x0 ||
      ((byte)(&DAT_008087e9)[(int)param_4 * 0x51] < 8)))) {
    if ((param_7 & 0x1000) != 0) {
      sub_0055BB00(this,0,(short)param_1,(short)param_2,(char)param_3,(uint)param_4,(char)param_5,
                   param_6);
    }
    if (*(char *)((int)(piVar8 + 0x3f) + (int)this) != '\0') {
      iVar2 = uVar9 * 2 + 1;
      param_6 = (int *)(param_1 - uVar9);
      param_4 = (int *)(param_2 - uVar9);
      puVar4 = thunk_FUN_005532f0(uVar9);
      if (((puVar4 != (undefined *)0x0) && (this->field_0038 != (byte *)0x0)) &&
         (((param_7 & 1) != 0 && (iVar7 = 0, uVar9 = param_5, local_c = puVar4, 0 < iVar2)))) {
        do {
          iVar5 = 0;
          do {
            if (local_c[iVar5] != '\0') {
              iVar10 = iVar7 + (int)param_4;
              iVar1 = iVar5 + (int)param_6;
              if ((((-1 < iVar1) && (iVar1 < this->field_0020)) && (-1 < iVar10)) &&
                 (iVar10 < this->field_0024)) {
                bVar3 = this->field_0038[(this->field_0020 * iVar10 + iVar1) * 2];
                if (bVar3 != 0xff) {
                  this->field_0038[(this->field_0020 * iVar10 + iVar1) * 2] = bVar3 + 1;
                }
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar2);
          iVar7 = iVar7 + 1;
          local_c = local_c + iVar2;
        } while (iVar7 < iVar2);
      }
      if ((-1 < (int)param_3) && ((int)param_3 < 5)) {
        if ((param_7 & 0x2008) != 0) {
          GVar6 = CASE_0;
          piVar8 = &this->field_003C;
          do {
            if (*piVar8 != 0) {
              thunk_FUN_00558c00(this,GVar6,param_1,param_2,(int *)&param_6,(int *)&param_4);
              param_4 = (int *)((int)param_4 + g_centeredOffsets5[(int)param_3]);
              thunk_FUN_00553b00((int)param_6,(int)param_4,*piVar8,this->field_0028,this->field_002C
                                 ,(undefined *)param_5);
            }
            GVar6 = GVar6 + CASE_1;
            piVar8 = piVar8 + 1;
            uVar9 = param_5;
          } while ((int)GVar6 < 4);
        }
        if (((puVar4 != (undefined *)0x0) && (this->field_004C != (byte *)0x0)) &&
           ((this->field_0050 != (ushort *)0x0 && ((param_7 & 0x4000) != 0)))) {
          thunk_FUN_00558c00(this,this->field_010C,param_1,param_2,(int *)&param_6,(int *)&param_4);
          param_6 = (int *)((int)param_6 - uVar9);
          param_5 = 0;
          param_4 = (int *)((int)param_4 + (g_centeredOffsets5[(int)param_3] - uVar9));
          param_3 = puVar4;
          if (0 < iVar2) {
            do {
              param_7 = 0;
              do {
                if (param_3[param_7] != '\0') {
                  iVar7 = param_7 + (int)param_6;
                  iVar5 = param_5 + (int)param_4;
                  if ((((-1 < iVar7) && (uVar9 = this->field_0030, iVar7 < (int)uVar9)) &&
                      (-1 < iVar5)) &&
                     ((iVar5 < this->field_0034 && (iVar10 = uVar9 * iVar5 + iVar7, -1 < iVar10))))
                  {
                    if (this->field_0050[iVar10] == 0) {
                      thunk_FUN_00553990(iVar7,iVar5,(int)this->field_004C,uVar9,this->field_0034);
                    }
                    this->field_0050[iVar10] = this->field_0050[iVar10] + 1;
                  }
                }
                param_7 = param_7 + 1;
              } while ((int)param_7 < iVar2);
              param_5 = param_5 + 1;
              param_3 = param_3 + iVar2;
            } while ((int)param_5 < iVar2);
          }
        }
      }
    }
  }
  return;
}

