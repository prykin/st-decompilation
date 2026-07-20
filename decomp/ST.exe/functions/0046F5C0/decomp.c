
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::ToDok */

int __thiscall STBoatC::ToDok(STBoatC *this,int param_1)

{
  STBoatC_field_0580State SVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar12;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  STWorldObjectVTable *extraout_ECX;
  STWorldObjectVTable *extraout_ECX_00;
  STWorldObjectVTable *extraout_ECX_01;
  STWorldObjectVTable *pSVar13;
  undefined2 uVar17;
  undefined2 extraout_var_01;
  uint uVar14;
  short *psVar15;
  undefined2 extraout_var_02;
  int *piVar16;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  int iVar18;
  undefined2 extraout_var_08;
  int *piVar19;
  STWorldObject *pSVar20;
  STFishC *pSVar21;
  longlong lVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  int iVar29;
  short sVar30;
  byte bVar31;
  undefined4 local_28 [2];
  undefined4 local_20;
  short local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar9 = &this->field_02CC;
    for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    this->field_02C4 = 0;
    if (this->field_0716 == this->field_0712) {
      return 0;
    }
    sVar23 = *(short *)&this->field_0x3a0;
    sVar24 = *(short *)&this->field_0x3a4;
    sVar25 = *(short *)&this->field_0x3a2;
    if (sVar23 < 0) {
      return 0;
    }
    if (SHORT_007fb240 <= sVar23) {
      return 0;
    }
    if (sVar25 < 0) {
      return 0;
    }
    if (SHORT_007fb242 <= sVar25) {
      return 0;
    }
    if (sVar24 < 0) {
      return 0;
    }
    if (SHORT_007fb244 <= sVar24) {
      return 0;
    }
    pSVar20 = g_worldCells
              [(int)sVar24 * (int)SHORT_007fb246 + (int)sVar25 * (int)SHORT_007fb240 + (int)sVar23].
              objects[0];
    if (pSVar20 == (STWorldObject *)0x0) {
      return 0;
    }
    iVar6 = (*pSVar20->vtable->GetObjectTypeId)(pSVar20);
    if (iVar6 != 0x33) {
      return 0;
    }
    if (pSVar20[1].vtable != *(STWorldObjectVTable **)&this->field_0x24) {
      return 0;
    }
    this->field_0580 = CASE_0;
    this->field_0554 = *(short *)&this->field_0x3a0;
    this->field_0556 = *(short *)&this->field_0x3a2;
    this->field_0558 = *(short *)&this->field_0x3a4;
    *(undefined4 *)&this->field_0x57c = 0;
    *(undefined4 *)&this->field_0x578 = 0;
    *(undefined4 *)&this->field_0x574 = 0;
    sVar23 = this->field_0558;
    sVar25 = this->field_0556;
    sVar24 = this->field_0554;
    this->field_00B7 = 3;
LAB_00470e23:
    sub_00481520(this,(int)sVar24,(int)sVar25,sVar23 + 1);
cf_common_exit_00470E2B:
    sub_00460260(this,0);
cf_common_exit_00470E32:
    iVar6 = (*this->vtable->vfunc_D8)();
    return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
  }
  SVar1 = this->field_0580;
  if (SVar1 == CASE_0) {
    iVar6 = sub_00460260(this,2);
    switch(iVar6) {
    case 0:
      if (this->field_0564 == 1) {
        iVar29 = (int)this->field_0556;
        iVar6 = (int)this->field_0554;
        iVar7 = this->field_0558 + 1;
        this->field_0564 = 0;
        break;
      }
      sVar23 = this->field_0554;
      sVar24 = this->field_0558;
      sVar25 = this->field_0556;
      if ((((sVar23 < 0) || (SHORT_007fb240 <= sVar23)) || (sVar25 < 0)) ||
         (((SHORT_007fb242 <= sVar25 || (sVar24 < 0)) || (SHORT_007fb244 <= sVar24)))) {
        pSVar20 = (STWorldObject *)0x0;
      }
      else {
        pSVar20 = g_worldCells
                  [(int)sVar24 * (int)SHORT_007fb246 + (int)sVar25 * (int)SHORT_007fb240 +
                   (int)sVar23].objects[0];
      }
      iVar6 = sub_00490570(this);
      if (iVar6 != 1) {
LAB_0046f794:
        if (((pSVar20 != (STWorldObject *)0x0) &&
            (iVar6 = (*pSVar20->vtable->GetObjectTypeId)(pSVar20), iVar6 == 0x33)) &&
           (pSVar20[1].vtable == *(STWorldObjectVTable **)&this->field_0x24)) {
          this->field_0580 = CASE_2;
LAB_0046f98f:
          iVar6 = Defence(this,0);
          return (-(uint)(iVar6 != -1) & 3) - 1;
        }
LAB_0046f888:
        sub_004602B0(this);
        this->field_00B7 = 0;
        iVar6 = (*this->vtable->vfunc_D8)();
        return -(uint)(iVar6 != 0);
      }
      pSVar13 = extraout_ECX;
      uVar5 = extraout_var_04;
      if (((pSVar20 != (STWorldObject *)0x0) &&
          (iVar6 = (*pSVar20->vtable->GetObjectTypeId)(pSVar20), pSVar13 = extraout_ECX_00,
          uVar5 = extraout_var_05, iVar6 == 0x33)) &&
         (pSVar13 = pSVar20[1].vtable, pSVar13 == *(STWorldObjectVTable **)&this->field_0x24)) {
        iVar6 = thunk_FUN_004e1eb0(pSVar20,(int)this->field_0041,(int)this->field_0043,
                                   (int)this->field_0045);
        this->field_0568 = iVar6;
        pSVar13 = extraout_ECX_01;
        uVar5 = extraout_var_06;
        if (iVar6 != -1) goto LAB_0046f794;
      }
      uVar17 = (undefined2)((uint)pSVar13 >> 0x10);
      uVar12 = (undefined2)((uint)&this->field_055E >> 0x10);
      thunk_FUN_0048dfd0(this,CONCAT22(uVar17,this->field_0047),CONCAT22(uVar12,this->field_0049),
                         CONCAT22(uVar5,this->field_004B),CONCAT22(uVar17,this->field_0554),
                         (int *)CONCAT22(uVar12,this->field_0556),
                         CONCAT22(uVar5,this->field_0558 + 1),(short *)0x1,&this->field_055E,
                         &this->field_0560);
      iVar7 = (int)*(short *)&this->field_0x562;
      iVar29 = (int)this->field_0560;
      iVar6 = (int)this->field_055E;
      this->field_0580 = CASE_1;
      this->field_00B7 = 0;
      break;
    case 1:
      if (this->field_0564 != 1) {
        sVar23 = this->field_0554;
        sVar24 = this->field_0558;
        sVar25 = this->field_0556;
        if ((((((-1 < sVar23) && (sVar23 < SHORT_007fb240)) && (-1 < sVar25)) &&
             ((sVar25 < SHORT_007fb242 && (-1 < sVar24)))) &&
            ((sVar24 < SHORT_007fb244 &&
             ((pSVar20 = g_worldCells
                         [(int)sVar24 * (int)SHORT_007fb246 + (int)sVar25 * (int)SHORT_007fb240 +
                          (int)sVar23].objects[0], pSVar20 != (STWorldObject *)0x0 &&
              (iVar6 = (*pSVar20->vtable->GetObjectTypeId)(pSVar20), iVar6 == 0x33)))))) &&
           (pSVar20[1].vtable == *(STWorldObjectVTable **)&this->field_0x24))
        goto cf_common_exit_004707B7;
        goto LAB_0046f888;
      }
      this->field_0564 = 0;
      sub_004602B0(this);
    case 3:
      iVar29 = (int)this->field_0556;
      iVar6 = (int)this->field_0554;
      iVar7 = this->field_0558 + 1;
      break;
    default:
      goto cf_common_exit_004707B7;
    case -1:
      iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x28ac,0,0,&DAT_007a4ccc,
                                 s_STBoatC__ToDok__move_to_dock_err_007aac3c);
      if (iVar6 != 0) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar6 = 0x28ac;
cf_error_exit_00470C46:
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar6);
      return 0xffff;
    }
    goto LAB_0046fb98;
  }
  if (SVar1 != CASE_1) {
    if (SVar1 == CASE_2) {
      *(int *)&this->field_0x574 = *(int *)&this->field_0x574 + 1;
      iVar6 = Defence(this,2);
      if (iVar6 == -1) {
        return -1;
      }
      if (this->field_082E != 0) {
        return 2;
      }
      if (this->field_048B != 0xffff) {
        return 2;
      }
      if (*(int *)&this->field_0x574 % 0x32 != 1) {
        return 2;
      }
      sVar23 = this->field_0554;
      sVar24 = this->field_0558;
      sVar25 = this->field_0556;
      if ((((-1 < sVar23) && (sVar23 < SHORT_007fb240)) &&
          ((-1 < sVar25 && ((sVar25 < SHORT_007fb242 && (-1 < sVar24)))))) &&
         ((sVar24 < SHORT_007fb244 &&
          (((pSVar21 = (STFishC *)
                       g_worldCells
                       [(int)sVar24 * (int)SHORT_007fb246 + (int)sVar25 * (int)SHORT_007fb240 +
                        (int)sVar23].objects[0], pSVar21 != (STFishC *)0x0 &&
            (iVar6 = (*pSVar21->vtable->vfunc_2C)(), iVar6 == 0x33)) &&
           (*(int *)&pSVar21->field_0x24 == *(int *)&this->field_0x24)))))) {
        iVar6 = thunk_FUN_004e1eb0(pSVar21,(int)this->field_0041,(int)this->field_0043,
                                   (int)this->field_0045);
        this->field_0568 = iVar6;
        if (iVar6 == -1) {
          return 2;
        }
        bVar4 = thunk_FUN_004908a0(this,pSVar21,iVar6);
        if (CONCAT31(extraout_var_00,bVar4) != 1) {
          return 2;
        }
        this->field_055A = pSVar21->field_0018;
        thunk_FUN_004e1fb0(pSVar21,this->field_0568,this->field_0018);
        sVar25 = *(short *)&this->field_0x570;
        sVar24 = *(short *)&this->field_0x56e;
        sVar23 = *(short *)&this->field_0x56c;
        this->field_0580 = CASE_3;
        this->field_00B7 = 0;
LAB_00470bfe:
        sub_00481520(this,(int)sVar23,(int)sVar24,(int)sVar25);
        sub_00460260(this,0);
        return 2;
      }
LAB_0046fd37:
      sub_004602B0(this);
LAB_0046fd3e:
      iVar6 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar6 != 0);
    }
    if (SVar1 == CASE_3) {
      iVar6 = sub_00460260(this,2);
      switch(iVar6) {
      case 0:
        if (this->field_0564 != 1) {
          sVar23 = this->field_0554;
          sVar24 = this->field_0558;
          sVar25 = this->field_0556;
          if ((((-1 < sVar23) && (sVar23 < SHORT_007fb240)) &&
              ((-1 < sVar25 && ((sVar25 < SHORT_007fb242 && (-1 < sVar24)))))) &&
             ((sVar24 < SHORT_007fb244 &&
              ((((pSVar20 = g_worldCells
                            [(int)sVar24 * (int)SHORT_007fb246 + (int)sVar25 * (int)SHORT_007fb240 +
                             (int)sVar23].objects[0], pSVar20 != (STWorldObject *)0x0 &&
                 (iVar6 = (*pSVar20->vtable->GetObjectTypeId)(pSVar20), iVar6 == 0x33)) &&
                (*(int *)&pSVar20[0x21].field_0x10 == 0)) &&
               ((*(int *)&pSVar20[0x10].field_0x5 != 6 &&
                (pSVar20[1].vtable == *(STWorldObjectVTable **)&this->field_0x24)))))))) {
            if ((this->field_0047 == *(short *)&this->field_0x56c) &&
               ((this->field_0049 == *(short *)&this->field_0x56e &&
                (this->field_004B == *(short *)&this->field_0x570)))) {
              this->field_0580 = CASE_4;
              *(undefined4 *)&this->field_0x584 = 0;
              iVar6 = (*this->vtable->vfunc_D8)();
              return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
            }
            thunk_FUN_004e2000(pSVar20,this->field_0568,this->field_0018);
            return 0;
          }
          goto LAB_0046fd3e;
        }
        break;
      case 1:
        if (this->field_0564 != 1) {
          sub_004602B0(this);
          sVar23 = this->field_0554;
          sVar24 = this->field_0558;
          sVar25 = this->field_0556;
          if (((sVar23 < 0) || (SHORT_007fb240 <= sVar23)) ||
             (((sVar25 < 0 || ((SHORT_007fb242 <= sVar25 || (sVar24 < 0)))) ||
              ((SHORT_007fb244 <= sVar24 ||
               (((pSVar21 = (STFishC *)
                            g_worldCells
                            [(int)sVar24 * (int)SHORT_007fb246 + (int)sVar25 * (int)SHORT_007fb240 +
                             (int)sVar23].objects[0], pSVar21 == (STFishC *)0x0 ||
                 (iVar6 = (*pSVar21->vtable->vfunc_2C)((STWorldObject *)pSVar21), iVar6 != 0x33)) ||
                (*(int *)&pSVar21->field_0x24 != *(int *)&this->field_0x24))))))))
          goto LAB_004700a6;
          goto LAB_00470071;
        }
        sub_004602B0(this);
        break;
      default:
        goto cf_common_exit_00470E32;
      case 3:
        sVar23 = this->field_0554;
        sVar24 = this->field_0558;
        sVar25 = this->field_0556;
        if (((((sVar23 < 0) || (SHORT_007fb240 <= sVar23)) ||
             ((sVar25 < 0 || ((SHORT_007fb242 <= sVar25 || (sVar24 < 0)))))) ||
            (SHORT_007fb244 <= sVar24)) ||
           (((pSVar21 = (STFishC *)
                        g_worldCells
                        [(int)sVar24 * (int)SHORT_007fb246 + (int)sVar25 * (int)SHORT_007fb240 +
                         (int)sVar23].objects[0], pSVar21 == (STFishC *)0x0 ||
             (iVar6 = (*pSVar21->vtable->vfunc_2C)((STWorldObject *)pSVar21), iVar6 != 0x33)) ||
            (*(int *)&pSVar21->field_0x24 != *(int *)&this->field_0x24)))) {
LAB_004700a6:
          iVar6 = (*this->vtable->vfunc_D8)();
          return -(uint)(iVar6 != 0);
        }
LAB_00470071:
        thunk_FUN_004908a0(this,pSVar21,this->field_0568);
        sub_00481520(this,(int)*(short *)&this->field_0x56c,(int)*(short *)&this->field_0x56e,
                     (int)*(short *)&this->field_0x570);
        goto cf_common_exit_00470E2B;
      case -1:
        iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2977,0,0,&DAT_007a4ccc,
                                   s_STBoatC__ToDok__move_to_depot_2_e_007aabd8);
        if (iVar6 != 0) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        iVar6 = 0x2977;
        goto cf_error_exit_00470C46;
      }
      sVar23 = this->field_0558;
      sVar25 = this->field_0556;
      sVar24 = this->field_0554;
      this->field_0564 = 0;
      this->field_0580 = CASE_0;
      this->field_00B7 = 3;
      goto LAB_00470e23;
    }
    if (SVar1 == CASE_4) {
      if (*(int *)&this->field_0x584 == 0) {
        iVar7 = (ushort)(this->field_0558 * 200) + 300;
        iVar29 = CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0556 + 1) * 0xc9;
        iVar10 = CONCAT22((short)((uint)iVar29 >> 0x10),
                          *(short *)&this->field_0568 + this->field_0554);
        iVar6 = iVar10 * 0xc9 + 100;
        uVar5 = (undefined2)((uint)(iVar10 * 0x19) >> 0x10);
        uVar5 = (*this->vtable->vfunc_10)
                          (CONCAT22(uVar5,this->field_0041),
                           CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0043),
                           CONCAT22(uVar5,this->field_0045),iVar6,iVar29,iVar7);
        *(undefined2 *)&this->field_0x572 = uVar5;
        *(undefined4 *)&this->field_0x584 = 1;
      }
      if (*(int *)&this->field_0x584 == 1) {
        uVar8 = sub_004176C0(this,*(short *)&this->field_0x572);
        uVar8 = sub_00417910(this,(short)uVar8);
        if (uVar8 == 0xffffffff) {
          iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x29d3,0,0,
                                     &DAT_007a4ccc,s_STBoatC__ToDok__TODOK_PDOCK_007aabb4);
          if (iVar6 == 0) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       0x29d4);
            return 0xffff;
          }
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        if (uVar8 == 0) {
LAB_004707ad:
          *(undefined4 *)&this->field_0x584 = 2;
          goto cf_common_exit_004707B7;
        }
      }
      if (*(int *)&this->field_0x584 == 2) {
        STJellyGunC::sub_00415B30
                  ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                   (*(short *)&this->field_0568 + this->field_0554) * 0xc9 + 100,
                   (this->field_0556 + 1) * 0xc9,this->field_0558 * 200 + 300,this->field_0061);
        *(undefined4 *)&this->field_0x584 = 3;
      }
      if (*(int *)&this->field_0x584 == 3) {
        local_c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_18,&local_14);
        uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar8;
        iVar6 = (uVar8 >> 0x10) % 7 - 3;
        uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar8;
        uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar11;
        local_10 = (uVar11 >> 0x10) % 7 - 3;
        if (((int)this->field_074A <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
           (param_1 = 0, this->field_0x2bf != '\0')) {
          local_8 = (undefined4 *)&this->field_0x2b3;
          do {
            puVar9 = (undefined4 *)
                     thunk_FUN_0041dc40(local_28,*local_8,*(undefined2 *)(local_8 + 1),
                                        this->field_006C);
            uVar2 = *puVar9;
            bVar31 = 0;
            sVar30 = 0;
            iVar29 = -1;
            local_1c = *(short *)(puVar9 + 1);
            sVar28 = 0;
            sVar27 = 0;
            sVar26 = 0;
            sVar25 = 0;
            sVar24 = 0;
            sVar23 = 0;
            local_20 = uVar2;
            if (DAT_0080732c == 1) {
              sVar23 = 0;
              sVar24 = 0;
              sVar25 = 0;
              sVar26 = 0;
              sVar27 = 0;
              sVar28 = 0;
              sVar30 = 0;
              bVar31 = 0;
              lVar22 = Library::MSVCRT::__ftol();
              iVar18 = (int)local_1c + this->field_0045 + local_10 + (int)(short)lVar22;
              iVar7 = (int)this->field_0043 - (int)local_20._2_2_;
              iVar10 = (int)(short)local_20 + iVar6 + this->field_0041;
            }
            else {
              iVar18 = (int)local_1c + local_10 + this->field_0045;
              local_20._2_2_ = (short)((uint)uVar2 >> 0x10);
              iVar7 = (int)this->field_0043 - (int)local_20._2_2_;
              local_20._0_2_ = (short)uVar2;
              iVar10 = (int)(short)local_20 + iVar6 + this->field_0041;
            }
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,iVar10,iVar7 + ((uVar8 >> 0x10) % 7 - 3),iVar18,
                       sVar23,sVar24,sVar25,sVar26,sVar27,sVar28,iVar29,sVar30,bVar31);
            local_8 = (undefined4 *)((int)local_8 + 6);
            param_1 = param_1 + 1;
          } while (param_1 < (int)(uint)(byte)this->field_0x2bf);
        }
        if (local_c == -1) {
          iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x29fe,0,0,
                                     &DAT_007a4ccc,s_STBoatC__UnLoadRC__TODOK_PDOCK_2_007aab8c);
          if (iVar6 == 0) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       0x29ff);
            return 0xffff;
          }
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        if (local_c == 0) {
          this->field_0580 = CASE_5;
          *(undefined4 *)&this->field_0x574 = PTR_00802a38->field_00E4;
          uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar8;
          *(undefined4 *)&this->field_0x584 = 0;
          *(uint *)&this->field_0x578 = (uVar8 >> 0x10) % 0x33 + 0x28;
        }
      }
      goto cf_common_exit_004707B7;
    }
    if (SVar1 == CASE_5) {
      sVar23 = this->field_0554;
      sVar24 = this->field_0558;
      sVar25 = this->field_0556;
      if ((((-1 < sVar23) && (sVar23 < SHORT_007fb240)) && (-1 < sVar25)) &&
         (((sVar25 < SHORT_007fb242 && (-1 < sVar24)) &&
          ((sVar24 < SHORT_007fb244 &&
           ((pSVar20 = g_worldCells
                       [(int)sVar24 * (int)SHORT_007fb246 + (int)sVar25 * (int)SHORT_007fb240 +
                        (int)sVar23].objects[0], pSVar20 != (STWorldObject *)0x0 &&
            (*(int *)&pSVar20->field_0x18 == this->field_055A)))))))) {
        if (PTR_00802a38->field_00E4 == *(int *)&this->field_0x574 + *(int *)&this->field_0x578) {
          (*this->vtable->vfunc_90)(3,0x363);
          iVar6 = (*(short *)&this->field_0x237 * -7) / 10;
          uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar8;
          iVar29 = (*(short *)&this->field_0x237 * -2) / 10;
          uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar11;
          local_20 = CONCAT22((short)((uVar11 >> 0x10) %
                                     (((*(short *)&this->field_0x237 * 2) / 10 - iVar29) + 1U)) +
                              (short)iVar29,
                              (short)((uVar8 >> 0x10) %
                                     (((*(short *)&this->field_0x237 * 7) / 10 - iVar6) + 1U)) +
                              (short)iVar6);
          puVar9 = (undefined4 *)thunk_FUN_0041dc40(local_28,local_20,0,this->field_006C);
          uVar2 = *puVar9;
          local_1c = *(short *)(puVar9 + 1);
          local_20._2_2_ = (short)((uint)uVar2 >> 0x10);
          iVar29 = (int)local_20._2_2_;
          local_20._0_2_ = (short)uVar2;
          iVar6 = (int)(short)local_20;
          local_20 = uVar2;
          thunk_FUN_00637930(this->field_01ED,0,this->field_0041 + iVar6,this->field_0043 + iVar29,
                             this->field_0045 + -0x28,0,0);
          *(undefined4 *)&this->field_0x574 = PTR_00802a38->field_00E4;
          uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar8;
          *(uint *)&this->field_0x578 = (uVar8 >> 0x10) % 0x33 + 0x28;
        }
        thunk_FUN_004e20d0(pSVar20,this->field_0568,this->field_0018,this->field_06F7,
                           this->field_0716);
        iVar6 = thunk_FUN_004e2340(pSVar20,this->field_0568,this->field_0018,(undefined4 *)0x0);
        this->field_0716 = iVar6;
        if (iVar6 != this->field_0712) goto cf_common_exit_00470E32;
      }
      sub_0048DBA0(this);
      this->field_0580 = CASE_6;
      iVar6 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
    }
    if (SVar1 != CASE_6) {
      if (SVar1 == CASE_7) {
        iVar6 = sub_00460260(this,2);
        if (iVar6 == -1) {
          iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2a8c,0,0,
                                     &DAT_007a4ccc,s_STBoatC__ToDok__TODOK_MOVEWAIT_e_007aab18);
          if (iVar6 != 0) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          iVar6 = 0x2a8c;
          goto cf_error_exit_00470C46;
        }
        if (iVar6 == 0) {
          return 0;
        }
        if (iVar6 != 3) {
          return 2;
        }
        uVar11 = (uint)(ushort)this->field_004B;
        piVar16 = (int *)CONCAT22(extraout_var_02,this->field_0049);
        iVar29 = CONCAT22((short)((uint)&this->field_055E >> 0x10),this->field_0047);
        psVar15 = (short *)0x3;
        iVar6 = iVar29;
        piVar19 = piVar16;
        uVar8 = uVar11;
      }
      else {
        if (SVar1 != CASE_8) {
          iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2ab3,0,0,
                                     &DAT_007a4ccc,s_STBoatC__ToDok___incorrect_entry_007aaaf0);
          if (iVar6 == 0) {
            return -1;
          }
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        iVar6 = sub_00460260(this,2);
        if (iVar6 == -1) {
          return -1;
        }
        if (iVar6 == 0) {
          return 0;
        }
        if (iVar6 != 3) {
          return 2;
        }
        uVar8 = CONCAT22(extraout_var_03,this->field_004B);
        piVar19 = (int *)CONCAT22(extraout_var_08,this->field_0049);
        psVar15 = (short *)0x1;
        iVar6 = CONCAT22(extraout_var_03,this->field_0047);
        uVar11 = CONCAT22(extraout_var_08,*(undefined2 *)&this->field_0x562);
        piVar16 = (int *)CONCAT22(extraout_var_03,this->field_0560);
        iVar29 = CONCAT22(extraout_var_08,this->field_055E);
      }
      thunk_FUN_0048dfd0(this,iVar29,(uint)piVar16,uVar11,iVar6,piVar19,uVar8,psVar15,
                         &this->field_055E,&this->field_0560);
      sVar25 = *(short *)&this->field_0x562;
      sVar24 = this->field_0560;
      sVar23 = this->field_055E;
      goto LAB_00470bfe;
    }
    iVar6 = *(int *)&this->field_0x57c + 1;
    *(int *)&this->field_0x57c = iVar6;
    if (iVar6 < 0x1e) goto cf_common_exit_004707B7;
    if (*(int *)&this->field_0x584 == 0) {
      iVar29 = (ushort)(*(short *)&this->field_0x570 * 200) + 100;
      iVar7 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)&this->field_0x56e * 0xc9) + 100;
      iVar6 = CONCAT22((short)((uint)iVar29 >> 0x10),*(short *)&this->field_0x56c * 0xc9) + 100;
      uVar5 = (undefined2)((uint)iVar7 >> 0x10);
      uVar5 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar5,this->field_0041),
                         CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0043),
                         CONCAT22(uVar5,this->field_0045),iVar6,iVar7,iVar29);
      *(undefined2 *)&this->field_0x572 = uVar5;
      *(undefined4 *)&this->field_0x584 = 1;
    }
    if (*(int *)&this->field_0x584 == 1) {
      uVar8 = sub_004176C0(this,*(short *)&this->field_0x572);
      uVar8 = sub_00417910(this,(short)uVar8);
      if (uVar8 == 0xffffffff) {
        iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2a42,0,0,&DAT_007a4ccc,
                                   s_STBoatC__ToDok__TODOK_ODOCK_007aab68);
        if (iVar6 == 0) {
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                     0x2a43);
          return 0xffff;
        }
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      if (uVar8 != 0) goto cf_common_exit_004707B7;
      goto LAB_004707ad;
    }
    if (*(int *)&this->field_0x584 == 2) {
      STJellyGunC::sub_00415B30
                ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                 *(short *)&this->field_0x56c * 0xc9 + 100,*(short *)&this->field_0x56e * 0xc9 + 100
                 ,*(short *)&this->field_0x570 * 200 + 100,this->field_0061);
      *(undefined4 *)&this->field_0x584 = 3;
    }
    if (*(int *)&this->field_0x584 != 3) goto cf_common_exit_00470E32;
    local_c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_10,&local_14);
    uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar8;
    iVar6 = (uVar8 >> 0x10) % 7 - 3;
    uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar8;
    uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar11;
    uVar14 = this->field_074A;
    local_18 = (uVar11 >> 0x10) % 7 - 3;
    if (((int)uVar14 <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
       (param_1 = 0, this->field_0x2bf != '\0')) {
      local_8 = (undefined4 *)&this->field_0x2b3;
      do {
        puVar9 = (undefined4 *)
                 thunk_FUN_0041dc40(local_28,*local_8,*(undefined2 *)(local_8 + 1),this->field_006C)
        ;
        uVar2 = *puVar9;
        bVar31 = 0;
        sVar30 = 0;
        iVar29 = -1;
        local_1c = *(short *)(puVar9 + 1);
        sVar28 = 0;
        sVar27 = 0;
        sVar26 = 0;
        sVar25 = 0;
        sVar24 = 0;
        sVar23 = 0;
        local_20 = uVar2;
        if (DAT_0080732c == 1) {
          sVar23 = 0;
          sVar24 = 0;
          sVar25 = 0;
          sVar26 = 0;
          sVar27 = 0;
          sVar28 = 0;
          sVar30 = 0;
          bVar31 = 0;
          lVar22 = Library::MSVCRT::__ftol();
          iVar18 = (int)local_1c + this->field_0045 + local_18 + (int)(short)lVar22;
          iVar7 = (int)this->field_0043 - (int)local_20._2_2_;
          iVar10 = (int)(short)local_20 + iVar6 + this->field_0041;
        }
        else {
          iVar18 = (int)local_1c + local_18 + this->field_0045;
          local_20._2_2_ = (short)((uint)uVar2 >> 0x10);
          iVar7 = (int)this->field_0043 - (int)local_20._2_2_;
          local_20._0_2_ = (short)uVar2;
          iVar10 = (int)(short)local_20 + iVar6 + this->field_0041;
        }
        TraksClassTy::TraksCreate
                  (g_traksClass_00802A7C,1,2,7,iVar10,iVar7 + ((uVar8 >> 0x10) % 7 - 3),iVar18,
                   sVar23,sVar24,sVar25,sVar26,sVar27,sVar28,iVar29,sVar30,bVar31);
        local_8 = (undefined4 *)((int)local_8 + 6);
        param_1 = param_1 + 1;
        uVar14 = (uint)(byte)this->field_0x2bf;
      } while (param_1 < (int)uVar14);
    }
    if (local_c == -1) {
      iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2a6c,0,0,&DAT_007a4ccc,
                                 s_STBoatC__ToDok__TODOK_ODOCK_2_007aab44);
      if (iVar6 != 0) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar6 = 0x2a6d;
      goto cf_error_exit_00470C46;
    }
    if (local_c != 0) goto cf_common_exit_00470E32;
    sVar23 = this->field_0554;
    pSVar20 = (STWorldObject *)0x0;
    sVar24 = this->field_0558;
    psVar15 = (short *)CONCAT22((short)(uVar14 >> 0x10),sVar24);
    sVar25 = this->field_0556;
    if ((((sVar23 < 0) || (SHORT_007fb240 <= sVar23)) || (sVar25 < 0)) ||
       (((SHORT_007fb242 <= sVar25 || (sVar24 < 0)) || (SHORT_007fb244 <= sVar24)))) {
cf_common_exit_00470B14:
      iVar6 = CONCAT22((short)((uint)pSVar20 >> 0x10),this->field_004B);
      uVar8 = CONCAT22((short)((uint)psVar15 >> 0x10),this->field_0049);
      iVar29 = CONCAT22((short)((uint)&this->field_055E >> 0x10),this->field_0047);
      this->field_0580 = CASE_7;
      thunk_FUN_0048dfd0(this,iVar29,uVar8,iVar6,iVar29,(int *)uVar8,iVar6,(short *)0x3,
                         &this->field_055E,&this->field_0560);
    }
    else {
      psVar15 = (short *)((int)sVar24 * (int)SHORT_007fb246 + (int)sVar25 * (int)SHORT_007fb240 +
                         (int)sVar23);
      pSVar20 = g_worldCells[(int)psVar15].objects[0];
      if ((pSVar20 == (STWorldObject *)0x0) ||
         (psVar15 = *(short **)&pSVar20->field_0x18, psVar15 != (short *)this->field_055A))
      goto cf_common_exit_00470B14;
      psVar15 = &this->field_055E;
      if (*(int *)&pSVar20[0x1d].field_0x18 != 0) {
        if (psVar15 != (short *)0x0) {
          uVar5 = *(undefined2 *)&pSVar20[0x1d].field_0x1e;
          this->field_055E = *(undefined2 *)&pSVar20[0x1d].field_0x1c;
          this->field_0560 = uVar5;
        }
        if (&this->field_0560 != (short *)0x0) {
          psVar15 = (short *)pSVar20[0x1d].value_20;
          *(short **)&this->field_0560 = psVar15;
        }
        if (&this->field_0x562 != (undefined1 *)0x0) {
          *(STWorldObjectVTable **)&this->field_0x562 = pSVar20[0x1e].vtable;
        }
      }
      if (*(int *)&pSVar20[0x1d].field_0x18 != 1) goto cf_common_exit_00470B14;
      this->field_0580 = CASE_8;
    }
    sub_00481520(this,(int)this->field_055E,(int)this->field_0560,(int)*(short *)&this->field_0x562)
    ;
    goto cf_common_exit_00470E2B;
  }
  iVar6 = sub_00460260(this,2);
  switch(iVar6) {
  case 0:
    iVar6 = sub_00490570(this);
    if (iVar6 != 1) {
      this->field_0580 = CASE_2;
      goto LAB_0046f98f;
    }
    uVar5 = (undefined2)((uint)&this->field_055E >> 0x10);
    thunk_FUN_0048dfd0(this,CONCAT22(extraout_var_01,this->field_0047),
                       CONCAT22(uVar5,this->field_0049),CONCAT22(extraout_var_07,this->field_004B),
                       CONCAT22(extraout_var_01,this->field_0554),
                       (int *)CONCAT22(uVar5,this->field_0556),
                       CONCAT22(extraout_var_07,this->field_0558 + 1),(short *)0x1,&this->field_055E
                       ,&this->field_0560);
    iVar7 = (int)*(short *)&this->field_0x562;
    iVar29 = (int)this->field_0560;
    iVar6 = (int)this->field_055E;
    break;
  case 1:
    if (this->field_0564 == 1) {
      this->field_0564 = 0;
      sub_004602B0(this);
      this->field_0580 = CASE_0;
      this->field_00B7 = 3;
      sub_00481520(this,(int)this->field_0554,(int)this->field_0556,this->field_0558 + 1);
      sub_00460260(this,0);
      goto cf_common_exit_004707B7;
    }
    sVar23 = this->field_0554;
    sVar24 = this->field_0558;
    sVar25 = this->field_0556;
    if (((((((sVar23 < 0) || (SHORT_007fb240 <= sVar23)) || (sVar25 < 0)) ||
          ((SHORT_007fb242 <= sVar25 || (sVar24 < 0)))) || (SHORT_007fb244 <= sVar24)) ||
        ((pSVar21 = (STFishC *)
                    g_worldCells
                    [(int)sVar24 * (int)SHORT_007fb246 + (int)sVar25 * (int)SHORT_007fb240 +
                     (int)sVar23].objects[0], pSVar21 == (STFishC *)0x0 ||
         (iVar6 = (*pSVar21->vtable->vfunc_2C)(), iVar6 != 0x33)))) ||
       (*(int *)&pSVar21->field_0x24 != *(int *)&this->field_0x24)) goto LAB_0046fd37;
    iVar6 = thunk_FUN_004e1eb0(pSVar21,(int)this->field_0041,(int)this->field_0043,
                               (int)this->field_0045);
    this->field_0568 = iVar6;
    if ((iVar6 == -1) ||
       (bVar4 = thunk_FUN_004908a0(this,pSVar21,iVar6), CONCAT31(extraout_var,bVar4) != 1))
    goto cf_common_exit_004707B7;
    sub_004602B0(this);
    this->field_055A = pSVar21->field_0018;
    thunk_FUN_004e1fb0(pSVar21,this->field_0568,this->field_0018);
    iVar7 = (int)*(short *)&this->field_0x570;
    iVar29 = (int)*(short *)&this->field_0x56e;
    iVar6 = (int)*(short *)&this->field_0x56c;
    this->field_0580 = CASE_3;
    break;
  default:
    goto cf_common_exit_004707B7;
  case 3:
    iVar6 = sub_00490570(this);
    if (iVar6 == 1) {
      uVar17 = (undefined2)((uint)&this->field_0x562 >> 0x10);
      uVar5 = (undefined2)((uint)&this->field_0560 >> 0x10);
      uVar12 = (undefined2)((uint)&this->field_055E >> 0x10);
      thunk_FUN_0048dfd0(this,CONCAT22(uVar12,this->field_0047),CONCAT22(uVar5,this->field_0049),
                         CONCAT22(uVar17,this->field_004B),CONCAT22(uVar12,this->field_0554),
                         (int *)CONCAT22(uVar5,this->field_0556),
                         CONCAT22(uVar17,this->field_0558 + 1),(short *)0x1,&this->field_055E,
                         &this->field_0560);
    }
    sub_00481520(this,(int)this->field_055E,(int)this->field_0560,(int)*(short *)&this->field_0x562)
    ;
    sub_00460260(this,0);
    goto cf_common_exit_004707B7;
  case -1:
    iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2907,0,0,&DAT_007a4ccc,
                               s_STBoatC__ToDok__correct_move_to_d_007aac08);
    if (iVar6 == 0) {
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2907);
      return 0xffff;
    }
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
LAB_0046fb98:
  sub_00481520(this,iVar6,iVar29,iVar7);
  sub_00460260(this,0);
cf_common_exit_004707B7:
  iVar6 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
}

