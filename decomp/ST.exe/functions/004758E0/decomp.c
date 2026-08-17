#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::UnLoadObj

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004803D0 -> 004758E0 @ 0048053F

   [STSwitchEnumApplier] Switch target field_05D6 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_05D6State. Cases: CASE_1=1;CASE_2=2;CASE_5=5 */

int __thiscall STBoatC::UnLoadObj(STBoatC *this,int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  STBoatC_field_05D6State SVar3;
  short sVar5;
  int iVar6;
  int local_EAX_246;
  uint uVar7;
  int local_EAX_712;
  byte *puVar8;
  uint uVar9;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int iVar10;
  uint uVar11;
  byte *puVar12;
  longlong lVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  int iVar19;
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

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    if (this->field_07CA != nullptr) {
      sVar5 = this->field_03CE;
      sVar14 = this->field_03D0;
      this->field_05CA = sVar5;
      this->field_05CC = sVar14;
      this->field_05CE = this->field_03D2;
      if (((sVar5 == -1) && (sVar14 == -1)) && (this->field_03D2 == -1)) {
        this->field_05D6 = 0;
        return 2;
      }
      /* ST_CALLSITE[00475F18]: CALL 0x00404908; direct=00404908 STBoatC::sub_0048DFD0 */
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar6 = sub_0048DFD0(this,sVar5,sVar14,this->field_03D2,this->field_005B,this->field_005D,
                           (int *)CONCAT22((short)((uint)&this->field_05D0 >> 0x10),this->field_005F
                                          ),0,&this->field_05D0,&this->field_05D2,&this->field_05D4);
      if (iVar6 != 0) {
        this->field_05D6 = CASE_5;
        /* ST_CALLSITE[00475F3D]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
        sub_00481520(this,(int)this->field_05D0,(int)this->field_05D2,(int)this->field_05D4);
        /* ST_CALLSITE[00475F46]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
        sub_0045FF50(this,0);
        return 2;
      }
    }
    return 0;
  }
  SVar3 = this->field_05D6;
  if (SVar3 == CASE_5) {
    /* ST_CALLSITE[00475912]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
    iVar6 = sub_0045FF50(this,2);
    if (iVar6 == -1) {
      local_EAX_246 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3079,0,0,"%s",
                              "STBoatC::UnLoadObj, 5");
      if (local_EAX_246 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      return -1;
    }
    if (iVar6 == 0) {
      this->field_05D6 = 0;
    }
    else if (iVar6 == 3) {
      /* ST_CALLSITE[00475971]: CALL 0x00404908; direct=00404908 STBoatC::sub_0048DFD0 */
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar6 = sub_0048DFD0(this,this->field_05CA,this->field_05CC,this->field_05CE,this->field_005B,
                           this->field_005D,
                           (int *)CONCAT22((short)((uint)&this->field_05D0 >> 0x10),this->field_005F
                                          ),0,&this->field_05D0,&this->field_05D2,&this->field_05D4);
      if (iVar6 == 0) {
        return 0;
      }
      /* ST_CALLSITE[00475990]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
      sub_00481520(this,(int)this->field_05D0,(int)this->field_05D2,(int)this->field_05D4);
      /* ST_CALLSITE[00475999]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
      sub_0045FF50(this,0);
      return 2;
    }
    return 2;
  }
  if (SVar3 == 0) {
    iVar6 = thunk_FUN_00492550(this,this->field_005B,this->field_005D,this->field_005F,
                               &this->field_05D0,&this->field_05D2,&this->field_05D4);
    if (iVar6 == 0) {
      /* ST_CALLSITE[00475A2A]: CALL dword ptr [EAX + 0xd8] */
      iVar6 = this->vfunc_D8();
      return -(uint)(iVar6 != 0);
    }
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    iVar10 = CONCAT22(extraout_var,this->field_05D2 * 0xc9) + 100;
    /* ST_CALLSITE[00475A78]: CALL dword ptr [EDX + 0x10] */
    sVar5 = (*this->vtable->vfunc_10)
                      (this->field_0041,this->field_0043,
                       STReplaceLowWord((uint32_t)(iVar10), (uint16_t)(this->field_0045)),
                       this->field_05D0 * 0xc9 + 100,(short)iVar10,
                       STReplaceLowWord((uint32_t)(iVar6), (uint16_t)(this->field_05D4 * 200)) + 100);
    this->field_05DA = sVar5;
    /* ST_CALLSITE[00475A85]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0 */
    uVar7 = sub_004176C0(this,sVar5);
    /* ST_CALLSITE[00475A8D]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
    uVar7 = sub_00417910(this,(short)uVar7);
    if (uVar7 != 0xffffffff) {
      if (uVar7 == 0) {
        this->field_05D6 = CASE_1;
        STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,this->field_07CA,(int *)&local_c);
        uVar1 = local_c->field_0062;
        uVar2 = local_c->field_0061;
        local_5 = local_c->field_0063;
        puVar8 = (byte *)&this->field_0034;
        puVar12 = (byte *)&local_c->field_0x34;
        memmove(puVar12, puVar8, 0x5f); /* compiler REP MOVS byte copy */
        local_c->field_0061 = uVar2;
        local_c->field_0062 = uVar1;
        local_c->field_0063 = local_5;
        /* ST_CALLSITE[00475AFF]: CALL 0x0040464c; direct=0040464C sub_0041C5A0 */
        sub_0041C5A0(this);
        thunk_FUN_00495ff0(this->field_005B,this->field_005D,this->field_005F,0,
                           (AnonShape_00495FF0_59081BDD *)this);
        /* ST_CALLSITE[00475B2B]: CALL dword ptr [EAX + 0xb8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*(int *)local_c + 0xb8))();
        /* ST_CALLSITE[00475B55]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
        DumpClassC::WritePtr
                  (this->field_05D0,this->field_05D2,this->field_05D4,0,
                   (RecoveredRecord_DumpClassC_00495EC0 *)this);
        /* ST_CALLSITE[00475B63]: CALL 0x004023a1; direct=004023A1 TLOEmbryoTy::sub_0041C3F0 */
        TLOEmbryoTy::sub_0041C3F0((TLOEmbryoTy *)this,(undefined *)this->field_070A);
        this->field_07CA = nullptr;
        this->field_07C6 = 0;
      }
      /* ST_CALLSITE[00475B78]: CALL dword ptr [EAX + 0xd8] */
      iVar6 = this->vfunc_D8();
      return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
    }
    local_EAX_712 =
         ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x309b,0,0,"%s",
                            "STBoatC::UnLoadObj RotateCheat");
    if (local_EAX_712 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return -1;
  }
  if (SVar3 == CASE_1) {
    /* ST_CALLSITE[00475C0B]: CALL 0x00402455; direct=00402455 sub_00415B30 */
    sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                 this->field_05D0 * 0xc9 + 100,this->field_05D2 * 0xc9 + 100,
                 this->field_05D4 * 200 + 100,this->field_0061);
    this->field_05D6 = CASE_2;
  }
  if (this->field_05D6 == CASE_2) {
    /* ST_CALLSITE[00475C31]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
    local_20 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_18,&local_14);
    local_10 = 0;
    if (this->field_02BF != '\0') {
      auto param_1_after_write = (int)&this->field_0x2b3; /* compiler stack-slot lifetime split */
      do {
        puVar8 = thunk_FUN_0041dc40(local_30,(short)*(undefined4 *)param_1_after_write,*(ushort *)(param_1_after_write + 4),
                                    this->field_006C);
        local_28 = *puVar8;
        local_24 = *(short *)(puVar8 + 1);
        if (DAT_0080732c == 1) {
          bVar21 = 0;
          sVar20 = 0;
          iVar19 = -1;
          uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
          sVar18 = 0;
          this->field_001C = uVar7;
          sVar17 = 0;
          sVar16 = 0;
          uVar9 = uVar7 * 0x41c64e6d + 0x3039;
          sVar15 = 0;
          this->field_001C = uVar9;
          local_1c = uVar9 * 0x41c64e6d + 0x3039;
          sVar14 = 0;
          this->field_001C = local_1c;
          sVar5 = 0;
          lVar13 = Library::MSVCRT::__ftol();
          iVar6 = (int)(short)lVar13 + (uVar7 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                  (int)local_24;
          iVar10 = ((uVar9 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_28);
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
          iVar19 = -1;
          sVar18 = 0;
          sVar17 = 0;
          sVar16 = 0;
          sVar15 = 0;
          sVar14 = 0;
          sVar5 = 0;
          iVar6 = (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_24;
          STPiece<2,2>(local_28) = (short)((uint)local_28 >> 0x10);
          iVar10 = ((uVar11 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_28);
        }
        /* ST_CALLSITE[00475DCE]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
        TraksClassTy::TraksCreate
                  (g_traksClass_00802A7C,1,2,7,
                   (uVar7 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_28,
                   iVar10 + -3,iVar6,sVar5,sVar14,sVar15,sVar16,sVar17,sVar18,iVar19,sVar20,bVar21);
        local_10 = local_10 + 1;
        param_1_after_write = param_1_after_write + 6;
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
      Library::Ourlib::ST3DSMAP::SprRstLev(this->field_0211,this->field_01ED);
      /* ST_CALLSITE[00475E15]: CALL dword ptr [EAX + 0xd8] */
      iVar6 = this->vfunc_D8();
      return -(uint)(iVar6 != 0);
    }
  }
  /* ST_CALLSITE[00475E5D]: CALL dword ptr [EDX + 0xd8] */
  iVar6 = this->vfunc_D8();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
}

