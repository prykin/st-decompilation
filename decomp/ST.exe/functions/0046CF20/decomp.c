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
  undefined2 uVar5;
  uint uVar8;
  uint local_EAX_141;
  int iVar6;
  int local_EAX_688;
  STGroupBoatC *this_00;
  int local_EAX_928;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;
  int iVar7;
  uint uVar9;
  uint uVar10;
  short local_18;
  short local_16;
  short local_14 [2];
  undefined4 local_10;
  int local_c;
  void *local_8;

  uVar10 = 2;
  if (this->field_0528 == 0) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar7 = STReplaceLowWord((uint32_t)(in_EDX), (uint16_t)(this->field_0512 * 0xc9)) + 100;
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
      sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_0510 * 0xc9 + 100,this->field_0512 * 0xc9 + 100,
                   this->field_0514 * 200 + 100,this->field_0062);
      this->field_0528 = CASE_3;
    }
    if (this->field_0528 == CASE_3) {
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
        uVar10 = 0;
        if (((AnonShape_005EFAE0_B406B78B *)this->field_0524 != nullptr)
           && (iVar7 = STPlaySystemC::sub_006E62D0
                                 (g_playSystem_00802A38,
                                  (AnonShape_005EFAE0_B406B78B *)this->field_0524,(int *)&local_8),
              iVar7 != -4)) {
          thunk_FUN_004cf3e0(local_8,this->field_0018);
          Library::Ourlib::ST3DSMAP::SprRstLev(this->field_0211,this->field_01ED);
        }
        iVar7 = thunk_FUN_0048fa80(this);
        if (iVar7 == 1) {
          if ((((this->field_051C < 0) || (this->field_051E < 0)) ||
              (sVar2 = this->field_051C, sVar3 = this->field_051E, sVar4 = this->field_0520,
              this->field_0520 < 0)) &&
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
          sub_00481520(this,(int)local_18,(int)local_16,(int)local_14[0]);
          iVar7 = sub_0045FF50(this,0);
          if (iVar7 == -1) {
            return 0xffffffff;
          }
          this->field_0528 = CASE_4;
          iVar7 = this->vfunc_D8();
          return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
        }
      }
    }
    if (this->field_0528 == CASE_4) {
      uVar10 = sub_0045FF50(this,2);
      if (uVar10 == 0xffffffff) {
        return 0xffffffff;
      }
      if (uVar10 == 3) {
        if (((this->field_00B3 == 0) &&
            (uVar10 = this->field_00BB - (int)this->field_005B, uVar9 = (int)uVar10 >> 0x1f,
            (int)((uVar10 ^ uVar9) - uVar9) < 2)) &&
           ((uVar10 = this->field_00BF - (int)this->field_005D, uVar9 = (int)uVar10 >> 0x1f,
            (int)((uVar10 ^ uVar9) - uVar9) < 2 &&
            ((uVar10 = this->field_00C3 - (int)this->field_005F, uVar9 = (int)uVar10 >> 0x1f,
             (int)((uVar10 ^ uVar9) - uVar9) < 2 &&
             (iVar7 = this->vfunc_18(*(short *)&this->field_00BB,*(short *)&this->field_00BF,
                                 *(short *)&this->field_00C3), iVar7 == 0)))))) {
          uVar10 = 0;
        }
        else {
          this_00 = thunk_FUN_0042b760(*(char *)&this->field_0024,this->field_0030);
          local_EAX_928 = thunk_FUN_0040ae40(this_00,(uint)(ushort)this->field_0032,'\0');
          uVar10 = -(uint)(local_EAX_928 != -4) & 2;
        }
      }
    }
    iVar7 = this->vfunc_D8();
    if (iVar7 != 0) {
      return 0xffffffff;
    }
    return uVar10;
  }
  uVar8 = sub_004176C0(this,this->field_0522);
  local_EAX_141 = sub_00417910(this,(short)uVar8);
  if (local_EAX_141 != 0xffffffff) {
    if (local_EAX_141 == 0) {
      this->field_0528 = 2;
    }
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

