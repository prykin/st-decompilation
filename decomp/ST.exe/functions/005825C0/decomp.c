
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
  STWorldObject *pSVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  undefined3 extraout_var;
  int iVar12;
  undefined2 extraout_var_00;
  int *piVar13;
  STJellyGunC_field_0235State SVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined2 extraout_var_01;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  uint extraout_EDX;
  undefined2 extraout_var_04;
  undefined4 *puVar17;
  undefined4 **ppuVar18;
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
  
  iVar10 = thunk_FUN_0041c710((int)this);
  puVar1 = &this->field_01D5;
  if (iVar10 == 0) {
    iVar10 = 0;
    uVar11 = thunk_FUN_004ad650((int)puVar1);
    FUN_006eabf0((void *)this->field_0211,uVar11,iVar10);
    bVar9 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)this);
    if (CONCAT31(extraout_var,bVar9) == 1) {
      iVar10 = 1;
    }
    else {
      iVar10 = 0;
    }
  }
  else {
    iVar10 = 1;
    uVar11 = thunk_FUN_004ad650((int)puVar1);
    FUN_006eabf0((void *)this->field_0211,uVar11,iVar10);
    iVar10 = 1;
  }
  iVar12 = thunk_FUN_004ad650((int)puVar1);
  FUN_006e6870((void *)this->field_0211,iVar12,iVar10);
  local_14 = CONCAT22(extraout_var_00,this->field_0041);
  local_10 = CONCAT22(extraout_var_01,this->field_0043);
  local_c = CONCAT22(extraout_var_02,this->field_0045);
  switch(this->field_0235) {
  case CASE_1:
    local_1c = (uint)this->field_004B;
    local_28 = (int)this->field_0049;
    sVar4 = this->field_0047;
    local_2c = (*this->vtable->vfunc_24)();
    iVar10 = (int)this->field_0047;
    if ((((((sVar4 == iVar10) && (local_28 == this->field_0049)) &&
          (uVar11 = (uint)this->field_004B, local_1c == uVar11)) ||
         (((uVar11 = (uint)this->field_0049, iVar10 < 0 || ((int)uVar11 < 0)) ||
          ((iVar12 = (int)SHORT_007fb240, iVar12 <= iVar10 ||
           (((int)SHORT_007fb242 <= (int)uVar11 ||
            (*(char *)(iVar12 * uVar11 + DAT_007fb26c + iVar10) == '\0')))))))) ||
        (((&DAT_007fb24c)[*(int *)&this->field_0x24] != 0 &&
         (*(char *)(iVar12 * uVar11 + (&DAT_007fb24c)[*(int *)&this->field_0x24] + iVar10) != '\0'))
        )) || (uVar15 = thunk_FUN_00497030(iVar10,uVar11,*(int *)&this->field_0x24,1,DAT_007e6760),
              iVar10 = extraout_ECX, uVar11 = extraout_EDX, (int)uVar15 < 0)) {
      if (local_2c == 0) {
LAB_005829e6:
        if ((*(byte *)&PTR_00802a38->field_00E4 & 0x3f) == 0) goto LAB_005829f4;
      }
      else {
        if (local_2c != 1) {
          if (local_2c != 2) {
            iVar10 = ReportDebugMessage(s_E____titans_Igor_to_jelly_cpp_007cb7b0,0x11b,0,0,
                                        &DAT_007a4ccc,s_STJellyGunC__LifeGun_Error_Move_007cb7d4);
            if (iVar10 == 0) {
              return;
            }
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          goto LAB_005829e6;
        }
        if ((this->field_023D != 0) &&
           ((piVar13 = (int *)STAllPlayersC::GetObjPtr
                                        (g_sTAllPlayers_007FA174,
                                         CONCAT31((int3)(uVar11 >> 8),this->field_0x241),
                                         CONCAT22((short)((uint)iVar10 >> 0x10),this->field_0245),
                                         CASE_1), piVar13 == (int *)0x0 ||
            (iVar10 = (**(code **)(*piVar13 + 0xf8))(), iVar10 == 0)))) {
          this->field_023D = 0;
        }
LAB_005829f4:
        SVar14 = sub_00583E30(this);
        this->field_0235 = SVar14;
      }
      sVar4 = this->field_0047;
      sVar5 = this->field_004B;
      sVar6 = this->field_0049;
      if (((((((-1 < sVar4) && (sVar4 < SHORT_007fb240)) && (-1 < sVar6)) &&
            ((sVar6 < SHORT_007fb242 && (-1 < sVar5)))) &&
           ((sVar5 < SHORT_007fb244 &&
            (pSVar7 = g_worldCells
                      [(int)sVar6 * (int)SHORT_007fb240 + (int)SHORT_007fb246 * (int)sVar5 +
                       (int)sVar4].objects[0], pSVar7 != (STWorldObject *)0x0)))) &&
          ((pSVar7->value_20 == 1000 || (pSVar7->value_20 == 0x14)))) &&
         ((iVar10 = (*pSVar7->vtable[5].slots_00_28[0])(), iVar10 != 0 &&
          ((pSVar7[1].vtable < (STWorldObjectVTable *)0x8 &&
           ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
            ((byte)(&DAT_008087e9)[(int)pSVar7[1].vtable * 0x51] < 8)))))))) {
        iVar10 = this->field_0010;
        bVar2 = *(byte *)&pSVar7[1].vtable;
        bVar3 = this->field_0x24;
        local_1c = CONCAT31(local_1c._1_3_,bVar2);
        local_28 = CONCAT31(local_28._1_3_,bVar3);
        if (*(char *)(iVar10 + 0x146f) == '\0') {
          if (bVar2 == bVar3) {
LAB_00582bb0:
            iVar10 = 0;
          }
          else {
            uVar11 = (uint)bVar2;
            uVar15 = (uint)bVar3;
            local_5 = *(char *)(uVar15 + uVar11 * 8 + 0x142f + iVar10);
            if ((local_5 == '\0') && (*(char *)(uVar11 + uVar15 * 8 + 0x142f + iVar10) == '\0')) {
              iVar10 = -2;
            }
            else if ((local_5 == '\x01') &&
                    (*(char *)(uVar11 + uVar15 * 8 + 0x142f + iVar10) == '\0')) {
              iVar10 = -1;
            }
            else if ((local_5 == '\0') &&
                    (*(char *)(uVar11 + uVar15 * 8 + 0x142f + iVar10) == '\x01')) {
              iVar10 = 1;
            }
            else {
              if ((local_5 != '\x01') ||
                 (*(char *)(uVar11 + uVar15 * 8 + 0x142f + iVar10) != '\x01')) goto LAB_00582bb0;
              iVar10 = 2;
            }
          }
          bVar9 = iVar10 < 0;
        }
        else {
          local_2c = iVar10 + (uint)bVar3 * 0x48;
          bVar9 = *(char *)((uint)bVar3 * 9 + 0x11ca + local_2c) !=
                  *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar10);
        }
        if ((bVar9) && (iVar10 = (*pSVar7->vtable[5].slots_00_28[2])(), iVar10 != 0)) {
          iVar10 = (*pSVar7->vtable[4].slots_00_28[7])
                             (this->field_0041,this->field_0043,this->field_0045,local_14,local_10,
                              local_c);
          this->field_0252 = iVar10;
          if (-1 < iVar10) {
            sub_00582530(this);
            puVar1 = &this->field_01D5;
            *(STWorldObjectVTable **)&this->field_0x241 = pSVar7[1].vtable;
            this->field_0245 = *(undefined2 *)&pSVar7[1].field_0xe;
            this->field_0235 = CASE_2;
            STT3DSprC::StopShow((STT3DSprC *)puVar1,0xe);
            STT3DSprC::StopShow((STT3DSprC *)puVar1,0xc);
            thunk_FUN_004ad5e0((int)puVar1);
            sub_005844E0(this,(int)this->field_0041,(int)this->field_0043,0x498);
            iVar10 = sub_00584380(this);
            if (iVar10 != 0) goto LAB_00582958;
            (*pSVar7->vtable[4].slots_00_28[8])
                      (this->field_0252,&local_14,&local_10,&local_c,&local_18);
            if (local_18 != 0) {
              iVar10 = *(int *)&pSVar7[0xd].field_0x19;
              goto LAB_00582cbd;
            }
            iVar10 = *(int *)&pSVar7[0xd].field_0x19;
LAB_00582c9f:
            FUN_006ea460((void *)this->field_0211,this->field_01ED,iVar10);
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
    uVar11 = thunk_FUN_004ac910(puVar1,'\b');
    local_1c = uVar11;
    if (((uVar11 == 1) && (*(int *)&this->field_0x241 != 0xff)) &&
       (puVar16 = (undefined4 *)
                  STAllPlayersC::GetObjPtr
                            (g_sTAllPlayers_007FA174,
                             CONCAT31((int3)((uint)extraout_ECX_00 >> 8),this->field_0x241),
                             (uint)(ushort)this->field_0245,CASE_1), puVar16 != (undefined4 *)0x0))
    {
      puVar17 = &DAT_008116c8;
      for (iVar10 = 7; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar17 = 0;
        puVar17 = puVar17 + 1;
      }
      DAT_008116c8 = DAT_007e6760;
      _DAT_008116d4 = this->field_0292;
      _DAT_008116d6 = this->field_028E;
      _DAT_008116d0 = this->field_025A;
      DAT_008116cc = 0xbc;
      ppuVar18 = local_4c;
      for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
        *ppuVar18 = (undefined4 *)0x0;
        ppuVar18 = ppuVar18 + 1;
      }
      local_4c[2] = (undefined4 *)puVar16[2];
      local_4c[3] = (undefined4 *)0x2;
      local_4c[4] = (undefined4 *)0x110;
      local_4c[5] = &DAT_008116c8;
      (**(code **)*puVar16)(local_4c);
      uVar11 = local_1c;
    }
    if ((this->field_024F != '\0') && (uVar11 == (byte)this->field_0250)) {
      STT3DSprC::StartShow((STT3DSprC *)puVar1,9,PTR_00802a38->field_00E4);
      thunk_FUN_004ad0e0(puVar1,9);
    }
    iVar10 = thunk_FUN_004acd30(puVar1,'\b');
    if (uVar11 == iVar10 - 1U) {
      STT3DSprC::StopShow((STT3DSprC *)puVar1,8);
    }
    iVar10 = thunk_FUN_004acd30(puVar1,'\n');
    if (uVar11 == iVar10 - 1U) {
      STT3DSprC::StopShow((STT3DSprC *)puVar1,10);
    }
    if (this->field_024F != '\0') {
      iVar10 = thunk_FUN_004acd30(puVar1,'\t');
      iVar12 = thunk_FUN_004ac910(puVar1,'\t');
      uVar11 = local_1c;
      if (iVar12 == iVar10 + -1) {
        STT3DSprC::StopShow((STT3DSprC *)puVar1,9);
        this->field_024F = 0;
        uVar11 = local_1c;
      }
    }
    iVar10 = thunk_FUN_004acd30(puVar1,'\b');
    if ((uVar11 != iVar10 - 1U) || (this->field_024F != '\0')) {
      if (((int)uVar11 < 10) &&
         ((0 < (int)this->field_0252 &&
          (piVar13 = (int *)STAllPlayersC::GetObjPtr
                                      (g_sTAllPlayers_007FA174,
                                       CONCAT31((int3)((uint)this->field_0252 >> 8),
                                                this->field_0x241),
                                       CONCAT22(extraout_var_04,this->field_0245),CASE_1),
          piVar13 != (int *)0x0)))) {
        (**(code **)(*piVar13 + 0xe0))(this->field_0252,&local_14,&local_10,&local_c,&local_18);
        thunk_FUN_00416240(this,(short)local_14,(short)local_10,(short)local_c);
      }
      (*this->vtable->vfunc_D8)();
      return;
    }
  case CASE_4:
    sub_00582580(this);
    return;
  case CASE_3:
    iVar10 = sub_00415ED0(this,&local_24,&local_20);
    if (iVar10 == -1) goto switchD_00582651_default;
    if ((-1 < iVar10) && (iVar10 < 2)) {
      if ((*(uint *)&this->field_0x241 == 0xff) ||
         ((piVar13 = (int *)STAllPlayersC::GetObjPtr
                                      (g_sTAllPlayers_007FA174,*(uint *)&this->field_0x241,
                                       CONCAT22(extraout_var_03,this->field_0245),CASE_1),
          piVar13 == (int *)0x0 || (iVar12 = (**(code **)(*piVar13 + 0xf8))(), iVar12 == 0)))) {
        this->field_023D = 0;
        goto switchD_00582651_default;
      }
      if (((byte)PTR_00802a38->field_00E4 & 7) != 1) {
LAB_005827b7:
        if (iVar10 == 0) goto switchD_00582651_default;
        break;
      }
      iVar12 = (**(code **)(*piVar13 + 0xdc))
                         (this->field_0041,this->field_0043,this->field_0045,local_14,local_10,
                          local_c);
      this->field_0252 = iVar12;
      if (iVar12 < 0) goto LAB_005827b7;
      sub_005844E0(this,(int)this->field_0041,(int)this->field_0043,0x498);
      sub_00582530(this);
      puVar1 = &this->field_01D5;
      *(int *)&this->field_0x241 = piVar13[9];
      this->field_0245 = *(undefined2 *)((int)piVar13 + 0x32);
      this->field_0235 = CASE_2;
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xe);
      STT3DSprC::StopShow((STT3DSprC *)puVar1,0xc);
      thunk_FUN_004ad5e0((int)puVar1);
      iVar10 = sub_00584380(this);
      if (iVar10 != 0) goto LAB_00582958;
      (**(code **)(*piVar13 + 0xe0))(this->field_0252,&local_14,&local_10,&local_c,&local_18);
      if (local_18 == 0) {
        iVar10 = *(int *)((int)piVar13 + 0x1ed);
        goto LAB_00582c9f;
      }
      iVar10 = *(int *)((int)piVar13 + 0x1ed);
LAB_00582cbd:
      FUN_006ea3e0((void *)this->field_0211,this->field_01ED,iVar10);
    }
    break;
  default:
switchD_00582651_default:
    SVar14 = sub_00583E30(this);
    this->field_0235 = SVar14;
  }
  if ((int)this->field_0239 < 0) {
    if (this->field_024B == 0) {
      iVar10 = this->field_0247 + -2;
      this->field_0247 = iVar10;
      if (-1 < iVar10) goto LAB_00582f2d;
      this->field_0247 = 1;
      this->field_024B = 1;
LAB_00582f27:
      this->field_0231 = 0;
    }
    else if (this->field_0231 == 0) {
      if ((int)this->field_003E - (int)this->field_0038 < -10) {
        if (((*(byte *)&PTR_00802a38->field_00E4 & 3) == 0) &&
           (iVar10 = this->field_0247 + 1, this->field_0247 = iVar10, 10 < iVar10)) {
          this->field_0247 = 10;
        }
      }
      else if ((*(byte *)&PTR_00802a38->field_00E4 & 1) != 0) goto LAB_00582edf;
    }
    else {
LAB_00582edf:
      iVar10 = this->field_0247 + 1;
      this->field_0247 = iVar10;
      if (10 < iVar10) {
        this->field_0247 = 9;
        this->field_024B = 0;
        goto LAB_00582f27;
      }
    }
LAB_00582f2d:
    if (((this->field_0231 != 0) || (this->field_0247 != 4)) ||
       (iVar10 = (int)this->field_003E - (int)this->field_0038, iVar10 < -10))
    goto cf_common_exit_00582F72;
    this->field_0239 = 0x19;
    if (iVar10 == 0) goto cf_common_exit_00582F72;
    if (iVar10 < 0) {
      iVar10 = -iVar10;
    }
    iVar10 = (int)(0x19 / (longlong)iVar10);
  }
  else {
    iVar10 = this->field_0239 + -1;
  }
  this->field_0239 = iVar10;
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

