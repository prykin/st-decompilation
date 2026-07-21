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
  STBoatC_field_06F7State SVar5;
  code *pcVar6;
  undefined2 uVar7;
  short sVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  short sVar15;
  int iVar16;
  longlong lVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  int iVar22;
  short sVar23;
  byte bVar24;
  uint uVar25;
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
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar13 = &this->field_02CC;
    for (iVar10 = 0x17; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    this->field_02C4 = 0;
    this->field_0635 = this->field_0405;
    this->field_0639 = this->field_0409;
    this->field_063B = this->field_040B;
    this->field_063D = this->field_040D;
    this->field_0643 = this->field_040F;
    this->field_0645 = this->field_0411;
    this->field_0647 = this->field_0413;
    this->field_064D = 0;
    iVar10 = (*this->vtable->vfunc_D8)();
    if (iVar10 != 0) {
      return -1;
    }
    iVar10 = this->field_0635;
    if (iVar10 == 0) {
      sVar8 = this->field_0639;
      sVar18 = this->field_063D;
      sVar15 = this->field_063B;
      if (((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar15 < 0)) ||
          ((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)))) || (g_worldGrid.sizeZ <= sVar18)) {
        local_8 = (STWorldObject *)0x0;
      }
      else {
        local_8 = g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)sVar18 + (int)sVar15 * (int)g_worldGrid.sizeX
                   + (int)sVar8].objects[0];
      }
      if (local_8 == (STWorldObject *)0x0) {
        return 0;
      }
      iVar10 = (*local_8->vtable->GetObjectTypeId)(local_8);
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
        psVar3 = &this->field_065B;
        this->field_001C = uVar12;
        puVar1 = &this->field_0x657;
        thunk_FUN_004b2520(this->field_0024,this->field_06F7,(int)this->field_0643,
                           (int)this->field_0645,(int)this->field_0647,(undefined4 *)puVar1,
                           (undefined4 *)&this->field_0x659,(undefined4 *)psVar3,uVar12 >> 0x10,
                           &this->field_064D);
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
      sVar8 = this->field_0639;
      sVar18 = this->field_063D;
      sVar15 = this->field_063B;
      if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
         ((sVar15 < 0 ||
          (((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)) || (g_worldGrid.sizeZ <= sVar18)))))) {
        local_8 = (STWorldObject *)0x0;
      }
      else {
        local_8 = g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)sVar18 + (int)sVar15 * (int)g_worldGrid.sizeX
                   + (int)sVar8].objects[0];
      }
      if (local_8 == (STWorldObject *)0x0) {
        return 0;
      }
      iVar10 = (*local_8->vtable->GetObjectTypeId)(local_8);
      if (iVar10 != 0x6c) {
        return 0;
      }
      this->field_063F = *(undefined4 *)&local_8->field_0x18;
      sVar8 = this->field_0643;
      sVar18 = this->field_0647;
      sVar15 = this->field_0645;
      if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
         (((sVar15 < 0 || ((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)))) ||
          (g_worldGrid.sizeZ <= sVar18)))) {
        local_8 = (STWorldObject *)0x0;
      }
      else {
        local_8 = g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)sVar18 + (int)sVar15 * (int)g_worldGrid.sizeX
                   + (int)sVar8].objects[0];
      }
      if (local_8 == (STWorldObject *)0x0) {
        return 0;
      }
      iVar10 = (*local_8->vtable->GetObjectTypeId)(local_8);
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
          sVar18 = this->field_0647;
          sVar15 = this->field_0645;
          if ((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
              ((sVar15 < 0 || ((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)))))) ||
             (g_worldGrid.sizeZ <= sVar18)) {
            local_8 = (STWorldObject *)0x0;
          }
          else {
            local_8 = g_worldGrid.cells
                      [(int)g_worldGrid.planeStride * (int)sVar18 +
                       (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
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
        sVar18 = this->field_063D;
        sVar15 = this->field_063B;
        if (((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar15 < 0)) ||
            ((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)))) || (g_worldGrid.sizeZ <= sVar18)) {
          local_8 = (STWorldObject *)0x0;
        }
        else {
          local_8 = g_worldGrid.cells
                    [(int)g_worldGrid.planeStride * (int)sVar18 +
                     (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
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
        sVar18 = *(short *)&this->field_0x653;
        sVar8 = *(short *)&this->field_0x651;
        break;
      case 1:
        sVar8 = this->field_0639;
        sVar18 = this->field_063D;
        sVar15 = this->field_063B;
        if ((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
            ((sVar15 < 0 || ((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)))))) ||
           (g_worldGrid.sizeZ <= sVar18)) {
          local_8 = (STWorldObject *)0x0;
        }
        else {
          local_8 = g_worldGrid.cells
                    [(int)g_worldGrid.planeStride * (int)sVar18 +
                     (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
        }
        if (((local_8 != (STWorldObject *)0x0) && (*(int *)&local_8->field_0x18 == this->field_063F)
            ) && (iVar10 = (*local_8->vtable[5].slots_00_28[2])(), iVar10 != 0)) {
          if (this->field_0635 != 1) {
            return 2;
          }
          sVar8 = this->field_0643;
          sVar18 = this->field_0647;
          sVar15 = this->field_0645;
          if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
             (((sVar15 < 0 || ((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)))) ||
              (g_worldGrid.sizeZ <= sVar18)))) {
            local_8 = (STWorldObject *)0x0;
          }
          else {
            local_8 = g_worldGrid.cells
                      [(int)g_worldGrid.planeStride * (int)sVar18 +
                       (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
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
        sVar18 = this->field_063B;
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
          sVar18 = this->field_0647;
          sVar15 = this->field_0645;
          if (((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar15 < 0)) ||
              ((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)))) || (g_worldGrid.sizeZ <= sVar18)) {
            local_8 = (STWorldObject *)0x0;
          }
          else {
            local_8 = g_worldGrid.cells
                      [(int)g_worldGrid.planeStride * (int)sVar18 +
                       (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
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
        sVar18 = this->field_063D;
        sVar15 = this->field_063B;
        if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
           ((sVar15 < 0 ||
            (((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)) || (g_worldGrid.sizeZ <= sVar18)))))) {
          local_8 = (STWorldObject *)0x0;
        }
        else {
          local_8 = g_worldGrid.cells
                    [(int)sVar18 * (int)g_worldGrid.planeStride +
                     (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
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
                SVar5 = this->field_06F7;
                if ((((SVar5 == CASE_7) || (SVar5 == CASE_13)) || (SVar5 == CASE_1B)) &&
                   ((this->field_07CA != 0 &&
                    (iVar10 = FUN_006e62d0(PTR_00802a38,this->field_07CA,(int *)&local_8),
                    iVar10 != -4)))) {
                  iVar22 = (int)this->field_0045;
                  iVar10 = (int)this->field_0043;
                  iVar11 = (int)this->field_0041;
                  uVar25 = 0;
                  iVar14 = 0;
                  uVar12 = thunk_FUN_004ad650((int)((int)&local_8[0xd].vtable + 1));
                }
                else {
                  iVar22 = (int)this->field_0045;
                  iVar10 = (int)this->field_0043;
                  iVar11 = (int)this->field_0041;
                  uVar25 = 0;
                  uVar12 = this->field_01ED;
                  iVar14 = 0;
                }
                thunk_FUN_006377b0(uVar12,iVar14,iVar11,iVar10,iVar22,uVar25);
                *(undefined4 *)&this->field_0x667 = 1;
                *(undefined4 *)&this->field_0x65d = 0;
              }
              if ((*(int *)&this->field_0x667 == 1) &&
                 (iVar10 = *(int *)&this->field_0x65d + 1, *(int *)&this->field_0x65d = iVar10,
                 iVar10 == 0x16)) {
                *(undefined4 *)&this->field_0x667 = 2;
                *(undefined4 *)&this->field_0x65d = 0;
                thunk_FUN_0041c5a0((AnonShape_0041C5A0_167218F4 *)this);
                if (((this->field_06F7 == CASE_B) || (this->field_06F7 == CASE_23)) &&
                   ((this->field_021D == 1 && (this->field_0024 == (uint)DAT_0080874d)))) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  FUN_006e6780((void *)this->field_0211,
                               CONCAT22(CONCAT11(2,(char)(this->field_0018 >> 0x10)),
                                        (short)this->field_0018));
                }
                thunk_FUN_004d0a80(DAT_00800bcc,(int)*(short *)&this->field_0x657,
                                   (int)*(short *)&this->field_0x659,(int)this->field_065B);
                thunk_FUN_00417a20(this,*(short *)&this->field_0x657,*(short *)&this->field_0x659,
                                   this->field_065B,1);
                sVar8 = (this->field_0643 + 1) * 0xc9;
                this->field_0041 = sVar8;
                sVar18 = (this->field_0645 + 1) * 0xc9;
                sVar15 = this->field_0647 * 200 + 300;
                this->field_0043 = sVar18;
                this->field_0045 = sVar15;
                local_20 = (int)sVar8;
                thunk_FUN_004ad3c0(&this->field_01D5,(float)local_20 * _DAT_007904f8 * _DAT_007904f0
                                   ,(float)(int)sVar18 * _DAT_007904f8 * _DAT_007904f0,
                                   (float)(int)sVar15 * _DAT_007904f8 * _DAT_007904f0);
                thunk_FUN_0041c3f0(this,(undefined *)this->field_070A);
                SVar5 = this->field_06F7;
                if ((((SVar5 == CASE_7) || (SVar5 == CASE_13)) || (SVar5 == CASE_1B)) &&
                   ((this->field_07CA != 0 &&
                    (iVar10 = FUN_006e62d0(PTR_00802a38,this->field_07CA,(int *)&local_8),
                    iVar10 != -4)))) {
                  iVar11 = (int)this->field_0045;
                  iVar10 = (int)this->field_0043;
                  iVar22 = (int)this->field_0041;
                  uVar25 = 0;
                  iVar14 = 0;
                  uVar12 = thunk_FUN_004ad650((int)((int)&local_8[0xd].vtable + 1));
                  thunk_FUN_006377b0(uVar12,iVar14,iVar22,iVar10,iVar11,uVar25);
                  thunk_FUN_004ad430((int)((int)&local_8[0xd].vtable + 1));
                }
                else {
                  thunk_FUN_006377b0(this->field_01ED,0,(int)this->field_0041,(int)this->field_0043,
                                     (int)this->field_0045,0);
                }
                thunk_FUN_004ad430((int)&this->field_01D5);
              }
              if ((*(int *)&this->field_0x667 == 2) &&
                 (iVar10 = *(int *)&this->field_0x65d + 1, *(int *)&this->field_0x65d = iVar10,
                 iVar10 == 0x16)) {
                *(undefined4 *)&this->field_0x667 = 3;
                SVar5 = this->field_06F7;
                *(undefined4 *)&this->field_0x65d = 0;
                if (((SVar5 == CASE_7) || ((SVar5 == CASE_13 || (SVar5 == CASE_1B)))) &&
                   ((this->field_07CA != 0 &&
                    (iVar10 = FUN_006e62d0(PTR_00802a38,this->field_07CA,(int *)&local_8),
                    iVar10 != -4)))) {
                  thunk_FUN_004ad460((void *)((int)&local_8[0xd].vtable + 1),0);
                }
                thunk_FUN_004ad460(&this->field_01D5,0);
                if ((((this->field_06F7 == CASE_B) || (this->field_06F7 == CASE_23)) &&
                    (this->field_021D == 1)) && (this->field_0024 == (uint)DAT_0080874d)) {
                  local_20 = (int)this->field_0041;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  FUN_006e6710((void *)this->field_0211,
                               (float)local_20 * _DAT_007904f8 * _DAT_007904f0,
                               (float)(int)this->field_0043 * _DAT_007904f8 * _DAT_007904f0,
                               (uint)((float)this->field_010D * _DAT_007904f8 + _DAT_007904f4),0x28,
                               CONCAT22(CONCAT11(2,(char)(this->field_0018 >> 0x10)),
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
                SVar5 = this->field_06F7;
                if ((((SVar5 == CASE_7) || (SVar5 == CASE_13)) || (SVar5 == CASE_1B)) &&
                   ((this->field_07CA != 0 &&
                    (iVar10 = FUN_006e62d0(PTR_00802a38,this->field_07CA,(int *)&local_8),
                    iVar10 != -4)))) {
                  iVar22 = (int)this->field_0045;
                  iVar10 = (int)this->field_0043;
                  iVar11 = (int)this->field_0041;
                  uVar25 = 0;
                  iVar14 = 0;
                  uVar12 = thunk_FUN_004ad650((int)((int)&local_8[0xd].vtable + 1));
                }
                else {
                  iVar22 = (int)this->field_0045;
                  iVar10 = (int)this->field_0043;
                  iVar11 = (int)this->field_0041;
                  uVar25 = 0;
                  uVar12 = this->field_01ED;
                  iVar14 = 0;
                }
                thunk_FUN_006377b0(uVar12,iVar14,iVar11,iVar10,iVar22,uVar25);
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
                thunk_FUN_0041c5a0((AnonShape_0041C5A0_167218F4 *)this);
                thunk_FUN_004d0a80(DAT_00800bcc,(int)*(short *)&this->field_0x657,
                                   (int)*(short *)&this->field_0x659,(int)this->field_065B);
                thunk_FUN_00417a20(this,*(short *)&this->field_0x657,*(short *)&this->field_0x659,
                                   this->field_065B,1);
                local_20 = (int)this->field_0041;
                thunk_FUN_004ad3c0(&this->field_01D5,(float)local_20 * _DAT_007904f8 * _DAT_007904f0
                                   ,(float)(int)this->field_0043 * _DAT_007904f8 * _DAT_007904f0,
                                   (float)(int)this->field_0045 * _DAT_007904f8 * _DAT_007904f0);
                thunk_FUN_0041c3f0(this,(undefined *)this->field_070A);
                SVar5 = this->field_06F7;
                if ((((SVar5 == CASE_7) || (SVar5 == CASE_13)) || (SVar5 == CASE_1B)) &&
                   ((this->field_07CA != 0 &&
                    (iVar10 = FUN_006e62d0(PTR_00802a38,this->field_07CA,(int *)&local_8),
                    iVar10 != -4)))) {
                  iVar11 = (int)this->field_0045;
                  iVar10 = (int)this->field_0043;
                  iVar22 = (int)this->field_0041;
                  uVar25 = 0;
                  iVar14 = 0;
                  uVar12 = thunk_FUN_004ad650((int)((int)&local_8[0xd].vtable + 1));
                  thunk_FUN_006377b0(uVar12,iVar14,iVar22,iVar10,iVar11,uVar25);
                  thunk_FUN_004ad430((int)((int)&local_8[0xd].vtable + 1));
                }
                else {
                  thunk_FUN_006377b0(this->field_01ED,0,(int)this->field_0041,(int)this->field_0043,
                                     (int)this->field_0045,0);
                }
                thunk_FUN_004ad430((int)&this->field_01D5);
              }
              if ((*(int *)&this->field_0x667 == 2) &&
                 (iVar10 = *(int *)&this->field_0x65d + 1, *(int *)&this->field_0x65d = iVar10,
                 iVar10 == 0x16)) {
                *(undefined4 *)&this->field_0x667 = 3;
                SVar5 = this->field_06F7;
                *(undefined4 *)&this->field_0x65d = 0;
                if (((SVar5 == CASE_7) || ((SVar5 == CASE_13 || (SVar5 == CASE_1B)))) &&
                   ((this->field_07CA != 0 &&
                    (iVar10 = FUN_006e62d0(PTR_00802a38,this->field_07CA,(int *)&local_8),
                    iVar10 != -4)))) {
                  thunk_FUN_004ad460((void *)((int)&local_8[0xd].vtable + 1),0);
                }
                thunk_FUN_004ad460(&this->field_01D5,0);
              }
              if ((*(int *)&this->field_0x667 == 3) &&
                 (iVar10 = *(int *)&this->field_0x65d + 1, *(int *)&this->field_0x65d = iVar10,
                 iVar10 == 10)) {
                sVar8 = this->field_0639;
                sVar18 = this->field_063D;
                sVar15 = this->field_063B;
                this->field_0742 = 0;
                if ((sVar8 < 0) ||
                   ((((g_worldGrid.sizeX <= sVar8 || (sVar15 < 0)) || (g_worldGrid.sizeY <= sVar15))
                    || ((sVar18 < 0 || (g_worldGrid.sizeZ <= sVar18)))))) {
                  local_8 = (STWorldObject *)0x0;
                }
                else {
                  local_8 = g_worldGrid.cells
                            [(int)sVar18 * (int)g_worldGrid.planeStride +
                             (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
                }
                if (((local_8 != (STWorldObject *)0x0) &&
                    (*(int *)&local_8->field_0x18 == this->field_063F)) &&
                   (iVar10 = (*local_8->vtable[5].slots_00_28[2])(), iVar10 != 0)) {
                  thunk_FUN_004e95c0(local_8,(int)this);
                }
                iVar10 = (*this->vtable->vfunc_D8)();
                if (iVar10 != 0) {
                  return -1;
                }
LAB_0047acdc:
                iVar10 = thunk_FUN_004b2d10((byte)this->field_0024,this->field_06F7,
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
              SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                        ((AnonReceiver_0048DFD0 *)this,*(short *)&this->field_0x651,sVar8,uVar9,
                         *(short *)&this->field_0x651,sVar8,(int *)(uint)uVar9,1,
                         (short *)&this->field_0x651,(short *)&this->field_0x653,
                         (short *)&this->field_0x655);
              goto LAB_0047b2dc;
            }
            if (*(int *)&this->field_0x667 == 0) {
              iVar10 = (ushort)(this->field_065B * 200) + 100;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar11 = CONCAT22((short)((uint)this >> 0x10),*(short *)&this->field_0x659 * 0xc9) +
                       100;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar22 = CONCAT22((short)((uint)iVar10 >> 0x10),*(short *)&this->field_0x657 * 0xc9) +
                       100;
              uVar7 = (undefined2)((uint)iVar11 >> 0x10);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              uVar7 = (*this->vtable->vfunc_10)
                                (CONCAT22(uVar7,this->field_0041),
                                 CONCAT22((short)((uint)iVar22 >> 0x10),this->field_0043),
                                 CONCAT22(uVar7,this->field_0045),iVar22,iVar11,iVar10);
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
            uVar25 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar25;
            local_20 = (uVar25 >> 0x10) % 7 - 3;
            if ((this->field_074A <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
               (local_c = 0, this->field_02BF != '\0')) {
              local_10 = &this->field_02B3;
              do {
                puVar13 = (undefined4 *)
                          thunk_FUN_0041dc40(local_30,(short)*local_10,*(undefined2 *)(local_10 + 1)
                                             ,this->field_006C);
                uVar4 = *puVar13;
                bVar24 = 0;
                sVar23 = 0;
                iVar22 = -1;
                local_24 = *(short *)(puVar13 + 1);
                sVar21 = 0;
                sVar20 = 0;
                sVar19 = 0;
                sVar15 = 0;
                sVar18 = 0;
                sVar8 = 0;
                local_28 = uVar4;
                if (DAT_0080732c == 1) {
                  sVar8 = 0;
                  sVar18 = 0;
                  sVar15 = 0;
                  sVar19 = 0;
                  sVar20 = 0;
                  sVar21 = 0;
                  sVar23 = 0;
                  bVar24 = 0;
                  lVar17 = Library::MSVCRT::__ftol();
                  iVar16 = (int)local_24 + this->field_0045 + local_20 + (int)(short)lVar17;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  iVar11 = (int)this->field_0043 - (int)local_28._2_2_;
                  iVar14 = (int)(short)local_28 + iVar10 + this->field_0041;
                }
                else {
                  iVar16 = (int)local_24 + local_20 + this->field_0045;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_28._2_2_ = (short)((uint)uVar4 >> 0x10);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  iVar11 = (int)this->field_0043 - (int)local_28._2_2_;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_28._0_2_ = (short)uVar4;
                  iVar14 = (int)(short)local_28 + iVar10 + this->field_0041;
                }
                TraksClassTy::TraksCreate
                          (g_traksClass_00802A7C,1,2,7,iVar14,iVar11 + ((uVar12 >> 0x10) % 7 - 3),
                           iVar16,sVar8,sVar18,sVar15,sVar19,sVar20,sVar21,iVar22,sVar23,bVar24);
                local_10 = (undefined4 *)((int)local_10 + 6);
                local_c = local_c + 1;
              } while (local_c < (int)(uint)(byte)this->field_02BF);
            }
            if (local_14 == -1) {
              iVar10 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x370a,0,0,
                                          "%s","STBoatC::Teleport TELEPORT_OMOVE 2")
              ;
              if (iVar10 == 0) {
                return -1;
              }
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            if (local_14 != 0) goto cf_common_exit_0047ADB5;
            sVar8 = this->field_0639;
            iVar10 = 0;
            sVar18 = this->field_063D;
            sVar15 = this->field_063B;
            if ((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar15 < 0)) ||
               (((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)) || (g_worldGrid.sizeZ <= sVar18)))) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              iVar10 = (int)sVar8;
              local_8 = g_worldGrid.cells
                        [(int)sVar18 * (int)g_worldGrid.planeStride +
                         (int)sVar15 * (int)g_worldGrid.sizeX + iVar10].objects[0];
            }
            if ((local_8 != (STWorldObject *)0x0) &&
               (iVar10 = *(int *)&local_8->field_0x18, iVar10 == this->field_063F)) {
              iVar22 = (*local_8->vtable[5].slots_00_28[2])();
              iVar10 = 0;
              if (iVar22 != 0) {
                iVar10 = thunk_FUN_004e95c0(local_8,(int)this);
              }
            }
            sVar8 = this->field_0643;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            iVar10 = CONCAT22((short)((uint)iVar10 >> 0x10),sVar8);
            sVar18 = this->field_0647;
            sVar15 = this->field_0645;
            if (((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar15 < 0)) ||
                ((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)))) || (g_worldGrid.sizeZ <= sVar18)) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              iVar10 = (int)sVar8;
              local_8 = g_worldGrid.cells
                        [(int)sVar18 * (int)g_worldGrid.planeStride +
                         (int)sVar15 * (int)g_worldGrid.sizeX + iVar10].objects[0];
            }
            if ((local_8 == (STWorldObject *)0x0) ||
               (iVar10 = *(int *)&local_8->field_0x18, iVar10 != this->field_0649)) {
LAB_0047b1c5:
              sVar8 = this->field_0647 + 1;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::
                       thunk_FUN_0048dfd0((AnonReceiver_0048DFD0 *)this,this->field_0643,
                                          this->field_0645,sVar8,this->field_0643,this->field_0645,
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
              iVar22 = (*local_8->vtable[5].slots_00_28[2])();
              iVar10 = 0;
              if (iVar22 == 0) goto LAB_0047b1c5;
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
                sVar8 = this->field_0647 + 1;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar10 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::
                         thunk_FUN_0048dfd0((AnonReceiver_0048DFD0 *)this,this->field_0643,
                                            this->field_0645,sVar8,this->field_0643,this->field_0645
                                            ,(int *)CONCAT22((short)((uint)local_8 >> 0x10),sVar8),2
                                            ,(short *)&this->field_0x651,(short *)puVar2,
                                            (short *)puVar1);
                goto joined_r0x0047b202;
              }
            }
            sub_00481520(this,(int)*(short *)&this->field_0x651,(int)*(short *)&this->field_0x653,
                         (int)*(short *)&this->field_0x655);
            sub_00460260(this,0);
            *(undefined4 *)&this->field_0x663 = 7;
cf_common_exit_0047ADB5:
            iVar10 = (*this->vtable->vfunc_D8)();
            return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
          }
          if (*(int *)&this->field_0x667 == 0) {
            iVar11 = (ushort)(this->field_063D * 200) + 300;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            iVar22 = CONCAT22((short)((uint)iVar11 >> 0x10),this->field_063B + 1) * 0xc9;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            iVar14 = CONCAT22((short)((uint)iVar22 >> 0x10),this->field_0639 + 1);
            iVar10 = iVar14 * 0xc9;
            uVar7 = (undefined2)((uint)(iVar14 * 0x19) >> 0x10);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            uVar7 = (*this->vtable->vfunc_10)
                              (CONCAT22(uVar7,this->field_0041),
                               CONCAT22((short)((uint)iVar10 >> 0x10),this->field_0043),
                               CONCAT22(uVar7,this->field_0045),iVar10,iVar22,iVar11);
            *(undefined2 *)&this->field_0x661 = uVar7;
            *(undefined4 *)&this->field_0x667 = 1;
          }
          if (*(int *)&this->field_0x667 == 1) {
            uVar12 = sub_004176C0(this,*(short *)&this->field_0x661);
            uVar12 = sub_00417910(this,(short)uVar12);
            if (uVar12 == 0xffffffff) {
              iVar10 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x35f4,0,0,
                                          "%s","STBoatC::Teleport TELEPORT_PMOVE 1")
              ;
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
          uVar25 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar25;
          local_18 = (uVar25 >> 0x10) % 7 - 3;
          if ((this->field_074A <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
             (local_c = 0, this->field_02BF != '\0')) {
            local_10 = &this->field_02B3;
            do {
              puVar13 = (undefined4 *)
                        thunk_FUN_0041dc40(local_30,(short)*local_10,*(undefined2 *)(local_10 + 1),
                                           this->field_006C);
              uVar4 = *puVar13;
              bVar24 = 0;
              sVar23 = 0;
              iVar22 = -1;
              local_24 = *(short *)(puVar13 + 1);
              sVar21 = 0;
              sVar20 = 0;
              sVar19 = 0;
              sVar15 = 0;
              sVar18 = 0;
              sVar8 = 0;
              local_28 = uVar4;
              if (DAT_0080732c == 1) {
                sVar8 = 0;
                sVar18 = 0;
                sVar15 = 0;
                sVar19 = 0;
                sVar20 = 0;
                sVar21 = 0;
                sVar23 = 0;
                bVar24 = 0;
                lVar17 = Library::MSVCRT::__ftol();
                iVar16 = (int)local_24 + this->field_0045 + local_18 + (int)(short)lVar17;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar11 = (int)this->field_0043 - (int)local_28._2_2_;
                iVar14 = (int)(short)local_28 + iVar10 + this->field_0041;
              }
              else {
                iVar16 = (int)local_24 + local_18 + this->field_0045;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_28._2_2_ = (short)((uint)uVar4 >> 0x10);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar11 = (int)this->field_0043 - (int)local_28._2_2_;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_28._0_2_ = (short)uVar4;
                iVar14 = (int)(short)local_28 + iVar10 + this->field_0041;
              }
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,iVar14,iVar11 + ((uVar12 >> 0x10) % 7 - 3),
                         iVar16,sVar8,sVar18,sVar15,sVar19,sVar20,sVar21,iVar22,sVar23,bVar24);
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
            sVar18 = this->field_0647;
            sVar15 = this->field_0645;
            if ((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar15 < 0)) ||
               (((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)) || (g_worldGrid.sizeZ <= sVar18)))) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              local_8 = g_worldGrid.cells
                        [(int)sVar18 * (int)g_worldGrid.planeStride +
                         (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
            }
            if (((local_8 != (STWorldObject *)0x0) &&
                (*(int *)&local_8->field_0x18 == this->field_0649)) &&
               ((iVar10 = (*local_8->vtable[5].slots_00_28[2])(), iVar10 != 0 &&
                ((*(int *)&local_8[0x21].field_0x10 == 0 && (*(int *)&local_8[0x10].field_0x5 != 6))
                )))) goto LAB_0047a385;
            param_1 = PTR_00802a38->field_00E4;
          }
          else {
LAB_0047a385:
            sVar8 = this->field_0639;
            sVar18 = this->field_063D;
            sVar15 = this->field_063B;
            if (((sVar8 < 0) ||
                (((g_worldGrid.sizeX <= sVar8 || (sVar15 < 0)) || (g_worldGrid.sizeY <= sVar15))))
               || ((sVar18 < 0 || (g_worldGrid.sizeZ <= sVar18)))) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              local_8 = g_worldGrid.cells
                        [(int)sVar18 * (int)g_worldGrid.planeStride +
                         (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
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
            param_1 = PTR_00802a38->field_00E4;
          }
          CmdToObj(this,CASE_3,&param_1);
cf_common_exit_0047A369:
          iVar10 = (*this->vtable->vfunc_D8)();
          return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
        }
        iVar10 = sub_00460260(this,2);
        switch(iVar10) {
        case 0:
          if (this->field_0635 == 1) {
            sVar8 = this->field_0643;
            sVar18 = this->field_0647;
            sVar15 = this->field_0645;
            if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
               ((sVar15 < 0 ||
                (((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)) || (g_worldGrid.sizeZ <= sVar18)))))
               ) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              local_8 = g_worldGrid.cells
                        [(int)sVar18 * (int)g_worldGrid.planeStride +
                         (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
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
          sVar18 = this->field_063D;
          sVar15 = this->field_063B;
          if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
             (((sVar15 < 0 || ((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)))) ||
              (g_worldGrid.sizeZ <= sVar18)))) {
            local_8 = (STWorldObject *)0x0;
          }
          else {
            local_8 = g_worldGrid.cells
                      [(int)sVar18 * (int)g_worldGrid.planeStride +
                       (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
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
          thunk_FUN_004e95c0(local_8,(int)this);
          return 0;
        case 1:
          sVar8 = this->field_0639;
          sVar18 = this->field_063D;
          sVar15 = this->field_063B;
          if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
             ((sVar15 < 0 ||
              (((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)) || (g_worldGrid.sizeZ <= sVar18))))))
          {
            local_8 = (STWorldObject *)0x0;
          }
          else {
            local_8 = g_worldGrid.cells
                      [(int)sVar18 * (int)g_worldGrid.planeStride +
                       (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
          }
          if (((local_8 != (STWorldObject *)0x0) &&
              (*(int *)&local_8->field_0x18 == this->field_063F)) &&
             (iVar10 = (*local_8->vtable[5].slots_00_28[2])(), iVar10 != 0)) {
            if (this->field_0635 != 1) {
              return 2;
            }
            sVar8 = this->field_0643;
            sVar18 = this->field_0647;
            sVar15 = this->field_0645;
            if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
               ((sVar15 < 0 ||
                (((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)) || (g_worldGrid.sizeZ <= sVar18)))))
               ) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              local_8 = g_worldGrid.cells
                        [(int)sVar18 * (int)g_worldGrid.planeStride +
                         (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
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
            sVar18 = this->field_063D;
            sVar15 = this->field_063B;
            if ((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar15 < 0)) ||
               (((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)) || (g_worldGrid.sizeZ <= sVar18)))) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              local_8 = g_worldGrid.cells
                        [(int)sVar18 * (int)g_worldGrid.planeStride +
                         (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar8].objects[0];
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
            thunk_FUN_004e95c0(local_8,(int)this);
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
      sVar18 = *(short *)&this->field_0x653;
      sVar8 = *(short *)&this->field_0x651;
    }
    sub_00481520(this,(int)sVar8,(int)sVar18,iVar10);
  }
  sub_00460260(this,0);
switchD_00479647_caseD_2:
  return 2;
}

