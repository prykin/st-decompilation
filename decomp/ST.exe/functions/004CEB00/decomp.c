
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=2; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_40=64;CASE_49=73;CASE_5C=92

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190
    */

undefined4 __thiscall TLOBaseTy::sub_004CEB00(TLOBaseTy *this,undefined4 param_1)

{
  char cVar1;
  TLOBaseTy_field_05ACState TVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  short sVar9;
  TLOBaseTyVTable *pTVar10;
  char *pcVar11;
  byte **ppbVar12;
  char *pcVar13;
  undefined4 uVar14;
  byte *local_6c [5];
  byte *local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  char local_3a [15];
  undefined4 local_2b;
  int local_24;
  undefined2 local_20 [2];
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  local_10 = 0;
  if (g_playSystem_00802A38->field_00E4 < this->field_03CC + this->field_03D0) {
    return 0;
  }
  this->field_03CC = g_playSystem_00802A38->field_00E4;
  switch(this->field_04D0) {
  case CASE_1:
    switch(this->field_05AC) {
    case CASE_32:
    case CASE_5C:
      goto switchD_004ceb68_caseD_32;
    default:
      return 0;
    case CASE_40:
    case CASE_49:
      iVar5 = thunk_FUN_004ac910(&this->field_01D5,'\x0e');
      if (iVar5 != this->field_01F5->field_020C) {
        return local_10;
      }
switchD_004ceb68_caseD_32:
      this->field_04DC = 0;
      this->field_04D0 = CASE_2;
      return local_10;
    }
  case CASE_2:
    iVar5 = thunk_FUN_004b31c0((int *)this->field_0024,0);
    if (iVar5 == 0) {
      if (DAT_00811798 == (void *)0x0) {
        return local_10;
      }
      thunk_FUN_00621580(DAT_00811798,(uint)this->field_0024,8);
      return local_10;
    }
    if ((this->field_05AC == CASE_32) || (local_14 = 1, this->field_05AC == CASE_5C)) {
      local_14 = 2;
    }
    local_c = this->field_05B4;
    local_1c = local_c + local_14;
    if (local_1c <= local_c) {
      return local_10;
    }
    local_18 = this->field_05B0;
    local_14 = local_14 + local_18;
    do {
      if (local_18 < local_14) {
        sVar9 = *(short *)&this->field_05B8 + 1;
        local_8 = local_18;
        do {
          sVar3 = (short)local_8;
          if ((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) || (sVar6 = (short)local_c, sVar6 < 0))
             || (((g_worldGrid.sizeY <= sVar6 || (sVar9 < 0)) ||
                 ((g_worldGrid.sizeZ <= sVar9 ||
                  (g_worldGrid.cells
                   [(int)sVar9 * (int)g_worldGrid.planeStride + (int)g_worldGrid.sizeX * (int)sVar6
                    + (int)sVar3].objects[0] == (STWorldObject *)0x0)))))) {
            this->field_04E0 = local_8;
            this->field_04DC = 1;
            this->field_04E4 = local_c;
            this->field_04E8 = this->field_05B8 + 1;
            if (DAT_00800bcc == (void *)0x0) {
              thunk_FUN_004cf430();
            }
            thunk_FUN_004d0970(DAT_00800bcc,this->field_04E0,this->field_04E4,this->field_04E8);
            this->field_04D0 = CASE_3;
            this->field_03D0 = 1;
            RotateSpr(this,0);
            TVar2 = this->field_05AC;
            if (TVar2 == CASE_5C) {
              (*this->vtable->vfunc_90)(3,0x39b);
              return local_10;
            }
            if (TVar2 == CASE_32) {
              iVar5 = GetPlayerRaceId(*(char *)&this->field_023D);
              if ((char)iVar5 != '\x02') {
                (*this->vtable->vfunc_90)(3,0x1f9);
                return local_10;
              }
              (*this->vtable->vfunc_90)(3,0x2c1);
              return local_10;
            }
            if (TVar2 != CASE_40) {
              if (TVar2 != CASE_49) {
                return local_10;
              }
              (*this->vtable->vfunc_90)(3,800);
              return local_10;
            }
            (*this->vtable->vfunc_90)(3,0x254);
            return local_10;
          }
          local_8 = local_8 + 1;
        } while (local_8 < local_14);
      }
      local_c = local_c + 1;
      if (local_1c <= local_c) {
        return local_10;
      }
    } while( true );
  case CASE_3:
    if ((this->field_05AC == CASE_32) || (iVar5 = 1, this->field_05AC == CASE_5C)) {
      iVar5 = 2;
    }
    iVar4 = thunk_FUN_004ac910(&this->field_01D5,'\t');
    if ((*(int *)&this->field_01F5->field_0x154 + iVar5 <= iVar4) &&
       ((this->field_05FF->field_001C & 0x4000) == 0)) {
      thunk_FUN_004d0310((AnonShape_004D0310_B8EE97FF *)this);
    }
    iVar5 = thunk_FUN_004ac910(&this->field_01D5,'\x0e');
    if (iVar5 != this->field_01F5->field_020C) {
      return local_10;
    }
    thunk_FUN_004d0a80(DAT_00800bcc,this->field_04E0,this->field_04E4,this->field_04E8);
    iVar5 = 0x11;
    ppbVar12 = local_6c;
    while( true ) {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      *ppbVar12 = (byte *)0x0;
      ppbVar12 = ppbVar12 + 1;
    }
    *(undefined1 *)ppbVar12 = 0;
    this->field_04DC = 0;
    thunk_FUN_004ce9e0(this,&local_8,&local_c,(int *)local_20);
    local_50 = (undefined2)this->field_04E0;
    local_6c[3] = (byte *)0x1;
    local_6c[2] = (byte *)0x1;
    local_6c[1] = this->field_0024;
    local_54 = param_1;
    local_4e = *(undefined2 *)&this->field_04E4;
    local_4c = *(undefined2 *)&this->field_04E8;
    local_4a = (undefined2)local_8;
    local_46 = local_20[0];
    local_48 = (undefined2)local_c;
    local_44 = this->field_0032;
    local_6c[0] = (byte *)0x14;
    local_42 = 0xfffe;
    if (-1 < (int)this->field_0371) {
      local_42 = (undefined2)this->field_0371;
    }
    uVar7 = 0xffffffff;
    if (this->field_042C == 0) {
      local_3c = 0xffff;
      local_3e = 0xffff;
      local_40 = 0xffff;
    }
    else {
      local_40 = *(undefined2 *)&this->field_0430;
      local_3e = *(undefined2 *)&this->field_0434;
      local_3c = *(undefined2 *)&this->field_0438;
    }
    local_58 = local_6c[1];
    if ((byte *)this->field_0379 != (byte *)0xff) {
      local_58 = (byte *)this->field_0379;
    }
    pcVar11 = (char *)&this->field_037D;
    do {
      pcVar13 = pcVar11;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar13;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar11 = pcVar13 + -uVar7;
    pcVar13 = local_3a;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar13 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar13 = pcVar13 + 1;
    }
    local_2b = this->field_0375;
    STPlaySystemC::CreateGameObject(g_playSystem_00802A38,0x14,0,&local_24,local_6c,0);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this->field_04D4 = *(int *)(local_24 + 0x18);
    this->field_04D8 = 0;
    if (this->field_0024 != (byte *)(uint)(byte)this->field_0010->field_112D)
    goto cf_common_exit_004CF029;
    thunk_FUN_0052af50(0,(float)this->field_01F9,(float)this->field_01FD);
    uVar7 = GetPlayerRaceId(*(char *)&this->field_0024);
    uVar7 = uVar7 & 0xff;
    if (uVar7 == 1) {
      pTVar10 = this->vtable;
      uVar14 = 0x65;
    }
    else {
      if (uVar7 == 2) {
        (*this->vtable->vfunc_90)(6,0x66);
        goto cf_common_exit_004CF029;
      }
      if (uVar7 != 3) goto cf_common_exit_004CF029;
      pTVar10 = this->vtable;
      uVar14 = 0x67;
    }
    (*pTVar10->vfunc_90)(6,uVar14);
cf_common_exit_004CF029:
    this->field_04D0 = CASE_4;
    this->field_03D0 = 5;
    RotateSpr(this,1);
    thunk_FUN_004cbf70((int)this);
    return local_10;
  case CASE_4:
    if (this->field_04D8 == 0) {
      return 0;
    }
    TVar2 = this->field_05AC;
    switch(TVar2) {
    case CASE_32:
    case CASE_5C:
      this->field_04D0 = CASE_5;
      this->field_03D0 = 1;
      if (TVar2 == CASE_5C) {
        (*this->vtable->vfunc_90)(3,0x39c);
      }
      else if (TVar2 == CASE_32) {
        iVar5 = GetPlayerRaceId(*(char *)&this->field_023D);
        if ((char)iVar5 == '\x02') {
          (*this->vtable->vfunc_90)(3,0x2c2);
        }
        else {
          (*this->vtable->vfunc_90)(3,0x1fa);
        }
      }
      else if (TVar2 == CASE_40) {
        (*this->vtable->vfunc_90)(3,0x255);
      }
      else if (TVar2 == CASE_49) {
        (*this->vtable->vfunc_90)(3,0x321);
      }
      break;
    case CASE_40:
    case CASE_49:
switchD_004cf07f_caseD_40:
      this->field_04D0 = CASE_0;
      local_10 = 1;
    }
    break;
  case CASE_5:
    iVar5 = thunk_FUN_004ac910(&this->field_01D5,'\x0e');
    if (iVar5 != this->field_01F5->field_020C) {
      return local_10;
    }
    this->field_03D0 = 5;
    if ((this->field_05AC == CASE_32) || (this->field_05AC == CASE_5C))
    goto switchD_004cf07f_caseD_40;
    break;
  default:
    goto switchD_004ceb47_default;
  }
  RotateSpr(this,1);
switchD_004ceb47_default:
  return local_10;
}

