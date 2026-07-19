
undefined4 __thiscall thunk_FUN_0047c050(void *this,int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 extraout_var_02;
  int iVar11;
  void *this_00;
  undefined4 *puVar12;
  undefined4 uStack_14;
  short sStack_10;
  short sStack_e;
  short sStack_c;
  int *piStack_8;
  
  if ((param_1 == (int *)0x0) || (param_1 == (int *)0x1)) {
    puVar12 = (undefined4 *)((int)this + 0x2cc);
    for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    iVar6 = *(int *)((int)this + 0x6f7);
    *(undefined4 *)((int)this + 0x2c4) = 0;
    if ((((iVar6 != 7) && (iVar6 != 0x13)) && (iVar6 != 0x1b)) || (*(int *)((int)this + 0x7ca) == 0)
       ) {
      return 0;
    }
    iVar6 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x7ca),(int *)&param_1);
    if (iVar6 == -4) {
      iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3781,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Bring_can_not_find_obje_007ab55c);
      if (iVar6 == 0) {
        return 0;
      }
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return uVar8;
    }
    sVar1 = *(short *)((int)this + 0x41b);
    sVar2 = *(short *)((int)this + 0x41d);
    *(int *)((int)this + 0x66b) = param_1[8];
    sVar3 = *(short *)((int)this + 0x419);
    *(short *)((int)this + 0x66f) = sVar3;
    *(short *)((int)this + 0x671) = sVar1;
    *(short *)((int)this + 0x673) = sVar2;
    if ((((sVar3 < 0) || (DAT_007fb240 <= sVar3)) ||
        ((sVar1 < 0 || ((DAT_007fb242 <= sVar1 || (sVar2 < 0)))))) || (DAT_007fb244 <= sVar2)) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = *(int **)(DAT_007fb248 +
                         ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar1 +
                         (int)sVar3) * 8);
    }
    if (param_1 == (int *)0x0) {
      return 0;
    }
    iVar6 = (**(code **)(*param_1 + 0x2c))();
    *(int *)((int)this + 0x675) = iVar6;
    if ((((iVar6 != 0x52) && (iVar6 != 0x5f)) || (*(int *)((int)this + 0x66b) != 0x1a4)) &&
       (iVar6 != 99)) {
      return 0;
    }
    iVar11 = *(short *)((int)this + 0x673) + 1;
    iVar6 = (int)*(short *)((int)this + 0x671);
    *(int *)((int)this + 0x679) = param_1[6];
    iVar9 = (int)*(short *)((int)this + 0x66f);
    *(undefined4 *)((int)this + 0x687) = 0;
    *(undefined4 *)((int)this + 0xb7) = 3;
    goto LAB_0047c9fe;
  }
  iVar6 = *(int *)((int)this + 0x687);
  if (iVar6 == 0) {
    iVar6 = thunk_FUN_00460260(this,2);
    switch(iVar6) {
    case 0:
      goto switchD_0047c090_caseD_0;
    case 1:
      sVar1 = *(short *)((int)this + 0x66f);
      sVar2 = *(short *)((int)this + 0x673);
      sVar3 = *(short *)((int)this + 0x671);
      if (((sVar1 < 0) || (DAT_007fb240 <= sVar1)) ||
         (((sVar3 < 0 || ((DAT_007fb242 <= sVar3 || (sVar2 < 0)))) || (DAT_007fb244 <= sVar2)))) {
        param_1 = (int *)0x0;
      }
      else {
        param_1 = *(int **)(DAT_007fb248 +
                           ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                           (int)sVar1) * 8);
      }
      if (((param_1 != (int *)0x0) && (param_1[6] == *(int *)((int)this + 0x679))) &&
         (iVar6 = (**(code **)(*param_1 + 0xf8))(), iVar6 != 0)) {
        return 2;
      }
      thunk_FUN_004602b0(this);
      *(undefined4 *)((int)this + 0xb7) = 0;
      return 0;
    default:
      return 2;
    case 3:
      thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x66f),(int)*(short *)((int)this + 0x671),
                         *(short *)((int)this + 0x673) + 1);
      thunk_FUN_00460260(this,0);
      return 2;
    case -1:
      iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x379a,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Bring__BRING_MOVE_error_007ab5dc);
      if (iVar6 == 0) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x379a);
        return 0xffff;
      }
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return uVar8;
    }
  }
  if (iVar6 != 1) {
    if (iVar6 == 2) {
      iVar6 = thunk_FUN_00460260(this,2);
      switch(iVar6) {
      case 0:
        sVar1 = *(short *)((int)this + 0x66f);
        sVar2 = *(short *)((int)this + 0x673);
        sVar3 = *(short *)((int)this + 0x671);
        if (((sVar1 < 0) || (DAT_007fb240 <= sVar1)) ||
           ((sVar3 < 0 || (((DAT_007fb242 <= sVar3 || (sVar2 < 0)) || (DAT_007fb244 <= sVar2)))))) {
          param_1 = (int *)0x0;
        }
        else {
          param_1 = *(int **)(DAT_007fb248 +
                             ((int)sVar2 * (int)DAT_007fb246 + (int)sVar3 * (int)DAT_007fb240 +
                             (int)sVar1) * 8);
        }
        if (((param_1 != (int *)0x0) && (param_1[6] == *(int *)((int)this + 0x679))) &&
           ((iVar6 = (**(code **)(*param_1 + 0xf8))(), iVar6 != 0 &&
            ((param_1[8] != 1000 || ((param_1[0x12d] == 0 && (*(int *)((int)param_1 + 0x245) != 6)))
             ))))) {
          *(undefined4 *)((int)this + 0x5d6) = 0;
          *(undefined4 *)((int)this + 0x687) = 3;
          return 2;
        }
        break;
      case 1:
        sVar1 = *(short *)((int)this + 0x66f);
        sVar2 = *(short *)((int)this + 0x673);
        sVar3 = *(short *)((int)this + 0x671);
        if (((sVar1 < 0) || (DAT_007fb240 <= sVar1)) ||
           ((sVar3 < 0 || (((DAT_007fb242 <= sVar3 || (sVar2 < 0)) || (DAT_007fb244 <= sVar2)))))) {
          param_1 = (int *)0x0;
        }
        else {
          param_1 = *(int **)(DAT_007fb248 +
                             ((int)sVar2 * (int)DAT_007fb246 + (int)sVar3 * (int)DAT_007fb240 +
                             (int)sVar1) * 8);
        }
        if (((param_1 != (int *)0x0) && (param_1[6] == *(int *)((int)this + 0x679))) &&
           (iVar6 = (**(code **)(*param_1 + 0xf8))(), iVar6 != 0)) {
          return 2;
        }
        break;
      default:
        return 2;
      case 3:
        bVar5 = thunk_FUN_004950b0(this,(short *)((int)this + 0x67d),(short *)((int)this + 0x67f),
                                   (short *)((int)this + 0x681));
        if (CONCAT31(extraout_var_01,bVar5) == 1) {
          iVar11 = (int)*(short *)((int)this + 0x681);
          iVar6 = (int)*(short *)((int)this + 0x67f);
          iVar9 = (int)*(short *)((int)this + 0x67d);
          goto LAB_0047c9fe;
        }
        sVar1 = *(short *)((int)this + 0x66f);
        sVar2 = *(short *)((int)this + 0x673);
        sVar3 = *(short *)((int)this + 0x671);
        if (((sVar1 < 0) || (DAT_007fb240 <= sVar1)) ||
           ((sVar3 < 0 || (((DAT_007fb242 <= sVar3 || (sVar2 < 0)) || (DAT_007fb244 <= sVar2)))))) {
          param_1 = (int *)0x0;
        }
        else {
          param_1 = *(int **)(DAT_007fb248 +
                             ((int)sVar2 * (int)DAT_007fb246 + (int)sVar3 * (int)DAT_007fb240 +
                             (int)sVar1) * 8);
        }
        if (((param_1 != (int *)0x0) && (param_1[6] == *(int *)((int)this + 0x679))) &&
           (iVar6 = (**(code **)(*param_1 + 0xf8))(), iVar6 != 0)) {
          if (*(int *)((int)this + 0x675) == 99) {
            thunk_FUN_004b7d50(param_1,(int)this);
          }
          goto LAB_0047c68c;
        }
        break;
      case -1:
        iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x37e9,0,0,&DAT_007a4ccc,
                                   s_STBoatC__Bring__BRING_MOVEOBJ_er_007ab5b0);
        if (iVar6 == 0) {
          RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x37e9)
          ;
          return 0xffff;
        }
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return uVar8;
      }
      goto LAB_0047c74d;
    }
    if (iVar6 == 3) {
      iVar6 = thunk_FUN_004758e0(this,(undefined4 *)0x2);
      if (((*(int *)((int)this + 0x7ca) != 0) && (*(int *)((int)this + 0x7c6) != 0)) && (iVar6 == 0)
         ) {
        *(undefined4 *)((int)this + 0x5d6) = 0;
        return 2;
      }
      if (*(int *)((int)this + 0x5d6) == 1) {
        sVar1 = *(short *)((int)this + 0x66f);
        sVar2 = *(short *)((int)this + 0x673);
        sVar3 = *(short *)((int)this + 0x671);
        if ((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) ||
            ((sVar3 < 0 || ((DAT_007fb242 <= sVar3 || (sVar2 < 0)))))) || (DAT_007fb244 <= sVar2)) {
          param_1 = (int *)0x0;
        }
        else {
          param_1 = *(int **)(DAT_007fb248 +
                             ((int)sVar2 * (int)DAT_007fb246 + (int)sVar3 * (int)DAT_007fb240 +
                             (int)sVar1) * 8);
        }
        if (((param_1 != (int *)0x0) && (param_1[6] == *(int *)((int)this + 0x679))) &&
           (iVar6 = (**(code **)(*param_1 + 0xf8))(), iVar6 != 0)) {
          if (*(int *)((int)this + 0x675) == 99) {
            thunk_FUN_004b7d50(param_1,(int)this);
          }
          sVar1 = *(short *)((int)this + 0x47);
          sVar2 = *(short *)((int)this + 0x4b);
          sVar3 = *(short *)((int)this + 0x49);
          if ((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) ||
              ((sVar3 < 0 || ((DAT_007fb242 <= sVar3 || (sVar2 < 0)))))) || (DAT_007fb244 <= sVar2))
          {
            param_1 = (int *)0x0;
          }
          else {
            param_1 = *(int **)(DAT_007fb248 +
                               ((int)sVar2 * (int)DAT_007fb246 + (int)sVar3 * (int)DAT_007fb240 +
                               (int)sVar1) * 8);
          }
          if (param_1 != (int *)0x0) {
            if (*(int *)((int)this + 0x66b) == 0x14) {
              if (*(int *)((int)this + 0x675) == 99) {
                sStack_c = *(short *)((int)this + 0x673);
                sStack_e = *(short *)((int)this + 0x671);
                sStack_10 = *(short *)((int)this + 0x66f);
                if (((((sStack_10 < 0) || (DAT_007fb240 <= sStack_10)) || (sStack_e < 0)) ||
                    ((DAT_007fb242 <= sStack_e || (sStack_c < 0)))) || (DAT_007fb244 <= sStack_c)) {
                  this_00 = (void *)0x0;
                }
                else {
                  this_00 = *(void **)(DAT_007fb248 +
                                      ((int)sStack_c * (int)DAT_007fb246 +
                                       (int)sStack_e * (int)DAT_007fb240 + (int)sStack_10) * 8);
                }
                uStack_14 = *(undefined4 *)((int)DAT_00802a38 + 0xe4);
                piStack_8 = param_1;
                thunk_FUN_0045ef00(param_1,0xb,&uStack_14);
                thunk_FUN_004b7d00(this_00,(int)param_1);
                return 2;
              }
            }
            else {
              *(undefined1 *)((int)param_1 + 0x317) = 1;
            }
          }
          return 2;
        }
        goto LAB_0047c74d;
      }
      if (*(int *)((int)this + 0x7ca) != 0) {
        return 2;
      }
      if (*(int *)((int)this + 0x7c6) != 0) {
        return 2;
      }
      if (iVar6 != 0) {
        return 2;
      }
      *(undefined4 *)((int)this + 0x687) = 4;
      uVar10 = 0;
    }
    else {
      if (iVar6 != 4) {
        iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3857,0,0,&DAT_007a4ccc,
                                   s_STBoatC__Bring___incorrect_entry_007ab588);
        if (iVar6 == 0) {
          return 0xffffffff;
        }
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return uVar8;
      }
      iVar6 = thunk_FUN_00460260(this,2);
      if (iVar6 == -1) {
        return 0xffffffff;
      }
      if (iVar6 == 0) {
        return 0;
      }
      uVar10 = extraout_var_02;
      if (iVar6 != 3) {
        return 2;
      }
    }
    iVar6 = CONCAT22(uVar10,*(undefined2 *)((int)this + 0x671));
    uVar7 = (uint)(ushort)(*(short *)((int)this + 0x673) + 1);
    iVar11 = CONCAT22((short)((uint)((int)this + 0x67d) >> 0x10),*(undefined2 *)((int)this + 0x66f))
    ;
    thunk_FUN_0048dfd0(iVar11,iVar6,uVar7,iVar11,iVar6,(int *)uVar7,2,(short *)((int)this + 0x67d),
                       (short *)((int)this + 0x67f),(short *)((int)this + 0x681));
    iVar11 = (int)*(short *)((int)this + 0x681);
    iVar6 = (int)*(short *)((int)this + 0x67f);
    iVar9 = (int)*(short *)((int)this + 0x67d);
    goto LAB_0047c9fe;
  }
  *(int *)((int)this + 0x683) = *(int *)((int)this + 0x683) + 1;
  iVar6 = thunk_FUN_004608b0(this,2);
  if (iVar6 == -1) {
    return 0xffffffff;
  }
  if (*(int *)((int)this + 0x82e) != 0) {
    return 2;
  }
  if (*(int *)((int)this + 0x48b) != 0xffff) {
    return 2;
  }
  if (*(int *)((int)this + 0x683) % 0x32 != 0) {
    return 2;
  }
  sVar1 = *(short *)((int)this + 0x66f);
  sVar2 = *(short *)((int)this + 0x673);
  sVar3 = *(short *)((int)this + 0x671);
  if (((sVar1 < 0) || (DAT_007fb240 <= sVar1)) ||
     ((sVar3 < 0 || (((DAT_007fb242 <= sVar3 || (sVar2 < 0)) || (DAT_007fb244 <= sVar2)))))) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = *(int **)(DAT_007fb248 +
                       ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 + (int)sVar1
                       ) * 8);
  }
  if (((param_1 == (int *)0x0) || (param_1[6] != *(int *)((int)this + 0x679))) ||
     (iVar6 = (**(code **)(*param_1 + 0xf8))(), iVar6 == 0)) {
LAB_0047c74d:
    thunk_FUN_004602b0(this);
    return 0;
  }
  bVar5 = thunk_FUN_004950b0(this,(short *)((int)this + 0x67d),(short *)((int)this + 0x67f),
                             (short *)((int)this + 0x681));
  if (CONCAT31(extraout_var_00,bVar5) != 1) {
    return 2;
  }
  if (*(int *)((int)this + 0x675) == 99) {
    iVar6 = thunk_FUN_004b7d00(param_1,(int)this);
    if (iVar6 == 1) goto LAB_0047c43e;
    if (*(int *)((int)this + 0x675) == 99) {
      return 2;
    }
  }
  piStack_8 = param_1;
  iVar6 = thunk_FUN_004e1490((int)param_1);
  if (iVar6 == 0) {
    return 2;
  }
  if (piStack_8[0x142] != 0) {
    return 2;
  }
  goto LAB_0047c43e;
switchD_0047c090_caseD_0:
  sVar1 = *(short *)((int)this + 0x66f);
  sVar2 = *(short *)((int)this + 0x673);
  sVar3 = *(short *)((int)this + 0x671);
  *(undefined4 *)((int)this + 0xb7) = 0;
  if ((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) ||
      ((sVar3 < 0 || ((DAT_007fb242 <= sVar3 || (sVar2 < 0)))))) || (DAT_007fb244 <= sVar2)) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = *(int **)(DAT_007fb248 +
                       ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 + (int)sVar1
                       ) * 8);
  }
  if (((param_1 == (int *)0x0) || (param_1[6] != *(int *)((int)this + 0x679))) ||
     (iVar6 = (**(code **)(*param_1 + 0xf8))(), iVar6 == 0)) goto LAB_0047c74d;
  bVar5 = thunk_FUN_004950b0(this,(short *)((int)this + 0x67d),(short *)((int)this + 0x67f),
                             (short *)((int)this + 0x681));
  if (CONCAT31(extraout_var,bVar5) != 1) goto LAB_0047c68c;
  if (*(int *)((int)this + 0x675) == 99) {
    iVar6 = thunk_FUN_004b7d00(param_1,(int)this);
    if (iVar6 == 1) goto LAB_0047c43e;
    if (*(int *)((int)this + 0x675) == 99) goto LAB_0047c68c;
  }
  piStack_8 = param_1;
  iVar6 = thunk_FUN_004e1490((int)param_1);
  if ((iVar6 == 0) || (piStack_8[0x142] != 0)) {
LAB_0047c68c:
    *(undefined4 *)((int)this + 0x687) = 1;
    *(undefined4 *)((int)this + 0x683) = 0;
    iVar6 = thunk_FUN_004608b0(this,0);
    if (iVar6 != -1) {
      return 2;
    }
    return 0xffffffff;
  }
LAB_0047c43e:
  iVar11 = (int)*(short *)((int)this + 0x681);
  iVar6 = (int)*(short *)((int)this + 0x67f);
  iVar9 = (int)*(short *)((int)this + 0x67d);
  *(undefined4 *)((int)this + 0x687) = 2;
LAB_0047c9fe:
  thunk_FUN_00481520(this,iVar9,iVar6,iVar11);
  thunk_FUN_00460260(this,0);
  return 2;
}

