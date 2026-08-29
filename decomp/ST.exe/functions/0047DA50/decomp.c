#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackAnnih

   [STSwitchEnumApplier] Switch target field_06A5 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06A5State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6

   [STSwitchEnumApplier] Switch target field_06A5 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06A5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

int __thiscall STBoatC::BackAnnih(STBoatC *this,int *param_1)

{
  uint uVar1;
  STBoatC_field_06A5State SVar2;
  uint uVar3;
  ushort uVar5;
  uint uVar6;
  int local_EAX_269;
  uint *puVar7;
  int local_EAX_865;
  int iVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int iVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  int iVar20;
  short sVar21;
  byte bVar22;
  uint local_2c [2];
  uint local_24;
  short local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;

  /* ST_CALLSITE[0047DA5B]: CALL 0x004042a0; direct=004042A0 STBoatC::sub_004952E0 */
  sub_004952E0(this);
  if ((this->field_06A1 == 1) || (this->field_06A1 == 2)) {
    /* ST_CALLSITE[0047DDF5]: CALL 0x004014fb; direct=004014FB STBoatC::Annih */
    iVar8 = Annih(this,2);
    return iVar8;
  }
  SVar2 = this->field_06A5;
  if (((SVar2 == CASE_0) || (SVar2 == CASE_1)) || (SVar2 == CASE_2)) {
    return 0;
  }
  if (SVar2 == CASE_3) {
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    iVar10 = CONCAT22(extraout_var_00,this->field_0693 * 0xc9) + 100;
    /* ST_CALLSITE[0047DAE0]: CALL dword ptr [EAX + 0x10] */
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar5 = (*this->vtable->vfunc_10)
                      (this->field_0041,this->field_0043,
                       STReplaceLowWord((uint32_t)(iVar10), (uint16_t)(this->field_0045)),
                       this->field_0691 * 0xc9 + 100,(short)iVar10,
                       CONCAT22(extraout_var,this->field_0695 * 200) + 100);
    this->field_069B = uVar5;
    this->field_06A5 = CASE_4;
  }
  if (this->field_06A5 == CASE_4) {
    /* ST_CALLSITE[0047DB09]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STBoatC; source view only; no Ghidra override */
    uVar6 = sub_004176C0(this,this->field_069B);
    /* ST_CALLSITE[0047DB11]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
    uVar6 = sub_00417910(this,(short)uVar6);
    if (uVar6 == 0xffffffff) {

      local_EAX_269 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3925,0,0,"%s",
                              "STBoatC::BackAnnih 1");
      if (local_EAX_269 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar10 = 0x3925;
LAB_0047ddc3:
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar10);
      return 0xffff;
    }
    if (uVar6 == 0) {
      this->field_06A5 = CASE_5;
    }
  }
  else {
    if (this->field_06A5 == CASE_5) {
      /* ST_CALLSITE[0047DBBE]: CALL 0x00402455; direct=00402455 sub_00415B30 */
      sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_0691 * 0xc9 + 100,this->field_0693 * 0xc9 + 100,
                   this->field_0695 * 200 + 100,this->field_0061);
      this->field_06A5 = CASE_6;
    }
    if (this->field_06A5 == CASE_6) {
      /* ST_CALLSITE[0047DBE4]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
      local_1c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_18,&local_14);
      uVar6 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar6;
      iVar10 = (uVar6 >> 0x10) % 7 - 3;
      uVar6 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar6;
      uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar1;
      local_c = (uVar1 >> 0x10) % 7 - 3;
      if ((this->field_074A <= (int)PTR_00806724->entryCount / 2) &&
         (local_10 = 0, this->field_02BF != '\0')) {
        local_8 = (undefined4 *)&this->field_0x2b3;
        do {

          puVar7 = thunk_FUN_0041dc40(local_2c,(short)*local_8,*(ushort *)(local_8 + 1),
                                      this->field_006C);
          uVar3 = *puVar7;
          bVar22 = 0;
          sVar21 = 0;
          iVar20 = -1;
          local_20 = *(short *)(puVar7 + 1);
          sVar19 = 0;
          sVar18 = 0;
          sVar17 = 0;
          sVar16 = 0;
          sVar15 = 0;
          sVar14 = 0;
          local_24 = uVar3;
          if (DAT_0080732c == 1) {
            sVar14 = 0;
            sVar15 = 0;
            sVar16 = 0;
            sVar17 = 0;
            sVar18 = 0;
            sVar19 = 0;
            sVar21 = 0;
            bVar22 = 0;
            lVar13 = Library::MSVCRT::__ftol();
            iVar9 = (int)local_20 + this->field_0045 + local_c + (short)lVar13;
            iVar11 = (int)this->field_0043 - (int)STPiece<2,2>(local_24);
            iVar12 = (short)local_24 + iVar10 + this->field_0041;
          }
          else {
            iVar9 = (int)local_20 + local_c + this->field_0045;
            STPiece<2,2>(local_24) = (short)((uint)uVar3 >> 0x10);
            iVar11 = (int)this->field_0043 - (int)STPiece<2,2>(local_24);
            STPiece<0,2>(local_24) = (short)uVar3;
            iVar12 = (short)local_24 + iVar10 + this->field_0041;
          }
          /* ST_CALLSITE[0047DD4D]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
          TraksClassTy::TraksCreate
                    (g_traksClass_00802A7C,1,2,7,iVar12,iVar11 + ((uVar6 >> 0x10) % 7 - 3),iVar9,
                     sVar14,sVar15,sVar16,sVar17,sVar18,sVar19,iVar20,sVar21,bVar22);
          local_8 = (undefined4 *)((int)local_8 + 6);
          local_10 = local_10 + 1;
        } while (local_10 < (int)(uint)(byte)this->field_02BF);
      }
      if (local_1c == -1) {

        local_EAX_865 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x394c,0,0,"%s",
                                "STBoatC::BackAnnih 2");
        if (local_EAX_865 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar10 = 0x394c;
        goto LAB_0047ddc3;
      }
      if (local_1c == 0) {
        /* ST_CALLSITE[0047DD86]: CALL dword ptr [EDX + 0xd8] */
        iVar10 = this->vfunc_D8();
        return -(uint)(iVar10 != 0);
      }
    }
  }
  /* ST_CALLSITE[0047DB2D]: CALL dword ptr [EDX + 0xd8] */
  iVar10 = this->vfunc_D8();
  return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
}

