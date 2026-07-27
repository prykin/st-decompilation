#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::UnLoadObj

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004803D0 -> 004758E0 @ 0048053F */

int __thiscall STBoatC::UnLoadObj(STBoatC *this,int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  int iVar18;
  short sVar19;
  byte bVar20;
  undefined4 local_30 [2];
  undefined4 local_28;
  short local_24;
  int local_20;
  uint local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  AnonShape_004758E0_51E65DA0 *local_c;
  undefined1 local_5;

  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    if (this->field_07CA != 0) {
      sVar4 = this->field_03CE;
      sVar13 = this->field_03D0;
      *(short *)&this->field_0x5ca = sVar4;
      *(short *)&this->field_0x5cc = sVar13;
      *(undefined2 *)&this->field_0x5ce = this->field_03D2;
      if (((sVar4 == -1) && (sVar13 == -1)) && (this->field_03D2 == -1)) {
        this->field_05D6 = 0;
        return 2;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar5 = sub_0048DFD0(this,sVar4,sVar13,this->field_03D2,this->field_005B,this->field_005D,
                           (int *)CONCAT22((short)((uint)&this->field_0x5d0 >> 0x10),
                                           this->field_005F),0,(short *)&this->field_0x5d0,
                           (short *)&this->field_0x5d2,(short *)&this->field_0x5d4);
      if (iVar5 != 0) {
        this->field_05D6 = 5;
        sub_00481520(this,(int)*(short *)&this->field_0x5d0,(int)*(short *)&this->field_0x5d2,
                     (int)*(short *)&this->field_0x5d4);
        sub_0045FF50(this,0);
        return 2;
      }
    }
    return 0;
  }
  iVar5 = this->field_05D6;
  if (iVar5 == 5) {
    iVar5 = sub_0045FF50(this,2);
    if (iVar5 == -1) {
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3079,0,0,"%s",
                                 "STBoatC::UnLoadObj, 5");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      return -1;
    }
    if (iVar5 == 0) {
      this->field_05D6 = 0;
    }
    else if (iVar5 == 3) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar5 = sub_0048DFD0(this,*(short *)&this->field_0x5ca,*(short *)&this->field_0x5cc,
                           *(short *)&this->field_0x5ce,this->field_005B,this->field_005D,
                           (int *)CONCAT22((short)((uint)&this->field_0x5d0 >> 0x10),
                                           this->field_005F),0,(short *)&this->field_0x5d0,
                           (short *)&this->field_0x5d2,(short *)&this->field_0x5d4);
      if (iVar5 == 0) {
        return 0;
      }
      sub_00481520(this,(int)*(short *)&this->field_0x5d0,(int)*(short *)&this->field_0x5d2,
                   (int)*(short *)&this->field_0x5d4);
      sub_0045FF50(this,0);
      return 2;
    }
    return 2;
  }
  if (iVar5 == 0) {
    iVar5 = thunk_FUN_00492550(this,this->field_005B,this->field_005D,this->field_005F,
                               (undefined2 *)&this->field_0x5d0,(undefined2 *)&this->field_0x5d2,
                               (short *)&this->field_0x5d4);
    if (iVar5 == 0) {
      iVar5 = (*this->vtable->vfunc_D8)(this);
      return -(uint)(iVar5 != 0);
    }
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    iVar9 = CONCAT22(extraout_var,*(short *)&this->field_0x5d2 * 0xc9) + 100;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    sVar4 = (*this->vtable->vfunc_10)
                      (this->field_0041,this->field_0043,
                       CONCAT22((short)((uint)iVar9 >> 0x10),this->field_0045),
                       *(short *)&this->field_0x5d0 * 0xc9 + 100,(short)iVar9,
                       CONCAT22((short)((uint)iVar5 >> 0x10),*(short *)&this->field_0x5d4 * 200) +
                       100);
    this->field_05DA = sVar4;
    uVar6 = sub_004176C0(this,sVar4);
    uVar6 = sub_00417910(this,(short)uVar6);
    if (uVar6 != 0xffffffff) {
      if (uVar6 == 0) {
        this->field_05D6 = 1;
        STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,this->field_07CA,(int *)&local_c);
        uVar1 = local_c->field_0062;
        uVar2 = local_c->field_0061;
        local_5 = local_c->field_0063;
        puVar7 = (undefined4 *)&this->field_0034;
        puVar11 = (undefined4 *)&local_c->field_0x34;
        for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar11 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar11 = puVar11 + 1;
        }
        *(undefined2 *)puVar11 = *(undefined2 *)puVar7;
        *(undefined1 *)((int)puVar11 + 2) = *(undefined1 *)((int)puVar7 + 2);
        local_c->field_0061 = uVar2;
        local_c->field_0062 = uVar1;
        local_c->field_0063 = local_5;
        sub_0041C5A0(this);
        thunk_FUN_00495ff0(this->field_005B,this->field_005D,this->field_005F,0,
                           (AnonShape_00495FF0_59081BDD *)this);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)local_c + 0xb8))();
        DumpClassC::WritePtr
                  (*(short *)&this->field_0x5d0,*(short *)&this->field_0x5d2,
                   *(short *)&this->field_0x5d4,0,(AnonShape_00495EC0_95A268C6 *)this);
        TLOEmbryoTy::sub_0041C3F0((TLOEmbryoTy *)this,(undefined *)this->field_070A);
        this->field_07CA = 0;
        this->field_07C6 = 0;
      }
      iVar5 = (*this->vtable->vfunc_D8)(this);
      return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
    }
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x309b,0,0,"%s",
                               "STBoatC::UnLoadObj RotateCheat");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return -1;
  }
  if (iVar5 == 1) {
    sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                 *(short *)&this->field_0x5d0 * 0xc9 + 100,*(short *)&this->field_0x5d2 * 0xc9 + 100
                 ,*(short *)&this->field_0x5d4 * 200 + 100,this->field_0061);
    this->field_05D6 = 2;
  }
  if (this->field_05D6 == 2) {
    local_20 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_18,&local_14);
    local_10 = 0;
    if (this->field_02BF != '\0') {
      param_1 = (int)&this->field_0x2b3;
      do {
        puVar7 = (undefined4 *)
                 thunk_FUN_0041dc40(local_30,(short)*(undefined4 *)param_1,
                                    *(undefined2 *)(param_1 + 4),this->field_006C);
        local_28 = *puVar7;
        local_24 = *(short *)(puVar7 + 1);
        if (DAT_0080732c == 1) {
          bVar20 = 0;
          sVar19 = 0;
          iVar18 = -1;
          uVar6 = this->field_001C * 0x41c64e6d + 0x3039;
          sVar17 = 0;
          this->field_001C = uVar6;
          sVar16 = 0;
          sVar15 = 0;
          uVar8 = uVar6 * 0x41c64e6d + 0x3039;
          sVar14 = 0;
          this->field_001C = uVar8;
          local_1c = uVar8 * 0x41c64e6d + 0x3039;
          sVar13 = 0;
          this->field_001C = local_1c;
          sVar4 = 0;
          lVar12 = Library::MSVCRT::__ftol();
          iVar5 = (int)(short)lVar12 + (uVar6 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                  (int)local_24;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar9 = ((uVar8 >> 0x10) % 7 + (int)this->field_0043) - (int)local_28._2_2_;
          uVar6 = local_1c;
        }
        else {
          uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
          bVar20 = 0;
          this->field_001C = uVar8;
          uVar10 = uVar8 * 0x41c64e6d + 0x3039;
          sVar19 = 0;
          this->field_001C = uVar10;
          uVar6 = uVar10 * 0x41c64e6d + 0x3039;
          this->field_001C = uVar6;
          iVar18 = -1;
          sVar17 = 0;
          sVar16 = 0;
          sVar15 = 0;
          sVar14 = 0;
          sVar13 = 0;
          sVar4 = 0;
          iVar5 = (uVar8 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_24;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_28._2_2_ = (short)((uint)local_28 >> 0x10);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar9 = ((uVar10 >> 0x10) % 7 + (int)this->field_0043) - (int)local_28._2_2_;
        }
        TraksClassTy::TraksCreate
                  (g_traksClass_00802A7C,1,2,7,
                   (uVar6 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_28,
                   iVar9 + -3,iVar5,sVar4,sVar13,sVar14,sVar15,sVar16,sVar17,iVar18,sVar19,bVar20);
        local_10 = local_10 + 1;
        param_1 = param_1 + 6;
      } while (local_10 < (int)(uint)(byte)this->field_02BF);
    }
    if (local_20 == -1) {
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x30d2,0,0,"%s",
                                 "STBoatC::UnLoadObj LLMoveStep");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      return -1;
    }
    if (local_20 == 0) {
      FUN_006ea2f0(this->field_0211,this->field_01ED);
      iVar5 = (*this->vtable->vfunc_D8)(this);
      return -(uint)(iVar5 != 0);
    }
  }
  iVar5 = (*this->vtable->vfunc_D8)(this);
  return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
}

