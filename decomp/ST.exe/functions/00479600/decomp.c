
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Teleport */

int __thiscall STBoatC::Teleport(STBoatC *this,int param_1)

{
  short *psVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  STBoatC_field_06F7State SVar4;
  code *pcVar5;
  bool bVar6;
  undefined2 uVar7;
  int iVar8;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  STWorldObject *pSVar13;
  STWorldObject *extraout_ECX;
  short sVar14;
  int iVar15;
  undefined2 extraout_var_02;
  longlong lVar16;
  short sVar17;
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
    puVar11 = &this->field_02CC;
    for (iVar8 = 0x17; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    this->field_02C4 = 0;
    this->field_0635 = *(undefined4 *)&this->field_0x405;
    this->field_0639 = *(short *)&this->field_0x409;
    this->field_063B = *(short *)&this->field_0x40b;
    this->field_063D = *(short *)&this->field_0x40d;
    this->field_0643 = *(undefined2 *)&this->field_0x40f;
    this->field_0645 = *(undefined2 *)&this->field_0x411;
    this->field_0647 = *(undefined2 *)&this->field_0x413;
    *(undefined4 *)&this->field_0x64d = 0;
    iVar8 = (*this->vtable->vfunc_D8)();
    if (iVar8 != 0) {
      return -1;
    }
    iVar8 = this->field_0635;
    if (iVar8 == 0) {
      sVar17 = this->field_0639;
      sVar18 = this->field_063D;
      sVar14 = this->field_063B;
      if (((((sVar17 < 0) || (SHORT_007fb240 <= sVar17)) || (sVar14 < 0)) ||
          ((SHORT_007fb242 <= sVar14 || (sVar18 < 0)))) || (SHORT_007fb244 <= sVar18)) {
        local_8 = (STWorldObject *)0x0;
      }
      else {
        local_8 = g_worldCells
                  [(int)SHORT_007fb246 * (int)sVar18 + (int)sVar14 * (int)SHORT_007fb240 +
                   (int)sVar17].objects[0];
      }
      if (local_8 == (STWorldObject *)0x0) {
        return 0;
      }
      iVar8 = (*local_8->vtable->GetObjectTypeId)(local_8);
      if (iVar8 != 0x37) {
        return 0;
      }
      this->field_063F = *(undefined4 *)&local_8->field_0x18;
    }
    else {
      if (iVar8 != 1) {
        if (iVar8 != 2) {
          iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x351b,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Teleport_invalid_type_o_007ab3ac);
          if (iVar8 == 0) {
            return 0;
          }
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
        psVar1 = (short *)((int)&this->field_065A + 1);
        this->field_001C = uVar10;
        puVar2 = &this->field_0x657;
        thunk_FUN_004b2520(*(uint *)&this->field_0x24,this->field_06F7,(int)(short)this->field_0643,
                           (int)(short)this->field_0645,(int)(short)this->field_0647,
                           (undefined4 *)puVar2,(undefined4 *)&this->field_0x659,
                           (undefined4 *)psVar1,uVar10 >> 0x10,(int *)&this->field_0x64d);
        if (*(short *)puVar2 < 0) {
          return 0;
        }
        if (*(short *)&this->field_0x659 < 0) {
          return 0;
        }
        if (*psVar1 < 0) {
          return 0;
        }
        *(undefined4 *)&this->field_0x742 = 1;
        this->field_063F = 0;
        this->field_0649 = 0;
        if (DAT_00800bcc == (void *)0x0) {
          thunk_FUN_004d0f00();
        }
        thunk_FUN_004d0970(DAT_00800bcc,(int)*(short *)puVar2,(int)*(short *)&this->field_0x659,
                           (int)*psVar1);
        *(undefined4 *)&this->field_0x663 = 5;
        *(undefined4 *)((int)&this->field_0666 + 1) = 0;
        return 2;
      }
      sVar17 = this->field_0639;
      sVar18 = this->field_063D;
      sVar14 = this->field_063B;
      if (((sVar17 < 0) || (SHORT_007fb240 <= sVar17)) ||
         ((sVar14 < 0 ||
          (((SHORT_007fb242 <= sVar14 || (sVar18 < 0)) || (SHORT_007fb244 <= sVar18)))))) {
        local_8 = (STWorldObject *)0x0;
      }
      else {
        local_8 = g_worldCells
                  [(int)SHORT_007fb246 * (int)sVar18 + (int)sVar14 * (int)SHORT_007fb240 +
                   (int)sVar17].objects[0];
      }
      if (local_8 == (STWorldObject *)0x0) {
        return 0;
      }
      iVar8 = (*local_8->vtable->GetObjectTypeId)(local_8);
      if (iVar8 != 0x6c) {
        return 0;
      }
      this->field_063F = *(undefined4 *)&local_8->field_0x18;
      sVar17 = this->field_0643;
      sVar18 = this->field_0647;
      sVar14 = this->field_0645;
      if (((sVar17 < 0) || (SHORT_007fb240 <= sVar17)) ||
         (((sVar14 < 0 || ((SHORT_007fb242 <= sVar14 || (sVar18 < 0)))) ||
          (SHORT_007fb244 <= sVar18)))) {
        local_8 = (STWorldObject *)0x0;
      }
      else {
        local_8 = g_worldCells
                  [(int)SHORT_007fb246 * (int)sVar18 + (int)sVar14 * (int)SHORT_007fb240 +
                   (int)sVar17].objects[0];
      }
      if (local_8 == (STWorldObject *)0x0) {
        return 0;
      }
      iVar8 = (*local_8->vtable->GetObjectTypeId)(local_8);
      if (iVar8 != 0x6c) {
        return 0;
      }
      this->field_0649 = *(undefined4 *)&local_8->field_0x18;
    }
    *(undefined4 *)&this->field_0x663 = 0;
    *(undefined4 *)((int)&this->field_0666 + 1) = 0;
    this->field_00B7 = 3;
    sub_00481520(this,(int)this->field_0639,(int)this->field_063B,this->field_063D + 1);
  }
  else {
    iVar8 = *(int *)&this->field_0x663;
    if (iVar8 == 0) {
      iVar8 = sub_00460260(this,2);
      switch(iVar8) {
      case 0:
        this->field_00B7 = 0;
        if (this->field_0635 == 1) {
          sVar17 = this->field_0643;
          sVar18 = this->field_0647;
          sVar14 = this->field_0645;
          if ((((sVar17 < 0) || (SHORT_007fb240 <= sVar17)) ||
              ((sVar14 < 0 || ((SHORT_007fb242 <= sVar14 || (sVar18 < 0)))))) ||
             (SHORT_007fb244 <= sVar18)) {
            local_8 = (STWorldObject *)0x0;
          }
          else {
            local_8 = g_worldCells
                      [(int)SHORT_007fb246 * (int)sVar18 + (int)sVar14 * (int)SHORT_007fb240 +
                       (int)sVar17].objects[0];
          }
          if (local_8 == (STWorldObject *)0x0) {
            return 0;
          }
          if (*(int *)&local_8->field_0x18 != this->field_0649) {
            return 0;
          }
          iVar8 = (*local_8->vtable[5].slots_00_28[2])();
          if (iVar8 == 0) {
            return 0;
          }
        }
        sVar17 = this->field_0639;
        sVar18 = this->field_063D;
        sVar14 = this->field_063B;
        if (((((sVar17 < 0) || (SHORT_007fb240 <= sVar17)) || (sVar14 < 0)) ||
            ((SHORT_007fb242 <= sVar14 || (sVar18 < 0)))) || (SHORT_007fb244 <= sVar18)) {
          local_8 = (STWorldObject *)0x0;
        }
        else {
          local_8 = g_worldCells
                    [(int)SHORT_007fb246 * (int)sVar18 + (int)sVar14 * (int)SHORT_007fb240 +
                     (int)sVar17].objects[0];
        }
        if (local_8 == (STWorldObject *)0x0) {
          return 0;
        }
        if (*(int *)&local_8->field_0x18 != this->field_063F) {
          return 0;
        }
        iVar8 = (*local_8->vtable[5].slots_00_28[2])();
        if (iVar8 == 0) {
          return 0;
        }
        bVar6 = sub_004939B0(this,(short *)&this->field_0x651,(short *)&this->field_0x653,
                             (short *)&this->field_0x655);
        if ((CONCAT31(extraout_var,bVar6) != 1) ||
           (iVar8 = thunk_FUN_004e91e0(local_8,this), iVar8 != 1)) {
LAB_00479e39:
          *(undefined4 *)&this->field_0x663 = 1;
          *(undefined4 *)((int)&this->field_065A + 3) = 0;
          iVar8 = Defence(this,0);
          if (iVar8 != -1) {
            return 2;
          }
          return -1;
        }
        *(undefined4 *)&this->field_0x663 = 2;
LAB_0047b2dc:
        iVar8 = (int)*(short *)&this->field_0x655;
        sVar18 = *(short *)&this->field_0x653;
        sVar17 = *(short *)&this->field_0x651;
        break;
      case 1:
        sVar17 = this->field_0639;
        sVar18 = this->field_063D;
        sVar14 = this->field_063B;
        if ((((sVar17 < 0) || (SHORT_007fb240 <= sVar17)) ||
            ((sVar14 < 0 || ((SHORT_007fb242 <= sVar14 || (sVar18 < 0)))))) ||
           (SHORT_007fb244 <= sVar18)) {
          local_8 = (STWorldObject *)0x0;
        }
        else {
          local_8 = g_worldCells
                    [(int)SHORT_007fb246 * (int)sVar18 + (int)sVar14 * (int)SHORT_007fb240 +
                     (int)sVar17].objects[0];
        }
        if (((local_8 != (STWorldObject *)0x0) && (*(int *)&local_8->field_0x18 == this->field_063F)
            ) && (iVar8 = (*local_8->vtable[5].slots_00_28[2])(), iVar8 != 0)) {
          if (this->field_0635 != 1) {
            return 2;
          }
          sVar17 = this->field_0643;
          sVar18 = this->field_0647;
          sVar14 = this->field_0645;
          if (((sVar17 < 0) || (SHORT_007fb240 <= sVar17)) ||
             (((sVar14 < 0 || ((SHORT_007fb242 <= sVar14 || (sVar18 < 0)))) ||
              (SHORT_007fb244 <= sVar18)))) {
            local_8 = (STWorldObject *)0x0;
          }
          else {
            local_8 = g_worldCells
                      [(int)SHORT_007fb246 * (int)sVar18 + (int)sVar14 * (int)SHORT_007fb240 +
                       (int)sVar17].objects[0];
          }
          if (((local_8 != (STWorldObject *)0x0) &&
              (*(int *)&local_8->field_0x18 == this->field_0649)) &&
             (iVar8 = (*local_8->vtable[5].slots_00_28[2])(), iVar8 != 0)) {
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
        sVar17 = this->field_0639;
        iVar8 = this->field_063D + 1;
        break;
      case -1:
        iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3525,0,0,&DAT_007a4ccc,
                                   s_STBoatC__Teleport__TELEPORT_MOVE_007ab4f8);
        if (iVar8 != 0) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        iVar8 = 0x3525;
LAB_00479ba6:
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar8)
        ;
        return 0xffff;
      }
    }
    else {
      if (iVar8 == 1) {
        *(int *)((int)&this->field_065A + 3) = *(int *)((int)&this->field_065A + 3) + 1;
        iVar8 = Defence(this,2);
        if (iVar8 == -1) {
          return -1;
        }
        if (this->field_082E != 0) {
          return 2;
        }
        if (this->field_048B != 0xffff) {
          return 2;
        }
        if (*(int *)((int)&this->field_065A + 3) % 10 != 0) {
          return 2;
        }
        if (this->field_0635 == 1) {
          sVar17 = this->field_0643;
          sVar18 = this->field_0647;
          sVar14 = this->field_0645;
          if (((((sVar17 < 0) || (SHORT_007fb240 <= sVar17)) || (sVar14 < 0)) ||
              ((SHORT_007fb242 <= sVar14 || (sVar18 < 0)))) || (SHORT_007fb244 <= sVar18)) {
            local_8 = (STWorldObject *)0x0;
          }
          else {
            local_8 = g_worldCells
                      [(int)SHORT_007fb246 * (int)sVar18 + (int)sVar14 * (int)SHORT_007fb240 +
                       (int)sVar17].objects[0];
          }
          if (local_8 == (STWorldObject *)0x0) {
            return 0;
          }
          if (*(int *)&local_8->field_0x18 != this->field_0649) {
            return 0;
          }
          iVar8 = (*local_8->vtable[5].slots_00_28[2])();
          if (iVar8 == 0) {
            return 0;
          }
        }
        sVar17 = this->field_0639;
        sVar18 = this->field_063D;
        sVar14 = this->field_063B;
        if (((sVar17 < 0) || (SHORT_007fb240 <= sVar17)) ||
           ((sVar14 < 0 ||
            (((SHORT_007fb242 <= sVar14 || (sVar18 < 0)) || (SHORT_007fb244 <= sVar18)))))) {
          local_8 = (STWorldObject *)0x0;
        }
        else {
          local_8 = g_worldCells
                    [(int)sVar18 * (int)SHORT_007fb246 + (int)sVar14 * (int)SHORT_007fb240 +
                     (int)sVar17].objects[0];
        }
        if (local_8 == (STWorldObject *)0x0) {
          return 0;
        }
        if (*(int *)&local_8->field_0x18 != this->field_063F) {
          return 0;
        }
        iVar8 = (*local_8->vtable[5].slots_00_28[2])();
        if (iVar8 == 0) {
          return 0;
        }
        bVar6 = sub_004939B0(this,(short *)&this->field_0x651,(short *)&this->field_0x653,
                             (short *)&this->field_0x655);
        if (CONCAT31(extraout_var_00,bVar6) != 1) {
          return 2;
        }
        iVar8 = thunk_FUN_004e91e0(local_8,this);
        if (iVar8 != 1) {
          return 2;
        }
        *(undefined4 *)&this->field_0x663 = 2;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 != 3) {
            if (iVar8 == 4) {
              if (*(int *)((int)&this->field_0666 + 1) == 0) {
                SVar4 = this->field_06F7;
                if ((((SVar4 == CASE_7) || (SVar4 == CASE_13)) || (SVar4 == CASE_1B)) &&
                   ((this->field_07CA != 0 &&
                    (iVar8 = FUN_006e62d0(PTR_00802a38,this->field_07CA,(int *)&local_8),
                    iVar8 != -4)))) {
                  iVar22 = (int)this->field_0045;
                  iVar8 = (int)this->field_0043;
                  iVar9 = (int)this->field_0041;
                  uVar25 = 0;
                  iVar12 = 0;
                  uVar10 = thunk_FUN_004ad650((int)((int)&local_8[0xd].vtable + 1));
                }
                else {
                  iVar22 = (int)this->field_0045;
                  iVar8 = (int)this->field_0043;
                  iVar9 = (int)this->field_0041;
                  uVar25 = 0;
                  uVar10 = this->field_01ED;
                  iVar12 = 0;
                }
                thunk_FUN_006377b0(uVar10,iVar12,iVar9,iVar8,iVar22,uVar25);
                *(undefined4 *)((int)&this->field_0666 + 1) = 1;
                *(undefined4 *)((int)&this->field_065A + 3) = 0;
              }
              if ((*(int *)((int)&this->field_0666 + 1) == 1) &&
                 (iVar8 = *(int *)((int)&this->field_065A + 3) + 1,
                 *(int *)((int)&this->field_065A + 3) = iVar8, iVar8 == 0x16)) {
                *(undefined4 *)((int)&this->field_0666 + 1) = 2;
                *(undefined4 *)((int)&this->field_065A + 3) = 0;
                thunk_FUN_0041c5a0((AnonShape_0041C5A0_167218F4 *)this);
                if (((this->field_06F7 == CASE_B) || (this->field_06F7 == CASE_23)) &&
                   ((*(int *)&this->field_0x21d == 1 &&
                    (*(uint *)&this->field_0x24 == (uint)DAT_0080874d)))) {
                  FUN_006e6780((void *)this->field_0211,
                               CONCAT22(CONCAT11(2,(char)((uint)this->field_0018 >> 0x10)),
                                        *(undefined2 *)&this->field_0018));
                }
                thunk_FUN_004d0a80(DAT_00800bcc,(int)*(short *)&this->field_0x657,
                                   (int)*(short *)&this->field_0x659,
                                   (int)*(short *)((int)&this->field_065A + 1));
                thunk_FUN_00417a20(this,*(short *)&this->field_0x657,*(short *)&this->field_0x659,
                                   *(short *)((int)&this->field_065A + 1),1);
                sVar17 = (this->field_0643 + 1) * 0xc9;
                this->field_0041 = sVar17;
                sVar18 = (this->field_0645 + 1) * 0xc9;
                sVar14 = this->field_0647 * 200 + 300;
                this->field_0043 = sVar18;
                this->field_0045 = sVar14;
                local_20 = (int)sVar17;
                thunk_FUN_004ad3c0(&this->field_01D5,(float)local_20 * _DAT_007904f8 * _DAT_007904f0
                                   ,(float)(int)sVar18 * _DAT_007904f8 * _DAT_007904f0,
                                   (float)(int)sVar14 * _DAT_007904f8 * _DAT_007904f0);
                thunk_FUN_0041c3f0(this,(undefined *)this->field_070A);
                SVar4 = this->field_06F7;
                if ((((SVar4 == CASE_7) || (SVar4 == CASE_13)) || (SVar4 == CASE_1B)) &&
                   ((this->field_07CA != 0 &&
                    (iVar8 = FUN_006e62d0(PTR_00802a38,this->field_07CA,(int *)&local_8),
                    iVar8 != -4)))) {
                  iVar9 = (int)this->field_0045;
                  iVar8 = (int)this->field_0043;
                  iVar22 = (int)this->field_0041;
                  uVar25 = 0;
                  iVar12 = 0;
                  uVar10 = thunk_FUN_004ad650((int)((int)&local_8[0xd].vtable + 1));
                  thunk_FUN_006377b0(uVar10,iVar12,iVar22,iVar8,iVar9,uVar25);
                  thunk_FUN_004ad430((int)((int)&local_8[0xd].vtable + 1));
                }
                else {
                  thunk_FUN_006377b0(this->field_01ED,0,(int)this->field_0041,(int)this->field_0043,
                                     (int)this->field_0045,0);
                }
                thunk_FUN_004ad430((int)&this->field_01D5);
              }
              if ((*(int *)((int)&this->field_0666 + 1) == 2) &&
                 (iVar8 = *(int *)((int)&this->field_065A + 3) + 1,
                 *(int *)((int)&this->field_065A + 3) = iVar8, iVar8 == 0x16)) {
                *(undefined4 *)((int)&this->field_0666 + 1) = 3;
                SVar4 = this->field_06F7;
                *(undefined4 *)((int)&this->field_065A + 3) = 0;
                if (((SVar4 == CASE_7) || ((SVar4 == CASE_13 || (SVar4 == CASE_1B)))) &&
                   ((this->field_07CA != 0 &&
                    (iVar8 = FUN_006e62d0(PTR_00802a38,this->field_07CA,(int *)&local_8),
                    iVar8 != -4)))) {
                  thunk_FUN_004ad460((void *)((int)&local_8[0xd].vtable + 1),0);
                }
                thunk_FUN_004ad460(&this->field_01D5,0);
                if ((((this->field_06F7 == CASE_B) || (this->field_06F7 == CASE_23)) &&
                    (*(int *)&this->field_0x21d == 1)) &&
                   (*(uint *)&this->field_0x24 == (uint)DAT_0080874d)) {
                  local_20 = (int)this->field_0041;
                  FUN_006e6710((void *)this->field_0211,
                               (float)local_20 * _DAT_007904f8 * _DAT_007904f0,
                               (float)(int)this->field_0043 * _DAT_007904f8 * _DAT_007904f0,
                               (uint)((float)*(int *)&this->field_0x10d * _DAT_007904f8 +
                                     _DAT_007904f4),0x28,
                               CONCAT22(CONCAT11(2,(char)((uint)this->field_0018 >> 0x10)),
                                        *(undefined2 *)&this->field_0018));
                }
              }
              if ((*(int *)((int)&this->field_0666 + 1) == 3) &&
                 (iVar8 = *(int *)((int)&this->field_065A + 3) + 1,
                 *(int *)((int)&this->field_065A + 3) = iVar8, iVar8 == 10)) {
                *(undefined4 *)&this->field_0x663 = 6;
                *(undefined4 *)((int)&this->field_0666 + 1) = 0;
                *(undefined4 *)&this->field_0x742 = 0;
              }
              goto cf_common_exit_0047ADB5;
            }
            if (iVar8 == 5) {
              if (*(int *)((int)&this->field_0666 + 1) == 0) {
                SVar4 = this->field_06F7;
                if ((((SVar4 == CASE_7) || (SVar4 == CASE_13)) || (SVar4 == CASE_1B)) &&
                   ((this->field_07CA != 0 &&
                    (iVar8 = FUN_006e62d0(PTR_00802a38,this->field_07CA,(int *)&local_8),
                    iVar8 != -4)))) {
                  iVar22 = (int)this->field_0045;
                  iVar8 = (int)this->field_0043;
                  iVar9 = (int)this->field_0041;
                  uVar25 = 0;
                  iVar12 = 0;
                  uVar10 = thunk_FUN_004ad650((int)((int)&local_8[0xd].vtable + 1));
                }
                else {
                  iVar22 = (int)this->field_0045;
                  iVar8 = (int)this->field_0043;
                  iVar9 = (int)this->field_0041;
                  uVar25 = 0;
                  uVar10 = this->field_01ED;
                  iVar12 = 0;
                }
                thunk_FUN_006377b0(uVar10,iVar12,iVar9,iVar8,iVar22,uVar25);
                *(undefined4 *)((int)&this->field_0666 + 1) = 1;
                *(undefined4 *)((int)&this->field_065A + 3) = 0;
              }
              if ((*(int *)((int)&this->field_0666 + 1) == 1) &&
                 (iVar8 = *(int *)((int)&this->field_065A + 3) + 1,
                 *(int *)((int)&this->field_065A + 3) = iVar8, iVar8 == 0x16)) {
                *(undefined4 *)((int)&this->field_065A + 3) = 0;
                *(undefined4 *)((int)&this->field_0666 + 1) = 2;
                if (this->field_0635 == 2) {
                  iVar8 = this->field_071E + -10;
                  this->field_071E = iVar8;
                  if (iVar8 < 0) {
                    this->field_071E = 0;
                  }
                  if ((*(int *)&this->field_0x64d != 0) && (DAT_00811798 != (void *)0x0)) {
                    thunk_FUN_00620670(DAT_00811798,(int)this->field_0047,(int)this->field_0049,
                                       *(uint *)&this->field_0x24);
                  }
                  thunk_FUN_004ea6e0(*(uint *)&this->field_0x24,(int)*(short *)&this->field_0x657,
                                     (int)*(short *)&this->field_0x659,
                                     (int)*(short *)((int)&this->field_065A + 1));
                }
                thunk_FUN_0041c5a0((AnonShape_0041C5A0_167218F4 *)this);
                thunk_FUN_004d0a80(DAT_00800bcc,(int)*(short *)&this->field_0x657,
                                   (int)*(short *)&this->field_0x659,
                                   (int)*(short *)((int)&this->field_065A + 1));
                thunk_FUN_00417a20(this,*(short *)&this->field_0x657,*(short *)&this->field_0x659,
                                   *(short *)((int)&this->field_065A + 1),1);
                local_20 = (int)this->field_0041;
                thunk_FUN_004ad3c0(&this->field_01D5,(float)local_20 * _DAT_007904f8 * _DAT_007904f0
                                   ,(float)(int)this->field_0043 * _DAT_007904f8 * _DAT_007904f0,
                                   (float)(int)this->field_0045 * _DAT_007904f8 * _DAT_007904f0);
                thunk_FUN_0041c3f0(this,(undefined *)this->field_070A);
                SVar4 = this->field_06F7;
                if ((((SVar4 == CASE_7) || (SVar4 == CASE_13)) || (SVar4 == CASE_1B)) &&
                   ((this->field_07CA != 0 &&
                    (iVar8 = FUN_006e62d0(PTR_00802a38,this->field_07CA,(int *)&local_8),
                    iVar8 != -4)))) {
                  iVar9 = (int)this->field_0045;
                  iVar8 = (int)this->field_0043;
                  iVar22 = (int)this->field_0041;
                  uVar25 = 0;
                  iVar12 = 0;
                  uVar10 = thunk_FUN_004ad650((int)((int)&local_8[0xd].vtable + 1));
                  thunk_FUN_006377b0(uVar10,iVar12,iVar22,iVar8,iVar9,uVar25);
                  thunk_FUN_004ad430((int)((int)&local_8[0xd].vtable + 1));
                }
                else {
                  thunk_FUN_006377b0(this->field_01ED,0,(int)this->field_0041,(int)this->field_0043,
                                     (int)this->field_0045,0);
                }
                thunk_FUN_004ad430((int)&this->field_01D5);
              }
              if ((*(int *)((int)&this->field_0666 + 1) == 2) &&
                 (iVar8 = *(int *)((int)&this->field_065A + 3) + 1,
                 *(int *)((int)&this->field_065A + 3) = iVar8, iVar8 == 0x16)) {
                *(undefined4 *)((int)&this->field_0666 + 1) = 3;
                SVar4 = this->field_06F7;
                *(undefined4 *)((int)&this->field_065A + 3) = 0;
                if (((SVar4 == CASE_7) || ((SVar4 == CASE_13 || (SVar4 == CASE_1B)))) &&
                   ((this->field_07CA != 0 &&
                    (iVar8 = FUN_006e62d0(PTR_00802a38,this->field_07CA,(int *)&local_8),
                    iVar8 != -4)))) {
                  thunk_FUN_004ad460((void *)((int)&local_8[0xd].vtable + 1),0);
                }
                thunk_FUN_004ad460(&this->field_01D5,0);
              }
              if ((*(int *)((int)&this->field_0666 + 1) == 3) &&
                 (iVar8 = *(int *)((int)&this->field_065A + 3) + 1,
                 *(int *)((int)&this->field_065A + 3) = iVar8, iVar8 == 10)) {
                sVar17 = this->field_0639;
                sVar18 = this->field_063D;
                sVar14 = this->field_063B;
                *(undefined4 *)&this->field_0x742 = 0;
                if ((sVar17 < 0) ||
                   ((((SHORT_007fb240 <= sVar17 || (sVar14 < 0)) || (SHORT_007fb242 <= sVar14)) ||
                    ((sVar18 < 0 || (SHORT_007fb244 <= sVar18)))))) {
                  local_8 = (STWorldObject *)0x0;
                }
                else {
                  local_8 = g_worldCells
                            [(int)sVar18 * (int)SHORT_007fb246 + (int)sVar14 * (int)SHORT_007fb240 +
                             (int)sVar17].objects[0];
                }
                if (((local_8 != (STWorldObject *)0x0) &&
                    (*(int *)&local_8->field_0x18 == this->field_063F)) &&
                   (iVar8 = (*local_8->vtable[5].slots_00_28[2])(), iVar8 != 0)) {
                  thunk_FUN_004e95c0(local_8,(int)this);
                }
                iVar8 = (*this->vtable->vfunc_D8)();
                if (iVar8 != 0) {
                  return -1;
                }
LAB_0047acdc:
                iVar8 = thunk_FUN_004b2d10((byte)*(undefined4 *)&this->field_0x24,this->field_06F7,
                                           (int)this->field_005B,(int)this->field_005D);
                if (iVar8 == 0) {
                  return 0;
                }
                thunk_FUN_00495010(this,0xaf);
                return 0;
              }
              goto cf_common_exit_0047ADB5;
            }
            if (iVar8 != 6) {
              if (iVar8 != 7) {
                iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3744,0,0,
                                           &DAT_007a4ccc,s_STBoatC__Teleport___incorrect_en_007ab3e8
                                          );
                if (iVar8 == 0) {
                  return -1;
                }
                pcVar5 = (code *)swi(3);
                iVar8 = (*pcVar5)();
                return iVar8;
              }
              iVar8 = sub_00460260(this,2);
              if (iVar8 == -1) {
                return -1;
              }
              if (iVar8 == 0) goto LAB_0047acdc;
              if (iVar8 != 3) {
                return 2;
              }
              iVar8 = CONCAT22(extraout_var_02,*(undefined2 *)&this->field_0x651);
              uVar10 = (uint)(ushort)(*(short *)&this->field_0x655 + 1);
              uVar25 = CONCAT22((short)((uint)&this->field_0x651 >> 0x10),
                                *(undefined2 *)&this->field_0x653);
              thunk_FUN_0048dfd0(this,iVar8,uVar25,uVar10,iVar8,(int *)uVar25,uVar10,(short *)0x1,
                                 (short *)&this->field_0x651,(short *)&this->field_0x653);
              goto LAB_0047b2dc;
            }
            if (*(int *)((int)&this->field_0666 + 1) == 0) {
              iVar8 = (ushort)(*(short *)((int)&this->field_065A + 1) * 200) + 100;
              iVar9 = CONCAT22((short)((uint)this >> 0x10),*(short *)&this->field_0x659 * 0xc9) +
                      100;
              iVar22 = CONCAT22((short)((uint)iVar8 >> 0x10),*(short *)&this->field_0x657 * 0xc9) +
                       100;
              uVar7 = (undefined2)((uint)iVar9 >> 0x10);
              uVar7 = (*this->vtable->vfunc_10)
                                (CONCAT22(uVar7,this->field_0041),
                                 CONCAT22((short)((uint)iVar22 >> 0x10),this->field_0043),
                                 CONCAT22(uVar7,this->field_0045),iVar22,iVar9,iVar8);
              *(undefined2 *)((int)&this->field_065E + 3) = uVar7;
              *(undefined4 *)((int)&this->field_0666 + 1) = 1;
            }
            iVar8 = *(int *)((int)&this->field_0666 + 1);
            if (iVar8 == 1) {
              uVar10 = sub_004176C0(this,*(short *)((int)&this->field_065E + 3));
              uVar10 = sub_00417910(this,(short)uVar10);
              if (uVar10 == 0xffffffff) {
                iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x36e3,0,0,
                                           &DAT_007a4ccc,s_STBoatC__Teleport_TELEPORT_OMOVE_007ab440
                                          );
                if (iVar8 == 0) {
                  return -1;
                }
                pcVar5 = (code *)swi(3);
                iVar8 = (*pcVar5)();
                return iVar8;
              }
              goto joined_r0x0047ada9;
            }
            if (iVar8 == 2) {
              STJellyGunC::sub_00415B30
                        ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                         *(short *)&this->field_0x657 * 0xc9 + 100,
                         *(short *)&this->field_0x659 * 0xc9 + 100,
                         *(short *)((int)&this->field_065A + 1) * 200 + 100,this->field_0061);
              *(undefined4 *)((int)&this->field_0666 + 1) = 3;
            }
            if (*(int *)((int)&this->field_0666 + 1) != 3) goto cf_common_exit_0047ADB5;
            local_14 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_18,&local_1c);
            uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar10;
            iVar8 = (uVar10 >> 0x10) % 7 - 3;
            uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar10;
            uVar25 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar25;
            local_20 = (uVar25 >> 0x10) % 7 - 3;
            if (((int)this->field_074A <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
               (local_c = 0, this->field_0x2bf != '\0')) {
              local_10 = (undefined4 *)&this->field_0x2b3;
              do {
                puVar11 = (undefined4 *)
                          thunk_FUN_0041dc40(local_30,*local_10,*(undefined2 *)(local_10 + 1),
                                             this->field_006C);
                uVar3 = *puVar11;
                bVar24 = 0;
                sVar23 = 0;
                iVar22 = -1;
                local_24 = *(short *)(puVar11 + 1);
                sVar21 = 0;
                sVar20 = 0;
                sVar19 = 0;
                sVar14 = 0;
                sVar18 = 0;
                sVar17 = 0;
                local_28 = uVar3;
                if (DAT_0080732c == 1) {
                  sVar17 = 0;
                  sVar18 = 0;
                  sVar14 = 0;
                  sVar19 = 0;
                  sVar20 = 0;
                  sVar21 = 0;
                  sVar23 = 0;
                  bVar24 = 0;
                  lVar16 = Library::MSVCRT::__ftol();
                  iVar15 = (int)local_24 + this->field_0045 + local_20 + (int)(short)lVar16;
                  iVar9 = (int)this->field_0043 - (int)local_28._2_2_;
                  iVar12 = (int)(short)local_28 + iVar8 + this->field_0041;
                }
                else {
                  iVar15 = (int)local_24 + local_20 + this->field_0045;
                  local_28._2_2_ = (short)((uint)uVar3 >> 0x10);
                  iVar9 = (int)this->field_0043 - (int)local_28._2_2_;
                  local_28._0_2_ = (short)uVar3;
                  iVar12 = (int)(short)local_28 + iVar8 + this->field_0041;
                }
                TraksClassTy::TraksCreate
                          (g_traksClass_00802A7C,1,2,7,iVar12,iVar9 + ((uVar10 >> 0x10) % 7 - 3),
                           iVar15,sVar17,sVar18,sVar14,sVar19,sVar20,sVar21,iVar22,sVar23,bVar24);
                local_10 = (undefined4 *)((int)local_10 + 6);
                local_c = local_c + 1;
              } while (local_c < (int)(uint)(byte)this->field_0x2bf);
            }
            if (local_14 == -1) {
              iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x370a,0,0,
                                         &DAT_007a4ccc,s_STBoatC__Teleport_TELEPORT_OMOVE_007ab414);
              if (iVar8 == 0) {
                return -1;
              }
              pcVar5 = (code *)swi(3);
              iVar8 = (*pcVar5)();
              return iVar8;
            }
            if (local_14 != 0) goto cf_common_exit_0047ADB5;
            sVar17 = this->field_0639;
            iVar8 = 0;
            sVar18 = this->field_063D;
            sVar14 = this->field_063B;
            if ((((sVar17 < 0) || (SHORT_007fb240 <= sVar17)) || (sVar14 < 0)) ||
               (((SHORT_007fb242 <= sVar14 || (sVar18 < 0)) || (SHORT_007fb244 <= sVar18)))) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              iVar8 = (int)sVar17;
              local_8 = g_worldCells
                        [(int)sVar18 * (int)SHORT_007fb246 + (int)sVar14 * (int)SHORT_007fb240 +
                         iVar8].objects[0];
            }
            if ((local_8 != (STWorldObject *)0x0) &&
               (iVar8 = *(int *)&local_8->field_0x18, iVar8 == this->field_063F)) {
              iVar22 = (*local_8->vtable[5].slots_00_28[2])();
              iVar8 = 0;
              if (iVar22 != 0) {
                iVar8 = thunk_FUN_004e95c0(local_8,(int)this);
              }
            }
            sVar17 = this->field_0643;
            iVar8 = CONCAT22((short)((uint)iVar8 >> 0x10),sVar17);
            sVar18 = this->field_0647;
            sVar14 = this->field_0645;
            if (((((sVar17 < 0) || (SHORT_007fb240 <= sVar17)) || (sVar14 < 0)) ||
                ((SHORT_007fb242 <= sVar14 || (sVar18 < 0)))) || (SHORT_007fb244 <= sVar18)) {
              pSVar13 = (STWorldObject *)0x0;
            }
            else {
              iVar8 = (int)sVar17;
              pSVar13 = g_worldCells
                        [(int)sVar18 * (int)SHORT_007fb246 + (int)sVar14 * (int)SHORT_007fb240 +
                         iVar8].objects[0];
            }
            local_8 = pSVar13;
            if ((pSVar13 == (STWorldObject *)0x0) ||
               (iVar8 = *(int *)&pSVar13->field_0x18, iVar8 != this->field_0649)) {
LAB_0047b1c5:
              uVar10 = CONCAT22((short)((uint)pSVar13 >> 0x10),this->field_0645);
              iVar8 = CONCAT22((short)((uint)iVar8 >> 0x10),this->field_0647 + 1);
              iVar22 = CONCAT22((short)((uint)&this->field_0x651 >> 0x10),this->field_0643);
              iVar8 = thunk_FUN_0048dfd0(this,iVar22,uVar10,iVar8,iVar22,(int *)uVar10,iVar8,
                                         (short *)0x2,(short *)&this->field_0x651,
                                         (short *)&this->field_0x653);
joined_r0x0047b202:
              if (iVar8 == 0) {
                *(short *)&this->field_0x651 = this->field_0047;
                *(short *)&this->field_0x653 = this->field_0049;
                *(short *)&this->field_0x655 = this->field_004B;
              }
            }
            else {
              iVar22 = (*pSVar13->vtable[5].slots_00_28[2])();
              iVar8 = 0;
              pSVar13 = extraout_ECX;
              if (iVar22 == 0) goto LAB_0047b1c5;
              puVar2 = &this->field_0x653;
              if (*(int *)&local_8[0x1d].field_0x18 != 0) {
                if (&this->field_0x651 != (undefined1 *)0x0) {
                  *(undefined4 *)&this->field_0x651 = *(undefined4 *)&local_8[0x1d].field_0x1c;
                }
                if (puVar2 != (undefined1 *)0x0) {
                  *(int *)puVar2 = local_8[0x1d].value_20;
                }
                if (&this->field_0x655 != (undefined1 *)0x0) {
                  *(STWorldObjectVTable **)&this->field_0x655 = local_8[0x1e].vtable;
                }
              }
              if (*(int *)&local_8[0x1d].field_0x18 == 0) {
                iVar8 = CONCAT22((short)((uint)local_8 >> 0x10),this->field_0647 + 1);
                iVar22 = CONCAT22((short)((uint)&this->field_0x651 >> 0x10),this->field_0643);
                iVar8 = thunk_FUN_0048dfd0(this,iVar22,(uint)(ushort)this->field_0645,iVar8,iVar22,
                                           (int *)(uint)(ushort)this->field_0645,iVar8,(short *)0x2,
                                           (short *)&this->field_0x651,(short *)puVar2);
                goto joined_r0x0047b202;
              }
            }
            sub_00481520(this,(int)*(short *)&this->field_0x651,(int)*(short *)&this->field_0x653,
                         (int)*(short *)&this->field_0x655);
            sub_00460260(this,0);
            *(undefined4 *)&this->field_0x663 = 7;
cf_common_exit_0047ADB5:
            iVar8 = (*this->vtable->vfunc_D8)();
            return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
          }
          if (*(int *)((int)&this->field_0666 + 1) == 0) {
            iVar9 = (ushort)(this->field_063D * 200) + 300;
            iVar22 = CONCAT22((short)((uint)iVar9 >> 0x10),this->field_063B + 1) * 0xc9;
            iVar12 = CONCAT22((short)((uint)iVar22 >> 0x10),this->field_0639 + 1);
            iVar8 = iVar12 * 0xc9;
            uVar7 = (undefined2)((uint)(iVar12 * 0x19) >> 0x10);
            uVar7 = (*this->vtable->vfunc_10)
                              (CONCAT22(uVar7,this->field_0041),
                               CONCAT22((short)((uint)iVar8 >> 0x10),this->field_0043),
                               CONCAT22(uVar7,this->field_0045),iVar8,iVar22,iVar9);
            *(undefined2 *)((int)&this->field_065E + 3) = uVar7;
            *(undefined4 *)((int)&this->field_0666 + 1) = 1;
          }
          iVar8 = *(int *)((int)&this->field_0666 + 1);
          if (iVar8 == 1) {
            uVar10 = sub_004176C0(this,*(short *)((int)&this->field_065E + 3));
            uVar10 = sub_00417910(this,(short)uVar10);
            if (uVar10 == 0xffffffff) {
              iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x35f4,0,0,
                                         &DAT_007a4ccc,s_STBoatC__Teleport_TELEPORT_PMOVE_007ab498);
              if (iVar8 == 0) {
                return -1;
              }
              pcVar5 = (code *)swi(3);
              iVar8 = (*pcVar5)();
              return iVar8;
            }
joined_r0x0047ada9:
            if (uVar10 == 0) {
              *(undefined4 *)((int)&this->field_0666 + 1) = 2;
            }
            goto cf_common_exit_0047ADB5;
          }
          if (iVar8 == 2) {
            STJellyGunC::sub_00415B30
                      ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                       (this->field_0639 + 1) * 0xc9,(this->field_063B + 1) * 0xc9,
                       this->field_063D * 200 + 300,this->field_0061);
            *(undefined4 *)((int)&this->field_0666 + 1) = 3;
          }
          if (*(int *)((int)&this->field_0666 + 1) != 3) goto cf_common_exit_0047A369;
          local_14 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_20,&local_1c);
          uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar10;
          iVar8 = (uVar10 >> 0x10) % 7 - 3;
          uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar10;
          uVar25 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar25;
          local_18 = (uVar25 >> 0x10) % 7 - 3;
          if (((int)this->field_074A <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
             (local_c = 0, this->field_0x2bf != '\0')) {
            local_10 = (undefined4 *)&this->field_0x2b3;
            do {
              puVar11 = (undefined4 *)
                        thunk_FUN_0041dc40(local_30,*local_10,*(undefined2 *)(local_10 + 1),
                                           this->field_006C);
              uVar3 = *puVar11;
              bVar24 = 0;
              sVar23 = 0;
              iVar22 = -1;
              local_24 = *(short *)(puVar11 + 1);
              sVar21 = 0;
              sVar20 = 0;
              sVar19 = 0;
              sVar14 = 0;
              sVar18 = 0;
              sVar17 = 0;
              local_28 = uVar3;
              if (DAT_0080732c == 1) {
                sVar17 = 0;
                sVar18 = 0;
                sVar14 = 0;
                sVar19 = 0;
                sVar20 = 0;
                sVar21 = 0;
                sVar23 = 0;
                bVar24 = 0;
                lVar16 = Library::MSVCRT::__ftol();
                iVar15 = (int)local_24 + this->field_0045 + local_18 + (int)(short)lVar16;
                iVar9 = (int)this->field_0043 - (int)local_28._2_2_;
                iVar12 = (int)(short)local_28 + iVar8 + this->field_0041;
              }
              else {
                iVar15 = (int)local_24 + local_18 + this->field_0045;
                local_28._2_2_ = (short)((uint)uVar3 >> 0x10);
                iVar9 = (int)this->field_0043 - (int)local_28._2_2_;
                local_28._0_2_ = (short)uVar3;
                iVar12 = (int)(short)local_28 + iVar8 + this->field_0041;
              }
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,iVar12,iVar9 + ((uVar10 >> 0x10) % 7 - 3),
                         iVar15,sVar17,sVar18,sVar14,sVar19,sVar20,sVar21,iVar22,sVar23,bVar24);
              local_10 = (undefined4 *)((int)local_10 + 6);
              local_c = local_c + 1;
            } while (local_c < (int)(uint)(byte)this->field_0x2bf);
          }
          if (local_14 == -1) {
            iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x361b,0,0,
                                       &DAT_007a4ccc,s_STBoatC__Teleport_TELEPORT_PMOVE_007ab46c);
            if (iVar8 == 0) {
              return -1;
            }
            pcVar5 = (code *)swi(3);
            iVar8 = (*pcVar5)();
            return iVar8;
          }
          if (local_14 != 0) goto cf_common_exit_0047A369;
          if (this->field_0635 == 1) {
            sVar17 = this->field_0643;
            sVar18 = this->field_0647;
            sVar14 = this->field_0645;
            if ((((sVar17 < 0) || (SHORT_007fb240 <= sVar17)) || (sVar14 < 0)) ||
               (((SHORT_007fb242 <= sVar14 || (sVar18 < 0)) || (SHORT_007fb244 <= sVar18)))) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              local_8 = g_worldCells
                        [(int)sVar18 * (int)SHORT_007fb246 + (int)sVar14 * (int)SHORT_007fb240 +
                         (int)sVar17].objects[0];
            }
            if (((local_8 != (STWorldObject *)0x0) &&
                (*(int *)&local_8->field_0x18 == this->field_0649)) &&
               ((iVar8 = (*local_8->vtable[5].slots_00_28[2])(), iVar8 != 0 &&
                ((*(int *)&local_8[0x21].field_0x10 == 0 && (*(int *)&local_8[0x10].field_0x5 != 6))
                )))) goto LAB_0047a385;
            param_1 = PTR_00802a38->field_00E4;
          }
          else {
LAB_0047a385:
            sVar17 = this->field_0639;
            sVar18 = this->field_063D;
            sVar14 = this->field_063B;
            if (((sVar17 < 0) ||
                (((SHORT_007fb240 <= sVar17 || (sVar14 < 0)) || (SHORT_007fb242 <= sVar14)))) ||
               ((sVar18 < 0 || (SHORT_007fb244 <= sVar18)))) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              local_8 = g_worldCells
                        [(int)sVar18 * (int)SHORT_007fb246 + (int)sVar14 * (int)SHORT_007fb240 +
                         (int)sVar17].objects[0];
            }
            if (((local_8 != (STWorldObject *)0x0) &&
                (*(int *)&local_8->field_0x18 == this->field_063F)) &&
               ((iVar8 = (*local_8->vtable[5].slots_00_28[2])(), iVar8 != 0 &&
                ((*(int *)&local_8[0x21].field_0x10 == 0 && (*(int *)&local_8[0x10].field_0x5 != 6))
                )))) {
              psVar1 = (short *)((int)&this->field_065A + 1);
              *(undefined4 *)&this->field_0x742 = 1;
              thunk_FUN_004e9650(local_8,(undefined4 *)&this->field_0x657,
                                 (undefined4 *)&this->field_0x659,(undefined4 *)psVar1);
              thunk_FUN_004e96c0(local_8,(int *)this->field_0018);
              thunk_FUN_004d0970(DAT_00800bcc,(int)*(short *)&this->field_0x657,
                                 (int)*(short *)&this->field_0x659,(int)*psVar1);
              *(undefined4 *)((int)&this->field_0666 + 1) = 0;
              *(uint *)&this->field_0x663 = (this->field_0635 != 1) + 4;
              goto cf_common_exit_0047A369;
            }
            param_1 = PTR_00802a38->field_00E4;
          }
          CmdToObj(this,CASE_3,&param_1);
cf_common_exit_0047A369:
          iVar8 = (*this->vtable->vfunc_D8)();
          return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
        }
        iVar8 = sub_00460260(this,2);
        switch(iVar8) {
        case 0:
          if (this->field_0635 == 1) {
            sVar17 = this->field_0643;
            sVar18 = this->field_0647;
            sVar14 = this->field_0645;
            if (((sVar17 < 0) || (SHORT_007fb240 <= sVar17)) ||
               ((sVar14 < 0 ||
                (((SHORT_007fb242 <= sVar14 || (sVar18 < 0)) || (SHORT_007fb244 <= sVar18)))))) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              local_8 = g_worldCells
                        [(int)sVar18 * (int)SHORT_007fb246 + (int)sVar14 * (int)SHORT_007fb240 +
                         (int)sVar17].objects[0];
            }
            if (local_8 == (STWorldObject *)0x0) {
              return 0;
            }
            if (*(int *)&local_8->field_0x18 != this->field_0649) {
              return 0;
            }
            iVar8 = (*local_8->vtable[5].slots_00_28[2])();
            if (iVar8 == 0) {
              return 0;
            }
          }
          sVar17 = this->field_0639;
          sVar18 = this->field_063D;
          sVar14 = this->field_063B;
          if (((sVar17 < 0) || (SHORT_007fb240 <= sVar17)) ||
             (((sVar14 < 0 || ((SHORT_007fb242 <= sVar14 || (sVar18 < 0)))) ||
              (SHORT_007fb244 <= sVar18)))) {
            local_8 = (STWorldObject *)0x0;
          }
          else {
            local_8 = g_worldCells
                      [(int)sVar18 * (int)SHORT_007fb246 + (int)sVar14 * (int)SHORT_007fb240 +
                       (int)sVar17].objects[0];
          }
          if (local_8 == (STWorldObject *)0x0) {
            return 0;
          }
          if (*(int *)&local_8->field_0x18 != this->field_063F) {
            return 0;
          }
          iVar8 = (*local_8->vtable[5].slots_00_28[2])();
          if (iVar8 == 0) {
            return 0;
          }
          if (((this->field_0047 == *(short *)&this->field_0x651) &&
              (this->field_0049 == *(short *)&this->field_0x653)) &&
             (this->field_004B == *(short *)&this->field_0x655)) {
            *(undefined4 *)&this->field_0x663 = 3;
            *(undefined4 *)((int)&this->field_0666 + 1) = 0;
            return 2;
          }
          thunk_FUN_004e95c0(local_8,(int)this);
          return 0;
        case 1:
          sVar17 = this->field_0639;
          sVar18 = this->field_063D;
          sVar14 = this->field_063B;
          if (((sVar17 < 0) || (SHORT_007fb240 <= sVar17)) ||
             ((sVar14 < 0 ||
              (((SHORT_007fb242 <= sVar14 || (sVar18 < 0)) || (SHORT_007fb244 <= sVar18)))))) {
            local_8 = (STWorldObject *)0x0;
          }
          else {
            local_8 = g_worldCells
                      [(int)sVar18 * (int)SHORT_007fb246 + (int)sVar14 * (int)SHORT_007fb240 +
                       (int)sVar17].objects[0];
          }
          if (((local_8 != (STWorldObject *)0x0) &&
              (*(int *)&local_8->field_0x18 == this->field_063F)) &&
             (iVar8 = (*local_8->vtable[5].slots_00_28[2])(), iVar8 != 0)) {
            if (this->field_0635 != 1) {
              return 2;
            }
            sVar17 = this->field_0643;
            sVar18 = this->field_0647;
            sVar14 = this->field_0645;
            if (((sVar17 < 0) || (SHORT_007fb240 <= sVar17)) ||
               ((sVar14 < 0 ||
                (((SHORT_007fb242 <= sVar14 || (sVar18 < 0)) || (SHORT_007fb244 <= sVar18)))))) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              local_8 = g_worldCells
                        [(int)sVar18 * (int)SHORT_007fb246 + (int)sVar14 * (int)SHORT_007fb240 +
                         (int)sVar17].objects[0];
            }
            if (((local_8 != (STWorldObject *)0x0) &&
                (*(int *)&local_8->field_0x18 == this->field_0649)) &&
               (iVar8 = (*local_8->vtable[5].slots_00_28[2])(), iVar8 != 0)) {
              return 2;
            }
          }
          sub_004602B0(this);
          return 0;
        default:
          return 2;
        case 3:
          bVar6 = sub_004939B0(this,(short *)&this->field_0x651,(short *)&this->field_0x653,
                               (short *)&this->field_0x655);
          if (CONCAT31(extraout_var_01,bVar6) != 1) {
            sVar17 = this->field_0639;
            sVar18 = this->field_063D;
            sVar14 = this->field_063B;
            if ((((sVar17 < 0) || (SHORT_007fb240 <= sVar17)) || (sVar14 < 0)) ||
               (((SHORT_007fb242 <= sVar14 || (sVar18 < 0)) || (SHORT_007fb244 <= sVar18)))) {
              local_8 = (STWorldObject *)0x0;
            }
            else {
              local_8 = g_worldCells
                        [(int)sVar18 * (int)SHORT_007fb246 + (int)sVar14 * (int)SHORT_007fb240 +
                         (int)sVar17].objects[0];
            }
            if (local_8 == (STWorldObject *)0x0) {
              return 0;
            }
            if (*(int *)&local_8->field_0x18 != this->field_063F) {
              return 0;
            }
            iVar8 = (*local_8->vtable[5].slots_00_28[2])();
            if (iVar8 == 0) {
              return 0;
            }
            thunk_FUN_004e95c0(local_8,(int)this);
            goto LAB_00479e39;
          }
          break;
        case -1:
          iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3596,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Teleport__TELEPORT_MOVE_007ab4c4);
          if (iVar8 != 0) {
            pcVar5 = (code *)swi(3);
            iVar8 = (*pcVar5)();
            return iVar8;
          }
          iVar8 = 0x3596;
          goto LAB_00479ba6;
        }
      }
      iVar8 = (int)*(short *)&this->field_0x655;
      sVar18 = *(short *)&this->field_0x653;
      sVar17 = *(short *)&this->field_0x651;
    }
    sub_00481520(this,(int)sVar17,(int)sVar18,iVar8);
  }
  sub_00460260(this,0);
switchD_00479647_caseD_2:
  return 2;
}

