
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Capture */

int __thiscall STBoatC::Capture(STBoatC *this,int param_1)

{
  STBoatC_field_0611State SVar1;
  STBoatC_field_06F7State SVar2;
  code *pcVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  STBoatCVTable *pSVar13;
  undefined2 extraout_var;
  undefined4 extraout_ECX;
  uint uVar14;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined3 uVar15;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  int iVar16;
  short sVar17;
  longlong lVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  byte bVar24;
  undefined4 uVar25;
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
    puVar11 = &this->field_02CC;
    for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    this->field_02C4 = 0;
    *(undefined2 *)&this->field_0x5fd = *(undefined2 *)&this->field_0x3ed;
    this->field_0x5fc = this->field_0x3ec;
    *(undefined4 *)&this->field_0x5ff = *(undefined4 *)&this->field_0x3ef;
    iVar6 = thunk_FUN_00492b20((int)this);
    if (iVar6 != 1) {
      return 0;
    }
    iVar8 = (int)*(short *)&this->field_0x607;
    iVar16 = (int)*(short *)&this->field_0x605;
    iVar6 = (int)*(short *)&this->field_0x603;
    this->field_0611 = CASE_0;
    goto cf_common_exit_00476DBA;
  }
  SVar1 = this->field_0611;
  if (SVar1 == CASE_0) {
    iVar6 = sub_00460260(this,2);
    switch(iVar6) {
    case 0:
      iVar6 = thunk_FUN_00492b20((int)this);
      if (iVar6 != 0) {
        if (((*(short *)&this->field_0x603 == this->field_0047) &&
            (*(short *)&this->field_0x605 == this->field_0049)) &&
           (*(short *)&this->field_0x607 == this->field_004B)) {
          this->field_0611 = CASE_1;
          return 2;
        }
        iVar8 = (int)*(short *)&this->field_0x607;
        iVar16 = (int)*(short *)&this->field_0x605;
        iVar6 = (int)*(short *)&this->field_0x603;
cf_common_exit_00476DBA:
        sub_00481520(this,iVar6,iVar16,iVar8);
        iVar6 = sub_00460260(this,0);
        return (-(uint)(iVar6 != -1) & 3) - 1;
      }
      break;
    case 1:
      piVar7 = (int *)STAllPlayersC::GetObjPtr
                                (g_sTAllPlayers_007FA174,
                                 CONCAT31((int3)((uint)extraout_EDX >> 8),this->field_0x5fc),
                                 CONCAT22(extraout_var,*(undefined2 *)&this->field_0x5fd),CASE_1);
      if (((piVar7 != (int *)0x0) && (piVar7[6] == *(int *)&this->field_0x5ff)) &&
         (iVar6 = (**(code **)(*piVar7 + 0x108))(*(undefined4 *)&this->field_0x24), iVar6 != 0)) {
        return 2;
      }
      sub_004602B0(this);
      break;
    default:
      return 2;
    case 3:
      iVar6 = thunk_FUN_00492b20((int)this);
      if (iVar6 == 1) {
        iVar8 = (int)*(short *)&this->field_0x607;
        iVar16 = (int)*(short *)&this->field_0x605;
        iVar6 = (int)*(short *)&this->field_0x603;
        goto cf_common_exit_00476DBA;
      }
      break;
    case -1:
      iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x31d2,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Capture__CAPTURE_MOVE_e_007ab234);
      if (iVar6 != 0) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      return 0xffff;
    }
    return 0;
  }
  if (SVar1 == CASE_1) {
    iVar6 = (*this->vtable->vfunc_D8)();
    if (iVar6 != 0) {
      return -1;
    }
    piVar7 = (int *)STAllPlayersC::GetObjPtr
                              (g_sTAllPlayers_007FA174,
                               CONCAT31((int3)((uint)extraout_ECX >> 8),this->field_0x5fc),
                               (uint)*(ushort *)&this->field_0x5fd,CASE_1);
    if (piVar7 == (int *)0x0) {
      return 0;
    }
    if (piVar7[6] != *(int *)&this->field_0x5ff) {
      return 0;
    }
    iVar6 = (**(code **)(*piVar7 + 0x108))(*(undefined4 *)&this->field_0x24);
    if (iVar6 != 0) {
      if (piVar7[0xb] == 0) {
        thunk_FUN_004cd3e0(piVar7,this->field_0018,*(undefined4 *)&this->field_0x24);
        SVar2 = this->field_06F7;
        this->field_0611 = CASE_3;
        if (SVar2 == CASE_6) {
          (*this->vtable->vfunc_90)(3,0xed);
          return 2;
        }
        if (SVar2 != CASE_12) {
          if (SVar2 != CASE_22) {
            return 2;
          }
          (*this->vtable->vfunc_90)(3,0x1d2);
          return 2;
        }
        (*this->vtable->vfunc_90)(3,0x151);
        return 2;
      }
      if (piVar7[0xb] != 1) {
        return 2;
      }
      sVar17 = *(short *)&this->field_0x609;
      iVar16 = (int)sVar17;
      iVar6 = iVar16 + 1;
      if (iVar16 <= iVar6) {
        sVar19 = *(short *)&this->field_0x60b;
        sVar20 = sVar19;
        do {
          for (; (int)sVar20 <= sVar19 + 1; sVar20 = sVar20 + 1) {
            if ((((((sVar17 != this->field_0047) || (sVar20 != this->field_0049)) &&
                  (sVar4 = *(short *)&this->field_0x60d + 1, -1 < sVar17)) &&
                 ((sVar17 < SHORT_007fb240 && (-1 < sVar20)))) && (sVar20 < SHORT_007fb242)) &&
               (((-1 < sVar4 && (sVar4 < SHORT_007fb244)) &&
                ((iVar8 = *(int *)(DAT_007fb248 +
                                  ((int)SHORT_007fb240 * (int)sVar20 +
                                  iVar16 + (int)sVar4 * (int)SHORT_007fb246) * 8), iVar8 != 0 &&
                 ((*(int *)(iVar8 + 0x20) == 0x14 && (*(int *)(iVar8 + 0x45d) == 9)))))))) {
              iVar8 = *(int *)(iVar8 + 0x611);
              if (iVar8 == 2) {
                return 2;
              }
              if (iVar8 == 3) {
                return 2;
              }
              if (iVar8 == 4) {
                return 2;
              }
            }
          }
          sVar17 = sVar17 + 1;
          iVar16 = (int)sVar17;
          sVar20 = sVar19;
        } while (iVar16 <= iVar6);
      }
      this->field_0611 = CASE_2;
      *(undefined4 *)&this->field_0x615 = 0;
      return 2;
    }
    return 0;
  }
  if (SVar1 == CASE_2) {
    if (*(int *)&this->field_0x615 == 0) {
      iVar8 = (ushort)(*(short *)&this->field_0x60d * 200) + 300;
      iVar16 = CONCAT22((short)((uint)iVar8 >> 0x10),*(short *)&this->field_0x60b + 1) * 0xc9;
      iVar9 = CONCAT22((short)((uint)iVar16 >> 0x10),*(short *)&this->field_0x609 + 1);
      iVar6 = iVar9 * 0xc9;
      uVar5 = (undefined2)((uint)(iVar9 * 0x19) >> 0x10);
      uVar5 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar5,this->field_0041),
                         CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0043),
                         CONCAT22(uVar5,this->field_0045),iVar6,iVar16,iVar8);
      *(undefined2 *)&this->field_0x60f = uVar5;
      *(undefined4 *)&this->field_0x615 = 1;
    }
    if (*(int *)&this->field_0x615 == 1) {
      uVar10 = sub_004176C0(this,*(short *)&this->field_0x60f);
      uVar10 = sub_00417910(this,(short)uVar10);
      if (uVar10 == 0xffffffff) {
        iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3237,0,0,&DAT_007a4ccc,
                                   s_STBoatC__Capture__CAPTURE_PMOVE_007ab20c);
        if (iVar6 != 0) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        return -1;
      }
      if (uVar10 == 0) {
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
      uVar15 = (undefined3)((uint)extraout_EDX_00 >> 8);
      iVar6 = 0;
      param_1 = 0;
      if (this->field_0x2bf != '\0') {
        do {
          puVar11 = (undefined4 *)
                    thunk_FUN_0041dc40(local_24,*(undefined4 *)
                                                 (&this->field_0x2b3 + (short)param_1 * 6),
                                       *(undefined2 *)(&this->field_0x2b7 + (short)param_1 * 6),
                                       this->field_006C);
          uVar25 = *puVar11;
          local_18 = *(short *)(puVar11 + 1);
          local_1c = uVar25;
          if (DAT_0080732c == 1) {
            bVar24 = 0;
            sVar23 = 0;
            uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
            iVar6 = -1;
            this->field_001C = uVar10;
            sVar22 = 0;
            sVar21 = 0;
            uVar12 = uVar10 * 0x41c64e6d + 0x3039;
            sVar4 = 0;
            this->field_001C = uVar12;
            sVar20 = 0;
            sVar19 = 0;
            local_14 = uVar12 * 0x41c64e6d + 0x3039;
            sVar17 = 0;
            this->field_001C = local_14;
            lVar18 = Library::MSVCRT::__ftol();
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,
                       (local_14 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_1c,
                       (((uVar12 >> 0x10) % 7 + (int)this->field_0043) - (int)local_1c._2_2_) + -3,
                       (int)(short)lVar18 + (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                       (int)local_18,sVar17,sVar19,sVar20,sVar4,sVar21,sVar22,iVar6,sVar23,bVar24);
            uVar15 = extraout_var_00;
          }
          else {
            uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar12;
            uVar14 = uVar12 * 0x41c64e6d + 0x3039;
            this->field_001C = uVar14;
            uVar10 = uVar14 * 0x41c64e6d + 0x3039;
            this->field_001C = uVar10;
            local_1c._2_2_ = (short)((uint)uVar25 >> 0x10);
            iVar6 = (int)local_1c._2_2_;
            local_1c._0_2_ = (short)uVar25;
            iVar16 = (int)(short)local_1c;
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,
                       (uVar10 >> 0x10) % 7 + (int)this->field_0041 + -3 + iVar16,
                       (((uVar14 >> 0x10) % 7 + (int)this->field_0043) - iVar6) + -3,
                       (uVar12 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_18,0,0,0,0,0,0
                       ,-1,0,0);
            uVar15 = extraout_var_01;
          }
          iVar6 = param_1 + 1;
          param_1 = iVar6;
        } while ((short)iVar6 < (short)(ushort)(byte)this->field_0x2bf);
      }
      if (local_8 == -1) {
        iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x325c,0,0,&DAT_007a4ccc,
                                   s_STBoatC__Capture__CAPTURE_PMOVE_2_007ab1e4);
        if (iVar6 != 0) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        return -1;
      }
      if (local_8 == 0) {
        piVar7 = (int *)STAllPlayersC::GetObjPtr
                                  (g_sTAllPlayers_007FA174,CONCAT31(uVar15,this->field_0x5fc),
                                   CONCAT22((short)((uint)iVar6 >> 0x10),
                                            *(undefined2 *)&this->field_0x5fd),CASE_1);
        if (((piVar7 == (int *)0x0) || (piVar7[6] != *(int *)&this->field_0x5ff)) ||
           (iVar6 = (**(code **)(*piVar7 + 0x108))(*(undefined4 *)&this->field_0x24), iVar6 == 0)) {
          this->field_0611 = CASE_4;
          *(undefined4 *)&this->field_0x615 = 0;
        }
        else {
          thunk_FUN_004cd3e0(piVar7,this->field_0018,*(undefined4 *)&this->field_0x24);
          SVar2 = this->field_06F7;
          this->field_0611 = CASE_3;
          if (SVar2 == CASE_6) {
            pSVar13 = this->vtable;
            uVar25 = 0xed;
          }
          else {
            if (SVar2 == CASE_12) {
              (*this->vtable->vfunc_90)(3,0x151);
              goto cf_common_exit_0047746B;
            }
            if (SVar2 != CASE_22) goto cf_common_exit_0047746B;
            pSVar13 = this->vtable;
            uVar25 = 0x1d2;
          }
          (*pSVar13->vfunc_90)(3,uVar25);
        }
      }
    }
  }
  else {
    if (SVar1 != CASE_3) {
      if (SVar1 != CASE_4) {
        if (SVar1 != CASE_5) {
          iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x330e,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Capture___incorrect_ent_007ab138);
          if (iVar6 != 0) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          return -1;
        }
        iVar6 = sub_0045FF50(this,2);
        if (iVar6 == -1) {
          iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x32fc,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Capture__CAPTURE_ESCMOV_007ab164);
          if (iVar6 != 0) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          return -1;
        }
        if (iVar6 == 0) {
          iVar6 = (*this->vtable->vfunc_D8)();
          return -(uint)(iVar6 != 0);
        }
        if (iVar6 == 3) {
          thunk_FUN_00492f30((int)this,extraout_EDX_04);
          sub_00481520(this,(int)*(short *)&this->field_0x609,(int)*(short *)&this->field_0x60b,
                       (int)*(short *)&this->field_0x60d);
          sub_0045FF50(this,0);
        }
cf_common_exit_00477B2E:
        iVar6 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
      }
      if (*(int *)&this->field_0x615 == 0) {
        iVar6 = (ushort)(*(short *)&this->field_0x607 * 200) + 100;
        iVar8 = CONCAT22((short)((uint)this >> 0x10),*(short *)&this->field_0x605 * 0xc9) + 100;
        iVar16 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)&this->field_0x603 * 0xc9) + 100;
        uVar5 = (undefined2)((uint)iVar8 >> 0x10);
        uVar5 = (*this->vtable->vfunc_10)
                          (CONCAT22(uVar5,this->field_0041),
                           CONCAT22((short)((uint)iVar16 >> 0x10),this->field_0043),
                           CONCAT22(uVar5,this->field_0045),iVar16,iVar8,iVar6);
        *(undefined2 *)&this->field_0x60f = uVar5;
        *(undefined4 *)&this->field_0x615 = 1;
      }
      if (*(int *)&this->field_0x615 == 1) {
        uVar10 = sub_004176C0(this,*(short *)&this->field_0x60f);
        uVar10 = sub_00417910(this,(short)uVar10);
        if (uVar10 == 0xffffffff) {
          iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x32c1,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Capture__CAPTURE_OMOVE_007ab1bc);
          if (iVar6 != 0) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          return -1;
        }
        if (uVar10 == 0) {
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
        uVar25 = CONCAT31((int3)((uint)extraout_EDX_01 >> 8),this->field_0x2bf);
        param_1 = 0;
        if (this->field_0x2bf != '\0') {
          do {
            puVar11 = (undefined4 *)
                      thunk_FUN_0041dc40(local_24,*(undefined4 *)
                                                   (&this->field_0x2b3 + (short)param_1 * 6),
                                         *(undefined2 *)(&this->field_0x2b7 + (short)param_1 * 6),
                                         this->field_006C);
            uVar25 = *puVar11;
            local_18 = *(short *)(puVar11 + 1);
            local_1c = uVar25;
            if (DAT_0080732c == 1) {
              bVar24 = 0;
              sVar23 = 0;
              uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar6 = -1;
              this->field_001C = uVar10;
              sVar22 = 0;
              sVar21 = 0;
              uVar12 = uVar10 * 0x41c64e6d + 0x3039;
              sVar4 = 0;
              this->field_001C = uVar12;
              sVar20 = 0;
              sVar19 = 0;
              local_14 = uVar12 * 0x41c64e6d + 0x3039;
              sVar17 = 0;
              this->field_001C = local_14;
              lVar18 = Library::MSVCRT::__ftol();
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         (local_14 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_1c,
                         (((uVar12 >> 0x10) % 7 + (int)this->field_0043) - (int)local_1c._2_2_) + -3
                         ,(int)(short)lVar18 + (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                          (int)local_18,sVar17,sVar19,sVar20,sVar4,sVar21,sVar22,iVar6,sVar23,bVar24
                        );
              uVar25 = extraout_EDX_02;
            }
            else {
              uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar12;
              uVar14 = uVar12 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar14;
              uVar10 = uVar14 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar10;
              local_1c._2_2_ = (short)((uint)uVar25 >> 0x10);
              iVar6 = (int)local_1c._2_2_;
              local_1c._0_2_ = (short)uVar25;
              iVar16 = (int)(short)local_1c;
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         (uVar10 >> 0x10) % 7 + (int)this->field_0041 + -3 + iVar16,
                         (((uVar14 >> 0x10) % 7 + (int)this->field_0043) - iVar6) + -3,
                         (uVar12 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_18,0,0,0,0,0
                         ,0,-1,0,0);
              uVar25 = extraout_EDX_03;
            }
            param_1 = param_1 + 1;
          } while ((short)param_1 < (short)(ushort)(byte)this->field_0x2bf);
        }
        if (local_8 == -1) {
          iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x32e6,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Capture__CAPTURE_OMOVE_2_007ab194);
          if (iVar6 != 0) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          return -1;
        }
        if (local_8 == 0) {
          this->field_0611 = CASE_5;
          thunk_FUN_00492f30((int)this,uVar25);
          sub_00481520(this,(int)*(short *)&this->field_0x609,(int)*(short *)&this->field_0x60b,
                       (int)*(short *)&this->field_0x60d);
          iVar6 = sub_0045FF50(this,0);
          if (iVar6 == -1) {
            return -1;
          }
        }
      }
      iVar6 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
    }
    piVar7 = (int *)STAllPlayersC::GetObjPtr
                              (g_sTAllPlayers_007FA174,
                               CONCAT31((int3)((uint)this >> 8),this->field_0x5fc),
                               (uint)*(ushort *)&this->field_0x5fd,CASE_1);
    if (((piVar7 == (int *)0x0) || (piVar7[6] != *(int *)&this->field_0x5ff)) ||
       (iVar6 = (**(code **)(*piVar7 + 0x108))(*(undefined4 *)&this->field_0x24), iVar6 == 0)) {
      if (((int)this->field_0041 == (*(short *)&this->field_0x609 + 1) * 0xc9) &&
         ((int)this->field_0043 == (*(short *)&this->field_0x60b + 1) * 0xc9)) {
        this->field_0611 = CASE_4;
        *(undefined4 *)&this->field_0x615 = 0;
        iVar6 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
      }
      iVar6 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar6 != 0);
    }
    iVar6 = thunk_FUN_004cd480(piVar7);
    if (iVar6 == 1) {
      if (DAT_008117bc != (undefined4 *)0x0) {
        local_2e = *(undefined2 *)((int)piVar7 + 0x32);
        local_30 = (undefined2)piVar7[9];
        local_34 = 0x5dd4;
        local_2c = CONCAT22(this->field_0032,*(undefined2 *)&this->field_0x24);
        (**(code **)*DAT_008117bc)(local_44);
      }
      (**(code **)(*piVar7 + 0x10c))();
      (**(code **)(*piVar7 + 0x110))(*(undefined4 *)&this->field_0x24,this->field_06F3);
    }
    else if (iVar6 != 2) goto cf_common_exit_0047746B;
    uVar10 = thunk_FUN_004406c0((char)piVar7[9]);
    iVar6 = (**(code **)(*piVar7 + 0x2c))();
    local_64.data = &local_40;
    local_40 = *(undefined4 *)(&DAT_007e1374 + ((uVar10 & 0xff) + iVar6 * 3) * 4);
    local_38 = 0xff;
    local_3c = 0;
    local_2c = 1;
    local_64.id = MESS_TORPHIT;
    (*this->vtable->GetMessage)(this,&local_64);
    iVar6 = (*(short *)&this->field_0x609 + 1) * 0xc9;
    if ((this->field_0041 == iVar6) &&
       (iVar6 = (*(short *)&this->field_0x60b + 1) * 0xc9, this->field_0043 == iVar6)) {
      this->field_0611 = CASE_4;
      *(undefined4 *)&this->field_0x615 = 0;
    }
    else {
      this->field_0611 = CASE_5;
      thunk_FUN_00492f30((int)this,iVar6);
      sub_00481520(this,(int)*(short *)&this->field_0x609,(int)*(short *)&this->field_0x60b,
                   (int)*(short *)&this->field_0x60d);
      iVar6 = sub_0045FF50(this,0);
      if (iVar6 == -1) {
        return -1;
      }
    }
  }
cf_common_exit_0047746B:
  iVar6 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
}

