
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004845E0_param_1Enum. Cases:
   CASE_0=0;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_D=13;CASE_E=14;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_18=24;CASE_2B=43;CASE_2C=44;CASE_2D=45;CASE_48=72;CASE_4D=77
    */

ushort __thiscall FUN_004845e0(void *this,Global_sub_004845E0_param_1Enum param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int *this_00;
  char cVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar5;
  undefined3 extraout_var_01;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 local_10 [4];
  int local_c;
  undefined4 local_8;
  
  this_00 = param_2;
  if ((param_2 != (int *)0x0) && (param_2[8] == 1000)) {
    if (param_2[0x12d] != 0) {
      return 0;
    }
    if (*(int *)((int)param_2 + 0x245) == 6) {
      return 0;
    }
  }
  switch(param_1) {
  case CASE_0:
    iVar5 = thunk_FUN_00493cd0(this);
    if (iVar5 != 0) {
      if (this_00 == (int *)0x0) {
        return 0;
      }
      if (this_00 == this) {
        return 3;
      }
      if (*(int *)((int)this + 0x24) != this_00[9]) {
        return 0;
      }
      iVar5 = (**(code **)(*this_00 + 0xec))();
      if (iVar5 != 0) {
        iVar5 = this_00[8];
        if (iVar5 == 1000) {
          return 4;
        }
        if (iVar5 == 0x3e9) {
          return 4;
        }
        if (iVar5 != 0x14) {
          return 0;
        }
        return 3;
      }
      return 0;
    }
    if (this_00 == this) {
      return 3;
    }
    if (this_00 == (int *)0x0) {
      return 5;
    }
    iVar5 = this_00[8];
    if ((((iVar5 != 0x14) && (iVar5 != 1000)) && (iVar5 != 0x3e9)) && (iVar5 != 0x1ae)) {
      return 5;
    }
    iVar5 = *(int *)((int)this + 0x6f7);
    if ((((iVar5 != 9) && (iVar5 != 0x15)) &&
        ((*(int *)((int)this + 0x716) < *(int *)((int)this + 0x712) &&
         ((iVar5 = thunk_FUN_004e8030(iVar5), iVar5 != 3 &&
          (iVar5 = (**(code **)(*this_00 + 0x2c))(), iVar5 == 0x33)))))) &&
       (*(int *)((int)this + 0x24) == this_00[9])) {
      return 0x18;
    }
    iVar5 = (**(code **)(*this_00 + 0x2c))();
    if ((((iVar5 == 0x62) && (*(int *)((int)this + 0x24) == this_00[9])) &&
        (iVar5 = thunk_FUN_004d6df0(this), 0 < iVar5)) &&
       (iVar5 = thunk_FUN_004e8030(*(int *)((int)this + 0x6f7)), iVar5 == 3)) {
      return 0x1b;
    }
    iVar5 = (**(code **)(*this_00 + 0x2c))();
    if (((iVar5 == 0x37) || (iVar5 = (**(code **)(*this_00 + 0x2c))(), iVar5 == 0x6c)) &&
       (iVar5 = thunk_FUN_004e8b10(this_00,*(uint *)((int)this + 0x24)), iVar5 == 1)) {
      return 0x1d;
    }
    iVar5 = (**(code **)(*this_00 + 0x2c))();
    if (((iVar5 == 0x16) || (iVar5 = (**(code **)(*this_00 + 0x2c))(), iVar5 == 0x25)) &&
       (*(int *)((int)this_00 + 0x732) == 1)) {
      bVar1 = *(byte *)(this_00 + 9);
      bVar2 = *(byte *)((int)this + 0x24);
      param_2 = (int *)CONCAT13(bVar2,param_2._0_3_);
      local_8 = CONCAT31(local_8._1_3_,bVar2);
      if (DAT_00808a8f == '\0') {
        if (bVar1 == bVar2) {
LAB_004857a5:
          iVar5 = 0;
        }
        else {
          uVar6 = (uint)bVar1;
          uVar7 = (uint)bVar2;
          cVar3 = *(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar7);
          if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
            iVar5 = -2;
          }
          else if ((cVar3 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0'))
          {
            iVar5 = -1;
          }
          else if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\x01'))
          {
            iVar5 = 1;
          }
          else {
            if ((cVar3 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) != '\x01'))
            goto LAB_004857a5;
            iVar5 = 2;
          }
        }
        bVar8 = iVar5 < 0;
      }
      else {
        bVar8 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
      }
      if (bVar8) goto LAB_0048589a;
      param_2 = (int *)CONCAT31(param_2._1_3_,bVar2);
      param_1 = CONCAT31(param_1._1_3_,bVar1);
      if (DAT_00808a8f == '\0') {
        if (bVar2 == bVar1) {
LAB_0048586d:
          iVar5 = 0;
        }
        else {
          uVar6 = (uint)bVar2;
          uVar7 = (uint)bVar1;
          cVar3 = *(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar7);
          if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
            iVar5 = -2;
          }
          else if ((cVar3 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0'))
          {
            iVar5 = -1;
          }
          else if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\x01'))
          {
            iVar5 = 1;
          }
          else {
            if ((cVar3 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) != '\x01'))
            goto LAB_0048586d;
            iVar5 = 2;
          }
        }
        bVar8 = iVar5 < 0;
      }
      else {
        bVar8 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(uint)bVar2 * 0x51];
      }
      if (!bVar8) {
        iVar5 = (**(code **)(*this_00 + 0xec))();
        return (-(ushort)(iVar5 != 1) & 0xfffd) + 3;
      }
LAB_0048589a:
      param_1 = CONCAT31(param_1._1_3_,bVar1);
      bVar8 = thunk_FUN_0041d350(this_00,*(uint *)((int)this + 0x24));
      return (-(ushort)(CONCAT31(extraout_var_01,bVar8) != 1) & 0xfff9) + 7;
    }
    iVar5 = *(int *)((int)this + 0x6f7);
    if (((iVar5 == 8) || (iVar5 == 0x14)) || (iVar5 == 0x1a)) {
      iVar5 = (**(code **)(*this_00 + 0x2c))();
      if (((iVar5 != 0x38) && (iVar5 = (**(code **)(*this_00 + 0x2c))(), iVar5 != 0x39)) &&
         ((iVar5 = (**(code **)(*this_00 + 0x2c))(), iVar5 != 0x4f &&
          (iVar5 = (**(code **)(*this_00 + 0x2c))(), iVar5 != 0x5e)))) {
        iVar5 = (**(code **)(*this_00 + 0x2c))();
        if (((iVar5 == 0x3b) || (iVar5 = (**(code **)(*this_00 + 0x2c))(), iVar5 == 0x60)) &&
           ((*(int *)((int)this + 0x24) == this_00[9] &&
            (0 < *(int *)((int)this + 0x7da) + *(int *)((int)this + 0x7d6) +
                 *(int *)((int)this + 0x7d2))))) {
          return 0x13;
        }
        bVar1 = *(byte *)(this_00 + 9);
        bVar2 = *(byte *)((int)this + 0x24);
        param_2 = (int *)CONCAT31(param_2._1_3_,bVar1);
        param_1 = CONCAT31(param_1._1_3_,bVar2);
        if (DAT_00808a8f != '\0') {
          iVar5 = (uint)bVar2 * 9;
          goto LAB_00486163;
        }
        if (bVar1 == bVar2) {
LAB_00485d4a:
          iVar5 = 0;
        }
        else {
          uVar6 = (uint)bVar1;
          uVar7 = (uint)bVar2;
          cVar3 = *(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar7);
          if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
            iVar5 = -2;
          }
          else if ((cVar3 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0'))
          {
            iVar5 = -1;
          }
          else if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\x01'))
          {
            iVar5 = 1;
          }
          else {
LAB_004861ee:
            if ((cVar3 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) != '\x01'))
            goto LAB_00485d4a;
            iVar5 = 2;
          }
        }
LAB_00485d4c:
        bVar8 = iVar5 < 0;
LAB_00485d55:
        if (bVar8) {
          return 0;
        }
        if (this_00[8] == 0x14) {
LAB_00485d68:
          iVar5 = (**(code **)(*this_00 + 0xec))();
          if (iVar5 == 1) {
            return 3;
          }
        }
        goto LAB_00485caa;
      }
      if (*(int *)((int)this + 0x24) != this_00[9]) {
        return 0;
      }
      iVar5 = (**(code **)(*this_00 + 0x88))(local_10);
      if (0 < iVar5) {
        return 0x12;
      }
LAB_00485f6a:
      iVar5 = (**(code **)(*this_00 + 0xec))();
    }
    else {
      if (((iVar5 == 7) || (iVar5 == 0x13)) || (iVar5 == 0x1b)) {
        if (*(int *)((int)this + 0x7ca) != 0) {
          iVar5 = (**(code **)(*this_00 + 0x2c))();
          if ((iVar5 == 0x52) || (iVar5 == 0x5f)) {
            FUN_006e62d0(PTR_00802a38,*(int *)((int)this + 0x7ca),&local_c);
            if ((local_c != 0) && (*(int *)(local_c + 0x20) == 0x1a4)) {
              return 0x1e;
            }
          }
          else if (iVar5 == 99) {
            return 0x1e;
          }
          bVar1 = *(byte *)(this_00 + 9);
          bVar2 = *(byte *)((int)this + 0x24);
          param_2 = (int *)CONCAT31(param_2._1_3_,bVar1);
          param_1 = CONCAT31(param_1._1_3_,bVar2);
          if (DAT_00808a8f == '\0') {
            if (bVar1 == bVar2) {
LAB_00485f1f:
              iVar5 = 0;
            }
            else {
              uVar6 = (uint)bVar1;
              uVar7 = (uint)bVar2;
              cVar3 = *(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar7);
              if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
                iVar5 = -2;
              }
              else if ((cVar3 == '\x01') &&
                      (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
                iVar5 = -1;
              }
              else if ((cVar3 == '\0') &&
                      (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\x01')) {
                iVar5 = 1;
              }
              else {
                if ((cVar3 != '\x01') ||
                   (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) != '\x01')) goto LAB_00485f1f;
                iVar5 = 2;
              }
            }
            bVar8 = iVar5 < 0;
          }
          else {
            bVar8 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
          }
          if (bVar8) {
            return 0;
          }
          if ((this_00[8] == 0x14) && (iVar5 = (**(code **)(*this_00 + 0xec))(), iVar5 == 1)) {
            return 3;
          }
          if ((this_00[8] != 1000) && (this_00[8] != 0x3e9)) {
            return 0;
          }
          goto LAB_00485f6a;
        }
        bVar1 = *(byte *)(this_00 + 9);
        bVar2 = *(byte *)((int)this + 0x24);
        param_2 = (int *)CONCAT31(param_2._1_3_,bVar1);
        param_1 = CONCAT31(param_1._1_3_,bVar2);
        if (DAT_00808a8f == '\0') {
          if (bVar1 == bVar2) {
LAB_0048602b:
            iVar4 = 0;
          }
          else {
            uVar6 = (uint)bVar1;
            uVar7 = (uint)bVar2;
            cVar3 = *(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar7);
            if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
              iVar4 = -2;
            }
            else if ((cVar3 == '\x01') &&
                    (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
              iVar4 = -1;
            }
            else if ((cVar3 == '\0') &&
                    (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\x01')) {
              iVar4 = 1;
            }
            else {
              if ((cVar3 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) != '\x01')
                 ) goto LAB_0048602b;
              iVar4 = 2;
            }
          }
          bVar8 = iVar4 < 0;
        }
        else {
          bVar8 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
        }
        if (bVar8) {
          return 0;
        }
        if (this_00[8] == 0x14) {
          if (iVar5 != 0x1b) {
            iVar5 = (**(code **)(*this_00 + 0xbc))();
            if ((iVar5 == 1) && (iVar5 = (**(code **)(*this_00 + 0x7c))(), iVar5 < 100)) {
              return 0x17;
            }
            goto LAB_00485d68;
          }
          iVar5 = (**(code **)(*this_00 + 0xbc))();
          if (iVar5 == 1) {
            return 0x1a;
          }
          iVar5 = (**(code **)(*this_00 + 0xec))();
          if (iVar5 == 1) {
            return 3;
          }
        }
LAB_00485caa:
        iVar5 = this_00[8];
      }
      else {
        if (((iVar5 == 0xc) || (iVar5 == 0x18)) || (iVar5 == 0x19)) {
          bVar1 = *(byte *)(this_00 + 9);
          bVar2 = *(byte *)((int)this + 0x24);
          param_2 = (int *)CONCAT31(param_2._1_3_,bVar1);
          param_1 = CONCAT31(param_1._1_3_,bVar2);
          if (DAT_00808a8f == '\0') {
            if (bVar1 == bVar2) goto LAB_00485d4a;
            uVar6 = (uint)bVar1;
            uVar7 = (uint)bVar2;
            cVar3 = *(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar7);
            if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
              iVar5 = -2;
            }
            else if ((cVar3 == '\x01') &&
                    (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
              iVar5 = -1;
            }
            else {
LAB_00485d2d:
              if ((cVar3 != '\0') || (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) != '\x01'))
              goto LAB_004861ee;
              iVar5 = 1;
            }
            goto LAB_00485d4c;
          }
          iVar5 = (uint)bVar2 * 9;
LAB_00486163:
          bVar8 = (&DAT_008087ea)[iVar5 * 9] != (&DAT_008087ea)[((uint)param_2 & 0xff) * 0x51];
          goto LAB_00485d55;
        }
        if (iVar5 == 9) {
          bVar1 = *(byte *)(this_00 + 9);
          bVar2 = *(byte *)((int)this + 0x24);
          param_2 = (int *)CONCAT31(param_2._1_3_,bVar1);
          param_1 = CONCAT31(param_1._1_3_,bVar2);
          if (DAT_00808a8f != '\0') {
            bVar8 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
            goto LAB_004859d8;
          }
          if (bVar1 == bVar2) {
LAB_004859cd:
            iVar5 = 0;
          }
          else {
            uVar6 = (uint)bVar1;
            uVar7 = (uint)bVar2;
            cVar3 = *(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar7);
            if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
              iVar5 = -2;
            }
            else if ((cVar3 == '\x01') &&
                    (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
              iVar5 = -1;
            }
            else if ((cVar3 == '\0') &&
                    (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\x01')) {
              iVar5 = 1;
            }
            else {
              if ((cVar3 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) != '\x01')
                 ) goto LAB_004859cd;
              iVar5 = 2;
            }
          }
          bVar8 = iVar5 < 0;
LAB_004859d8:
          if (!bVar8) {
            iVar5 = this_00[8];
            if (iVar5 == 0x14) {
              iVar5 = (**(code **)(*this_00 + 0xec))();
              return (-(ushort)(iVar5 != 1) & 0xfffd) + 3;
            }
            if ((iVar5 == 1000) || (iVar5 == 0x3e9)) {
              iVar5 = (**(code **)(*this_00 + 0xec))();
              return (-(ushort)(iVar5 != 1) & 0xfffc) + 4;
            }
          }
          if ((this_00[8] != 1000) && (this_00[8] != 0x3e9)) {
            return 0;
          }
          iVar5 = (**(code **)(*this_00 + 0x2c))();
          if ((iVar5 != 0x3b) && (iVar5 = (**(code **)(*this_00 + 0x2c))(), iVar5 != 0x60)) {
            return 0;
          }
          return 7;
        }
        if (iVar5 != 0x1d) {
          if ((iVar5 != 0x24) && (iVar5 != 0x25)) {
            bVar1 = *(byte *)(this_00 + 9);
            bVar2 = *(byte *)((int)this + 0x24);
            param_2 = (int *)CONCAT31(param_2._1_3_,bVar1);
            param_1 = CONCAT31(param_1._1_3_,bVar2);
            if (DAT_00808a8f == '\0') {
              if (bVar1 == bVar2) {
LAB_00485c58:
                iVar4 = 0;
              }
              else {
                uVar6 = (uint)bVar1;
                uVar7 = (uint)bVar2;
                cVar3 = *(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar7);
                if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0'))
                {
                  iVar4 = -2;
                }
                else if ((cVar3 == '\x01') &&
                        (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
                  iVar4 = -1;
                }
                else if ((cVar3 == '\0') &&
                        (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\x01')) {
                  iVar4 = 1;
                }
                else {
                  if ((cVar3 != '\x01') ||
                     (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) != '\x01'))
                  goto LAB_00485c58;
                  iVar4 = 2;
                }
              }
              bVar8 = iVar4 < 0;
            }
            else {
              bVar8 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
            }
            if (bVar8) {
              if (iVar5 == 0x15) {
                return 7;
              }
              if (0 < *(int *)((int)this + 0x7a2)) {
                return 7;
              }
              return 0;
            }
            if ((this_00[8] == 0x14) && (iVar5 = (**(code **)(*this_00 + 0xec))(), iVar5 == 1)) {
              return 3;
            }
            goto LAB_00485caa;
          }
          bVar1 = *(byte *)(this_00 + 9);
          bVar2 = *(byte *)((int)this + 0x24);
          param_2 = (int *)CONCAT31(param_2._1_3_,bVar1);
          param_1 = CONCAT31(param_1._1_3_,bVar2);
          if (DAT_00808a8f == '\0') {
            if (bVar1 == bVar2) goto LAB_00485d4a;
            uVar6 = (uint)bVar1;
            uVar7 = (uint)bVar2;
            cVar3 = *(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar7);
            if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
              iVar5 = -2;
            }
            else {
              if ((cVar3 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) != '\0'))
              goto LAB_00485d2d;
              iVar5 = -1;
            }
            goto LAB_00485d4c;
          }
          iVar5 = (uint)bVar2 * 9;
          goto LAB_00486163;
        }
        bVar1 = *(byte *)(this_00 + 9);
        bVar2 = *(byte *)((int)this + 0x24);
        param_2 = (int *)CONCAT31(param_2._1_3_,bVar1);
        param_1 = CONCAT31(param_1._1_3_,bVar2);
        if (DAT_00808a8f == '\0') {
          if (bVar1 == bVar2) {
LAB_00485b29:
            iVar5 = 0;
          }
          else {
            uVar6 = (uint)bVar1;
            uVar7 = (uint)bVar2;
            cVar3 = *(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar7);
            if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
              iVar5 = -2;
            }
            else if ((cVar3 == '\x01') &&
                    (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
              iVar5 = -1;
            }
            else if ((cVar3 == '\0') &&
                    (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\x01')) {
              iVar5 = 1;
            }
            else {
              if ((cVar3 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) != '\x01')
                 ) goto LAB_00485b29;
              iVar5 = 2;
            }
          }
          bVar8 = iVar5 < 0;
        }
        else {
          bVar8 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
        }
        if (bVar8) {
          return 0;
        }
        if ((this_00[8] == 0x14) && (iVar5 = (**(code **)(*this_00 + 0xec))(), iVar5 == 1)) {
          return 3;
        }
        iVar5 = this_00[8];
      }
      if ((iVar5 != 1000) && (iVar5 != 0x3e9)) {
        return 0;
      }
      iVar5 = (**(code **)(*this_00 + 0xec))();
    }
    if (iVar5 == 1) {
      return 4;
    }
    break;
  case CASE_2:
    iVar5 = thunk_FUN_00493cd0(this);
    return (-(ushort)(iVar5 != 0) & 0xfffa) + 6;
  case CASE_3:
  case CASE_2B:
    iVar5 = thunk_FUN_00493cd0(this);
    if (iVar5 != 0) {
      return 0;
    }
    if (this_00 == (int *)0x0) {
      return 1;
    }
    iVar5 = this_00[8];
    if (((iVar5 != 0x14) && (iVar5 != 1000)) && ((iVar5 != 0x3e9 && (iVar5 != 0x1ae)))) {
      return 1;
    }
    if (this_00 == this) {
      return 0;
    }
    iVar4 = *(int *)((int)this + 0x6f7);
    if (iVar4 == 7) {
      return 1;
    }
    if (iVar4 == 0x13) {
      return 1;
    }
    if (iVar4 == 8) {
      return 1;
    }
    if (iVar4 == 0x14) {
      return 1;
    }
    if (iVar4 == 0xc) {
      return 1;
    }
    if (iVar4 == 0x18) {
      return 1;
    }
    if (iVar4 == 0x19) {
      return 1;
    }
    if (iVar4 == 0x1a) {
      return 1;
    }
    if (iVar4 == 0x1b) {
      return 1;
    }
    if (iVar4 == 0x25) {
      return 1;
    }
    if (iVar4 != 9) {
      if ((iVar4 != 0x15) && (*(int *)((int)this + 0x7a2) < 1)) {
        return 1;
      }
      iVar5 = (**(code **)(*this_00 + 0x2c))();
      if (((iVar5 != 0x16) && (iVar5 = (**(code **)(*this_00 + 0x2c))(), iVar5 != 0x25)) ||
         (*(int *)((int)this_00 + 0x732) != 1)) {
        param_2 = (int *)(uint)*(byte *)(this_00 + 9);
        param_1 = (Global_sub_004845E0_param_1Enum)*(byte *)((int)this + 0x24);
        if (DAT_00808a8f != '\0') {
          bVar8 = (&DAT_008087ea)[param_1 * 0x51] != (&DAT_008087ea)[(int)param_2 * 0x51];
          return (((ushort)bVar8 - (ushort)bVar8) - (ushort)bVar8 & 5) + 2;
        }
        if (*(byte *)(this_00 + 9) != *(byte *)((int)this + 0x24)) {
          cVar3 = *(char *)((int)&DAT_00808a4f + (int)param_2 * 8 + param_1);
          if ((cVar3 == '\0') &&
             (*(char *)((int)&DAT_00808a4f + (int)param_2 + param_1 * 8) == '\0')) {
            iVar5 = -2;
            goto cf_common_exit_00484B10;
          }
          if ((cVar3 == '\x01') &&
             (*(char *)((int)&DAT_00808a4f + (int)param_2 + param_1 * 8) == '\0')) {
            iVar5 = -1;
            goto cf_common_exit_00484B10;
          }
          if ((cVar3 == '\0') &&
             (*(char *)((int)&DAT_00808a4f + (int)param_2 + param_1 * 8) == '\x01')) {
            iVar5 = 1;
            goto cf_common_exit_00484B10;
          }
          if ((cVar3 == '\x01') &&
             (*(char *)((int)&DAT_00808a4f + (int)param_2 + param_1 * 8) == '\x01')) {
            iVar5 = 2;
            goto cf_common_exit_00484B10;
          }
        }
        iVar5 = 0;
cf_common_exit_00484B10:
        bVar8 = iVar5 < 0;
        return (((ushort)bVar8 - (ushort)bVar8) - (ushort)bVar8 & 5) + 2;
      }
      bVar1 = *(byte *)(this_00 + 9);
      bVar2 = *(byte *)((int)this + 0x24);
      param_2 = (int *)CONCAT13(bVar2,param_2._0_3_);
      local_8 = CONCAT31(local_8._1_3_,bVar2);
      if (DAT_00808a8f == '\0') {
        if (bVar1 == bVar2) {
LAB_00484943:
          iVar5 = 0;
        }
        else {
          uVar6 = (uint)bVar1;
          uVar7 = (uint)bVar2;
          cVar3 = *(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar7);
          if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
            iVar5 = -2;
          }
          else if ((cVar3 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0'))
          {
            iVar5 = -1;
          }
          else if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\x01'))
          {
            iVar5 = 1;
          }
          else {
            if ((cVar3 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) != '\x01'))
            goto LAB_00484943;
            iVar5 = 2;
          }
        }
        bVar8 = iVar5 < 0;
      }
      else {
        bVar8 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
      }
      if (bVar8) goto LAB_00484a28;
      param_2 = (int *)CONCAT31(param_2._1_3_,bVar2);
      if (DAT_00808a8f == '\0') {
        if (bVar2 == bVar1) {
LAB_00484a0b:
          iVar5 = 0;
        }
        else {
          uVar6 = (uint)bVar2;
          uVar7 = (uint)bVar1;
          cVar3 = *(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar7);
          if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
            iVar5 = -2;
          }
          else if ((cVar3 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0'))
          {
            iVar5 = -1;
          }
          else if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\x01'))
          {
            iVar5 = 1;
          }
          else {
            if ((cVar3 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) != '\x01'))
            goto LAB_00484a0b;
            iVar5 = 2;
          }
        }
        bVar8 = iVar5 < 0;
      }
      else {
        bVar8 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(uint)bVar2 * 0x51];
      }
      if (!bVar8) {
        return 2;
      }
LAB_00484a28:
      param_1 = CONCAT31(param_1._1_3_,bVar1);
      bVar8 = thunk_FUN_0041d350(this_00,*(uint *)((int)this + 0x24));
      return (-(ushort)(CONCAT31(extraout_var,bVar8) != 1) & 0xfffa) + 7;
    }
    bVar1 = *(byte *)(this_00 + 9);
    bVar2 = *(byte *)((int)this + 0x24);
    param_2 = (int *)CONCAT31(param_2._1_3_,bVar1);
    param_1 = CONCAT31(param_1._1_3_,bVar2);
    if (DAT_00808a8f != '\0') {
      bVar8 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
      goto LAB_004847df;
    }
    if (bVar1 == bVar2) {
LAB_004847d4:
      iVar4 = 0;
    }
    else {
      uVar6 = (uint)bVar1;
      uVar7 = (uint)bVar2;
      cVar3 = *(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar7);
      if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
        iVar4 = -2;
      }
      else if ((cVar3 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
        iVar4 = -1;
      }
      else if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\x01')) {
        iVar4 = 1;
      }
      else {
        if ((cVar3 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) != '\x01'))
        goto LAB_004847d4;
        iVar4 = 2;
      }
    }
    bVar8 = iVar4 < 0;
LAB_004847df:
    if (!bVar8) {
      if (iVar5 == 0x14) {
        return 3;
      }
      if (iVar5 == 1000) {
        return 4;
      }
      if (iVar5 == 0x3e9) {
        return 4;
      }
    }
    if (iVar5 != 1000) {
      return 1;
    }
    iVar5 = (**(code **)(*this_00 + 0x2c))();
    if ((iVar5 != 0x3b) && (iVar5 = (**(code **)(*this_00 + 0x2c))(), iVar5 != 0x60)) {
      return 1;
    }
    return 7;
  case CASE_4:
    iVar5 = thunk_FUN_00493cd0(this);
    if (iVar5 == 0) {
      if (this_00 == (int *)0x0) {
        return 1;
      }
      if (this_00 != this) {
        if (*(int *)((int)this + 0x6f7) == 9) {
          return 1;
        }
        if (*(int *)((int)this + 0x6f7) == 0x15) {
          return 1;
        }
        if (*(int *)((int)this + 0x712) <= *(int *)((int)this + 0x716)) {
          return 1;
        }
        iVar5 = (**(code **)(*this_00 + 0x2c))();
        if (iVar5 != 0x33) {
          return 1;
        }
        if (*(int *)((int)this + 0x24) != this_00[9]) {
          return 1;
        }
        return 0x18;
      }
    }
    break;
  case CASE_5:
    iVar5 = thunk_FUN_00493cd0(this);
    if (iVar5 == 0) {
      if (this_00 == (int *)0x0) {
        return 1;
      }
      if (this_00 != this) {
        iVar5 = this_00[8];
        if (((iVar5 != 0x14) && (iVar5 != 1000)) && (iVar5 != 0x3e9)) {
          return 1;
        }
        if (*(int *)((int)this + 0x24) != this_00[9]) {
          return 1;
        }
        iVar5 = thunk_FUN_00490d90((int)this);
        if (iVar5 != 1) {
          return 1;
        }
        return 0xd;
      }
    }
    break;
  case CASE_6:
    iVar5 = thunk_FUN_00493cd0(this);
    return (-(ushort)(iVar5 != 0) & 0xfff1) + 0xf;
  case CASE_7:
    iVar5 = thunk_FUN_00493cd0(this);
    if (iVar5 == 0) {
      if (this_00 == (int *)0x0) {
        return 1;
      }
      if (this_00 != this) {
        iVar5 = *(int *)((int)this + 0x6f7);
        if (((iVar5 != 6) && (iVar5 != 0x12)) && (iVar5 != 0x22)) {
          return 1;
        }
        iVar5 = (**(code **)(*this_00 + 0x108))(*(undefined4 *)((int)this + 0x24));
        if (iVar5 != 1) {
          return 1;
        }
        cVar3 = thunk_FUN_004cca00(this_00,*(int *)((int)this + 0x24));
        iVar5 = CONCAT31(extraout_var_00,cVar3);
        if (iVar5 != 1) {
          if (iVar5 == 2) {
            return 10;
          }
          if (iVar5 != 3) {
            return 1;
          }
          return 0xb;
        }
        return 9;
      }
    }
    break;
  case CASE_8:
    iVar5 = thunk_FUN_00493cd0(this);
    return (-(ushort)(iVar5 != 0) & 0xffef) + 0x11;
  case CASE_9:
    iVar5 = thunk_FUN_00493cd0(this);
    return (-(ushort)(iVar5 != 0) & 0xfff8) + 8;
  case CASE_A:
    iVar5 = thunk_FUN_00493cd0(this);
    if (iVar5 != 0) {
      return 0;
    }
    if (this_00 == (int *)0x0) {
      return 1;
    }
    if (*(int *)((int)this + 0x6f7) != 0x17) {
      return 1;
    }
    if (this_00[8] != 0x14) {
      return 1;
    }
    if (this_00 == this) {
      return 0;
    }
    if (*(int *)((int)this + 0x72a) < 1) {
      return 1;
    }
    iVar5 = (**(code **)(*this_00 + 0x2c))();
    if ((iVar5 != 0x16) && (iVar5 = (**(code **)(*this_00 + 0x2c))(), iVar5 != 0x25)) {
      return 0xc;
    }
    if (*(int *)((int)this_00 + 0x732) != 1) {
      return 0xc;
    }
    bVar1 = *(byte *)(this_00 + 9);
    bVar2 = *(byte *)((int)this + 0x24);
    param_1 = (Global_sub_004845E0_param_1Enum)bVar1;
    uVar6 = (uint)bVar2;
    local_8 = (uint)bVar2;
    if (DAT_00808a8f != '\0') {
      bVar8 = (&DAT_008087ea)[local_8 * 0x51] != (&DAT_008087ea)[param_1 * 0x51];
      goto LAB_004853d2;
    }
    if (bVar1 == bVar2) {
LAB_004853c7:
      iVar5 = 0;
    }
    else {
      cVar3 = *(char *)((int)&DAT_00808a4f + param_1 * 8 + local_8);
      if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + local_8 * 8 + param_1) == '\0')) {
        iVar5 = -2;
      }
      else if ((cVar3 == '\x01') && (*(char *)((int)&DAT_00808a4f + local_8 * 8 + param_1) == '\0'))
      {
        iVar5 = -1;
      }
      else if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + local_8 * 8 + param_1) == '\x01'))
      {
        iVar5 = 1;
      }
      else {
        if ((cVar3 != '\x01') || (*(char *)((int)&DAT_00808a4f + local_8 * 8 + param_1) != '\x01'))
        goto LAB_004853c7;
        iVar5 = 2;
      }
    }
    bVar8 = iVar5 < 0;
LAB_004853d2:
    if (!bVar8) {
      param_1 = (Global_sub_004845E0_param_1Enum)bVar1;
      if (DAT_00808a8f != '\0') {
        return 0xc;
      }
      if (bVar2 != bVar1) {
        cVar3 = *(char *)((int)&DAT_00808a4f + uVar6 * 8 + param_1);
        if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + param_1 * 8 + uVar6) == '\0')) {
          return 0xc;
        }
        if ((cVar3 == '\x01') && (*(char *)((int)&DAT_00808a4f + param_1 * 8 + uVar6) == '\0')) {
          return 0xc;
        }
        if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + param_1 * 8 + uVar6) == '\x01')) {
          return 0xc;
        }
        if ((cVar3 == '\x01') && (*(char *)((int)&DAT_00808a4f + param_1 * 8 + uVar6) == '\x01')) {
          return 0xc;
        }
      }
    }
    return 0xc;
  case CASE_D:
    iVar5 = thunk_FUN_00493cd0(this);
    if (iVar5 != 0) {
      return 0;
    }
    if (*(int *)((int)this + 0x7ca) != 0) {
      return 0;
    }
    if (this_00 == (int *)0x0) {
      return 1;
    }
    if (this_00 == this) {
      return 0;
    }
    if (this_00[8] != 0x14) {
      return 1;
    }
    iVar5 = (**(code **)(*this_00 + 0x7c))();
    if (99 < iVar5) {
      return 1;
    }
    bVar1 = *(byte *)(this_00 + 9);
    bVar2 = *(byte *)((int)this + 0x24);
    param_2 = (int *)CONCAT31(param_2._1_3_,bVar1);
    param_1 = CONCAT31(param_1._1_3_,bVar2);
    if (DAT_00808a8f != '\0') {
      bVar8 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
      goto LAB_00485002;
    }
    if (bVar1 == bVar2) {
LAB_00484ff7:
      iVar5 = 0;
    }
    else {
      uVar6 = (uint)bVar1;
      uVar7 = (uint)bVar2;
      cVar3 = *(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar7);
      if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
        iVar5 = -2;
      }
      else if ((cVar3 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
        iVar5 = -1;
      }
      else if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\x01')) {
        iVar5 = 1;
      }
      else {
        if ((cVar3 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) != '\x01'))
        goto LAB_00484ff7;
        iVar5 = 2;
      }
    }
    bVar8 = iVar5 < 0;
LAB_00485002:
    if (bVar8) {
      return 1;
    }
    iVar5 = (**(code **)(*this_00 + 0xbc))();
    if (iVar5 != 1) {
      return 1;
    }
    return 0x17;
  case CASE_E:
    iVar5 = thunk_FUN_00493cd0(this);
    if (iVar5 == 0) {
      if ((PTR_007fb2ac != (AnonShape_GLOBAL_007FB2AC_70073F41 *)0x0) &&
         (PTR_007fb2ac->field_0024 != 0)) {
        return 0x14;
      }
      return 0x15;
    }
    break;
  case CASE_10:
    iVar5 = thunk_FUN_00493cd0(this);
    if (iVar5 != 0) {
      return 0;
    }
    if (this_00 == this) {
      return 0;
    }
    if (this_00 == (int *)0x0) {
      return 1;
    }
    if (this_00[8] != 1000) {
      return 1;
    }
    if (this_00[9] != *(int *)((int)this + 0x24)) {
      return 1;
    }
    iVar5 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)this_00);
    if (iVar5 == 0) {
      return 1;
    }
    thunk_FUN_004162f0(this_00,(undefined2 *)((int)&local_8 + 2),(undefined2 *)((int)&param_1 + 2),
                       (undefined2 *)((int)&param_2 + 2));
    return (((int)param_2._2_2_ <= SHORT_007fb244 + -2) - 1 & 0xffeb) + 0x16;
  case CASE_11:
    iVar5 = thunk_FUN_00493cd0(this);
    if (iVar5 == 0) {
      if (this_00 == (int *)0x0) {
        return 1;
      }
      if (this_00 != this) {
        iVar5 = *(int *)((int)this + 0x6f7);
        if (((iVar5 != 8) && (iVar5 != 0x14)) && (iVar5 != 0x1a)) {
          return 1;
        }
        iVar5 = (**(code **)(*this_00 + 0x2c))();
        if ((((iVar5 != 0x38) && (iVar5 = (**(code **)(*this_00 + 0x2c))(), iVar5 != 0x39)) &&
            (iVar5 = (**(code **)(*this_00 + 0x2c))(), iVar5 != 0x4f)) &&
           (iVar5 = (**(code **)(*this_00 + 0x2c))(), iVar5 != 0x5e)) {
          return 1;
        }
        if (*(int *)((int)this + 0x24) == this_00[9]) {
          iVar5 = (**(code **)(*this_00 + 0x88))(local_10);
          return ((0 < iVar5) - 1 & 0xffef) + 0x12;
        }
        return 1;
      }
    }
    break;
  case CASE_12:
    iVar5 = thunk_FUN_00493cd0(this);
    if (iVar5 == 0) {
      if (this_00 == (int *)0x0) {
        return 1;
      }
      if (this_00 != this) {
        iVar5 = *(int *)((int)this + 0x6f7);
        if (((iVar5 != 8) && (iVar5 != 0x14)) && (iVar5 != 0x1a)) {
          return 1;
        }
        iVar5 = (**(code **)(*this_00 + 0x2c))();
        if ((iVar5 != 0x3b) && (iVar5 = (**(code **)(*this_00 + 0x2c))(), iVar5 != 0x60)) {
          return 1;
        }
        if (*(int *)((int)this + 0x24) != this_00[9]) {
          return 1;
        }
        if (*(int *)((int)this + 0x7da) + *(int *)((int)this + 0x7d6) + *(int *)((int)this + 0x7d2)
            < 1) {
          return 1;
        }
        return 0x13;
      }
    }
    break;
  case CASE_13:
    iVar5 = thunk_FUN_00493cd0(this);
    if (iVar5 != 0) {
      return 0;
    }
    if (*(int *)((int)this + 0x7ca) != 0) {
      return 0;
    }
    if (this_00 == (int *)0x0) {
      return 1;
    }
    if (this_00 == this) {
      return 0;
    }
    if (this_00[8] == 0x14) {
      bVar1 = *(byte *)(this_00 + 9);
      bVar2 = *(byte *)((int)this + 0x24);
      param_2 = (int *)CONCAT31(param_2._1_3_,bVar1);
      param_1 = CONCAT31(param_1._1_3_,bVar2);
      if (DAT_00808a8f == '\0') {
        if (bVar1 == bVar2) {
LAB_00484e9f:
          iVar5 = 0;
        }
        else {
          uVar6 = (uint)bVar1;
          uVar7 = (uint)bVar2;
          cVar3 = *(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar7);
          if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
            iVar5 = -2;
          }
          else if ((cVar3 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0'))
          {
            iVar5 = -1;
          }
          else if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\x01'))
          {
            iVar5 = 1;
          }
          else {
            if ((cVar3 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) != '\x01'))
            goto LAB_00484e9f;
            iVar5 = 2;
          }
        }
        bVar8 = iVar5 < 0;
      }
      else {
        bVar8 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
      }
      if ((!bVar8) || (iVar5 = (**(code **)(*this_00 + 0x120))(), iVar5 == 1)) goto LAB_00484ed2;
    }
    if ((this_00[8] != 0x172) && (this_00[8] != 0x1a4)) {
      return 1;
    }
LAB_00484ed2:
    iVar5 = (**(code **)(*this_00 + 0xbc))();
    if (iVar5 != 1) {
      return 1;
    }
    return 0x1a;
  case CASE_18:
    iVar5 = thunk_FUN_00493cd0(this);
    if (iVar5 == 0) {
      return -(ushort)(this_00 != this) & 0x1d;
    }
    break;
  case CASE_2C:
    iVar5 = thunk_FUN_00493cd0(this);
    return (ushort)(iVar5 == 0);
  case CASE_2D:
    iVar5 = thunk_FUN_00493cd0(this);
    return (-(ushort)(iVar5 != 0) & 0xfff0) + 0x10;
  case CASE_48:
    iVar5 = thunk_FUN_00493cd0(this);
    if (iVar5 == 0) {
      if (this_00 == (int *)0x0) {
        return 1;
      }
      if (this_00 != this) {
        iVar5 = (**(code **)(*this_00 + 0x2c))();
        if (iVar5 != 0x62) {
          return 1;
        }
        if (*(int *)((int)this + 0x24) != this_00[9]) {
          return 1;
        }
        iVar5 = thunk_FUN_004d6df0(this);
        if (iVar5 < 1) {
          return 1;
        }
        iVar5 = thunk_FUN_004e8030(*(int *)((int)this + 0x6f7));
        if (iVar5 != 3) {
          return 1;
        }
        return 0x1b;
      }
    }
    break;
  case CASE_4D:
    iVar5 = thunk_FUN_00493cd0(this);
    if (iVar5 == 0) {
      if (this_00 == (int *)0x0) {
        return 1;
      }
      if (this_00 != this) {
        iVar5 = (**(code **)(*this_00 + 0x2c))();
        if ((iVar5 != 0x37) && (iVar5 = (**(code **)(*this_00 + 0x2c))(), iVar5 != 0x6c)) {
          return 1;
        }
        iVar5 = thunk_FUN_004e8b10(this_00,*(uint *)((int)this + 0x24));
        if (iVar5 != 1) {
          return 1;
        }
        return 0x1d;
      }
    }
  }
  return 0;
}

