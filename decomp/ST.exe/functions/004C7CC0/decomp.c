
/* [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115
    */

undefined4 __thiscall
TLOBaseTy::FUN_004c7cc0
          (TLOBaseTy *this,int param_1,uint param_2,uint param_3,int param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,char *param_8)

{
  int iVar1;
  int iVar2;
  TLOBaseTyVTable *pTVar3;
  bool bVar4;
  int iVar5;
  AnonPointee_TLOBaseTy_0607 *pAVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;

  if ((int)param_3 < 0) {
    iVar5 = (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f);
    if ((this->field_03D4 != 0) && (this->field_0607 != (AnonPointee_TLOBaseTy_0607 *)0x0)) {
      do {
        iVar1 = this->field_03D4;
        bVar4 = false;
        iVar10 = iVar1 + -1;
        if (-1 < iVar10) {
          piVar7 = (int *)(iVar10 * 0x27 + (int)this->field_0607);
LAB_004c7d1c:
          if ((*piVar7 != param_1) || (piVar7[1] != param_2)) goto LAB_004c7d2b;
          bVar4 = true;
          puVar12 = (undefined4 *)(iVar10 * 0x27 + (int)this->field_0607);
          iVar2 = puVar12[2];
          if (iVar2 <= iVar5) {
            iVar5 = iVar5 - iVar2;
            if (iVar10 < iVar1 + -1) {
              uVar9 = ((iVar1 - iVar10) + -1) * 0x27;
              puVar11 = (undefined4 *)((iVar10 + 1) * 0x27 + (int)this->field_0607);
              for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *puVar12 = *puVar11;
                puVar11 = puVar11 + 1;
                puVar12 = puVar12 + 1;
              }
              for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
                puVar11 = (undefined4 *)((int)puVar11 + 1);
                puVar12 = (undefined4 *)((int)puVar12 + 1);
              }
            }
            this->field_03D4 = this->field_03D4 + -1;
            goto LAB_004c7d8c;
          }
          piVar7 = (int *)(iVar10 * 0x27 + 8 + (int)this->field_0607);
          *piVar7 = *piVar7 - iVar5;
          goto cf_common_exit_004C8287;
        }
LAB_004c7d8c:
        if (iVar5 == 0) goto cf_common_exit_004C8287;
      } while (bVar4);
    }
    if (((iVar5 != 0) && (*(int *)&this->field_0x361 == param_1)) &&
       (*(uint *)&this->field_0x369 == param_2)) {
      if (*(int *)&this->field_0x36d < iVar5) {
        iVar5 = *(int *)&this->field_0x36d;
      }
      iVar5 = *(int *)&this->field_0x36d - iVar5;
      *(int *)&this->field_0x36d = iVar5;
      if (iVar5 == 0) {
        *(int *)&this->field_0x365 = *(int *)&this->field_0x361;
        iVar5 = thunk_FUN_004c90c0(this);
        if (iVar5 == 0) {
          *(undefined4 *)&this->field_0x36d = 1;
        }
        else {
          iVar5 = GetPlayerRaceId(*(char *)&this->field_0024);
          if (((char)iVar5 != '\x03') && (this->field_03A8 != 0)) {
            thunk_FUN_004d87b0(*(char *)&this->field_0024,this->field_03A8);
          }
          if (this->field_03AC != 0) {
            thunk_FUN_004d88f0(*(char *)&this->field_0024,this->field_03AC);
          }
          if (this->field_03B0 != 0) {
            thunk_FUN_004d8a30(*(char *)&this->field_0024,this->field_03B0);
          }
          if (this->field_03B4 != 0) {
            thunk_FUN_004e4380(this->field_0024,this->field_03B4);
          }
          thunk_FUN_004d78e0(*(char *)&this->field_0024);
        }
      }
    }
  }
  else {
    iVar5 = thunk_FUN_004c7860(this,param_1,param_2,param_3,0,0);
    if (iVar5 != 0) {
      iVar5 = thunk_FUN_004c7860(this,param_1,param_2,param_3,1,0);
      if ((iVar5 == 0) || (iVar5 = thunk_FUN_004c7c20((int)this), iVar5 == 0)) {
        if (param_4 != 0) {
          iVar5 = thunk_FUN_004c9370(this,param_1,param_2,-1);
          if ((*(int *)&this->field_0x361 == param_1) && (*(uint *)&this->field_0x369 == param_2)) {
            iVar5 = iVar5 + *(int *)&this->field_0x36d;
          }
          if ((int)(iVar5 + param_3) < 100) {
            if (this->field_03D8 <= this->field_03D4 + 1) {
              iVar5 = this->field_03D8 + 0x14;
              this->field_03D8 = iVar5;
              pAVar6 = (AnonPointee_TLOBaseTy_0607 *)
                       Library::DKW::LIB::FUN_006acf50((int)this->field_0607,iVar5 * 0x27);
              this->field_0607 = pAVar6;
            }
            *(int *)(this->field_03D4 * 0x27 + (int)this->field_0607) = param_1;
            *(uint *)(this->field_03D4 * 0x27 + 4 + (int)this->field_0607) = param_2;
            *(uint *)(this->field_03D4 * 0x27 + 8 + (int)this->field_0607) = param_3;
            *(undefined4 *)(this->field_03D4 * 0x27 + 0xc + (int)this->field_0607) = param_5;
            *(undefined4 *)(this->field_03D4 * 0x27 + 0x10 + (int)this->field_0607) = param_6;
            *(undefined4 *)(this->field_03D4 * 0x27 + 0x14 + (int)this->field_0607) = param_7;
            puVar12 = (undefined4 *)(this->field_03D4 * 0x27 + 0x18 + (int)this->field_0607);
            *puVar12 = 0;
            puVar12[1] = 0;
            puVar12[2] = 0;
            *(undefined2 *)(puVar12 + 3) = 0;
            *(undefined1 *)((int)puVar12 + 0xe) = 0;
            if (param_8 != (char *)0x0) {
              Library::MSVCRT::_strncpy
                        ((char *)(this->field_03D4 * 0x27 + 0x18 + (int)this->field_0607),param_8,
                         0xf);
            }
            this->field_03D4 = this->field_03D4 + 1;
            thunk_FUN_004c7460((AnonShape_004C7460_AC9F4C4C *)this);
          }
        }
      }
      else {
        if (*(int *)&this->field_0x361 == 0) {
          *(int *)&this->field_0x361 = param_1;
          *(uint *)&this->field_0x369 = param_2;
          this->field_038C = g_playSystem_00802A38->field_00E4;
          uVar9 = thunk_FUN_004c7730(this,param_1,param_2);
          this->field_0390 = uVar9;
          this->field_0394 = 0;
          this->field_03CC = 0;
          *(undefined4 *)&this->field_0x36d = 0;
          this->field_0375 = param_6;
          this->field_0379 = param_7;
          this->field_0371 = param_5;
          this->field_037D = 0;
          this->field_0381 = 0;
          this->field_0385 = 0;
          this->field_0389 = 0;
          this->field_038B = 0;
          if (param_8 != (char *)0x0) {
            Library::MSVCRT::_strncpy((char *)&this->field_037D,param_8,0xf);
          }
          thunk_FUN_004c7260(this,*(Global_sub_004C7260_param_1Enum *)&this->field_0x361,
                             *(int *)&this->field_0x369,&this->field_0398,&this->field_039C,
                             &this->field_03A0,&this->field_03A4);
          this->field_03A8 = 0;
          this->field_03AC = 0;
          this->field_03B0 = 0;
          this->field_03B4 = 0;
          switch(this->field_05AC) {
          case CASE_32:
          case CASE_40:
          case CASE_49:
          case CASE_5C:
            thunk_FUN_004ce860((AnonShape_004CE860_DECB0AA9 *)this);
          }
        }
        *(uint *)&this->field_0x36d = *(int *)&this->field_0x36d + param_3;
        switch(this->field_05AC) {
        case CASE_32:
        case CASE_40:
        case CASE_49:
        case CASE_5C:
          thunk_FUN_004ce770(this,param_1);
          break;
        case CASE_35:
        case CASE_54:
        case CASE_55:
        case CASE_56:
        case CASE_57:
        case CASE_58:
        case CASE_59:
        case CASE_5A:
          thunk_FUN_004e2ad0(this,param_1,param_2);
        }
        thunk_FUN_004c7460((AnonShape_004C7460_AC9F4C4C *)this);
        RotateSpr(this,1);
        if (*(int *)(&DAT_00792778 + this->field_0235 * 4) != 0) {
          this->field_0261 = 0;
          *(undefined4 *)&this->field_0x2e1 = 0;
        }
        if (*(int *)&this->field_0x361 == 5) {
          thunk_FUN_004cc880(this,3);
          uVar9 = GetPlayerRaceId(*(char *)&this->field_023D);
          if (*(int *)(&DAT_00796230 + ((uVar9 & 0xff) + this->field_0235 * 3) * 4) != 0) {
            pTVar3 = this->vtable;
            uVar9 = GetPlayerRaceId(*(char *)&this->field_023D);
            (*pTVar3->vfunc_90)(3,*(undefined4 *)
                                   (&DAT_00796230 + ((uVar9 & 0xff) + this->field_0235 * 3) * 4));
          }
        }
        else if (*(int *)&this->field_0x361 == 6) {
          (*this->vtable->vfunc_90)(3,0x272);
        }
      }
    }
  }
cf_common_exit_004C8287:
  if (this->field_0024 == (uint)(byte)this->field_0010->field_112D) {
    thunk_FUN_004d8b70((char)this->field_0024);
  }
  return 0;
LAB_004c7d2b:
  iVar10 = iVar10 + -1;
  piVar7 = (int *)((int)piVar7 + -0x27);
  if (iVar10 < 0) goto LAB_004c7d8c;
  goto LAB_004c7d1c;
}

