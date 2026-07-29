#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Teleport */

int __thiscall STBoatC::Teleport(STBoatC *this,int param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  short *psVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined2 uVar7;
  short sVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int uVar11;
  int local_EAX_4422;
  int local_EAX_4951;
  int local_EAX_5437;
  short sVar16;
  int iVar17;
  longlong lVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  byte bVar24;
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
    iVar10 = this->vfunc_D8();
    if (iVar10 != 0) {
      return -1;
    }
    iVar10 = this->field_0635;
    if (iVar10 == 0) {
      sVar8 = this->field_0639;
      sVar19 = this->field_063D;
      sVar16 = this->field_063B;
      if (((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar16 < 0)) ||
          ((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)))) || (g_worldGrid.sizeZ <= sVar19)) {
        local_8 = (STWorldObject *)0x0;
      }
      else {
        local_8 = g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)sVar19 + (int)sVar16 * (int)g_worldGrid.sizeX
                   + (int)sVar8].objects[0];
      }
      if (local_8 == (STWorldObject *)0x0) {
        return 0;
      }
      iVar10 = local_8->GetObjectTypeId();
      if (iVar10 != 0x37) {
        return 0;
      }
      this->field_063F = *(undefined4 *)&local_8->field_0x18;
    }
    else {
      if (iVar10 != 1) {
        if (iVar10 != 2) {
          iVar10 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x351b,0,0,
                                      "%s","STBoatC::Teleport invalid type of teleportation");
          if (iVar10 == 0) {
            return 0;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
        psVar4 = &this->field_065B;
        this->field_001C = uVar12;
        puVar2 = &this->field_0x657;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        thunk_FUN_004b2520(this->field_0024,*(int *)((int)this->field_06CB + 0x2c),
                           (int)this->field_0643,(int)this->field_0645,(int)this->field_0647,
                           (undefined4 *)puVar2,(undefined4 *)&this->field_0x659,
                           (undefined4 *)psVar4,uVar12 >> 0x10,&this->field_064D);
        if (*(short *)puVar2 < 0) {
          return 0;
        }
        if (*(short *)&this->field_0x659 < 0) {
          return 0;
        }
        if (*psVar4 < 0) {
          return 0;
        }
        this->field_0742 = 1;
        this->field_063F = 0;
        this->field_0649 = 0;
        if (DAT_00800bcc == (void *)0x0) {
          thunk_FUN_004d0f00();
        }
        thunk_FUN_004d0970(DAT_00800bcc,(int)*(short *)puVar2,(int)*(short *)&this->field_0x659,
                           (int)*psVar4);
        *(undefined4 *)&this->field_0x663 = 5;
        *(undefined4 *)&this->field_0x667 = 0;
        return 2;
      }
      sVar8 = this->field_0639;
      sVar19 = this->field_063D;
      sVar16 = this->field_063B;
      if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
         ((sVar16 < 0 ||
          (((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))))) {
        local_8 = (STWorldObject *)0x0;
      }
      else {
        local_8 = g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)sVar19 + (int)sVar16 * (int)g_worldGrid.sizeX
                   + (int)sVar8].objects[0];
      }
      if (local_8 == (STWorldObject *)0x0) {
        return 0;
      }
      iVar10 = local_8->GetObjectTypeId();
      if (iVar10 != 0x6c) {
        return 0;
      }
      this->field_063F = *(undefined4 *)&local_8->field_0x18;
      sVar8 = this->field_0643;
      sVar19 = this->field_0647;
      sVar16 = this->field_0645;
      if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
         (((sVar16 < 0 || ((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)))) ||
          (g_worldGrid.sizeZ <= sVar19)))) {
        local_8 = (STWorldObject *)0x0;
      }
      else {
        local_8 = g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)sVar19 + (int)sVar16 * (int)g_worldGrid.sizeX
                   + (int)sVar8].objects[0];
      }
      if (local_8 == (STWorldObject *)0x0) {
        return 0;
      }
      iVar10 = local_8->GetObjectTypeId();
      if (iVar10 != 0x6c) {
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
    iVar10 = *(int *)&this->field_0x663;
    if (iVar10 == 0) {
      iVar10 = sub_00460260(this,2);
      switch(iVar10) {
      case 0:
        this->field_00B7 = 0;
        if (this->field_0635 == 1) {
          sVar8 = this->field_0643;
          sVar19 = this->field_0647;
          sVar16 = this->field_0645;
          if ((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
              ((sVar16 < 0 || ((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)))))) ||
             (g_worldGrid.sizeZ <= sVar19)) {
            local_8 = (STWorldObject *)0x0;
          }
          else {
            local_8 = g_worldGrid.cells
                      [(int)g_worldGrid.planeStride * (int)sVar19 +
                       (int)sVar16 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
          }
          if (local_8 == (STWorldObject *)0x0) {
            return 0;
          }
          if (*(int *)&local_8->field_0x18 != this->field_0649) {
            return 0;
          }
          iVar10 = (*local_8->vtable[5].slots_00_28[2])();
          if (iVar10 == 0) {
            return 0;
          }
        }
        sVar8 = this->field_0639;
        sVar19 = this->field_063D;
        sVar16 = this->field_063B;
        if (((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar16 < 0)) ||
            ((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)))) || (g_worldGrid.sizeZ <= sVar19)) {
          local_8 = (STWorldObject *)0x0;
        }
        else {
          local_8 = g_worldGrid.cells
                    [(int)g_worldGrid.planeStride * (int)sVar19 +
                     (int)sVar16 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
        }
        if (local_8 == (STWorldObject *)0x0) {
          return 0;
        }
        if (*(int *)&local_8->field_0x18 != this->field_063F) {
          return 0;
        }
        iVar10 = (*local_8->vtable[5].slots_00_28[2])();
        if (iVar10 == 0) {
          return 0;
        }
        iVar10 = sub_004939B0(this,(short *)&this->field_0x651,(short *)&this->field_0x653,
                              (short *)&this->field_0x655);
        if ((iVar10 != 1) || (iVar10 = thunk_FUN_004e91e0(local_8,this), iVar10 != 1)) {
LAB_00479e39:
          *(undefined4 *)&this->field_0x663 = 1;
          *(undefined4 *)&this->field_0x65d = 0;
          iVar10 = Defence(this,0);
          if (iVar10 != -1) {
            return 2;
          }
          return -1;
        }
        *(undefined4 *)&this->field_0x663 = 2;
LAB_0047b2dc:
        iVar10 = (int)*(short *)&this->field_0x655;
        sVar19 = *(short *)&this->field_0x653;
        sVar8 = *(short *)&this->field_0x651;
        break;
      case 1:
        sVar8 = this->field_0639;
        sVar19 = this->field_063D;
        sVar16 = this->field_063B;
        if ((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
            ((sVar16 < 0 || ((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)))))) ||
           (g_worldGrid.sizeZ <= sVar19)) {
          local_8 = (STWorldObject *)0x0;
        }
        else {
          local_8 = g_worldGrid.cells
                    [(int)g_worldGrid.planeStride * (int)sVar19 +
                     (int)sVar16 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
        }
        if (((local_8 != (STWorldObject *)0x0) && (*(int *)&local_8->field_0x18 == this->field_063F)
            ) && (iVar10 = (*local_8->vtable[5].slots_00_28[2])(), iVar10 != 0)) {
          if (this->field_0635 != 1) {
            return 2;
          }
          sVar8 = this->field_0643;
          sVar19 = this->field_0647;
          sVar16 = this->field_0645;
          if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
             (((sVar16 < 0 || ((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)))) ||
              (g_worldGrid.sizeZ <= sVar19)))) {
            local_8 = (STWorldObject *)0x0;
          }
          else {
            local_8 = g_worldGrid.cells
                      [(int)g_worldGrid.planeStride * (int)sVar19 +
                       (int)sVar16 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
          }
          if (((local_8 != (STWorldObject *)0x0) &&
              (*(int *)&local_8->field_0x18 == this->field_0649)) &&
             (iVar10 = (*local_8->vtable[5].slots_00_28[2])(), iVar10 != 0)) {
            return 2;
          }
        }
        sub_004602B0(this);
        this->field_00B7 = 0;
        return 0;
      default:
        goto switchD_00479647_caseD_2;
      case 3:
        sVar19 = this->field_063B;
        sVar8 = this->field_0639;
        iVar10 = this->field_063D + 1;
        break;
      case -1:
        iVar10 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3525,0,0,"%s"
                                    ,"STBoatC::Teleport, TELEPORT_MOVEIN error");
        if (iVar10 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar10 = 0x3525;
LAB_00479ba6:
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar10
                  );
        return 0xffff;
      }
    }
    else {
      if (iVar10 == 1) {
        *(int *)&this->field_0x65d = *(int *)&this->field_0x65d + 1;
        iVar10 = Defence(this,2);
        if (iVar10 == -1) {
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
          sVar8 = this->field_0643;
          sVar19 = this->field_0647;
          sVar16 = this->field_0645;
          if (((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar16 < 0)) ||
              ((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)))) || (g_worldGrid.sizeZ <= sVar19)) {
            local_8 = (STWorldObject *)0x0;
          }
          else {
            local_8 = g_worldGrid.cells
                      [(int)g_worldGrid.planeStride * (int)sVar19 +
                       (int)sVar16 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
          }
          if (local_8 == (STWorldObject *)0x0) {
            return 0;
          }
          if (*(int *)&local_8->field_0x18 != this->field_0649) {
            return 0;
          }
          iVar10 = (*local_8->vtable[5].slots_00_28[2])();
          if (iVar10 == 0) {
            return 0;
          }
        }
        sVar8 = this->field_0639;
        sVar19 = this->field_063D;
        sVar16 = this->field_063B;
        if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
           ((sVar16 < 0 ||
            (((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))))) {
          local_8 = (STWorldObject *)0x0;
        }
        else {
          local_8 = g_worldGrid.cells
                    [(int)sVar19 * (int)g_worldGrid.planeStride +
                     (int)sVar16 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
        }
        if (local_8 == (STWorldObject *)0x0) {
          return 0;
        }
        if (*(int *)&local_8->field_0x18 != this->field_063F) {
          return 0;
        }
        iVar10 = (*local_8->vtable[5].slots_00_28[2])();
        if (iVar10 == 0) {
          return 0;
        }
        iVar10 = sub_004939B0(this,(short *)&this->field_0x651,(short *)&this->field_0x653,
                              (short *)&this->field_0x655);
        if (iVar10 != 1) {
          return 2;
        }
        iVar10 = thunk_FUN_004e91e0(local_8,this);
        if (iVar10 != 1) {
          return 2;
        }
        *(undefined4 *)&this->field_0x663 = 2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 != 3) {
            if (iVar10 == 4) {
              if (*(int *)&this->field_0x667 == 0) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar10 = *(int *)((int)this->field_06CB + 0x2c);
                if ((((iVar10 == 7) || (iVar10 == 0x13)) || (iVar10 == 0x1b)) &&
                   ((this->field_07CA != (AnonShape_005EFAE0_B406B78B *)0x0 &&
                    (iVar10 = STPlaySystemC::sub_006E62D0
                                        (g_playSystem_00802A38,this->field_07CA,(int *)&local_8),
                    iVar10 != -4)))) {
                  iVar11 = (int)this->field_0045;
                  iVar10 = (int)this->field_0043;
                  iVar14 = (int)this->field_0041;
                  uVar12 = 0;
                  iVar15 = 0;
                  uVar11 = thunk_FUN_004ad650((STT3DSprC *)((int)&local_8[0xd].vtable + 1));
                }
                else {
                  iVar11 = (int)this->field_0045;
                  iVar10 = (int)this->field_0043;
                  iVar14 = (int)this->field_0041;
                  uVar12 = 0;
                  uVar11 = this->field_01ED;
                  iVar15 = 0;
                }
                thunk_FUN_006377b0(uVar11,iVar15,iVar14,iVar10,iVar11,uVar12);
                *(undefined4 *)&this->field_0x667 = 1;
                *(undefined4 *)&this->field_0x65d = 0;
              }
              if ((*(int *)&this->field_0x667 == 1) &&
                 (iVar10 = *(int *)&this->field_0x65d + 1, *(int *)&this->field_0x65d = iVar10,
                 iVar10 == 0x16)) {
                *(undefined4 *)&this->field_0x667 = 2;
                *(undefined4 *)&this->field_0x65d = 0;
                sub_0041C5A0(this);
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar10 = *(int *)((int)this->field_06CB + 0x2c);
                if (((iVar10 == 0xb) || (iVar10 == 0x23)) &&
                   ((this->field_021D == 1 && (this->field_0024 == (uint)DAT_0080874d)))) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  ST3DSMAPContext::sub_006E6780
                            (this->field_0211,
                             CONCAT22(CONCAT11(2,(char)((uint)this->field_0018 >> 0x10)),
                                      (short)this->field_0018));
                }
                thunk_FUN_004d0a80(DAT_00800bcc,(int)*(short *)&this->field_0x657,
                                   (int)*(short *)&this->field_0x659,(int)this->field_065B);
                thunk_FUN_00417a20(this,*(short *)&this->field_0x657,*(short *)&this->field_0x659,
                                   this->field_065B,1);
                sVar8 = (this->field_0643 + 1) * 0xc9;
                this->field_0041 = sVar8;
                sVar19 = (this->field_0645 + 1) * 0xc9;
                sVar16 = this->field_0647 * 200 + 300;
                this->field_0043 = sVar19;
                this->field_0045 = sVar16;
                local_20 = (int)sVar8;
                STT3DSprC::sub_004AD3C0
                          ((STT3DSprC *)&this->field_01D5,
                           (float)local_20 * _DAT_007904f8 * _DAT_007904f0,
                           (float)(int)sVar19 * _DAT_007904f8 * _DAT_007904f0,
                           (float)(int)sVar16 * _DAT_007904f8 * _DAT_007904f0);
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                TLOEmbryoTy::sub_0041C3F0
                          ((TLOEmbryoTy *)this,*(undefined **)((int)this->field_06CB + 0x3f));
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar10 = *(int *)((int)this->field_06CB + 0x2c);
                if ((((iVar10 == 7) || (iVar10 == 0x13)) || (iVar10 == 0x1b)) &&
                   ((this->field_07CA != (AnonShape_005EFAE0_B406B78B *)0x0 &&
                    (iVar10 = STPlaySystemC::sub_006E62D0
                                        (g_playSystem_00802A38,this->field_07CA,(int *)&local_8),
                    iVar10 != -4)))) {
                  iVar14 = (int)this->field_0045;
                  iVar10 = (int)this->field_0043;
                  iVar11 = (int)this->field_0041;
                  uVar12 = 0;
                  iVar15 = 0;
                  local_EAX_4422 = thunk_FUN_004ad650((STT3DSprC *)((int)&local_8[0xd].vtable + 1));
                  thunk_FUN_006377b0(local_EAX_4422,iVar15,iVar11,iVar10,iVar14,uVar12);
                  thunk_FUN_004ad430((STT3DSprC *)((int)&local_8[0xd].vtable + 1));
                }
                else {
                  thunk_FUN_006377b0(this->field_01ED,0,(int)this->field_0041,(int)this->field_0043,
                                     (int)this->field_0045,0);
                }
                thunk_FUN_004ad430((STT3DSprC *)&this->field_01D5);
              }
              if ((*(int *)&this->field_0x667 == 2) &&
                 (iVar10 = *(int *)&this->field_0x65d + 1, *(int *)&this->field_0x65d = iVar10,
                 iVar10 == 0x16)) {
                *(undefined4 *)&this->field_0x667 = 3;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar10 = *(int *)((int)this->field_06CB + 0x2c);
                *(undefined4 *)&this->field_0x65d = 0;
                if (((iVar10 == 7) || ((iVar10 == 0x13 || (iVar10 == 0x1b)))) &&
                   ((this->field_07CA != (AnonShape_005EFAE0_B406B78B *)0x0 &&
                    (iVar10 = STPlaySystemC::sub_006E62D0
                                        (g_playSystem_00802A38,this->field_07CA,(int *)&local_8),
                    iVar10 != -4)))) {
                  thunk_FUN_004ad460((void *)((int)&local_8[0xd].vtable + 1),0);
                }
                thunk_FUN_004ad460(&this->field_01D5,0);
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar10 = *(int *)((int)this->field_06CB + 0x2c);
                if ((((iVar10 == 0xb) || (iVar10 == 0x23)) && (this->field_021D == 1)) &&
                   (this->field_0024 == (uint)DAT_0080874d)) {
                  local_20 = (int)this->field_0041;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  ST3DSMAPContext::sub_006E6710
                            (this->field_0211,(float)local_20 * _DAT_007904f8 * _DAT_007904f0,
                             (float)(int)this->field_0043 * _DAT_007904f8 * _DAT_007904f0,
                             (uint)((float)this->field_010D * _DAT_007904f8 + _DAT_007904f4),0x28,
                             CONCAT22(CONCAT11(2,(char)((uint)this->field_0018 >> 0x10)),
                                      (short)this->field_0018));
                }
              }
              if ((*(int *)&this->field_0x667 == 3) &&
                 (iVar10 = *(int *)&this->field_0x65d + 1, *(int *)&this->field_0x65d = iVar10,
                 iVar10 == 10)) {
                *(undefined4 *)&this->field_0x663 = 6;
                *(undefined4 *)&this->field_0x667 = 0;
                this->field_0742 = 0;
              }
              goto cf_common_exit_0047ADB5;
            }
            if (iVar10 == 5) {
              if (*(int *)&this->field_0x667 == 0) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar10 = *(int *)((int)this->field_06CB + 0x2c);
                if ((((iVar10 == 7) || (iVar10 == 0x13)) || (iVar10 == 0x1b)) &&
                   ((this->field_07CA != (AnonShape_005EFAE0_B406B78B *)0x0 &&
                    (iVar10 = STPlaySystemC::sub_006E62D0
                                        (g_playSystem_00802A38,this->field_07CA,(int *)&local_8),
                    iVar10 != -4)))) {
                  iVar11 = (int)this->field_0045;
                  iVar10 = (int)this->field_0043;
                  iVar14 = (int)this->field_0041;
                  uVar12 = 0;
                  iVar15 = 0;
                  local_EAX_4951 = thunk_FUN_004ad650((STT3DSprC *)((int)&local_8[0xd].vtable + 1));
                }
                else {
                  iVar11 = (int)this->field_0045;
                  iVar10 = (int)this->field_0043;
                  iVar14 = (int)this->field_0041;
                  uVar12 = 0;
                  local_EAX_4951 = this->field_01ED;
                  iVar15 = 0;
                }
                thunk_FUN_006377b0(local_EAX_4951,iVar15,iVar14,iVar10,iVar11,uVar12);
                *(undefined4 *)&this->field_0x667 = 1;
                *(undefined4 *)&this->field_0x65d = 0;
              }
              if ((*(int *)&this->field_0x667 == 1) &&
                 (iVar10 = *(int *)&this->field_0x65d + 1, *(int *)&this->field_0x65d = iVar10,
                 iVar10 == 0x16)) {
                *(undefined4 *)&this->field_0x65d = 0;
                *(undefined4 *)&this->field_0x667 = 2;
                if (this->field_0635 == 2) {
                  iVar10 = this->field_071E + -10;
                  this->field_071E = iVar10;
                  if (iVar10 < 0) {
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
                iVar10 = *(int *)((int)this->field_06CB + 0x2c);
                if ((((iVar10 == 7) || (iVar10 == 0x13)) || (iVar10 == 0x1b)) &&
                   ((this->field_07CA != (AnonShape_005EFAE0_B406B78B *)0x0 &&
                    (iVar10 = STPlaySystemC::sub_006E62D0
                                        (g_playSystem_00802A38,this->field_07CA,(int *)&local_8),
                    iVar10 != -4)))) {
                  iVar14 = (int)this->field_0045;
                  iVar10 = (int)this->field_0043;
                  iVar11 = (int)this->field_0041;
                  uVar12 = 0;
                  iVar15 = 0;
                  local_EAX_5437 = thunk_FUN_004ad650((STT3DSprC *)((int)&local_8[0xd].vtable + 1));
                  thunk_FUN_006377b0(local_EAX_5437,iVar15,iVar11,iVar10,iVar14,uVar12);
                  thunk_FUN_004ad430((STT3DSprC *)((int)&local_8[0xd].vtable + 1));
                }
                else {
                  thunk_FUN_006377b0(this->field_01ED,0,(int)this->field_0041,(int)this->field_0043,
                                     (int)this->field_0045,0);
                }
                thunk_FUN_004ad430((STT3DSprC *)&this->field_01D5);
              }
              if ((*(int *)&this->field_0x667 == 2) &&
                 (iVar10 = *(int *)&this->field_0x65d + 1, *(int *)&this->field_0x65d = iVar10,
                 iVar10 == 0x16)) {
                *(undefined4 *)&this->field_0x667 = 3;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar10 = *(int *)((int)this->field_06CB + 0x2c);
                *(undefined4 *)&this->field_0x65d = 0;
                if (((iVar10 == 7) || ((iVar10 == 0x13 || (iVar10 == 0x1b)))) &&
                   ((this->field_07CA != (AnonShape_005EFAE0_B406B78B *)0x0 &&
                    (iVar10 = STPlaySystemC::sub_006E62D0
                                        (g_playSystem_00802A38,this->field_07CA,(int *)&local_8),
                    iVar10 != -4)))) {
                  thunk_FUN_004ad460((void *)((int)&local_8[0xd].vtable + 1),0);
                }
                thunk_FUN_004ad460(&this->field_01D5,0);
              }
              if ((*(int *)&this->field_0x667 == 3) &&
                 (iVar10 = *(int *)&this->field_0x65d + 1, *(int *)&this->field_0x65d = iVar10,
                 iVar10 == 10)) {
                sVar8 = this->field_0639;
                sVar19 = this->field_063D;
                sVar16 = this->field_063B;
                this->field_0742 = 0;
                if ((sVar8 < 0) ||
                   ((((g_worldGrid.sizeX <= sVar8 || (sVar16 < 0)) || (g_worldGrid.sizeY <= sVar16))
                    || ((sVar19 < 0 || (g_worldGrid.sizeZ <= sVar19)))))) {
                  local_8 = (STWorldObject *)0x0;
                }
                else {
                  local_8 = g_worldGrid.cells
                            [(int)sVar19 * (int)g_worldGrid.planeStride +
                             (int)sVar16 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
                }
                if (((local_8 != (STWorldObject *)0x0) &&
                    (*(int *)&local_8->field_0x18 == this->field_063F)) &&
                   (iVar10 = (*local_8->vtable[5].slots_00_28[2])(), iVar10 != 0)) {
                  thunk_FUN_004e95c0(local_8,this);
                }
                iVar10 = this->vfunc_D8();
                if (iVar10 != 0) {
                  return -1;
                }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_0047acdc:
                iVar10 = thunk_FUN_004b2d10((byte)this->field_0024,
                                            *(int *)((int)this->field_06CB + 0x2c),
                                            (int)this->field_005B,(int)this->field_005D);
                if (iVar10 == 0) {
                  return 0;
                }
                thunk_FUN_00495010(this,0xaf);
                return 0;
              }
              goto cf_common_exit_0047ADB5;
            }
            if (iVar10 != 6) {
              if (iVar10 != 7) {
                iVar10 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3744,0,0,
                                            "%s",
                                            "STBoatC::Teleport - incorrect entry");
                if (iVar10 == 0) {
                  return -1;
                }
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              iVar10 = sub_00460260(this,2);
              if (iVar10 == -1) {
                return -1;
              }
              if (iVar10 == 0) goto LAB_0047acdc;
              if (iVar10 != 3) {
                return 2;
              }
              uVar9 = *(short *)&this->field_0x655 + 1;
              sVar8 = *(short *)&this->field_0x653;
              sub_0048DFD0(this,*(short *)&this->field_0x651,sVar8,uVar9,
                           *(short *)&this->field_0x651,sVar8,(int *)(uint)uVar9,1,
                           (short *)&this->field_0x651,(short *)&this->field_0x653,
                           (short *)&this->field_0x655);
              goto LAB_0047b2dc;
            }
            if (*(int *)&this->field_0x667 == 0) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar10 = CONCAT22((short)((uint)this >> 0x10),*(short *)&this->field_0x659 * 0xc9) +
                       100;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              uVar7 = (*this->vtable->vfunc_10)
                                (this->field_0041,this->field_0043,
                                 CONCAT22((short)((uint)iVar10 >> 0x10),this->field_0045),
                                 *(short *)&this->field_0x657 * 0xc9 + 100,(short)iVar10,
                                 (ushort)(this->field_065B * 200) + 100);
              *(undefined2 *)&this->field_0x661 = uVar7;
              *(undefined4 *)&this->field_0x667 = 1;
            }
            if (*(int *)&this->field_0x667 == 1) {
              uVar12 = sub_004176C0(this,*(short *)&this->field_0x661);
              uVar12 = sub_00417910(this,(short)uVar12);
              if (uVar12 == 0xffffffff) {
                iVar10 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x36e3,0,0,
                                            "%s",
                                            "STBoatC::Teleport TELEPORT_OMOVE 1");
                if (iVar10 == 0) {
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
            uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar12;
            iVar10 = (uVar12 >> 0x10) % 7 - 3;
            uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar12;
            uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar1;
            local_20 = (uVar1 >> 0x10) % 7 - 3;
            if ((this->field_074A <= (int)PTR_00806724->entryCount / 2) &&
               (local_c = 0, this->field_02BF != '\0')) {
              local_10 = (undefined4 *)&this->field_0x2b3;
              do {
                puVar13 = (undefined4 *)
                          thunk_FUN_0041dc40(local_30,(short)*local_10,*(ushort *)(local_10 + 1),
                                             this->field_006C);
                uVar5 = *puVar13;
                bVar24 = 0;
                sVar23 = 0;
                iVar11 = -1;
                local_24 = *(short *)(puVar13 + 1);
                sVar22 = 0;
                sVar21 = 0;
                sVar20 = 0;
                sVar16 = 0;
                sVar19 = 0;
                sVar8 = 0;
                local_28 = uVar5;
                if (DAT_0080732c == 1) {
                  sVar8 = 0;
                  sVar19 = 0;
                  sVar16 = 0;
                  sVar20 = 0;
                  sVar21 = 0;
                  sVar22 = 0;
                  sVar23 = 0;
                  bVar24 = 0;
                  lVar18 = Library::MSVCRT::__ftol();
                  iVar17 = (int)local_24 + this->field_0045 + local_20 + (int)(short)lVar18;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  iVar14 = (int)this->field_0043 - (int)local_28._2_2_;
                  iVar15 = (int)(short)local_28 + iVar10 + this->field_0041;
                }
                else {
                  iVar17 = (int)local_24 + local_20 + this->field_0045;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_28._2_2_ = (short)((uint)uVar5 >> 0x10);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  iVar14 = (int)this->field_0043 - (int)local_28._2_2_;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_28._0_2_ = (short)uVar5;
                  iVar15 = (int)(short)local_28 + iVar10 + this->field_0041;
                }
                TraksClassTy::TraksCreate
                          (g_traksClass_00802A7C,1,2,7,iVar15,iVar14 + ((uVar12 >> 0x10) % 7 - 3),
                           iVar17,sVar8,sVar19,sVar16,sVar20,sVar21,sVar22,iVar11,sVar23,bVar24);
                local_10 = (undefined4 *)((int)local_10 + 6);
                local_c = local_c + 1;
              } while (local_c < (int)(uint)(byte)this->field_02BF);
            }
            if (local_14 == -1) {
              iVar10 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x370a,0,0,
                                          "%s","STBoatC::Teleport TELEPORT_OMOVE 2");
              if (iVar10 == 0) {
                return -1;
              }
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            if (local_14 != 0) goto cf_common_exit_0047ADB5;
            sVar8 = this->field_0639;
            iVar10 = 0;
            sVar19 = this->field_063D;
            sVar16 = this->field_063B;
            if ((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar16 < 0)) ||
               (((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              iVar10 = (int)sVar8;
              local_8 = g_worldGrid.cells
                        [(int)sVar19 * (int)g_worldGrid.planeStride +
                         (int)sVar16 * (int)g_worldGrid.sizeX + iVar10].objects[0];
            }
            if ((local_8 != (STWorldObject *)0x0) &&
               (iVar10 = *(int *)&local_8->field_0x18, iVar10 == this->field_063F)) {
              iVar11 = (*local_8->vtable[5].slots_00_28[2])();
              iVar10 = 0;
              if (iVar11 != 0) {
                iVar10 = thunk_FUN_004e95c0(local_8,this);
              }
            }
            sVar8 = this->field_0643;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            iVar10 = CONCAT22((short)((uint)iVar10 >> 0x10),sVar8);
            sVar19 = this->field_0647;
            sVar16 = this->field_0645;
            if (((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar16 < 0)) ||
                ((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)))) || (g_worldGrid.sizeZ <= sVar19)) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              iVar10 = (int)sVar8;
              local_8 = g_worldGrid.cells
                        [(int)sVar19 * (int)g_worldGrid.planeStride +
                         (int)sVar16 * (int)g_worldGrid.sizeX + iVar10].objects[0];
            }
            if ((local_8 == (STWorldObject *)0x0) ||
               (iVar10 = *(int *)&local_8->field_0x18, iVar10 != this->field_0649)) {
LAB_0047b1c5:
              sVar8 = this->field_0647 + 1;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar10 = sub_0048DFD0(this,this->field_0643,this->field_0645,sVar8,this->field_0643,
                                    this->field_0645,
                                    (int *)CONCAT22((short)((uint)iVar10 >> 0x10),sVar8),2,
                                    (short *)&this->field_0x651,(short *)&this->field_0x653,
                                    (short *)&this->field_0x655);
joined_r0x0047b202:
              if (iVar10 == 0) {
                *(short *)&this->field_0x651 = this->field_0047;
                *(short *)&this->field_0x653 = this->field_0049;
                *(short *)&this->field_0x655 = this->field_004B;
              }
            }
            else {
              iVar11 = (*local_8->vtable[5].slots_00_28[2])();
              iVar10 = 0;
              if (iVar11 == 0) goto LAB_0047b1c5;
              puVar2 = &this->field_0x655;
              puVar3 = &this->field_0x653;
              if (*(int *)&local_8[0x1d].field_0x18 != 0) {
                if (&this->field_0x651 != (undefined1 *)0x0) {
                  *(undefined4 *)&this->field_0x651 = *(undefined4 *)&local_8[0x1d].field_0x1c;
                }
                if (puVar3 != (undefined1 *)0x0) {
                  *(int *)puVar3 = local_8[0x1d].value_20;
                }
                if (puVar2 != (undefined1 *)0x0) {
                  *(STWorldObjectVTable **)puVar2 = local_8[0x1e].vtable;
                }
              }
              if (*(int *)&local_8[0x1d].field_0x18 == 0) {
                sVar8 = this->field_0647 + 1;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar10 = sub_0048DFD0(this,this->field_0643,this->field_0645,sVar8,this->field_0643,
                                      this->field_0645,
                                      (int *)CONCAT22((short)((uint)local_8 >> 0x10),sVar8),2,
                                      (short *)&this->field_0x651,(short *)puVar3,(short *)puVar2);
                goto joined_r0x0047b202;
              }
            }
            sub_00481520(this,(int)*(short *)&this->field_0x651,(int)*(short *)&this->field_0x653,
                         (int)*(short *)&this->field_0x655);
            sub_00460260(this,0);
            *(undefined4 *)&this->field_0x663 = 7;
cf_common_exit_0047ADB5:
            iVar10 = this->vfunc_D8();
            return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
          }
          if (*(int *)&this->field_0x667 == 0) {
            iVar11 = (ushort)(this->field_063D * 200) + 300;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            iVar10 = CONCAT22((short)((uint)iVar11 >> 0x10),this->field_063B + 1) * 0xc9;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            iVar14 = CONCAT22((short)((uint)iVar10 >> 0x10),this->field_0639 + 1);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            uVar7 = (*this->vtable->vfunc_10)
                              (this->field_0041,this->field_0043,
                               CONCAT22((short)((uint)(iVar14 * 0x19) >> 0x10),this->field_0045),
                               (short)(iVar14 * 0xc9),(short)iVar10,iVar11);
            *(undefined2 *)&this->field_0x661 = uVar7;
            *(undefined4 *)&this->field_0x667 = 1;
          }
          if (*(int *)&this->field_0x667 == 1) {
            uVar12 = sub_004176C0(this,*(short *)&this->field_0x661);
            uVar12 = sub_00417910(this,(short)uVar12);
            if (uVar12 == 0xffffffff) {
              iVar10 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x35f4,0,0,
                                          "%s","STBoatC::Teleport TELEPORT_PMOVE 1");
              if (iVar10 == 0) {
                return -1;
              }
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
joined_r0x0047ada9:
            if (uVar12 == 0) {
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
          uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar12;
          iVar10 = (uVar12 >> 0x10) % 7 - 3;
          uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar12;
          uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar1;
          local_18 = (uVar1 >> 0x10) % 7 - 3;
          if ((this->field_074A <= (int)PTR_00806724->entryCount / 2) &&
             (local_c = 0, this->field_02BF != '\0')) {
            local_10 = (undefined4 *)&this->field_0x2b3;
            do {
              puVar13 = (undefined4 *)
                        thunk_FUN_0041dc40(local_30,(short)*local_10,*(ushort *)(local_10 + 1),
                                           this->field_006C);
              uVar5 = *puVar13;
              bVar24 = 0;
              sVar23 = 0;
              iVar11 = -1;
              local_24 = *(short *)(puVar13 + 1);
              sVar22 = 0;
              sVar21 = 0;
              sVar20 = 0;
              sVar16 = 0;
              sVar19 = 0;
              sVar8 = 0;
              local_28 = uVar5;
              if (DAT_0080732c == 1) {
                sVar8 = 0;
                sVar19 = 0;
                sVar16 = 0;
                sVar20 = 0;
                sVar21 = 0;
                sVar22 = 0;
                sVar23 = 0;
                bVar24 = 0;
                lVar18 = Library::MSVCRT::__ftol();
                iVar17 = (int)local_24 + this->field_0045 + local_18 + (int)(short)lVar18;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar14 = (int)this->field_0043 - (int)local_28._2_2_;
                iVar15 = (int)(short)local_28 + iVar10 + this->field_0041;
              }
              else {
                iVar17 = (int)local_24 + local_18 + this->field_0045;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_28._2_2_ = (short)((uint)uVar5 >> 0x10);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar14 = (int)this->field_0043 - (int)local_28._2_2_;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_28._0_2_ = (short)uVar5;
                iVar15 = (int)(short)local_28 + iVar10 + this->field_0041;
              }
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,iVar15,iVar14 + ((uVar12 >> 0x10) % 7 - 3),
                         iVar17,sVar8,sVar19,sVar16,sVar20,sVar21,sVar22,iVar11,sVar23,bVar24);
              local_10 = (undefined4 *)((int)local_10 + 6);
              local_c = local_c + 1;
            } while (local_c < (int)(uint)(byte)this->field_02BF);
          }
          if (local_14 == -1) {
            iVar10 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x361b,0,0,
                                        "%s","STBoatC::Teleport TELEPORT_PMOVE 2");
            if (iVar10 == 0) {
              return -1;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          if (local_14 != 0) goto cf_common_exit_0047A369;
          if (this->field_0635 == 1) {
            sVar8 = this->field_0643;
            sVar19 = this->field_0647;
            sVar16 = this->field_0645;
            if ((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar16 < 0)) ||
               (((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              local_8 = g_worldGrid.cells
                        [(int)sVar19 * (int)g_worldGrid.planeStride +
                         (int)sVar16 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
            }
            if (((local_8 != (STWorldObject *)0x0) &&
                (*(int *)&local_8->field_0x18 == this->field_0649)) &&
               ((iVar10 = (*local_8->vtable[5].slots_00_28[2])(), iVar10 != 0 &&
                ((*(int *)&local_8[0x21].field_0x10 == 0 && (*(int *)&local_8[0x10].field_0x5 != 6))
                )))) goto LAB_0047a385;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = g_playSystem_00802A38->field_00E4;
          }
          else {
LAB_0047a385:
            sVar8 = this->field_0639;
            sVar19 = this->field_063D;
            sVar16 = this->field_063B;
            if (((sVar8 < 0) ||
                (((g_worldGrid.sizeX <= sVar8 || (sVar16 < 0)) || (g_worldGrid.sizeY <= sVar16))))
               || ((sVar19 < 0 || (g_worldGrid.sizeZ <= sVar19)))) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              local_8 = g_worldGrid.cells
                        [(int)sVar19 * (int)g_worldGrid.planeStride +
                         (int)sVar16 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
            }
            if (((local_8 != (STWorldObject *)0x0) &&
                (*(int *)&local_8->field_0x18 == this->field_063F)) &&
               ((iVar10 = (*local_8->vtable[5].slots_00_28[2])(), iVar10 != 0 &&
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
          iVar10 = this->vfunc_D8();
          return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
        }
        iVar10 = sub_00460260(this,2);
        switch(iVar10) {
        case 0:
          if (this->field_0635 == 1) {
            sVar8 = this->field_0643;
            sVar19 = this->field_0647;
            sVar16 = this->field_0645;
            if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
               ((sVar16 < 0 ||
                (((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))))
               ) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              local_8 = g_worldGrid.cells
                        [(int)sVar19 * (int)g_worldGrid.planeStride +
                         (int)sVar16 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
            }
            if (local_8 == (STWorldObject *)0x0) {
              return 0;
            }
            if (*(int *)&local_8->field_0x18 != this->field_0649) {
              return 0;
            }
            iVar10 = (*local_8->vtable[5].slots_00_28[2])();
            if (iVar10 == 0) {
              return 0;
            }
          }
          sVar8 = this->field_0639;
          sVar19 = this->field_063D;
          sVar16 = this->field_063B;
          if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
             (((sVar16 < 0 || ((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)))) ||
              (g_worldGrid.sizeZ <= sVar19)))) {
            local_8 = (STWorldObject *)0x0;
          }
          else {
            local_8 = g_worldGrid.cells
                      [(int)sVar19 * (int)g_worldGrid.planeStride +
                       (int)sVar16 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
          }
          if (local_8 == (STWorldObject *)0x0) {
            return 0;
          }
          if (*(int *)&local_8->field_0x18 != this->field_063F) {
            return 0;
          }
          iVar10 = (*local_8->vtable[5].slots_00_28[2])();
          if (iVar10 == 0) {
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
          sVar8 = this->field_0639;
          sVar19 = this->field_063D;
          sVar16 = this->field_063B;
          if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
             ((sVar16 < 0 ||
              (((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19))))))
          {
            local_8 = (STWorldObject *)0x0;
          }
          else {
            local_8 = g_worldGrid.cells
                      [(int)sVar19 * (int)g_worldGrid.planeStride +
                       (int)sVar16 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
          }
          if (((local_8 != (STWorldObject *)0x0) &&
              (*(int *)&local_8->field_0x18 == this->field_063F)) &&
             (iVar10 = (*local_8->vtable[5].slots_00_28[2])(), iVar10 != 0)) {
            if (this->field_0635 != 1) {
              return 2;
            }
            sVar8 = this->field_0643;
            sVar19 = this->field_0647;
            sVar16 = this->field_0645;
            if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
               ((sVar16 < 0 ||
                (((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))))
               ) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              local_8 = g_worldGrid.cells
                        [(int)sVar19 * (int)g_worldGrid.planeStride +
                         (int)sVar16 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
            }
            if (((local_8 != (STWorldObject *)0x0) &&
                (*(int *)&local_8->field_0x18 == this->field_0649)) &&
               (iVar10 = (*local_8->vtable[5].slots_00_28[2])(), iVar10 != 0)) {
              return 2;
            }
          }
          sub_004602B0(this);
          return 0;
        default:
          return 2;
        case 3:
          iVar10 = sub_004939B0(this,(short *)&this->field_0x651,(short *)&this->field_0x653,
                                (short *)&this->field_0x655);
          if (iVar10 != 1) {
            sVar8 = this->field_0639;
            sVar19 = this->field_063D;
            sVar16 = this->field_063B;
            if ((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar16 < 0)) ||
               (((g_worldGrid.sizeY <= sVar16 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              local_8 = g_worldGrid.cells
                        [(int)sVar19 * (int)g_worldGrid.planeStride +
                         (int)sVar16 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
            }
            if (local_8 == (STWorldObject *)0x0) {
              return 0;
            }
            if (*(int *)&local_8->field_0x18 != this->field_063F) {
              return 0;
            }
            iVar10 = (*local_8->vtable[5].slots_00_28[2])();
            if (iVar10 == 0) {
              return 0;
            }
            thunk_FUN_004e95c0(local_8,this);
            goto LAB_00479e39;
          }
          break;
        case -1:
          iVar10 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3596,0,0,
                                      "%s","STBoatC::Teleport, TELEPORT_MOVETELE error");
          if (iVar10 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar10 = 0x3596;
          goto LAB_00479ba6;
        }
      }
      iVar10 = (int)*(short *)&this->field_0x655;
      sVar19 = *(short *)&this->field_0x653;
      sVar8 = *(short *)&this->field_0x651;
    }
    sub_00481520(this,(int)sVar8,(int)sVar19,iVar10);
  }
  sub_00460260(this,0);
switchD_00479647_caseD_2:
  return 2;
}

