#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::CreateGame */

uint __thiscall STBoatC::CreateGame(STBoatC *this,int *param_1,undefined4 param_2)

{
  code *pcVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  STGroupBoatC *this_00;
  int iVar6;
  int iVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_ECX_00;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;
  int iVar8;
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
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar6 = CONCAT22((short)((uint)this >> 0x10),this->field_0514 * 200) + 100;
    /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
    iVar8 = CONCAT22((short)((uint)in_EDX >> 0x10),this->field_0512 * 0xc9) + 100;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar7 = CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0510 * 0xc9) + 100;
    uVar5 = (undefined2)((uint)iVar8 >> 0x10);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar5 = (*this->vtable->vfunc_10)
                      (CONCAT22(uVar5,this->field_0041),
                       CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0043),
                       CONCAT22(uVar5,this->field_0045),iVar7,iVar8,iVar6);
    this->field_0522 = uVar5;
    this->field_0528 = 1;
  }
  if (this->field_0528 == 1) {
    uVar10 = sub_004176C0(this,this->field_0522);
    uVar10 = sub_00417910(this,(short)uVar10);
    if (uVar10 != 0xffffffff) {
      if (uVar10 == 0) {
        this->field_0528 = 2;
      }
      iVar6 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
    }
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x25a8,0,0,"%s",
                               "STBoatC::CreateGame, CREATEGAME_ROT");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar6 = 0x25a9;
LAB_0046d1e2:
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar6);
    return 0xffff;
  }
  if (this->field_0528 == 2) {
    sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                 this->field_0510 * 0xc9 + 100,this->field_0512 * 0xc9 + 100,
                 this->field_0514 * 200 + 100,this->field_0062);
    this->field_0528 = 3;
  }
  if (this->field_0528 == 3) {
    iVar6 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_10,&local_c);
    if (iVar6 == -1) {
      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x25c7,0,0,"%s",
                                 "STBoatC::CreateGame, CREATEGAME_MOVE 2");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar6 = 0x25c8;
      goto LAB_0046d1e2;
    }
    if (iVar6 == 0) {
      uVar10 = 0;
      if ((this->field_0524 != 0) &&
         (iVar6 = FUN_006e62d0(PTR_00802a38,this->field_0524,(int *)&local_8), iVar6 != -4)) {
        thunk_FUN_004cf3e0(local_8,this->field_0018);
        FUN_006ea2f0((void *)this->field_0211,this->field_01ED);
      }
      iVar6 = thunk_FUN_0048fa80((int)this);
      if (iVar6 == 1) {
        if ((((this->field_051C < 0) || (this->field_051E < 0)) ||
            (sVar2 = this->field_051C, sVar3 = this->field_051E, sVar4 = this->field_0520,
            this->field_0520 < 0)) &&
           (iVar6 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::
                    thunk_FUN_0048dfd0((AnonReceiver_0048DFD0 *)this,this->field_0510,
                                       this->field_0512,this->field_0514,this->field_0510,
                                       this->field_0512,(int *)(uint)(ushort)this->field_0514,2,
                                       &local_18,&local_16,local_14), sVar2 = local_18,
           sVar3 = local_16, sVar4 = local_14[0], iVar6 == 0)) {
          sVar2 = this->field_0510;
          sVar3 = this->field_0512;
          sVar4 = this->field_0514;
        }
        local_14[0] = sVar4;
        local_16 = sVar3;
        local_18 = sVar2;
        sub_00481520(this,(int)local_18,(int)local_16,(int)local_14[0]);
        iVar6 = sub_0045FF50(this,0);
        if (iVar6 == -1) {
          return 0xffffffff;
        }
        this->field_0528 = 4;
        iVar6 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
      }
    }
  }
  if (this->field_0528 == 4) {
    uVar10 = sub_0045FF50(this,2);
    if (uVar10 == 0xffffffff) {
      return 0xffffffff;
    }
    if (uVar10 == 3) {
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      iVar6 = extraout_ECX;
      if (((this->field_00B3 == 0) &&
          (iVar6 = (int)this->field_005B, uVar10 = this->field_00BB - iVar6,
          uVar9 = (int)uVar10 >> 0x1f, (int)((uVar10 ^ uVar9) - uVar9) < 2)) &&
         (uVar10 = this->field_00BF - (int)this->field_005D, uVar9 = (int)uVar10 >> 0x1f,
         (int)((uVar10 ^ uVar9) - uVar9) < 2)) {
        iVar6 = (int)this->field_005F;
        uVar10 = this->field_00C3 - iVar6;
        uVar9 = (int)uVar10 >> 0x1f;
        iVar7 = (uVar10 ^ uVar9) - uVar9;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if ((iVar7 < 2) &&
           (uVar5 = (undefined2)((uint)iVar7 >> 0x10),
           iVar7 = (*this->vtable->vfunc_18)
                             (CONCAT22(uVar5,*(undefined2 *)&this->field_00BB),
                              CONCAT22(this->field_005F >> 0xf,*(undefined2 *)&this->field_00BF),
                              CONCAT22(uVar5,*(undefined2 *)&this->field_00C3)),
           iVar6 = extraout_ECX_00, iVar7 == 0)) {
          uVar10 = 0;
          goto LAB_0046d2d1;
        }
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      this_00 = thunk_FUN_0042b760(*(char *)&this->field_0024,
                                   CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0030));
      iVar6 = thunk_FUN_0040ae40(this_00,(uint)(ushort)this->field_0032,'\0');
      uVar10 = -(uint)(iVar6 != -4) & 2;
    }
  }
LAB_0046d2d1:
  iVar6 = (*this->vtable->vfunc_D8)();
  if (iVar6 != 0) {
    return 0xffffffff;
  }
  return uVar10;
}

