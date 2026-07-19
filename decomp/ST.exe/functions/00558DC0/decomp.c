
void __thiscall
FUN_00558dc0(void *this,int param_1,int param_2,undefined *param_3,uint param_4,undefined *param_5,
            int param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  short *psVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  Global_sub_00558C00_param_1Enum GVar11;
  int iVar12;
  int *piVar13;
  undefined *local_c;
  
  puVar9 = param_5;
  uVar7 = param_4;
  if ((((*(int *)((int)this + 0x114) != 0) && (-1 < (int)param_5)) && (param_4 < 8)) &&
     ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[param_4 * 0x51] < 8)))) {
    if ((param_7 & 0x1000) != 0) {
      thunk_FUN_0055bb00(this,0,(short)param_1,(short)param_2,(char)param_3,param_4,(char)param_5,
                         param_6);
    }
    if (*(char *)(uVar7 + 0xfc + (int)this) != '\0') {
      iVar5 = (int)puVar9 * 2 + 1;
      param_6 = param_1 - (int)puVar9;
      param_4 = param_2 - (int)puVar9;
      puVar8 = thunk_FUN_005532f0((Global_sub_005532F0_param_1Enum)puVar9);
      if (((puVar8 != (undefined *)0x0) && (*(int *)((int)this + 0x38) != 0)) &&
         (((param_7 & 1) != 0 && (iVar12 = 0, puVar9 = param_5, local_c = puVar8, 0 < iVar5)))) {
        do {
          iVar10 = 0;
          do {
            if (local_c[iVar10] != '\0') {
              iVar1 = iVar12 + param_4;
              iVar2 = iVar10 + param_6;
              if ((((-1 < iVar2) && (iVar2 < *(int *)((int)this + 0x20))) && (-1 < iVar1)) &&
                 (iVar1 < *(int *)((int)this + 0x24))) {
                pcVar3 = (char *)(*(int *)((int)this + 0x38) +
                                 (*(int *)((int)this + 0x20) * iVar1 + iVar2) * 2);
                cVar6 = *pcVar3;
                if (cVar6 != -1) {
                  *pcVar3 = cVar6 + '\x01';
                }
              }
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar5);
          iVar12 = iVar12 + 1;
          local_c = local_c + iVar5;
        } while (iVar12 < iVar5);
      }
      if ((-1 < (int)param_3) && ((int)param_3 < 5)) {
        if ((param_7 & 0x2008) != 0) {
          GVar11 = CASE_0;
          piVar13 = (int *)((int)this + 0x3c);
          do {
            if (*piVar13 != 0) {
              thunk_FUN_00558c00(this,GVar11,param_1,param_2,&param_6,(int *)&param_4);
              param_4 = param_4 + (&DAT_0079aed0)[(int)param_3];
              thunk_FUN_00553b00(param_6,param_4,*piVar13,*(uint *)((int)this + 0x28),
                                 *(int *)((int)this + 0x2c),param_5);
            }
            GVar11 = GVar11 + CASE_1;
            piVar13 = piVar13 + 1;
            puVar9 = param_5;
          } while ((int)GVar11 < 4);
        }
        if (((puVar8 != (undefined *)0x0) && (*(int *)((int)this + 0x4c) != 0)) &&
           ((*(int *)((int)this + 0x50) != 0 && ((param_7 & 0x4000) != 0)))) {
          thunk_FUN_00558c00(this,*(Global_sub_00558C00_param_1Enum *)((int)this + 0x10c),param_1,
                             param_2,&param_6,(int *)&param_4);
          param_6 = param_6 - (int)puVar9;
          param_5 = (undefined *)0x0;
          param_4 = param_4 + ((&DAT_0079aed0)[(int)param_3] - (int)puVar9);
          param_3 = puVar8;
          if (0 < iVar5) {
            do {
              param_7 = 0;
              do {
                if (param_3[param_7] != '\0') {
                  iVar12 = param_7 + param_6;
                  puVar9 = param_5 + param_4;
                  if ((((-1 < iVar12) && (uVar7 = *(uint *)((int)this + 0x30), iVar12 < (int)uVar7))
                      && (-1 < (int)puVar9)) &&
                     (((int)puVar9 < *(int *)((int)this + 0x34) &&
                      (iVar10 = uVar7 * (int)puVar9 + iVar12, -1 < iVar10)))) {
                    if (*(short *)(*(int *)((int)this + 0x50) + iVar10 * 2) == 0) {
                      thunk_FUN_00553990(iVar12,(int)puVar9,*(int *)((int)this + 0x4c),uVar7,
                                         *(int *)((int)this + 0x34));
                    }
                    psVar4 = (short *)(*(int *)((int)this + 0x50) + iVar10 * 2);
                    *psVar4 = *psVar4 + 1;
                  }
                }
                param_7 = param_7 + 1;
              } while ((int)param_7 < iVar5);
              param_5 = param_5 + 1;
              param_3 = param_3 + iVar5;
            } while ((int)param_5 < iVar5);
          }
        }
      }
    }
  }
  return;
}

