
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
  int iVar11;
  int *piVar12;
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
      puVar8 = thunk_FUN_005532f0((int)puVar9);
      if (((puVar8 != (undefined *)0x0) && (*(int *)((int)this + 0x38) != 0)) &&
         (((param_7 & 1) != 0 && (iVar11 = 0, puVar9 = param_5, local_c = puVar8, 0 < iVar5)))) {
        do {
          iVar10 = 0;
          do {
            if (local_c[iVar10] != '\0') {
              iVar1 = iVar11 + param_4;
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
          iVar11 = iVar11 + 1;
          local_c = local_c + iVar5;
        } while (iVar11 < iVar5);
      }
      if ((-1 < (int)param_3) && ((int)param_3 < 5)) {
        if ((param_7 & 0x2008) != 0) {
          iVar11 = 0;
          piVar12 = (int *)((int)this + 0x3c);
          do {
            if (*piVar12 != 0) {
              thunk_FUN_00558c00(this,iVar11,param_1,param_2,&param_6,(int *)&param_4);
              param_4 = param_4 + (&DAT_0079aed0)[(int)param_3];
              thunk_FUN_00553b00(param_6,param_4,*piVar12,*(uint *)((int)this + 0x28),
                                 *(int *)((int)this + 0x2c),param_5);
            }
            iVar11 = iVar11 + 1;
            piVar12 = piVar12 + 1;
            puVar9 = param_5;
          } while (iVar11 < 4);
        }
        if (((puVar8 != (undefined *)0x0) && (*(int *)((int)this + 0x4c) != 0)) &&
           ((*(int *)((int)this + 0x50) != 0 && ((param_7 & 0x4000) != 0)))) {
          thunk_FUN_00558c00(this,*(undefined4 *)((int)this + 0x10c),param_1,param_2,&param_6,
                             (int *)&param_4);
          param_6 = param_6 - (int)puVar9;
          param_5 = (undefined *)0x0;
          param_4 = param_4 + ((&DAT_0079aed0)[(int)param_3] - (int)puVar9);
          param_3 = puVar8;
          if (0 < iVar5) {
            do {
              param_7 = 0;
              do {
                if (param_3[param_7] != '\0') {
                  iVar11 = param_7 + param_6;
                  puVar9 = param_5 + param_4;
                  if ((((-1 < iVar11) && (uVar7 = *(uint *)((int)this + 0x30), iVar11 < (int)uVar7))
                      && (-1 < (int)puVar9)) &&
                     (((int)puVar9 < *(int *)((int)this + 0x34) &&
                      (iVar10 = uVar7 * (int)puVar9 + iVar11, -1 < iVar10)))) {
                    if (*(short *)(*(int *)((int)this + 0x50) + iVar10 * 2) == 0) {
                      thunk_FUN_00553990(iVar11,(int)puVar9,*(int *)((int)this + 0x4c),uVar7,
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

