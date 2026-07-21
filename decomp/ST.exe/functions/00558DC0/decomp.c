
/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00558DC0 -> 00558C00 @ 00558F0B | 00558DC0 -> 00558C00 @ 00558F93

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 00558DC0 -> 00558C00 @ 00558F0B | 00558DC0 -> 00558C00 @ 00558F93

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 00557C90 -> 00558DC0 @ 00557E59 | 00558840 -> 00558DC0 @ 00558A11 | 0055B7F0 ->
   00558DC0 @ 0055B921 */

void __thiscall
FUN_00558dc0(void *this,int param_1,int param_2,undefined *param_3,int *param_4,uint param_5,
            int *param_6,uint param_7)

{
  int iVar1;
  char *pcVar2;
  short *psVar3;
  int iVar4;
  char cVar5;
  undefined *puVar6;
  int iVar7;
  Global_sub_00558C00_param_1Enum GVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  undefined *local_c;

  uVar11 = param_5;
  piVar10 = param_4;
  if ((((*(int *)((int)this + 0x114) != 0) && (-1 < (int)param_5)) && (param_4 < (int *)0x8)) &&
     ((PTR_00802a38 == (STPlaySystemC *)0x0 || ((byte)(&DAT_008087e9)[(int)param_4 * 0x51] < 8)))) {
    if ((param_7 & 0x1000) != 0) {
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00558C00::sub_0055BB00
                (this,0,(short)param_1,(short)param_2,(char)param_3,(uint)param_4,(char)param_5,
                 param_6);
    }
    if (*(char *)((int)(piVar10 + 0x3f) + (int)this) != '\0') {
      iVar4 = uVar11 * 2 + 1;
      param_6 = (int *)(param_1 - uVar11);
      param_4 = (int *)(param_2 - uVar11);
      puVar6 = thunk_FUN_005532f0(uVar11);
      if (((puVar6 != (undefined *)0x0) && (*(int *)((int)this + 0x38) != 0)) &&
         (((param_7 & 1) != 0 && (iVar9 = 0, uVar11 = param_5, local_c = puVar6, 0 < iVar4)))) {
        do {
          iVar7 = 0;
          do {
            if (local_c[iVar7] != '\0') {
              iVar12 = iVar9 + (int)param_4;
              iVar1 = iVar7 + (int)param_6;
              if ((((-1 < iVar1) && (iVar1 < *(int *)((int)this + 0x20))) && (-1 < iVar12)) &&
                 (iVar12 < *(int *)((int)this + 0x24))) {
                pcVar2 = (char *)(*(int *)((int)this + 0x38) +
                                 (*(int *)((int)this + 0x20) * iVar12 + iVar1) * 2);
                cVar5 = *pcVar2;
                if (cVar5 != -1) {
                  *pcVar2 = cVar5 + '\x01';
                }
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar4);
          iVar9 = iVar9 + 1;
          local_c = local_c + iVar4;
        } while (iVar9 < iVar4);
      }
      if ((-1 < (int)param_3) && ((int)param_3 < 5)) {
        if ((param_7 & 0x2008) != 0) {
          GVar8 = CASE_0;
          piVar10 = (int *)((int)this + 0x3c);
          do {
            if (*piVar10 != 0) {
              thunk_FUN_00558c00(this,GVar8,param_1,param_2,(int *)&param_6,(int *)&param_4);
              param_4 = (int *)((int)param_4 + (&DAT_0079aed0)[(int)param_3]);
              thunk_FUN_00553b00((int)param_6,(int)param_4,*piVar10,*(uint *)((int)this + 0x28),
                                 *(int *)((int)this + 0x2c),(undefined *)param_5);
            }
            GVar8 = GVar8 + CASE_1;
            piVar10 = piVar10 + 1;
            uVar11 = param_5;
          } while ((int)GVar8 < 4);
        }
        if (((puVar6 != (undefined *)0x0) && (*(int *)((int)this + 0x4c) != 0)) &&
           ((*(int *)((int)this + 0x50) != 0 && ((param_7 & 0x4000) != 0)))) {
          thunk_FUN_00558c00(this,*(Global_sub_00558C00_param_1Enum *)((int)this + 0x10c),param_1,
                             param_2,(int *)&param_6,(int *)&param_4);
          param_6 = (int *)((int)param_6 - uVar11);
          param_5 = 0;
          param_4 = (int *)((int)param_4 + ((&DAT_0079aed0)[(int)param_3] - uVar11));
          param_3 = puVar6;
          if (0 < iVar4) {
            do {
              param_7 = 0;
              do {
                if (param_3[param_7] != '\0') {
                  iVar9 = param_7 + (int)param_6;
                  iVar7 = param_5 + (int)param_4;
                  if ((((-1 < iVar9) && (uVar11 = *(uint *)((int)this + 0x30), iVar9 < (int)uVar11))
                      && (-1 < iVar7)) &&
                     ((iVar7 < *(int *)((int)this + 0x34) &&
                      (iVar12 = uVar11 * iVar7 + iVar9, -1 < iVar12)))) {
                    if (*(short *)(*(int *)((int)this + 0x50) + iVar12 * 2) == 0) {
                      thunk_FUN_00553990(iVar9,iVar7,*(int *)((int)this + 0x4c),uVar11,
                                         *(int *)((int)this + 0x34));
                    }
                    psVar3 = (short *)(*(int *)((int)this + 0x50) + iVar12 * 2);
                    *psVar3 = *psVar3 + 1;
                  }
                }
                param_7 = param_7 + 1;
              } while ((int)param_7 < iVar4);
              param_5 = param_5 + 1;
              param_3 = param_3 + iVar4;
            } while ((int)param_5 < iVar4);
          }
        }
      }
    }
  }
  return;
}

