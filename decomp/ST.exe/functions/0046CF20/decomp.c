#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::CreateGame
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=uint __thiscall
   CreateGame(STBoatC * this, int * param_1) Evidence: every machine RET purges exactly 4 explicit
   stack bytes; current signature describes 8; removed trailing parameter slots have no listing
   references; ret_sites=0046CFD8 RET 0x4 | 0046D190 RET 0x4 | 0046D1B5 RET 0x4 | 0046D201 RET 0x4 |
   0046D2E7 RET 0x4 | 0046D2F1 RET 0x4

   [STSwitchEnumApplier] Switch target field_0528 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0528State. Cases: CASE_1=1;CASE_3=3;CASE_4=4 */

uint __thiscall STBoatC::CreateGame(STBoatC *this,int *param_1)

{
  short sVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  uint uVar8;
  uint local_EAX_141;
  int iVar6;
  uint uVar6;
  int iVar7_mg4;
  int local_EAX_688;
  STGroupBoatC *this_00;
  int local_EAX_928;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;
  int iVar7;
  uint uVar9;
  int uVar10_mg0;
  short local_18;
  short local_16;
  short local_14 [2];
  uint local_10;
  int local_c;
  void *local_8;

  uVar10_mg0 = 2;
  if (this->field_0528 == 0) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar7 = STReplaceLowWord((uint32_t)(in_EDX), (uint16_t)(this->field_0512 * 0xc9)) + 100;
    /* ST_CALLSITE[0046CF7C]: CALL dword ptr [EAX + 0x10] */
    uVar5 = (*this->vtable->vfunc_10)
                      (this->field_0041,this->field_0043,
                       STReplaceLowWord((uint32_t)(iVar7), (uint16_t)(this->field_0045)),
                       this->field_0510 * 0xc9 + 100,(short)iVar7,
                       STReplaceLowWord((uint32_t)(this), (uint16_t)(this->field_0514 * 200)) + 100);
    this->field_0522 = uVar5;
    this->field_0528 = CASE_1;
  }
  if (this->field_0528 != CASE_1) {
    if (this->field_0528 == 2) {
      /* ST_CALLSITE[0046D054]: CALL 0x00402455; direct=00402455 sub_00415B30 */
      sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_0510 * 0xc9 + 100,this->field_0512 * 0xc9 + 100,
                   this->field_0514 * 200 + 100,this->field_0062);
      this->field_0528 = CASE_3;
    }
    if (this->field_0528 == CASE_3) {
      /* ST_CALLSITE[0046D07A]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
      iVar7 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_10,&local_c);
      if (iVar7 == -1) {

        local_EAX_688 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x25c7,0,0,"%s",
                                "STBoatC::CreateGame, CREATEGAME_MOVE 2");
        if (local_EAX_688 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar7 = 0x25c8;
        goto LAB_0046d1e2;
      }
      if (iVar7 == 0) {
        uVar10_mg0 = 0;
        if (((RecoveredRecordView_005EFAE0_855D930D *)this->field_0524 !=
             nullptr) &&

           (iVar7_mg4 = STPlaySystemC::sub_006E62D0
                                  (g_playSystem_00802A38,
                                   (RecoveredRecordView_005EFAE0_855D930D *)this->field_0524,
                                   (int *)&local_8), iVar7_mg4 != -4)) {

          thunk_FUN_004cf3e0(local_8,this->field_0018);
          Library::Ourlib::ST3DSMAP::SprRstLev(this->field_0211,this->field_01ED);
        }

        iVar7 = thunk_FUN_0048fa80(this);
        if (iVar7 == 1) {
          if ((((this->field_051C < 0) || (this->field_051E < 0)) ||
              (sVar2 = this->field_051C, sVar3 = this->field_051E, sVar4 = this->field_0520,
              this->field_0520 < 0)) &&
             /* ST_CALLSITE[0046D13B]: CALL 0x00404908; direct=00404908 STBoatC::sub_0048DFD0 */
             (iVar7 = sub_0048DFD0(this,this->field_0510,this->field_0512,this->field_0514,
                                   this->field_0510,this->field_0512,
                                   (int *)(uint)(ushort)this->field_0514,2,&local_18,&local_16,
                                   local_14), sVar2 = local_18, sVar3 = local_16,
             sVar4 = local_14[0], iVar7 == 0)) {
            sVar2 = this->field_0510;
            sVar3 = this->field_0512;
            sVar4 = this->field_0514;
          }
          local_14[0] = sVar4;
          local_16 = sVar3;
          local_18 = sVar2;
          /* ST_CALLSITE[0046D176]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
          sub_00481520(this,(int)local_18,(int)local_16,(int)local_14[0]);
          /* ST_CALLSITE[0046D17F]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
          iVar7 = sub_0045FF50(this,0);
          if (iVar7 == -1) {
            return 0xffffffff;
          }
          this->field_0528 = CASE_4;
          /* ST_CALLSITE[0046D1A1]: CALL dword ptr [EDX + 0xd8] */
          iVar7 = this->vfunc_D8();
          return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
        }
      }
    }
    if (this->field_0528 == CASE_4) {
      /* ST_CALLSITE[0046D215]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
      uVar10_mg0 = sub_0045FF50(this,2);
      if (uVar10_mg0 == 0xffffffff) {
        return 0xffffffff;
      }
      if (uVar10_mg0 == 3) {
        if (((this->field_00B3 == 0) &&
            (uVar6 = this->field_00BB - (int)this->field_005B, uVar9 = (int)uVar6 >> 0x1f,
            (int)((uVar6 ^ uVar9) - uVar9) < 2)) &&
           ((uVar6 = this->field_00BF - (int)this->field_005D, uVar9 = (int)uVar6 >> 0x1f,
            (int)((uVar6 ^ uVar9) - uVar9) < 2 &&
            ((uVar6 = this->field_00C3 - (int)this->field_005F, uVar9 = (int)uVar6 >> 0x1f,
             (int)((uVar6 ^ uVar9) - uVar9) < 2 &&
             /* ST_CALLSITE[0046D296]: CALL dword ptr [EDX + 0x18] */
             (iVar7 = this->vfunc_18((short)this->field_00BB,(short)this->field_00BF,
                                 (short)this->field_00C3), iVar7 == 0)))))) {
          uVar10_mg0 = 0;
        }
        else {
          this_00 = thunk_FUN_0042b760((char)this->field_0024,this->field_0030);
          /* ST_CALLSITE[0046D2C0]: CALL 0x00402b26; direct=00402B26 STGroupBoatC::sub_0040AE40 */
          local_EAX_928 = STGroupBoatC::sub_0040AE40(this_00,(uint)(ushort)this->field_0032,'\0');
          uVar10_mg0 = -(uint)(local_EAX_928 != -4) & 2;
        }
      }
    }
    /* ST_CALLSITE[0046D2D5]: CALL dword ptr [EDX + 0xd8] */
    iVar7 = this->vfunc_D8();
    if (iVar7 != 0) {
      return 0xffffffff;
    }
    return uVar10_mg0;
  }
  /* ST_CALLSITE[0046CFA5]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STBoatC; source view only; no Ghidra override */
  uVar8 = sub_004176C0(this,this->field_0522);
  /* ST_CALLSITE[0046CFAD]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
  local_EAX_141 = sub_00417910(this,(short)uVar8);
  if (local_EAX_141 != 0xffffffff) {
    if (local_EAX_141 == 0) {
      this->field_0528 = 2;
    }
    /* ST_CALLSITE[0046CFC5]: CALL dword ptr [EDX + 0xd8] */
    iVar7 = this->vfunc_D8();
    return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
  }

  iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x25a8,0,0,"%s",
                             "STBoatC::CreateGame, CREATEGAME_ROT");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar7 = 0x25a9;
LAB_0046d1e2:
  RaiseInternalException
            (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar7);
  return 0xffff;
}

