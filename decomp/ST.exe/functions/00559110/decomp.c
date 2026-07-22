
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
  char *pcVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined *local_c;

  iVar9 = param_5;
  uVar6 = param_4;
  bVar7 = false;
  if ((((this->field_0114 != 0) && (-1 < param_5)) && (param_4 < 8)) &&
     ((g_playSystem_00802A38 == (STPlaySystemC *)0x0 || ((byte)(&DAT_008087e9)[param_4 * 0x51] < 8))
     )) {
    if ((param_7 & 0x1000) != 0) {
      sub_0055BBC0(this,0,(short)param_1,(short)param_2,(char)param_3,param_4,(char)param_5,param_6)
      ;
    }
    if (*(char *)((int)&this->field_00FC + uVar6) != '\0') {
      iVar10 = iVar9 * 2 + 1;
      param_4 = param_1 - iVar9;
      param_6 = (int)param_2 - iVar9;
      puVar8 = thunk_FUN_005532f0(iVar9);
      if (puVar8 != (undefined *)0x0) {
        iVar11 = iVar9;
        if (((this->field_0038 != (void *)0x0) && ((param_7 & 1) != 0)) &&
           (iVar12 = 0, iVar11 = param_5, local_c = puVar8, 0 < iVar10)) {
          do {
            iVar13 = 0;
            do {
              if (local_c[iVar13] != '\0') {
                iVar1 = iVar12 + param_6;
                iVar2 = iVar13 + param_4;
                if ((((-1 < iVar2) && (iVar2 < this->field_0020)) && (-1 < iVar1)) &&
                   (iVar1 < this->field_0024)) {
                  pcVar3 = (char *)((int)this->field_0038 + (this->field_0020 * iVar1 + iVar2) * 2);
                  cVar4 = *pcVar3;
                  if (cVar4 != '\0') {
                    *pcVar3 = cVar4 + -1;
                  }
                }
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < iVar10);
            iVar12 = iVar12 + 1;
            local_c = local_c + iVar10;
          } while (iVar12 < iVar10);
        }
        if (((this->field_004C != (byte *)0x0) && (this->field_0050 != (ushort *)0x0)) &&
           ((param_7 & 0x4000) != 0)) {
          sub_00558C00(this,this->field_010C,param_1,(int)param_2,(int *)&param_4,&param_6);
          param_5 = 0;
          param_4 = param_4 - iVar11;
          param_6 = param_6 + (g_centeredOffsets5[param_3] - iVar11);
          param_2 = puVar8;
          if (0 < iVar10) {
            do {
              param_7 = 0;
              do {
                if (param_2[param_7] != '\0') {
                  iVar11 = param_7 + param_4;
                  iVar12 = param_5 + param_6;
                  if (((-1 < iVar11) && (uVar6 = this->field_0030, iVar11 < (int)uVar6)) &&
                     ((-1 < iVar12 &&
                      ((iVar12 < this->field_0034 && (iVar13 = uVar6 * iVar12 + iVar11, -1 < iVar13)
                       ))))) {
                    if (this->field_0050[iVar13] == 1) {
                      thunk_FUN_00553a70(iVar11,iVar12,(int)this->field_004C,uVar6,this->field_0034)
                      ;
                      bVar7 = true;
                    }
                    uVar5 = this->field_0050[iVar13];
                    if (uVar5 != 0) {
                      this->field_0050[iVar13] = uVar5 - 1;
                    }
                  }
                }
                param_7 = param_7 + 1;
              } while ((int)param_7 < iVar10);
              param_5 = param_5 + 1;
              param_2 = param_2 + iVar10;
            } while (param_5 < iVar10);
            if (bVar7) {
              param_4 = param_4 - 1;
              iVar9 = iVar9 * 2 + 3;
              param_6 = param_6 + -1;
              param_5 = 0;
              if (0 < iVar9) {
                do {
                  param_7 = 0;
                  do {
                    iVar10 = param_7 + param_4;
                    iVar11 = param_5 + param_6;
                    if ((((-1 < iVar10) && (uVar6 = this->field_0030, iVar10 < (int)uVar6)) &&
                        (-1 < iVar11)) &&
                       (((iVar11 < this->field_0034 &&
                         (iVar12 = uVar6 * iVar11 + iVar10, -1 < iVar12)) &&
                        (this->field_0050[iVar12] != 0)))) {
                      thunk_FUN_00553990(iVar10,iVar11,(int)this->field_004C,uVar6,this->field_0034)
                      ;
                    }
                    param_7 = param_7 + 1;
                  } while ((int)param_7 < iVar9);
                  param_5 = param_5 + 1;
                } while (param_5 < iVar9);
              }
            }
          }
        }
      }
    }
  }
  return;
}

