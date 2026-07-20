
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::WaitLoad
   
   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004749C0 -> 006E62D0 @ 00474A98 | 004749C0 -> 006E62D0 @ 00474FD8 */

int __thiscall STBoatC::WaitLoad(STBoatC *this,int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  STBoatC *pSVar11;
  undefined4 extraout_ECX;
  int iVar12;
  int iVar13;
  longlong lVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  byte bVar22;
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_2c [2];
  undefined4 local_24;
  short local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  if ((param_1 == (int *)0x0) || (pSVar11 = this, param_1 == (int *)0x1)) {
    puVar8 = &this->field_02CC;
    for (iVar10 = 0x17; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    this->field_02C4 = 0;
    puVar8 = (undefined4 *)&this->field_05A0;
    for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined2 *)puVar8 = 0;
    this->field_05A0 = this->field_03C8;
    this->field_05C0 = 0;
    pSVar11 = (STBoatC *)0x0;
  }
  if (this->field_05C0 != 0) {
    if (this->field_05C0 != 1) {
LAB_00475068:
      if (this->field_05C0 == 2) {
        iVar10 = BackWaitLoad(this,(int *)0x2);
        if (iVar10 == 0) {
          this->field_05C0 = 0;
        }
        return 2;
      }
      if (this->field_05C0 != 3) {
        iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3007,0,0,&DAT_007a4ccc
                                    ,s_STBoatC__WaitLoad_unknown_swli_r_007aae9c);
        if (iVar10 == 0) {
          return -1;
        }
        pcVar4 = (code *)swi(3);
        iVar10 = (*pcVar4)();
        return iVar10;
      }
      if ((this->field_05A6 == 0) &&
         (iVar10 = FUN_006e62d0(DAT_00802a38,this->field_05A2,&this->field_05A6), iVar10 == -4)) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2fea
                  );
      }
      if ((*(int *)(this->field_05A6 + 0x7ce) != 0) &&
         ((int)this->field_0716 < (int)this->field_0712)) {
        uVar3 = ZEXT48(DAT_00802a38[7].messages) % 0x19;
        if ((int)uVar3 == 0) {
          iVar10 = this->field_06F7 - CASE_1;
          if ((int)((uVar3 << 0x20 | ZEXT48(DAT_00802a38[7].messages)) % 100) == 0) {
            (*this->vtable->vfunc_90)(3,0x363);
            thunk_FUN_00637930(this->field_01ED,1,-100,-100,-100,0,0);
          }
          iVar6 = this->field_0712;
          iVar12 = (iVar6 * 0x19) / (int)(&DAT_007e04a0)[iVar10];
          if (iVar6 < this->field_0716 + iVar12) {
            iVar12 = iVar6 - this->field_0716;
          }
          local_8 = (undefined4 *)((*(int *)(&DAT_0085442c + iVar10 * 4) * iVar12) / iVar6);
          iVar6 = (*(int *)(&DAT_007e07a0 + iVar10 * 4) * iVar12) / iVar6;
          thunk_FUN_004d7480(this->field_0x24,4,this->field_0018,(int)local_8,0,iVar6,0);
          iVar10 = thunk_FUN_004d7b10(this->field_0x24,4);
          if (((int)local_8 <= iVar10) &&
             (iVar10 = thunk_FUN_004d7b90(this->field_0x24,4), iVar6 <= iVar10)) {
            thunk_FUN_004d7c10(this->field_0x24,4,this->field_0018,(int)local_8);
            thunk_FUN_004d7e50(this->field_0x24,4,this->field_0018,iVar6);
            this->field_0716 = this->field_0716 + iVar12;
            if (*(uint *)&this->field_0x24 == (uint)*(byte *)(this->field_0010 + 0x112d)) {
              thunk_FUN_004d8b70((char)*(uint *)&this->field_0x24);
            }
          }
          thunk_FUN_004d7570(this->field_0x24,4,this->field_0018);
        }
      }
      local_44 = *(undefined4 *)&this->field_0x8;
      local_3c = 0x129;
      local_40 = 2;
      SystemClassTy::PostMessage(DAT_00802a38,local_4c);
switchD_00474a47_caseD_2:
      return 2;
    }
    if (this->field_05C4 == 0) {
      iVar10 = sub_00460260(this,2);
      switch(iVar10) {
      case 0:
      case 1:
        sub_004602B0(this);
        iVar10 = this->field_05BC;
        iVar6 = iVar10 + 1;
        this->field_05BC = iVar6;
        if ((&this->field_05B4)[iVar10] != -1) {
          param_1 = (int *)thunk_FUN_0042b760(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                       this->field_0x24),
                                              CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0030
                                                      ));
          sub_00481520(this,(int)this->field_005B,(int)this->field_005D,
                       (int)(short)(&this->field_05B2)[this->field_05BC]);
          sub_00460260(this,0);
          return 2;
        }
        if ((this->field_0041 == (short)(this->field_05AA * 0xc9 + 100)) &&
           (this->field_0043 == (short)(this->field_05AC * 0xc9 + 100))) {
          if (this->field_0045 != (short)(this->field_05AE * 200 + 100)) {
            this->field_05C4 = 3;
            return 2;
          }
          this->field_05C4 = 6 - (uint)(this->field_006C != this->field_05B0);
          return 2;
        }
        this->field_05C4 = 1;
        return 2;
      case 2:
        goto switchD_00474a47_caseD_2;
      case 3:
        this->field_05C0 = 0;
        iVar10 = FUN_006e62d0(DAT_00802a38,this->field_05A2,(int *)&param_1);
        if (iVar10 != -4) {
          NotReadyForLoading((STBoatC *)param_1,this->field_0018);
          return 2;
        }
        iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2f68,0,0,&DAT_007a4ccc
                                    ,s_STBoatC__WaitLoad_WAITLOAD_PREPA_007aaf7c);
        if (iVar10 == 0) {
          return -1;
        }
        pcVar4 = (code *)swi(3);
        iVar10 = (*pcVar4)();
        return iVar10;
      case -1:
        iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2f61,0,0,&DAT_007a4ccc
                                    ,s_STBoatC__WaitLoad_WAITLOAD_PREPA_007aafb0);
        if (iVar10 == 0) {
          return -1;
        }
        pcVar4 = (code *)swi(3);
        iVar10 = (*pcVar4)();
        return iVar10;
      default:
        return 2;
      }
    }
    if (this->field_05C4 == 1) {
      iVar10 = (ushort)(this->field_05AE * 200) + 100;
      iVar12 = CONCAT22((short)((uint)pSVar11 >> 0x10),this->field_05AC * 0xc9) + 100;
      iVar6 = CONCAT22((short)((uint)iVar10 >> 0x10),this->field_05AA * 0xc9) + 100;
      uVar5 = (undefined2)((uint)iVar12 >> 0x10);
      uVar5 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar5,this->field_0041),
                         CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0043),
                         CONCAT22(uVar5,this->field_0045),iVar6,iVar12,iVar10);
      *(undefined2 *)&this->field_0x5c8 = uVar5;
      this->field_05C4 = 2;
    }
    if (this->field_05C4 == 2) {
      uVar7 = sub_004176C0(this,*(short *)&this->field_0x5c8);
      uVar7 = sub_00417910(this,(short)uVar7);
      if (uVar7 != 0xffffffff) {
        if (uVar7 == 0) {
          this->field_05C4 = 3;
        }
        iVar10 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
      }
      iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2f8f,0,0,&DAT_007a4ccc,
                                  s_STBoatC__WaitLoad_swli_regime2_2_007aaf54);
      if (iVar10 == 0) {
        return -1;
      }
      pcVar4 = (code *)swi(3);
      iVar10 = (*pcVar4)();
      return iVar10;
    }
    if (this->field_05C4 == 3) {
      STJellyGunC::sub_00415B30
                ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                 this->field_05AA * 0xc9 + 100,this->field_05AC * 0xc9 + 100,
                 this->field_05AE * 200 + 100,this->field_0061);
      this->field_05C4 = 4;
    }
    iVar10 = this->field_05C4;
    if (iVar10 == 4) {
      local_1c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_18,&local_14);
      uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar7;
      iVar10 = (uVar7 >> 0x10) % 7 - 3;
      uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar7;
      uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar1;
      local_c = (uVar1 >> 0x10) % 7 - 3;
      if (((int)this->field_074A <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
         (local_10 = 0, this->field_0x2bf != '\0')) {
        local_8 = (undefined4 *)&this->field_0x2b3;
        do {
          puVar8 = (undefined4 *)
                   thunk_FUN_0041dc40(local_2c,*local_8,*(undefined2 *)(local_8 + 1),
                                      this->field_006C);
          uVar2 = *puVar8;
          bVar22 = 0;
          sVar21 = 0;
          iVar6 = -1;
          local_20 = *(short *)(puVar8 + 1);
          sVar20 = 0;
          sVar19 = 0;
          sVar18 = 0;
          sVar17 = 0;
          sVar16 = 0;
          sVar15 = 0;
          local_24 = uVar2;
          if (DAT_0080732c == 1) {
            sVar15 = 0;
            sVar16 = 0;
            sVar17 = 0;
            sVar18 = 0;
            sVar19 = 0;
            sVar20 = 0;
            sVar21 = 0;
            bVar22 = 0;
            lVar14 = Library::MSVCRT::__ftol();
            iVar13 = (int)local_20 + this->field_0045 + local_c + (int)(short)lVar14;
            iVar12 = (int)this->field_0043 - (int)local_24._2_2_;
            iVar9 = (int)(short)local_24 + iVar10 + this->field_0041;
          }
          else {
            iVar13 = (int)local_20 + local_c + this->field_0045;
            local_24._2_2_ = (short)((uint)uVar2 >> 0x10);
            iVar12 = (int)this->field_0043 - (int)local_24._2_2_;
            local_24._0_2_ = (short)uVar2;
            iVar9 = (int)(short)local_24 + iVar10 + this->field_0041;
          }
          TraksClassTy::TraksCreate
                    (g_traksClass_00802A7C,1,2,7,iVar9,iVar12 + ((uVar7 >> 0x10) % 7 - 3),iVar13,
                     sVar15,sVar16,sVar17,sVar18,sVar19,sVar20,iVar6,sVar21,bVar22);
          local_8 = (undefined4 *)((int)local_8 + 6);
          local_10 = local_10 + 1;
        } while (local_10 < (int)(uint)(byte)this->field_0x2bf);
      }
      if (local_1c == -1) {
        iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2fb6,0,0,&DAT_007a4ccc
                                    ,s_STBoatC__WaitLoad_swli_regime2_4_007aaf2c);
        if (iVar10 == 0) {
          return -1;
        }
        pcVar4 = (code *)swi(3);
        iVar10 = (*pcVar4)();
        return iVar10;
      }
      if (local_1c == 0) {
        this->field_05C4 = 6 - (uint)(this->field_006C != this->field_05B0);
      }
      iVar10 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
    }
    if (iVar10 == 5) {
      uVar7 = sub_004176C0(this,this->field_05B0);
      uVar7 = sub_00417910(this,(short)uVar7);
      if (uVar7 == 0xffffffff) {
        iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2fc5,0,0,&DAT_007a4ccc
                                    ,s_STBoatC__WaitLoad_swli_regime2_5_007aaf04);
        if (iVar10 == 0) {
          return -1;
        }
        pcVar4 = (code *)swi(3);
        iVar10 = (*pcVar4)();
        return iVar10;
      }
      if (uVar7 == 0) {
        this->field_05C4 = 6;
      }
    }
    else {
      if (iVar10 == 6) {
        if (this->field_006E == 0x2f) {
          this->field_0076 = 0;
          iVar10 = FUN_006e62d0(DAT_00802a38,this->field_05A2,(int *)&param_1);
          if (iVar10 == -4) {
            iVar10 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2fd1,0,0,
                                        &DAT_007a4ccc,s_STBoatC__WaitLoad_WAITLOAD_PREPA_007aaecc);
            if (iVar10 == 0) {
              return -1;
            }
            pcVar4 = (code *)swi(3);
            iVar10 = (*pcVar4)();
            return iVar10;
          }
          ReadyForLoading((STBoatC *)param_1,(void *)this->field_0018);
          this->field_05C4 = 7;
        }
        iVar10 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
      }
      if (iVar10 != 7) goto LAB_00475068;
    }
  }
  iVar10 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
}

