
undefined4 __thiscall FUN_00418030(void *this,short param_1,short param_2,short param_3)

{
  bool bVar1;
  bool bVar2;
  STBoatC *this_00;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  short *psVar8;
  STBoatC *pSVar9;
  short sVar10;
  uint uVar11;
  short sVar12;
  undefined4 unaff_ESI;
  short *psVar13;
  int iVar14;
  void *unaff_EDI;
  short *psVar15;
  int iVar16;
  InternalExceptionFrame local_9c;
  STBoatC *local_58;
  short *local_54;
  short *local_50;
  short *local_4c;
  short *local_48;
  short *local_44;
  short *local_40;
  int local_3c;
  short *local_38;
  int local_34;
  int local_30;
  short *local_2c;
  int local_28;
  short *local_24;
  short *local_20;
  short *local_1c;
  undefined1 local_15;
  short *local_14;
  short *local_10;
  short *local_c;
  bool local_5;
  
  local_58 = this;
  thunk_FUN_004167a0(this);
  if (((param_1 == *(short *)((int)this + 0x47)) && (param_2 == *(short *)((int)this + 0x49))) &&
     (param_3 == *(short *)((int)this + 0x4b))) {
    return 1;
  }
  local_9c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_9c;
  iVar4 = Library::MSVCRT::__setjmp3(local_9c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_58;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_9c.previous;
    return 0xffffffff;
  }
  local_2c = (short *)(int)param_1;
  uVar5 = (int)local_2c - (int)local_58->field_005B;
  uVar11 = (int)uVar5 >> 0x1f;
  if ((((int)((uVar5 ^ uVar11) - uVar11) < 2) &&
      (psVar15 = (short *)(int)param_2, uVar5 = (int)psVar15 - (int)local_58->field_005D,
      uVar11 = (int)uVar5 >> 0x1f, (int)((uVar5 ^ uVar11) - uVar11) < 2)) &&
     (psVar13 = (short *)(int)param_3, uVar5 = (int)psVar13 - (int)local_58->field_005F,
     uVar11 = (int)uVar5 >> 0x1f, (int)((uVar5 ^ uVar11) - uVar11) < 2)) {
    if (((param_1 < 0) || (SHORT_007fb240 <= param_1)) ||
       ((param_2 < 0 ||
        (((SHORT_007fb242 <= param_2 || (param_3 < 0)) || (SHORT_007fb244 <= param_3)))))) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(DAT_007fb248 +
                      ((uint)(byte)local_58->field_008E +
                      (int)((int)local_2c +
                           (int)SHORT_007fb240 * (int)psVar15 + (int)SHORT_007fb246 * (int)psVar13)
                      * 2) * 4);
    }
    if (iVar4 == 0) {
      *(undefined4 *)&local_58->field_0x9b = 2;
      puVar6 = Library::DKW::LIB::FUN_006aac10(0x10);
      this_00->field_0097 = puVar6;
      *(short *)(puVar6 + 2) = param_1;
      *(short *)(this_00->field_0097 + 10) = param_2;
      *(short *)(this_00->field_0097 + 0xc) = param_3;
      uVar7 = FUN_006a5eb0((int)this_00->field_005B,(int)this_00->field_005D,
                           (int)this_00->field_005F,(int)local_2c,(int)psVar15,(int)psVar13);
      *(short *)(this_00->field_0097 + 0xe) = (short)uVar7;
      goto LAB_0041862b;
    }
  }
  local_44 = (short *)0x3;
  local_14 = (short *)Library::DKW::LIB::FUN_006aac10(0x2ae);
  sVar3 = this_00->field_0047;
  local_54 = local_14 + 0xab;
  iVar4 = 2;
  if (sVar3 < 2) {
    iVar4 = (int)sVar3;
  }
  local_38 = (short *)-iVar4;
  if (sVar3 + 2 < (int)SHORT_007fb278) {
    local_28 = 2;
  }
  else {
    local_28 = ((int)SHORT_007fb278 - (int)sVar3) + -1;
  }
  sVar3 = this_00->field_0049;
  local_34 = 2;
  if (sVar3 < 2) {
    local_34 = (int)sVar3;
  }
  local_34 = -local_34;
  if (sVar3 + 2 < (int)SHORT_007fb27a) {
    local_3c = 2;
  }
  else {
    local_3c = ((int)SHORT_007fb27a - (int)sVar3) + -1;
  }
  sVar3 = this_00->field_004B;
  iVar14 = 2;
  if (sVar3 < 2) {
    iVar14 = (int)sVar3;
  }
  psVar15 = (short *)(sVar3 + 2);
  local_4c = (short *)-iVar14;
  if ((int)psVar15 < (int)SHORT_007fb27c) {
    local_24 = (short *)0x2;
  }
  else {
    local_24 = (short *)(((int)SHORT_007fb27c - (int)sVar3) + -1);
  }
  local_c = (short *)0x0;
  local_1c = local_4c;
  if (-(int)local_24 == iVar14 || (int)local_4c < (int)local_24) {
    local_20 = local_54 + (iVar14 * -7 + local_34) * 7;
    iVar14 = local_34;
    psVar13 = local_54;
    psVar8 = local_20;
    do {
      while (local_48 = psVar8, local_30 = iVar14, local_30 <= local_3c) {
        local_10 = local_38;
        if ((int)local_38 <= local_28) {
          local_40 = local_48 + -iVar4;
          do {
            sVar10 = this_00->field_004B + (short)local_1c;
            sVar3 = this_00->field_0047 + (short)local_10;
            local_50 = (short *)(CONCAT22((short)((uint)psVar13 >> 0x10),this_00->field_0049) +
                                local_30);
            sVar12 = (short)local_50;
            if (((sVar3 < 0) || (SHORT_007fb240 <= sVar3)) ||
               (((sVar12 < 0 || ((SHORT_007fb242 <= sVar12 || (sVar10 < 0)))) ||
                (SHORT_007fb244 <= sVar10)))) {
              pSVar9 = (STBoatC *)0x0;
            }
            else {
              pSVar9 = *(STBoatC **)
                        (DAT_007fb248 +
                        ((int)sVar10 * (int)SHORT_007fb246 + (int)sVar12 * (int)SHORT_007fb240 +
                        (int)sVar3) * 8);
            }
            psVar13 = local_50;
            if (pSVar9 == (STBoatC *)0x0) {
              if (this_00->field_008E != '\0') {
                if (((((sVar3 < 0) || (SHORT_007fb240 <= sVar3)) || (sVar12 < 0)) ||
                    ((SHORT_007fb242 <= sVar12 || (sVar10 < 0)))) || (SHORT_007fb244 <= sVar10)) {
                  pSVar9 = (STBoatC *)0x0;
                }
                else {
                  pSVar9 = *(STBoatC **)
                            (DAT_007fb248 + 4 +
                            ((int)sVar10 * (int)SHORT_007fb246 + (int)sVar12 * (int)SHORT_007fb240 +
                            (int)sVar3) * 8);
                  psVar13 = (short *)(int)SHORT_007fb240;
                }
              }
              if (pSVar9 != (STBoatC *)0x0) goto LAB_004183b8;
            }
            else {
LAB_004183b8:
              if ((pSVar9 != this_00) &&
                 (((psVar13 = local_1c,
                   (undefined1 *)((int)this_00->field_004B + (int)local_1c) !=
                   (undefined1 *)(int)param_3 || (this_00->field_0049 + local_30 != (int)param_2))
                  || ((short *)((int)this_00->field_0047 + (int)local_10) != local_2c)))) {
                local_c = (short *)0x1;
                *local_40 = -3;
              }
            }
            local_10 = (short *)((int)local_10 + 1);
            local_40 = local_40 + 1;
          } while ((int)local_10 <= local_28);
        }
        psVar8 = local_48 + 7;
        iVar14 = local_30 + 1;
      }
      local_20 = local_20 + 0x31;
      local_1c = (short *)((int)local_1c + 1);
      psVar15 = local_38;
      iVar14 = local_34;
      psVar13 = local_24;
      psVar8 = local_20;
    } while ((int)local_1c <= (int)local_24);
  }
  if (local_c == (short *)0x0) {
    FUN_006ab060(&local_14);
    local_44 = (short *)0x0;
  }
  psVar13 = local_14;
  local_50 = (short *)(int)param_2;
  psVar8 = local_44;
  local_44 = (short *)(int)param_3;
  psVar8 = Library::DKW::WAY::FUN_006ae7d0
                     ((int)DAT_007fb280,(int)SHORT_007fb278,(short *)(int)SHORT_007fb27a,
                      (short *)(int)SHORT_007fb27c,(short *)(int)this_00->field_0047,
                      (short *)(int)this_00->field_0049,(short *)(int)this_00->field_004B,local_2c,
                      local_50,(short *)(int)param_3,(int *)&this_00->field_0x9b,
                      (undefined4 *)local_14,psVar8);
  this_00->field_0097 = psVar8;
  if (psVar8 == (short *)0x0) {
    iVar4 = (int)SHORT_007fb27e;
    iVar14 = (int)SHORT_007fb27c;
    psVar13 = DAT_007fb280;
    psVar15 = DAT_007fb238;
    for (uVar5 = (iVar4 * iVar14 & 0x7fffffffU) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)psVar15 = *(undefined4 *)psVar13;
      psVar13 = psVar13 + 2;
      psVar15 = psVar15 + 2;
    }
    for (uVar5 = iVar4 * iVar14 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)psVar15 = (char)*psVar13;
      psVar13 = (short *)((int)psVar13 + 1);
      psVar15 = (short *)((int)psVar15 + 1);
    }
    if ((local_c != (short *)0x0) &&
       (local_1c = local_4c, psVar13 = local_4c, (int)local_4c <= (int)local_24)) {
      local_c = local_54 + ((int)local_4c * 7 + local_34) * 7;
      do {
        local_10 = DAT_007fb238 +
                   (int)((int)this_00->field_004B + (int)psVar13) * (int)SHORT_007fb27e +
                   (this_00->field_0049 + local_34) * (int)SHORT_007fb278 + (int)this_00->field_0047
        ;
        if (local_34 <= local_3c) {
          iVar4 = (local_3c - local_34) + 1;
          psVar15 = local_c;
          do {
            if ((int)local_38 <= local_28) {
              psVar8 = psVar15 + (int)local_38;
              iVar14 = (local_28 - (int)local_38) + 1;
              do {
                if (*psVar8 < 0) {
                  *(short *)(((int)local_10 - (int)psVar15) + (int)psVar8) = *psVar8;
                }
                psVar8 = psVar8 + 1;
                iVar14 = iVar14 + -1;
              } while (iVar14 != 0);
            }
            psVar15 = psVar15 + 7;
            iVar4 = iVar4 + -1;
            local_10 = local_10 + SHORT_007fb278;
          } while (iVar4 != 0);
          local_20 = (short *)0x0;
        }
        psVar13 = (short *)((int)psVar13 + 1);
        psVar15 = local_c + 0x31;
        local_1c = psVar13;
        local_c = psVar15;
      } while ((int)psVar13 <= (int)local_24);
    }
    psVar8 = Library::DKW::WAY::FUN_006afba0
                       ((int)DAT_007fb238,(int)SHORT_007fb230,(short *)(int)SHORT_007fb232,
                        (short *)(int)DAT_007fb234,(short *)(int)this_00->field_0047,
                        (short *)(int)this_00->field_0049,(short *)(int)this_00->field_004B,local_2c
                        ,local_50,local_44,(int *)&this_00->field_0x9b,0);
    this_00->field_0097 = psVar8;
  }
  FUN_006ab060(&local_14);
LAB_0041862b:
  g_currentExceptionFrame = local_9c.previous;
  iVar4 = this_00->field_0097;
  if (iVar4 == 0) {
    return 2;
  }
  this_00->field_00E3 = 1;
  this_00->field_00D3 = 1;
  iVar14 = CONCAT22((short)((uint)psVar13 >> 0x10),*(short *)(iVar4 + 8) * 0xc9) + 100;
  sVar3 = (short)iVar14;
  uVar5 = (int)sVar3 - (int)this_00->field_0041;
  iVar16 = CONCAT22((short)((uint)psVar15 >> 0x10),*(short *)(iVar4 + 10) * 0xc9) + 100;
  uVar11 = (int)uVar5 >> 0x1f;
  local_c = (short *)(CONCAT22((short)((uint)local_9c.previous >> 0x10),
                               *(short *)(iVar4 + 0xc) * 200) + 100);
  local_54 = (short *)((uVar5 ^ uVar11) - uVar11);
  local_15 = 0;
  sVar10 = (short)iVar16;
  uVar5 = (int)sVar10 - (int)this_00->field_0043;
  local_5 = false;
  uVar11 = (int)uVar5 >> 0x1f;
  local_4c = (short *)((uVar5 ^ uVar11) - uVar11);
  uVar5 = (int)(short)local_c - (int)this_00->field_0045;
  uVar11 = (int)uVar5 >> 0x1f;
  local_10 = (short *)((uVar5 ^ uVar11) - uVar11);
  if (local_10 == (short *)0x0) {
    local_14 = (short *)CONCAT31(local_14._1_3_,this_00->field_0061);
  }
  else {
    bVar1 = 2 < (int)local_10 / (int)local_54;
    local_5 = local_54 == (short *)0x0 || bVar1;
    if ((local_4c == (short *)0x0) || (2 < (int)local_10 / (int)local_4c)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((local_54 == (short *)0x0 || bVar1) && (bVar2)) {
      local_14 = (short *)CONCAT31(local_14._1_3_,this_00->field_0062);
    }
    else {
      local_14 = (short *)CONCAT31(local_14._1_3_,this_00->field_0061);
    }
  }
  iVar4 = STJellyGunC::sub_00415B30
                    ((STJellyGunC *)this_00,this_00->field_0041,this_00->field_0043,
                     this_00->field_0045,sVar3,sVar10,(short)local_c,(byte)local_14);
  if (iVar4 != 0) {
    return 0xffffffff;
  }
  if ((*(short *)&this_00->field_0x8c != 1) &&
     ((this_00->field_0041 != sVar3 || (this_00->field_0043 != sVar10)))) {
    sVar3 = (*this_00->vtable->vfunc_10)
                      (this_00->field_0041,this_00->field_0043,this_00->field_0045,iVar14,iVar16,
                       local_c);
    uVar5 = STBoatC::sub_004176C0(this_00,sVar3);
    if ((short)uVar5 != this_00->field_006C) {
      thunk_FUN_00417740(this_00,this_00->field_006C,(short)uVar5);
    }
  }
  return 0;
}

