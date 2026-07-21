#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_005f4c50(void *this,float param_1,undefined4 param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  int iVar1;
  DArrayTy *pDVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_2c [6];
  int local_26;
  undefined4 local_22;
  undefined4 local_1e;
  int local_1a;
  int local_16;
  undefined4 local_12;
  undefined4 local_d;
  float local_8;

  iVar5 = param_4;
  local_8 = _DAT_0079c5a4 / (float)param_5;
  *(int *)((int)this + 0x109) = param_5;
  *(int *)((int)this + 0x10d) = param_4;
  *(float *)((int)this + 0x111) = param_1;
  *(undefined4 *)((int)this + 0x115) = param_2;
  *(int *)((int)this + 0x119) = param_3;
  *(undefined4 *)((int)this + 0x121) = 0xffffffe2;
  *(undefined4 *)((int)this + 0x11d) = 0x14;
  *(undefined4 *)((int)this + 0x125) = 7;
  if (0 < param_4) {
    iVar6 = 0;
    puVar3 = (undefined4 *)((int)this + 0x149);
    do {
      puVar3[-4] = *(undefined4 *)((int)this + 0x11d);
      *puVar3 = *(undefined4 *)((int)this + 0x119);
      iVar1 = iVar6 / *(int *)((int)this + 0x121);
      iVar6 = iVar6 + -0x96;
      puVar3[4] = iVar1 + PTR_00802a38->field_00E4 + param_6;
      param_4 = param_4 + -1;
      puVar3 = puVar3 + 1;
    } while (param_4 != 0);
  }
  if (*(DArrayTy **)((int)this + 0x169) != (DArrayTy *)0x0) {
    DArrayDestroy(*(DArrayTy **)((int)this + 0x169));
  }
  pDVar2 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,iVar5 * param_5,0x23,10);
  *(DArrayTy **)((int)this + 0x169) = pDVar2;
  if ((pDVar2 != (DArrayTy *)0x0) && (param_4 = 0, 0 < *(int *)((int)this + 0x10d))) {
    do {
      param_1 = 0.0;
      param_3 = 0;
      iVar5 = *(int *)((int)this + 0x109) * param_4;
      if (0 < *(int *)((int)this + 0x109)) {
        do {
          puVar3 = (undefined4 *)local_2c;
          memset(puVar3, 0, 0x22); /* compiler bulk-zero initialization */
          puVar3 = (undefined4 *)((byte *)puVar3 + 0x20);
          *(undefined1 *)((int)puVar3 + 2) = 0;
          if (param_4 == 0) {
            fcos((float10)param_1);
            lVar7 = Library::MSVCRT::__ftol();
            iVar1 = (int)lVar7;
            fsin((float10)param_1);
            local_1a = iVar1;
            lVar7 = Library::MSVCRT::__ftol();
            local_16 = (int)lVar7;
            param_1 = param_1 + local_8;
          }
          else {
            iVar6 = *(int *)((int)this + 0x169);
            if ((uint)(iVar5 - param_5) < *(uint *)(iVar6 + 0xc)) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              iVar6 = *(int *)(iVar6 + 8) * (iVar5 - param_5) + *(int *)(iVar6 + 0x1c);
            }
            else {
              iVar6 = 0;
            }
            iVar1 = *(int *)(iVar6 + 0x12);
            local_16 = *(int *)(iVar6 + 0x16);
            local_1a = iVar1;
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar6 = *(int *)((int)this + param_4 * 4 + 0x139);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_2c._2_4_ = (iVar6 * iVar1) / 10000 + *(int *)((int)this + 0x111);
          local_26 = (iVar6 * local_16) / 10000 + *(int *)((int)this + 0x115);
          local_12 = DAT_007ce5ec;
          local_22 = *(undefined4 *)((int)this + 0x119);
          local_1e = 0;
          local_2c[1] = 3;
          local_d = 0xffffffff;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          uVar4 = (uint)(*(int *)((int)this + param_4 * 4 + 0x159) != 0);
          if (*(char *)((int)this + 0x103) != '\0') {
            thunk_FUN_005f4a30((int)local_2c,3,uVar4);
          }
          local_2c[0] = uVar4 == 0;
          Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x169),(undefined4 *)local_2c);
          param_3 = param_3 + 1;
          iVar5 = iVar5 + 1;
        } while (param_3 < *(int *)((int)this + 0x109));
      }
      param_4 = param_4 + 1;
    } while (param_4 < *(int *)((int)this + 0x10d));
  }
  if (*(int *)((int)this + 0x169) == 0) {
    return 0;
  }
  return 1;
}

