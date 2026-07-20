
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Bring */

undefined4 __thiscall STBoatC::Bring(STBoatC *this,STBoatC *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STBoatC_field_0687State SVar4;
  STBoatC_field_06F7State SVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined2 uVar12;
  undefined2 extraout_var_02;
  int iVar13;
  void *this_00;
  undefined4 *puVar14;
  undefined4 local_14;
  short local_10;
  short local_e;
  short local_c;
  STBoatC *local_8;
  
  if ((param_1 == (STBoatC *)0x0) || (param_1 == (STBoatC *)0x1)) {
    puVar14 = &this->field_02CC;
    for (iVar8 = 0x17; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    SVar5 = this->field_06F7;
    this->field_02C4 = 0;
    if ((((SVar5 != CASE_7) && (SVar5 != CASE_13)) && (SVar5 != CASE_1B)) || (this->field_07CA == 0)
       ) {
      return 0;
    }
    iVar8 = FUN_006e62d0(PTR_00802a38,this->field_07CA,(int *)&param_1);
    if (iVar8 == -4) {
      iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3781,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Bring_can_not_find_obje_007ab55c);
      if (iVar8 == 0) {
        return 0;
      }
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return uVar10;
    }
    sVar1 = *(short *)&this->field_0x41b;
    sVar2 = *(short *)&this->field_0x41d;
    *(undefined4 *)&this->field_0x66b = param_1->field_0020;
    sVar3 = *(short *)&this->field_0x419;
    this->field_066F = sVar3;
    this->field_0671 = sVar1;
    this->field_0673 = sVar2;
    if ((((sVar3 < 0) || (SHORT_007fb240 <= sVar3)) ||
        ((sVar1 < 0 || ((SHORT_007fb242 <= sVar1 || (sVar2 < 0)))))) || (SHORT_007fb244 <= sVar2)) {
      param_1 = (STBoatC *)0x0;
    }
    else {
      param_1 = *(STBoatC **)
                 (DAT_007fb248 +
                 ((int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar1 + (int)sVar3)
                 * 8);
    }
    if (param_1 == (STBoatC *)0x0) {
      return 0;
    }
    iVar8 = (*param_1->vtable->vfunc_2C)();
    this->field_0675 = iVar8;
    if ((((iVar8 != 0x52) && (iVar8 != 0x5f)) || (*(int *)&this->field_0x66b != 0x1a4)) &&
       (iVar8 != 99)) {
      return 0;
    }
    iVar13 = (short)this->field_0673 + 1;
    iVar8 = (int)(short)this->field_0671;
    this->field_0679 = param_1->field_0018;
    iVar11 = (int)(short)this->field_066F;
    this->field_0687 = CASE_0;
    this->field_00B7 = 3;
    goto cf_common_exit_0047C9FE;
  }
  SVar4 = this->field_0687;
  if (SVar4 == CASE_0) {
    iVar8 = sub_00460260(this,2);
    switch(iVar8) {
    case 0:
      goto switchD_0047c090_caseD_0;
    case 1:
      sVar1 = this->field_066F;
      sVar2 = this->field_0673;
      sVar3 = this->field_0671;
      if (((sVar1 < 0) || (SHORT_007fb240 <= sVar1)) ||
         (((sVar3 < 0 || ((SHORT_007fb242 <= sVar3 || (sVar2 < 0)))) || (SHORT_007fb244 <= sVar2))))
      {
        param_1 = (STBoatC *)0x0;
      }
      else {
        param_1 = *(STBoatC **)
                   (DAT_007fb248 +
                   ((int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar3 + (int)sVar1
                   ) * 8);
      }
      if (((param_1 != (STBoatC *)0x0) && (param_1->field_0018 == this->field_0679)) &&
         (iVar8 = (*param_1->vtable->vfunc_F8)(), iVar8 != 0)) {
        return 2;
      }
      sub_004602B0(this);
      this->field_00B7 = 0;
      return 0;
    default:
      return 2;
    case 3:
      sub_00481520(this,(int)(short)this->field_066F,(int)(short)this->field_0671,
                   (short)this->field_0673 + 1);
      sub_00460260(this,0);
      return 2;
    case -1:
      iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x379a,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Bring__BRING_MOVE_error_007ab5dc);
      if (iVar8 == 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x379a
                  );
        return 0xffff;
      }
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return uVar10;
    }
  }
  if (SVar4 != CASE_1) {
    if (SVar4 == CASE_2) {
      iVar8 = sub_00460260(this,2);
      switch(iVar8) {
      case 0:
        sVar1 = this->field_066F;
        sVar2 = this->field_0673;
        sVar3 = this->field_0671;
        if (((sVar1 < 0) || (SHORT_007fb240 <= sVar1)) ||
           ((sVar3 < 0 || (((SHORT_007fb242 <= sVar3 || (sVar2 < 0)) || (SHORT_007fb244 <= sVar2))))
           )) {
          param_1 = (STBoatC *)0x0;
        }
        else {
          param_1 = *(STBoatC **)
                     (DAT_007fb248 +
                     ((int)sVar2 * (int)SHORT_007fb246 + (int)sVar3 * (int)SHORT_007fb240 +
                     (int)sVar1) * 8);
        }
        if (((param_1 != (STBoatC *)0x0) && (param_1->field_0018 == this->field_0679)) &&
           ((iVar8 = (*param_1->vtable->vfunc_F8)(), iVar8 != 0 &&
            ((param_1->field_0020 != 1000 ||
             ((*(int *)&param_1->field_0x4b4 == 0 && (*(int *)&param_1->field_0x245 != 6)))))))) {
          this->field_05D6 = 0;
          this->field_0687 = CASE_3;
          return 2;
        }
        break;
      case 1:
        sVar1 = this->field_066F;
        sVar2 = this->field_0673;
        sVar3 = this->field_0671;
        if (((sVar1 < 0) || (SHORT_007fb240 <= sVar1)) ||
           ((sVar3 < 0 || (((SHORT_007fb242 <= sVar3 || (sVar2 < 0)) || (SHORT_007fb244 <= sVar2))))
           )) {
          param_1 = (STBoatC *)0x0;
        }
        else {
          param_1 = *(STBoatC **)
                     (DAT_007fb248 +
                     ((int)sVar2 * (int)SHORT_007fb246 + (int)sVar3 * (int)SHORT_007fb240 +
                     (int)sVar1) * 8);
        }
        if (((param_1 != (STBoatC *)0x0) && (param_1->field_0018 == this->field_0679)) &&
           (iVar8 = (*param_1->vtable->vfunc_F8)(), iVar8 != 0)) {
          return 2;
        }
        break;
      default:
        return 2;
      case 3:
        bVar7 = thunk_FUN_004950b0(this,(short *)&this->field_0x67d,(short *)&this->field_0x67f,
                                   (short *)&this->field_0x681);
        if (CONCAT31(extraout_var_01,bVar7) == 1) {
          iVar13 = (int)*(short *)&this->field_0x681;
          iVar8 = (int)*(short *)&this->field_0x67f;
          iVar11 = (int)*(short *)&this->field_0x67d;
          goto cf_common_exit_0047C9FE;
        }
        sVar1 = this->field_066F;
        sVar2 = this->field_0673;
        sVar3 = this->field_0671;
        if (((sVar1 < 0) || (SHORT_007fb240 <= sVar1)) ||
           ((sVar3 < 0 || (((SHORT_007fb242 <= sVar3 || (sVar2 < 0)) || (SHORT_007fb244 <= sVar2))))
           )) {
          param_1 = (STBoatC *)0x0;
        }
        else {
          param_1 = *(STBoatC **)
                     (DAT_007fb248 +
                     ((int)sVar2 * (int)SHORT_007fb246 + (int)sVar3 * (int)SHORT_007fb240 +
                     (int)sVar1) * 8);
        }
        if (((param_1 != (STBoatC *)0x0) && (param_1->field_0018 == this->field_0679)) &&
           (iVar8 = (*param_1->vtable->vfunc_F8)(), iVar8 != 0)) {
          if (this->field_0675 == 99) {
            thunk_FUN_004b7d50(param_1,this);
          }
          goto cf_common_exit_0047C68C;
        }
        break;
      case -1:
        iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x37e9,0,0,&DAT_007a4ccc,
                                   s_STBoatC__Bring__BRING_MOVEOBJ_er_007ab5b0);
        if (iVar8 == 0) {
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                     0x37e9);
          return 0xffff;
        }
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return uVar10;
      }
      goto cf_common_exit_0047C74D;
    }
    if (SVar4 == CASE_3) {
      iVar8 = UnLoadObj(this,2);
      if (((this->field_07CA != 0) && (this->field_07C6 != 0)) && (iVar8 == 0)) {
        this->field_05D6 = 0;
        return 2;
      }
      if (this->field_05D6 == 1) {
        sVar1 = this->field_066F;
        sVar2 = this->field_0673;
        sVar3 = this->field_0671;
        if ((((sVar1 < 0) || (SHORT_007fb240 <= sVar1)) ||
            ((sVar3 < 0 || ((SHORT_007fb242 <= sVar3 || (sVar2 < 0)))))) ||
           (SHORT_007fb244 <= sVar2)) {
          param_1 = (STBoatC *)0x0;
        }
        else {
          param_1 = *(STBoatC **)
                     (DAT_007fb248 +
                     ((int)sVar2 * (int)SHORT_007fb246 + (int)sVar3 * (int)SHORT_007fb240 +
                     (int)sVar1) * 8);
        }
        if (((param_1 != (STBoatC *)0x0) && (param_1->field_0018 == this->field_0679)) &&
           (iVar8 = (*param_1->vtable->vfunc_F8)(), iVar8 != 0)) {
          if (this->field_0675 == 99) {
            thunk_FUN_004b7d50(param_1,this);
          }
          sVar1 = this->field_0047;
          sVar2 = this->field_004B;
          sVar3 = this->field_0049;
          if ((((sVar1 < 0) || (SHORT_007fb240 <= sVar1)) ||
              ((sVar3 < 0 || ((SHORT_007fb242 <= sVar3 || (sVar2 < 0)))))) ||
             (SHORT_007fb244 <= sVar2)) {
            param_1 = (STBoatC *)0x0;
          }
          else {
            param_1 = *(STBoatC **)
                       (DAT_007fb248 +
                       ((int)sVar2 * (int)SHORT_007fb246 + (int)sVar3 * (int)SHORT_007fb240 +
                       (int)sVar1) * 8);
          }
          if (param_1 != (STBoatC *)0x0) {
            if (*(int *)&this->field_0x66b == 0x14) {
              if (this->field_0675 == 99) {
                local_c = this->field_0673;
                local_e = this->field_0671;
                local_10 = this->field_066F;
                if (((((local_10 < 0) || (SHORT_007fb240 <= local_10)) || (local_e < 0)) ||
                    ((SHORT_007fb242 <= local_e || (local_c < 0)))) || (SHORT_007fb244 <= local_c))
                {
                  this_00 = (void *)0x0;
                }
                else {
                  this_00 = *(void **)(DAT_007fb248 +
                                      ((int)local_c * (int)SHORT_007fb246 +
                                       (int)local_e * (int)SHORT_007fb240 + (int)local_10) * 8);
                }
                local_14 = PTR_00802a38->field_00E4;
                local_8 = param_1;
                CmdToObj(param_1,CASE_B,&local_14);
                thunk_FUN_004b7d00(this_00,(int *)param_1);
                return 2;
              }
            }
            else {
              *(undefined1 *)((int)&param_1->field_0314 + 3) = 1;
            }
          }
          return 2;
        }
        goto cf_common_exit_0047C74D;
      }
      if (this->field_07CA != 0) {
        return 2;
      }
      if (this->field_07C6 != 0) {
        return 2;
      }
      if (iVar8 != 0) {
        return 2;
      }
      this->field_0687 = CASE_4;
      uVar12 = 0;
    }
    else {
      if (SVar4 != CASE_4) {
        iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3857,0,0,&DAT_007a4ccc,
                                   s_STBoatC__Bring___incorrect_entry_007ab588);
        if (iVar8 == 0) {
          return 0xffffffff;
        }
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return uVar10;
      }
      iVar8 = sub_00460260(this,2);
      if (iVar8 == -1) {
        return 0xffffffff;
      }
      if (iVar8 == 0) {
        return 0;
      }
      uVar12 = extraout_var_02;
      if (iVar8 != 3) {
        return 2;
      }
    }
    iVar8 = CONCAT22(uVar12,this->field_0671);
    uVar9 = (uint)(ushort)(this->field_0673 + 1);
    iVar13 = CONCAT22((short)((uint)&this->field_0x67d >> 0x10),this->field_066F);
    thunk_FUN_0048dfd0(iVar13,iVar8,uVar9,iVar13,iVar8,(int *)uVar9,2,(short *)&this->field_0x67d,
                       (short *)&this->field_0x67f,(short *)&this->field_0x681);
    iVar13 = (int)*(short *)&this->field_0x681;
    iVar8 = (int)*(short *)&this->field_0x67f;
    iVar11 = (int)*(short *)&this->field_0x67d;
    goto cf_common_exit_0047C9FE;
  }
  *(int *)&this->field_0x683 = *(int *)&this->field_0x683 + 1;
  iVar8 = Defence(this,2);
  if (iVar8 == -1) {
    return 0xffffffff;
  }
  if (this->field_082E != 0) {
    return 2;
  }
  if (this->field_048B != 0xffff) {
    return 2;
  }
  if (*(int *)&this->field_0x683 % 0x32 != 0) {
    return 2;
  }
  sVar1 = this->field_066F;
  sVar2 = this->field_0673;
  sVar3 = this->field_0671;
  if (((sVar1 < 0) || (SHORT_007fb240 <= sVar1)) ||
     ((sVar3 < 0 || (((SHORT_007fb242 <= sVar3 || (sVar2 < 0)) || (SHORT_007fb244 <= sVar2)))))) {
    param_1 = (STBoatC *)0x0;
  }
  else {
    param_1 = *(STBoatC **)
               (DAT_007fb248 +
               ((int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar3 + (int)sVar1) *
               8);
  }
  if (((param_1 == (STBoatC *)0x0) || (param_1->field_0018 != this->field_0679)) ||
     (iVar8 = (*param_1->vtable->vfunc_F8)(), iVar8 == 0)) {
cf_common_exit_0047C74D:
    sub_004602B0(this);
    return 0;
  }
  bVar7 = thunk_FUN_004950b0(this,(short *)&this->field_0x67d,(short *)&this->field_0x67f,
                             (short *)&this->field_0x681);
  if (CONCAT31(extraout_var_00,bVar7) != 1) {
    return 2;
  }
  if (this->field_0675 == 99) {
    iVar8 = thunk_FUN_004b7d00(param_1,(int *)this);
    if (iVar8 == 1) goto cf_common_exit_0047C43E;
    if (this->field_0675 == 99) {
      return 2;
    }
  }
  local_8 = param_1;
  iVar8 = thunk_FUN_004e1490((int)param_1);
  if (iVar8 == 0) {
    return 2;
  }
  if (local_8->field_0508 != CASE_0) {
    return 2;
  }
  goto cf_common_exit_0047C43E;
switchD_0047c090_caseD_0:
  sVar1 = this->field_066F;
  sVar2 = this->field_0673;
  sVar3 = this->field_0671;
  this->field_00B7 = 0;
  if ((((sVar1 < 0) || (SHORT_007fb240 <= sVar1)) ||
      ((sVar3 < 0 || ((SHORT_007fb242 <= sVar3 || (sVar2 < 0)))))) || (SHORT_007fb244 <= sVar2)) {
    param_1 = (STBoatC *)0x0;
  }
  else {
    param_1 = *(STBoatC **)
               (DAT_007fb248 +
               ((int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar3 + (int)sVar1) *
               8);
  }
  if (((param_1 == (STBoatC *)0x0) || (param_1->field_0018 != this->field_0679)) ||
     (iVar8 = (*param_1->vtable->vfunc_F8)(), iVar8 == 0)) goto cf_common_exit_0047C74D;
  bVar7 = thunk_FUN_004950b0(this,(short *)&this->field_0x67d,(short *)&this->field_0x67f,
                             (short *)&this->field_0x681);
  if (CONCAT31(extraout_var,bVar7) != 1) goto cf_common_exit_0047C68C;
  if (this->field_0675 == 99) {
    iVar8 = thunk_FUN_004b7d00(param_1,(int *)this);
    if (iVar8 == 1) goto cf_common_exit_0047C43E;
    if (this->field_0675 == 99) goto cf_common_exit_0047C68C;
  }
  local_8 = param_1;
  iVar8 = thunk_FUN_004e1490((int)param_1);
  if ((iVar8 == 0) || (local_8->field_0508 != CASE_0)) {
cf_common_exit_0047C68C:
    this->field_0687 = CASE_1;
    *(undefined4 *)&this->field_0x683 = 0;
    iVar8 = Defence(this,0);
    if (iVar8 != -1) {
      return 2;
    }
    return 0xffffffff;
  }
cf_common_exit_0047C43E:
  iVar13 = (int)*(short *)&this->field_0x681;
  iVar8 = (int)*(short *)&this->field_0x67f;
  iVar11 = (int)*(short *)&this->field_0x67d;
  this->field_0687 = CASE_2;
cf_common_exit_0047C9FE:
  sub_00481520(this,iVar11,iVar8,iVar13);
  sub_00460260(this,0);
  return 2;
}

