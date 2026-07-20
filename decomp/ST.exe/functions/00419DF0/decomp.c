
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::SetSelfCheckFlag */

void __thiscall STGameObjC::SetSelfCheckFlag(STGameObjC *this,int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  AnonPointee_STGameObjC_0195 *pAVar5;
  AnonPointee_STGameObjC_0199 *pAVar6;
  AnonPointee_STGameObjC_01AD *pAVar7;
  AnonPointee_STGameObjC_01B1 *pAVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  if (this->field_01CD == 1) {
    return;
  }
  if (this->field_01CD == 0) {
    this->field_01CD = 1;
    iVar4 = Library::DKW::LIB::FUN_006aac70(0x36);
    this->field_011D = iVar4;
    iVar4 = Library::DKW::LIB::FUN_006aac70(0x36);
    this->field_0121 = iVar4;
    iVar4 = Library::DKW::LIB::FUN_006aac70(0x5c);
    this->field_0125 = iVar4;
    iVar4 = Library::DKW::LIB::FUN_006aac70(0x5c);
    this->field_0129 = iVar4;
    uVar1 = this->field_0020;
    if (uVar1 < 0x1af) {
      if (uVar1 == 0x1ae) {
        pAVar7 = (AnonPointee_STGameObjC_01AD *)Library::DKW::LIB::FUN_006aac70(0xb);
        this->field_01AD = pAVar7;
        pAVar8 = (AnonPointee_STGameObjC_01B1 *)Library::DKW::LIB::FUN_006aac70(0xb);
        this->field_01B1 = pAVar8;
        iVar4 = Library::DKW::LIB::FUN_006aac70(6);
        this->field_01C5 = iVar4;
        iVar4 = Library::DKW::LIB::FUN_006aac70(6);
        this->field_01C9 = iVar4;
      }
      else if (uVar1 < 0x173) {
        if (uVar1 != 0x172) {
          if (uVar1 == 0x14) {
            this->field_015D = 0;
            this->field_0161 = 0;
            this->field_0165 = 0;
            this->field_0169 = 0;
            this->field_016D = 0;
            this->field_0171 = 0;
            this->field_0175 = 0;
            this->field_0179 = 0;
            this->field_017D = 0;
            this->field_0181 = 0;
            pAVar5 = (AnonPointee_STGameObjC_0195 *)Library::DKW::LIB::FUN_006aac70(0x13);
            this->field_0195 = pAVar5;
            pAVar6 = (AnonPointee_STGameObjC_0199 *)Library::DKW::LIB::FUN_006aac70(0x13);
            this->field_0199 = pAVar6;
            pAVar7 = (AnonPointee_STGameObjC_01AD *)Library::DKW::LIB::FUN_006aac70(0xb);
            this->field_01AD = pAVar7;
            pAVar8 = (AnonPointee_STGameObjC_01B1 *)Library::DKW::LIB::FUN_006aac70(0xb);
            this->field_01B1 = pAVar8;
            iVar4 = Library::DKW::LIB::FUN_006aac70(0x240);
            this->field_01BD = iVar4;
            iVar4 = Library::DKW::LIB::FUN_006aac70(0x240);
            this->field_01C1 = iVar4;
          }
          else if (uVar1 != 0x5a) goto cf_common_exit_00419F6C;
        }
      }
      else if (uVar1 != 0x1a4) {
cf_common_exit_00419F6C:
        iVar4 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x54d,0,0,&DAT_007a4ccc,
                                   s_STGameObjC__SetSelfCheckFlag_unk_007a4e58);
        if (iVar4 == 0) {
          return;
        }
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (uVar1 != 0x1b8) {
      if (uVar1 == 1000) {
        this->field_012D = 0;
        this->field_0131 = 0;
        this->field_0135 = 0;
        this->field_0139 = 0;
        this->field_013D = 0;
        this->field_0141 = 0;
        this->field_0145 = 0;
        this->field_0149 = 0;
        this->field_014D = 0;
        this->field_0151 = 0;
        this->field_0155 = 0;
        this->field_0159 = 0;
        iVar4 = Library::DKW::LIB::FUN_006aac70(0x129);
        this->field_0185 = iVar4;
        iVar4 = Library::DKW::LIB::FUN_006aac70(0x129);
        this->field_0189 = iVar4;
        iVar4 = Library::DKW::LIB::FUN_006aac70(0x10);
        this->field_018D = iVar4;
        iVar4 = Library::DKW::LIB::FUN_006aac70(0x10);
        this->field_0191 = iVar4;
        this->field_019D = 0;
        this->field_01A1 = 0;
        iVar4 = Library::DKW::LIB::FUN_006aac70(0xc);
        this->field_01A5 = iVar4;
        iVar4 = Library::DKW::LIB::FUN_006aac70(0xc);
        this->field_01A9 = iVar4;
        iVar4 = Library::DKW::LIB::FUN_006aac70(0xb);
        this->field_01B5 = iVar4;
        iVar4 = Library::DKW::LIB::FUN_006aac70(0xb);
        this->field_01B9 = iVar4;
      }
      else if (uVar1 != 0x3e9) goto cf_common_exit_00419F6C;
    }
  }
  (*(code *)this->field_0000->field_0030)(this->field_0121);
  puVar9 = (undefined4 *)this->field_0121;
  puVar10 = (undefined4 *)this->field_011D;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)puVar10 = *(undefined2 *)puVar9;
  (*(code *)this->field_0000->field_0034)(this->field_0129);
  puVar9 = (undefined4 *)this->field_0129;
  puVar10 = (undefined4 *)this->field_0125;
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  uVar1 = this->field_0020;
  if (uVar1 < 0x1af) {
    if (uVar1 == 0x1ae) {
      (*(code *)this->field_0000->field_0058)(this->field_01B1);
      pAVar8 = this->field_01B1;
      pAVar7 = this->field_01AD;
      pAVar7->field_0000 = pAVar8->field_0000;
      pAVar7->field_0004 = pAVar8->field_0004;
      pAVar7->field_0008 = pAVar8->field_0008;
      pAVar7->field_000A = pAVar8->field_000A;
      (**(code **)&this->field_0000->field_0x64)(this->field_01C9);
      puVar9 = (undefined4 *)this->field_01C9;
      puVar10 = (undefined4 *)this->field_01C5;
      *puVar10 = *puVar9;
      *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(puVar9 + 1);
      return;
    }
    if (uVar1 < 0x173) {
      if (uVar1 == 0x172) {
        return;
      }
      if (uVar1 == 0x14) {
        puVar9 = &this->field_0171;
        if ((byte *)this->field_0171 != (byte *)0x0) {
          FUN_006ae110((byte *)this->field_0171);
        }
        if ((byte *)this->field_0175 != (byte *)0x0) {
          FUN_006ae110((byte *)this->field_0175);
        }
        if ((byte *)this->field_0179 != (byte *)0x0) {
          FUN_006ae110((byte *)this->field_0179);
        }
        if ((byte *)this->field_017D != (byte *)0x0) {
          FUN_006ae110((byte *)this->field_017D);
        }
        if ((byte *)this->field_0181 != (byte *)0x0) {
          FUN_006ae110((byte *)this->field_0181);
        }
        *puVar9 = 0;
        this->field_0175 = 0;
        this->field_0179 = 0;
        this->field_017D = 0;
        this->field_0181 = 0;
        (*(code *)this->field_0000->field_0040)(puVar9);
        Library::DKW::TBL::FUN_006afe40(&this->field_015D,(uint *)*puVar9);
        Library::DKW::TBL::FUN_006afe40(&this->field_0161,(uint *)this->field_0175);
        Library::DKW::TBL::FUN_006afe40(&this->field_0165,(uint *)this->field_0179);
        Library::DKW::TBL::FUN_006afe40(&this->field_0169,(uint *)this->field_017D);
        Library::DKW::TBL::FUN_006afe40(&this->field_016D,(uint *)this->field_0181);
        (*(code *)this->field_0000->field_004C)(this->field_0199);
        pAVar6 = this->field_0199;
        pAVar5 = this->field_0195;
        pAVar5->field_0000 = pAVar6->field_0000;
        pAVar5->field_0004 = pAVar6->field_0004;
        pAVar5->field_0008 = pAVar6->field_0008;
        pAVar5->field_000C = pAVar6->field_000C;
        pAVar5->field_0010 = pAVar6->field_0010;
        pAVar5->field_0012 = pAVar6->field_0012;
        (*(code *)this->field_0000->field_0058)(this->field_01B1);
        pAVar8 = this->field_01B1;
        pAVar7 = this->field_01AD;
        pAVar7->field_0000 = pAVar8->field_0000;
        pAVar7->field_0004 = pAVar8->field_0004;
        pAVar7->field_0008 = pAVar8->field_0008;
        pAVar7->field_000A = pAVar8->field_000A;
        (*(code *)this->field_0000->field_0060)(this->field_01C1);
        puVar9 = (undefined4 *)this->field_01C1;
        puVar10 = (undefined4 *)this->field_01BD;
        for (iVar4 = 0x90; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        return;
      }
      if (uVar1 == 0x5a) {
        return;
      }
    }
    else if (uVar1 == 0x1a4) {
      return;
    }
  }
  else {
    if (uVar1 == 0x1b8) {
      return;
    }
    if (uVar1 == 1000) {
      puVar9 = &this->field_0135;
      if ((byte *)this->field_0135 != (byte *)0x0) {
        FUN_006ae110((byte *)this->field_0135);
      }
      if ((byte *)this->field_0139 != (byte *)0x0) {
        FUN_006ae110((byte *)this->field_0139);
      }
      *puVar9 = 0;
      this->field_0139 = 0;
      (**(code **)&this->field_0000->field_0x38)(puVar9);
      Library::DKW::TBL::FUN_006afe40(&this->field_012D,(uint *)*puVar9);
      Library::DKW::TBL::FUN_006afe40(&this->field_0131,(uint *)this->field_0139);
      puVar9 = &this->field_014D;
      if ((byte *)this->field_014D != (byte *)0x0) {
        FUN_006ae110((byte *)this->field_014D);
      }
      if ((byte *)this->field_0151 != (byte *)0x0) {
        FUN_006ae110((byte *)this->field_0151);
      }
      if ((byte *)this->field_0155 != (byte *)0x0) {
        FUN_006ae110((byte *)this->field_0155);
      }
      if ((byte *)this->field_0159 != (byte *)0x0) {
        FUN_006ae110((byte *)this->field_0159);
      }
      *puVar9 = 0;
      this->field_0151 = 0;
      this->field_0155 = 0;
      this->field_0159 = 0;
      (**(code **)&this->field_0000->field_0x3c)(puVar9);
      Library::DKW::TBL::FUN_006afe40(&this->field_013D,(uint *)*puVar9);
      Library::DKW::TBL::FUN_006afe40(&this->field_0141,(uint *)this->field_0151);
      Library::DKW::TBL::FUN_006afe40(&this->field_0145,(uint *)this->field_0155);
      Library::DKW::TBL::FUN_006afe40(&this->field_0149,(uint *)this->field_0159);
      (**(code **)&this->field_0000->field_0x44)(this->field_0189);
      puVar9 = (undefined4 *)this->field_0189;
      puVar10 = (undefined4 *)this->field_0185;
      for (iVar4 = 0x4a; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
      (**(code **)&this->field_0000->field_0x48)(this->field_0191);
      puVar10 = (undefined4 *)this->field_0191;
      puVar2 = (undefined4 *)this->field_018D;
      puVar9 = &this->field_01A1;
      *puVar2 = *puVar10;
      puVar2[1] = puVar10[1];
      puVar2[2] = puVar10[2];
      puVar2[3] = puVar10[3];
      if ((byte *)*puVar9 != (byte *)0x0) {
        FUN_006ae110((byte *)*puVar9);
        *puVar9 = 0;
      }
      if ((byte *)this->field_019D != (byte *)0x0) {
        FUN_006ae110((byte *)this->field_019D);
        this->field_019D = 0;
      }
      (**(code **)&this->field_0000->field_0x50)(puVar9);
      Library::DKW::TBL::FUN_006afe40(&this->field_019D,(uint *)*puVar9);
      (**(code **)&this->field_0000->field_0x54)(this->field_01A9);
      puVar9 = (undefined4 *)this->field_01A9;
      puVar10 = (undefined4 *)this->field_01A5;
      *puVar10 = *puVar9;
      puVar10[1] = puVar9[1];
      puVar10[2] = puVar9[2];
      (**(code **)&this->field_0000->field_0x5c)(this->field_01B9);
      puVar9 = (undefined4 *)this->field_01B9;
      puVar10 = (undefined4 *)this->field_01B5;
      *puVar10 = *puVar9;
      puVar10[1] = puVar9[1];
      *(undefined2 *)(puVar10 + 2) = *(undefined2 *)(puVar9 + 2);
      *(undefined1 *)((int)puVar10 + 10) = *(undefined1 *)((int)puVar9 + 10);
      return;
    }
    if (uVar1 == 0x3e9) {
      return;
    }
  }
  iVar4 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x5a5,0,0,&DAT_007a4ccc,
                             s_STGameObjC__SetSelfCheckFlag_unk_007a4e58);
  if (iVar4 == 0) {
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

