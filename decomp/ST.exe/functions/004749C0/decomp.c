#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::WaitLoad

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004749C0 -> 006E62D0 @ 00474A98 | 004749C0 -> 006E62D0 @ 00474FD8

   [STSwitchEnumApplier] Switch target field_05C4 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_05C4State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7

   [STSwitchEnumApplier] Switch target field_05C4 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_05C4State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7 */

int __thiscall STBoatC::WaitLoad(STBoatC *this,STBoatC *param_1)

{
  uint uVar1;
  STBoatC_field_05C4State SVar2;
  uint uVar3;
  ulonglong uVar4;
  ushort uVar6;
  int iVar10;
  int local_EAX_164;
  int iVar12_mg2;
  int local_EAX_248;
  uint uVar7;
  int local_EAX_758;
  uint *puVar8;
  int iVar9;
  int iVar11;
  int local_EAX_1388;
  int local_EAX_1495;
  int iVar12_mgD;
  int local_EAX_1592;
  int local_EAX_1718;
  int iVar12_mg11;
  int local_EAX_2278;
  int iVar12;
  STBoatC *pSVar13;
  int iVar14;
  longlong lVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  int iVar22;
  short sVar23;
  byte bVar24;
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_2c [2];
  uint local_24;
  short local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;

  if ((param_1 == nullptr) || (pSVar13 = this, param_1 == (STBoatC *)0x1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    iVar12 = 0;
    this->field_02C4 = 0;
    memset(&this->field_05A0, 0, 0x2a); /* compiler bulk-zero initialization */
    this->field_05A0 = this->field_03C8;
    this->field_05C0 = 0;
    pSVar13 = nullptr;
  }
  if (this->field_05C0 != 0) {
    if (this->field_05C0 != 1) {
LAB_00475068:
      if (this->field_05C0 == 2) {
        /* ST_CALLSITE[00475076]: CALL 0x00402658; direct=00402658 STBoatC::BackWaitLoad */
        local_EAX_1718 = BackWaitLoad(this,(int *)0x2);
        if (local_EAX_1718 == 0) {
          this->field_05C0 = 0;
        }
        return 2;
      }
      if (this->field_05C0 != 3) {
        local_EAX_2278 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3007,0,0,"%s",
                                "STBoatC::WaitLoad unknown swli.regime");
        if (local_EAX_2278 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if ((this->field_05A6 == nullptr) &&
         (iVar12_mg11 = STPlaySystemC::sub_006E62D0
                                  (g_playSystem_00802A38,this->field_05A2,(int *)&this->field_05A6),
         iVar12_mg11 == -4)) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2fea
                  );
      }
      if ((*(int *)(this->field_05A6 + 999) != 0) && (this->field_0716 < this->field_0712)) {
        uVar4 = (ulonglong)g_playSystem_00802A38->field_00E4 % 0x19;
        if ((int)uVar4 == 0) {
          iVar12 = this->field_06F7 - CASE_1;
          if ((int)((uVar4 << 0x20 | (ulonglong)g_playSystem_00802A38->field_00E4) % 100) == 0) {
            /* ST_CALLSITE[0047513F]: CALL dword ptr [EDX + 0x90] */
            this->vfunc_90(3,0x363);
            thunk_FUN_00637930(this->field_01ED,1,-100,-100,-100,0,0);
          }
          iVar22 = this->field_0712;
          iVar9 = (iVar22 * 0x19) / (int)(&DAT_007e04a0)[iVar12];
          if (iVar22 < this->field_0716 + iVar9) {
            iVar9 = iVar22 - this->field_0716;
          }
          local_8 = (undefined4 *)((*(int *)(&DAT_0085442c + iVar12 * 4) * iVar9) / iVar22);
          iVar22 = (*(int *)(&DAT_007e07a0 + iVar12 * 4) * iVar9) / iVar22;
          thunk_FUN_004d7480((char)this->field_0024,4,this->field_0018,(int)local_8,0,iVar22,0);
          iVar12 = thunk_FUN_004d7b10((char)this->field_0024,4);
          if (((int)local_8 <= iVar12) &&
             (iVar12 = thunk_FUN_004d7b90((char)this->field_0024,4), iVar22 <= iVar12)) {
            thunk_FUN_004d7c10((char)this->field_0024,4,this->field_0018,(int)local_8);
            thunk_FUN_004d7e50((char)this->field_0024,4,this->field_0018,iVar22);
            this->field_0716 = this->field_0716 + iVar9;
            if (this->field_0024 == (uint)(byte)this->field_0010->field_112D) {
              thunk_FUN_004d8b70((char)this->field_0024);
            }
          }
          thunk_FUN_004d7570((char)this->field_0024,4,(int *)this->field_0018);
        }
      }
      local_44 = this->field_0008;
      local_3c = 0x129;
      local_40 = 2;
      SystemClassTy::PostMessage((SystemClassTy *)g_playSystem_00802A38,local_4c);
switchD_00474a47_caseD_2:
      return 2;
    }
    if (this->field_05C4 == CASE_0) {
      /* ST_CALLSITE[00474A38]: CALL 0x004031de; direct=004031DE STBoatC::sub_00460260 */
      iVar10 = sub_00460260(this,2);
      switch(iVar10) {
      case 0:
      case 1:
        /* ST_CALLSITE[00474AF1]: CALL 0x00403855; direct=00403855 STBoatC::sub_004602B0 */
        sub_004602B0(this);
        iVar12 = this->field_05BC;
        this->field_05BC = iVar12 + 1;
        if ((&this->field_05B4)[iVar12] != -1) {
          param_1 = (STBoatC *)thunk_FUN_0042b760((char)this->field_0024,this->field_0030);
          /* ST_CALLSITE[00474B42]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
          sub_00481520(this,(int)this->field_005B,(int)this->field_005D,
                       (int)(&this->field_05B2)[this->field_05BC]);
          /* ST_CALLSITE[00474B4A]: CALL 0x004031de; direct=004031DE STBoatC::sub_00460260 */
          sub_00460260(this,0);
          return 2;
        }
        if ((this->field_0041 == (short)(this->field_05AA * 0xc9 + 100)) &&
           (this->field_0043 == (short)(*(short *)&this->field_0x5ac * 0xc9 + 100))) {
          if (this->field_0045 != (short)(*(short *)&this->field_0x5ae * 200 + 100)) {
            this->field_05C4 = CASE_3;
            return 2;
          }
          this->field_05C4 = CASE_6 - (this->field_006C != this->field_05B0);
          return 2;
        }
        this->field_05C4 = CASE_1;
        return 2;
      case 2:
        goto switchD_00474a47_caseD_2;
      case 3:
        this->field_05C0 = 0;
        iVar12_mg2 = STPlaySystemC::sub_006E62D0
                               (g_playSystem_00802A38,this->field_05A2,(int *)&param_1);
        if (iVar12_mg2 != -4) {
          /* ST_CALLSITE[00474ADC]: CALL 0x004054e3; direct=004054E3 STBoatC::NotReadyForLoading */
          NotReadyForLoading(param_1,this->field_0018);
          return 2;
        }
        local_EAX_248 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2f68,0,0,"%s",
                                "STBoatC::WaitLoad WAITLOAD_PREPARE ptr=NULL");
        if (local_EAX_248 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      case -1:
        local_EAX_164 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2f61,0,0,"%s",
                                "STBoatC::WaitLoad WAITLOAD_PREPARE ret=STATE_ERROR");
        if (local_EAX_164 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      default:
        return 2;
      }
    }
    if (this->field_05C4 == CASE_1) {
      iVar12 = STReplaceLowWord((uint32_t)(pSVar13), (uint16_t)(*(short *)&this->field_0x5ac * 0xc9)) + 100;
      /* ST_CALLSITE[00474C3B]: CALL dword ptr [EDX + 0x10] */
      uVar6 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar12), (uint16_t)(this->field_0045)),
                         this->field_05AA * 0xc9 + 100,(short)iVar12,
                         (ushort)(*(short *)&this->field_0x5ae * 200) + 100);
      this->field_05C8 = uVar6;
      this->field_05C4 = CASE_2;
    }
    if (this->field_05C4 == CASE_2) {
      /* ST_CALLSITE[00474C64]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0 */
      uVar7 = sub_004176C0(this,this->field_05C8);
      /* ST_CALLSITE[00474C6C]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
      uVar7 = sub_00417910(this,(short)uVar7);
      if (uVar7 != 0xffffffff) {
        if (uVar7 == 0) {
          this->field_05C4 = CASE_3;
        }
        /* ST_CALLSITE[00474C88]: CALL dword ptr [EAX + 0xd8] */
        iVar12 = this->vfunc_D8();
        return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
      }
      local_EAX_758 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2f8f,0,0,"%s",
                              "STBoatC::WaitLoad swli.regime2=2");
      if (local_EAX_758 == 0) {
        return -1;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (this->field_05C4 == CASE_3) {
      /* ST_CALLSITE[00474D1D]: CALL 0x00402455; direct=00402455 sub_00415B30 */
      sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_05AA * 0xc9 + 100,*(short *)&this->field_0x5ac * 0xc9 + 100,
                   *(short *)&this->field_0x5ae * 200 + 100,this->field_0061);
      this->field_05C4 = CASE_4;
    }
    SVar2 = this->field_05C4;
    if (SVar2 == CASE_4) {
      /* ST_CALLSITE[00474D45]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
      local_1c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_18,&local_14);
      uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar7;
      iVar12 = (uVar7 >> 0x10) % 7 - 3;
      uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar7;
      uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar1;
      local_c = (uVar1 >> 0x10) % 7 - 3;
      if ((this->field_074A <= (int)PTR_00806724->entryCount / 2) &&
         (local_10 = 0, this->field_02BF != '\0')) {
        local_8 = (undefined4 *)&this->field_0x2b3;
        do {
          puVar8 = thunk_FUN_0041dc40(local_2c,(short)*local_8,*(ushort *)(local_8 + 1),
                                      this->field_006C);
          uVar3 = *puVar8;
          bVar24 = 0;
          sVar23 = 0;
          iVar22 = -1;
          local_20 = *(short *)(puVar8 + 1);
          sVar21 = 0;
          sVar20 = 0;
          sVar19 = 0;
          sVar18 = 0;
          sVar17 = 0;
          sVar16 = 0;
          local_24 = uVar3;
          if (DAT_0080732c == 1) {
            sVar16 = 0;
            sVar17 = 0;
            sVar18 = 0;
            sVar19 = 0;
            sVar20 = 0;
            sVar21 = 0;
            sVar23 = 0;
            bVar24 = 0;
            lVar15 = Library::MSVCRT::__ftol();
            iVar14 = (int)local_20 + this->field_0045 + local_c + (short)lVar15;
            iVar9 = (int)this->field_0043 - (int)STPiece<2,2>(local_24);
            iVar11 = (short)local_24 + iVar12 + this->field_0041;
          }
          else {
            iVar14 = (int)local_20 + local_c + this->field_0045;
            STPiece<2,2>(local_24) = (short)((uint)uVar3 >> 0x10);
            iVar9 = (int)this->field_0043 - (int)STPiece<2,2>(local_24);
            STPiece<0,2>(local_24) = (short)uVar3;
            iVar11 = (short)local_24 + iVar12 + this->field_0041;
          }
          /* ST_CALLSITE[00474EAE]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
          TraksClassTy::TraksCreate
                    (g_traksClass_00802A7C,1,2,7,iVar11,iVar9 + ((uVar7 >> 0x10) % 7 - 3),iVar14,
                     sVar16,sVar17,sVar18,sVar19,sVar20,sVar21,iVar22,sVar23,bVar24);
          local_8 = (undefined4 *)((int)local_8 + 6);
          local_10 = local_10 + 1;
        } while (local_10 < (int)(uint)(byte)this->field_02BF);
      }
      if (local_1c == -1) {
        local_EAX_1388 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2fb6,0,0,"%s",
                                "STBoatC::WaitLoad swli.regime2=4");
        if (local_EAX_1388 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (local_1c == 0) {
        this->field_05C4 = CASE_6 - (this->field_006C != this->field_05B0);
      }
      /* ST_CALLSITE[00474EFC]: CALL dword ptr [EAX + 0xd8] */
      iVar12 = this->vfunc_D8();
      return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
    }
    if (SVar2 == CASE_5) {
      /* ST_CALLSITE[00474F58]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0 */
      uVar7 = sub_004176C0(this,this->field_05B0);
      /* ST_CALLSITE[00474F60]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
      uVar7 = sub_00417910(this,(short)uVar7);
      if (uVar7 == 0xffffffff) {
        local_EAX_1495 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2fc5,0,0,"%s",
                                "STBoatC::WaitLoad swli.regime2=5");
        if (local_EAX_1495 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (uVar7 == 0) {
        this->field_05C4 = CASE_6;
      }
    }
    else {
      if (SVar2 == CASE_6) {
        if (this->field_006E == 0x2f) {
          this->field_0076 = 0;
          iVar12_mgD = STPlaySystemC::sub_006E62D0
                                 (g_playSystem_00802A38,this->field_05A2,(int *)&param_1);
          if (iVar12_mgD == -4) {
            local_EAX_1592 =
                 ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2fd1,0,0,"%s"
                                    ,"STBoatC::WaitLoad WAITLOAD_PREPARE ptr=NULL 2");
            if (local_EAX_1592 == 0) {
              return -1;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          /* ST_CALLSITE[0047501C]: CALL 0x0040164a; direct=0040164A STBoatC::ReadyForLoading */
          ReadyForLoading(param_1,(STFishC *)this->field_0018);
          this->field_05C4 = CASE_7;
        }
        /* ST_CALLSITE[0047502F]: CALL dword ptr [EAX + 0xd8] */
        iVar12 = this->vfunc_D8();
        return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
      }
      if (SVar2 != CASE_7) goto LAB_00475068;
    }
  }
  /* ST_CALLSITE[00475050]: CALL dword ptr [EDX + 0xd8] */
  iVar12 = this->vfunc_D8();
  return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
}

