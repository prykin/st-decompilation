#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackWaitLoad */

int __thiscall STBoatC::BackWaitLoad(STBoatC *this,int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar5;
  int local_EAX_72;
  uint uVar6;
  undefined4 *puVar7;
  int local_EAX_624;
  int local_EAX_658;
  int iVar4;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  int iVar18;
  short sVar19;
  byte bVar20;
  undefined4 local_2c [2];
  undefined4 local_24;
  short local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;

  iVar5 = this->field_05C0;
  if (iVar5 == 0) {
LAB_00475545:
    iVar5 = this->vfunc_D8();
    return -(uint)(iVar5 != 0);
  }
  if ((iVar5 == 1) || (iVar5 == 2)) {
    iVar18 = this->field_05C4;
    if (iVar18 == 0) {
      local_EAX_72 = sub_00460360(this);
      return local_EAX_72;
    }
    if (((((iVar18 == 1) || (iVar18 == 2)) || (iVar18 == 3)) || ((iVar18 == 5 || (iVar18 == 6)))) ||
       (iVar18 == 7)) {
      this->field_0076 = 1;
      iVar5 = this->vfunc_D8();
      return -(uint)(iVar5 != 0);
    }
    if (iVar18 == 4) {
      local_1c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_18,&local_14);
      uVar6 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar6;
      iVar5 = (uVar6 >> 0x10) % 7 - 3;
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
          uVar2 = *puVar7;
          bVar20 = 0;
          sVar19 = 0;
          iVar18 = -1;
          local_20 = *(short *)(puVar7 + 1);
          sVar17 = 0;
          sVar16 = 0;
          sVar15 = 0;
          sVar14 = 0;
          sVar13 = 0;
          sVar12 = 0;
          local_24 = uVar2;
          if (DAT_0080732c == 1) {
            sVar12 = 0;
            sVar13 = 0;
            sVar14 = 0;
            sVar15 = 0;
            sVar16 = 0;
            sVar17 = 0;
            sVar19 = 0;
            bVar20 = 0;
            lVar11 = Library::MSVCRT::__ftol();
            iVar8 = (int)local_20 + this->field_0045 + local_c + (int)(short)lVar11;
            iVar9 = (int)this->field_0043 - (int)STPiece<2,2>(local_24);
            iVar10 = (int)(short)local_24 + iVar5 + this->field_0041;
          }
          else {
            iVar8 = (int)local_20 + local_c + this->field_0045;
            STPiece<2,2>(local_24) = (short)((uint)uVar2 >> 0x10);
            iVar9 = (int)this->field_0043 - (int)STPiece<2,2>(local_24);
            STPiece<0,2>(local_24) = (short)uVar2;
            iVar10 = (int)(short)local_24 + iVar5 + this->field_0041;
          }
          TraksClassTy::TraksCreate
                    (g_traksClass_00802A7C,1,2,7,iVar10,iVar9 + ((uVar6 >> 0x10) % 7 - 3),iVar8,
                     sVar12,sVar13,sVar14,sVar15,sVar16,sVar17,iVar18,sVar19,bVar20);
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
        iVar5 = this->vfunc_D8();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
      goto LAB_00475545;
    }
  }
  if (iVar5 == 3) {
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

