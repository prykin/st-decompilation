#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Annih */

int __thiscall STBoatC::Annih(STBoatC *this,undefined4 *param_1)

{
  uint uVar1;
  STWorldObject *pSVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
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
  short sVar20;
  byte bVar21;
  STMessage local_64;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  undefined4 local_20;
  short local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == nullptr) || (param_1 == (undefined4 *)0x1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    sVar14 = this->field_0423;
    sVar15 = this->field_0425;
    sVar16 = this->field_0427;
    this->field_02C4 = 0;
    this->field_068B = sVar14;
    this->field_068D = sVar15;
    this->field_068F = sVar16;
    if (((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) || (sVar15 < 0)) ||
        ((g_worldGrid.sizeY <= sVar15 || (sVar16 < 0)))) ||
       ((g_worldGrid.sizeZ <= sVar16 ||
        (pSVar2 = STGridAt3D(g_worldGrid, sVar14, sVar15, sVar16).objects[0], pSVar2 == nullptr)))) {
LAB_0047d831:
      sub_004952E0(this);
      return 0;
    }
    iVar9 = pSVar2->GetObjectTypeId();
    if (iVar9 != 99) goto LAB_0047d831;
    this->field_0691 = this->field_005B;
    this->field_0693 = this->field_005D;
    this->field_0695 = this->field_005F;
    uVar3 = *(undefined4 *)&pSVar2->field_0x18;
    this->field_06A1 = 0;
    this->field_0697 = uVar3;
    this->field_06A5 = 0;
  }
  iVar9 = this->field_06A1;
  if (iVar9 == 0) {
    if (this->field_06A5 == 0) {
      iVar6 = (ushort)(this->field_068F * 200) + 0xfa;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar9 = CONCAT22((short)((uint)iVar6 >> 0x10),this->field_068D + 1) * 0xc9;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar11 = CONCAT22((short)((uint)iVar9 >> 0x10),this->field_068B + 1);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar5 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         CONCAT22((short)((uint)(iVar11 * 0x19) >> 0x10),this->field_0045),
                         (short)(iVar11 * 0xc9),(short)iVar9,iVar6);
      this->field_069B = uVar5;
      this->field_06A5 = 1;
    }
    if (this->field_06A5 == 1) {
      uVar7 = sub_004176C0(this,this->field_069B);
      uVar7 = sub_00417910(this,(short)uVar7);
      if (uVar7 == 0xffffffff) {
        iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3896,0,0,"%s",
                                   "STBoatC::Annih ANNIH_MOVE 1");
        if (iVar9 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return -1;
      }
      if (uVar7 == 0) {
        this->field_06A5 = 2;
      }
    }
    else {
      if (this->field_06A5 == 2) {
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                     (this->field_068B + 1) * 0xc9,(this->field_068D + 1) * 0xc9,
                     this->field_068F * 200 + 0xfa,this->field_0061);
        this->field_06A5 = 3;
      }
      if (this->field_06A5 == 3) {
        local_18 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_14,&local_10);
        uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar7;
        iVar9 = (uVar7 >> 0x10) % 7 - 3;
        uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar7;
        uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar1;
        local_8 = (uVar1 >> 0x10) % 7 - 3;
        if ((this->field_074A <= (int)PTR_00806724->entryCount / 2) &&
           (local_c = 0, this->field_02BF != '\0')) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (undefined4 *)&this->field_0x2b3;
          do {
            puVar8 = (undefined4 *)
                     thunk_FUN_0041dc40(local_28,(short)*param_1,*(ushort *)(param_1 + 1),
                                        this->field_006C);
            uVar3 = *puVar8;
            bVar21 = 0;
            sVar20 = 0;
            iVar6 = -1;
            local_1c = *(short *)(puVar8 + 1);
            sVar19 = 0;
            sVar18 = 0;
            sVar17 = 0;
            sVar16 = 0;
            sVar15 = 0;
            sVar14 = 0;
            local_20 = uVar3;
            if (DAT_0080732c == 1) {
              sVar14 = 0;
              sVar15 = 0;
              sVar16 = 0;
              sVar17 = 0;
              sVar18 = 0;
              sVar19 = 0;
              sVar20 = 0;
              bVar21 = 0;
              lVar13 = Library::MSVCRT::__ftol();
              iVar10 = (int)local_1c + this->field_0045 + local_8 + (int)(short)lVar13;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar11 = (int)this->field_0043 - (int)local_20._2_2_;
              iVar12 = (int)(short)local_20 + iVar9 + this->field_0041;
            }
            else {
              iVar10 = (int)local_1c + local_8 + this->field_0045;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_20._2_2_ = (short)((uint)uVar3 >> 0x10);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar11 = (int)this->field_0043 - (int)local_20._2_2_;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_20._0_2_ = (short)uVar3;
              iVar12 = (int)(short)local_20 + iVar9 + this->field_0041;
            }
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,iVar12,iVar11 + ((uVar7 >> 0x10) % 7 - 3),iVar10,
                       sVar14,sVar15,sVar16,sVar17,sVar18,sVar19,iVar6,sVar20,bVar21);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = (undefined4 *)((int)param_1 + 6);
            local_c = local_c + 1;
          } while (local_c < (int)(uint)(byte)this->field_02BF);
        }
        if (local_18 == -1) {
          iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x38bd,0,0,
                                     "%s","STBoatC::Annih ANNIH_MOVE 2");
          if (iVar9 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          return -1;
        }
        if (local_18 == 0) {
          sVar14 = this->field_068B;
          sVar15 = this->field_068F;
          sVar16 = this->field_068D;
          if (((((-1 < sVar14) && (sVar14 < g_worldGrid.sizeX)) && (-1 < sVar16)) &&
              ((sVar16 < g_worldGrid.sizeY && (-1 < sVar15)))) &&
             ((sVar15 < g_worldGrid.sizeZ &&
              ((pSVar2 = STGridAt3D(g_worldGrid, sVar14, sVar16, sVar15).objects[0],
               pSVar2 != nullptr && (*(int *)&pSVar2->field_0x18 == this->field_0697)))
              ))) {
            iVar9 = (*pSVar2->vtable[5].slots_00_28[2])();
            if (iVar9 == 1) {
              this->field_06A5 = 0;
              this->field_06A1 = 1;
              this->field_069D = 0;
              thunk_FUN_004b7d90((int *)pSVar2);
              goto LAB_0047d241;
            }
          }
          sub_004952E0(this);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (undefined4 *)g_playSystem_00802A38->field_00E4;
          CmdToObj(this,CASE_3,(uint *)&param_1);
        }
      }
    }
LAB_0047d241:
    iVar9 = this->vfunc_D8();
    return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
  }
  if (iVar9 == 1) {
    if (this->field_069D % 5 == 0) {
      sVar14 = this->field_068B;
      sVar15 = this->field_068F;
      sVar16 = this->field_068D;
      if ((((-1 < sVar14) && (sVar14 < g_worldGrid.sizeX)) &&
          ((-1 < sVar16 &&
           (((sVar16 < g_worldGrid.sizeY && (-1 < sVar15)) && (sVar15 < g_worldGrid.sizeZ)))))) &&
         ((pSVar2 = STGridAt3D(g_worldGrid, sVar14, sVar16, sVar15).objects[0],
          pSVar2 != nullptr && (*(int *)&pSVar2->field_0x18 == this->field_0697)))) {
        iVar9 = (*pSVar2->vtable[5].slots_00_28[2])();
        if (iVar9 == 1) {
          if (*(int *)&pSVar2[0x22].field_0x8 == 2) {
            this->field_06A1 = 2;
            this->field_069D = 0;
            thunk_FUN_006377b0(this->field_01ED,0,(int)this->field_0041,(int)this->field_0043,
                               (int)this->field_0045,0);
          }
          goto LAB_0047d7e6;
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (undefined4 *)g_playSystem_00802A38->field_00E4;
      CmdToObj(this,CASE_3,(uint *)&param_1);
    }
  }
  else {
    if (iVar9 != 2) {
      iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3902,0,0,"%s",
                                 "STBoatC::Annih incorrect entry");
      if (iVar9 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      return -1;
    }
    iVar9 = this->field_069D + 1;
    this->field_069D = iVar9;
    if (iVar9 == 0x16) {
      sVar14 = this->field_068B;
      sVar15 = this->field_068F;
      sVar16 = this->field_068D;
      if ((((-1 < sVar14) && (sVar14 < g_worldGrid.sizeX)) &&
          ((-1 < sVar16 &&
           (((sVar16 < g_worldGrid.sizeY && (-1 < sVar15)) && (sVar15 < g_worldGrid.sizeZ)))))) &&
         ((pSVar2 = STGridAt3D(g_worldGrid, sVar14, sVar16, sVar15).objects[0],
          pSVar2 != nullptr && (*(int *)&pSVar2->field_0x18 == this->field_0697)))) {
        iVar9 = (*pSVar2->vtable[5].slots_00_28[2])();
        if (iVar9 == 1) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          thunk_FUN_004b7e30(pSVar2,*(int *)((int)this->field_06CB + 0x2c),0,0);
          thunk_FUN_004b7de0((int *)pSVar2);
          thunk_FUN_004b7d50(pSVar2,this);
        }
      }
      local_30 = 1;
      local_2c = 1;
      local_64.arg0.ptr = &local_44;
      local_44 = 10000;
      local_40 = 0;
      local_3c = 0xfe;
      local_64.id = MESS_HITKILL;
      this->GetMessage(&local_64);
    }
  }
LAB_0047d7e6:
  iVar9 = this->vfunc_D8();
  return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
}

