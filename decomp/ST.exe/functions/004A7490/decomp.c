
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::ReMakePatrolPoints */

void __thiscall STGroupBoatC::ReMakePatrolPoints(STGroupBoatC *this,int param_1)

{
  ushort uVar1;
  code *pcVar2;
  uint *groupContent;
  short *psVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  short local_4c;
  short local_4a;
  short local_48;
  short local_3c;
  short local_3a;
  short local_38;
  int local_32;
  short local_2c;
  short local_2a;
  short local_28;
  int local_26;
  undefined4 local_22;
  short local_1c;
  short local_1a;
  short local_18;
  int local_14;
  STGroupBoatC *local_10;
  uint local_c;
  uint local_8;
  
  uVar1 = this->field_0027;
  if (uVar1 < 10) {
    this->field_0242 = 2;
  }
  else if (uVar1 < 0x28) {
    this->field_0242 = 4;
  }
  else if (uVar1 < 100) {
    this->field_0242 = 6;
  }
  else if (uVar1 < 0xf0) {
    this->field_0242 = 8;
  }
  else {
    this->field_0242 = 10;
  }
  local_10 = this;
  groupContent = Library::DKW::TBL::FUN_006ae290
                           ((uint *)0x0,*(uint *)(this->field_0226 + 0xc),0xe,1);
  iVar6 = this->field_0226;
  uVar8 = 0;
  if (0 < *(int *)(iVar6 + 0xc)) {
    do {
      FUN_006acc70(iVar6,uVar8,(undefined4 *)&local_1c);
      local_2c = local_1c;
      local_2a = local_1a;
      local_22 = 0;
      local_26 = 0;
      local_28 = local_18;
      Library::DKW::TBL::FUN_006ae140(groupContent,uVar8,(undefined4 *)&local_2c);
      iVar6 = this->field_0226;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < *(int *)(iVar6 + 0xc));
  }
  uVar8 = groupContent[3];
  if (1 < uVar8) {
    local_8 = 0;
    if (uVar8 != 1 && -1 < (int)(uVar8 - 1)) {
      local_c = 1;
      do {
        FUN_006acc70((int)groupContent,local_8,(undefined4 *)&local_2c);
        FUN_006acc70((int)groupContent,local_c,(undefined4 *)&local_3c);
        psVar3 = Library::DKW::WAY::FUN_006a9190
                           ((int)DAT_007fb280,(int)SHORT_007fb278,(int)SHORT_007fb27a,
                            (int)SHORT_007fb27c,(short *)(int)local_2c,(short *)(int)local_2a,
                            (short *)(int)local_28,(short *)(int)local_3c,(short *)(int)local_3a,
                            (short *)(int)local_38,0,&local_14,(undefined4 *)0x0,(short *)0x0,0);
        if (psVar3 == (short *)0x0) {
          uVar8 = (int)SHORT_007fb278 * (int)SHORT_007fb27a * (int)SHORT_007fb27c;
          puVar7 = DAT_007fb280;
          puVar9 = DAT_007fb238;
          for (uVar5 = (uVar8 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar8 = uVar8 * 2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          FUN_006ab090((int)DAT_007fb238,(int)SHORT_007fb278,(int)SHORT_007fb27a,(int)SHORT_007fb27c
                       ,(int)local_2c,(int)local_2a,(int)local_28,(int)local_3c,(int)local_3a,
                       (int)local_38);
          iVar6 = *(short *)((int)DAT_007fb238 +
                            ((int)SHORT_007fb27e * (int)local_38 +
                             (int)SHORT_007fb278 * (int)local_3a + (int)local_3c) * 2) + -1;
          this = local_10;
        }
        else {
          iVar6 = (int)psVar3[3];
          FUN_006a5e90(psVar3);
        }
        uVar8 = local_c;
        iVar6 = iVar6 / 3;
        if (iVar6 < (int)this->field_0242) {
          FUN_006b0c70((int)groupContent,local_c);
          local_8 = local_8 - 1;
          local_c = uVar8 - 1;
        }
        else {
          local_32 = iVar6;
          local_26 = iVar6;
          Library::DKW::TBL::FUN_006ae140(groupContent,local_8,(undefined4 *)&local_2c);
          Library::DKW::TBL::FUN_006ae140(groupContent,local_c,(undefined4 *)&local_3c);
        }
        local_8 = local_8 + 1;
        local_c = local_c + 1;
      } while ((int)local_8 < (int)(groupContent[3] - 1));
    }
    if (this->field_0232 != 0xffffffff) {
      FUN_006acc70(this->field_022A,this->field_0232,(undefined4 *)&local_4c);
      iVar6 = this->field_0226;
      uVar8 = 0;
      local_c = 0xffffffff;
      if (0 < *(int *)(iVar6 + 0xc)) {
        do {
          FUN_006acc70(iVar6,uVar8,(undefined4 *)&local_1c);
          if (((local_1c == local_4c) && (local_1a == local_4a)) && (local_18 == local_48)) {
            local_c = uVar8;
            if (uVar8 != 0xffffffff) goto LAB_004a77bb;
            break;
          }
          iVar6 = this->field_0226;
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < *(int *)(iVar6 + 0xc));
      }
      iVar6 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x15ed,0,0,&DAT_007a4ccc,
                                 s_STGroupBoatC__ReMakePatrolPoints_007ac450);
      if (iVar6 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
LAB_004a77bb:
      this->field_0232 = 0xffffffff;
      local_8 = local_c;
      if (this->field_0236 == 1) {
        iVar6 = this->field_0226;
        if ((int)local_c < *(int *)(iVar6 + 0xc)) {
          do {
            FUN_006acc70(iVar6,local_8,(undefined4 *)&local_1c);
            uVar8 = 0;
            if (0 < (int)groupContent[3]) {
              do {
                FUN_006acc70((int)groupContent,uVar8,(undefined4 *)&local_2c);
                if (((local_1c == local_2c) && (local_1a == local_2a)) && (local_18 == local_28)) {
                  this->field_0232 = uVar8;
                  break;
                }
                uVar8 = uVar8 + 1;
              } while ((int)uVar8 < (int)groupContent[3]);
            }
            if (this->field_0232 != -1) break;
            iVar6 = this->field_0226;
            local_8 = local_8 + 1;
          } while ((int)local_8 < *(int *)(iVar6 + 0xc));
        }
        if (this->field_0232 != -1) goto LAB_004a792e;
        this->field_0232 = groupContent[3] - 1;
      }
      else {
        for (; -1 < (int)local_8; local_8 = local_8 - 1) {
          FUN_006acc70(this->field_0226,local_8,(undefined4 *)&local_1c);
          uVar8 = 0;
          if (0 < (int)groupContent[3]) {
            do {
              FUN_006acc70((int)groupContent,uVar8,(undefined4 *)&local_2c);
              if (((local_1c == local_2c) && (local_1a == local_2a)) && (local_18 == local_28)) {
                this->field_0232 = uVar8;
                break;
              }
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < (int)groupContent[3]);
          }
          if (this->field_0232 != -1) break;
        }
        if (this->field_0232 != -1) goto LAB_004a792e;
        this->field_0232 = 0;
      }
      if ((this->field_0232 == -1) &&
         (iVar6 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x160e,0,0,
                                     &DAT_007a4ccc,s_STGroupBoatC__ReMakePatrolPoints_007ac418),
         iVar6 != 0)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_004a792e;
    }
  }
  this->field_0232 = 0;
LAB_004a792e:
  if ((byte *)this->field_022A != (byte *)0x0) {
    FUN_006ae110((byte *)this->field_022A);
    this->field_022A = 0;
  }
  puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,groupContent[3],0xe,1);
  this->field_022A = puVar4;
  uVar8 = 0;
  if (0 < (int)groupContent[3]) {
    do {
      FUN_006acc70((int)groupContent,uVar8,(undefined4 *)&local_2c);
      Library::DKW::TBL::FUN_006ae140((uint *)this->field_022A,uVar8,(undefined4 *)&local_2c);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)groupContent[3]);
  }
  FUN_006ae110((byte *)groupContent);
  return;
}

