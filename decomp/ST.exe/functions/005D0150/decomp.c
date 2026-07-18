
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::CheckPlList */

void __thiscall SettMapMTy::CheckPlList(SettMapMTy *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  SettMapMTy *pSVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  undefined4 unaff_ESI;
  uint uVar10;
  uint uVar11;
  void *unaff_EDI;
  char *pcVar12;
  undefined4 local_5c;
  undefined4 local_58 [16];
  int local_18;
  uint local_14;
  uint local_10;
  SettMapMTy *local_c;
  char local_6;
  char local_5;
  
  if (*(int *)(this + 0x1f84) != 0) {
    local_5c = DAT_00858df8;
    DAT_00858df8 = &local_5c;
    local_c = this;
    iVar6 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
    pSVar3 = local_c;
    if (iVar6 == 0) {
      cVar5 = '\0';
      local_6 = '\0';
      cVar4 = cVar5;
      if (DAT_00808aaa == '\0') {
        iVar6 = *(int *)(local_c + 0x1f84);
        cVar4 = local_6;
        if (*(int *)(iVar6 + 0xc) != 0) {
          uVar10 = 0;
          local_6 = cVar5;
          if (*(int *)(iVar6 + 0xc) == 0) {
            iVar6 = 0;
            goto LAB_005d01c2;
          }
          do {
            iVar6 = *(int *)(iVar6 + 8) * uVar10 + *(int *)(iVar6 + 0x1c);
LAB_005d01c2:
            if ((iVar6 != 0) && (*(char *)(iVar6 + 4) == '\x03')) {
              if (*(byte **)(iVar6 + 0x50) != (byte *)0x0) {
                FUN_006ae110(*(byte **)(iVar6 + 0x50));
              }
              FUN_006b0c70(*(int *)(pSVar3 + 0x1f84),uVar10);
              uVar10 = uVar10 - 1;
            }
            iVar6 = *(int *)(pSVar3 + 0x1f84);
            uVar10 = uVar10 + 1;
            cVar4 = local_6;
          } while (uVar10 < *(uint *)(iVar6 + 0xc));
        }
      }
      do {
        local_6 = cVar4;
        iVar6 = *(int *)(pSVar3 + 0x1f84);
        bVar2 = false;
        uVar11 = 0;
        local_5 = '\0';
        uVar10 = *(uint *)(iVar6 + 0xc);
        if (uVar10 != 0) {
          if (uVar10 == 0) {
            pcVar7 = (char *)0x0;
            goto LAB_005d021c;
          }
          do {
            pcVar7 = (char *)(*(int *)(iVar6 + 8) * uVar11 + *(int *)(iVar6 + 0x1c));
LAB_005d021c:
            if (pcVar7 != (char *)0x0) {
              if (*pcVar7 == '\0') {
                if (pcVar7[4] == '\x01') {
                  if (local_6 == '\0') goto LAB_005d024d;
                  if (*(byte **)(pcVar7 + 0x50) != (byte *)0x0) {
                    FUN_006ae110(*(byte **)(pcVar7 + 0x50));
                  }
                  FUN_006b0c70(*(int *)(pSVar3 + 0x1f84),uVar11);
                  bVar2 = true;
                  goto LAB_005d0277;
                }
              }
              else if (((pcVar7[4] == '\x02') && (pSVar3[0x1e26] != (SettMapMTy)0xc)) &&
                      (pSVar3[0x1e26] != (SettMapMTy)0x10)) {
                local_6 = '\0';
              }
              else {
LAB_005d024d:
                local_6 = '\x01';
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar10);
          bVar2 = false;
        }
LAB_005d0277:
        cVar4 = local_6;
      } while (bVar2);
      if ((pSVar3[0x1e26] == (SettMapMTy)0xc) || (pSVar3[0x1e26] == (SettMapMTy)0x10)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        do {
          uVar11 = 1;
          local_5 = '\0';
          iVar6 = *(int *)(local_c + 0x1f84);
          uVar10 = *(uint *)(iVar6 + 0xc);
          if (1 < uVar10) {
            if (uVar10 < 2) {
              pcVar7 = (char *)0x0;
              goto LAB_005d02c3;
            }
            do {
              pcVar7 = (char *)(*(int *)(iVar6 + 8) * uVar11 + *(int *)(iVar6 + 0x1c));
LAB_005d02c3:
              if (uVar11 - 1 < uVar10) {
                pcVar8 = (char *)(*(int *)(iVar6 + 8) * (uVar11 - 1) + *(int *)(iVar6 + 0x1c));
              }
              else {
                pcVar8 = (char *)0x0;
              }
              if (((pcVar7 != (char *)0x0) && (pcVar8 != (char *)0x0)) &&
                 ((*pcVar7 != '\0' &&
                  (((*pcVar8 == '\0' && (pcVar8[4] != '\x01')) && (uVar10 < 0x18)))))) {
                thunk_FUN_005d00b0(local_c,(int)pcVar8,uVar11);
                local_5 = '\x01';
                break;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar10);
          }
        } while (local_5 != '\0');
      }
      if ((local_c[0x1e26] != (SettMapMTy)0xc) && (local_c[0x1e26] != (SettMapMTy)0x10)) {
        iVar6 = *(int *)(local_c + 0x1f84);
        uVar10 = *(uint *)(iVar6 + 0xc);
        if (uVar10 != 0) {
          if (uVar10 - 1 < uVar10) {
            pcVar7 = (char *)(*(int *)(iVar6 + 8) * (uVar10 - 1) + *(int *)(iVar6 + 0x1c));
          }
          else {
            pcVar7 = (char *)0x0;
          }
          if (((pcVar7 != (char *)0x0) && (*pcVar7 == '\0')) &&
             ((pcVar7[4] != '\x01' && (uVar10 < 0x18)))) {
            thunk_FUN_005d00b0(local_c,(int)pcVar7,uVar10);
          }
        }
      }
      do {
        uVar11 = 1;
        local_5 = '\0';
        iVar6 = *(int *)(local_c + 0x1f84);
        uVar10 = *(uint *)(iVar6 + 0xc);
        if (1 < uVar10) {
          if (uVar10 < 2) {
            pcVar7 = (char *)0x0;
            goto LAB_005d0391;
          }
          do {
            pcVar7 = (char *)(*(int *)(iVar6 + 8) * uVar11 + *(int *)(iVar6 + 0x1c));
LAB_005d0391:
            if (uVar11 - 1 < uVar10) {
              pcVar8 = (char *)(*(int *)(iVar6 + 8) * (uVar11 - 1) + *(int *)(iVar6 + 0x1c));
            }
            else {
              pcVar8 = (char *)0x0;
            }
            if (((((pcVar7 != (char *)0x0) && (pcVar8 != (char *)0x0)) && (*pcVar7 == '\0')) &&
                ((pcVar7[4] != '\x01' && (*pcVar8 == '\0')))) && (pcVar8[4] == '\x01')) {
              if (*(byte **)(pcVar8 + 0x50) != (byte *)0x0) {
                FUN_006ae110(*(byte **)(pcVar8 + 0x50));
              }
              FUN_006b0c70(*(int *)(local_c + 0x1f84),uVar11 - 1);
              local_5 = '\x01';
              break;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar10);
        }
      } while (local_5 != '\0');
      local_5 = '\0';
      local_10 = 0;
      local_18 = *(int *)(local_c + 0x1f84);
      uVar10 = *(uint *)(local_18 + 0xc);
      if (uVar10 != 0) {
        do {
          if (local_10 < uVar10) {
            pcVar7 = (char *)(*(int *)(local_18 + 8) * local_10 + *(int *)(local_18 + 0x1c));
          }
          else {
            pcVar7 = (char *)0x0;
          }
          if (((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) && (pcVar7[4] == '\x01')) {
            local_6 = '\0';
            local_14 = local_10 + 1;
            if (local_14 < uVar10) {
LAB_005d045a:
              pcVar8 = (char *)(*(int *)(local_18 + 8) * local_14 + *(int *)(local_18 + 0x1c));
              if (pcVar8 == (char *)0x0) goto LAB_005d0486;
              if (*pcVar8 == '\0') {
                if (pcVar8[4] == '\x03') {
                  local_6 = local_6 + '\x01';
                }
                if (pcVar8[4] != '\x02') goto LAB_005d0486;
                if (*(byte **)(pcVar7 + 0x50) != (byte *)0x0) {
                  FUN_006ae110(*(byte **)(pcVar7 + 0x50));
                }
                pcVar12 = pcVar7;
                for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(undefined4 *)pcVar12 = *(undefined4 *)pcVar8;
                  pcVar8 = pcVar8 + 4;
                  pcVar12 = pcVar12 + 4;
                }
                pcVar7[1] = '\0';
                *pcVar7 = '\x01';
                FUN_006b0c70(*(int *)(local_c + 0x1f84),local_14);
                local_5 = '\x01';
              }
            }
LAB_005d048e:
            if ((local_5 == '\0') && (local_6 != '\0')) {
              while( true ) {
                iVar6 = *(int *)(local_c + 0x1f84);
                uVar10 = local_10 + 1;
                if (uVar10 < *(uint *)(iVar6 + 0xc)) {
                  pcVar7 = (char *)(*(int *)(iVar6 + 8) * uVar10 + *(int *)(iVar6 + 0x1c));
                }
                else {
                  pcVar7 = (char *)0x0;
                }
                if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\0')) break;
                if (*(byte **)(pcVar7 + 0x50) != (byte *)0x0) {
                  FUN_006ae110(*(byte **)(pcVar7 + 0x50));
                }
                FUN_006b0c70(*(int *)(local_c + 0x1f84),uVar10);
              }
            }
          }
          local_10 = local_10 + 1;
          local_18 = *(int *)(local_c + 0x1f84);
          uVar10 = *(uint *)(local_18 + 0xc);
        } while (local_10 < uVar10);
      }
      DAT_00858df8 = (undefined4 *)local_5c;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_5c;
    iVar9 = FUN_006ad4d0(s_E____titans_Start_settmobj_cpp_007cd258,0x563,0,iVar6,&DAT_007a4ccc);
    if (iVar9 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar6,0,0x7cd258,0x563);
  }
  return;
LAB_005d0486:
  local_14 = local_14 + 1;
  if (uVar10 <= local_14) goto LAB_005d048e;
  goto LAB_005d045a;
}

