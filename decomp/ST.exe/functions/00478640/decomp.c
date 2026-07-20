
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Recharge */

int __thiscall STBoatC::Recharge(STBoatC *this,int param_1)

{
  undefined1 *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int *piVar5;
  code *pcVar6;
  bool bVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  STBoatCVTable *pSVar8;
  int iVar9;
  int extraout_ECX;
  undefined2 extraout_var_05;
  int iVar11;
  int iVar12;
  int extraout_EDX;
  int unaff_EDI;
  undefined4 *puVar14;
  undefined2 uVar10;
  undefined2 uVar13;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar14 = &this->field_02CC;
    for (iVar11 = 0x17; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    this->field_02C4 = 0;
    iVar11 = thunk_FUN_004d6df0((int *)this);
    if ((iVar11 == 0) ||
       ((iVar11 = CheckForReplenisher(this,unaff_EDI), iVar11 == 1 &&
        (bVar7 = thunk_FUN_004d6f70((int *)this), CONCAT31(extraout_var_04,bVar7) == 1)))) {
      this->field_0631 = 0;
      this->field_062D = 0;
      return 2;
    }
    *(int *)&this->field_0x619 = *(int *)&this->field_0x3f7;
    if (*(int *)&this->field_0x3f7 == 0) {
      sVar2 = *(short *)&this->field_0x3fb;
      sVar3 = *(short *)&this->field_0x3fd;
      sVar4 = *(short *)&this->field_0x3ff;
      *(short *)&this->field_0x61d = sVar2;
      *(short *)&this->field_0x61f = sVar3;
      *(short *)&this->field_0x621 = sVar4;
      if (sVar2 < 0) {
        return 0;
      }
      if (SHORT_007fb240 <= sVar2) {
        return 0;
      }
      if (sVar3 < 0) {
        return 0;
      }
      if (SHORT_007fb242 <= sVar3) {
        return 0;
      }
      if (sVar4 < 0) {
        return 0;
      }
      if (SHORT_007fb244 <= sVar4) {
        return 0;
      }
      piVar5 = *(int **)(DAT_007fb248 +
                        ((int)SHORT_007fb246 * (int)sVar4 + (int)SHORT_007fb240 * (int)sVar3 +
                        (int)sVar2) * 8);
      if (piVar5 == (int *)0x0) {
        return 0;
      }
      iVar11 = (**(code **)(*piVar5 + 0x2c))();
      if (iVar11 != 0x62) {
        return 0;
      }
      if (piVar5[9] != *(int *)&this->field_0x24) {
        return 0;
      }
      iVar11 = (**(code **)(*piVar5 + 0xf8))();
      if (iVar11 == 0) {
        return 0;
      }
      *(int *)&this->field_0x623 = piVar5[6];
    }
    else {
      iVar11 = thunk_FUN_004934b0(this,(short *)&this->field_0x61d,(short *)&this->field_0x61f,
                                  (short *)&this->field_0x621,(int *)&this->field_0x623);
      if (iVar11 == 0) {
        return 0;
      }
    }
    this->field_0631 = 1;
    this->field_00B7 = 3;
    sub_00481520(this,(int)*(short *)&this->field_0x61d,(int)*(short *)&this->field_0x61f,
                 (int)*(short *)&this->field_0x621);
    sub_00460260(this,0);
    pSVar8 = this->vtable;
LAB_0047926a:
    iVar11 = (*pSVar8->vfunc_D8)();
    return (-(uint)(iVar11 != 0) & 0xfffffffd) + 2;
  }
  iVar11 = this->field_0631;
  if (iVar11 == 0) {
    iVar11 = this->field_062D + 1;
    this->field_062D = iVar11;
    pSVar8 = this->vtable;
    if (iVar11 != 2) goto LAB_0047926a;
    iVar11 = (*pSVar8->vfunc_D8)();
    if (iVar11 != 0) {
      return -1;
    }
    goto cf_common_exit_00478E51;
  }
  if (iVar11 == 1) {
    iVar11 = sub_00460260(this,2);
    switch(iVar11) {
    case 0:
      iVar11 = thunk_FUN_004d6df0((int *)this);
      if ((iVar11 != 0) &&
         ((iVar11 = CheckForReplenisher(this,unaff_EDI), iVar11 != 1 ||
          (bVar7 = thunk_FUN_004d6f70((int *)this), CONCAT31(extraout_var,bVar7) != 1)))) {
        sVar2 = *(short *)&this->field_0x61d;
        sVar3 = *(short *)&this->field_0x621;
        sVar4 = *(short *)&this->field_0x61f;
        if (((-1 < sVar2) &&
            (((sVar2 < SHORT_007fb240 && (-1 < sVar4)) && (sVar4 < SHORT_007fb242)))) &&
           (((-1 < sVar3 && (sVar3 < SHORT_007fb244)) &&
            ((piVar5 = *(int **)(DAT_007fb248 +
                                ((int)SHORT_007fb246 * (int)sVar3 + (int)SHORT_007fb240 * (int)sVar4
                                + (int)sVar2) * 8), piVar5 != (int *)0x0 &&
             ((piVar5[6] == *(int *)&this->field_0x623 &&
              (iVar11 = (**(code **)(*piVar5 + 0xf8))(), iVar11 != 0)))))))) {
          this->field_00B7 = 0;
          iVar11 = thunk_FUN_00493610(this,(short *)&this->field_0x627,(short *)&this->field_0x629,
                                      (short *)&this->field_0x62b);
          if (iVar11 == 1) {
            iVar9 = (int)*(short *)&this->field_0x62b;
            iVar12 = (int)*(short *)&this->field_0x629;
            iVar11 = (int)*(short *)&this->field_0x627;
            this->field_0631 = 3;
            goto cf_common_exit_00478B83;
          }
LAB_00478d20:
          this->field_0631 = 2;
          this->field_062D = 0;
          iVar11 = Defence(this,0);
          if (iVar11 == -1) {
            return -1;
          }
cf_common_exit_0047928C:
          return 2;
        }
        if (*(int *)&this->field_0x619 == 0) {
LAB_0047885b:
          sub_004602B0(this);
          this->field_00B7 = 0;
          return 0;
        }
        iVar11 = thunk_FUN_004934b0(this,(short *)&this->field_0x61d,(short *)&this->field_0x61f,
                                    (short *)&this->field_0x621,(int *)&this->field_0x623);
        if (iVar11 == 0) goto LAB_0047885b;
        sVar2 = *(short *)&this->field_0x621;
        sVar3 = *(short *)&this->field_0x61f;
        goto LAB_00478b7a;
      }
      break;
    case 1:
      iVar11 = thunk_FUN_004d6df0((int *)this);
      if ((iVar11 != 0) &&
         ((iVar11 = CheckForReplenisher(this,unaff_EDI), iVar11 != 1 ||
          (bVar7 = thunk_FUN_004d6f70((int *)this), CONCAT31(extraout_var_00,bVar7) != 1)))) {
        sVar2 = *(short *)&this->field_0x61d;
        sVar3 = *(short *)&this->field_0x621;
        sVar4 = *(short *)&this->field_0x61f;
        if (((-1 < sVar2) &&
            (((sVar2 < SHORT_007fb240 && (-1 < sVar4)) && (sVar4 < SHORT_007fb242)))) &&
           (((-1 < sVar3 && (sVar3 < SHORT_007fb244)) &&
            ((piVar5 = *(int **)(DAT_007fb248 +
                                ((int)SHORT_007fb246 * (int)sVar3 + (int)SHORT_007fb240 * (int)sVar4
                                + (int)sVar2) * 8), piVar5 != (int *)0x0 &&
             ((piVar5[6] == *(int *)&this->field_0x623 &&
              (iVar11 = (**(code **)(*piVar5 + 0xf8))(), iVar11 != 0)))))))) {
          return 2;
        }
        if ((*(int *)&this->field_0x619 == 0) ||
           (iVar11 = thunk_FUN_004934b0(this,(short *)&this->field_0x61d,(short *)&this->field_0x61f
                                        ,(short *)&this->field_0x621,(int *)&this->field_0x623),
           iVar11 == 0)) {
          sub_004602B0(this);
          this->field_00B7 = 0;
          return 0;
        }
        goto LAB_00478b73;
      }
      break;
    default:
      goto cf_common_exit_0047928C;
    case 3:
      sub_00481520(this,(int)*(short *)&this->field_0x61d,(int)*(short *)&this->field_0x61f,
                   (int)*(short *)&this->field_0x621);
      sub_00460260(this,0);
      return 2;
    case -1:
      iVar11 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x33d4,0,0,&DAT_007a4ccc,
                                  s_STBoatC__Recharge__RECHARGE_MOVE_007ab37c);
      if (iVar11 == 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x33d4
                  );
        return 0xffff;
      }
      pcVar6 = (code *)swi(3);
      iVar11 = (*pcVar6)();
      return iVar11;
    }
    sub_004602B0(this);
    this->field_00B7 = 0;
cf_common_exit_00478E51:
    (*this->vtable->vfunc_90)(3,0x1b2);
    return 0;
  }
  if (iVar11 == 2) {
    this->field_062D = this->field_062D + 1;
    iVar11 = Defence(this,2);
    if (iVar11 == -1) {
      return -1;
    }
    if (this->field_082E != 0) {
      return 2;
    }
    if (this->field_048B != 0xffff) {
      return 2;
    }
    if ((int)this->field_062D % 10 != 0) {
      return 2;
    }
    iVar11 = thunk_FUN_004d6df0((int *)this);
    if ((iVar11 == 0) ||
       ((iVar11 = CheckForReplenisher(this,unaff_EDI), iVar11 == 1 &&
        (bVar7 = thunk_FUN_004d6f70((int *)this), CONCAT31(extraout_var_01,bVar7) == 1))))
    goto cf_common_exit_00478E51;
    sVar2 = *(short *)&this->field_0x61d;
    sVar3 = *(short *)&this->field_0x621;
    sVar4 = *(short *)&this->field_0x61f;
    if (((-1 < sVar2) &&
        (((((sVar2 < SHORT_007fb240 && (-1 < sVar4)) && (sVar4 < SHORT_007fb242)) &&
          ((-1 < sVar3 && (sVar3 < SHORT_007fb244)))) &&
         (piVar5 = *(int **)(DAT_007fb248 +
                            ((int)SHORT_007fb246 * (int)sVar3 + (int)SHORT_007fb240 * (int)sVar4 +
                            (int)sVar2) * 8), piVar5 != (int *)0x0)))) &&
       ((piVar5[6] == *(int *)&this->field_0x623 &&
        (iVar11 = (**(code **)(*piVar5 + 0xf8))(), iVar11 != 0)))) {
      iVar11 = thunk_FUN_00493610(this,(short *)&this->field_0x627,(short *)&this->field_0x629,
                                  (short *)&this->field_0x62b);
      if (iVar11 != 1) {
        return 2;
      }
      this->field_0631 = 3;
      goto LAB_00478b1a;
    }
    if (*(int *)&this->field_0x619 == 0) {
      return 0;
    }
    iVar11 = thunk_FUN_004934b0(this,(short *)&this->field_0x61d,(short *)&this->field_0x61f,
                                (short *)&this->field_0x621,(int *)&this->field_0x623);
joined_r0x00478b59:
    if (iVar11 == 0) {
      return 0;
    }
LAB_00478b5f:
    this->field_0631 = 1;
    this->field_00B7 = 3;
LAB_00478b73:
    sVar2 = *(short *)&this->field_0x621;
    sVar3 = *(short *)&this->field_0x61f;
LAB_00478b7a:
    sVar4 = *(short *)&this->field_0x61d;
  }
  else {
    if (iVar11 != 3) {
      if (iVar11 != 4) {
        if (iVar11 != 5) {
          return 2;
        }
        iVar11 = sub_00460260(this,2);
        if (iVar11 == -1) {
          return -1;
        }
        if (iVar11 == 0) {
          return 0;
        }
        if (iVar11 != 3) {
          return 2;
        }
        iVar11 = CONCAT22(extraout_var_05,*(undefined2 *)&this->field_0x61f);
        iVar9 = CONCAT22((short)((uint)&this->field_0x627 >> 0x10),*(undefined2 *)&this->field_0x61d
                        );
        thunk_FUN_0048dfd0(iVar9,iVar11,(uint)*(ushort *)&this->field_0x621,iVar9,iVar11,
                           (int *)(uint)*(ushort *)&this->field_0x621,3,(short *)&this->field_0x627,
                           (short *)&this->field_0x629,(short *)&this->field_0x62b);
LAB_00478b1a:
        iVar9 = (int)*(short *)&this->field_0x62b;
        iVar12 = (int)*(short *)&this->field_0x629;
        iVar11 = (int)*(short *)&this->field_0x627;
        goto cf_common_exit_00478B83;
      }
      sVar2 = *(short *)&this->field_0x61d;
      sVar3 = *(short *)&this->field_0x621;
      sVar4 = *(short *)&this->field_0x61f;
      if ((((sVar2 < 0) || (SHORT_007fb240 <= sVar2)) || (sVar4 < 0)) ||
         ((((SHORT_007fb242 <= sVar4 || (sVar3 < 0)) ||
           ((SHORT_007fb244 <= sVar3 ||
            ((piVar5 = *(int **)(DAT_007fb248 +
                                ((int)SHORT_007fb246 * (int)sVar3 + (int)SHORT_007fb240 * (int)sVar4
                                + (int)sVar2) * 8), piVar5 == (int *)0x0 ||
             (piVar5[6] != *(int *)&this->field_0x623)))))) ||
          (iVar11 = (**(code **)(*piVar5 + 0xf8))(), iVar11 == 0)))) {
        if (*(int *)&this->field_0x619 == 0) {
          return 0;
        }
        iVar11 = thunk_FUN_004934b0(this,(short *)&this->field_0x61d,(short *)&this->field_0x61f,
                                    (short *)&this->field_0x621,(int *)&this->field_0x623);
        if (iVar11 == 0) {
          return 0;
        }
        iVar9 = (int)*(short *)&this->field_0x621;
        iVar12 = (int)*(short *)&this->field_0x61f;
        iVar11 = (int)*(short *)&this->field_0x61d;
        this->field_0631 = 1;
        this->field_00B7 = 3;
        goto cf_common_exit_00478B83;
      }
      bVar7 = thunk_FUN_004d6f70((int *)this);
      if (CONCAT31(extraout_var_03,bVar7) != 1) goto LAB_00478ff2;
      (*this->vtable->vfunc_90)(3,0x1b2);
      uVar13 = (undefined2)((uint)extraout_EDX >> 0x10);
      uVar10 = (undefined2)((uint)extraout_ECX >> 0x10);
      puVar1 = &this->field_0x62b;
      if (piVar5[0x10b] == 0) {
LAB_00478f91:
        iVar11 = CONCAT22(uVar10,*(undefined2 *)&this->field_0x61f);
        iVar9 = CONCAT22(uVar13,*(undefined2 *)&this->field_0x61d);
        thunk_FUN_0048dfd0(iVar9,iVar11,(uint)*(ushort *)&this->field_0x621,iVar9,iVar11,
                           (int *)(uint)*(ushort *)&this->field_0x621,3,(short *)&this->field_0x627,
                           (short *)&this->field_0x629,(short *)puVar1);
      }
      else {
        iVar11 = extraout_ECX;
        if (&this->field_0x627 != (undefined1 *)0x0) {
          iVar11 = piVar5[0x10c];
          *(int *)&this->field_0x627 = iVar11;
        }
        uVar10 = (undefined2)((uint)iVar11 >> 0x10);
        iVar11 = extraout_EDX;
        if (&this->field_0x629 != (undefined1 *)0x0) {
          iVar11 = piVar5[0x10d];
          *(int *)&this->field_0x629 = iVar11;
        }
        uVar13 = (undefined2)((uint)iVar11 >> 0x10);
        if (puVar1 != (undefined1 *)0x0) {
          *(int *)puVar1 = piVar5[0x10e];
        }
        if (piVar5[0x10b] == 0) goto LAB_00478f91;
      }
      this->field_0631 = 5;
      sub_00481520(this,(int)*(short *)&this->field_0x627,(int)*(short *)&this->field_0x629,
                   (int)*(short *)puVar1);
      sub_00460260(this,0);
LAB_00478ff2:
      iVar11 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar11 != 0) & 0xfffffffd) + 2;
    }
    iVar11 = sub_00460260(this,2);
    switch(iVar11) {
    case 0:
      sVar2 = *(short *)&this->field_0x61d;
      sVar3 = *(short *)&this->field_0x621;
      sVar4 = *(short *)&this->field_0x61f;
      if ((((((-1 < sVar2) && (sVar2 < SHORT_007fb240)) && (-1 < sVar4)) &&
           ((sVar4 < SHORT_007fb242 && (-1 < sVar3)))) &&
          ((sVar3 < SHORT_007fb244 &&
           ((piVar5 = *(int **)(DAT_007fb248 +
                               ((int)SHORT_007fb246 * (int)sVar3 + (int)SHORT_007fb240 * (int)sVar4
                               + (int)sVar2) * 8), piVar5 != (int *)0x0 &&
            (piVar5[6] == *(int *)&this->field_0x623)))))) &&
         (iVar11 = (**(code **)(*piVar5 + 0xf8))(), iVar11 != 0)) {
        this->field_0631 = 4;
        return 2;
      }
      if (*(int *)&this->field_0x619 == 0) {
        return 0;
      }
      iVar11 = thunk_FUN_004934b0(this,(short *)&this->field_0x61d,(short *)&this->field_0x61f,
                                  (short *)&this->field_0x621,(int *)&this->field_0x623);
      goto joined_r0x00478b59;
    case 1:
      iVar11 = thunk_FUN_004d6df0((int *)this);
      if ((iVar11 == 0) ||
         ((iVar11 = CheckForReplenisher(this,unaff_EDI), iVar11 == 1 &&
          (bVar7 = thunk_FUN_004d6f70((int *)this), CONCAT31(extraout_var_02,bVar7) == 1)))) {
        sub_004602B0(this);
        goto cf_common_exit_00478E51;
      }
      sVar2 = *(short *)&this->field_0x61d;
      sVar3 = *(short *)&this->field_0x621;
      sVar4 = *(short *)&this->field_0x61f;
      if (((((-1 < sVar2) && (sVar2 < SHORT_007fb240)) && (-1 < sVar4)) &&
          ((sVar4 < SHORT_007fb242 && (-1 < sVar3)))) &&
         (((sVar3 < SHORT_007fb244 &&
           ((piVar5 = *(int **)(DAT_007fb248 +
                               ((int)SHORT_007fb246 * (int)sVar3 + (int)SHORT_007fb240 * (int)sVar4
                               + (int)sVar2) * 8), piVar5 != (int *)0x0 &&
            (piVar5[6] == *(int *)&this->field_0x623)))) &&
          (iVar11 = (**(code **)(*piVar5 + 0xf8))(), iVar11 != 0)))) {
        return 2;
      }
      if ((*(int *)&this->field_0x619 == 0) ||
         (iVar11 = thunk_FUN_004934b0(this,(short *)&this->field_0x61d,(short *)&this->field_0x61f,
                                      (short *)&this->field_0x621,(int *)&this->field_0x623),
         iVar11 == 0)) {
        sub_004602B0(this);
        return 0;
      }
      goto LAB_00478b5f;
    default:
      goto cf_common_exit_0047928C;
    case 3:
      iVar11 = thunk_FUN_00493610(this,(short *)&this->field_0x627,(short *)&this->field_0x629,
                                  (short *)&this->field_0x62b);
      if (iVar11 != 1) goto LAB_00478d20;
      sVar2 = *(short *)&this->field_0x62b;
      sVar3 = *(short *)&this->field_0x629;
      sVar4 = *(short *)&this->field_0x627;
      break;
    case -1:
      iVar11 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3451,0,0,&DAT_007a4ccc,
                                  s_STBoatC__Recharge__RECHARGE_RECH_007ab348);
      if (iVar11 == 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3451
                  );
        return 0xffff;
      }
      pcVar6 = (code *)swi(3);
      iVar11 = (*pcVar6)();
      return iVar11;
    }
  }
  iVar9 = (int)sVar2;
  iVar12 = (int)sVar3;
  iVar11 = (int)sVar4;
cf_common_exit_00478B83:
  sub_00481520(this,iVar11,iVar12,iVar9);
  sub_00460260(this,0);
  return 2;
}

