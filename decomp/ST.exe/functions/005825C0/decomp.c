
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_jelly.cpp
   STJellyGunC::LifeGun
   
   [STSwitchEnumApplier] Switch target field_0235 uses
   /SubmarineTitans/Recovered/Enums/STJellyGunC_field_0235State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

void __thiscall STJellyGunC::LifeGun(STJellyGunC *this,int *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined3 extraout_var;
  int iVar11;
  undefined2 extraout_var_00;
  int *piVar12;
  STJellyGunC_field_0235State SVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined2 extraout_var_01;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  uint extraout_EDX;
  undefined2 extraout_var_04;
  undefined4 *puVar16;
  undefined4 **ppuVar17;
  undefined4 *local_4c [8];
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_5;
  
  iVar9 = thunk_FUN_0041c710((int)this);
  puVar1 = &this->field_01D5;
  if (iVar9 == 0) {
    iVar9 = 0;
    uVar10 = thunk_FUN_004ad650((int)puVar1);
    FUN_006eabf0((void *)this->field_0211,uVar10,iVar9);
    bVar8 = thunk_FUN_0041caf0((int)this);
    if (CONCAT31(extraout_var,bVar8) == 1) {
      iVar9 = 1;
    }
    else {
      iVar9 = 0;
    }
  }
  else {
    iVar9 = 1;
    uVar10 = thunk_FUN_004ad650((int)puVar1);
    FUN_006eabf0((void *)this->field_0211,uVar10,iVar9);
    iVar9 = 1;
  }
  iVar11 = thunk_FUN_004ad650((int)puVar1);
  FUN_006e6870((void *)this->field_0211,iVar11,iVar9);
  local_14 = CONCAT22(extraout_var_00,this->field_0041);
  local_10 = CONCAT22(extraout_var_01,this->field_0043);
  local_c = CONCAT22(extraout_var_02,this->field_0045);
  switch(this->field_0235) {
  case CASE_1:
    local_1c = (uint)this->field_004B;
    local_28 = (int)this->field_0049;
    sVar4 = this->field_0047;
    local_2c = (*this->vtable->vfunc_24)();
    iVar9 = (int)this->field_0047;
    if ((((((sVar4 == iVar9) && (local_28 == this->field_0049)) &&
          (uVar10 = (uint)this->field_004B, local_1c == uVar10)) ||
         (((uVar10 = (uint)this->field_0049, iVar9 < 0 || ((int)uVar10 < 0)) ||
          ((iVar11 = (int)SHORT_007fb240, iVar11 <= iVar9 ||
           (((int)SHORT_007fb242 <= (int)uVar10 ||
            (*(char *)(iVar11 * uVar10 + DAT_007fb26c + iVar9) == '\0')))))))) ||
        (((&DAT_007fb24c)[*(int *)&this->field_0x24] != 0 &&
         (*(char *)(iVar11 * uVar10 + (&DAT_007fb24c)[*(int *)&this->field_0x24] + iVar9) != '\0')))
        ) || (uVar14 = thunk_FUN_00497030(iVar9,uVar10,*(int *)&this->field_0x24,1,DAT_007e6760),
             iVar9 = extraout_ECX, uVar10 = extraout_EDX, (int)uVar14 < 0)) {
      if (local_2c == 0) {
LAB_005829e6:
        if ((*(byte *)(DAT_00802a38 + 0xe4) & 0x3f) == 0) goto LAB_005829f4;
      }
      else {
        if (local_2c != 1) {
          if (local_2c != 2) {
            iVar9 = ReportDebugMessage(s_E____titans_Igor_to_jelly_cpp_007cb7b0,0x11b,0,0,
                                       &DAT_007a4ccc,s_STJellyGunC__LifeGun_Error_Move_007cb7d4);
            if (iVar9 == 0) {
              return;
            }
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          goto LAB_005829e6;
        }
        if ((this->field_023D != 0) &&
           ((piVar12 = (int *)STAllPlayersC::GetObjPtr
                                        (g_sTAllPlayers_007FA174,
                                         CONCAT31((int3)(uVar10 >> 8),this->field_0x241),
                                         CONCAT22((short)((uint)iVar9 >> 0x10),this->field_0245),
                                         CASE_1), piVar12 == (int *)0x0 ||
            (iVar9 = (**(code **)(*piVar12 + 0xf8))(), iVar9 == 0)))) {
          this->field_023D = 0;
        }
LAB_005829f4:
        SVar13 = sub_00583E30(this);
        this->field_0235 = SVar13;
      }
      sVar4 = this->field_0047;
      sVar5 = this->field_004B;
      sVar6 = this->field_0049;
      if (((((((-1 < sVar4) && (sVar4 < SHORT_007fb240)) && (-1 < sVar6)) &&
            ((sVar6 < SHORT_007fb242 && (-1 < sVar5)))) &&
           ((sVar5 < SHORT_007fb244 &&
            (piVar12 = *(int **)(DAT_007fb248 +
                                ((int)sVar6 * (int)SHORT_007fb240 + (int)SHORT_007fb246 * (int)sVar5
                                + (int)sVar4) * 8), piVar12 != (int *)0x0)))) &&
          ((piVar12[8] == 1000 || (piVar12[8] == 0x14)))) &&
         ((iVar9 = (**(code **)(*piVar12 + 0xf0))(), iVar9 != 0 &&
          (((uint)piVar12[9] < 8 &&
           ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[piVar12[9] * 0x51] < 8)))))))) {
        iVar9 = this->field_0010;
        bVar2 = *(byte *)(piVar12 + 9);
        bVar3 = this->field_0x24;
        local_1c = CONCAT31(local_1c._1_3_,bVar2);
        local_28 = CONCAT31(local_28._1_3_,bVar3);
        if (*(char *)(iVar9 + 0x146f) == '\0') {
          if (bVar2 == bVar3) {
LAB_00582bb0:
            iVar9 = 0;
          }
          else {
            uVar10 = (uint)bVar2;
            uVar14 = (uint)bVar3;
            local_5 = *(char *)(uVar14 + uVar10 * 8 + 0x142f + iVar9);
            if ((local_5 == '\0') && (*(char *)(uVar10 + uVar14 * 8 + 0x142f + iVar9) == '\0')) {
              iVar9 = -2;
            }
            else if ((local_5 == '\x01') &&
                    (*(char *)(uVar10 + uVar14 * 8 + 0x142f + iVar9) == '\0')) {
              iVar9 = -1;
            }
            else if ((local_5 == '\0') &&
                    (*(char *)(uVar10 + uVar14 * 8 + 0x142f + iVar9) == '\x01')) {
              iVar9 = 1;
            }
            else {
              if ((local_5 != '\x01') || (*(char *)(uVar10 + uVar14 * 8 + 0x142f + iVar9) != '\x01')
                 ) goto LAB_00582bb0;
              iVar9 = 2;
            }
          }
          bVar8 = iVar9 < 0;
        }
        else {
          local_2c = iVar9 + (uint)bVar3 * 0x48;
          bVar8 = *(char *)((uint)bVar3 * 9 + 0x11ca + local_2c) !=
                  *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar9);
        }
        if ((bVar8) && (iVar9 = (**(code **)(*piVar12 + 0xf8))(), iVar9 != 0)) {
          iVar9 = (**(code **)(*piVar12 + 0xdc))
                            (this->field_0041,this->field_0043,this->field_0045,local_14,local_10,
                             local_c);
          this->field_0252 = iVar9;
          if (-1 < iVar9) {
            sub_00582530(this);
            puVar1 = &this->field_01D5;
            *(int *)&this->field_0x241 = piVar12[9];
            this->field_0245 = *(undefined2 *)((int)piVar12 + 0x32);
            this->field_0235 = CASE_2;
            STT3DSprC::StopShow((STT3DSprC *)puVar1,0xe);
            STT3DSprC::StopShow((STT3DSprC *)puVar1,0xc);
            thunk_FUN_004ad5e0((int)puVar1);
            sub_005844E0(this,(int)this->field_0041,(int)this->field_0043,0x498);
            iVar9 = sub_00584380(this);
            if (iVar9 != 0) goto LAB_00582958;
            (**(code **)(*piVar12 + 0xe0))(this->field_0252,&local_14,&local_10,&local_c,&local_18);
            if (local_18 != 0) {
              iVar9 = *(int *)((int)piVar12 + 0x1ed);
              goto LAB_00582cbd;
            }
            iVar9 = *(int *)((int)piVar12 + 0x1ed);
LAB_00582c9f:
            FUN_006ea460((void *)this->field_0211,this->field_01ED,iVar9);
          }
        }
      }
    }
    else {
      sub_00582530(this);
      *(undefined4 *)&this->field_0x241 = 0xff;
      this->field_0245 = 0;
      this->field_0235 = CASE_2;
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xe);
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xc);
      thunk_FUN_004ad5e0((int)puVar1);
      thunk_FUN_00637ae0((int)this->field_0041,(int)this->field_0043,(int)this->field_0045);
LAB_00582958:
      sub_00582580(this);
    }
    break;
  case CASE_2:
    uVar10 = thunk_FUN_004ac910(puVar1,'\b');
    local_1c = uVar10;
    if (((uVar10 == 1) && (*(int *)&this->field_0x241 != 0xff)) &&
       (puVar15 = (undefined4 *)
                  STAllPlayersC::GetObjPtr
                            (g_sTAllPlayers_007FA174,
                             CONCAT31((int3)((uint)extraout_ECX_00 >> 8),this->field_0x241),
                             (uint)(ushort)this->field_0245,CASE_1), puVar15 != (undefined4 *)0x0))
    {
      puVar16 = &DAT_008116c8;
      for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar16 = 0;
        puVar16 = puVar16 + 1;
      }
      DAT_008116c8 = DAT_007e6760;
      _DAT_008116d4 = this->field_0292;
      _DAT_008116d6 = this->field_028E;
      _DAT_008116d0 = this->field_025A;
      DAT_008116cc = 0xbc;
      ppuVar17 = local_4c;
      for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
        *ppuVar17 = (undefined4 *)0x0;
        ppuVar17 = ppuVar17 + 1;
      }
      local_4c[2] = (undefined4 *)puVar15[2];
      local_4c[3] = (undefined4 *)0x2;
      local_4c[4] = (undefined4 *)0x110;
      local_4c[5] = &DAT_008116c8;
      (**(code **)*puVar15)(local_4c);
      uVar10 = local_1c;
    }
    if ((this->field_024F != '\0') && (uVar10 == (byte)this->field_0250)) {
      STT3DSprC::StartShow((STT3DSprC *)puVar1,9,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_004ad0e0(puVar1,9);
    }
    iVar9 = thunk_FUN_004acd30(puVar1,'\b');
    if (uVar10 == iVar9 - 1U) {
      STT3DSprC::StopShow((STT3DSprC *)puVar1,8);
    }
    iVar9 = thunk_FUN_004acd30(puVar1,'\n');
    if (uVar10 == iVar9 - 1U) {
      STT3DSprC::StopShow((STT3DSprC *)puVar1,10);
    }
    if (this->field_024F != '\0') {
      iVar9 = thunk_FUN_004acd30(puVar1,'\t');
      iVar11 = thunk_FUN_004ac910(puVar1,'\t');
      uVar10 = local_1c;
      if (iVar11 == iVar9 + -1) {
        STT3DSprC::StopShow((STT3DSprC *)puVar1,9);
        this->field_024F = 0;
        uVar10 = local_1c;
      }
    }
    iVar9 = thunk_FUN_004acd30(puVar1,'\b');
    if ((uVar10 != iVar9 - 1U) || (this->field_024F != '\0')) {
      if (((int)uVar10 < 10) &&
         ((0 < (int)this->field_0252 &&
          (piVar12 = (int *)STAllPlayersC::GetObjPtr
                                      (g_sTAllPlayers_007FA174,
                                       CONCAT31((int3)((uint)this->field_0252 >> 8),
                                                this->field_0x241),
                                       CONCAT22(extraout_var_04,this->field_0245),CASE_1),
          piVar12 != (int *)0x0)))) {
        (**(code **)(*piVar12 + 0xe0))(this->field_0252,&local_14,&local_10,&local_c,&local_18);
        thunk_FUN_00416240(this,(short)local_14,(short)local_10,(short)local_c);
      }
      (*this->vtable->vfunc_D8)();
      return;
    }
  case CASE_4:
    sub_00582580(this);
    return;
  case CASE_3:
    iVar9 = sub_00415ED0(this,&local_24,&local_20);
    if (iVar9 == -1) goto switchD_00582651_default;
    if ((-1 < iVar9) && (iVar9 < 2)) {
      if ((*(uint *)&this->field_0x241 == 0xff) ||
         ((piVar12 = (int *)STAllPlayersC::GetObjPtr
                                      (g_sTAllPlayers_007FA174,*(uint *)&this->field_0x241,
                                       CONCAT22(extraout_var_03,this->field_0245),CASE_1),
          piVar12 == (int *)0x0 || (iVar11 = (**(code **)(*piVar12 + 0xf8))(), iVar11 == 0)))) {
        this->field_023D = 0;
        goto switchD_00582651_default;
      }
      if (((byte)*(undefined4 *)(DAT_00802a38 + 0xe4) & 7) != 1) {
LAB_005827b7:
        if (iVar9 == 0) goto switchD_00582651_default;
        break;
      }
      iVar11 = (**(code **)(*piVar12 + 0xdc))
                         (this->field_0041,this->field_0043,this->field_0045,local_14,local_10,
                          local_c);
      this->field_0252 = iVar11;
      if (iVar11 < 0) goto LAB_005827b7;
      sub_005844E0(this,(int)this->field_0041,(int)this->field_0043,0x498);
      sub_00582530(this);
      puVar1 = &this->field_01D5;
      *(int *)&this->field_0x241 = piVar12[9];
      this->field_0245 = *(undefined2 *)((int)piVar12 + 0x32);
      this->field_0235 = CASE_2;
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xe);
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xc);
      thunk_FUN_004ad5e0((int)puVar1);
      iVar9 = sub_00584380(this);
      if (iVar9 != 0) goto LAB_00582958;
      (**(code **)(*piVar12 + 0xe0))(this->field_0252,&local_14,&local_10,&local_c,&local_18);
      if (local_18 == 0) {
        iVar9 = *(int *)((int)piVar12 + 0x1ed);
        goto LAB_00582c9f;
      }
      iVar9 = *(int *)((int)piVar12 + 0x1ed);
LAB_00582cbd:
      FUN_006ea3e0((void *)this->field_0211,this->field_01ED,iVar9);
    }
    break;
  default:
switchD_00582651_default:
    SVar13 = sub_00583E30(this);
    this->field_0235 = SVar13;
  }
  if ((int)this->field_0239 < 0) {
    if (this->field_024B == 0) {
      iVar9 = this->field_0247 + -2;
      this->field_0247 = iVar9;
      if (-1 < iVar9) goto LAB_00582f2d;
      this->field_0247 = 1;
      this->field_024B = 1;
LAB_00582f27:
      this->field_0231 = 0;
    }
    else if (this->field_0231 == 0) {
      if ((int)this->field_003E - (int)this->field_0038 < -10) {
        if (((*(byte *)(DAT_00802a38 + 0xe4) & 3) == 0) &&
           (iVar9 = this->field_0247 + 1, this->field_0247 = iVar9, 10 < iVar9)) {
          this->field_0247 = 10;
        }
      }
      else if ((*(byte *)(DAT_00802a38 + 0xe4) & 1) != 0) goto LAB_00582edf;
    }
    else {
LAB_00582edf:
      iVar9 = this->field_0247 + 1;
      this->field_0247 = iVar9;
      if (10 < iVar9) {
        this->field_0247 = 9;
        this->field_024B = 0;
        goto LAB_00582f27;
      }
    }
LAB_00582f2d:
    if (((this->field_0231 != 0) || (this->field_0247 != 4)) ||
       (iVar9 = (int)this->field_003E - (int)this->field_0038, iVar9 < -10))
    goto cf_common_exit_00582F72;
    this->field_0239 = 0x19;
    if (iVar9 == 0) goto cf_common_exit_00582F72;
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    iVar9 = (int)(0x19 / (longlong)iVar9);
  }
  else {
    iVar9 = this->field_0239 + -1;
  }
  this->field_0239 = iVar9;
cf_common_exit_00582F72:
  puVar1 = &this->field_01D5;
  STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x0e',this->field_0247);
  STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\f',this->field_0247);
  STT3DSprC::SetCurShad((STT3DSprC *)puVar1,'\x0e',this->field_0247);
  STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x0e');
  STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\f');
  (*this->vtable->vfunc_D8)();
  return;
}

