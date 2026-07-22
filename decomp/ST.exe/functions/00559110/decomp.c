
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=1; incoming_this_accesses=19;
   incoming_edx_uses=0; incoming_stack_parameter_uses=52; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
VisibleClassTy::sub_00559110
          (VisibleClassTy *this,int param_1,undefined *param_2,int param_3,uint param_4,int param_5,
          int param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined *local_c;

  iVar8 = param_5;
  uVar5 = param_4;
  bVar6 = false;
  if ((((this->field_0114 != 0) && (-1 < param_5)) && (param_4 < 8)) &&
     ((g_playSystem_00802A38 == (STPlaySystemC *)0x0 || ((byte)(&DAT_008087e9)[param_4 * 0x51] < 8))
     )) {
    if ((param_7 & 0x1000) != 0) {
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00558C00::sub_0055BBC0
                ((AnonReceiver_00558C00 *)this,0,(short)param_1,(short)param_2,(char)param_3,param_4
                 ,(char)param_5,param_6);
    }
    if (*(char *)((int)&this->field_00FC + uVar5) != '\0') {
      iVar9 = iVar8 * 2 + 1;
      param_4 = param_1 - iVar8;
      param_6 = (int)param_2 - iVar8;
      puVar7 = thunk_FUN_005532f0(iVar8);
      if (puVar7 != (undefined *)0x0) {
        iVar10 = iVar8;
        if (((this->field_0038 != (byte *)0x0) && ((param_7 & 1) != 0)) &&
           (iVar11 = 0, iVar10 = param_5, local_c = puVar7, 0 < iVar9)) {
          do {
            iVar12 = 0;
            do {
              if (local_c[iVar12] != '\0') {
                iVar1 = iVar11 + param_6;
                iVar2 = iVar12 + param_4;
                if ((((-1 < iVar2) && (iVar2 < this->field_0020)) && (-1 < iVar1)) &&
                   (iVar1 < this->field_0024)) {
                  bVar3 = this->field_0038[(this->field_0020 * iVar1 + iVar2) * 2];
                  if (bVar3 != 0) {
                    this->field_0038[(this->field_0020 * iVar1 + iVar2) * 2] = bVar3 - 1;
                  }
                }
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < iVar9);
            iVar11 = iVar11 + 1;
            local_c = local_c + iVar9;
          } while (iVar11 < iVar9);
        }
        if (((this->field_004C != (byte *)0x0) && (this->field_0050 != (ushort *)0x0)) &&
           ((param_7 & 0x4000) != 0)) {
          thunk_FUN_00558c00(this,this->field_010C,param_1,(int)param_2,(int *)&param_4,&param_6);
          param_5 = 0;
          param_4 = param_4 - iVar10;
          param_6 = param_6 + (g_centeredOffsets5[param_3] - iVar10);
          param_2 = puVar7;
          if (0 < iVar9) {
            do {
              param_7 = 0;
              do {
                if (param_2[param_7] != '\0') {
                  iVar10 = param_7 + param_4;
                  iVar11 = param_5 + param_6;
                  if (((-1 < iVar10) && (uVar5 = this->field_0030, iVar10 < (int)uVar5)) &&
                     ((-1 < iVar11 &&
                      ((iVar11 < this->field_0034 && (iVar12 = uVar5 * iVar11 + iVar10, -1 < iVar12)
                       ))))) {
                    if (this->field_0050[iVar12] == 1) {
                      thunk_FUN_00553a70(iVar10,iVar11,(int)this->field_004C,uVar5,this->field_0034)
                      ;
                      bVar6 = true;
                    }
                    uVar4 = this->field_0050[iVar12];
                    if (uVar4 != 0) {
                      this->field_0050[iVar12] = uVar4 - 1;
                    }
                  }
                }
                param_7 = param_7 + 1;
              } while ((int)param_7 < iVar9);
              param_5 = param_5 + 1;
              param_2 = param_2 + iVar9;
            } while (param_5 < iVar9);
            if (bVar6) {
              param_4 = param_4 - 1;
              iVar8 = iVar8 * 2 + 3;
              param_6 = param_6 + -1;
              param_5 = 0;
              if (0 < iVar8) {
                do {
                  param_7 = 0;
                  do {
                    iVar9 = param_7 + param_4;
                    iVar10 = param_5 + param_6;
                    if ((((-1 < iVar9) && (uVar5 = this->field_0030, iVar9 < (int)uVar5)) &&
                        (-1 < iVar10)) &&
                       (((iVar10 < this->field_0034 &&
                         (iVar11 = uVar5 * iVar10 + iVar9, -1 < iVar11)) &&
                        (this->field_0050[iVar11] != 0)))) {
                      thunk_FUN_00553990(iVar9,iVar10,(int)this->field_004C,uVar5,this->field_0034);
                    }
                    param_7 = param_7 + 1;
                  } while ((int)param_7 < iVar8);
                  param_5 = param_5 + 1;
                } while (param_5 < iVar8);
              }
            }
          }
        }
      }
    }
  }
  return;
}

