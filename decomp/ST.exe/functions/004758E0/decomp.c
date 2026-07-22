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
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int iVar10;
  undefined2 uVar12;
  uint uVar11;
  undefined4 *puVar13;
  longlong lVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  byte bVar21;
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
      sVar15 = this->field_03D0;
      *(short *)&this->field_0x5ca = sVar4;
      *(short *)&this->field_0x5cc = sVar15;
      *(undefined2 *)&this->field_0x5ce = this->field_03D2;
      if (((sVar4 == -1) && (sVar15 == -1)) && (this->field_03D2 == -1)) {
        this->field_05D6 = 0;
        return 2;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar5 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::sub_0048DFD0
                        ((AnonReceiver_0048DFD0 *)this,sVar4,sVar15,this->field_03D2,
                         this->field_005B,this->field_005D,
                         (int *)CONCAT22((short)((uint)&this->field_0x5d0 >> 0x10),this->field_005F)
                         ,0,(short *)&this->field_0x5d0,(short *)&this->field_0x5d2,
                         (short *)&this->field_0x5d4);
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
      iVar5 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::sub_0048DFD0
                        ((AnonReceiver_0048DFD0 *)this,*(short *)&this->field_0x5ca,
                         *(short *)&this->field_0x5cc,*(short *)&this->field_0x5ce,this->field_005B,
                         this->field_005D,
                         (int *)CONCAT22((short)((uint)&this->field_0x5d0 >> 0x10),this->field_005F)
                         ,0,(short *)&this->field_0x5d0,(short *)&this->field_0x5d2,
                         (short *)&this->field_0x5d4);
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
      iVar5 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar5 != 0);
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar5 = CONCAT22((short)((uint)iVar5 >> 0x10),*(short *)&this->field_0x5d4 * 200) + 100;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    iVar10 = CONCAT22(extraout_var,*(short *)&this->field_0x5d2 * 0xc9) + 100;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar6 = CONCAT22((short)((uint)iVar5 >> 0x10),*(short *)&this->field_0x5d0 * 0xc9) + 100;
    uVar12 = (undefined2)((uint)iVar10 >> 0x10);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    sVar4 = (*this->vtable->vfunc_10)
                      (CONCAT22(uVar12,this->field_0041),
                       CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0043),
                       CONCAT22(uVar12,this->field_0045),iVar6,iVar10,iVar5);
    this->field_05DA = sVar4;
    uVar7 = sub_004176C0(this,sVar4);
    uVar7 = sub_00417910(this,(short)uVar7);
    if (uVar7 != 0xffffffff) {
      if (uVar7 == 0) {
        this->field_05D6 = 1;
        FUN_006e62d0(g_playSystem_00802A38,this->field_07CA,(int *)&local_c);
        uVar1 = local_c->field_0062;
        uVar2 = local_c->field_0061;
        local_5 = local_c->field_0063;
        puVar8 = (undefined4 *)&this->field_0034;
        puVar13 = (undefined4 *)&local_c->field_0x34;
        for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar13 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar13 = puVar13 + 1;
        }
        *(undefined2 *)puVar13 = *(undefined2 *)puVar8;
        *(undefined1 *)((int)puVar13 + 2) = *(undefined1 *)((int)puVar8 + 2);
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
      iVar5 = (*this->vtable->vfunc_D8)();
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
        puVar8 = (undefined4 *)
                 thunk_FUN_0041dc40(local_30,(short)*(undefined4 *)param_1,
                                    *(undefined2 *)(param_1 + 4),this->field_006C);
        local_28 = *puVar8;
        local_24 = *(short *)(puVar8 + 1);
        if (DAT_0080732c == 1) {
          bVar21 = 0;
          sVar20 = 0;
          iVar10 = -1;
          uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
          sVar19 = 0;
          this->field_001C = uVar7;
          sVar18 = 0;
          sVar17 = 0;
          uVar9 = uVar7 * 0x41c64e6d + 0x3039;
          sVar16 = 0;
          this->field_001C = uVar9;
          local_1c = uVar9 * 0x41c64e6d + 0x3039;
          sVar15 = 0;
          this->field_001C = local_1c;
          sVar4 = 0;
          lVar14 = Library::MSVCRT::__ftol();
          iVar5 = (int)(short)lVar14 + (uVar7 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                  (int)local_24;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar6 = ((uVar9 >> 0x10) % 7 + (int)this->field_0043) - (int)local_28._2_2_;
          uVar7 = local_1c;
        }
        else {
          uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
          bVar21 = 0;
          this->field_001C = uVar9;
          uVar11 = uVar9 * 0x41c64e6d + 0x3039;
          sVar20 = 0;
          this->field_001C = uVar11;
          uVar7 = uVar11 * 0x41c64e6d + 0x3039;
          this->field_001C = uVar7;
          iVar10 = -1;
          sVar19 = 0;
          sVar18 = 0;
          sVar17 = 0;
          sVar16 = 0;
          sVar15 = 0;
          sVar4 = 0;
          iVar5 = (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_24;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_28._2_2_ = (short)((uint)local_28 >> 0x10);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar6 = ((uVar11 >> 0x10) % 7 + (int)this->field_0043) - (int)local_28._2_2_;
        }
        TraksClassTy::TraksCreate
                  (g_traksClass_00802A7C,1,2,7,
                   (uVar7 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_28,
                   iVar6 + -3,iVar5,sVar4,sVar15,sVar16,sVar17,sVar18,sVar19,iVar10,sVar20,bVar21);
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
      iVar5 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar5 != 0);
    }
  }
  iVar5 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
}

