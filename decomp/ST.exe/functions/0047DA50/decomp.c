#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackAnnih */

int __thiscall STBoatC::BackAnnih(STBoatC *this,int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined2 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int iVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
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

  sub_004952E0(this);
  if ((this->field_06A1 == 1) || (this->field_06A1 == 2)) {
    iVar8 = Annih(this,(undefined4 *)0x2);
    return iVar8;
  }
  iVar8 = this->field_06A5;
  if (((iVar8 == 0) || (iVar8 == 1)) || (iVar8 == 2)) {
    return 0;
  }
  if (iVar8 == 3) {
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    iVar8 = CONCAT22(extraout_var_00,this->field_0693 * 0xc9) + 100;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar4 = (*this->vtable->vfunc_10)
                      (this->field_0041,this->field_0043,
                       STReplaceLowWord((uint32_t)(iVar8), (uint16_t)(this->field_0045)),
                       this->field_0691 * 0xc9 + 100,(short)iVar8,
                       CONCAT22(extraout_var,this->field_0695 * 200) + 100);
    this->field_069B = uVar4;
    this->field_06A5 = 4;
  }
  if (this->field_06A5 == 4) {
    uVar5 = sub_004176C0(this,this->field_069B);
    uVar5 = sub_00417910(this,(short)uVar5);
    if (uVar5 == 0xffffffff) {
      iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3925,0,0,"%s",
                                 "STBoatC::BackAnnih 1");
      if (iVar8 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar8 = 0x3925;
LAB_0047ddc3:
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar8);
      return 0xffff;
    }
    if (uVar5 == 0) {
      this->field_06A5 = 5;
    }
  }
  else {
    if (this->field_06A5 == 5) {
      sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_0691 * 0xc9 + 100,this->field_0693 * 0xc9 + 100,
                   this->field_0695 * 200 + 100,this->field_0061);
      this->field_06A5 = 6;
    }
    if (this->field_06A5 == 6) {
      local_1c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_18,&local_14);
      uVar5 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar5;
      iVar8 = (uVar5 >> 0x10) % 7 - 3;
      uVar5 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar5;
      uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar1;
      local_c = (uVar1 >> 0x10) % 7 - 3;
      if ((this->field_074A <= (int)PTR_00806724->entryCount / 2) &&
         (local_10 = 0, this->field_02BF != '\0')) {
        local_8 = (undefined4 *)&this->field_0x2b3;
        do {
          puVar6 = (undefined4 *)
                   thunk_FUN_0041dc40(local_2c,(short)*local_8,*(ushort *)(local_8 + 1),
                                      this->field_006C);
          uVar2 = *puVar6;
          bVar20 = 0;
          sVar19 = 0;
          iVar18 = -1;
          local_20 = *(short *)(puVar6 + 1);
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
            iVar7 = (int)local_20 + this->field_0045 + local_c + (int)(short)lVar11;
            iVar9 = (int)this->field_0043 - (int)STPiece<2,2>(local_24);
            iVar10 = (int)(short)local_24 + iVar8 + this->field_0041;
          }
          else {
            iVar7 = (int)local_20 + local_c + this->field_0045;
            STPiece<2,2>(local_24) = (short)((uint)uVar2 >> 0x10);
            iVar9 = (int)this->field_0043 - (int)STPiece<2,2>(local_24);
            STPiece<0,2>(local_24) = (short)uVar2;
            iVar10 = (int)(short)local_24 + iVar8 + this->field_0041;
          }
          TraksClassTy::TraksCreate
                    (g_traksClass_00802A7C,1,2,7,iVar10,iVar9 + ((uVar5 >> 0x10) % 7 - 3),iVar7,
                     sVar12,sVar13,sVar14,sVar15,sVar16,sVar17,iVar18,sVar19,bVar20);
          local_8 = (undefined4 *)((int)local_8 + 6);
          local_10 = local_10 + 1;
        } while (local_10 < (int)(uint)(byte)this->field_02BF);
      }
      if (local_1c == -1) {
        iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x394c,0,0,"%s",
                                   "STBoatC::BackAnnih 2");
        if (iVar8 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar8 = 0x394c;
        goto LAB_0047ddc3;
      }
      if (local_1c == 0) {
        iVar8 = this->vfunc_D8();
        return -(uint)(iVar8 != 0);
      }
    }
  }
  iVar8 = this->vfunc_D8();
  return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
}

