
/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=15;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STBHEShellC::sub_005F4FA0(STBHEShellC *this)

{
  DArrayTy *pDVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  short sVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  longlong lVar10;
  int local_20;
  short local_18;
  short local_14;
  int local_c;
  int local_8;

  local_c = 0;
  bVar4 = false;
  iVar5 = 0;
  if ((this->field_0169 != (DArrayTy *)0x0) && (local_8 = 0, 0 < this->field_010D)) {
    do {
      uVar8 = local_8 * this->field_0109;
      if (g_playSystem_00802A38->field_00E4 < (uint)(&this->field_0159)[local_8]) {
        local_c = 1;
      }
      else {
        (&this->field_0139)[local_8] = (&this->field_0139)[local_8] + this->field_0125;
        iVar5 = (&this->field_0149)[local_8] + this->field_0121;
        (&this->field_0149)[local_8] = iVar5;
        if ((local_8 == 0) && (iVar5 = iVar5 / 200, iVar5 != this->field_0129)) {
          this->field_0129 = iVar5;
          thunk_FUN_005f5700(this,iVar5,this->field_0139);
        }
        local_20 = 0;
        if (0 < this->field_0109) {
          do {
            pDVar1 = this->field_0169;
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar8) (runtime stride) */
            if (((uVar8 < pDVar1->count) &&
                (pcVar9 = (char *)(pDVar1->elementSize * uVar8 + (int)pDVar1->data),
                pcVar9 != (char *)0x0)) && (*pcVar9 != '\x02')) {
              *(int *)(pcVar9 + 2) =
                   (*(int *)(pcVar9 + 0x12) * (&this->field_0139)[local_8]) / 10000 +
                   this->field_0111;
              iVar5 = *(int *)(pcVar9 + 2);
              *(int *)(pcVar9 + 6) =
                   (*(int *)(pcVar9 + 0x16) * (&this->field_0139)[local_8]) / 10000 +
                   this->field_0115;
              iVar2 = (&this->field_0149)[local_8];
              *(int *)(pcVar9 + 10) = iVar2;
              sVar6 = (short)(iVar5 >> 0x1f);
              if (iVar5 < 0) {
                local_18 = (((short)(iVar5 / 0xc9) + sVar6) -
                           (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
              }
              else {
                local_18 = ((short)(iVar5 / 0xc9) + sVar6) -
                           (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
              }
              iVar3 = *(int *)(pcVar9 + 6);
              sVar6 = (short)(iVar3 >> 0x1f);
              if (iVar3 < 0) {
                local_14 = (((short)(iVar3 / 0xc9) + sVar6) -
                           (short)((longlong)iVar3 * 0x28c1979 >> 0x3f)) + -1;
              }
              else {
                local_14 = ((short)(iVar3 / 0xc9) + sVar6) -
                           (short)((longlong)iVar3 * 0x28c1979 >> 0x3f);
              }
              sVar6 = (short)(iVar2 >> 0x1f);
              if (iVar2 < 0) {
                sVar6 = (((short)(iVar2 / 200) + sVar6) -
                        (short)((longlong)iVar2 * 0x51eb851f >> 0x3f)) + -1;
              }
              else {
                sVar6 = ((short)(iVar2 / 200) + sVar6) -
                        (short)((longlong)iVar2 * 0x51eb851f >> 0x3f);
              }
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              if ((((iVar5 < 0) || (g_worldGrid.sizeX <= iVar5)) ||
                  ((*(int *)(pcVar9 + 6) < 0 ||
                   (((int)g_worldGrid.sizeY <= *(int *)(pcVar9 + 6) || (iVar2 < 0)))))) ||
                 (iVar5 = thunk_FUN_004961b0(local_18,local_14,sVar6), uVar7 = extraout_EDX,
                 iVar5 == 0)) {
                FUN_006e3210(PTR_00807598,(*(int *)(pcVar9 + 2) * PTR_00807598->field_0380) / 0xc9,
                             (*(int *)(pcVar9 + 6) * PTR_00807598->field_0380) / 0xc9);
                lVar10 = Library::MSVCRT::__ftol();
                uVar7 = (undefined4)((ulonglong)lVar10 >> 0x20);
                if (*(int *)(pcVar9 + 10) < (int)(short)lVar10) {
                  *pcVar9 = '\x02';
                  if (-1 < (int)*(uint *)(pcVar9 + 0x1f)) {
                    FUN_006e8ba0(PTR_00807598,*(uint *)(pcVar9 + 0x1f));
                    pcVar9[0x1f] = -1;
                    pcVar9[0x20] = -1;
                    pcVar9[0x21] = -1;
                    pcVar9[0x22] = -1;
                  }
                  goto LAB_005f528b;
                }
              }
              if (*pcVar9 == '\0') {
                if ((*(int *)(pcVar9 + 0x1f) == -1) && (this->field_0103 != '\0')) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  thunk_FUN_005f4a30((int)pcVar9,CONCAT31((int3)((uint)uVar7 >> 8),pcVar9[1]),0);
                }
                *pcVar9 = '\x01';
              }
              if ((local_c == 0) && (*pcVar9 != '\x02')) {
                local_c = 1;
              }
              if (((local_8 == 0) && (!bVar4)) && (*pcVar9 != '\x02')) {
                bVar4 = true;
              }
            }
LAB_005f528b:
            local_20 = local_20 + 1;
            uVar8 = uVar8 + 1;
          } while (local_20 < this->field_0109);
        }
      }
      local_8 = local_8 + 1;
      iVar5 = local_c;
    } while (local_8 < this->field_010D);
  }
  return iVar5;
}

