
int __fastcall FUN_004761b0(int *param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  code *pcVar5;
  int iVar6;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar8;
  int *piVar7;
  undefined2 uVar9;
  undefined4 uVar10;
  
  if ((param_3 == 0) || (param_3 == 1)) {
    piVar7 = param_1 + 0xb3;
    for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar7 = 0;
      piVar7 = piVar7 + 1;
    }
    param_1[0xb1] = 0;
    if (*(int *)((int)param_1 + 0x7be) < 1) {
      return 0;
    }
    sVar1 = (short)param_1[0xf6];
    uVar4 = *(ushort *)((int)param_1 + 0x3da);
    sVar2 = (short)param_1[0xf7];
    *(short *)((int)param_1 + 0x5e2) = sVar1;
    *(short *)(param_1 + 0x177) = sVar1;
    *(ushort *)(param_1 + 0x179) = uVar4;
    *(ushort *)((int)param_1 + 0x5de) = uVar4;
    *(short *)((int)param_1 + 0x5e6) = sVar2;
    *(short *)(param_1 + 0x178) = sVar2;
    if (((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) || ((short)uVar4 < 0)) ||
        (((DAT_007fb242 <= (short)uVar4 || (sVar2 < 0)) ||
         ((DAT_007fb244 <= sVar2 ||
          (*(short *)(DAT_007fb280 +
                     ((int)DAT_007fb278 * (int)(short)uVar4 + (int)DAT_007fb27e * (int)sVar2 +
                     (int)sVar1) * 2) != 0)))))) ||
       (((-1 < sVar1 && (sVar1 < DAT_007fb240)) &&
        ((-1 < (short)uVar4 &&
         ((((((short)uVar4 < DAT_007fb242 && (-1 < sVar2)) && (sVar2 < DAT_007fb244)) &&
           (iVar6 = *(int *)(DAT_007fb248 + 4 +
                            ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)(short)uVar4
                            + (int)sVar1) * 8), iVar6 != 0)) &&
          ((iVar6 = *(int *)(iVar6 + 0x20), iVar6 == 0x5a || (iVar6 == 0x1ae)))))))))) {
      uVar9 = (undefined2)((uint)((int)param_1 + 0x5e2) >> 0x10);
      iVar6 = thunk_FUN_0048dfd0(CONCAT22((short)((uint)*(int *)((int)param_1 + 0x7be) >> 0x10),
                                          sVar1),(uint)uVar4,
                                 CONCAT22((short)((uint)param_2 >> 0x10),sVar2),
                                 CONCAT22(uVar9,*(undefined2 *)((int)param_1 + 0x47)),
                                 CONCAT22(uVar9,*(undefined2 *)((int)param_1 + 0x49)),
                                 (int *)CONCAT22(uVar9,*(undefined2 *)((int)param_1 + 0x4b)),1,
                                 (short *)((int)param_1 + 0x5e2),(short *)(param_1 + 0x179),
                                 (short *)((int)param_1 + 0x5e6));
      if (iVar6 == 0) {
        return 0;
      }
    }
    param_1[0x17a] = 0;
    thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x5e2),(int)(short)param_1[0x179],
                       (int)*(short *)((int)param_1 + 0x5e6));
    iVar6 = thunk_FUN_00460260(param_1,0);
    return (-(uint)(iVar6 != -1) & 3) - 1;
  }
  if (param_1[0x17a] == 0) {
    iVar6 = thunk_FUN_00460260(param_1,2);
    uVar9 = (undefined2)((uint)(iVar6 + 1) >> 0x10);
    switch(iVar6 + 1) {
    case 0:
      iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x311d,0,0,&DAT_007a4ccc);
      if (iVar6 != 0) {
        pcVar5 = (code *)swi(3);
        iVar6 = (*pcVar5)();
        return iVar6;
      }
      return 0xffff;
    case 1:
      param_1[0x17a] = 1;
      return 2;
    case 2:
      sVar1 = *(short *)((int)param_1 + 0x5e2);
      sVar2 = (short)param_1[0x179];
      sVar3 = *(short *)((int)param_1 + 0x5e6);
      *(short *)(param_1 + 0x177) = sVar1;
      *(short *)((int)param_1 + 0x5de) = sVar2;
      *(short *)(param_1 + 0x178) = sVar3;
      if (((((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) || (sVar2 < 0)) ||
            ((DAT_007fb242 <= sVar2 || (sVar3 < 0)))) || (DAT_007fb244 <= sVar3)) ||
          (*(short *)(DAT_007fb280 +
                     ((int)DAT_007fb278 * (int)sVar2 + (int)DAT_007fb27e * (int)sVar3 + (int)sVar1)
                     * 2) != 0)) ||
         ((((-1 < sVar1 && (sVar1 < DAT_007fb240)) &&
           ((-1 < sVar2 && (((sVar2 < DAT_007fb242 && (-1 < sVar3)) && (sVar3 < DAT_007fb244))))))
          && ((iVar6 = *(int *)(DAT_007fb248 + 4 +
                               ((int)DAT_007fb246 * (int)sVar3 + (int)DAT_007fb240 * (int)sVar2 +
                               (int)sVar1) * 8), iVar6 != 0 &&
              ((iVar6 = *(int *)(iVar6 + 0x20), iVar6 == 0x5a || (iVar6 == 0x1ae)))))))) {
        uVar8 = (undefined2)((uint)((int)param_1 + 0x5e2) >> 0x10);
        iVar6 = thunk_FUN_0048dfd0(CONCAT22(uVar9,sVar1),CONCAT22(extraout_var,sVar2),
                                   CONCAT22(extraout_var_00,sVar3),
                                   CONCAT22(uVar8,*(undefined2 *)((int)param_1 + 0x47)),
                                   CONCAT22(uVar8,*(undefined2 *)((int)param_1 + 0x49)),
                                   (int *)CONCAT22(uVar8,*(undefined2 *)((int)param_1 + 0x4b)),1,
                                   (short *)((int)param_1 + 0x5e2),(short *)(param_1 + 0x179),
                                   (short *)((int)param_1 + 0x5e6));
        if (iVar6 == 0) {
          return 0;
        }
      }
      thunk_FUN_004602b0(param_1);
      break;
    default:
      goto switchD_004761eb_caseD_3;
    case 4:
      sVar1 = *(short *)((int)param_1 + 0x5e2);
      sVar2 = (short)param_1[0x179];
      sVar3 = *(short *)((int)param_1 + 0x5e6);
      *(short *)(param_1 + 0x177) = sVar1;
      *(short *)((int)param_1 + 0x5de) = sVar2;
      *(short *)(param_1 + 0x178) = sVar3;
      if ((((((-1 < sVar1) && (sVar1 < DAT_007fb240)) &&
            ((-1 < sVar2 && (((sVar2 < DAT_007fb242 && (-1 < sVar3)) && (sVar3 < DAT_007fb244))))))
           && (*(int *)(DAT_007fb248 +
                       ((int)DAT_007fb246 * (int)sVar3 + (int)DAT_007fb240 * (int)sVar2 + (int)sVar1
                       ) * 8) != 0)) || ((sVar1 < 0 || (DAT_007fb240 <= sVar1)))) ||
         ((((sVar2 < 0 || ((DAT_007fb242 <= sVar2 || (sVar3 < 0)))) ||
           ((DAT_007fb244 <= sVar3 ||
            (*(short *)(DAT_007fb280 +
                       ((int)DAT_007fb278 * (int)sVar2 + (int)DAT_007fb27e * (int)sVar3 + (int)sVar1
                       ) * 2) != 0)))) ||
          (((((-1 < sVar1 && (sVar1 < DAT_007fb240)) && (-1 < sVar2)) &&
            (((sVar2 < DAT_007fb242 && (-1 < sVar3)) &&
             ((sVar3 < DAT_007fb244 &&
              (iVar6 = *(int *)(DAT_007fb248 + 4 +
                               ((int)DAT_007fb246 * (int)sVar3 + (int)DAT_007fb240 * (int)sVar2 +
                               (int)sVar1) * 8), iVar6 != 0)))))) &&
           ((iVar6 = *(int *)(iVar6 + 0x20), iVar6 == 0x5a || (iVar6 == 0x1ae)))))))) {
        uVar8 = (undefined2)((uint)((int)param_1 + 0x5e2) >> 0x10);
        iVar6 = thunk_FUN_0048dfd0(CONCAT22(uVar9,sVar1),CONCAT22(extraout_var,sVar2),
                                   CONCAT22(extraout_var_00,sVar3),
                                   CONCAT22(uVar8,*(undefined2 *)((int)param_1 + 0x47)),
                                   CONCAT22(uVar8,*(undefined2 *)((int)param_1 + 0x49)),
                                   (int *)CONCAT22(uVar8,*(undefined2 *)((int)param_1 + 0x4b)),1,
                                   (short *)((int)param_1 + 0x5e2),(short *)(param_1 + 0x179),
                                   (short *)((int)param_1 + 0x5e6));
        if (iVar6 == 0) {
          return 0;
        }
      }
    }
    thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x5e2),(int)(short)param_1[0x179],
                       (int)*(short *)((int)param_1 + 0x5e6));
    thunk_FUN_00460260(param_1,0);
switchD_004761eb_caseD_3:
    return 2;
  }
  if (param_1[0x17a] != 1) goto LAB_00476633;
  iVar6 = *(int *)((int)param_1 + 0x6f7);
  if (iVar6 == 5) {
    iVar6 = *param_1;
    uVar10 = 0xe6;
LAB_004765df:
    (**(code **)(iVar6 + 0x90))(3,uVar10);
  }
  else if (iVar6 == 0x11) {
    (**(code **)(*param_1 + 0x90))(3,0x14a);
  }
  else if (iVar6 == 0x21) {
    iVar6 = *param_1;
    uVar10 = 0x1cb;
    goto LAB_004765df;
  }
  thunk_FUN_00627850(*(undefined4 *)((int)param_1 + 0x7b6),param_1[9],param_1[6],
                     (uint)*(ushort *)((int)param_1 + 0x32),(int)*(short *)((int)param_1 + 0x41),
                     (int)*(short *)((int)param_1 + 0x43),*(short *)((int)param_1 + 0x45) + -10,
                     *(undefined4 *)((int)param_1 + 0x6f3),(char *)0x0,0xffffffff);
  *(int *)((int)param_1 + 0x7be) = *(int *)((int)param_1 + 0x7be) + -1;
LAB_00476633:
  iVar6 = (**(code **)(*param_1 + 0xd8))();
  return -(uint)(iVar6 != 0);
}

