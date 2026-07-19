
int __thiscall FUN_00478640(void *this,int param_1)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int *piVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  int extraout_ECX;
  undefined2 extraout_var_05;
  int iVar10;
  int iVar11;
  int extraout_EDX;
  int unaff_EDI;
  undefined4 *puVar13;
  undefined2 uVar9;
  undefined2 uVar12;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar13 = (undefined4 *)((int)this + 0x2cc);
    for (iVar8 = 0x17; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    *(undefined4 *)((int)this + 0x2c4) = 0;
    iVar8 = thunk_FUN_004d6df0(this);
    if ((iVar8 == 0) ||
       ((iVar8 = STBoatC::CheckForReplenisher(this,unaff_EDI), iVar8 == 1 &&
        (bVar7 = thunk_FUN_004d6f70(this), CONCAT31(extraout_var_04,bVar7) == 1)))) {
      *(undefined4 *)((int)this + 0x631) = 0;
      *(undefined4 *)((int)this + 0x62d) = 0;
      return 2;
    }
    *(int *)((int)this + 0x619) = *(int *)((int)this + 0x3f7);
    if (*(int *)((int)this + 0x3f7) == 0) {
      sVar2 = *(short *)((int)this + 0x3fb);
      sVar3 = *(short *)((int)this + 0x3fd);
      sVar4 = *(short *)((int)this + 0x3ff);
      *(short *)((int)this + 0x61d) = sVar2;
      *(short *)((int)this + 0x61f) = sVar3;
      *(short *)((int)this + 0x621) = sVar4;
      if (sVar2 < 0) {
        return 0;
      }
      if (DAT_007fb240 <= sVar2) {
        return 0;
      }
      if (sVar3 < 0) {
        return 0;
      }
      if (DAT_007fb242 <= sVar3) {
        return 0;
      }
      if (sVar4 < 0) {
        return 0;
      }
      if (DAT_007fb244 <= sVar4) {
        return 0;
      }
      piVar5 = *(int **)(DAT_007fb248 +
                        ((int)DAT_007fb246 * (int)sVar4 + (int)DAT_007fb240 * (int)sVar3 +
                        (int)sVar2) * 8);
      if (piVar5 == (int *)0x0) {
        return 0;
      }
      iVar8 = (**(code **)(*piVar5 + 0x2c))();
      if (iVar8 != 0x62) {
        return 0;
      }
      if (piVar5[9] != *(int *)((int)this + 0x24)) {
        return 0;
      }
      iVar8 = (**(code **)(*piVar5 + 0xf8))();
      if (iVar8 == 0) {
        return 0;
      }
      *(int *)((int)this + 0x623) = piVar5[6];
    }
    else {
      iVar8 = thunk_FUN_004934b0(this,(short *)((int)this + 0x61d),(short *)((int)this + 0x61f),
                                 (short *)((int)this + 0x621),(int *)((int)this + 0x623));
      if (iVar8 == 0) {
        return 0;
      }
    }
    *(undefined4 *)((int)this + 0x631) = 1;
    *(undefined4 *)((int)this + 0xb7) = 3;
    thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x61d),(int)*(short *)((int)this + 0x61f),
                       (int)*(short *)((int)this + 0x621));
    thunk_FUN_00460260(this,0);
    iVar8 = *(int *)this;
LAB_0047926a:
    iVar8 = (**(code **)(iVar8 + 0xd8))();
    return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
  }
  iVar8 = *(int *)((int)this + 0x631);
  if (iVar8 == 0) {
    iVar10 = *(int *)((int)this + 0x62d) + 1;
    *(int *)((int)this + 0x62d) = iVar10;
    iVar8 = *(int *)this;
    if (iVar10 != 2) goto LAB_0047926a;
    iVar8 = (**(code **)(iVar8 + 0xd8))();
    if (iVar8 != 0) {
      return -1;
    }
    goto LAB_00478e51;
  }
  if (iVar8 == 1) {
    iVar8 = thunk_FUN_00460260(this,2);
    switch(iVar8) {
    case 0:
      iVar8 = thunk_FUN_004d6df0(this);
      if ((iVar8 != 0) &&
         ((iVar8 = STBoatC::CheckForReplenisher(this,unaff_EDI), iVar8 != 1 ||
          (bVar7 = thunk_FUN_004d6f70(this), CONCAT31(extraout_var,bVar7) != 1)))) {
        sVar2 = *(short *)((int)this + 0x61d);
        sVar3 = *(short *)((int)this + 0x621);
        sVar4 = *(short *)((int)this + 0x61f);
        if (((-1 < sVar2) && (((sVar2 < DAT_007fb240 && (-1 < sVar4)) && (sVar4 < DAT_007fb242))))
           && (((-1 < sVar3 && (sVar3 < DAT_007fb244)) &&
               ((piVar5 = *(int **)(DAT_007fb248 +
                                   ((int)DAT_007fb246 * (int)sVar3 + (int)DAT_007fb240 * (int)sVar4
                                   + (int)sVar2) * 8), piVar5 != (int *)0x0 &&
                ((piVar5[6] == *(int *)((int)this + 0x623) &&
                 (iVar8 = (**(code **)(*piVar5 + 0xf8))(), iVar8 != 0)))))))) {
          *(undefined4 *)((int)this + 0xb7) = 0;
          iVar8 = thunk_FUN_00493610(this,(short *)((int)this + 0x627),(short *)((int)this + 0x629),
                                     (short *)((int)this + 0x62b));
          if (iVar8 == 1) {
            iVar10 = (int)*(short *)((int)this + 0x62b);
            iVar11 = (int)*(short *)((int)this + 0x629);
            iVar8 = (int)*(short *)((int)this + 0x627);
            *(undefined4 *)((int)this + 0x631) = 3;
            goto LAB_00478b83;
          }
LAB_00478d20:
          *(undefined4 *)((int)this + 0x631) = 2;
          *(undefined4 *)((int)this + 0x62d) = 0;
          iVar8 = STBoatC::Defence(this,0);
          if (iVar8 == -1) {
            return -1;
          }
switchD_004786b6_caseD_2:
          return 2;
        }
        if (*(int *)((int)this + 0x619) == 0) {
LAB_0047885b:
          thunk_FUN_004602b0(this);
          *(undefined4 *)((int)this + 0xb7) = 0;
          return 0;
        }
        iVar8 = thunk_FUN_004934b0(this,(short *)((int)this + 0x61d),(short *)((int)this + 0x61f),
                                   (short *)((int)this + 0x621),(int *)((int)this + 0x623));
        if (iVar8 == 0) goto LAB_0047885b;
        sVar2 = *(short *)((int)this + 0x621);
        sVar3 = *(short *)((int)this + 0x61f);
        goto LAB_00478b7a;
      }
      break;
    case 1:
      iVar8 = thunk_FUN_004d6df0(this);
      if ((iVar8 != 0) &&
         ((iVar8 = STBoatC::CheckForReplenisher(this,unaff_EDI), iVar8 != 1 ||
          (bVar7 = thunk_FUN_004d6f70(this), CONCAT31(extraout_var_00,bVar7) != 1)))) {
        sVar2 = *(short *)((int)this + 0x61d);
        sVar3 = *(short *)((int)this + 0x621);
        sVar4 = *(short *)((int)this + 0x61f);
        if (((-1 < sVar2) && (((sVar2 < DAT_007fb240 && (-1 < sVar4)) && (sVar4 < DAT_007fb242))))
           && (((-1 < sVar3 && (sVar3 < DAT_007fb244)) &&
               ((piVar5 = *(int **)(DAT_007fb248 +
                                   ((int)DAT_007fb246 * (int)sVar3 + (int)DAT_007fb240 * (int)sVar4
                                   + (int)sVar2) * 8), piVar5 != (int *)0x0 &&
                ((piVar5[6] == *(int *)((int)this + 0x623) &&
                 (iVar8 = (**(code **)(*piVar5 + 0xf8))(), iVar8 != 0)))))))) {
          return 2;
        }
        if ((*(int *)((int)this + 0x619) == 0) ||
           (iVar8 = thunk_FUN_004934b0(this,(short *)((int)this + 0x61d),
                                       (short *)((int)this + 0x61f),(short *)((int)this + 0x621),
                                       (int *)((int)this + 0x623)), iVar8 == 0)) {
          thunk_FUN_004602b0(this);
          *(undefined4 *)((int)this + 0xb7) = 0;
          return 0;
        }
        goto LAB_00478b73;
      }
      break;
    default:
      goto switchD_004786b6_caseD_2;
    case 3:
      thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x61d),(int)*(short *)((int)this + 0x61f),
                         (int)*(short *)((int)this + 0x621));
      thunk_FUN_00460260(this,0);
      return 2;
    case -1:
      iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x33d4,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Recharge__RECHARGE_MOVE_007ab37c);
      if (iVar8 == 0) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x33d4);
        return 0xffff;
      }
      pcVar6 = (code *)swi(3);
      iVar8 = (*pcVar6)();
      return iVar8;
    }
    thunk_FUN_004602b0(this);
    *(undefined4 *)((int)this + 0xb7) = 0;
LAB_00478e51:
    (**(code **)(*(int *)this + 0x90))(3,0x1b2);
    return 0;
  }
  if (iVar8 == 2) {
    *(int *)((int)this + 0x62d) = *(int *)((int)this + 0x62d) + 1;
    iVar8 = STBoatC::Defence(this,2);
    if (iVar8 == -1) {
      return -1;
    }
    if (*(int *)((int)this + 0x82e) != 0) {
      return 2;
    }
    if (*(int *)((int)this + 0x48b) != 0xffff) {
      return 2;
    }
    if (*(int *)((int)this + 0x62d) % 10 != 0) {
      return 2;
    }
    iVar8 = thunk_FUN_004d6df0(this);
    if ((iVar8 == 0) ||
       ((iVar8 = STBoatC::CheckForReplenisher(this,unaff_EDI), iVar8 == 1 &&
        (bVar7 = thunk_FUN_004d6f70(this), CONCAT31(extraout_var_01,bVar7) == 1))))
    goto LAB_00478e51;
    sVar2 = *(short *)((int)this + 0x61d);
    sVar3 = *(short *)((int)this + 0x621);
    sVar4 = *(short *)((int)this + 0x61f);
    if (((-1 < sVar2) &&
        (((((sVar2 < DAT_007fb240 && (-1 < sVar4)) && (sVar4 < DAT_007fb242)) &&
          ((-1 < sVar3 && (sVar3 < DAT_007fb244)))) &&
         (piVar5 = *(int **)(DAT_007fb248 +
                            ((int)DAT_007fb246 * (int)sVar3 + (int)DAT_007fb240 * (int)sVar4 +
                            (int)sVar2) * 8), piVar5 != (int *)0x0)))) &&
       ((piVar5[6] == *(int *)((int)this + 0x623) &&
        (iVar8 = (**(code **)(*piVar5 + 0xf8))(), iVar8 != 0)))) {
      iVar8 = thunk_FUN_00493610(this,(short *)((int)this + 0x627),(short *)((int)this + 0x629),
                                 (short *)((int)this + 0x62b));
      if (iVar8 != 1) {
        return 2;
      }
      *(undefined4 *)((int)this + 0x631) = 3;
      goto LAB_00478b1a;
    }
    if (*(int *)((int)this + 0x619) == 0) {
      return 0;
    }
    iVar8 = thunk_FUN_004934b0(this,(short *)((int)this + 0x61d),(short *)((int)this + 0x61f),
                               (short *)((int)this + 0x621),(int *)((int)this + 0x623));
joined_r0x00478b59:
    if (iVar8 == 0) {
      return 0;
    }
LAB_00478b5f:
    *(undefined4 *)((int)this + 0x631) = 1;
    *(undefined4 *)((int)this + 0xb7) = 3;
LAB_00478b73:
    sVar2 = *(short *)((int)this + 0x621);
    sVar3 = *(short *)((int)this + 0x61f);
LAB_00478b7a:
    sVar4 = *(short *)((int)this + 0x61d);
  }
  else {
    if (iVar8 != 3) {
      if (iVar8 != 4) {
        if (iVar8 != 5) {
          return 2;
        }
        iVar8 = thunk_FUN_00460260(this,2);
        if (iVar8 == -1) {
          return -1;
        }
        if (iVar8 == 0) {
          return 0;
        }
        if (iVar8 != 3) {
          return 2;
        }
        iVar8 = CONCAT22(extraout_var_05,*(undefined2 *)((int)this + 0x61f));
        iVar10 = CONCAT22((short)((uint)((int)this + 0x627) >> 0x10),
                          *(undefined2 *)((int)this + 0x61d));
        thunk_FUN_0048dfd0(iVar10,iVar8,(uint)*(ushort *)((int)this + 0x621),iVar10,iVar8,
                           (int *)(uint)*(ushort *)((int)this + 0x621),3,
                           (short *)((int)this + 0x627),(short *)((int)this + 0x629),
                           (short *)((int)this + 0x62b));
LAB_00478b1a:
        iVar10 = (int)*(short *)((int)this + 0x62b);
        iVar11 = (int)*(short *)((int)this + 0x629);
        iVar8 = (int)*(short *)((int)this + 0x627);
        goto LAB_00478b83;
      }
      sVar2 = *(short *)((int)this + 0x61d);
      sVar3 = *(short *)((int)this + 0x621);
      sVar4 = *(short *)((int)this + 0x61f);
      if ((((sVar2 < 0) || (DAT_007fb240 <= sVar2)) || (sVar4 < 0)) ||
         ((((DAT_007fb242 <= sVar4 || (sVar3 < 0)) ||
           ((DAT_007fb244 <= sVar3 ||
            ((piVar5 = *(int **)(DAT_007fb248 +
                                ((int)DAT_007fb246 * (int)sVar3 + (int)DAT_007fb240 * (int)sVar4 +
                                (int)sVar2) * 8), piVar5 == (int *)0x0 ||
             (piVar5[6] != *(int *)((int)this + 0x623))))))) ||
          (iVar8 = (**(code **)(*piVar5 + 0xf8))(), iVar8 == 0)))) {
        if (*(int *)((int)this + 0x619) == 0) {
          return 0;
        }
        iVar8 = thunk_FUN_004934b0(this,(short *)((int)this + 0x61d),(short *)((int)this + 0x61f),
                                   (short *)((int)this + 0x621),(int *)((int)this + 0x623));
        if (iVar8 == 0) {
          return 0;
        }
        iVar10 = (int)*(short *)((int)this + 0x621);
        iVar11 = (int)*(short *)((int)this + 0x61f);
        iVar8 = (int)*(short *)((int)this + 0x61d);
        *(undefined4 *)((int)this + 0x631) = 1;
        *(undefined4 *)((int)this + 0xb7) = 3;
        goto LAB_00478b83;
      }
      bVar7 = thunk_FUN_004d6f70(this);
      if (CONCAT31(extraout_var_03,bVar7) != 1) goto LAB_00478ff2;
      (**(code **)(*(int *)this + 0x90))(3,0x1b2);
      uVar12 = (undefined2)((uint)extraout_EDX >> 0x10);
      uVar9 = (undefined2)((uint)extraout_ECX >> 0x10);
      piVar1 = (int *)((int)this + 0x62b);
      if (piVar5[0x10b] == 0) {
LAB_00478f91:
        iVar8 = CONCAT22(uVar9,*(undefined2 *)((int)this + 0x61f));
        iVar10 = CONCAT22(uVar12,*(undefined2 *)((int)this + 0x61d));
        thunk_FUN_0048dfd0(iVar10,iVar8,(uint)*(ushort *)((int)this + 0x621),iVar10,iVar8,
                           (int *)(uint)*(ushort *)((int)this + 0x621),3,
                           (short *)((int)this + 0x627),(short *)((int)this + 0x629),(short *)piVar1
                          );
      }
      else {
        iVar8 = extraout_ECX;
        if ((int *)((int)this + 0x627) != (int *)0x0) {
          iVar8 = piVar5[0x10c];
          *(int *)((int)this + 0x627) = iVar8;
        }
        uVar9 = (undefined2)((uint)iVar8 >> 0x10);
        iVar8 = extraout_EDX;
        if ((int *)((int)this + 0x629) != (int *)0x0) {
          iVar8 = piVar5[0x10d];
          *(int *)((int)this + 0x629) = iVar8;
        }
        uVar12 = (undefined2)((uint)iVar8 >> 0x10);
        if (piVar1 != (int *)0x0) {
          *piVar1 = piVar5[0x10e];
        }
        if (piVar5[0x10b] == 0) goto LAB_00478f91;
      }
      *(undefined4 *)((int)this + 0x631) = 5;
      thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x627),(int)*(short *)((int)this + 0x629),
                         (int)*(short *)piVar1);
      thunk_FUN_00460260(this,0);
LAB_00478ff2:
      iVar8 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
    }
    iVar8 = thunk_FUN_00460260(this,2);
    switch(iVar8) {
    case 0:
      sVar2 = *(short *)((int)this + 0x61d);
      sVar3 = *(short *)((int)this + 0x621);
      sVar4 = *(short *)((int)this + 0x61f);
      if ((((((-1 < sVar2) && (sVar2 < DAT_007fb240)) && (-1 < sVar4)) &&
           ((sVar4 < DAT_007fb242 && (-1 < sVar3)))) &&
          ((sVar3 < DAT_007fb244 &&
           ((piVar5 = *(int **)(DAT_007fb248 +
                               ((int)DAT_007fb246 * (int)sVar3 + (int)DAT_007fb240 * (int)sVar4 +
                               (int)sVar2) * 8), piVar5 != (int *)0x0 &&
            (piVar5[6] == *(int *)((int)this + 0x623))))))) &&
         (iVar8 = (**(code **)(*piVar5 + 0xf8))(), iVar8 != 0)) {
        *(undefined4 *)((int)this + 0x631) = 4;
        return 2;
      }
      if (*(int *)((int)this + 0x619) == 0) {
        return 0;
      }
      iVar8 = thunk_FUN_004934b0(this,(short *)((int)this + 0x61d),(short *)((int)this + 0x61f),
                                 (short *)((int)this + 0x621),(int *)((int)this + 0x623));
      goto joined_r0x00478b59;
    case 1:
      iVar8 = thunk_FUN_004d6df0(this);
      if ((iVar8 == 0) ||
         ((iVar8 = STBoatC::CheckForReplenisher(this,unaff_EDI), iVar8 == 1 &&
          (bVar7 = thunk_FUN_004d6f70(this), CONCAT31(extraout_var_02,bVar7) == 1)))) {
        thunk_FUN_004602b0(this);
        goto LAB_00478e51;
      }
      sVar2 = *(short *)((int)this + 0x61d);
      sVar3 = *(short *)((int)this + 0x621);
      sVar4 = *(short *)((int)this + 0x61f);
      if (((((-1 < sVar2) && (sVar2 < DAT_007fb240)) && (-1 < sVar4)) &&
          ((sVar4 < DAT_007fb242 && (-1 < sVar3)))) &&
         (((sVar3 < DAT_007fb244 &&
           ((piVar5 = *(int **)(DAT_007fb248 +
                               ((int)DAT_007fb246 * (int)sVar3 + (int)DAT_007fb240 * (int)sVar4 +
                               (int)sVar2) * 8), piVar5 != (int *)0x0 &&
            (piVar5[6] == *(int *)((int)this + 0x623))))) &&
          (iVar8 = (**(code **)(*piVar5 + 0xf8))(), iVar8 != 0)))) {
        return 2;
      }
      if ((*(int *)((int)this + 0x619) == 0) ||
         (iVar8 = thunk_FUN_004934b0(this,(short *)((int)this + 0x61d),(short *)((int)this + 0x61f),
                                     (short *)((int)this + 0x621),(int *)((int)this + 0x623)),
         iVar8 == 0)) {
        thunk_FUN_004602b0(this);
        return 0;
      }
      goto LAB_00478b5f;
    default:
      goto switchD_004786b6_caseD_2;
    case 3:
      iVar8 = thunk_FUN_00493610(this,(short *)((int)this + 0x627),(short *)((int)this + 0x629),
                                 (short *)((int)this + 0x62b));
      if (iVar8 != 1) goto LAB_00478d20;
      sVar2 = *(short *)((int)this + 0x62b);
      sVar3 = *(short *)((int)this + 0x629);
      sVar4 = *(short *)((int)this + 0x627);
      break;
    case -1:
      iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3451,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Recharge__RECHARGE_RECH_007ab348);
      if (iVar8 == 0) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3451);
        return 0xffff;
      }
      pcVar6 = (code *)swi(3);
      iVar8 = (*pcVar6)();
      return iVar8;
    }
  }
  iVar10 = (int)sVar2;
  iVar11 = (int)sVar3;
  iVar8 = (int)sVar4;
LAB_00478b83:
  thunk_FUN_00481520(this,iVar8,iVar11,iVar10);
  thunk_FUN_00460260(this,0);
  return 2;
}

