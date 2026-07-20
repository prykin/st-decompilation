
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::UnLoadRC */

int __thiscall STBoatC::UnLoadRC(STBoatC *this,int param_1)

{
  STBoatC_field_054CState SVar1;
  STFishC *pSVar2;
  STBoatC_field_06F7State SVar3;
  code *pcVar4;
  bool bVar5;
  undefined2 uVar6;
  int iVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 uVar15;
  uint uVar13;
  undefined4 extraout_ECX;
  undefined2 extraout_var_03;
  int *piVar14;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  int *piVar16;
  undefined2 uVar19;
  int iVar17;
  STBoatCVTable *pSVar18;
  STWorldObject *pSVar20;
  longlong lVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short *psVar28;
  short sVar29;
  byte bVar30;
  undefined4 uVar31;
  undefined4 local_28 [2];
  undefined4 local_20;
  short local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar11 = &this->field_02CC;
    for (iVar7 = 0x17; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    this->field_02C4 = 0;
    if (this->field_07DA + this->field_07D6 + *(int *)&this->field_0x7d2 == 0) {
      return 0;
    }
    sVar22 = *(short *)&this->field_0x396;
    sVar23 = *(short *)&this->field_0x39a;
    sVar24 = *(short *)&this->field_0x398;
    if (sVar22 < 0) {
      return 0;
    }
    if (SHORT_007fb240 <= sVar22) {
      return 0;
    }
    if (sVar24 < 0) {
      return 0;
    }
    if (SHORT_007fb242 <= sVar24) {
      return 0;
    }
    if (sVar23 < 0) {
      return 0;
    }
    if (SHORT_007fb244 <= sVar23) {
      return 0;
    }
    pSVar20 = g_worldCells
              [(int)SHORT_007fb246 * (int)sVar23 + (int)SHORT_007fb240 * (int)sVar24 + (int)sVar22].
              objects[0];
    if (pSVar20 == (STWorldObject *)0x0) {
      return 0;
    }
    if (pSVar20[1].vtable != *(STWorldObjectVTable **)&this->field_0x24) {
      return 0;
    }
    iVar7 = (*pSVar20->vtable->GetObjectTypeId)(pSVar20);
    if ((iVar7 != 0x3b) && (iVar7 = (*pSVar20->vtable->GetObjectTypeId)(pSVar20), iVar7 != 0x60)) {
      return 0;
    }
    this->field_0530 = *(short *)&this->field_0x39a;
    this->field_052E = *(short *)&this->field_0x398;
    this->field_052C = *(short *)&this->field_0x396;
    *(undefined4 *)&this->field_0x548 = 0;
    this->field_0544 = 0;
    this->field_054C = CASE_0;
    this->field_00B7 = 3;
    sub_00481520(this,(int)*(short *)&this->field_0x396,(int)*(short *)&this->field_0x398,
                 *(short *)&this->field_0x39a + 1);
  }
  else {
    SVar1 = this->field_054C;
    if (SVar1 == CASE_0) {
      iVar7 = sub_00460260(this,2);
      switch(iVar7) {
      case 0:
        goto switchD_0046d492_caseD_0;
      case 1:
        sVar22 = this->field_052C;
        sVar23 = this->field_0530;
        sVar24 = this->field_052E;
        if (((((-1 < sVar22) && (sVar22 < SHORT_007fb240)) && (-1 < sVar24)) &&
            (((sVar24 < SHORT_007fb242 && (-1 < sVar23)) &&
             ((sVar23 < SHORT_007fb244 &&
              ((pSVar20 = g_worldCells
                          [(int)sVar24 * (int)SHORT_007fb240 + (int)SHORT_007fb246 * (int)sVar23 +
                           (int)sVar22].objects[0], pSVar20 != (STWorldObject *)0x0 &&
               (pSVar20[1].vtable == *(STWorldObjectVTable **)&this->field_0x24)))))))) &&
           ((iVar7 = (*pSVar20->vtable->GetObjectTypeId)(pSVar20), iVar7 == 0x3b ||
            (iVar7 = (*pSVar20->vtable->GetObjectTypeId)(pSVar20), iVar7 == 0x60))))
        goto cf_common_exit_0046E811;
LAB_0046d71d:
        sub_004602B0(this);
        this->field_00B7 = 0;
LAB_0046d72e:
        iVar7 = (*this->vtable->vfunc_D8)();
        return -(uint)(iVar7 != 0);
      default:
        goto cf_common_exit_0046E811;
      case 3:
        iVar8 = (int)(short)this->field_052E;
        iVar17 = (int)(short)this->field_052C;
        iVar7 = (short)this->field_0530 + 1;
        goto cf_common_exit_0046E801;
      case -1:
        iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2638,0,0,&DAT_007a4ccc,
                                   s_STBoatC__UnLoadRC__move_to_depot_007aa9dc);
        if (iVar7 != 0) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2638
                  );
        return 0xffff;
      }
    }
    if (SVar1 == CASE_1) {
      iVar7 = sub_00460260(this,2);
      switch(iVar7) {
      case 0:
        iVar7 = sub_00490570(this);
        if (iVar7 != 1) {
          this->field_054C = CASE_2;
          this->field_00B7 = 3;
          goto LAB_0046d818;
        }
        piVar16 = (int *)CONCAT22(extraout_var_05,this->field_052E);
        uVar6 = (undefined2)((uint)&this->field_0x536 >> 0x10);
        iVar7 = CONCAT22(uVar6,this->field_052C);
        uVar10 = CONCAT22(extraout_var_02,this->field_0530 + 1);
        psVar28 = (short *)0x1;
        uVar12 = CONCAT22(extraout_var_02,this->field_004B);
        piVar14 = (int *)CONCAT22(extraout_var_05,this->field_0049);
        iVar17 = CONCAT22(uVar6,this->field_0047);
LAB_0046e7ea:
        thunk_FUN_0048dfd0(this,iVar17,(uint)piVar14,uVar12,iVar7,piVar16,uVar10,psVar28,
                           (short *)&this->field_0x536,(short *)&this->field_0x538);
        sVar22 = *(short *)&this->field_0x53a;
        sVar23 = *(short *)&this->field_0x538;
        break;
      case 1:
        sVar22 = this->field_052C;
        sVar23 = this->field_0530;
        sVar24 = this->field_052E;
        if ((((((sVar22 < 0) || (SHORT_007fb240 <= sVar22)) || (sVar24 < 0)) ||
             ((SHORT_007fb242 <= sVar24 || (sVar23 < 0)))) || (SHORT_007fb244 <= sVar23)) ||
           (((pSVar2 = (STFishC *)
                       g_worldCells
                       [(int)sVar23 * (int)SHORT_007fb246 + (int)sVar24 * (int)SHORT_007fb240 +
                        (int)sVar22].objects[0], pSVar2 == (STFishC *)0x0 ||
             (*(int *)&pSVar2->field_0x24 != *(int *)&this->field_0x24)) ||
            ((iVar7 = (*pSVar2->vtable->vfunc_2C)(), iVar7 != 0x3b &&
             (iVar7 = (*pSVar2->vtable->vfunc_2C)(), iVar7 != 0x60)))))) {
          sub_004602B0(this);
          iVar7 = (*this->vtable->vfunc_D8)();
          return -(uint)(iVar7 != 0);
        }
        iVar7 = thunk_FUN_004e1490((int)pSVar2);
        if ((iVar7 != 1) ||
           (bVar5 = thunk_FUN_0048d7c0(this,pSVar2), CONCAT31(extraout_var,bVar5) != 1))
        goto cf_common_exit_0046E811;
        sub_004602B0(this);
        this->field_0532 = pSVar2->field_0018;
        thunk_FUN_004e15f0(pSVar2,this->field_0018);
        iVar7 = (int)*(short *)&this->field_0x540;
        iVar8 = (int)*(short *)&this->field_0x53e;
        iVar17 = (int)*(short *)&this->field_0x53c;
        this->field_0544 = 0;
        this->field_054C = CASE_3;
        goto cf_common_exit_0046E801;
      default:
        goto cf_common_exit_0046E811;
      case 3:
        iVar7 = sub_00490570(this);
        if (iVar7 == 1) {
          uVar15 = (undefined2)((uint)&this->field_0x53a >> 0x10);
          uVar19 = (undefined2)((uint)&this->field_0x538 >> 0x10);
          uVar6 = (undefined2)((uint)&this->field_0x536 >> 0x10);
          thunk_FUN_0048dfd0(this,CONCAT22(uVar6,this->field_0047),CONCAT22(uVar19,this->field_0049)
                             ,CONCAT22(uVar15,this->field_004B),CONCAT22(uVar6,this->field_052C),
                             (int *)CONCAT22(uVar19,this->field_052E),
                             CONCAT22(uVar15,this->field_0530 + 1),(short *)0x1,
                             (short *)&this->field_0x536,(short *)&this->field_0x538);
        }
        sVar22 = *(short *)&this->field_0x53a;
        sVar23 = *(short *)&this->field_0x538;
        break;
      case -1:
        iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2678,0,0,&DAT_007a4ccc,
                                   s_STBoatC__UnLoadRC__correct_move_t_007aa9a4);
        if (iVar7 != 0) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2678
                  );
        return 0xffff;
      }
      iVar7 = (int)sVar22;
      iVar8 = (int)sVar23;
      iVar17 = (int)*(short *)&this->field_0x536;
cf_common_exit_0046E801:
      sub_00481520(this,iVar17,iVar8,iVar7);
      sub_00460260(this,0);
cf_common_exit_0046E811:
      iVar7 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
    }
    if (SVar1 == CASE_2) {
      this->field_0544 = this->field_0544 + 1;
      iVar7 = Defence(this,2);
      if (iVar7 == -1) {
        return -1;
      }
      if ((this->field_082E != 0) || ((int)this->field_0544 % 0x32 != 1)) {
        return 2;
      }
      sVar22 = this->field_052C;
      sVar23 = this->field_0530;
      sVar24 = this->field_052E;
      if ((((-1 < sVar22) && (sVar22 < SHORT_007fb240)) && (-1 < sVar24)) &&
         ((((sVar24 < SHORT_007fb242 && (-1 < sVar23)) &&
           ((sVar23 < SHORT_007fb244 &&
            ((pSVar2 = (STFishC *)
                       g_worldCells
                       [(int)sVar23 * (int)SHORT_007fb246 + (int)sVar24 * (int)SHORT_007fb240 +
                        (int)sVar22].objects[0], pSVar2 != (STFishC *)0x0 &&
             (*(int *)&pSVar2->field_0x24 == *(int *)&this->field_0x24)))))) &&
          ((iVar7 = (*pSVar2->vtable->vfunc_2C)(), iVar7 == 0x3b ||
           (iVar7 = (*pSVar2->vtable->vfunc_2C)(), iVar7 == 0x60)))))) {
        iVar7 = thunk_FUN_004e1490((int)pSVar2);
        if (iVar7 != 1) {
          return 2;
        }
        bVar5 = thunk_FUN_0048d7c0(this,pSVar2);
        if (CONCAT31(extraout_var_00,bVar5) != 1) {
          return 2;
        }
        this->field_0532 = pSVar2->field_0018;
        thunk_FUN_004e15f0(pSVar2,this->field_0018);
        this->field_0544 = 0;
        this->field_054C = CASE_3;
        this->field_00B7 = 0;
        sub_00481520(this,(int)*(short *)&this->field_0x53c,(int)*(short *)&this->field_0x53e,
                     (int)*(short *)&this->field_0x540);
        sub_00460260(this,0);
        return 2;
      }
      goto LAB_0046d71d;
    }
    if (SVar1 != CASE_3) {
      if (SVar1 == CASE_4) {
        if (*(int *)&this->field_0x550 == 0) {
          iVar8 = (ushort)(this->field_0530 * 200) + 300;
          iVar17 = CONCAT22((short)((uint)iVar8 >> 0x10),this->field_052E + 1) * 0xc9;
          iVar9 = CONCAT22((short)((uint)iVar17 >> 0x10),this->field_052C + 1);
          iVar7 = iVar9 * 0xc9;
          uVar6 = (undefined2)((uint)(iVar9 * 0x19) >> 0x10);
          uVar6 = (*this->vtable->vfunc_10)
                            (CONCAT22(uVar6,this->field_0041),
                             CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0043),
                             CONCAT22(uVar6,this->field_0045),iVar7,iVar17,iVar8);
          *(undefined2 *)&this->field_0x542 = uVar6;
          *(undefined4 *)&this->field_0x550 = 1;
        }
        if (*(int *)&this->field_0x550 == 1) {
          uVar10 = sub_004176C0(this,*(short *)&this->field_0x542);
          uVar10 = sub_00417910(this,(short)uVar10);
          if (uVar10 == 0xffffffff) {
            iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2712,0,0,
                                       &DAT_007a4ccc,s_STBoatC__UnLoadRC__UNLOADRC_PDEP_007aa944);
            if (iVar7 != 0) {
              pcVar4 = (code *)swi(3);
              iVar7 = (*pcVar4)();
              return iVar7;
            }
            iVar7 = 0x2713;
            goto cf_error_exit_0046E857;
          }
          if (uVar10 == 0) {
            *(undefined4 *)&this->field_0x550 = 2;
            iVar7 = (*this->vtable->vfunc_D8)();
            return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
          }
        }
        if (*(int *)&this->field_0x550 == 2) {
          STJellyGunC::sub_00415B30
                    ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                     (this->field_052C + 1) * 0xc9,(this->field_052E + 1) * 0xc9,
                     this->field_0530 * 200 + 300,this->field_0061);
          *(undefined4 *)&this->field_0x550 = 3;
        }
        if (*(int *)&this->field_0x550 == 3) {
          local_c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_14,&local_10);
          param_1 = 0;
          if (this->field_0x2bf != '\0') {
            local_8 = (undefined4 *)&this->field_0x2b3;
            do {
              puVar11 = (undefined4 *)
                        thunk_FUN_0041dc40(local_28,*local_8,*(undefined2 *)(local_8 + 1),
                                           this->field_006C);
              local_20 = *puVar11;
              local_1c = *(short *)(puVar11 + 1);
              if (DAT_0080732c == 1) {
                bVar30 = 0;
                sVar29 = 0;
                uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
                iVar8 = -1;
                this->field_001C = uVar10;
                sVar27 = 0;
                sVar26 = 0;
                uVar12 = uVar10 * 0x41c64e6d + 0x3039;
                sVar25 = 0;
                this->field_001C = uVar12;
                sVar24 = 0;
                sVar23 = 0;
                local_18 = uVar12 * 0x41c64e6d + 0x3039;
                sVar22 = 0;
                this->field_001C = local_18;
                lVar21 = Library::MSVCRT::__ftol();
                iVar7 = (int)(short)lVar21 + (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                        (int)local_1c;
                iVar17 = ((uVar12 >> 0x10) % 7 + (int)this->field_0043) - (int)local_20._2_2_;
                uVar10 = local_18;
              }
              else {
                uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
                this->field_001C = uVar12;
                uVar13 = uVar12 * 0x41c64e6d + 0x3039;
                bVar30 = 0;
                this->field_001C = uVar13;
                uVar10 = uVar13 * 0x41c64e6d + 0x3039;
                this->field_001C = uVar10;
                sVar29 = 0;
                iVar8 = -1;
                sVar27 = 0;
                sVar26 = 0;
                sVar25 = 0;
                sVar24 = 0;
                sVar23 = 0;
                sVar22 = 0;
                iVar7 = (uVar12 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_1c;
                local_20._2_2_ = (short)((uint)local_20 >> 0x10);
                iVar17 = ((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)local_20._2_2_;
              }
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         (uVar10 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_20,
                         iVar17 + -3,iVar7,sVar22,sVar23,sVar24,sVar25,sVar26,sVar27,iVar8,sVar29,
                         bVar30);
              param_1 = param_1 + 1;
              local_8 = (undefined4 *)((int)local_8 + 6);
            } while (param_1 < (int)(uint)(byte)this->field_0x2bf);
          }
          if (local_c == -1) {
            iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2738,0,0,
                                       &DAT_007a4ccc,s_STBoatC__UnLoadRC__UNLOADRC_PDEP_007aa918);
            if (iVar7 != 0) {
              pcVar4 = (code *)swi(3);
              iVar7 = (*pcVar4)();
              return iVar7;
            }
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       0x2739);
            return 0xffff;
          }
          if (local_c == 0) {
            *(undefined4 *)&this->field_0x550 = 0;
            this->field_054C = CASE_5;
            iVar7 = (*this->vtable->vfunc_D8)();
            return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
          }
        }
        goto cf_common_exit_0046E9F3;
      }
      if (SVar1 != CASE_5) {
        if (SVar1 == CASE_6) {
          iVar7 = *(int *)&this->field_0x548 + 1;
          *(int *)&this->field_0x548 = iVar7;
          if (0x45 < iVar7) {
            if (*(int *)&this->field_0x550 == 0) {
              iVar17 = (ushort)(*(short *)&this->field_0x540 * 200) + 100;
              iVar8 = CONCAT22((short)((uint)iVar7 >> 0x10),*(short *)&this->field_0x53e * 0xc9) +
                      100;
              iVar7 = CONCAT22((short)((uint)iVar17 >> 0x10),*(short *)&this->field_0x53c * 0xc9) +
                      100;
              uVar6 = (undefined2)((uint)iVar8 >> 0x10);
              uVar6 = (*this->vtable->vfunc_10)
                                (CONCAT22(uVar6,this->field_0041),
                                 CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0043),
                                 CONCAT22(uVar6,this->field_0045),iVar7,iVar8,iVar17);
              *(undefined2 *)&this->field_0x542 = uVar6;
              *(undefined4 *)&this->field_0x550 = 1;
            }
            if (*(int *)&this->field_0x550 == 1) {
              uVar10 = sub_004176C0(this,*(short *)&this->field_0x542);
              uVar10 = sub_00417910(this,(short)uVar10);
              if (uVar10 == 0xffffffff) {
                iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2798,0,0,
                                           &DAT_007a4ccc,s_STBoatC__UnLoadRC__UNLOADRC_ODEP_007aa8ec
                                          );
                if (iVar7 != 0) {
                  pcVar4 = (code *)swi(3);
                  iVar7 = (*pcVar4)();
                  return iVar7;
                }
                iVar7 = 0x2799;
                goto cf_error_exit_0046E857;
              }
              if (uVar10 == 0) {
                *(undefined4 *)&this->field_0x550 = 2;
              }
            }
            else {
              if (*(int *)&this->field_0x550 == 2) {
                STJellyGunC::sub_00415B30
                          ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                           *(short *)&this->field_0x53c * 0xc9 + 100,
                           *(short *)&this->field_0x53e * 0xc9 + 100,
                           *(short *)&this->field_0x540 * 200 + 100,this->field_0061);
                *(undefined4 *)&this->field_0x550 = 3;
              }
              if (*(int *)&this->field_0x550 == 3) {
                local_c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_10,&local_14);
                uVar10 = CONCAT31((int3)((uint)extraout_ECX >> 8),this->field_0x2bf);
                param_1 = 0;
                if (this->field_0x2bf != '\0') {
                  local_8 = (undefined4 *)&this->field_0x2b3;
                  do {
                    puVar11 = (undefined4 *)
                              thunk_FUN_0041dc40(local_28,*local_8,*(undefined2 *)(local_8 + 1),
                                                 this->field_006C);
                    local_20 = *puVar11;
                    local_1c = *(short *)(puVar11 + 1);
                    if (DAT_0080732c == 1) {
                      bVar30 = 0;
                      sVar29 = 0;
                      uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
                      iVar8 = -1;
                      this->field_001C = uVar10;
                      sVar27 = 0;
                      sVar26 = 0;
                      uVar12 = uVar10 * 0x41c64e6d + 0x3039;
                      sVar25 = 0;
                      this->field_001C = uVar12;
                      sVar24 = 0;
                      sVar23 = 0;
                      local_18 = uVar12 * 0x41c64e6d + 0x3039;
                      sVar22 = 0;
                      this->field_001C = local_18;
                      lVar21 = Library::MSVCRT::__ftol();
                      iVar7 = (int)(short)lVar21 + (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3
                              + (int)local_1c;
                      iVar17 = ((uVar12 >> 0x10) % 7 + (int)this->field_0043) - (int)local_20._2_2_;
                      uVar10 = local_18;
                    }
                    else {
                      uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
                      this->field_001C = uVar12;
                      uVar13 = uVar12 * 0x41c64e6d + 0x3039;
                      bVar30 = 0;
                      this->field_001C = uVar13;
                      uVar10 = uVar13 * 0x41c64e6d + 0x3039;
                      this->field_001C = uVar10;
                      sVar29 = 0;
                      iVar8 = -1;
                      sVar27 = 0;
                      sVar26 = 0;
                      sVar25 = 0;
                      sVar24 = 0;
                      sVar23 = 0;
                      sVar22 = 0;
                      iVar7 = (uVar12 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_1c;
                      local_20._2_2_ = (short)((uint)local_20 >> 0x10);
                      iVar17 = ((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)local_20._2_2_;
                    }
                    TraksClassTy::TraksCreate
                              (g_traksClass_00802A7C,1,2,7,
                               (uVar10 >> 0x10) % 7 + (int)this->field_0041 + -3 +
                               (int)(short)local_20,iVar17 + -3,iVar7,sVar22,sVar23,sVar24,sVar25,
                               sVar26,sVar27,iVar8,sVar29,bVar30);
                    param_1 = param_1 + 1;
                    uVar10 = (uint)(byte)this->field_0x2bf;
                    local_8 = (undefined4 *)((int)local_8 + 6);
                  } while (param_1 < (int)uVar10);
                }
                if (local_c == -1) {
                  iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x27bd,0,0,
                                             &DAT_007a4ccc,
                                             s_STBoatC__UnLoadRC__UNLOADRC_ODEP_007aa8c0);
                  if (iVar7 != 0) {
                    pcVar4 = (code *)swi(3);
                    iVar7 = (*pcVar4)();
                    return iVar7;
                  }
                  RaiseInternalException
                            (0xffff,g_overwriteContext_007ED77C,
                             s_E____titans_wlad_To_boat_cpp_007a9d3c,0x27be);
                  return 0xffff;
                }
                if (local_c == 0) {
                  uVar10 = CONCAT22((short)(uVar10 >> 0x10),this->field_0049);
                  iVar7 = CONCAT22((short)((uint)&this->field_0x536 >> 0x10),this->field_0047);
                  this->field_054C = CASE_7;
                  thunk_FUN_0048dfd0(this,iVar7,uVar10,(uint)(ushort)this->field_004B,iVar7,
                                     (int *)uVar10,(uint)(ushort)this->field_004B,(short *)0x2,
                                     (short *)&this->field_0x536,(short *)&this->field_0x538);
                  sub_00481520(this,(int)*(short *)&this->field_0x536,
                               (int)*(short *)&this->field_0x538,(int)*(short *)&this->field_0x53a);
                  sub_00460260(this,0);
                }
              }
            }
          }
          iVar7 = (*this->vtable->vfunc_D8)();
          return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
        }
        if (SVar1 != CASE_7) {
          iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x27e8,0,0,
                                     &DAT_007a4ccc,s_STBoatC__UnLoadRC___incorrect_en_007aa858);
          if (iVar7 != 0) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          return -1;
        }
        iVar7 = sub_00460260(this,2);
        if (iVar7 == -1) {
          iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x27d5,0,0,
                                     &DAT_007a4ccc,s_STBoatC__UnLoadRC__UNLOADRC_MOVE_007aa884);
          if (iVar7 != 0) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          iVar7 = 0x27d5;
          goto cf_error_exit_0046E857;
        }
        if (iVar7 == 0) goto LAB_0046d72e;
        if (iVar7 != 3) goto cf_common_exit_0046E811;
        uVar12 = (uint)(ushort)this->field_004B;
        piVar14 = (int *)CONCAT22(extraout_var_03,this->field_0049);
        iVar17 = CONCAT22((short)((uint)&this->field_0x536 >> 0x10),this->field_0047);
        psVar28 = (short *)0x2;
        iVar7 = iVar17;
        piVar16 = piVar14;
        uVar10 = uVar12;
        goto LAB_0046e7ea;
      }
      iVar7 = this->field_0544 + 1;
      this->field_0544 = iVar7;
      if (iVar7 % 10 != 1) goto cf_common_exit_0046E811;
      sVar22 = this->field_052C;
      sVar23 = this->field_0530;
      sVar24 = this->field_052E;
      if (((((-1 < sVar22) && (sVar22 < SHORT_007fb240)) && (-1 < sVar24)) &&
          (((sVar24 < SHORT_007fb242 && (-1 < sVar23)) &&
           (((sVar23 < SHORT_007fb244 &&
             ((pSVar20 = g_worldCells
                         [(int)sVar23 * (int)SHORT_007fb246 + (int)sVar24 * (int)SHORT_007fb240 +
                          (int)sVar22].objects[0], pSVar20 != (STWorldObject *)0x0 &&
              (*(int *)&pSVar20->field_0x18 == this->field_0532)))) &&
            (*(int *)&pSVar20[0x21].field_0x10 == 0)))))) && (*(int *)&pSVar20[0x10].field_0x5 != 6)
         ) {
        if ((int)this->field_04CD % 0x78 == 1) {
          SVar3 = this->field_06F7;
          if (SVar3 == CASE_8) {
            pSVar18 = this->vtable;
            uVar31 = 0xfb;
LAB_0046e2c8:
            (*pSVar18->vfunc_90)(3,uVar31);
          }
          else if (SVar3 == CASE_14) {
            (*this->vtable->vfunc_90)(3,0x15f);
          }
          else if (SVar3 == CASE_1A) {
            pSVar18 = this->vtable;
            uVar31 = 0x19e;
            goto LAB_0046e2c8;
          }
        }
        iVar7 = *(int *)&this->field_0x7d2;
        iVar17 = 1;
        if (iVar7 < 1) {
          iVar7 = this->field_07D6;
          if (iVar7 < 1) {
            iVar7 = this->field_07DA;
            if (0 < iVar7) {
              if (iVar7 < 1) {
                iVar17 = iVar7;
              }
              thunk_FUN_004e1d70(pSVar20,0xde,iVar17 * 0x14);
              thunk_FUN_004e16d0(pSVar20,this->field_0018);
              this->field_07DA = this->field_07DA - iVar17;
            }
          }
          else {
            if (iVar7 < 1) {
              iVar17 = iVar7;
            }
            thunk_FUN_004e1d70(pSVar20,0xdd,iVar17 * 3);
            thunk_FUN_004e16d0(pSVar20,this->field_0018);
            this->field_07D6 = this->field_07D6 - iVar17;
          }
        }
        else {
          if (iVar7 < 1) {
            iVar17 = iVar7;
          }
          thunk_FUN_004e1d70(pSVar20,0xdc,iVar17 * 5);
          thunk_FUN_004e16d0(pSVar20,this->field_0018);
          *(int *)&this->field_0x7d2 = *(int *)&this->field_0x7d2 - iVar17;
        }
        if (this->field_07DA + this->field_07D6 + *(int *)&this->field_0x7d2 != 0)
        goto cf_common_exit_0046E811;
      }
      sub_0048D930(this);
      this->field_0544 = 0;
      this->field_054C = CASE_6;
      goto cf_common_exit_0046E811;
    }
    iVar7 = sub_00460260(this,2);
    switch(iVar7) {
    case 0:
      sVar22 = this->field_052C;
      sVar23 = this->field_0530;
      sVar24 = this->field_052E;
      if (((-1 < sVar22) && (sVar22 < SHORT_007fb240)) &&
         (((-1 < sVar24 && ((sVar24 < SHORT_007fb242 && (-1 < sVar23)))) &&
          ((sVar23 < SHORT_007fb244 &&
           (((pSVar20 = g_worldCells
                        [(int)sVar23 * (int)SHORT_007fb246 + (int)sVar24 * (int)SHORT_007fb240 +
                         (int)sVar22].objects[0], pSVar20 != (STWorldObject *)0x0 &&
             (pSVar20[1].vtable == *(STWorldObjectVTable **)&this->field_0x24)) &&
            ((iVar7 = (*pSVar20->vtable->GetObjectTypeId)(pSVar20), iVar7 == 0x3b ||
             (iVar7 = (*pSVar20->vtable->GetObjectTypeId)(pSVar20), iVar7 == 0x60)))))))))) {
        if (((this->field_0047 == *(short *)&this->field_0x53c) &&
            (this->field_0049 == *(short *)&this->field_0x53e)) &&
           (this->field_004B == *(short *)&this->field_0x540)) {
          this->field_054C = CASE_4;
          *(undefined4 *)&this->field_0x550 = 0;
          iVar7 = (*this->vtable->vfunc_D8)();
          return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
        }
        thunk_FUN_004e1690(pSVar20,this->field_0018);
        return 0;
      }
      goto LAB_0046d652;
    case 1:
      sub_004602B0(this);
      sVar22 = this->field_052C;
      sVar23 = this->field_0530;
      sVar24 = this->field_052E;
      if (((-1 < sVar22) && (sVar22 < SHORT_007fb240)) &&
         ((-1 < sVar24 &&
          (((sVar24 < SHORT_007fb242 && (-1 < sVar23)) && (sVar23 < SHORT_007fb244)))))) {
        pSVar2 = (STFishC *)
                 g_worldCells
                 [(int)sVar23 * (int)SHORT_007fb246 + (int)sVar24 * (int)SHORT_007fb240 +
                  (int)sVar22].objects[0];
joined_r0x0046dd46:
        if (pSVar2 != (STFishC *)0x0) {
          thunk_FUN_0048d7c0(this,pSVar2);
        }
      }
      break;
    default:
      goto cf_common_exit_0046E9F3;
    case 3:
      sVar22 = this->field_052C;
      sVar23 = this->field_0530;
      sVar24 = this->field_052E;
      if (((((-1 < sVar22) && (sVar22 < SHORT_007fb240)) && (-1 < sVar24)) &&
          ((sVar24 < SHORT_007fb242 && (-1 < sVar23)))) && (sVar23 < SHORT_007fb244)) {
        pSVar2 = (STFishC *)
                 g_worldCells
                 [(int)sVar23 * (int)SHORT_007fb246 + (int)sVar24 * (int)SHORT_007fb240 +
                  (int)sVar22].objects[0];
        goto joined_r0x0046dd46;
      }
      break;
    case -1:
      iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x26d9,0,0,&DAT_007a4ccc,
                                 s_STBoatC__UnLoadRC__move_to_depot_007aa970);
      if (iVar7 != 0) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      iVar7 = 0x26d9;
cf_error_exit_0046E857:
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar7);
      return 0xffff;
    }
    sub_00481520(this,(int)*(short *)&this->field_0x53c,(int)*(short *)&this->field_0x53e,
                 (int)*(short *)&this->field_0x540);
  }
  sub_00460260(this,0);
cf_common_exit_0046E9F3:
  iVar7 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
switchD_0046d492_caseD_0:
  sVar22 = this->field_052C;
  sVar23 = this->field_0530;
  sVar24 = this->field_052E;
  if (((((sVar22 < 0) || (SHORT_007fb240 <= sVar22)) || (sVar24 < 0)) ||
      ((SHORT_007fb242 <= sVar24 || (sVar23 < 0)))) || (SHORT_007fb244 <= sVar23)) {
    pSVar20 = (STWorldObject *)0x0;
  }
  else {
    pSVar20 = g_worldCells
              [(int)SHORT_007fb246 * (int)sVar23 + (int)SHORT_007fb240 * (int)sVar24 + (int)sVar22].
              objects[0];
  }
  iVar7 = sub_00490570(this);
  if (iVar7 == 1) {
    if (pSVar20 != (STWorldObject *)0x0) {
      if (((pSVar20[1].vtable == *(STWorldObjectVTable **)&this->field_0x24) &&
          ((iVar7 = (*pSVar20->vtable->GetObjectTypeId)(pSVar20), iVar7 == 0x3b ||
           (iVar7 = (*pSVar20->vtable->GetObjectTypeId)(pSVar20), iVar7 == 0x60)))) &&
         (iVar7 = thunk_FUN_004e1490((int)pSVar20), iVar7 != 1)) {
        uVar6 = (undefined2)((uint)&this->field_0x536 >> 0x10);
        thunk_FUN_0048dfd0(this,CONCAT22(extraout_var_04,this->field_0047),
                           CONCAT22(extraout_var_01,this->field_0049),
                           CONCAT22(uVar6,this->field_004B),
                           CONCAT22(extraout_var_04,this->field_052C),
                           (int *)CONCAT22(extraout_var_01,this->field_052E),
                           CONCAT22(uVar6,this->field_0530 + 1),(short *)0x1,
                           (short *)&this->field_0x536,(short *)&this->field_0x538);
        iVar7 = (int)*(short *)&this->field_0x53a;
        iVar8 = (int)*(short *)&this->field_0x538;
        iVar17 = (int)*(short *)&this->field_0x536;
        this->field_054C = CASE_1;
        this->field_00B7 = 0;
        goto cf_common_exit_0046E801;
      }
      goto LAB_0046d60c;
    }
  }
  else {
LAB_0046d60c:
    if (((pSVar20 != (STWorldObject *)0x0) &&
        (pSVar20[1].vtable == *(STWorldObjectVTable **)&this->field_0x24)) &&
       ((iVar7 = (*pSVar20->vtable->GetObjectTypeId)(pSVar20), iVar7 == 0x3b ||
        (iVar7 = (*pSVar20->vtable->GetObjectTypeId)(pSVar20), iVar7 == 0x60)))) {
      this->field_054C = CASE_2;
LAB_0046d818:
      iVar7 = Defence(this,0);
      return (-(uint)(iVar7 != -1) & 3) - 1;
    }
  }
  sub_004602B0(this);
  this->field_00B7 = 0;
LAB_0046d652:
  iVar7 = (*this->vtable->vfunc_D8)();
  return -(uint)(iVar7 != 0);
}

