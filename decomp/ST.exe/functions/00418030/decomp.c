
undefined4 __thiscall FUN_00418030(void *this,short param_1,short param_2,short param_3)

{
  bool bVar1;
  bool bVar2;
  STBoatC *this_00;
  short sVar3;
  int iVar4;
  uint uVar5;
  STWorldObject *pSVar6;
  AnonPointee_STBoatC_0097 *pAVar7;
  undefined4 uVar8;
  short *psVar9;
  int iVar10;
  STBoatC *pSVar11;
  short sVar12;
  uint uVar13;
  short sVar14;
  undefined4 unaff_ESI;
  short *psVar15;
  void *unaff_EDI;
  short *psVar16;
  int iVar17;
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
  uVar13 = (int)uVar5 >> 0x1f;
  if ((((int)((uVar5 ^ uVar13) - uVar13) < 2) &&
      (psVar16 = (short *)(int)param_2, uVar5 = (int)psVar16 - (int)local_58->field_005D,
      uVar13 = (int)uVar5 >> 0x1f, (int)((uVar5 ^ uVar13) - uVar13) < 2)) &&
     (psVar15 = (short *)(int)param_3, uVar5 = (int)psVar15 - (int)local_58->field_005F,
     uVar13 = (int)uVar5 >> 0x1f, (int)((uVar5 ^ uVar13) - uVar13) < 2)) {
    if (((param_1 < 0) || (SHORT_007fb240 <= param_1)) ||
       ((param_2 < 0 ||
        (((SHORT_007fb242 <= param_2 || (param_3 < 0)) || (SHORT_007fb244 <= param_3)))))) {
      pSVar6 = (STWorldObject *)0x0;
    }
    else {
      pSVar6 = g_worldCells
               [(int)((int)local_2c +
                     (int)SHORT_007fb240 * (int)psVar16 + (int)SHORT_007fb246 * (int)psVar15)].
               objects[(byte)local_58->field_008E];
    }
    if (pSVar6 == (STWorldObject *)0x0) {
      *(undefined4 *)&local_58->field_0x9b = 2;
      pAVar7 = (AnonPointee_STBoatC_0097 *)Library::DKW::LIB::FUN_006aac10(0x10);
      this_00->field_0097 = pAVar7;
      pAVar7->field_0008 = param_1;
      this_00->field_0097->field_000A = param_2;
      this_00->field_0097->field_000C = param_3;
      uVar8 = FUN_006a5eb0((int)this_00->field_005B,(int)this_00->field_005D,
                           (int)this_00->field_005F,(int)local_2c,(int)psVar16,(int)psVar15);
      *(short *)&this_00->field_0097->field_0xe = (short)uVar8;
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
  iVar17 = 2;
  if (sVar3 < 2) {
    iVar17 = (int)sVar3;
  }
  psVar16 = (short *)(sVar3 + 2);
  local_4c = (short *)-iVar17;
  if ((int)psVar16 < (int)SHORT_007fb27c) {
    local_24 = (short *)0x2;
  }
  else {
    local_24 = (short *)(((int)SHORT_007fb27c - (int)sVar3) + -1);
  }
  local_c = (short *)0x0;
  local_1c = local_4c;
  if (-(int)local_24 == iVar17 || (int)local_4c < (int)local_24) {
    local_20 = local_54 + (iVar17 * -7 + local_34) * 7;
    iVar17 = local_34;
    psVar15 = local_54;
    psVar9 = local_20;
    do {
      while (local_48 = psVar9, local_30 = iVar17, local_30 <= local_3c) {
        local_10 = local_38;
        if ((int)local_38 <= local_28) {
          local_40 = local_48 + -iVar4;
          do {
            sVar12 = this_00->field_004B + (short)local_1c;
            sVar3 = this_00->field_0047 + (short)local_10;
            local_50 = (short *)(CONCAT22((short)((uint)psVar15 >> 0x10),this_00->field_0049) +
                                local_30);
            sVar14 = (short)local_50;
            if (((sVar3 < 0) || (SHORT_007fb240 <= sVar3)) ||
               (((sVar14 < 0 || ((SHORT_007fb242 <= sVar14 || (sVar12 < 0)))) ||
                (SHORT_007fb244 <= sVar12)))) {
              pSVar11 = (STBoatC *)0x0;
            }
            else {
              pSVar11 = (STBoatC *)
                        g_worldCells
                        [(int)sVar12 * (int)SHORT_007fb246 + (int)sVar14 * (int)SHORT_007fb240 +
                         (int)sVar3].objects[0];
            }
            psVar15 = local_50;
            if (pSVar11 == (STBoatC *)0x0) {
              if (this_00->field_008E != '\0') {
                if (((((sVar3 < 0) || (SHORT_007fb240 <= sVar3)) || (sVar14 < 0)) ||
                    ((SHORT_007fb242 <= sVar14 || (sVar12 < 0)))) || (SHORT_007fb244 <= sVar12)) {
                  pSVar11 = (STBoatC *)0x0;
                }
                else {
                  pSVar11 = (STBoatC *)
                            g_worldCells
                            [(int)sVar12 * (int)SHORT_007fb246 + (int)sVar14 * (int)SHORT_007fb240 +
                             (int)sVar3].objects[1];
                  psVar15 = (short *)(int)SHORT_007fb240;
                }
              }
              if (pSVar11 != (STBoatC *)0x0) goto LAB_004183b8;
            }
            else {
LAB_004183b8:
              if ((pSVar11 != this_00) &&
                 (((psVar15 = local_1c,
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
        psVar9 = local_48 + 7;
        iVar17 = local_30 + 1;
      }
      local_20 = local_20 + 0x31;
      local_1c = (short *)((int)local_1c + 1);
      psVar16 = local_38;
      iVar17 = local_34;
      psVar15 = local_24;
      psVar9 = local_20;
    } while ((int)local_1c <= (int)local_24);
  }
  if (local_c == (short *)0x0) {
    FUN_006ab060(&local_14);
    local_44 = (short *)0x0;
  }
  psVar15 = local_14;
  local_50 = (short *)(int)param_2;
  psVar9 = local_44;
  local_44 = (short *)(int)param_3;
  pAVar7 = (AnonPointee_STBoatC_0097 *)
           Library::DKW::WAY::FUN_006ae7d0
                     ((int)DAT_007fb280,(int)SHORT_007fb278,(short *)(int)SHORT_007fb27a,
                      (short *)(int)SHORT_007fb27c,(short *)(int)this_00->field_0047,
                      (short *)(int)this_00->field_0049,(short *)(int)this_00->field_004B,local_2c,
                      local_50,(short *)(int)param_3,(int *)&this_00->field_0x9b,
                      (undefined4 *)local_14,psVar9);
  this_00->field_0097 = pAVar7;
  if (pAVar7 == (AnonPointee_STBoatC_0097 *)0x0) {
    iVar4 = (int)SHORT_007fb27e;
    iVar17 = (int)SHORT_007fb27c;
    psVar15 = DAT_007fb280;
    psVar16 = DAT_007fb238;
    for (uVar5 = (iVar4 * iVar17 & 0x7fffffffU) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)psVar16 = *(undefined4 *)psVar15;
      psVar15 = psVar15 + 2;
      psVar16 = psVar16 + 2;
    }
    for (uVar5 = iVar4 * iVar17 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)psVar16 = (char)*psVar15;
      psVar15 = (short *)((int)psVar15 + 1);
      psVar16 = (short *)((int)psVar16 + 1);
    }
    if ((local_c != (short *)0x0) &&
       (local_1c = local_4c, psVar15 = local_4c, (int)local_4c <= (int)local_24)) {
      local_c = local_54 + ((int)local_4c * 7 + local_34) * 7;
      do {
        local_10 = DAT_007fb238 +
                   (int)((int)this_00->field_004B + (int)psVar15) * (int)SHORT_007fb27e +
                   (this_00->field_0049 + local_34) * (int)SHORT_007fb278 + (int)this_00->field_0047
        ;
        if (local_34 <= local_3c) {
          iVar4 = (local_3c - local_34) + 1;
          psVar16 = local_c;
          do {
            if ((int)local_38 <= local_28) {
              psVar9 = psVar16 + (int)local_38;
              iVar17 = (local_28 - (int)local_38) + 1;
              do {
                if (*psVar9 < 0) {
                  *(short *)(((int)local_10 - (int)psVar16) + (int)psVar9) = *psVar9;
                }
                psVar9 = psVar9 + 1;
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
            }
            psVar16 = psVar16 + 7;
            iVar4 = iVar4 + -1;
            local_10 = local_10 + SHORT_007fb278;
          } while (iVar4 != 0);
          local_20 = (short *)0x0;
        }
        psVar15 = (short *)((int)psVar15 + 1);
        psVar16 = local_c + 0x31;
        local_1c = psVar15;
        local_c = psVar16;
      } while ((int)psVar15 <= (int)local_24);
    }
    pAVar7 = (AnonPointee_STBoatC_0097 *)
             Library::DKW::WAY::FUN_006afba0
                       ((int)DAT_007fb238,(int)SHORT_007fb230,(short *)(int)SHORT_007fb232,
                        (short *)(int)DAT_007fb234,(short *)(int)this_00->field_0047,
                        (short *)(int)this_00->field_0049,(short *)(int)this_00->field_004B,local_2c
                        ,local_50,local_44,(int *)&this_00->field_0x9b,0);
    this_00->field_0097 = pAVar7;
  }
  FUN_006ab060(&local_14);
LAB_0041862b:
  g_currentExceptionFrame = local_9c.previous;
  pAVar7 = this_00->field_0097;
  if (pAVar7 == (AnonPointee_STBoatC_0097 *)0x0) {
    return 2;
  }
  this_00->field_00E3 = 1;
  this_00->field_00D3 = 1;
  iVar4 = CONCAT22((short)((uint)psVar15 >> 0x10),pAVar7->field_0008 * 0xc9) + 100;
  sVar3 = (short)iVar4;
  uVar5 = (int)sVar3 - (int)this_00->field_0041;
  iVar17 = CONCAT22((short)((uint)psVar16 >> 0x10),pAVar7->field_000A * 0xc9) + 100;
  uVar13 = (int)uVar5 >> 0x1f;
  local_c = (short *)(CONCAT22((short)((uint)local_9c.previous >> 0x10),pAVar7->field_000C * 200) +
                     100);
  local_54 = (short *)((uVar5 ^ uVar13) - uVar13);
  local_15 = 0;
  sVar12 = (short)iVar17;
  uVar5 = (int)sVar12 - (int)this_00->field_0043;
  local_5 = false;
  uVar13 = (int)uVar5 >> 0x1f;
  local_4c = (short *)((uVar5 ^ uVar13) - uVar13);
  uVar5 = (int)(short)local_c - (int)this_00->field_0045;
  uVar13 = (int)uVar5 >> 0x1f;
  local_10 = (short *)((uVar5 ^ uVar13) - uVar13);
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
  iVar10 = STJellyGunC::sub_00415B30
                     ((STJellyGunC *)this_00,this_00->field_0041,this_00->field_0043,
                      this_00->field_0045,sVar3,sVar12,(short)local_c,(byte)local_14);
  if (iVar10 != 0) {
    return 0xffffffff;
  }
  if ((*(short *)&this_00->field_0x8c != 1) &&
     ((this_00->field_0041 != sVar3 || (this_00->field_0043 != sVar12)))) {
    sVar3 = (*this_00->vtable->vfunc_10)
                      (this_00->field_0041,this_00->field_0043,this_00->field_0045,iVar4,iVar17,
                       local_c);
    uVar5 = STBoatC::sub_004176C0(this_00,sVar3);
    if ((short)uVar5 != this_00->field_006C) {
      thunk_FUN_00417740(this_00,this_00->field_006C,(short)uVar5);
    }
  }
  return 0;
}

