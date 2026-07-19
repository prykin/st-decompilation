
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::SetSelfCheckFlag */

void __thiscall STGameObjC::SetSelfCheckFlag(STGameObjC *this,int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
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
        iVar4 = Library::DKW::LIB::FUN_006aac70(0xb);
        this->field_01AD = iVar4;
        iVar4 = Library::DKW::LIB::FUN_006aac70(0xb);
        this->field_01B1 = iVar4;
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
            iVar4 = Library::DKW::LIB::FUN_006aac70(0x13);
            this->field_0195 = iVar4;
            iVar4 = Library::DKW::LIB::FUN_006aac70(0x13);
            this->field_0199 = iVar4;
            iVar4 = Library::DKW::LIB::FUN_006aac70(0xb);
            this->field_01AD = iVar4;
            iVar4 = Library::DKW::LIB::FUN_006aac70(0xb);
            this->field_01B1 = iVar4;
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
  (**(code **)(this->field_0000 + 0x30))(this->field_0121);
  puVar5 = (undefined4 *)this->field_0121;
  puVar6 = (undefined4 *)this->field_011D;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
  (**(code **)(this->field_0000 + 0x34))(this->field_0129);
  puVar5 = (undefined4 *)this->field_0129;
  puVar6 = (undefined4 *)this->field_0125;
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar1 = this->field_0020;
  if (uVar1 < 0x1af) {
    if (uVar1 == 0x1ae) {
      (**(code **)(this->field_0000 + 0x58))(this->field_01B1);
      puVar5 = (undefined4 *)this->field_01B1;
      puVar6 = (undefined4 *)this->field_01AD;
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      *(undefined2 *)(puVar6 + 2) = *(undefined2 *)(puVar5 + 2);
      *(undefined1 *)((int)puVar6 + 10) = *(undefined1 *)((int)puVar5 + 10);
      (**(code **)(this->field_0000 + 100))(this->field_01C9);
      puVar5 = (undefined4 *)this->field_01C9;
      puVar6 = (undefined4 *)this->field_01C5;
      *puVar6 = *puVar5;
      *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(puVar5 + 1);
      return;
    }
    if (uVar1 < 0x173) {
      if (uVar1 == 0x172) {
        return;
      }
      if (uVar1 == 0x14) {
        puVar5 = &this->field_0171;
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
        *puVar5 = 0;
        this->field_0175 = 0;
        this->field_0179 = 0;
        this->field_017D = 0;
        this->field_0181 = 0;
        (**(code **)(this->field_0000 + 0x40))(puVar5);
        Library::DKW::TBL::FUN_006afe40(&this->field_015D,(uint *)*puVar5);
        Library::DKW::TBL::FUN_006afe40(&this->field_0161,(uint *)this->field_0175);
        Library::DKW::TBL::FUN_006afe40(&this->field_0165,(uint *)this->field_0179);
        Library::DKW::TBL::FUN_006afe40(&this->field_0169,(uint *)this->field_017D);
        Library::DKW::TBL::FUN_006afe40(&this->field_016D,(uint *)this->field_0181);
        (**(code **)(this->field_0000 + 0x4c))(this->field_0199);
        puVar5 = (undefined4 *)this->field_0199;
        puVar6 = (undefined4 *)this->field_0195;
        *puVar6 = *puVar5;
        puVar6[1] = puVar5[1];
        puVar6[2] = puVar5[2];
        puVar6[3] = puVar5[3];
        *(undefined2 *)(puVar6 + 4) = *(undefined2 *)(puVar5 + 4);
        *(undefined1 *)((int)puVar6 + 0x12) = *(undefined1 *)((int)puVar5 + 0x12);
        (**(code **)(this->field_0000 + 0x58))(this->field_01B1);
        puVar5 = (undefined4 *)this->field_01B1;
        puVar6 = (undefined4 *)this->field_01AD;
        *puVar6 = *puVar5;
        puVar6[1] = puVar5[1];
        *(undefined2 *)(puVar6 + 2) = *(undefined2 *)(puVar5 + 2);
        *(undefined1 *)((int)puVar6 + 10) = *(undefined1 *)((int)puVar5 + 10);
        (**(code **)(this->field_0000 + 0x60))(this->field_01C1);
        puVar5 = (undefined4 *)this->field_01C1;
        puVar6 = (undefined4 *)this->field_01BD;
        for (iVar4 = 0x90; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
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
      puVar5 = &this->field_0135;
      if ((byte *)this->field_0135 != (byte *)0x0) {
        FUN_006ae110((byte *)this->field_0135);
      }
      if ((byte *)this->field_0139 != (byte *)0x0) {
        FUN_006ae110((byte *)this->field_0139);
      }
      *puVar5 = 0;
      this->field_0139 = 0;
      (**(code **)(this->field_0000 + 0x38))(puVar5);
      Library::DKW::TBL::FUN_006afe40(&this->field_012D,(uint *)*puVar5);
      Library::DKW::TBL::FUN_006afe40(&this->field_0131,(uint *)this->field_0139);
      puVar5 = &this->field_014D;
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
      *puVar5 = 0;
      this->field_0151 = 0;
      this->field_0155 = 0;
      this->field_0159 = 0;
      (**(code **)(this->field_0000 + 0x3c))(puVar5);
      Library::DKW::TBL::FUN_006afe40(&this->field_013D,(uint *)*puVar5);
      Library::DKW::TBL::FUN_006afe40(&this->field_0141,(uint *)this->field_0151);
      Library::DKW::TBL::FUN_006afe40(&this->field_0145,(uint *)this->field_0155);
      Library::DKW::TBL::FUN_006afe40(&this->field_0149,(uint *)this->field_0159);
      (**(code **)(this->field_0000 + 0x44))(this->field_0189);
      puVar5 = (undefined4 *)this->field_0189;
      puVar6 = (undefined4 *)this->field_0185;
      for (iVar4 = 0x4a; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      (**(code **)(this->field_0000 + 0x48))(this->field_0191);
      puVar6 = (undefined4 *)this->field_0191;
      puVar2 = (undefined4 *)this->field_018D;
      puVar5 = &this->field_01A1;
      *puVar2 = *puVar6;
      puVar2[1] = puVar6[1];
      puVar2[2] = puVar6[2];
      puVar2[3] = puVar6[3];
      if ((byte *)*puVar5 != (byte *)0x0) {
        FUN_006ae110((byte *)*puVar5);
        *puVar5 = 0;
      }
      if ((byte *)this->field_019D != (byte *)0x0) {
        FUN_006ae110((byte *)this->field_019D);
        this->field_019D = 0;
      }
      (**(code **)(this->field_0000 + 0x50))(puVar5);
      Library::DKW::TBL::FUN_006afe40(&this->field_019D,(uint *)*puVar5);
      (**(code **)(this->field_0000 + 0x54))(this->field_01A9);
      puVar5 = (undefined4 *)this->field_01A9;
      puVar6 = (undefined4 *)this->field_01A5;
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      puVar6[2] = puVar5[2];
      (**(code **)(this->field_0000 + 0x5c))(this->field_01B9);
      puVar5 = (undefined4 *)this->field_01B9;
      puVar6 = (undefined4 *)this->field_01B5;
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      *(undefined2 *)(puVar6 + 2) = *(undefined2 *)(puVar5 + 2);
      *(undefined1 *)((int)puVar6 + 10) = *(undefined1 *)((int)puVar5 + 10);
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

