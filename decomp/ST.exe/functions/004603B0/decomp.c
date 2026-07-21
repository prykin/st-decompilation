#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004603B0 parameter used as this of STTorpC::ClearDangerous @ 004604BD | 004603B0
   parameter used as this of STTorpC::ClearDangerous @ 00460546 | 004603B0 parameter used as this of
   STTorpC::SetDangerous @ 004604AB */

int __thiscall FUN_004603b0(void *this,STTorpC *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  int iVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int iVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  uint index;
  bool bVar9;
  undefined4 uVar10;
  uint local_8;

  if ((param_1 == (STTorpC *)0x0) || (param_1 == (STTorpC *)0x1)) {
    memset((void *)((int)this + 0x2cc), 0, 0x5c); /* compiler bulk-zero initialization */
    iVar6 = 0;
    *(undefined4 *)((int)this + 0x2c4) = 0;
    *(undefined4 *)((int)this + 0x82e) = 0xffffffff;
    *(undefined4 *)((int)this + 0x836) = 3;
  }
  if ((*(int *)((int)this + 0x82e) == -1) &&
     (iVar6 = *(int *)((int)this + 0x836) + -1, *(int *)((int)this + 0x836) = iVar6, iVar6 == 0)) {
    *(undefined4 *)((int)this + 0x82e) = 0;
  }
  if (*(int *)((int)this + 0x82e) == 0) {
    uVar2 = *(uint *)((int)this + 0x836) & 0x80000001;
    bVar9 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar9 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if ((((bVar9) && (DAT_007fa134 != 0)) && (uVar2 = PTR_007fa130->count, uVar2 != 0)) &&
       (index = 0, iVar6 = DAT_007fa134, uVar2 != 0)) {
      do {
        DArrayGetElement(PTR_007fa130,index,&param_1);
        if (param_1 != (STTorpC *)0x0) {
          iVar6 = iVar6 + -1;
          iVar3 = STTorpC::IsDangerous(param_1,*(int *)((int)this + 0x18),&local_8);
          if (iVar3 != 2) {
            if (iVar3 == 0) {
              iVar3 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004603B0::
                      thunk_FUN_004838e0(this,(AnonShape_004838E0_0C45D4D6 *)param_1);
              if (iVar3 == 1) {
                STTorpC::SetDangerous(param_1,*(undefined4 *)((int)this + 0x18),&local_8);
LAB_004604c9:
                iVar3 = thunk_FUN_00483e30(this,(AnonShape_00482DB0_070D50BF *)param_1);
                if (iVar3 == 1) {
                  STTorpC::ClearDangerous(param_1,*(int *)((int)this + 0x18),local_8);
                  *(STTorpC **)((int)this + 0x46b) = param_1;
                  *(undefined2 *)((int)this + 0x46f) = param_1->field_026E;
                  uVar4 = param_1->field_0018;
                  *(undefined4 *)((int)this + 0x471) = uVar4;
                  sVar1 = *(short *)((int)this + 0x4b);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  uVar4 = CONCAT22((short)((uint)uVar4 >> 0x10),sVar1);
                  if (sVar1 == 0) {
                    iVar3 = *(int *)this;
                    *(undefined2 *)((int)this + 0x469) = 1;
                    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                    uVar5 = extraout_var;
                    uVar10 = 1;
/* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
LAB_00460581:
                    iVar6 = (**(code **)(iVar3 + 0x18))
                                      (CONCAT22(uVar5,*(undefined2 *)((int)this + 0x47)),
                                       CONCAT22((short)((uint)uVar4 >> 0x10),
                                                *(undefined2 *)((int)this + 0x49)),uVar10);
                    if (iVar6 != 1) break;
                    iVar7 = (int)*(short *)((int)this + 0x49);
                    *(undefined4 *)((int)this + 0x82e) = 1;
                    iVar6 = (int)*(short *)((int)this + 0x469) + (int)*(short *)((int)this + 0x4b);
                    iVar3 = (int)*(short *)((int)this + 0x47);
                  }
                  else if (sVar1 == 4) {
                    *(undefined2 *)((int)this + 0x469) = 0xffff;
                    /* ST_PSEUDO[return_width_artifact,raw_indirect_call]: candidate call-output artifact: verify return width, clobbers, or x87 state; expected typed vtable/callback call with explicit __thiscall receiver */
                    iVar6 = (**(code **)(*(int *)this + 0x18))
                                      (CONCAT22(extraout_var_02,*(undefined2 *)((int)this + 0x47)),
                                       CONCAT22(extraout_var,*(undefined2 *)((int)this + 0x49)),3);
                    if (iVar6 != 1) break;
                    iVar7 = (int)*(short *)((int)this + 0x49);
                    *(undefined4 *)((int)this + 0x82e) = 1;
                    iVar6 = (int)*(short *)((int)this + 0x469) + (int)*(short *)((int)this + 0x4b);
                    iVar3 = (int)*(short *)((int)this + 0x47);
                  }
                  else {
                    iVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d;
                    uVar2 = iVar3 + 0x3039;
                    *(uint *)((int)this + 0x1c) = uVar2;
                    *(ushort *)((int)this + 0x469) = (ushort)(uVar2 >> 0x10) & 1;
                    iVar6 = (-(uint)((uVar2 & 0x10000) != 0) & 2) - 1;
                    sVar1 = (short)iVar6;
                    *(short *)((int)this + 0x469) = sVar1;
                    uVar5 = (undefined2)((uint)iVar6 >> 0x10);
                    /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
                    iVar6 = (**(code **)(*(int *)this + 0x18))
                                      (CONCAT22(uVar5,*(undefined2 *)((int)this + 0x47)),
                                       CONCAT22((short)((uint)iVar3 >> 0x10),
                                                *(undefined2 *)((int)this + 0x49)),
                                       CONCAT22(uVar5,sVar1 + *(short *)((int)this + 0x4b)));
                    if (iVar6 != 1) {
                      sVar1 = *(short *)((int)this + 0x469);
                      iVar3 = *(int *)this;
                      *(short *)((int)this + 0x469) = -sVar1;
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      uVar4 = CONCAT22((short)((uint)iVar6 >> 0x10),
                                       -sVar1 + *(short *)((int)this + 0x4b));
                      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                      uVar5 = extraout_var_00;
                      uVar10 = uVar4;
                      goto LAB_00460581;
                    }
                    iVar6 = (int)*(short *)((int)this + 0x469) + (int)*(short *)((int)this + 0x4b);
                    *(undefined4 *)((int)this + 0x82e) = 1;
                    iVar7 = (int)*(short *)((int)this + 0x49);
                    iVar3 = (int)*(short *)((int)this + 0x47);
                  }
                  STBoatC::sub_00481520(this,iVar3,iVar7,iVar6);
                  iVar6 = STBoatC::sub_0045FF50(this,0);
                  if (iVar6 == -1) {
                    return -1;
                  }
                  break;
                }
              }
              else {
                STTorpC::ClearDangerous(param_1,*(int *)((int)this + 0x18),local_8);
              }
            }
            else if (iVar3 == 1) goto LAB_004604c9;
          }
          if (iVar6 == 0) break;
        }
        index = index + 1;
      } while (index < uVar2);
    }
    *(int *)((int)this + 0x836) = *(int *)((int)this + 0x836) + 1;
  }
  if (*(int *)((int)this + 0x82e) == 1) {
    *(int *)((int)this + 0x836) = *(int *)((int)this + 0x836) + 1;
    iVar6 = STBoatC::sub_0045FF50(this,2);
    if (iVar6 == -1) {
      return -1;
    }
    if (iVar6 == 0) {
      *(undefined4 *)((int)this + 0x82e) = 2;
    }
    else if (iVar6 == 3) {
      *(undefined4 *)((int)this + 0x82e) = 0;
    }
  }
  if ((*(int *)((int)this + 0x82e) == 2) && (iVar6 = thunk_FUN_00483f10((int)this), iVar6 == 1)) {
    sVar1 = *(short *)((int)this + 0x469);
    *(short *)((int)this + 0x469) = -sVar1;
    /* ST_PSEUDO[return_width_artifact,raw_indirect_call]: candidate call-output artifact: verify return width, clobbers, or x87 state; expected typed vtable/callback call with explicit __thiscall receiver */
    iVar6 = (**(code **)(*(int *)this + 0x18))
                      (CONCAT22(extraout_var_01,*(undefined2 *)((int)this + 0x47)),
                       *(undefined2 *)((int)this + 0x49),-sVar1 + *(short *)((int)this + 0x4b));
    if (iVar6 == 1) {
      *(undefined4 *)((int)this + 0x82e) = 3;
      STBoatC::sub_00481520
                (this,(int)*(short *)((int)this + 0x47),(int)*(short *)((int)this + 0x49),
                 (int)*(short *)((int)this + 0x469) + (int)*(short *)((int)this + 0x4b));
      iVar6 = STBoatC::sub_0045FF50(this,0);
      if (iVar6 == -1) {
        return -1;
      }
    }
    else {
      *(short *)((int)this + 0x469) = -*(short *)((int)this + 0x469);
    }
  }
  if (*(int *)((int)this + 0x82e) == 3) {
    *(int *)((int)this + 0x836) = *(int *)((int)this + 0x836) + 1;
    iVar6 = STBoatC::sub_0045FF50(this,2);
    if (iVar6 == -1) {
      return -1;
    }
    if ((iVar6 == 0) || (iVar6 == 3)) {
      *(undefined4 *)((int)this + 0x82e) = 0;
    }
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar6 = (**(code **)(*(int *)this + 0xd8))();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
}

