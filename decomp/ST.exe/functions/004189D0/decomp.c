#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::MoveStep */

undefined4 __thiscall STGameObjC::MoveStep(STGameObjC *this,int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (this->field_00E8 == 1) {
    thunk_FUN_00417830((AnonShape_00417830_9254190A *)this);
    return 0;
  }
  iVar5 = thunk_FUN_00416400((STJellyGunC *)this);
  if (iVar5 == 1) {
    return 0;
  }
  if (iVar5 == 2) {
    thunk_FUN_00416840(this,(undefined2 *)&local_10,(undefined2 *)&local_c,(undefined2 *)&local_8);
    iVar5 = (*this->vtable->vfunc_18)(local_10,local_c,local_8);
    if (iVar5 != 1) {
      this->field_00FA = this->field_00FA + 1;
      if (this->field_00FA <= this->field_00F8) {
        return 0;
      }
      this->field_00D7 = (int)(short)local_10;
      this->field_00DB = (int)(short)local_c;
      this->field_00DF = (int)(short)local_8;
      this->field_00FA = 0;
      sub_004167A0(this);
      return 2;
    }
    uVar6 = STColl3C::sub_0041C5A0((STColl3C *)this);
    this->field_00FA = 0;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar5 = thunk_FUN_00495ff0(this->field_005B,this->field_005D,this->field_005F,
                               CONCAT31((int3)((uint)uVar6 >> 8),this->field_008E),
                               (AnonShape_00495FF0_59081BDD *)this);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if ((iVar5 == 0) &&
       (iVar5 = DumpClassC::WritePtr
                          ((short)local_10,(short)local_c,(short)local_8,
                           CONCAT31((int3)((uint)extraout_EDX >> 8),this->field_008E),
                           (AnonShape_00495EC0_95A268C6 *)this), iVar5 == 0)) {
      TLOEmbryoTy::sub_0041C3F0((TLOEmbryoTy *)this,(undefined *)this->field_0101);
      thunk_FUN_004168b0((int)this);
      return 0;
    }
  }
  else if (iVar5 == 3) {
    thunk_FUN_00416840(this,(undefined2 *)&local_10,(undefined2 *)&local_c,(undefined2 *)&local_8);
    uVar7 = thunk_FUN_00418d20(this->field_0047,this->field_0049,this->field_004B,(short)local_10,
                               (short)local_c,(short)local_8);
    if (uVar7 != 0xffffffff) {
      if (uVar7 == 1) {
        iVar2 = this->field_009B;
        iVar3 = this->field_0097;
        iVar5 = iVar3 + iVar2 * 8;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_10 = CONCAT22((short)((uint)iVar2 >> 0x10),*(undefined2 *)(iVar3 + -8 + iVar2 * 8));
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_c = CONCAT22((short)((uint)iVar3 >> 0x10),*(undefined2 *)(iVar5 + -6));
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8 = CONCAT22((short)((uint)iVar5 >> 0x10),*(undefined2 *)(iVar5 + -4));
        this->field_00E4 = 0;
        this->field_00E3 = 0;
        sub_004167A0(this);
        iVar5 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00417FF0::thunk_FUN_00418030
                          ((AnonReceiver_00417FF0 *)this,(short)local_10,(short)local_c,
                           (short)local_8);
        if (iVar5 == -1) {
          return 0xffffffff;
        }
        if (iVar5 == 0) {
          return 0;
        }
        if (iVar5 == 2) {
          return 2;
        }
      }
      uVar1 = *(ushort *)(this->field_0097 + 6 + this->field_00D3 * 8);
      if (((uVar1 & 0xfff) != 0xffe) && (uVar1 != this->field_006C)) {
        thunk_FUN_00417740(this,this->field_006C,uVar1);
      }
      thunk_FUN_004168b0((int)this);
      return 0;
    }
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0x33f,0,0,"%s",
                               "STGameObjC::MoveStep far cells");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else if (iVar5 == 0) {
    sub_004167A0(this);
    return 1;
  }
  return 0xffffffff;
}

