
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::ResetSelfCheckFlag */

void __thiscall STGameObjC::ResetSelfCheckFlag(STGameObjC *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  
  if (this->field_01CD != 1) {
    return;
  }
  this->field_01CD = 0;
  FUN_006ab060(&this->field_011D);
  FUN_006ab060(&this->field_0121);
  FUN_006ab060(&this->field_0125);
  FUN_006ab060(&this->field_0129);
  uVar1 = this->field_0020;
  if (uVar1 < 0x1af) {
    if (uVar1 == 0x1ae) {
      FUN_006ab060(&this->field_01AD);
      FUN_006ab060(&this->field_01B1);
      FUN_006ab060(&this->field_01C5);
      FUN_006ab060(&this->field_01C9);
      return;
    }
    if (uVar1 < 0x173) {
      if (uVar1 == 0x172) {
        return;
      }
      if (uVar1 == 0x14) {
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
        this->field_0171 = 0;
        this->field_0175 = 0;
        this->field_0179 = 0;
        this->field_017D = 0;
        this->field_0181 = 0;
        if ((byte *)this->field_015D != (byte *)0x0) {
          FUN_006ae110((byte *)this->field_015D);
        }
        if ((byte *)this->field_0161 != (byte *)0x0) {
          FUN_006ae110((byte *)this->field_0161);
        }
        if ((byte *)this->field_0165 != (byte *)0x0) {
          FUN_006ae110((byte *)this->field_0165);
        }
        if ((byte *)this->field_0169 != (byte *)0x0) {
          FUN_006ae110((byte *)this->field_0169);
        }
        if ((byte *)this->field_016D != (byte *)0x0) {
          FUN_006ae110((byte *)this->field_016D);
        }
        this->field_015D = 0;
        this->field_0161 = 0;
        this->field_0165 = 0;
        this->field_0169 = 0;
        this->field_016D = 0;
        FUN_006ab060(&this->field_0195);
        FUN_006ab060(&this->field_0199);
        FUN_006ab060(&this->field_01AD);
        FUN_006ab060(&this->field_01B1);
        FUN_006ab060(&this->field_01BD);
        FUN_006ab060(&this->field_01C1);
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
      if ((byte *)this->field_0135 != (byte *)0x0) {
        FUN_006ae110((byte *)this->field_0135);
      }
      if ((byte *)this->field_0139 != (byte *)0x0) {
        FUN_006ae110((byte *)this->field_0139);
      }
      this->field_0135 = 0;
      this->field_0139 = 0;
      if ((byte *)this->field_012D != (byte *)0x0) {
        FUN_006ae110((byte *)this->field_012D);
      }
      if ((byte *)this->field_0131 != (byte *)0x0) {
        FUN_006ae110((byte *)this->field_0131);
      }
      this->field_012D = 0;
      this->field_0131 = 0;
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
      this->field_014D = 0;
      this->field_0151 = 0;
      this->field_0155 = 0;
      this->field_0159 = 0;
      if ((byte *)this->field_013D != (byte *)0x0) {
        FUN_006ae110((byte *)this->field_013D);
      }
      if ((byte *)this->field_0141 != (byte *)0x0) {
        FUN_006ae110((byte *)this->field_0141);
      }
      if ((byte *)this->field_0145 != (byte *)0x0) {
        FUN_006ae110((byte *)this->field_0145);
      }
      if ((byte *)this->field_0149 != (byte *)0x0) {
        FUN_006ae110((byte *)this->field_0149);
      }
      this->field_013D = 0;
      this->field_0141 = 0;
      this->field_0145 = 0;
      this->field_0149 = 0;
      FUN_006ab060(&this->field_0185);
      FUN_006ab060(&this->field_0189);
      FUN_006ab060(&this->field_018D);
      FUN_006ab060(&this->field_0191);
      if ((byte *)this->field_01A1 != (byte *)0x0) {
        FUN_006ae110((byte *)this->field_01A1);
        this->field_01A1 = 0;
      }
      if ((byte *)this->field_019D != (byte *)0x0) {
        FUN_006ae110((byte *)this->field_019D);
        this->field_019D = 0;
      }
      FUN_006ab060(&this->field_01A5);
      FUN_006ab060(&this->field_01A9);
      FUN_006ab060(&this->field_01B5);
      FUN_006ab060(&this->field_01B9);
      return;
    }
    if (uVar1 == 0x3e9) {
      return;
    }
  }
  iVar3 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x5f5,0,0,&DAT_007a4ccc,
                             s_STGameObjC__ResetSelfCheckFlag_u_007a4e90);
  if (iVar3 == 0) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

