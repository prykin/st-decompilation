#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackWaitLoad */

int __thiscall STBoatC::BackWaitLoad(STBoatC *this,int *param_1)

{
  uint uVar1;
  STBoatC_field_05C0State SVar2;
  STBoatC_field_05C4State SVar3;
  uint uVar4;
  int iVar6;
  int local_EAX_72;
  uint uVar7;
  uint *puVar8;
  int local_EAX_624;
  int local_EAX_658;
  int iVar4;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  int iVar19;
  short sVar20;
  byte bVar21;
  uint local_2c [2];
  uint local_24;
  short local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;

  SVar2 = this->field_05C0;
  if (SVar2 == CASE_0) {
LAB_00475545:
    /* ST_CALLSITE[00475549]: CALL dword ptr [EAX + 0xd8] */
    iVar6 = this->vfunc_D8();
    return -(uint)(iVar6 != 0);
  }
  if ((SVar2 == CASE_1) || (SVar2 == CASE_2)) {
    SVar3 = this->field_05C4;
    if (SVar3 == CASE_0) {
      /* ST_CALLSITE[00475578]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
      local_EAX_72 = sub_00460360(this);
      return local_EAX_72;
    }
    if (((((SVar3 == CASE_1) || (SVar3 == CASE_2)) || (SVar3 == CASE_3)) ||
        ((SVar3 == CASE_5 || (SVar3 == CASE_6)))) || (SVar3 == CASE_7)) {
      this->field_0076 = 1;
      /* ST_CALLSITE[0047580C]: CALL dword ptr [EDX + 0xd8] */
      iVar6 = this->vfunc_D8();
      return -(uint)(iVar6 != 0);
    }
    if (SVar3 == CASE_4) {
      /* ST_CALLSITE[004755CF]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
      local_1c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_18,&local_14);
      uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar7;
      iVar6 = (uVar7 >> 0x10) % 7 - 3;
      uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar7;
      uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar1;
      local_c = (uVar1 >> 0x10) % 7 - 3;
      if ((this->field_074A <= (int)PTR_00806724->entryCount / 2) &&
         (local_10 = 0, this->field_02BF != '\0')) {
        local_8 = (undefined4 *)&this->field_0x2b3;
        do {

          puVar8 = thunk_FUN_0041dc40(local_2c,(short)*local_8,*(ushort *)(local_8 + 1),
                                      this->field_006C);
          uVar4 = *puVar8;
          bVar21 = 0;
          sVar20 = 0;
          iVar19 = -1;
          local_20 = *(short *)(puVar8 + 1);
          sVar18 = 0;
          sVar17 = 0;
          sVar16 = 0;
          sVar15 = 0;
          sVar14 = 0;
          sVar13 = 0;
          local_24 = uVar4;
          if (DAT_0080732c == 1) {
            sVar13 = 0;
            sVar14 = 0;
            sVar15 = 0;
            sVar16 = 0;
            sVar17 = 0;
            sVar18 = 0;
            sVar20 = 0;
            bVar21 = 0;
            lVar12 = Library::MSVCRT::__ftol();
            iVar9 = (int)local_20 + this->field_0045 + local_c + (short)lVar12;
            iVar10 = (int)this->field_0043 - (int)STPiece<2,2>(local_24);
            iVar11 = (short)local_24 + iVar6 + this->field_0041;
          }
          else {
            iVar9 = (int)local_20 + local_c + this->field_0045;
            STPiece<2,2>(local_24) = (short)((uint)uVar4 >> 0x10);
            iVar10 = (int)this->field_0043 - (int)STPiece<2,2>(local_24);
            STPiece<0,2>(local_24) = (short)uVar4;
            iVar11 = (short)local_24 + iVar6 + this->field_0041;
          }
          /* ST_CALLSITE[00475737]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
          TraksClassTy::TraksCreate
                    (g_traksClass_00802A7C,1,2,7,iVar11,iVar10 + ((uVar7 >> 0x10) % 7 - 3),iVar9,
                     sVar13,sVar14,sVar15,sVar16,sVar17,sVar18,iVar19,sVar20,bVar21);
          local_8 = (undefined4 *)((int)local_8 + 6);
          local_10 = local_10 + 1;
        } while (local_10 < (int)(uint)(byte)this->field_02BF);
      }
      if (local_1c == -1) {

        local_EAX_624 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x303e,0,0,"%s",
                                "STBoatC::BackWaitLoad swli.regime2=4");
        if (local_EAX_624 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return -1;
      }
      if (local_1c != 0) {
        /* ST_CALLSITE[00475770]: CALL dword ptr [EDX + 0xd8] */
        iVar6 = this->vfunc_D8();
        return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
      }
      goto LAB_00475545;
    }
  }
  if (SVar2 == CASE_3) {
    /* ST_CALLSITE[004757C2]: CALL 0x00404e08; direct=00404E08 STBoatC::WaitLoad */
    local_EAX_658 = WaitLoad(this,(STBoatC *)0x2);
    return local_EAX_658;
  }

  iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3052,0,0,"%s",
                             "STBoatC::BackWaitLoad swli.regime==WAITLOAD_LOADED ??");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return -1;
}

