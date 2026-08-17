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
  int iVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  int iVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int iVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  uint index;
  bool bVar10;
  undefined4 uVar11;
  uint local_8;

  if ((param_1 == nullptr) || (param_1 == (STTorpC *)0x1)) {
    memset((void *)((int)this + 0x2cc), 0, 0x5c); /* compiler bulk-zero initialization */
    iVar7 = 0;
    STField<undefined4>(this,0x2c4) = 0;
    STField<undefined4>(this,0x82e) = 0xffffffff;
    STField<undefined4>(this,0x836) = 3;
  }
  if ((STField<int>(this,0x82e) == -1) &&
     (iVar7 = STField<int>(this,0x836) + -1, STField<int>(this,0x836) = iVar7, iVar7 == 0)) {
    STField<undefined4>(this,0x82e) = 0;
  }
  if (STField<int>(this,0x82e) == 0) {
    uVar2 = STField<uint>(this,0x836) & 0x80000001;
    bVar10 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar10 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if ((((bVar10) && (DAT_007fa134 != 0)) && (uVar2 = g_array_007FA130->count, uVar2 != 0)) &&
       (index = 0, iVar7 = DAT_007fa134, uVar2 != 0)) {
      do {
        DArrayGetElement(g_array_007FA130,index,&param_1);
        if (param_1 != nullptr) {
          iVar7 = iVar7 + -1;
          /* ST_CALLSITE[00460482]: CALL 0x0040478c; direct=0040478C STTorpC::IsDangerous */
          iVar3 = STTorpC::IsDangerous(param_1,STField<int>(this,0x18),&local_8);
          if (iVar3 != 2) {
            if (iVar3 == 0) {
              iVar4 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004603B0::
                      thunk_FUN_004838e0(this,(RecoveredRecord_STBoatC_004838E0 *)param_1);
              if (iVar4 == 1) {
                /* ST_CALLSITE[004604AB]: CALL 0x0040368e; direct=0040368E STTorpC::SetDangerous */
                STTorpC::SetDangerous(param_1,STField<uint>(this,0x18),&local_8);
LAB_004604c9:
                iVar4 = thunk_FUN_00483e30(this,(RecoveredRecord_STBoatC_00482DB0 *)param_1);
                if (iVar4 == 1) {
                  /* ST_CALLSITE[00460546]: CALL 0x0040282e; direct=0040282E STTorpC::ClearDangerous */
                  STTorpC::ClearDangerous(param_1,STField<int>(this,0x18),local_8);
                  STField<STTorpC *>(this,0x46b) = param_1;
                  STField<undefined2>(this,0x46f) = param_1->field_026E;
                  uVar5 = param_1->field_0018;
                  STField<undefined4>(this,0x471) = uVar5;
                  sVar1 = STField<short>(this,0x4b);
                  uVar5 = STReplaceLowWord((uint32_t)(uVar5), (uint16_t)(sVar1));
                  if (sVar1 == 0) {
                    iVar4 = *(int *)this;
                    STField<undefined2>(this,0x469) = 1;
                    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                    uVar6 = extraout_var;
                    uVar11 = 1;
/* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable or function-table callback call with the machine-proven calling convention; expected named packed member, bit extract/compose, or unaligned load */
LAB_00460581:
                    /* ST_CALLSITE[0046058D]: CALL dword ptr [EDX + 0x18] */
                    iVar7 = (**(code **)(iVar4 + 0x18))
                                      (CONCAT22(uVar6,STField<undefined2>(this,0x47)),
                                       STReplaceLowWord((uint32_t)(uVar5), (uint16_t)(STField<undefined2>(this,0x49))),uVar11);
                    if (iVar7 != 1) break;
                    iVar8 = (int)STField<short>(this,0x49);
                    STField<undefined4>(this,0x82e) = 1;
                    iVar7 = (int)STField<short>(this,0x469) + (int)STField<short>(this,0x4b);
                    iVar4 = (int)STField<short>(this,0x47);
                  }
                  else if (sVar1 == 4) {
                    STField<undefined2>(this,0x469) = 0xffff;
                    /* ST_CALLSITE[004605FB]: CALL dword ptr [EAX + 0x18] */
                    /* ST_PSEUDO[return_width_artifact,raw_indirect_call]: candidate call-output artifact: verify return width, clobbers, or x87 state; expected typed vtable or function-table callback call with the machine-proven calling convention */
                    iVar7 = (**(code **)(*(int *)this + 0x18))
                                      (CONCAT22(extraout_var_02,STField<undefined2>(this,0x47)),
                                       CONCAT22(extraout_var,STField<undefined2>(this,0x49)),3);
                    if (iVar7 != 1) break;
                    iVar8 = (int)STField<short>(this,0x49);
                    STField<undefined4>(this,0x82e) = 1;
                    iVar7 = (int)STField<short>(this,0x469) + (int)STField<short>(this,0x4b);
                    iVar4 = (int)STField<short>(this,0x47);
                  }
                  else {
                    iVar4 = STField<int>(this,0x1c) * 0x41c64e6d;
                    uVar2 = iVar4 + 0x3039;
                    STField<uint>(this,0x1c) = uVar2;
                    STField<ushort>(this,0x469) = (ushort)(uVar2 >> 0x10) & 1;
                    iVar7 = (-(uint)((uVar2 & 0x10000) != 0) & 2) - 1;
                    sVar1 = (short)iVar7;
                    STField<short>(this,0x469) = sVar1;
                    uVar6 = (undefined2)((uint)iVar7 >> 0x10);
                    /* ST_CALLSITE[00460669]: CALL dword ptr [EDX + 0x18] */
                    /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable or function-table callback call with the machine-proven calling convention; expected named packed member, bit extract/compose, or unaligned load */
                    iVar7 = (**(code **)(*(int *)this + 0x18))
                                      (CONCAT22(uVar6,STField<undefined2>(this,0x47)),
                                       STReplaceLowWord((uint32_t)(iVar4), (uint16_t)(STField<undefined2>(this,0x49))),
                                       CONCAT22(uVar6,sVar1 + STField<short>(this,0x4b)));
                    if (iVar7 != 1) {
                      sVar1 = STField<short>(this,0x469);
                      iVar4 = *(int *)this;
                      STField<short>(this,0x469) = -sVar1;
                      uVar5 = STReplaceLowWord((uint32_t)(iVar7), (uint16_t)(-sVar1 + STField<short>(this,0x4b)));
                      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                      uVar6 = extraout_var_00;
                      uVar11 = uVar5;
                      goto LAB_00460581;
                    }
                    iVar7 = (int)STField<short>(this,0x469) + (int)STField<short>(this,0x4b);
                    STField<undefined4>(this,0x82e) = 1;
                    iVar8 = (int)STField<short>(this,0x49);
                    iVar4 = (int)STField<short>(this,0x47);
                  }
                  /* ST_CALLSITE[004605B9]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
                  STBoatC::sub_00481520(this,iVar4,iVar8,iVar7);
                  /* ST_CALLSITE[004605C2]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
                  iVar7 = STBoatC::sub_0045FF50(this,0);
                  if (iVar7 == -1) {
                    return -1;
                  }
                  break;
                }
              }
              else {
                /* ST_CALLSITE[004604BD]: CALL 0x0040282e; direct=0040282E STTorpC::ClearDangerous */
                STTorpC::ClearDangerous(param_1,STField<int>(this,0x18),local_8);
              }
            }
            else if (iVar3 == 1) goto LAB_004604c9;
          }
          if (iVar7 == 0) break;
        }
        index = index + 1;
      } while (index < uVar2);
    }
    STField<int>(this,0x836) = STField<int>(this,0x836) + 1;
  }
  if (STField<int>(this,0x82e) == 1) {
    STField<int>(this,0x836) = STField<int>(this,0x836) + 1;
    /* ST_CALLSITE[00460516]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
    iVar7 = STBoatC::sub_0045FF50(this,2);
    if (iVar7 == -1) {
      return -1;
    }
    if (iVar7 == 0) {
      STField<undefined4>(this,0x82e) = 2;
    }
    else if (iVar7 == 3) {
      STField<undefined4>(this,0x82e) = 0;
    }
  }
  if ((STField<int>(this,0x82e) == 2) && (iVar7 = thunk_FUN_00483f10(this), iVar7 == 1)) {
    sVar1 = STField<short>(this,0x469);
    STField<short>(this,0x469) = -sVar1;
    /* ST_CALLSITE[004606F9]: CALL dword ptr [EDX + 0x18] */
    /* ST_PSEUDO[return_width_artifact,raw_indirect_call]: candidate call-output artifact: verify return width, clobbers, or x87 state; expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar7 = (**(code **)(*(int *)this + 0x18))
                      (CONCAT22(extraout_var_01,STField<undefined2>(this,0x47)),
                       STField<undefined2>(this,0x49),-sVar1 + STField<short>(this,0x4b));
    if (iVar7 == 1) {
      STField<undefined4>(this,0x82e) = 3;
      /* ST_CALLSITE[00460725]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
      STBoatC::sub_00481520
                (this,(int)STField<short>(this,0x47),(int)STField<short>(this,0x49),
                 (int)STField<short>(this,0x469) + (int)STField<short>(this,0x4b));
      /* ST_CALLSITE[0046072D]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
      iVar7 = STBoatC::sub_0045FF50(this,0);
      if (iVar7 == -1) {
        return -1;
      }
    }
    else {
      STField<short>(this,0x469) = -STField<short>(this,0x469);
    }
  }
  if (STField<int>(this,0x82e) == 3) {
    STField<int>(this,0x836) = STField<int>(this,0x836) + 1;
    /* ST_CALLSITE[0046076D]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
    iVar7 = STBoatC::sub_0045FF50(this,2);
    if (iVar7 == -1) {
      return -1;
    }
    if ((iVar7 == 0) || (iVar7 == 3)) {
      STField<undefined4>(this,0x82e) = 0;
    }
  }
  /* ST_CALLSITE[0046078E]: CALL dword ptr [EDX + 0xd8] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar7 = (**(code **)(*(int *)this + 0xd8))();
  return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
}

