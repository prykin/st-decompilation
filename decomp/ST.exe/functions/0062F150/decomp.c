
void __fastcall FUN_0062f150(AnonShape_0062F150_AF81DB77 *param_1)

{
  int iVar1;
  STT3DSprC *this;
  VisibleClassTy *pVVar2;
  int *piVar3;
  int local_10;
  int local_c;
  int local_8;

  pVVar2 = g_visibleClass_00802A88;
  local_c = 0;
  if ((param_1->field_01F9 != '\0') && (g_visibleClass_00802A88 != (VisibleClassTy *)0x0)) {
    iVar1 = param_1->field_01DD;
    if ((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) {
      VisibleClassTy::sub_00558C00
                (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,param_1->field_01D5,
                 param_1->field_01D9,&local_8,&local_10);
      if (((((-1 < iVar1) && (iVar1 < 5)) && (-1 < local_8)) &&
          (((local_8 < pVVar2->field_0030 &&
            (local_10 = g_centeredOffsets5[iVar1] + local_10, -1 < local_10)) &&
           (local_10 < pVVar2->field_0034)))) &&
         ((pVVar2->field_004C != (byte *)0x0 &&
          (pVVar2->field_004C[local_8 + local_10 * pVVar2->field_0030] == 0)))) goto LAB_0062f208;
    }
    local_c = 1;
  }
LAB_0062f208:
  local_8 = 0;
  piVar3 = (int *)&param_1->field_0x1e5;
  do {
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      this = *(STT3DSprC **)(iVar1 + 0x10);
      if (*(int *)(iVar1 + 0x18) == 2) {
        if (g_playSystem_00802A38->field_00E4 % 5 == 0) {
          if (this != (STT3DSprC *)0x0) {
            STT3DSprC::sub_004ACE30
                      (this,*(uint *)(DAT_00806724 + 0x30 + (uint)*(byte *)(iVar1 + 0x34) * 4),
                       (int)*(short *)(DAT_00806724 + 0x2c));
          }
          *(char *)(*piVar3 + 0x34) = *(char *)(*piVar3 + 0x34) + '\x01';
          if (*(short *)(DAT_00806724 + 0x23) <= (short)(ushort)*(byte *)(*piVar3 + 0x34)) {
            thunk_FUN_0062f6c0(param_1,local_8);
          }
        }
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      else if (*(uint *)(iVar1 + 0x39) < g_playSystem_00802A38->field_00E4 - *(int *)(iVar1 + 0x35))
      {
        *(undefined4 *)(iVar1 + 0x18) = 2;
        *(uint *)(*piVar3 + 0x35) = g_playSystem_00802A38->field_00E4;
        *(undefined4 *)(*piVar3 + 0x39) = 10;
        *(undefined1 *)(*piVar3 + 0x34) = 0;
      }
      iVar1 = *piVar3;
      if (local_c == 0) {
        if (((iVar1 != 0) && (*(char *)(iVar1 + 0x3d) != '\0')) && (this != (STT3DSprC *)0x0)) {
          thunk_FUN_004ad430((int)this);
          *(undefined1 *)(*piVar3 + 0x3d) = 0;
        }
      }
      else if (((iVar1 != 0) && (*(char *)(iVar1 + 0x3d) == '\0')) && (this != (STT3DSprC *)0x0)) {
        thunk_FUN_004ad460(this,0);
        *(undefined1 *)(*piVar3 + 0x3d) = 1;
      }
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + 1;
  } while (local_8 < 5);
  return;
}

