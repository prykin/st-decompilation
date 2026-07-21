
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Capture */

int __thiscall STBoatC::Capture(STBoatC *this,int param_1)

{
  STBoatC_field_0611State SVar1;
  STWorldObject *pSVar2;
  STBoatC_field_06F7State SVar3;
  code *pcVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  STGameObjC *pSVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  STBoatCVTable *pSVar14;
  AnonShape_004CC900_31EE9CAA *pAVar15;
  undefined2 extraout_var;
  undefined4 extraout_ECX;
  uint uVar16;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined3 uVar17;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  int iVar18;
  short sVar19;
  longlong lVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  byte bVar26;
  undefined4 uVar27;
  STMessage local_64;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined4 local_24 [2];
  undefined4 local_1c;
  short local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar12 = &this->field_02CC;
    for (iVar7 = 0x17; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    this->field_02C4 = 0;
    *(undefined2 *)&this->field_0x5fd = *(undefined2 *)&this->field_0x3ed;
    this->field_0x5fc = this->field_0x3ec;
    *(undefined4 *)&this->field_0x5ff = *(undefined4 *)&this->field_0x3ef;
    iVar7 = thunk_FUN_00492b20((AnonShape_00492B20_AFE20A9A *)this);
    if (iVar7 != 1) {
      return 0;
    }
    iVar9 = (int)*(short *)&this->field_0x607;
    iVar18 = (int)*(short *)&this->field_0x605;
    iVar7 = (int)*(short *)&this->field_0x603;
    this->field_0611 = CASE_0;
    goto cf_common_exit_00476DBA;
  }
  SVar1 = this->field_0611;
  if (SVar1 == CASE_0) {
    iVar7 = sub_00460260(this,2);
    switch(iVar7) {
    case 0:
      iVar7 = thunk_FUN_00492b20((AnonShape_00492B20_AFE20A9A *)this);
      if (iVar7 != 0) {
        if (((*(short *)&this->field_0x603 == this->field_0047) &&
            (*(short *)&this->field_0x605 == this->field_0049)) &&
           (*(short *)&this->field_0x607 == this->field_004B)) {
          this->field_0611 = CASE_1;
          return 2;
        }
        iVar9 = (int)*(short *)&this->field_0x607;
        iVar18 = (int)*(short *)&this->field_0x605;
        iVar7 = (int)*(short *)&this->field_0x603;
cf_common_exit_00476DBA:
        sub_00481520(this,iVar7,iVar18,iVar9);
        iVar7 = sub_00460260(this,0);
        return (-(uint)(iVar7 != -1) & 3) - 1;
      }
      break;
    case 1:
      pSVar8 = STAllPlayersC::GetObjPtr
                         (g_sTAllPlayers_007FA174,
                          CONCAT31((int3)((uint)extraout_EDX >> 8),this->field_0x5fc),
                          CONCAT22(extraout_var,*(undefined2 *)&this->field_0x5fd),CASE_1);
      if (((pSVar8 != (STGameObjC *)0x0) && (pSVar8->field_0018 == *(int *)&this->field_0x5ff)) &&
         (iVar7 = (*pSVar8->vtable[1].vfunc_34)(*(undefined4 *)&this->field_0x24), iVar7 != 0)) {
        return 2;
      }
      sub_004602B0(this);
      break;
    default:
      return 2;
    case 3:
      iVar7 = thunk_FUN_00492b20((AnonShape_00492B20_AFE20A9A *)this);
      if (iVar7 == 1) {
        iVar9 = (int)*(short *)&this->field_0x607;
        iVar18 = (int)*(short *)&this->field_0x605;
        iVar7 = (int)*(short *)&this->field_0x603;
        goto cf_common_exit_00476DBA;
      }
      break;
    case -1:
      iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x31d2,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Capture__CAPTURE_MOVE_e_007ab234);
      if (iVar7 != 0) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      return 0xffff;
    }
    return 0;
  }
  if (SVar1 == CASE_1) {
    iVar7 = (*this->vtable->vfunc_D8)();
    if (iVar7 != 0) {
      return -1;
    }
    pSVar8 = STAllPlayersC::GetObjPtr
                       (g_sTAllPlayers_007FA174,
                        CONCAT31((int3)((uint)extraout_ECX >> 8),this->field_0x5fc),
                        (uint)*(ushort *)&this->field_0x5fd,CASE_1);
    if (pSVar8 == (STGameObjC *)0x0) {
      return 0;
    }
    if (pSVar8->field_0018 != *(int *)&this->field_0x5ff) {
      return 0;
    }
    iVar7 = (*pSVar8->vtable[1].vfunc_34)(*(undefined4 *)&this->field_0x24);
    if (iVar7 != 0) {
      if (pSVar8->field_002C == 0) {
        thunk_FUN_004cd3e0(pSVar8,this->field_0018,*(undefined4 *)&this->field_0x24);
        SVar3 = this->field_06F7;
        this->field_0611 = CASE_3;
        if (SVar3 == CASE_6) {
          (*this->vtable->vfunc_90)(3,0xed);
          return 2;
        }
        if (SVar3 != CASE_12) {
          if (SVar3 != CASE_22) {
            return 2;
          }
          (*this->vtable->vfunc_90)(3,0x1d2);
          return 2;
        }
        (*this->vtable->vfunc_90)(3,0x151);
        return 2;
      }
      if (pSVar8->field_002C != 1) {
        return 2;
      }
      sVar19 = *(short *)&this->field_0x609;
      iVar18 = (int)sVar19;
      iVar7 = iVar18 + 1;
      if (iVar18 <= iVar7) {
        sVar21 = *(short *)&this->field_0x60b;
        sVar22 = sVar21;
        do {
          for (; (int)sVar22 <= sVar21 + 1; sVar22 = sVar22 + 1) {
            if ((((((sVar19 != this->field_0047) || (sVar22 != this->field_0049)) &&
                  (sVar5 = *(short *)&this->field_0x60d + 1, -1 < sVar19)) &&
                 ((sVar19 < g_worldGrid.sizeX && (-1 < sVar22)))) && (sVar22 < g_worldGrid.sizeY))
               && (((-1 < sVar5 && (sVar5 < g_worldGrid.sizeZ)) &&
                   ((pSVar2 = g_worldGrid.cells
                              [(int)g_worldGrid.sizeX * (int)sVar22 +
                               iVar18 + (int)sVar5 * (int)g_worldGrid.planeStride].objects[0],
                    pSVar2 != (STWorldObject *)0x0 &&
                    ((pSVar2->value_20 == 0x14 && (*(int *)((int)&pSVar2[0x1f].vtable + 1) == 9)))))
                   ))) {
              iVar9 = *(int *)&pSVar2[0x2b].field_0x5;
              if (iVar9 == 2) {
                return 2;
              }
              if (iVar9 == 3) {
                return 2;
              }
              if (iVar9 == 4) {
                return 2;
              }
            }
          }
          sVar19 = sVar19 + 1;
          iVar18 = (int)sVar19;
          sVar22 = sVar21;
        } while (iVar18 <= iVar7);
      }
      this->field_0611 = CASE_2;
      *(undefined4 *)&this->field_0x615 = 0;
      return 2;
    }
    return 0;
  }
  if (SVar1 == CASE_2) {
    if (*(int *)&this->field_0x615 == 0) {
      iVar9 = (ushort)(*(short *)&this->field_0x60d * 200) + 300;
      iVar18 = CONCAT22((short)((uint)iVar9 >> 0x10),*(short *)&this->field_0x60b + 1) * 0xc9;
      iVar10 = CONCAT22((short)((uint)iVar18 >> 0x10),*(short *)&this->field_0x609 + 1);
      iVar7 = iVar10 * 0xc9;
      uVar6 = (undefined2)((uint)(iVar10 * 0x19) >> 0x10);
      uVar6 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar6,this->field_0041),
                         CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0043),
                         CONCAT22(uVar6,this->field_0045),iVar7,iVar18,iVar9);
      *(undefined2 *)&this->field_0x60f = uVar6;
      *(undefined4 *)&this->field_0x615 = 1;
    }
    if (*(int *)&this->field_0x615 == 1) {
      uVar11 = sub_004176C0(this,*(short *)&this->field_0x60f);
      uVar11 = sub_00417910(this,(short)uVar11);
      if (uVar11 == 0xffffffff) {
        iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3237,0,0,&DAT_007a4ccc,
                                   s_STBoatC__Capture__CAPTURE_PMOVE_007ab20c);
        if (iVar7 != 0) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        return -1;
      }
      if (uVar11 == 0) {
        *(undefined4 *)&this->field_0x615 = 2;
        goto cf_common_exit_00477B2E;
      }
    }
    if (*(int *)&this->field_0x615 == 2) {
      STJellyGunC::sub_00415B30
                ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                 (*(short *)&this->field_0x609 + 1) * 0xc9,(*(short *)&this->field_0x60b + 1) * 0xc9
                 ,*(short *)&this->field_0x60d * 200 + 300,this->field_0061);
      *(undefined4 *)&this->field_0x615 = 3;
    }
    if (*(int *)&this->field_0x615 == 3) {
      local_8 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_10,&local_c);
      uVar17 = (undefined3)((uint)extraout_EDX_00 >> 8);
      iVar7 = 0;
      param_1 = 0;
      if (this->field_0x2bf != '\0') {
        do {
          puVar12 = (undefined4 *)
                    thunk_FUN_0041dc40(local_24,*(undefined4 *)
                                                 (&this->field_0x2b3 + (short)param_1 * 6),
                                       *(undefined2 *)(&this->field_0x2b7 + (short)param_1 * 6),
                                       this->field_006C);
          uVar27 = *puVar12;
          local_18 = *(short *)(puVar12 + 1);
          local_1c = uVar27;
          if (DAT_0080732c == 1) {
            bVar26 = 0;
            sVar25 = 0;
            uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
            iVar7 = -1;
            this->field_001C = uVar11;
            sVar24 = 0;
            sVar23 = 0;
            uVar13 = uVar11 * 0x41c64e6d + 0x3039;
            sVar5 = 0;
            this->field_001C = uVar13;
            sVar22 = 0;
            sVar21 = 0;
            local_14 = uVar13 * 0x41c64e6d + 0x3039;
            sVar19 = 0;
            this->field_001C = local_14;
            lVar20 = Library::MSVCRT::__ftol();
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,
                       (local_14 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_1c,
                       (((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)local_1c._2_2_) + -3,
                       (int)(short)lVar20 + (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                       (int)local_18,sVar19,sVar21,sVar22,sVar5,sVar23,sVar24,iVar7,sVar25,bVar26);
            uVar17 = extraout_var_00;
          }
          else {
            uVar13 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar13;
            uVar16 = uVar13 * 0x41c64e6d + 0x3039;
            this->field_001C = uVar16;
            uVar11 = uVar16 * 0x41c64e6d + 0x3039;
            this->field_001C = uVar11;
            local_1c._2_2_ = (short)((uint)uVar27 >> 0x10);
            iVar7 = (int)local_1c._2_2_;
            local_1c._0_2_ = (short)uVar27;
            iVar18 = (int)(short)local_1c;
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,
                       (uVar11 >> 0x10) % 7 + (int)this->field_0041 + -3 + iVar18,
                       (((uVar16 >> 0x10) % 7 + (int)this->field_0043) - iVar7) + -3,
                       (uVar13 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_18,0,0,0,0,0,0
                       ,-1,0,0);
            uVar17 = extraout_var_01;
          }
          iVar7 = param_1 + 1;
          param_1 = iVar7;
        } while ((short)iVar7 < (short)(ushort)(byte)this->field_0x2bf);
      }
      if (local_8 == -1) {
        iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x325c,0,0,&DAT_007a4ccc,
                                   s_STBoatC__Capture__CAPTURE_PMOVE_2_007ab1e4);
        if (iVar7 != 0) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        return -1;
      }
      if (local_8 == 0) {
        pSVar8 = STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,CONCAT31(uVar17,this->field_0x5fc),
                            CONCAT22((short)((uint)iVar7 >> 0x10),*(undefined2 *)&this->field_0x5fd)
                            ,CASE_1);
        if (((pSVar8 == (STGameObjC *)0x0) || (pSVar8->field_0018 != *(int *)&this->field_0x5ff)) ||
           (iVar7 = (*pSVar8->vtable[1].vfunc_34)(*(undefined4 *)&this->field_0x24), iVar7 == 0)) {
          this->field_0611 = CASE_4;
          *(undefined4 *)&this->field_0x615 = 0;
        }
        else {
          thunk_FUN_004cd3e0(pSVar8,this->field_0018,*(undefined4 *)&this->field_0x24);
          SVar3 = this->field_06F7;
          this->field_0611 = CASE_3;
          if (SVar3 == CASE_6) {
            pSVar14 = this->vtable;
            uVar27 = 0xed;
          }
          else {
            if (SVar3 == CASE_12) {
              (*this->vtable->vfunc_90)(3,0x151);
              goto cf_common_exit_0047746B;
            }
            if (SVar3 != CASE_22) goto cf_common_exit_0047746B;
            pSVar14 = this->vtable;
            uVar27 = 0x1d2;
          }
          (*pSVar14->vfunc_90)(3,uVar27);
        }
      }
    }
  }
  else {
    if (SVar1 != CASE_3) {
      if (SVar1 != CASE_4) {
        if (SVar1 != CASE_5) {
          iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x330e,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Capture___incorrect_ent_007ab138);
          if (iVar7 != 0) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          return -1;
        }
        iVar7 = sub_0045FF50(this,2);
        if (iVar7 == -1) {
          iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x32fc,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Capture__CAPTURE_ESCMOV_007ab164);
          if (iVar7 != 0) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          return -1;
        }
        if (iVar7 == 0) {
          iVar7 = (*this->vtable->vfunc_D8)();
          return -(uint)(iVar7 != 0);
        }
        if (iVar7 == 3) {
          thunk_FUN_00492f30((AnonShape_00492F30_E8F69762 *)this,extraout_EDX_04);
          sub_00481520(this,(int)*(short *)&this->field_0x609,(int)*(short *)&this->field_0x60b,
                       (int)*(short *)&this->field_0x60d);
          sub_0045FF50(this,0);
        }
cf_common_exit_00477B2E:
        iVar7 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
      }
      if (*(int *)&this->field_0x615 == 0) {
        iVar7 = (ushort)(*(short *)&this->field_0x607 * 200) + 100;
        iVar9 = CONCAT22((short)((uint)this >> 0x10),*(short *)&this->field_0x605 * 0xc9) + 100;
        iVar18 = CONCAT22((short)((uint)iVar7 >> 0x10),*(short *)&this->field_0x603 * 0xc9) + 100;
        uVar6 = (undefined2)((uint)iVar9 >> 0x10);
        uVar6 = (*this->vtable->vfunc_10)
                          (CONCAT22(uVar6,this->field_0041),
                           CONCAT22((short)((uint)iVar18 >> 0x10),this->field_0043),
                           CONCAT22(uVar6,this->field_0045),iVar18,iVar9,iVar7);
        *(undefined2 *)&this->field_0x60f = uVar6;
        *(undefined4 *)&this->field_0x615 = 1;
      }
      if (*(int *)&this->field_0x615 == 1) {
        uVar11 = sub_004176C0(this,*(short *)&this->field_0x60f);
        uVar11 = sub_00417910(this,(short)uVar11);
        if (uVar11 == 0xffffffff) {
          iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x32c1,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Capture__CAPTURE_OMOVE_007ab1bc);
          if (iVar7 != 0) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          return -1;
        }
        if (uVar11 == 0) {
          *(undefined4 *)&this->field_0x615 = 2;
          goto cf_common_exit_00477B2E;
        }
      }
      if (*(int *)&this->field_0x615 == 2) {
        STJellyGunC::sub_00415B30
                  ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                   *(short *)&this->field_0x603 * 0xc9 + 100,
                   *(short *)&this->field_0x605 * 0xc9 + 100,
                   *(short *)&this->field_0x607 * 200 + 100,this->field_0061);
        *(undefined4 *)&this->field_0x615 = 3;
      }
      if (*(int *)&this->field_0x615 == 3) {
        local_8 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_c,&local_10);
        uVar27 = CONCAT31((int3)((uint)extraout_EDX_01 >> 8),this->field_0x2bf);
        param_1 = 0;
        if (this->field_0x2bf != '\0') {
          do {
            puVar12 = (undefined4 *)
                      thunk_FUN_0041dc40(local_24,*(undefined4 *)
                                                   (&this->field_0x2b3 + (short)param_1 * 6),
                                         *(undefined2 *)(&this->field_0x2b7 + (short)param_1 * 6),
                                         this->field_006C);
            uVar27 = *puVar12;
            local_18 = *(short *)(puVar12 + 1);
            local_1c = uVar27;
            if (DAT_0080732c == 1) {
              bVar26 = 0;
              sVar25 = 0;
              uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar7 = -1;
              this->field_001C = uVar11;
              sVar24 = 0;
              sVar23 = 0;
              uVar13 = uVar11 * 0x41c64e6d + 0x3039;
              sVar5 = 0;
              this->field_001C = uVar13;
              sVar22 = 0;
              sVar21 = 0;
              local_14 = uVar13 * 0x41c64e6d + 0x3039;
              sVar19 = 0;
              this->field_001C = local_14;
              lVar20 = Library::MSVCRT::__ftol();
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         (local_14 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_1c,
                         (((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)local_1c._2_2_) + -3
                         ,(int)(short)lVar20 + (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                          (int)local_18,sVar19,sVar21,sVar22,sVar5,sVar23,sVar24,iVar7,sVar25,bVar26
                        );
              uVar27 = extraout_EDX_02;
            }
            else {
              uVar13 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar13;
              uVar16 = uVar13 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar16;
              uVar11 = uVar16 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar11;
              local_1c._2_2_ = (short)((uint)uVar27 >> 0x10);
              iVar7 = (int)local_1c._2_2_;
              local_1c._0_2_ = (short)uVar27;
              iVar18 = (int)(short)local_1c;
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         (uVar11 >> 0x10) % 7 + (int)this->field_0041 + -3 + iVar18,
                         (((uVar16 >> 0x10) % 7 + (int)this->field_0043) - iVar7) + -3,
                         (uVar13 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_18,0,0,0,0,0
                         ,0,-1,0,0);
              uVar27 = extraout_EDX_03;
            }
            param_1 = param_1 + 1;
          } while ((short)param_1 < (short)(ushort)(byte)this->field_0x2bf);
        }
        if (local_8 == -1) {
          iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x32e6,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Capture__CAPTURE_OMOVE_2_007ab194);
          if (iVar7 != 0) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          return -1;
        }
        if (local_8 == 0) {
          this->field_0611 = CASE_5;
          thunk_FUN_00492f30((AnonShape_00492F30_E8F69762 *)this,uVar27);
          sub_00481520(this,(int)*(short *)&this->field_0x609,(int)*(short *)&this->field_0x60b,
                       (int)*(short *)&this->field_0x60d);
          iVar7 = sub_0045FF50(this,0);
          if (iVar7 == -1) {
            return -1;
          }
        }
      }
      iVar7 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
    }
    pAVar15 = (AnonShape_004CC900_31EE9CAA *)
              STAllPlayersC::GetObjPtr
                        (g_sTAllPlayers_007FA174,CONCAT31((int3)((uint)this >> 8),this->field_0x5fc)
                         ,(uint)*(ushort *)&this->field_0x5fd,CASE_1);
    if (((pAVar15 == (AnonShape_004CC900_31EE9CAA *)0x0) ||
        (*(int *)&pAVar15->field_0x18 != *(int *)&this->field_0x5ff)) ||
       (iVar7 = (**(code **)(*(int *)pAVar15 + 0x108))(*(undefined4 *)&this->field_0x24), iVar7 == 0
       )) {
      if (((int)this->field_0041 == (*(short *)&this->field_0x609 + 1) * 0xc9) &&
         ((int)this->field_0043 == (*(short *)&this->field_0x60b + 1) * 0xc9)) {
        this->field_0611 = CASE_4;
        *(undefined4 *)&this->field_0x615 = 0;
        iVar7 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
      }
      iVar7 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar7 != 0);
    }
    iVar7 = thunk_FUN_004cd480(pAVar15);
    if (iVar7 == 1) {
      if (DAT_008117bc != (undefined4 *)0x0) {
        local_2e = *(undefined2 *)&pAVar15->field_0x32;
        local_30 = *(undefined2 *)&pAVar15->field_0x24;
        local_34 = 0x5dd4;
        local_2c = CONCAT22(this->field_0032,*(undefined2 *)&this->field_0x24);
        (**(code **)*DAT_008117bc)(local_44);
      }
      (**(code **)(*(int *)pAVar15 + 0x10c))();
      (**(code **)(*(int *)pAVar15 + 0x110))(*(undefined4 *)&this->field_0x24,this->field_06F3);
    }
    else if (iVar7 != 2) goto cf_common_exit_0047746B;
    uVar11 = GetPlayerRaceId(pAVar15->field_0x24);
    iVar7 = (**(code **)(*(int *)pAVar15 + 0x2c))();
    local_64.data = &local_40;
    local_40 = *(undefined4 *)(&DAT_007e1374 + ((uVar11 & 0xff) + iVar7 * 3) * 4);
    local_38 = 0xff;
    local_3c = 0;
    local_2c = 1;
    local_64.id = MESS_TORPHIT;
    (*this->vtable->GetMessage)(this,&local_64);
    iVar7 = (*(short *)&this->field_0x609 + 1) * 0xc9;
    if ((this->field_0041 == iVar7) &&
       (iVar7 = (*(short *)&this->field_0x60b + 1) * 0xc9, this->field_0043 == iVar7)) {
      this->field_0611 = CASE_4;
      *(undefined4 *)&this->field_0x615 = 0;
    }
    else {
      this->field_0611 = CASE_5;
      thunk_FUN_00492f30((AnonShape_00492F30_E8F69762 *)this,iVar7);
      sub_00481520(this,(int)*(short *)&this->field_0x609,(int)*(short *)&this->field_0x60b,
                   (int)*(short *)&this->field_0x60d);
      iVar7 = sub_0045FF50(this,0);
      if (iVar7 == -1) {
        return -1;
      }
    }
  }
cf_common_exit_0047746B:
  iVar7 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
}

