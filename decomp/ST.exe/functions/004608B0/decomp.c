#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Defence

   [STSwitchEnumApplier] Switch target field_045D uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_045DState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23

   [STSwitchEnumApplier] Switch target field_082E uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_082EState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_FFFFFFFF=4294967295 */

int __thiscall STBoatC::Defence(STBoatC *this,int param_1)

{
  STBoatC_field_045DState SVar1;
  STBoatC_field_082EState SVar2;
  dword dVar3;
  uint uVar4;
  short sVar6;
  int iVar6;
  int iVar7;
  STGameObjC *pSVar8;
  int local_EAX_1396;
  int local_EAX_1668;
  int local_EAX_1752;
  int local_EAX_1830;
  uint local_EAX_1921;
  uint *puVar9;
  int local_EAX_2367;
  int iVar9;
  uint uVar10;
  int local_EAX_3491;
  uint local_EAX_3596;
  int local_EAX_4152;
  uint local_EAX_4242;
  int local_EAX_4703;
  int local_EAX_4798;
  int iVar10;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_02;
  uint uVar11;
  ushort *puVar12;
  bool bVar13;
  RecoveredRecord_STBoatC_00645880 local_64;
  undefined4 local_3c [2];
  short local_34;
  short sStack_32;
  undefined2 local_30;
  int local_2c [2];
  uint local_24;
  STTorpC *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  short local_c;
  short local_a;
  short local_8;
  short local_6;

  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    this->field_0475 = this->field_0047;
    this->field_0477 = this->field_0049;
    this->field_0479 = this->field_004B;
    this->field_047B = nullptr;
    this->field_0487 = 0xffffffff;
    this->field_048B = 0xffff;
    this->field_082E = CASE_FFFFFFFF;
    SVar1 = this->field_045D;
    if ((((SVar1 == CASE_6) || (SVar1 == CASE_C)) || (SVar1 == CASE_D)) || (SVar1 == CASE_4)) {
      this->field_0836 = 2;
    }
    else {
      this->field_0836 = 4;
    }
    this->field_0814 = this->field_0816 * 0xc9;
  }
  if (this->field_082E == CASE_FFFFFFFF) {
    iVar10 = this->field_0836 + -1;
    this->field_0836 = iVar10;
    if (1 < iVar10) {
      /* ST_CALLSITE[00460985]: CALL dword ptr [EDX + 0xd8] */
      iVar10 = this->vfunc_D8();
      return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
    }
    this->field_082E = ~CASE_FFFFFFFF;
  }
  uVar11 = this->field_0836 + 1;
  this->field_0836 = uVar11;
  SVar2 = this->field_082E;
  if (SVar2 != ~CASE_FFFFFFFF) {
    if (SVar2 == CASE_1) {
      uVar4 = this->field_00B7;
      this->field_00B7 = 0;
      /* ST_CALLSITE[00461299]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
      iVar10 = sub_0045FF50(this,2);
      this->field_00B7 = uVar4;
      if (iVar10 == -1) {
        return -1;
      }
      if (iVar10 == 0) {
        this->field_047F = -1;
        this->field_082E = CASE_2;
      }
      else if (iVar10 == 3) {
        this->field_0469 = 0;
        this->field_082E = ~CASE_FFFFFFFF;
      }
      if (this->field_082E != CASE_1) {
        return 2;
      }
      /* ST_CALLSITE[004612EA]: CALL 0x00405b05; direct=00405B05 STBoatC::GetDefenceTarget */
      iVar10 = GetDefenceTarget(this,CASE_1);
      if (iVar10 != 0) {
        return 2;
      }
      /* ST_CALLSITE[00461313]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
      pSVar8 = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,*(char *)&this->field_0487,
                          *(ushort *)&this->field_048B,this->field_0483);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      iVar9 = thunk_FUN_00483300((int *)this,extraout_EDX_00);
      switch(iVar9) {
      case 0:
      case 10:
        thunk_FUN_00416270(pSVar8,&local_14,(short *)&local_18,(short *)&local_1c);
        local_64.field_000A = this->field_0043;
        local_64.field_0008 = this->field_0041;
        local_64.field_000C = this->field_0045;
        local_10 = 0;
        if (this->field_02B2 == '\0') {
          return 2;
        }
        puVar12 = (undefined2 *)&this->field_0x2a8;
        do {
          if (this->field_07A2 < 1) {
            return 2;
          }
          puVar9 = thunk_FUN_0041dc40(local_3c,(short)*(undefined4 *)(puVar12 + -1),puVar12[1],
                                      this->field_006C);
          sStack_32 = (short)((uint)*puVar9 >> 0x10);
          local_64.field_000E = (short)*puVar9 + this->field_0041;
          local_64.field_0010 = this->field_0043 - sStack_32;
          local_64.field_0012 = this->field_0045 + *(short *)(puVar9 + 1);
          sStack_32 = *puVar12;
          local_34 = 0;
          puVar9 = thunk_FUN_0041dc40(local_2c,0,0,this->field_006C);
          local_34 = (short)*puVar9;
          sStack_32 = (short)((uint)*puVar9 >> 0x10);
          local_30 = *(undefined2 *)(puVar9 + 1);
          local_64.field_0014 = local_34 + (short)local_14;
          local_64.field_0016 = (short)local_18 - sStack_32;
          local_64.field_0000 = this->field_0024;
          local_64.field_0018 = (short)local_1c;
          local_64.field_0022 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
          if (iVar9 == 10) {
            local_64.field_0004 = 0xa1;
          }
          else {
            local_64.field_0004 = this->field_079A;
          }
          local_64.field_001A = this->field_006C;
          local_64.field_001C = this->field_0018;
          local_64.field_0020 = this->field_0032;
          thunk_FUN_00645880(&local_64);
          if (iVar9 == 10) {
            this->field_072A = 0;
          }
          else {
            this->field_07AA = 0;
            this->field_07A2 = this->field_07A2 + -1;
          }
          local_10 = local_10 + 1;
          puVar12 = puVar12 + 3;
        } while (local_10 < (byte)this->field_02B2);
        return 2;
      case 1:
      case 5:
      case 6:
      case 7:
      case 8:
        goto switchD_00461334_caseD_1;
      default:
        return 2;
      case 9:
        thunk_FUN_00416270(pSVar8,&local_14,(short *)&local_18,(short *)&local_1c);
        /* ST_CALLSITE[00461385]: CALL dword ptr [EDX + 0x10] */
        sVar6 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,
                           STReplaceLowWord((uint32_t)(local_18), (uint16_t)(this->field_0045)),
                           (short)local_14,(short)local_18,local_1c);
        /* ST_CALLSITE[0046138E]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0 */
        uVar10 = sub_004176C0(this,sVar6);
        /* ST_CALLSITE[00461396]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
        sub_00417910(this,(short)uVar10);
        return 2;
      }
    }
    if (SVar2 == CASE_2) {
      iVar10 = thunk_FUN_00483f10(this);
      if (iVar10 == 1) {
        sVar6 = this->field_0469;
        this->field_0469 = -sVar6;
        /* ST_CALLSITE[00461583]: CALL dword ptr [EDX + 0x18] */
        iVar10 = this->vfunc_18(this->field_0047,this->field_0049,-sVar6 + this->field_004B);
        if (iVar10 == 1) {
          this->field_082E = CASE_3;
          /* ST_CALLSITE[004615AF]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
          sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                       (int)this->field_0469 + (int)this->field_004B);
          uVar4 = this->field_00B7;
          this->field_00B7 = 0;
          /* ST_CALLSITE[004615C3]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
          iVar10 = sub_0045FF50(this,0);
          this->field_00B7 = uVar4;
          if (iVar10 == -1) {
            return -1;
          }
          if ((iVar10 != 0) && (iVar10 != 3)) {
            return 2;
          }
          this->field_0469 = 0;
          this->field_082E = ~CASE_FFFFFFFF;
          return 2;
        }
        this->field_0469 = -this->field_0469;
      }
      /* ST_CALLSITE[00461621]: CALL 0x00405b05; direct=00405B05 STBoatC::GetDefenceTarget */
      if ((this->field_082E == CASE_2) && (iVar10 = GetDefenceTarget(this,CASE_2), iVar10 == 0)) {
        /* ST_CALLSITE[0046164A]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        pSVar8 = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,*(char *)&this->field_0487,
                            *(ushort *)&this->field_048B,this->field_0483);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        local_EAX_3491 = thunk_FUN_00483300((int *)this,extraout_EDX_01);
        switch(local_EAX_3491) {
        case 0:
        case 10:
          thunk_FUN_00416270(pSVar8,&local_14,(short *)&local_18,(short *)&local_1c);
          local_64.field_000A = this->field_0043;
          local_64.field_0008 = this->field_0041;
          local_64.field_000C = this->field_0045;
          local_10 = 0;
          if (this->field_02B2 != '\0') {
            puVar12 = (undefined2 *)&this->field_0x2a8;
            do {
              if (this->field_07A2 < 1) break;
              puVar9 = thunk_FUN_0041dc40(local_3c,(short)*(undefined4 *)(puVar12 + -1),puVar12[1],
                                          this->field_006C);
              sStack_32 = (short)((uint)*puVar9 >> 0x10);
              local_64.field_000E = (short)*puVar9 + this->field_0041;
              local_64.field_0010 = this->field_0043 - sStack_32;
              local_64.field_0012 = this->field_0045 + *(short *)(puVar9 + 1);
              sStack_32 = *puVar12;
              local_34 = 0;
              puVar9 = thunk_FUN_0041dc40(local_2c,0,0,this->field_006C);
              local_34 = (short)*puVar9;
              sStack_32 = (short)((uint)*puVar9 >> 0x10);
              local_30 = *(undefined2 *)(puVar9 + 1);
              local_64.field_0014 = local_34 + (short)local_14;
              local_64.field_0016 = (short)local_18 - sStack_32;
              local_64.field_0000 = this->field_0024;
              local_64.field_0018 = (short)local_1c;
              local_64.field_0022 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
              if (local_EAX_3491 == 10) {
                local_64.field_0004 = 0xa1;
              }
              else {
                local_64.field_0004 = this->field_079A;
              }
              local_64.field_001A = this->field_006C;
              local_64.field_001C = this->field_0018;
              local_64.field_0020 = this->field_0032;
              thunk_FUN_00645880(&local_64);
              if (local_EAX_3491 == 10) {
                this->field_072A = 0;
              }
              else {
                this->field_07AA = 0;
                this->field_07A2 = this->field_07A2 + -1;
              }
              local_10 = local_10 + 1;
              puVar12 = puVar12 + 3;
            } while (local_10 < (byte)this->field_02B2);
          }
          break;
        case 1:
        case 5:
        case 6:
        case 7:
        case 8:
          this->field_047F = -1;
          break;
        case 9:
          thunk_FUN_00416270(pSVar8,&local_14,(short *)&local_18,(short *)&local_1c);
          /* ST_CALLSITE[004616B3]: CALL dword ptr [EDX + 0x10] */
          sVar6 = (*this->vtable->vfunc_10)
                            (this->field_0041,this->field_0043,
                             STReplaceLowWord((uint32_t)(local_18), (uint16_t)(this->field_0045)),
                             (short)local_14,(short)local_18,local_1c);
          /* ST_CALLSITE[004616BC]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0 */
          local_EAX_3596 = sub_004176C0(this,sVar6);
          /* ST_CALLSITE[004616C4]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
          sub_00417910(this,(short)local_EAX_3596);
        }
      }
    }
    else {
      if (SVar2 == CASE_3) {
        uVar4 = this->field_00B7;
        this->field_00B7 = 0;
        /* ST_CALLSITE[0046187B]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
        iVar10 = sub_0045FF50(this,2);
        this->field_00B7 = uVar4;
        if (iVar10 == -1) {
          return -1;
        }
        if ((iVar10 == 0) || (iVar10 == 3)) {
          this->field_0469 = 0;
          this->field_082E = ~CASE_FFFFFFFF;
        }
        /* ST_CALLSITE[004618B6]: CALL 0x00405b05; direct=00405B05 STBoatC::GetDefenceTarget */
        if ((this->field_082E == CASE_3) && (iVar10 = GetDefenceTarget(this,CASE_3), iVar10 == 0)) {
          /* ST_CALLSITE[004618DF]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          pSVar8 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,*(char *)&this->field_0487,
                              *(ushort *)&this->field_048B,this->field_0483);
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          local_EAX_4152 = thunk_FUN_00483300((int *)this,extraout_EDX_02);
          switch(local_EAX_4152) {
          case 0:
          case 10:
            thunk_FUN_00416270(pSVar8,&local_14,(short *)&local_18,(short *)&local_1c);
            local_64.field_000A = this->field_0043;
            local_64.field_0008 = this->field_0041;
            local_64.field_000C = this->field_0045;
            local_10 = 0;
            if (this->field_02B2 != '\0') {
              puVar12 = (undefined2 *)&this->field_0x2a8;
              while (0 < this->field_07A2) {
                puVar9 = thunk_FUN_0041dc40(local_3c,(short)*(undefined4 *)(puVar12 + -1),puVar12[1]
                                            ,this->field_006C);
                sStack_32 = (short)((uint)*puVar9 >> 0x10);
                local_64.field_000E = (short)*puVar9 + this->field_0041;
                local_64.field_0010 = this->field_0043 - sStack_32;
                local_64.field_0012 = this->field_0045 + *(short *)(puVar9 + 1);
                sStack_32 = *puVar12;
                local_34 = 0;
                puVar9 = thunk_FUN_0041dc40(local_2c,0,0,this->field_006C);
                local_34 = (short)*puVar9;
                sStack_32 = (short)((uint)*puVar9 >> 0x10);
                local_30 = *(undefined2 *)(puVar9 + 1);
                local_64.field_0014 = local_34 + (short)local_14;
                local_64.field_0016 = (short)local_18 - sStack_32;
                local_64.field_0000 = this->field_0024;
                local_64.field_0018 = (short)local_1c;
                local_64.field_0022 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
                if (local_EAX_4152 == 10) {
                  local_64.field_0004 = 0xa1;
                }
                else {
                  local_64.field_0004 = this->field_079A;
                }
                local_64.field_001A = this->field_006C;
                local_64.field_001C = this->field_0018;
                local_64.field_0020 = this->field_0032;
                thunk_FUN_00645880(&local_64);
                if (local_EAX_4152 == 10) {
                  this->field_072A = 0;
                }
                else {
                  this->field_07AA = 0;
                  this->field_07A2 = this->field_07A2 + -1;
                }
                local_10 = local_10 + 1;
                puVar12 = puVar12 + 3;
                if ((byte)this->field_02B2 <= local_10) {
                  return 2;
                }
              }
            }
            break;
          case 1:
          case 5:
          case 6:
          case 7:
          case 8:
switchD_00461334_caseD_1:
            this->field_047F = -1;
            return 2;
          case 9:
            thunk_FUN_00416270(pSVar8,&local_14,(short *)&local_18,(short *)&local_1c);
            /* ST_CALLSITE[00461939]: CALL dword ptr [EDX + 0x10] */
            sVar6 = (*this->vtable->vfunc_10)
                              (this->field_0041,this->field_0043,
                               STReplaceLowWord((uint32_t)(local_18), (uint16_t)(this->field_0045)),
                               (short)local_14,(short)local_18,local_1c);
            /* ST_CALLSITE[00461942]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0 */
            local_EAX_4242 = sub_004176C0(this,sVar6);
            /* ST_CALLSITE[0046194A]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
            sub_00417910(this,(short)local_EAX_4242);
            return 2;
          }
        }
        return 2;
      }
      if (SVar2 != CASE_4) {
        local_EAX_4798 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1808,0,0,"%s",
                                "STBoatC::Defence - incorrect entry");
        if (local_EAX_4798 == 0) {
          return 2;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      uVar4 = this->field_00B7;
      this->field_00B7 = 0;
      local_EAX_4703 = thunk_FUN_004601f0(this,2);
      this->field_00B7 = uVar4;
      if (local_EAX_4703 == -1) {
        return -1;
      }
      if ((local_EAX_4703 == 0) || (local_EAX_4703 == 3)) {
        this->field_0836 = 1;
        this->field_082E = ~CASE_FFFFFFFF;
      }
    }
switchD_0046166b_caseD_2:
    /* ST_CALLSITE[00461B40]: CALL dword ptr [EAX + 0xd8] */
    iVar10 = this->vfunc_D8();
    return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
  }
  if (0 < this->field_073A) goto switchD_0046166b_caseD_2;
  uVar11 = uVar11 & 0x80000001;
  bVar13 = uVar11 == 0;
  if ((int)uVar11 < 0) {
    bVar13 = (uVar11 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if ((bVar13) && (DAT_007fa134 != 0)) {
    dVar3 = g_array_007FA130->count;
    local_34 = (short)dVar3;
    sStack_32 = (short)(dVar3 >> 0x10);
    if ((dVar3 != 0) && (uVar11 = 0, iVar10 = DAT_007fa134, dVar3 != 0)) {
      do {
        if (iVar10 < 1) break;
        DArrayGetElement(g_array_007FA130,uVar11,&local_20);
        if (local_20 != nullptr) {
          iVar10 = iVar10 + -1;
          /* ST_CALLSITE[00460A3D]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
          STFishC::sub_004162B0((STFishC *)local_20,(short *)((int)&local_10 + 2),&local_c,&local_a);
          local_2c[0] = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,
                                     (int)this->field_004B,(int)STPiece<2,2>(local_10),(int)local_c,
                                     (int)local_a);
          if ((local_2c[0] <= (int)this->field_080C / 0xc9 + 1) &&
             /* ST_CALLSITE[00460A94]: CALL 0x0040478c; direct=0040478C STTorpC::IsDangerous */
             (iVar6 = STTorpC::IsDangerous(local_20,this->field_0018,&local_24), iVar6 != 2)) {
            if (iVar6 == 0) {
              iVar7 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004603B0::
                      thunk_FUN_004838e0((AnonReceiver_004603B0 *)this,
                                         (RecoveredRecord_STBoatC_004838E0 *)local_20);
              if (iVar7 == 1) {
                /* ST_CALLSITE[00460ABD]: CALL 0x0040368e; direct=0040368E STTorpC::SetDangerous */
                STTorpC::SetDangerous(local_20,this->field_0018,&local_24);
LAB_00460adb:
                iVar7 = thunk_FUN_00483e30(this,(RecoveredRecord_STBoatC_00482DB0 *)local_20);
                if (iVar7 == 1) {
                  /* ST_CALLSITE[00460B07]: CALL 0x0040282e; direct=0040282E STTorpC::ClearDangerous */
                  STTorpC::ClearDangerous(local_20,this->field_0018,local_24);
                  this->field_046B = (ushort *)local_20;
                  this->field_046F = local_20->field_026E;
                  this->field_0471 = (AnonShape_005EFAE0_B406B78B *)local_20->field_0018;
                  if (this->field_004B == 0) {
                    this->field_0469 = 1;
                    /* ST_CALLSITE[00460B56]: CALL dword ptr [EDX + 0x18] */
                    iVar10 = this->vfunc_18(this->field_0047,this->field_0049,1);
                    if (iVar10 != 1) {
LAB_00460d94:
                      this->field_0469 = 0;
                      break;
                    }
                    this->field_082E = CASE_1;
                    /* ST_CALLSITE[00460B81]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
                    sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)this->field_0469 + (int)this->field_004B);
                    uVar4 = this->field_00B7;
                    this->field_00B7 = 0;
                    /* ST_CALLSITE[00460B95]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
                    iVar10 = sub_0045FF50(this,0);
                    this->field_00B7 = uVar4;
                    if (iVar10 == -1) {
                      return -1;
                    }
                    if (iVar10 != 0) {
                      if (iVar10 == 3) {
                        this->field_0469 = 0;
                        this->field_082E = ~CASE_FFFFFFFF;
                      }
                      break;
                    }
                  }
                  else if (this->field_004B == 4) {
                    this->field_0469 = -1;
                    /* ST_CALLSITE[00460BEF]: CALL dword ptr [EAX + 0x18] */
                    iVar10 = this->vfunc_18(this->field_0047,this->field_0049,3);
                    if (iVar10 != 1) goto LAB_00460d94;
                    this->field_082E = CASE_1;
                    /* ST_CALLSITE[00460C1B]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
                    sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                 (int)this->field_0469 + (int)this->field_004B);
                    uVar4 = this->field_00B7;
                    this->field_00B7 = 0;
                    /* ST_CALLSITE[00460C2F]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
                    iVar10 = sub_0045FF50(this,0);
                    this->field_00B7 = uVar4;
                    if (iVar10 == -1) {
                      return -1;
                    }
                    if (iVar10 != 0) {
                      if (iVar10 == 3) {
                        this->field_0469 = 0;
                        this->field_082E = ~CASE_FFFFFFFF;
                      }
                      break;
                    }
                  }
                  else {
                    uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
                    this->field_001C = uVar11;
                    this->field_0469 = (ushort)(uVar11 >> 0x10) & 1;
                    if ((uVar11 & 0x10000) == 0) {
                      this->field_0469 = -1;
                    }
                    /* ST_CALLSITE[00460CB1]: CALL dword ptr [EDX + 0x18] */
                    iVar10 = this->vfunc_18(this->field_0047,this->field_0049,
                                        this->field_0469 + this->field_004B);
                    if (iVar10 == 1) {
                      this->field_082E = CASE_1;
                      /* ST_CALLSITE[00460CD8]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
                      sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                   (int)this->field_0469 + (int)this->field_004B);
                      uVar4 = this->field_00B7;
                      this->field_00B7 = 0;
                      /* ST_CALLSITE[00460CEC]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
                      iVar10 = sub_0045FF50(this,0);
                      this->field_00B7 = uVar4;
                    }
                    else {
                      sVar6 = this->field_0469;
                      this->field_0469 = -sVar6;
                      /* ST_CALLSITE[00460D40]: CALL dword ptr [EDX + 0x18] */
                      iVar10 = this->vfunc_18(this->field_0047,this->field_0049,
                                          -sVar6 + this->field_004B);
                      if (iVar10 != 1) goto LAB_00460d94;
                      this->field_082E = CASE_1;
                      /* ST_CALLSITE[00460D67]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
                      sub_00481520(this,(int)this->field_0047,(int)this->field_0049,
                                   (int)this->field_0469 + (int)this->field_004B);
                      uVar4 = this->field_00B7;
                      this->field_00B7 = 0;
                      /* ST_CALLSITE[00460D7B]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
                      iVar10 = sub_0045FF50(this,0);
                      this->field_00B7 = uVar4;
                    }
                    if (iVar10 == -1) {
                      return -1;
                    }
                    if ((iVar10 != 0) && (iVar10 != 3)) break;
                  }
                  this->field_0469 = 0;
                  this->field_082E = ~CASE_FFFFFFFF;
                  break;
                }
              }
              else {
                /* ST_CALLSITE[00460ACF]: CALL 0x0040282e; direct=0040282E STTorpC::ClearDangerous */
                STTorpC::ClearDangerous(local_20,this->field_0018,local_24);
              }
            }
            else if (iVar6 == 1) goto LAB_00460adb;
          }
        }
        uVar11 = uVar11 + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      } while (uVar11 < CONCAT22(sStack_32,local_34));
    }
  }
  if (this->field_082E != ~CASE_FFFFFFFF) goto LAB_00461264;
  if (this->field_0836 == 2) {
    this->field_047F = -1;
    /* ST_CALLSITE[00460DC0]: CALL 0x00405b05; direct=00405B05 STBoatC::GetDefenceTarget */
    iVar10 = GetDefenceTarget(this,CASE_0);
    uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar11;
    this->field_047F = (uVar11 >> 0x10) % 0x15;
  }
  else {
    /* ST_CALLSITE[00460DF0]: CALL 0x00405b05; direct=00405B05 STBoatC::GetDefenceTarget */
    iVar10 = GetDefenceTarget(this,CASE_0);
  }
  if (iVar10 == 0) {
    /* ST_CALLSITE[00460E1B]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    pSVar8 = STAllPlayersC::GetObjPtr
                       (g_allPlayers_007FA174,*(char *)&this->field_0487,
                        *(ushort *)&this->field_048B,this->field_0483);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    local_EAX_1396 = thunk_FUN_00483300((int *)this,extraout_EDX);
    switch(local_EAX_1396) {
    case 0:
    case 10:
      thunk_FUN_00416270(pSVar8,&local_14,(short *)&local_18,(short *)&local_1c);
      local_64.field_000A = this->field_0043;
      local_64.field_0008 = this->field_0041;
      local_64.field_000C = this->field_0045;
      local_10 = 0;
      if (this->field_02B2 != '\0') {
        puVar12 = (undefined2 *)&this->field_0x2a8;
        do {
          if (this->field_07A2 < 1) break;
          puVar9 = thunk_FUN_0041dc40(local_2c,(short)*(undefined4 *)(puVar12 + -1),puVar12[1],
                                      this->field_006C);
          sStack_32 = (short)((uint)*puVar9 >> 0x10);
          local_64.field_000E = (short)*puVar9 + this->field_0041;
          local_64.field_0010 = this->field_0043 - sStack_32;
          local_64.field_0012 = this->field_0045 + *(short *)(puVar9 + 1);
          sStack_32 = *puVar12;
          local_34 = 0;
          puVar9 = thunk_FUN_0041dc40(local_3c,0,0,this->field_006C);
          local_34 = (short)*puVar9;
          sStack_32 = (short)((uint)*puVar9 >> 0x10);
          local_30 = *(undefined2 *)(puVar9 + 1);
          local_64.field_0014 = local_34 + (short)local_14;
          local_64.field_0016 = (short)local_18 - sStack_32;
          local_64.field_0000 = this->field_0024;
          local_64.field_0018 = (short)local_1c;
          local_64.field_0022 = (-(uint)(this->field_06F7 != CASE_A) & 0xfffffffe) + 1;
          if (local_EAX_1396 == 10) {
            local_64.field_0004 = 0xa1;
          }
          else {
            local_64.field_0004 = this->field_079A;
          }
          local_64.field_001A = this->field_006C;
          local_64.field_001C = this->field_0018;
          local_64.field_0020 = this->field_0032;
          thunk_FUN_00645880(&local_64);
          if (local_EAX_1396 == 10) {
            this->field_072A = 0;
          }
          else {
            this->field_07AA = 0;
            this->field_07A2 = this->field_07A2 + -1;
          }
          local_10 = local_10 + 1;
          puVar12 = puVar12 + 3;
        } while (local_10 < (byte)this->field_02B2);
      }
      break;
    case 1:
      local_EAX_2367 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x16e0,0,-1,"%s",
                              "STBoatC::Defence NOT_ZONE_A");
      if (local_EAX_2367 == 0) {
        RaiseInternalException
                  (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x16e1);
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    case 5:
      this->field_082E = CASE_4;
      /* ST_CALLSITE[00460E53]: CALL 0x00405f0b; direct=00405F0B STFishC::sub_004162F0 */
      STFishC::sub_004162F0
                ((STFishC *)pSVar8,(short *)&local_14,(short *)&local_18,(short *)&local_1c);
LAB_00460fac:
      /* ST_CALLSITE[00460FBD]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
      sub_00481520(this,(int)(short)local_14,(int)(short)local_18,(int)(short)local_1c);
      uVar4 = this->field_00B7;
      this->field_00B7 = 0;
      local_EAX_1830 = thunk_FUN_004601f0(this,0);
      if (local_EAX_1830 == -1) {
        return -1;
      }
      this->field_00B7 = uVar4;
      break;
    case 6:
    case 7:
    case 8:
      /* ST_CALLSITE[00460E6B]: CALL 0x00405f0b; direct=00405F0B STFishC::sub_004162F0 */
      STFishC::sub_004162F0((STFishC *)pSVar8,&local_6,&local_8,(short *)((int)&param_1 + 2));
      this->field_0800 = local_6;
      this->field_0802 = local_8;
      this->field_0804 = STPiece<2,2>(param_1);
      iVar10 = thunk_FUN_00484020(this,(short)local_EAX_1396,(short *)&local_14,(short *)&local_18,
                                  (short *)&local_1c);
      if (iVar10 != 0) {
        this->field_082E = CASE_4;
        goto LAB_00460fac;
      }
      if (300 < this->field_0814) {
        this->field_0814 = this->field_0814 + -0xc9;
      }
      break;
    case 9:
      thunk_FUN_00416270(pSVar8,&local_14,(short *)&local_18,(short *)&local_1c);
      /* ST_CALLSITE[00461028]: CALL dword ptr [EDX + 0x10] */
      sVar6 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(local_18), (uint16_t)(this->field_0045)),(short)local_14,
                         (short)local_18,local_1c);
      /* ST_CALLSITE[00461031]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0 */
      local_EAX_1921 = sub_004176C0(this,sVar6);
      /* ST_CALLSITE[00461039]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
      sub_00417910(this,(short)local_EAX_1921);
    }
  }
  if ((this->field_082E == ~CASE_FFFFFFFF) && (this->field_048B == 0xffff)) {
    if ((this->field_0475 != this->field_0047) ||
       ((this->field_0477 != this->field_0049 || (this->field_0479 != this->field_004B)))) {
      local_EAX_1668 =
           FUN_006aadd0((int)this->field_0047,(int)this->field_0049,(int)this->field_004B,
                        (int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
      if ((local_EAX_1668 != -4) && (local_EAX_1668 < 8)) {
        this->field_082E = CASE_4;
        /* ST_CALLSITE[00460F6F]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
        sub_00481520(this,(int)this->field_0475,(int)this->field_0477,(int)this->field_0479);
        uVar4 = this->field_00B7;
        this->field_00B7 = 0;
        local_EAX_1752 = thunk_FUN_004601f0(this,0);
        if (local_EAX_1752 == -1) {
          return -1;
        }
        this->field_00B7 = uVar4;
        /* ST_CALLSITE[0046122B]: CALL dword ptr [EDX + 0xd8] */
        iVar10 = this->vfunc_D8();
        return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
      }
      this->field_0475 = this->field_005B;
      this->field_0477 = this->field_005D;
      this->field_0479 = this->field_005F;
    }
  }
LAB_00461264:
  /* ST_CALLSITE[00461268]: CALL dword ptr [EDX + 0xd8] */
  iVar10 = this->vfunc_D8();
  return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
}

