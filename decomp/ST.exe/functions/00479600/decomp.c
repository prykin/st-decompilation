#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Teleport */

int __thiscall STBoatC::Teleport(STBoatC *this,int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  short *psVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined2 uVar6;
  short sVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  int iVar16;
  longlong lVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  byte bVar23;
  uint uVar24;
  undefined4 local_30 [2];
  undefined4 local_28;
  short local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 *local_10;
  int local_c;
  STWorldObject *local_8;

  local_8 = (STWorldObject *)0x0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    this->field_0635 = this->field_0405;
    this->field_0639 = this->field_0409;
    this->field_063B = this->field_040B;
    this->field_063D = this->field_040D;
    this->field_0643 = this->field_040F;
    this->field_0645 = this->field_0411;
    this->field_0647 = this->field_0413;
    this->field_064D = 0;
    iVar9 = this->vfunc_D8();
    if (iVar9 != 0) {
      return -1;
    }
    iVar9 = this->field_0635;
    if (iVar9 == 0) {
      sVar7 = this->field_0639;
      sVar18 = this->field_063D;
      sVar15 = this->field_063B;
      if (((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar15 < 0)) ||
          ((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)))) || (g_worldGrid.sizeZ <= sVar18)) {
        local_8 = (STWorldObject *)0x0;
      }
      else {
        local_8 = g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)sVar18 + (int)sVar15 * (int)g_worldGrid.sizeX
                   + (int)sVar7].objects[0];
      }
      if (local_8 == (STWorldObject *)0x0) {
        return 0;
      }
      iVar9 = local_8->GetObjectTypeId();
      if (iVar9 != 0x37) {
        return 0;
      }
      this->field_063F = *(undefined4 *)&local_8->field_0x18;
    }
    else {
      if (iVar9 != 1) {
        if (iVar9 != 2) {
          iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x351b,0,0,
                                     "%s","STBoatC::Teleport invalid type of teleportation");
          if (iVar9 == 0) {
            return 0;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
        psVar3 = &this->field_065B;
        this->field_001C = uVar11;
        puVar1 = &this->field_0x657;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        thunk_FUN_004b2520(this->field_0024,*(int *)((int)this->field_06CB + 0x2c),
                           (int)this->field_0643,(int)this->field_0645,(int)this->field_0647,
                           (undefined4 *)puVar1,(undefined4 *)&this->field_0x659,
                           (undefined4 *)psVar3,uVar11 >> 0x10,&this->field_064D);
        if (*(short *)puVar1 < 0) {
          return 0;
        }
        if (*(short *)&this->field_0x659 < 0) {
          return 0;
        }
        if (*psVar3 < 0) {
          return 0;
        }
        this->field_0742 = 1;
        this->field_063F = 0;
        this->field_0649 = 0;
        if (DAT_00800bcc == (void *)0x0) {
          thunk_FUN_004d0f00();
        }
        thunk_FUN_004d0970(DAT_00800bcc,(int)*(short *)puVar1,(int)*(short *)&this->field_0x659,
                           (int)*psVar3);
        *(undefined4 *)&this->field_0x663 = 5;
        *(undefined4 *)&this->field_0x667 = 0;
        return 2;
      }
      sVar7 = this->field_0639;
      sVar18 = this->field_063D;
      sVar15 = this->field_063B;
      if (((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
         ((sVar15 < 0 ||
          (((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)) || (g_worldGrid.sizeZ <= sVar18)))))) {
        local_8 = (STWorldObject *)0x0;
      }
      else {
        local_8 = g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)sVar18 + (int)sVar15 * (int)g_worldGrid.sizeX
                   + (int)sVar7].objects[0];
      }
      if (local_8 == (STWorldObject *)0x0) {
        return 0;
      }
      iVar9 = local_8->GetObjectTypeId();
      if (iVar9 != 0x6c) {
        return 0;
      }
      this->field_063F = *(undefined4 *)&local_8->field_0x18;
      sVar7 = this->field_0643;
      sVar18 = this->field_0647;
      sVar15 = this->field_0645;
      if (((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
         (((sVar15 < 0 || ((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)))) ||
          (g_worldGrid.sizeZ <= sVar18)))) {
        local_8 = (STWorldObject *)0x0;
      }
      else {
        local_8 = g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)sVar18 + (int)sVar15 * (int)g_worldGrid.sizeX
                   + (int)sVar7].objects[0];
      }
      if (local_8 == (STWorldObject *)0x0) {
        return 0;
      }
      iVar9 = local_8->GetObjectTypeId();
      if (iVar9 != 0x6c) {
        return 0;
      }
      this->field_0649 = *(undefined4 *)&local_8->field_0x18;
    }
    *(undefined4 *)&this->field_0x663 = 0;
    *(undefined4 *)&this->field_0x667 = 0;
    this->field_00B7 = 3;
    sub_00481520(this,(int)this->field_0639,(int)this->field_063B,this->field_063D + 1);
  }
  else {
    iVar9 = *(int *)&this->field_0x663;
    if (iVar9 == 0) {
      iVar9 = sub_00460260(this,2);
      switch(iVar9) {
      case 0:
        this->field_00B7 = 0;
        if (this->field_0635 == 1) {
          sVar7 = this->field_0643;
          sVar18 = this->field_0647;
          sVar15 = this->field_0645;
          if ((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
              ((sVar15 < 0 || ((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)))))) ||
             (g_worldGrid.sizeZ <= sVar18)) {
            local_8 = (STWorldObject *)0x0;
          }
          else {
            local_8 = g_worldGrid.cells
                      [(int)g_worldGrid.planeStride * (int)sVar18 +
                       (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0];
          }
          if (local_8 == (STWorldObject *)0x0) {
            return 0;
          }
          if (*(int *)&local_8->field_0x18 != this->field_0649) {
            return 0;
          }
          iVar9 = (*local_8->vtable[5].slots_00_28[2])();
          if (iVar9 == 0) {
            return 0;
          }
        }
        sVar7 = this->field_0639;
        sVar18 = this->field_063D;
        sVar15 = this->field_063B;
        if (((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar15 < 0)) ||
            ((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)))) || (g_worldGrid.sizeZ <= sVar18)) {
          local_8 = (STWorldObject *)0x0;
        }
        else {
          local_8 = g_worldGrid.cells
                    [(int)g_worldGrid.planeStride * (int)sVar18 +
                     (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0];
        }
        if (local_8 == (STWorldObject *)0x0) {
          return 0;
        }
        if (*(int *)&local_8->field_0x18 != this->field_063F) {
          return 0;
        }
        iVar9 = (*local_8->vtable[5].slots_00_28[2])();
        if (iVar9 == 0) {
          return 0;
        }
        iVar9 = sub_004939B0(this,(short *)&this->field_0x651,(short *)&this->field_0x653,
                             (short *)&this->field_0x655);
        if ((iVar9 != 1) || (iVar9 = thunk_FUN_004e91e0(local_8,this), iVar9 != 1)) {
LAB_00479e39:
          *(undefined4 *)&this->field_0x663 = 1;
          *(undefined4 *)&this->field_0x65d = 0;
          iVar9 = Defence(this,0);
          if (iVar9 != -1) {
            return 2;
          }
          return -1;
        }
        *(undefined4 *)&this->field_0x663 = 2;
LAB_0047b2dc:
        iVar9 = (int)*(short *)&this->field_0x655;
        sVar18 = *(short *)&this->field_0x653;
        sVar7 = *(short *)&this->field_0x651;
        break;
      case 1:
        sVar7 = this->field_0639;
        sVar18 = this->field_063D;
        sVar15 = this->field_063B;
        if ((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
            ((sVar15 < 0 || ((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)))))) ||
           (g_worldGrid.sizeZ <= sVar18)) {
          local_8 = (STWorldObject *)0x0;
        }
        else {
          local_8 = g_worldGrid.cells
                    [(int)g_worldGrid.planeStride * (int)sVar18 +
                     (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0];
        }
        if (((local_8 != (STWorldObject *)0x0) && (*(int *)&local_8->field_0x18 == this->field_063F)
            ) && (iVar9 = (*local_8->vtable[5].slots_00_28[2])(), iVar9 != 0)) {
          if (this->field_0635 != 1) {
            return 2;
          }
          sVar7 = this->field_0643;
          sVar18 = this->field_0647;
          sVar15 = this->field_0645;
          if (((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
             (((sVar15 < 0 || ((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)))) ||
              (g_worldGrid.sizeZ <= sVar18)))) {
            local_8 = (STWorldObject *)0x0;
          }
          else {
            local_8 = g_worldGrid.cells
                      [(int)g_worldGrid.planeStride * (int)sVar18 +
                       (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0];
          }
          if (((local_8 != (STWorldObject *)0x0) &&
              (*(int *)&local_8->field_0x18 == this->field_0649)) &&
             (iVar9 = (*local_8->vtable[5].slots_00_28[2])(), iVar9 != 0)) {
            return 2;
          }
        }
        sub_004602B0(this);
        this->field_00B7 = 0;
        return 0;
      default:
        goto switchD_00479647_caseD_2;
      case 3:
        sVar18 = this->field_063B;
        sVar7 = this->field_0639;
        iVar9 = this->field_063D + 1;
        break;
      case -1:
        iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3525,0,0,"%s",
                                   "STBoatC::Teleport, TELEPORT_MOVEIN error");
        if (iVar9 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar9 = 0x3525;
LAB_00479ba6:
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar9)
        ;
        return 0xffff;
      }
    }
    else {
      if (iVar9 == 1) {
        *(int *)&this->field_0x65d = *(int *)&this->field_0x65d + 1;
        iVar9 = Defence(this,2);
        if (iVar9 == -1) {
          return -1;
        }
        if (this->field_082E != 0) {
          return 2;
        }
        if (this->field_048B != 0xffff) {
          return 2;
        }
        if (*(int *)&this->field_0x65d % 10 != 0) {
          return 2;
        }
        if (this->field_0635 == 1) {
          sVar7 = this->field_0643;
          sVar18 = this->field_0647;
          sVar15 = this->field_0645;
          if (((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar15 < 0)) ||
              ((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)))) || (g_worldGrid.sizeZ <= sVar18)) {
            local_8 = (STWorldObject *)0x0;
          }
          else {
            local_8 = g_worldGrid.cells
                      [(int)g_worldGrid.planeStride * (int)sVar18 +
                       (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0];
          }
          if (local_8 == (STWorldObject *)0x0) {
            return 0;
          }
          if (*(int *)&local_8->field_0x18 != this->field_0649) {
            return 0;
          }
          iVar9 = (*local_8->vtable[5].slots_00_28[2])();
          if (iVar9 == 0) {
            return 0;
          }
        }
        sVar7 = this->field_0639;
        sVar18 = this->field_063D;
        sVar15 = this->field_063B;
        if (((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
           ((sVar15 < 0 ||
            (((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)) || (g_worldGrid.sizeZ <= sVar18)))))) {
          local_8 = (STWorldObject *)0x0;
        }
        else {
          local_8 = g_worldGrid.cells
                    [(int)sVar18 * (int)g_worldGrid.planeStride +
                     (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0];
        }
        if (local_8 == (STWorldObject *)0x0) {
          return 0;
        }
        if (*(int *)&local_8->field_0x18 != this->field_063F) {
          return 0;
        }
        iVar9 = (*local_8->vtable[5].slots_00_28[2])();
        if (iVar9 == 0) {
          return 0;
        }
        iVar9 = sub_004939B0(this,(short *)&this->field_0x651,(short *)&this->field_0x653,
                             (short *)&this->field_0x655);
        if (iVar9 != 1) {
          return 2;
        }
        iVar9 = thunk_FUN_004e91e0(local_8,this);
        if (iVar9 != 1) {
          return 2;
        }
        *(undefined4 *)&this->field_0x663 = 2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 != 3) {
            if (iVar9 == 4) {
              if (*(int *)&this->field_0x667 == 0) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar9 = *(int *)((int)this->field_06CB + 0x2c);
                if ((((iVar9 == 7) || (iVar9 == 0x13)) || (iVar9 == 0x1b)) &&
                   (((AnonShape_005EFAE0_B406B78B *)this->field_07CA !=
                     (AnonShape_005EFAE0_B406B78B *)0x0 &&
                    (iVar9 = STPlaySystemC::sub_006E62D0
                                       (g_playSystem_00802A38,
                                        (AnonShape_005EFAE0_B406B78B *)this->field_07CA,
                                        (int *)&local_8), iVar9 != -4)))) {
                  iVar10 = (int)this->field_0045;
                  iVar9 = (int)this->field_0043;
                  iVar13 = (int)this->field_0041;
                  uVar24 = 0;
                  iVar14 = 0;
                  uVar11 = thunk_FUN_004ad650((STT3DSprC *)((int)&local_8[0xd].vtable + 1));
                }
                else {
                  iVar10 = (int)this->field_0045;
                  iVar9 = (int)this->field_0043;
                  iVar13 = (int)this->field_0041;
                  uVar24 = 0;
                  uVar11 = this->field_01ED;
                  iVar14 = 0;
                }
                thunk_FUN_006377b0(uVar11,iVar14,iVar13,iVar9,iVar10,uVar24);
                *(undefined4 *)&this->field_0x667 = 1;
                *(undefined4 *)&this->field_0x65d = 0;
              }
              if ((*(int *)&this->field_0x667 == 1) &&
                 (iVar9 = *(int *)&this->field_0x65d + 1, *(int *)&this->field_0x65d = iVar9,
                 iVar9 == 0x16)) {
                *(undefined4 *)&this->field_0x667 = 2;
                *(undefined4 *)&this->field_0x65d = 0;
                sub_0041C5A0(this);
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar9 = *(int *)((int)this->field_06CB + 0x2c);
                if (((iVar9 == 0xb) || (iVar9 == 0x23)) &&
                   ((this->field_021D == 1 && (this->field_0024 == (uint)DAT_0080874d)))) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected STPackTagged24(2, this->field_0018) == (((uint32_t)(this->field_0018) & 0x00ffffffu) | ((uint32_t)(2) << 24)) */
                  FUN_006e6780(this->field_0211,
                               CONCAT22(CONCAT11(2,(char)(this->field_0018 >> 0x10)),
                                        (short)this->field_0018));
                }
                thunk_FUN_004d0a80(DAT_00800bcc,(int)*(short *)&this->field_0x657,
                                   (int)*(short *)&this->field_0x659,(int)this->field_065B);
                thunk_FUN_00417a20(this,*(short *)&this->field_0x657,*(short *)&this->field_0x659,
                                   this->field_065B,1);
                sVar7 = (this->field_0643 + 1) * 0xc9;
                this->field_0041 = sVar7;
                sVar18 = (this->field_0645 + 1) * 0xc9;
                sVar15 = this->field_0647 * 200 + 300;
                this->field_0043 = sVar18;
                this->field_0045 = sVar15;
                local_20 = (int)sVar7;
                STT3DSprC::sub_004AD3C0
                          ((STT3DSprC *)&this->field_01D5,
                           (float)local_20 * _DAT_007904f8 * _DAT_007904f0,
                           (float)(int)sVar18 * _DAT_007904f8 * _DAT_007904f0,
                           (float)(int)sVar15 * _DAT_007904f8 * _DAT_007904f0);
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                TLOEmbryoTy::sub_0041C3F0
                          ((TLOEmbryoTy *)this,*(undefined **)((int)this->field_06CB + 0x3f));
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar9 = *(int *)((int)this->field_06CB + 0x2c);
                if ((((iVar9 == 7) || (iVar9 == 0x13)) || (iVar9 == 0x1b)) &&
                   (((AnonShape_005EFAE0_B406B78B *)this->field_07CA !=
                     (AnonShape_005EFAE0_B406B78B *)0x0 &&
                    (iVar9 = STPlaySystemC::sub_006E62D0
                                       (g_playSystem_00802A38,
                                        (AnonShape_005EFAE0_B406B78B *)this->field_07CA,
                                        (int *)&local_8), iVar9 != -4)))) {
                  iVar13 = (int)this->field_0045;
                  iVar9 = (int)this->field_0043;
                  iVar10 = (int)this->field_0041;
                  uVar24 = 0;
                  iVar14 = 0;
                  uVar11 = thunk_FUN_004ad650((STT3DSprC *)((int)&local_8[0xd].vtable + 1));
                  thunk_FUN_006377b0(uVar11,iVar14,iVar10,iVar9,iVar13,uVar24);
                  thunk_FUN_004ad430((STT3DSprC *)((int)&local_8[0xd].vtable + 1));
                }
                else {
                  thunk_FUN_006377b0(this->field_01ED,0,(int)this->field_0041,(int)this->field_0043,
                                     (int)this->field_0045,0);
                }
                thunk_FUN_004ad430((STT3DSprC *)&this->field_01D5);
              }
              if ((*(int *)&this->field_0x667 == 2) &&
                 (iVar9 = *(int *)&this->field_0x65d + 1, *(int *)&this->field_0x65d = iVar9,
                 iVar9 == 0x16)) {
                *(undefined4 *)&this->field_0x667 = 3;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar9 = *(int *)((int)this->field_06CB + 0x2c);
                *(undefined4 *)&this->field_0x65d = 0;
                if (((iVar9 == 7) || ((iVar9 == 0x13 || (iVar9 == 0x1b)))) &&
                   (((AnonShape_005EFAE0_B406B78B *)this->field_07CA !=
                     (AnonShape_005EFAE0_B406B78B *)0x0 &&
                    (iVar9 = STPlaySystemC::sub_006E62D0
                                       (g_playSystem_00802A38,
                                        (AnonShape_005EFAE0_B406B78B *)this->field_07CA,
                                        (int *)&local_8), iVar9 != -4)))) {
                  thunk_FUN_004ad460((void *)((int)&local_8[0xd].vtable + 1),0);
                }
                thunk_FUN_004ad460(&this->field_01D5,0);
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar9 = *(int *)((int)this->field_06CB + 0x2c);
                if ((((iVar9 == 0xb) || (iVar9 == 0x23)) && (this->field_021D == 1)) &&
                   (this->field_0024 == (uint)DAT_0080874d)) {
                  local_20 = (int)this->field_0041;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected STPackTagged24(2, this->field_0018) == (((uint32_t)(this->field_0018) & 0x00ffffffu) | ((uint32_t)(2) << 24)) */
                  FUN_006e6710(this->field_0211,(float)local_20 * _DAT_007904f8 * _DAT_007904f0,
                               (float)(int)this->field_0043 * _DAT_007904f8 * _DAT_007904f0,
                               (uint)((float)this->field_010D * _DAT_007904f8 + _DAT_007904f4),0x28,
                               CONCAT22(CONCAT11(2,(char)(this->field_0018 >> 0x10)),
                                        (short)this->field_0018));
                }
              }
              if ((*(int *)&this->field_0x667 == 3) &&
                 (iVar9 = *(int *)&this->field_0x65d + 1, *(int *)&this->field_0x65d = iVar9,
                 iVar9 == 10)) {
                *(undefined4 *)&this->field_0x663 = 6;
                *(undefined4 *)&this->field_0x667 = 0;
                this->field_0742 = 0;
              }
              goto cf_common_exit_0047ADB5;
            }
            if (iVar9 == 5) {
              if (*(int *)&this->field_0x667 == 0) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar9 = *(int *)((int)this->field_06CB + 0x2c);
                if ((((iVar9 == 7) || (iVar9 == 0x13)) || (iVar9 == 0x1b)) &&
                   (((AnonShape_005EFAE0_B406B78B *)this->field_07CA !=
                     (AnonShape_005EFAE0_B406B78B *)0x0 &&
                    (iVar9 = STPlaySystemC::sub_006E62D0
                                       (g_playSystem_00802A38,
                                        (AnonShape_005EFAE0_B406B78B *)this->field_07CA,
                                        (int *)&local_8), iVar9 != -4)))) {
                  iVar10 = (int)this->field_0045;
                  iVar9 = (int)this->field_0043;
                  iVar13 = (int)this->field_0041;
                  uVar24 = 0;
                  iVar14 = 0;
                  uVar11 = thunk_FUN_004ad650((STT3DSprC *)((int)&local_8[0xd].vtable + 1));
                }
                else {
                  iVar10 = (int)this->field_0045;
                  iVar9 = (int)this->field_0043;
                  iVar13 = (int)this->field_0041;
                  uVar24 = 0;
                  uVar11 = this->field_01ED;
                  iVar14 = 0;
                }
                thunk_FUN_006377b0(uVar11,iVar14,iVar13,iVar9,iVar10,uVar24);
                *(undefined4 *)&this->field_0x667 = 1;
                *(undefined4 *)&this->field_0x65d = 0;
              }
              if ((*(int *)&this->field_0x667 == 1) &&
                 (iVar9 = *(int *)&this->field_0x65d + 1, *(int *)&this->field_0x65d = iVar9,
                 iVar9 == 0x16)) {
                *(undefined4 *)&this->field_0x65d = 0;
                *(undefined4 *)&this->field_0x667 = 2;
                if (this->field_0635 == 2) {
                  iVar9 = this->field_071E + -10;
                  this->field_071E = iVar9;
                  if (iVar9 < 0) {
                    this->field_071E = 0;
                  }
                  if ((this->field_064D != 0) && (DAT_00811798 != (void *)0x0)) {
                    thunk_FUN_00620670(DAT_00811798,(int)this->field_0047,(int)this->field_0049,
                                       this->field_0024);
                  }
                  thunk_FUN_004ea6e0(this->field_0024,(int)*(short *)&this->field_0x657,
                                     (int)*(short *)&this->field_0x659,(int)this->field_065B);
                }
                sub_0041C5A0(this);
                thunk_FUN_004d0a80(DAT_00800bcc,(int)*(short *)&this->field_0x657,
                                   (int)*(short *)&this->field_0x659,(int)this->field_065B);
                thunk_FUN_00417a20(this,*(short *)&this->field_0x657,*(short *)&this->field_0x659,
                                   this->field_065B,1);
                local_20 = (int)this->field_0041;
                STT3DSprC::sub_004AD3C0
                          ((STT3DSprC *)&this->field_01D5,
                           (float)local_20 * _DAT_007904f8 * _DAT_007904f0,
                           (float)(int)this->field_0043 * _DAT_007904f8 * _DAT_007904f0,
                           (float)(int)this->field_0045 * _DAT_007904f8 * _DAT_007904f0);
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                TLOEmbryoTy::sub_0041C3F0
                          ((TLOEmbryoTy *)this,*(undefined **)((int)this->field_06CB + 0x3f));
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar9 = *(int *)((int)this->field_06CB + 0x2c);
                if ((((iVar9 == 7) || (iVar9 == 0x13)) || (iVar9 == 0x1b)) &&
                   (((AnonShape_005EFAE0_B406B78B *)this->field_07CA !=
                     (AnonShape_005EFAE0_B406B78B *)0x0 &&
                    (iVar9 = STPlaySystemC::sub_006E62D0
                                       (g_playSystem_00802A38,
                                        (AnonShape_005EFAE0_B406B78B *)this->field_07CA,
                                        (int *)&local_8), iVar9 != -4)))) {
                  iVar13 = (int)this->field_0045;
                  iVar9 = (int)this->field_0043;
                  iVar10 = (int)this->field_0041;
                  uVar24 = 0;
                  iVar14 = 0;
                  uVar11 = thunk_FUN_004ad650((STT3DSprC *)((int)&local_8[0xd].vtable + 1));
                  thunk_FUN_006377b0(uVar11,iVar14,iVar10,iVar9,iVar13,uVar24);
                  thunk_FUN_004ad430((STT3DSprC *)((int)&local_8[0xd].vtable + 1));
                }
                else {
                  thunk_FUN_006377b0(this->field_01ED,0,(int)this->field_0041,(int)this->field_0043,
                                     (int)this->field_0045,0);
                }
                thunk_FUN_004ad430((STT3DSprC *)&this->field_01D5);
              }
              if ((*(int *)&this->field_0x667 == 2) &&
                 (iVar9 = *(int *)&this->field_0x65d + 1, *(int *)&this->field_0x65d = iVar9,
                 iVar9 == 0x16)) {
                *(undefined4 *)&this->field_0x667 = 3;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar9 = *(int *)((int)this->field_06CB + 0x2c);
                *(undefined4 *)&this->field_0x65d = 0;
                if (((iVar9 == 7) || ((iVar9 == 0x13 || (iVar9 == 0x1b)))) &&
                   (((AnonShape_005EFAE0_B406B78B *)this->field_07CA !=
                     (AnonShape_005EFAE0_B406B78B *)0x0 &&
                    (iVar9 = STPlaySystemC::sub_006E62D0
                                       (g_playSystem_00802A38,
                                        (AnonShape_005EFAE0_B406B78B *)this->field_07CA,
                                        (int *)&local_8), iVar9 != -4)))) {
                  thunk_FUN_004ad460((void *)((int)&local_8[0xd].vtable + 1),0);
                }
                thunk_FUN_004ad460(&this->field_01D5,0);
              }
              if ((*(int *)&this->field_0x667 == 3) &&
                 (iVar9 = *(int *)&this->field_0x65d + 1, *(int *)&this->field_0x65d = iVar9,
                 iVar9 == 10)) {
                sVar7 = this->field_0639;
                sVar18 = this->field_063D;
                sVar15 = this->field_063B;
                this->field_0742 = 0;
                if ((sVar7 < 0) ||
                   ((((g_worldGrid.sizeX <= sVar7 || (sVar15 < 0)) || (g_worldGrid.sizeY <= sVar15))
                    || ((sVar18 < 0 || (g_worldGrid.sizeZ <= sVar18)))))) {
                  local_8 = (STWorldObject *)0x0;
                }
                else {
                  local_8 = g_worldGrid.cells
                            [(int)sVar18 * (int)g_worldGrid.planeStride +
                             (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0];
                }
                if (((local_8 != (STWorldObject *)0x0) &&
                    (*(int *)&local_8->field_0x18 == this->field_063F)) &&
                   (iVar9 = (*local_8->vtable[5].slots_00_28[2])(), iVar9 != 0)) {
                  thunk_FUN_004e95c0(local_8,this);
                }
                iVar9 = this->vfunc_D8();
                if (iVar9 != 0) {
                  return -1;
                }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_0047acdc:
                iVar9 = thunk_FUN_004b2d10((byte)this->field_0024,
                                           *(int *)((int)this->field_06CB + 0x2c),
                                           (int)this->field_005B,(int)this->field_005D);
                if (iVar9 == 0) {
                  return 0;
                }
                thunk_FUN_00495010(this,0xaf);
                return 0;
              }
              goto cf_common_exit_0047ADB5;
            }
            if (iVar9 != 6) {
              if (iVar9 != 7) {
                iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3744,0,0,
                                           "%s","STBoatC::Teleport - incorrect entry"
                                          );
                if (iVar9 == 0) {
                  return -1;
                }
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              iVar9 = sub_00460260(this,2);
              if (iVar9 == -1) {
                return -1;
              }
              if (iVar9 == 0) goto LAB_0047acdc;
              if (iVar9 != 3) {
                return 2;
              }
              uVar8 = *(short *)&this->field_0x655 + 1;
              sVar7 = *(short *)&this->field_0x653;
              sub_0048DFD0(this,*(short *)&this->field_0x651,sVar7,uVar8,
                           *(short *)&this->field_0x651,sVar7,(int *)(uint)uVar8,1,
                           (short *)&this->field_0x651,(short *)&this->field_0x653,
                           (short *)&this->field_0x655);
              goto LAB_0047b2dc;
            }
            if (*(int *)&this->field_0x667 == 0) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar9 = CONCAT22((short)((uint)this >> 0x10),*(short *)&this->field_0x659 * 0xc9) +
                      100;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              uVar6 = (*this->vtable->vfunc_10)
                                (this->field_0041,this->field_0043,
                                 CONCAT22((short)((uint)iVar9 >> 0x10),this->field_0045),
                                 *(short *)&this->field_0x657 * 0xc9 + 100,(short)iVar9,
                                 (ushort)(this->field_065B * 200) + 100);
              *(undefined2 *)&this->field_0x661 = uVar6;
              *(undefined4 *)&this->field_0x667 = 1;
            }
            if (*(int *)&this->field_0x667 == 1) {
              uVar11 = sub_004176C0(this,*(short *)&this->field_0x661);
              uVar11 = sub_00417910(this,(short)uVar11);
              if (uVar11 == 0xffffffff) {
                iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x36e3,0,0,
                                           "%s","STBoatC::Teleport TELEPORT_OMOVE 1"
                                          );
                if (iVar9 == 0) {
                  return -1;
                }
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              goto joined_r0x0047ada9;
            }
            if (*(int *)&this->field_0x667 == 2) {
              sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                           *(short *)&this->field_0x657 * 0xc9 + 100,
                           *(short *)&this->field_0x659 * 0xc9 + 100,this->field_065B * 200 + 100,
                           this->field_0061);
              *(undefined4 *)&this->field_0x667 = 3;
            }
            if (*(int *)&this->field_0x667 != 3) goto cf_common_exit_0047ADB5;
            local_14 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_18,&local_1c);
            uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar11;
            iVar9 = (uVar11 >> 0x10) % 7 - 3;
            uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar11;
            uVar24 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar24;
            local_20 = (uVar24 >> 0x10) % 7 - 3;
            if ((this->field_074A <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
               (local_c = 0, this->field_02BF != '\0')) {
              local_10 = (undefined4 *)&this->field_0x2b3;
              do {
                puVar12 = (undefined4 *)
                          thunk_FUN_0041dc40(local_30,(short)*local_10,*(ushort *)(local_10 + 1),
                                             this->field_006C);
                uVar4 = *puVar12;
                bVar23 = 0;
                sVar22 = 0;
                iVar10 = -1;
                local_24 = *(short *)(puVar12 + 1);
                sVar21 = 0;
                sVar20 = 0;
                sVar19 = 0;
                sVar15 = 0;
                sVar18 = 0;
                sVar7 = 0;
                local_28 = uVar4;
                if (DAT_0080732c == 1) {
                  sVar7 = 0;
                  sVar18 = 0;
                  sVar15 = 0;
                  sVar19 = 0;
                  sVar20 = 0;
                  sVar21 = 0;
                  sVar22 = 0;
                  bVar23 = 0;
                  lVar17 = Library::MSVCRT::__ftol();
                  iVar16 = (int)local_24 + this->field_0045 + local_20 + (int)(short)lVar17;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  iVar13 = (int)this->field_0043 - (int)local_28._2_2_;
                  iVar14 = (int)(short)local_28 + iVar9 + this->field_0041;
                }
                else {
                  iVar16 = (int)local_24 + local_20 + this->field_0045;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_28._2_2_ = (short)((uint)uVar4 >> 0x10);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  iVar13 = (int)this->field_0043 - (int)local_28._2_2_;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_28._0_2_ = (short)uVar4;
                  iVar14 = (int)(short)local_28 + iVar9 + this->field_0041;
                }
                TraksClassTy::TraksCreate
                          (g_traksClass_00802A7C,1,2,7,iVar14,iVar13 + ((uVar11 >> 0x10) % 7 - 3),
                           iVar16,sVar7,sVar18,sVar15,sVar19,sVar20,sVar21,iVar10,sVar22,bVar23);
                local_10 = (undefined4 *)((int)local_10 + 6);
                local_c = local_c + 1;
              } while (local_c < (int)(uint)(byte)this->field_02BF);
            }
            if (local_14 == -1) {
              iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x370a,0,0,
                                         "%s","STBoatC::Teleport TELEPORT_OMOVE 2");
              if (iVar9 == 0) {
                return -1;
              }
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            if (local_14 != 0) goto cf_common_exit_0047ADB5;
            sVar7 = this->field_0639;
            iVar9 = 0;
            sVar18 = this->field_063D;
            sVar15 = this->field_063B;
            if ((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar15 < 0)) ||
               (((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)) || (g_worldGrid.sizeZ <= sVar18)))) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              iVar9 = (int)sVar7;
              local_8 = g_worldGrid.cells
                        [(int)sVar18 * (int)g_worldGrid.planeStride +
                         (int)sVar15 * (int)g_worldGrid.sizeX + iVar9].objects[0];
            }
            if ((local_8 != (STWorldObject *)0x0) &&
               (iVar9 = *(int *)&local_8->field_0x18, iVar9 == this->field_063F)) {
              iVar10 = (*local_8->vtable[5].slots_00_28[2])();
              iVar9 = 0;
              if (iVar10 != 0) {
                iVar9 = thunk_FUN_004e95c0(local_8,this);
              }
            }
            sVar7 = this->field_0643;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            iVar9 = CONCAT22((short)((uint)iVar9 >> 0x10),sVar7);
            sVar18 = this->field_0647;
            sVar15 = this->field_0645;
            if (((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar15 < 0)) ||
                ((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)))) || (g_worldGrid.sizeZ <= sVar18)) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              iVar9 = (int)sVar7;
              local_8 = g_worldGrid.cells
                        [(int)sVar18 * (int)g_worldGrid.planeStride +
                         (int)sVar15 * (int)g_worldGrid.sizeX + iVar9].objects[0];
            }
            if ((local_8 == (STWorldObject *)0x0) ||
               (iVar9 = *(int *)&local_8->field_0x18, iVar9 != this->field_0649)) {
LAB_0047b1c5:
              sVar7 = this->field_0647 + 1;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar9 = sub_0048DFD0(this,this->field_0643,this->field_0645,sVar7,this->field_0643,
                                   this->field_0645,
                                   (int *)CONCAT22((short)((uint)iVar9 >> 0x10),sVar7),2,
                                   (short *)&this->field_0x651,(short *)&this->field_0x653,
                                   (short *)&this->field_0x655);
joined_r0x0047b202:
              if (iVar9 == 0) {
                *(short *)&this->field_0x651 = this->field_0047;
                *(short *)&this->field_0x653 = this->field_0049;
                *(short *)&this->field_0x655 = this->field_004B;
              }
            }
            else {
              iVar10 = (*local_8->vtable[5].slots_00_28[2])();
              iVar9 = 0;
              if (iVar10 == 0) goto LAB_0047b1c5;
              puVar1 = &this->field_0x655;
              puVar2 = &this->field_0x653;
              if (*(int *)&local_8[0x1d].field_0x18 != 0) {
                if (&this->field_0x651 != (undefined1 *)0x0) {
                  *(undefined4 *)&this->field_0x651 = *(undefined4 *)&local_8[0x1d].field_0x1c;
                }
                if (puVar2 != (undefined1 *)0x0) {
                  *(int *)puVar2 = local_8[0x1d].value_20;
                }
                if (puVar1 != (undefined1 *)0x0) {
                  *(STWorldObjectVTable **)puVar1 = local_8[0x1e].vtable;
                }
              }
              if (*(int *)&local_8[0x1d].field_0x18 == 0) {
                sVar7 = this->field_0647 + 1;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar9 = sub_0048DFD0(this,this->field_0643,this->field_0645,sVar7,this->field_0643,
                                     this->field_0645,
                                     (int *)CONCAT22((short)((uint)local_8 >> 0x10),sVar7),2,
                                     (short *)&this->field_0x651,(short *)puVar2,(short *)puVar1);
                goto joined_r0x0047b202;
              }
            }
            sub_00481520(this,(int)*(short *)&this->field_0x651,(int)*(short *)&this->field_0x653,
                         (int)*(short *)&this->field_0x655);
            sub_00460260(this,0);
            *(undefined4 *)&this->field_0x663 = 7;
cf_common_exit_0047ADB5:
            iVar9 = this->vfunc_D8();
            return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
          }
          if (*(int *)&this->field_0x667 == 0) {
            iVar10 = (ushort)(this->field_063D * 200) + 300;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            iVar9 = CONCAT22((short)((uint)iVar10 >> 0x10),this->field_063B + 1) * 0xc9;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            iVar13 = CONCAT22((short)((uint)iVar9 >> 0x10),this->field_0639 + 1);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            uVar6 = (*this->vtable->vfunc_10)
                              (this->field_0041,this->field_0043,
                               CONCAT22((short)((uint)(iVar13 * 0x19) >> 0x10),this->field_0045),
                               (short)(iVar13 * 0xc9),(short)iVar9,iVar10);
            *(undefined2 *)&this->field_0x661 = uVar6;
            *(undefined4 *)&this->field_0x667 = 1;
          }
          if (*(int *)&this->field_0x667 == 1) {
            uVar11 = sub_004176C0(this,*(short *)&this->field_0x661);
            uVar11 = sub_00417910(this,(short)uVar11);
            if (uVar11 == 0xffffffff) {
              iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x35f4,0,0,
                                         "%s","STBoatC::Teleport TELEPORT_PMOVE 1");
              if (iVar9 == 0) {
                return -1;
              }
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
joined_r0x0047ada9:
            if (uVar11 == 0) {
              *(undefined4 *)&this->field_0x667 = 2;
            }
            goto cf_common_exit_0047ADB5;
          }
          if (*(int *)&this->field_0x667 == 2) {
            sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                         (this->field_0639 + 1) * 0xc9,(this->field_063B + 1) * 0xc9,
                         this->field_063D * 200 + 300,this->field_0061);
            *(undefined4 *)&this->field_0x667 = 3;
          }
          if (*(int *)&this->field_0x667 != 3) goto cf_common_exit_0047A369;
          local_14 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_20,&local_1c);
          uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar11;
          iVar9 = (uVar11 >> 0x10) % 7 - 3;
          uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar11;
          uVar24 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar24;
          local_18 = (uVar24 >> 0x10) % 7 - 3;
          if ((this->field_074A <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
             (local_c = 0, this->field_02BF != '\0')) {
            local_10 = (undefined4 *)&this->field_0x2b3;
            do {
              puVar12 = (undefined4 *)
                        thunk_FUN_0041dc40(local_30,(short)*local_10,*(ushort *)(local_10 + 1),
                                           this->field_006C);
              uVar4 = *puVar12;
              bVar23 = 0;
              sVar22 = 0;
              iVar10 = -1;
              local_24 = *(short *)(puVar12 + 1);
              sVar21 = 0;
              sVar20 = 0;
              sVar19 = 0;
              sVar15 = 0;
              sVar18 = 0;
              sVar7 = 0;
              local_28 = uVar4;
              if (DAT_0080732c == 1) {
                sVar7 = 0;
                sVar18 = 0;
                sVar15 = 0;
                sVar19 = 0;
                sVar20 = 0;
                sVar21 = 0;
                sVar22 = 0;
                bVar23 = 0;
                lVar17 = Library::MSVCRT::__ftol();
                iVar16 = (int)local_24 + this->field_0045 + local_18 + (int)(short)lVar17;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar13 = (int)this->field_0043 - (int)local_28._2_2_;
                iVar14 = (int)(short)local_28 + iVar9 + this->field_0041;
              }
              else {
                iVar16 = (int)local_24 + local_18 + this->field_0045;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_28._2_2_ = (short)((uint)uVar4 >> 0x10);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar13 = (int)this->field_0043 - (int)local_28._2_2_;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_28._0_2_ = (short)uVar4;
                iVar14 = (int)(short)local_28 + iVar9 + this->field_0041;
              }
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,iVar14,iVar13 + ((uVar11 >> 0x10) % 7 - 3),
                         iVar16,sVar7,sVar18,sVar15,sVar19,sVar20,sVar21,iVar10,sVar22,bVar23);
              local_10 = (undefined4 *)((int)local_10 + 6);
              local_c = local_c + 1;
            } while (local_c < (int)(uint)(byte)this->field_02BF);
          }
          if (local_14 == -1) {
            iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x361b,0,0,
                                       "%s","STBoatC::Teleport TELEPORT_PMOVE 2");
            if (iVar9 == 0) {
              return -1;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          if (local_14 != 0) goto cf_common_exit_0047A369;
          if (this->field_0635 == 1) {
            sVar7 = this->field_0643;
            sVar18 = this->field_0647;
            sVar15 = this->field_0645;
            if ((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar15 < 0)) ||
               (((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)) || (g_worldGrid.sizeZ <= sVar18)))) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              local_8 = g_worldGrid.cells
                        [(int)sVar18 * (int)g_worldGrid.planeStride +
                         (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0];
            }
            if (((local_8 != (STWorldObject *)0x0) &&
                (*(int *)&local_8->field_0x18 == this->field_0649)) &&
               ((iVar9 = (*local_8->vtable[5].slots_00_28[2])(), iVar9 != 0 &&
                ((*(int *)&local_8[0x21].field_0x10 == 0 && (*(int *)&local_8[0x10].field_0x5 != 6))
                )))) goto LAB_0047a385;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = g_playSystem_00802A38->field_00E4;
          }
          else {
LAB_0047a385:
            sVar7 = this->field_0639;
            sVar18 = this->field_063D;
            sVar15 = this->field_063B;
            if (((sVar7 < 0) ||
                (((g_worldGrid.sizeX <= sVar7 || (sVar15 < 0)) || (g_worldGrid.sizeY <= sVar15))))
               || ((sVar18 < 0 || (g_worldGrid.sizeZ <= sVar18)))) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              local_8 = g_worldGrid.cells
                        [(int)sVar18 * (int)g_worldGrid.planeStride +
                         (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0];
            }
            if (((local_8 != (STWorldObject *)0x0) &&
                (*(int *)&local_8->field_0x18 == this->field_063F)) &&
               ((iVar9 = (*local_8->vtable[5].slots_00_28[2])(), iVar9 != 0 &&
                ((*(int *)&local_8[0x21].field_0x10 == 0 && (*(int *)&local_8[0x10].field_0x5 != 6))
                )))) {
              this->field_0742 = 1;
              thunk_FUN_004e9650(local_8,(undefined4 *)&this->field_0x657,
                                 (undefined4 *)&this->field_0x659,(undefined4 *)&this->field_065B);
              thunk_FUN_004e96c0(local_8,(int *)this->field_0018);
              thunk_FUN_004d0970(DAT_00800bcc,(int)*(short *)&this->field_0x657,
                                 (int)*(short *)&this->field_0x659,(int)this->field_065B);
              *(undefined4 *)&this->field_0x667 = 0;
              *(uint *)&this->field_0x663 = (this->field_0635 != 1) + 4;
              goto cf_common_exit_0047A369;
            }
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = g_playSystem_00802A38->field_00E4;
          }
          CmdToObj(this,CASE_3,(uint *)&param_1);
cf_common_exit_0047A369:
          iVar9 = this->vfunc_D8();
          return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
        }
        iVar9 = sub_00460260(this,2);
        switch(iVar9) {
        case 0:
          if (this->field_0635 == 1) {
            sVar7 = this->field_0643;
            sVar18 = this->field_0647;
            sVar15 = this->field_0645;
            if (((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
               ((sVar15 < 0 ||
                (((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)) || (g_worldGrid.sizeZ <= sVar18)))))
               ) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              local_8 = g_worldGrid.cells
                        [(int)sVar18 * (int)g_worldGrid.planeStride +
                         (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0];
            }
            if (local_8 == (STWorldObject *)0x0) {
              return 0;
            }
            if (*(int *)&local_8->field_0x18 != this->field_0649) {
              return 0;
            }
            iVar9 = (*local_8->vtable[5].slots_00_28[2])();
            if (iVar9 == 0) {
              return 0;
            }
          }
          sVar7 = this->field_0639;
          sVar18 = this->field_063D;
          sVar15 = this->field_063B;
          if (((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
             (((sVar15 < 0 || ((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)))) ||
              (g_worldGrid.sizeZ <= sVar18)))) {
            local_8 = (STWorldObject *)0x0;
          }
          else {
            local_8 = g_worldGrid.cells
                      [(int)sVar18 * (int)g_worldGrid.planeStride +
                       (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0];
          }
          if (local_8 == (STWorldObject *)0x0) {
            return 0;
          }
          if (*(int *)&local_8->field_0x18 != this->field_063F) {
            return 0;
          }
          iVar9 = (*local_8->vtable[5].slots_00_28[2])();
          if (iVar9 == 0) {
            return 0;
          }
          if (((this->field_0047 == *(short *)&this->field_0x651) &&
              (this->field_0049 == *(short *)&this->field_0x653)) &&
             (this->field_004B == *(short *)&this->field_0x655)) {
            *(undefined4 *)&this->field_0x663 = 3;
            *(undefined4 *)&this->field_0x667 = 0;
            return 2;
          }
          thunk_FUN_004e95c0(local_8,this);
          return 0;
        case 1:
          sVar7 = this->field_0639;
          sVar18 = this->field_063D;
          sVar15 = this->field_063B;
          if (((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
             ((sVar15 < 0 ||
              (((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)) || (g_worldGrid.sizeZ <= sVar18))))))
          {
            local_8 = (STWorldObject *)0x0;
          }
          else {
            local_8 = g_worldGrid.cells
                      [(int)sVar18 * (int)g_worldGrid.planeStride +
                       (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0];
          }
          if (((local_8 != (STWorldObject *)0x0) &&
              (*(int *)&local_8->field_0x18 == this->field_063F)) &&
             (iVar9 = (*local_8->vtable[5].slots_00_28[2])(), iVar9 != 0)) {
            if (this->field_0635 != 1) {
              return 2;
            }
            sVar7 = this->field_0643;
            sVar18 = this->field_0647;
            sVar15 = this->field_0645;
            if (((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
               ((sVar15 < 0 ||
                (((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)) || (g_worldGrid.sizeZ <= sVar18)))))
               ) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              local_8 = g_worldGrid.cells
                        [(int)sVar18 * (int)g_worldGrid.planeStride +
                         (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0];
            }
            if (((local_8 != (STWorldObject *)0x0) &&
                (*(int *)&local_8->field_0x18 == this->field_0649)) &&
               (iVar9 = (*local_8->vtable[5].slots_00_28[2])(), iVar9 != 0)) {
              return 2;
            }
          }
          sub_004602B0(this);
          return 0;
        default:
          return 2;
        case 3:
          iVar9 = sub_004939B0(this,(short *)&this->field_0x651,(short *)&this->field_0x653,
                               (short *)&this->field_0x655);
          if (iVar9 != 1) {
            sVar7 = this->field_0639;
            sVar18 = this->field_063D;
            sVar15 = this->field_063B;
            if ((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar15 < 0)) ||
               (((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)) || (g_worldGrid.sizeZ <= sVar18)))) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              local_8 = g_worldGrid.cells
                        [(int)sVar18 * (int)g_worldGrid.planeStride +
                         (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0];
            }
            if (local_8 == (STWorldObject *)0x0) {
              return 0;
            }
            if (*(int *)&local_8->field_0x18 != this->field_063F) {
              return 0;
            }
            iVar9 = (*local_8->vtable[5].slots_00_28[2])();
            if (iVar9 == 0) {
              return 0;
            }
            thunk_FUN_004e95c0(local_8,this);
            goto LAB_00479e39;
          }
          break;
        case -1:
          iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3596,0,0,
                                     "%s","STBoatC::Teleport, TELEPORT_MOVETELE error");
          if (iVar9 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar9 = 0x3596;
          goto LAB_00479ba6;
        }
      }
      iVar9 = (int)*(short *)&this->field_0x655;
      sVar18 = *(short *)&this->field_0x653;
      sVar7 = *(short *)&this->field_0x651;
    }
    sub_00481520(this,(int)sVar7,(int)sVar18,iVar9);
  }
  sub_00460260(this,0);
switchD_00479647_caseD_2:
  return 2;
}

