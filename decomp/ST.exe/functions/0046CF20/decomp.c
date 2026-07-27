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
  int iVar6;
  STGroupBoatC *this_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_ECX_00;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;
  int iVar7;
  uint uVar8;
  uint uVar9;
  short local_18;
  short local_16;
  short local_14 [2];
  undefined4 local_10;
  int local_c;
  void *local_8;

  uVar9 = 2;
  if (this->field_0528 == 0) {
    /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
    iVar7 = CONCAT22((short)((uint)in_EDX >> 0x10),this->field_0512 * 0xc9) + 100;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar5 = (*this->vtable->vfunc_10)
                      (this->field_0041,this->field_0043,
                       CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0045),
                       this->field_0510 * 0xc9 + 100,(short)iVar7,
                       CONCAT22((short)((uint)this >> 0x10),this->field_0514 * 200) + 100);
    this->field_0522 = uVar5;
    this->field_0528 = 1;
  }
  if (this->field_0528 != 1) {
    if (this->field_0528 == 2) {
      sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_0510 * 0xc9 + 100,this->field_0512 * 0xc9 + 100,
                   this->field_0514 * 200 + 100,this->field_0062);
      this->field_0528 = 3;
    }
    if (this->field_0528 == 3) {
      iVar7 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_10,&local_c);
      if (iVar7 == -1) {
        iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x25c7,0,0,"%s",
                                   "STBoatC::CreateGame, CREATEGAME_MOVE 2");
        if (iVar7 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar7 = 0x25c8;
        goto LAB_0046d1e2;
      }
      if (iVar7 == 0) {
        uVar9 = 0;
        if ((this->field_0524 != 0) &&
           (iVar7 = STPlaySystemC::sub_006E62D0
                              (g_playSystem_00802A38,this->field_0524,(int *)&local_8), iVar7 != -4)
           ) {
          thunk_FUN_004cf3e0(local_8,this->field_0018);
          FUN_006ea2f0(this->field_0211,this->field_01ED);
        }
        iVar7 = thunk_FUN_0048fa80((int)this);
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
          this->field_0528 = 4;
          iVar7 = (*this->vtable->vfunc_D8)(this);
          return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
        }
      }
    }
    if (this->field_0528 == 4) {
      uVar9 = sub_0045FF50(this,2);
      if (uVar9 == 0xffffffff) {
        return 0xffffffff;
      }
      if (uVar9 == 3) {
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar7 = extraout_ECX;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (((this->field_00B3 == 0) &&
            (iVar7 = (int)this->field_005B, uVar9 = this->field_00BB - iVar7,
            uVar8 = (int)uVar9 >> 0x1f, (int)((uVar9 ^ uVar8) - uVar8) < 2)) &&
           ((uVar9 = this->field_00BF - (int)this->field_005D, uVar8 = (int)uVar9 >> 0x1f,
            (int)((uVar9 ^ uVar8) - uVar8) < 2 &&
            ((iVar7 = (int)this->field_005F, uVar9 = this->field_00C3 - iVar7,
             uVar8 = (int)uVar9 >> 0x1f, (int)((uVar9 ^ uVar8) - uVar8) < 2 &&
             (iVar6 = (*this->vtable->vfunc_18)
                                (this,*(short *)&this->field_00BB,*(short *)&this->field_00BF,
                                 *(short *)&this->field_00C3), iVar7 = extraout_ECX_00, iVar6 == 0))
            )))) {
          uVar9 = 0;
        }
        else {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          this_00 = thunk_FUN_0042b760(*(char *)&this->field_0024,
                                       CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0030));
          iVar7 = thunk_FUN_0040ae40(this_00,(uint)(ushort)this->field_0032,'\0');
          uVar9 = -(uint)(iVar7 != -4) & 2;
        }
      }
    }
    iVar7 = (*this->vtable->vfunc_D8)(this);
    if (iVar7 != 0) {
      return 0xffffffff;
    }
    return uVar9;
  }
  uVar9 = sub_004176C0(this,this->field_0522);
  uVar9 = sub_00417910(this,(short)uVar9);
  if (uVar9 != 0xffffffff) {
    if (uVar9 == 0) {
      this->field_0528 = 2;
    }
    iVar7 = (*this->vtable->vfunc_D8)(this);
    return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
  }
  iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x25a8,0,0,"%s",
                             "STBoatC::CreateGame, CREATEGAME_ROT");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar7 = 0x25a9;
LAB_0046d1e2:
  RaiseInternalException
            (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar7);
  return 0xffff;
}

